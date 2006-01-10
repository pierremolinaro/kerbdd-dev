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
                      GGS_luint & outResult) {
  if (inPowerOfTwo.uintValue () == 0) {
    inPowerOfTwo.signalSemanticError (inLexique, "the dimension must be >0") ;
  }
  outResult.defineAttribute ((1UL << inPowerOfTwo.uintValue ()) - 1UL, inLexique) ;
}

//---------------------------------------------------------------------*

void
routine_verifyBoundsAndComputeDimension (C_Lexique & inLexique,
                                         const GGS_luint & inLowBound,
                                         const GGS_luint & inHighBound,
                                         GGS_luint & outDimension) {
  if (inLowBound.uintValue () >= inHighBound.uintValue ()) {
    inHighBound.signalSemanticError (inLexique, "the high bound is lower or equal to the low bound") ;
  }
  unsigned long bitCount = 0 ;
  unsigned long high = inHighBound.uintValue () ;
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
                             GGS_location inErrorLocation) {
  if (valeur.isBuilt () && inErrorLocation.isBuilt () && (valeur.uintValue () != 1)) {
    inErrorLocation.signalSemanticError (inLexique, "This variable is not a boolean") ;
  }
}

//---------------------------------------------------------------------*

void
routine_verifierDimensionValeurCorrecte (C_Lexique & inLexique,
                                         GGS_luint dimension,
                                         GGS_luint valeur) {
  if (valeur.isBuilt () && dimension.isBuilt ()) {
  //--- Valeur max
    const unsigned long dim = dimension.uintValue () ;
    unsigned long valeurMax = 1 ;
    for (unsigned short i=1 ; i <= dim ; i++) {
      valeurMax <<= 1 ;
    }
    if (valeur.uintValue () >= valeurMax) {
      C_String erreur ;
      erreur << "la valeur maximum est " ;
      erreur << (valeurMax - 1) ;
      valeur.signalSemanticError (inLexique, erreur) ;
    }
  }
}

//---------------------------------------------------------------------*

void
routine_verifierDimensionExpliciteCorrecte (C_Lexique & inLexique, 
                                            GGS_luint numeroVar, // indice BDD de la variable
                                            GGS_luint dim, // dimension de la variable
                                            GGS_luint & indiceBDD, // decalage appel
                                            GGS_luint dimension) { // dimension appel
  if (numeroVar.isBuilt () && dim.isBuilt () &&
      indiceBDD.isBuilt () && dimension.isBuilt ()){
  //--- Il faut verifier :
  //       indiceBDD < dim
  //       dimension >= 1 ;
  //       (indiceBDD + dimension - 1) < dim
    const unsigned long valeurNumeroVar = numeroVar.uintValue () ;
    const unsigned long valeurDim = dim.uintValue () ;
    const unsigned long valeurIndiceBDD = indiceBDD.uintValue () ;
    const unsigned long valeurDimension = dimension.uintValue () ;
    if (valeurIndiceBDD >= valeurDim) {
      indiceBDD.signalSemanticError (inLexique, "l'indice est >= a la dimension de la variable") ;
    }else if (valeurDimension < 1) {
      dimension.signalSemanticError (inLexique, "la dimension doit etre >= 0") ;
    }else if ((valeurIndiceBDD + valeurDimension - 1) >= valeurDim) {
      C_String erreur ;
      erreur << "l'indice doit etre <= " ;
      erreur << (valeurDim - valeurDimension) ;
      indiceBDD.signalSemanticError (inLexique, erreur) ;    
    }
  //--- Il faut recalculer
  //        indiceBDD += numeroVar ;
    indiceBDD.setUlongValue (indiceBDD.uintValue () + valeurNumeroVar) ;
  }
}

//---------------------------------------------------------------------*

void
routine_verifierMemesDimensions (C_Lexique & inLexique, 
                                 GGS_luint dimensionGauche,
                                 GGS_luint dimensionDroite) {
  if (dimensionGauche.isBuilt () && dimensionDroite.isBuilt ()) {
    if (dimensionGauche.uintValue () != dimensionDroite.uintValue ()) {
      C_String erreur ;
      erreur << "la dimension de la variable droite ("
             << dimensionDroite.uintValue ()
             << ") est differente de celle de la variable gauche ("
             << dimensionGauche.uintValue ()
             << ")" ;
      dimensionDroite.signalSemanticError (inLexique, erreur) ;
    }  
  }
}

//---------------------------------------------------------------------*
