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
//         Ë propos de l'auteur...                                     *
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
routine_getHighBound (C_Lexique & inLexique,
                      const GGS_luint & inPowerOfTwo,
                      GGS_luint & outResult
                      COMMA_LOCATION_ARGS) {
  if (inPowerOfTwo.uintValue () == 0) {
    inPowerOfTwo.signalSemanticError (inLexique, "the dimension must be >0" COMMA_THERE) ;
  }
  outResult.defineAttribute ((1UL << inPowerOfTwo.uintValue ()) - 1UL, inLexique) ;
}

//---------------------------------------------------------------------*

void
routine_verifyBoundsAndComputeDimension (C_Lexique & inLexique,
                                         const GGS_luint & inLowBound,
                                         const GGS_luint & inHighBound,
                                         GGS_luint & outDimension
                                         COMMA_LOCATION_ARGS) {
  if (inLowBound.uintValue () >= inHighBound.uintValue ()) {
    inHighBound.signalSemanticError (inLexique, "the high bound is lower or equal to the low bound" COMMA_THERE) ;
  }
  uint32 bitCount = 0 ;
  uint32 high = inHighBound.uintValue () ;
  while (high != 0) {
    high >>= 1 ;
    bitCount ++ ;
  }
  outDimension.defineAttribute (bitCount, inLexique) ;
}

//---------------------------------------------------------------------*

void
routine_verifierDimensionUn (C_Lexique & inLexique,
                             GGS_luint valeur,
                             GGS_location inErrorLocation
                             COMMA_LOCATION_ARGS) {
  if (valeur._isBuilt () && inErrorLocation._isBuilt () && (valeur.uintValue () != 1)) {
    inErrorLocation.signalSemanticError (inLexique, "This variable is not a boolean" COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------*

void
routine_verifierDimensionValeurCorrecte (C_Lexique & inLexique,
                                         GGS_luint dimension,
                                         GGS_luint valeur
                                         COMMA_LOCATION_ARGS) {
  if (valeur._isBuilt () && dimension._isBuilt ()) {
  //--- Valeur max
    const uint32 dim = dimension.uintValue () ;
    uint32 valeurMax = 1 ;
    for (unsigned short i=1 ; i <= dim ; i++) {
      valeurMax <<= 1 ;
    }
    if (valeur.uintValue () >= valeurMax) {
      C_String erreur ;
      erreur << "la valeur maximum est " ;
      erreur << (valeurMax - 1) ;
      valeur.signalSemanticError (inLexique, erreur COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------*

void
routine_verifierMemesDimensions (C_Lexique & inLexique, 
                                 GGS_luint dimensionGauche,
                                 GGS_luint dimensionDroite
                                 COMMA_LOCATION_ARGS) {
  if (dimensionGauche._isBuilt () && dimensionDroite._isBuilt ()) {
    if (dimensionGauche.uintValue () != dimensionDroite.uintValue ()) {
      C_String erreur ;
      erreur << "la dimension de la variable droite ("
             << dimensionDroite.uintValue ()
             << ") est differente de celle de la variable gauche ("
             << dimensionGauche.uintValue ()
             << ")" ;
      dimensionDroite.signalSemanticError (inLexique, erreur COMMA_THERE) ;
    }  
  }
}

//---------------------------------------------------------------------*
