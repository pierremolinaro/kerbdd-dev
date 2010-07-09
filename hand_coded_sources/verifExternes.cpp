//---------------------------------------------------------------------*
//                                                                     *
//        Verification semantiques complementaires                     *
//                                                                     *
//---------------------------------------------------------------------*
//                                                                     *
//         Versions successives :                                      *
//                                                                     *
//---------------------------------------------------------------------*
//                                                                     *
//         A propos de l'auteur...                                     *
//                                                                     *
//     Pierre Molinaro                                                 *
//     IRCyN (Institut de Recherche en Cybernetique de Nantes)         *
//     Ecole Centrale de Nantes                                        *
//     BP 92101                                                        *
//     44321 Nantes Cedex 3                                            *
//                                                                     *
// Adresse electronique : molinaro@ircyn.ec-nantes.fr                  *
//                                                                     *
//---------------------------------------------------------------------*

#include "syntaxeBDD.h"

//---------------------------------------------------------------------*

void
routine_getHighBound (C_Compiler & inLexique,
                      const GGS_luint inPowerOfTwo,
                      GGS_luint & outResult
                      COMMA_LOCATION_ARGS) {
  if (inPowerOfTwo.uintValue () == 0) {
    inPowerOfTwo.signalSemanticError (inLexique, "the dimension must be >0" COMMA_THERE) ;
  }
  outResult = GGS_luint (inLexique, (1 << inPowerOfTwo.uintValue ()) - 1) ;
}

//---------------------------------------------------------------------*

void
routine_verifyBoundsAndComputeDimension (C_Compiler & inLexique,
                                         const GGS_luint inLowBound,
                                         const GGS_luint inHighBound,
                                         GGS_luint & outDimension
                                         COMMA_LOCATION_ARGS) {
  if (inLowBound.uintValue () >= inHighBound.uintValue ()) {
    inHighBound.signalSemanticError (inLexique, "the high bound is lower or equal to the low bound" COMMA_THERE) ;
  }
  PMUInt32 bitCount = 0 ;
  PMUInt32 high = inHighBound.uintValue () ;
  while (high != 0) {
    high >>= 1 ;
    bitCount ++ ;
  }
  outDimension = GGS_luint (inLexique, bitCount) ;
}

//---------------------------------------------------------------------*

void
routine_verifierDimensionUn (C_Compiler & inLexique,
                             GGS_luint valeur,
                             GGS_location inErrorLocation
                             COMMA_LOCATION_ARGS) {
  if (valeur.isBuilt () && inErrorLocation.isBuilt () && (valeur.uintValue () != 1)) {
    inErrorLocation.signalSemanticError (inLexique, "This variable is not a boolean" COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------*

void
routine_verifierDimensionValeurCorrecte (C_Compiler & inLexique,
                                         GGS_luint dimension,
                                         GGS_luint valeur
                                         COMMA_LOCATION_ARGS) {
  if (valeur.isBuilt () && dimension.isBuilt ()) {
  //--- Valeur max
    const PMUInt32 dim = dimension.uintValue () ;
    PMUInt32 valeurMax = 1 ;
    for (unsigned short i=1 ; i <= dim ; i++) {
      valeurMax <<= 1 ;
    }
    if (valeur.uintValue () >= valeurMax) {
      C_String erreur ;
      erreur << "la valeur maximum est " ;
      erreur << cStringWithUnsigned (valeurMax - 1) ;
      valeur.signalSemanticError (inLexique, erreur COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------*

void
routine_verifierMemesDimensions (C_Compiler & inLexique, 
                                 GGS_luint dimensionGauche,
                                 GGS_luint dimensionDroite
                                 COMMA_LOCATION_ARGS) {
  if (dimensionGauche.isBuilt () && dimensionDroite.isBuilt ()) {
    if (dimensionGauche.uintValue () != dimensionDroite.uintValue ()) {
      C_String erreur ;
      erreur << "la dimension de la variable droite ("
             << cStringWithUnsigned (dimensionDroite.uintValue ())
             << ") est differente de celle de la variable gauche ("
             << cStringWithUnsigned (dimensionGauche.uintValue ())
             << ")" ;
      dimensionDroite.signalSemanticError (inLexique, erreur COMMA_THERE) ;
    }  
  }
}

//---------------------------------------------------------------------*
