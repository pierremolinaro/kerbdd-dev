//----------------------------------------------------------------------------*

#include "programmeBDD.h"
#include "generic_arraies/TC_UniqueArray.h"
#include "utilities/MF_MemoryControl.h"
#include "time/C_Timer.h"
#include "bdd/C_Display_BDD.h"

//----------------------------------------------------------------------------*

#ifdef SUN_UNIX
  #include <time.h>
#endif

//----------------------------------------------------------------------------*

#include <limits.h>

//----------------------------------------------------------------------------*

void programmeBDD::_beforeParsing (void) {
  aTableFormules = GGS_typeTableFormules::constructor_empty () ;
  aListeFormules = GGS_typeListeCalculs::constructor_empty () ;
  mDomainMap = GGS_typeDomainMap::constructor_empty () ;
}

//----------------------------------------------------------------------------*

void programmeBDD::_afterParsing (void) {
//--- Initial cache and map sizes
  printf ("Initial size of BDD unique table: %lu; initial size of ITE cache: %lu; initial size of AND cache: %lu.\n",
          C_BDD::getHashMapEntriesCount (), C_BDD::getITEcacheEntriesCount (), C_BDD::getANDcacheEntriesCount ()) ;
  switch (C_BDD::getComputingMode ()) {
  case C_BDD::ITE_COMPUTED_FROM_AND :
    printf ("ITE is computed from AND.\n\n") ;
    break ;
  case C_BDD::AND_COMPUTED_FROM_ITE :
    printf ("AND is computed from ITE.\n\n") ;
    break ;
  case C_BDD::ITE_and_AND_ARE_INDEPENDANT :
    printf ("AND and ITE are computed independantly.\n\n") ;
    break ;
  }  
  fflush (stdout) ;
//--- Tableau des valeurs des formules
  TC_UniqueArray <C_BDD> tabValeurFormules (aListeFormules.count (), C_BDD () COMMA_HERE) ;
//--- Boucler sur les formules a calculer
  GGS_typeListeCalculs::element_type * courant = aListeFormules.firstObject () ;
  while (courant != NULL) {
    macroValidPointer (courant) ;
    cPtr_typeCalcul * calcul = courant->aCalcul (HERE) ;
  //--- Effectuer le calcul
   calcul->executerCalcul (tabValeurFormules) ;
   fflush (stdout) ;
   courant = courant->nextObject () ;
 }
}

//----------------------------------------------------------------------------*

void cPtr_typeAfficherBilan::executerCalcul (TC_UniqueArray <C_BDD> & /*tabValeurFormules */) {
  C_BDD::printBDDpackageOperationsSummary (stdout) ;
}

//----------------------------------------------------------------------------*

void cPtr_typeDimensionnerTable::
executerCalcul (TC_UniqueArray <C_BDD> & /*tabValeurFormules */) {
  C_Timer duree ;
  C_BDD::setHashMapSize ((uint16) aDimensionTable.uintValue ()) ;
  duree.stopTimer () ;
  printf ("map %lu: BDD unique table resized to %lu (done in ",
          aDimensionTable.uintValue (), C_BDD::getHashMapEntriesCount ()) ;
  duree.printTimer (stdout) ;
  printf (").\n\n") ; 
  fflush (stdout) ; 
}

//----------------------------------------------------------------------------*

void cPtr_typeDimensionnerANDCache::
executerCalcul (TC_UniqueArray <C_BDD> & /*tabValeurFormules */) {
  C_Timer duree ;
  C_BDD::setANDcacheSize ((sint32) aDimensionCache.uintValue ()) ;
  duree.stopTimer () ;
  printf ("and_cache %lu: AND cache resized to %lu (done in ",
          aDimensionCache.uintValue (), C_BDD::getANDcacheEntriesCount ()) ;
  duree.printTimer (stdout) ;
  printf (").\n\n") ;  
  fflush (stdout) ; 
}

//----------------------------------------------------------------------------*

void cPtr_typeDimensionnerITECache::
executerCalcul (TC_UniqueArray <C_BDD> & /*tabValeurFormules */) {
  C_Timer duree ;
  C_BDD::setITEcacheSize ((sint32) aDimensionCache.uintValue ()) ;
  duree.stopTimer () ;
  printf ("ite_cache %lu: ITE cache resized to %lu (done in ",
          aDimensionCache.uintValue (), C_BDD::getITEcacheEntriesCount ()) ;
  duree.printTimer (stdout) ;
  printf (").\n\n") ;  
  fflush (stdout) ; 
}

//----------------------------------------------------------------------------*

void cPtr_typeUse_AND::
executerCalcul (TC_UniqueArray <C_BDD> & /*tabValeurFormules */) {
  C_BDD::setComputingMode (C_BDD::ITE_COMPUTED_FROM_AND) ;
  printf ("use_and: ITE is now computed from AND.\n\n") ;
  fflush (stdout) ; 
}

//----------------------------------------------------------------------------*

void cPtr_typeUse_ITE::
executerCalcul (TC_UniqueArray <C_BDD> & /*tabValeurFormules */) {
  C_BDD::setComputingMode (C_BDD::AND_COMPUTED_FROM_ITE) ;
  printf ("use_ite: AND is now computed from ITE.\n\n") ;
  fflush (stdout) ; 
}

//----------------------------------------------------------------------------*

void cPtr_typeUse_AND_ITE::
executerCalcul (TC_UniqueArray <C_BDD> & /*tabValeurFormules */) {
  C_BDD::setComputingMode (C_BDD::ITE_and_AND_ARE_INDEPENDANT) ;
  printf ("use_and_ite: AND and ITE are now computed independantly.\n\n") ;
  fflush (stdout) ; 
}

//----------------------------------------------------------------------------*

static void construireTableauDesNoms (GGS_typeTableVariablesBool & tableDesVariablesBooleennes,
                                      C_Display_BDD & tableauDesNomsVariablesBooleennes) {
//--- Compute variables count
  long BDDvariablesCount = 0 ;
  GGS_typeTableVariablesBool::element_type * pb = tableDesVariablesBooleennes.firstObject () ;
  while (pb != NULL) {
    macroValidPointer (pb) ;
    BDDvariablesCount += pb->mInfo.mVariableDescriptor (HERE)->getBDDvariablesCount () ;
    pb = pb->nextObject () ;
  }
  tableauDesNomsVariablesBooleennes.allouer ((uint16) BDDvariablesCount) ;
  pb = tableDesVariablesBooleennes.firstObject () ;
  uint32 index = 0 ;
  while (pb != NULL) {
    macroValidPointer (pb) ;
    pb->mInfo.mVariableDescriptor (HERE)->defineBDDvariableNames (tableauDesNomsVariablesBooleennes,
                                                                  pb->mKey, index) ;
    pb = pb->nextObject () ;
  }
}

//----------------------------------------------------------------------------*

static C_BDD evaluerContraintesIntervalles (GGS_typeTableVariablesBool & tableVariablesBool) {

  C_BDD contrainte ; contrainte.setToTrue () ;
  GGS_typeTableVariablesBool::element_type * ptr = tableVariablesBool.firstObject () ;
  while (ptr != NULL) {
    macroValidPointer (ptr) ;
    ptr->mInfo.mVariableDescriptor (HERE)->computeBoundsConstraint (contrainte) ;
    ptr = ptr->nextObject () ;
  }
  return contrainte ;
}


//----------------------------------------------------------------------------*

void cPtr_typeCalculSimple::executerCalcul (TC_UniqueArray <C_BDD> & tabValeurFormules) {
  C_Timer duree ;
  const sint32 numeroFormule = (long) aNumeroFormule.uintValue () ;
//--- Effectuer les eventuels changements de variable
  aFormule(HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormule) ;
//--- Evaluer les contraintes d'intervalle des variables
  const C_BDD contrainte = evaluerContraintesIntervalles (aTableVariablesBool) ;
//--- Evaluation
  const C_BDD resultat = contrainte & aFormule (HERE)->evaluerFormule (tabValeurFormules (numeroFormule COMMA_HERE)) ;
  tabValeurFormules (numeroFormule COMMA_HERE) = resultat ;
  duree.stopTimer () ;
  if (aTableVariablesBool.mBDDbitsCount == 0) {
    printf ("Predicate '%s', computed in ", aNomFormule.cString ()) ;
    duree.printTimer (stdout) ;
    printf (", is %s\n", resultat.isFalse () ? "false" : "true") ;
  }else{
  //--- Print Result
    printf ("Formula '%s', computed in ", aNomFormule.cString ()) ;
    duree.printTimer (stdout) ;
    const uint64 nValeurs = resultat.getBDDvaluesCount (aTableVariablesBool.mBDDbitsCount) ;
    const uint32 nElements = resultat.getBDDnodesCount () ;
    printf (", has %llu value%s coded by %lu node%s\n", nValeurs,
            (nValeurs < 2) ? "" : "s", nElements, (nElements < 2) ? "" : "s") ;
  //--- Print values ?
    C_Display_BDD tableauDesNomsVariablesBooleennes (0) ;
    const uint32 affichage = aAfficher.uintValue () ;
    if (affichage > 0) { //--- Construire le tableau des noms
      construireTableauDesNoms (aTableVariablesBool, tableauDesNomsVariablesBooleennes) ;
    }
  //--- Print BDD values ?
    if (affichage > 0) { 
      resultat.printBDD (stdout, aTableVariablesBool.mBDDbitsCount, tableauDesNomsVariablesBooleennes) ;
    }
  //--- Print BDD nodes ?
    if (affichage > 1) { 
      resultat.printBDDnodes (stdout, tableauDesNomsVariablesBooleennes) ;
    }
  //--- Check BDD ?  
    if (affichage > 2) { 
      sint32 nErreurs = 0 ;
      for (uint64 i=0 ; i<nValeurs ; i++) {
        C_BDD v = resultat.getNthBDD (i, aTableVariablesBool.mBDDbitsCount) ;
        const uint64 rang = resultat.getBDDrange (v, aTableVariablesBool.mBDDbitsCount) ;
        if (rang != i) {
          printf (" *** BDD RANGE ERROR %llu (RECOMPUTED VALUE: %llu) ***\n", i, rang) ;
          nErreurs ++ ;
        }
      }
      if (nErreurs == 0) {
        printf ("No error raised during checking.\n") ;
      }
    }
  }
  printf ("\n") ;
}  

//----------------------------------------------------------------------------*

void cPtr_typeCalculIteratif::executerCalcul (TC_UniqueArray <C_BDD> & tabValeurFormules) {
  C_Timer duree ;
  const sint32 numeroFormule = (long) aNumeroFormule.uintValue () ;
//--- Valeur initiale
  if (aSigne.boolValue ()) {
    tabValeurFormules (numeroFormule COMMA_HERE) = C_BDD () ; // vide
  }else{
    tabValeurFormules (numeroFormule COMMA_HERE) = ~ C_BDD () ; // plein
  }
//--- Effectuer les eventuels changements de variable
  aFormule(HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormule) ;
//--- Evaluer les contraintes d'intervalle des variables
  const C_BDD contrainte = evaluerContraintesIntervalles (aTableVariablesBool) ;
//--- Evaluation initiale
  C_BDD resultat = contrainte & aFormule (HERE)->evaluerFormule (tabValeurFormules (numeroFormule COMMA_HERE)) ;
  long nIterations = 1 ;
//--- Iterer
  do{
    tabValeurFormules (numeroFormule COMMA_HERE) = resultat ;
    resultat = contrainte & aFormule(HERE)->evaluerFormule (resultat) ;
    nIterations ++ ;
  }while (! resultat.isEqualToBDD (tabValeurFormules (numeroFormule COMMA_HERE))) ;
  duree.stopTimer () ;
  if (aTableVariablesBool.mBDDbitsCount == 0) {
    printf ("Predicate '%s', computed in ", aNomFormule.cString ()) ;
    duree.printTimer (stdout) ;
    printf (", is %s\n", resultat.isFalse () ? "false" : "true") ;
  }else{
    printf ("Formula '%s', computed in ", aNomFormule.cString ()) ;
    duree.printTimer (stdout) ;
    printf (" with %ld iterations", nIterations) ;
    const uint64 nValeurs = resultat.getBDDvaluesCount (aTableVariablesBool.mBDDbitsCount) ;
    const uint32 nElements = resultat.getBDDnodesCount () ;
    printf (", has %llu value%s coded by %lu node%s\n", nValeurs,
            (nValeurs < 2) ? "" : "s", nElements, (nElements < 2) ? "" : "s") ;
  //--- Imprimer la composition du resultat
    C_Display_BDD tableauDesNomsVariablesBooleennes (0) ;
    const uint32 affichage = aAfficher.uintValue () ;
    if (affichage > 0) { //--- Construire le tableau des noms
      construireTableauDesNoms (aTableVariablesBool, tableauDesNomsVariablesBooleennes) ;
    }
  //--- Imprimer la composition du resultat ?
    if (affichage > 0) { 
      resultat.printBDD (stdout, aTableVariablesBool.mBDDbitsCount, tableauDesNomsVariablesBooleennes) ;
    }
  //--- Ecrire la composition du BDD ?
    if (affichage > 1) { 
      resultat.printBDDnodes (stdout, tableauDesNomsVariablesBooleennes) ;
    }
  //--- Verifier le BDD ?  
    if (affichage > 2) { 
      long nErreurs = 0 ;
      for (uint64 i=0 ; i<nValeurs ; i++) {
        C_BDD v = resultat.getNthBDD (i, aTableVariablesBool.mBDDbitsCount) ;
        const uint64 rang = resultat.getBDDrange (v, aTableVariablesBool.mBDDbitsCount) ;
        if (rang != i) {
          printf (" *** BDD RANGE ERROR %llu (RECOMPUTED VALUE: %llu) ***\n", i, rang) ;
          nErreurs ++ ;
        }
      }
      if (nErreurs == 0) {
        printf ("No error raised during checking.\n") ;
      }
    }
  }
  printf ("\n") ;
}

//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleVar::evaluerFormule (const C_BDD & /* valeurFormuleCourante */) {
  return C_BDD ((uint16) aNumeroVariable.uintValue (), true) ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleVar::
executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & /* tabValeurFormules */,
                                  const sint32 /* numeroFormuleCourante */) {
}

//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleTrue::evaluerFormule (const C_BDD & /* valeurFormuleCourante */) {
  return ~C_BDD () ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleTrue::
executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & /* tabValeurFormules */,
                                  const sint32 /* numeroFormuleCourante */) {
}

//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleFalse::evaluerFormule (const C_BDD & /* valeurFormuleCourante */) {
  return C_BDD () ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleFalse::
executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & /* tabValeurFormules */,
                                  const sint32 /* numeroFormuleCourante */) {
}

//---------------------------------------------------------------------*

static void
construireTableauChangementVariables (GGS_typeActualArgumentsList & listeArgumentsBooleens,
                                      uint16 * & tabChgtBool,
                                      uint16 & nombreVariablesBool) {
//--- Calculer la taille du tableau des changements de variables
  nombreVariablesBool = 0 ;
  GGS_typeActualArgumentsList::element_type * p = listeArgumentsBooleens.firstObject () ;
  while (p != NULL) {
    nombreVariablesBool += (uint16) p->mVariableBitSize.uintValue () ;
    p = p->nextObject () ;
  }
//--- Construire le tableau des changements de variables booleennes
  tabChgtBool = new uint16 [nombreVariablesBool] ;
  p = listeArgumentsBooleens.firstObject () ;
  size_t i = 0 ;
  while (p != NULL) {
    macroValidPointer (p) ;
    for (uint16 j=0 ; j < p->mVariableBitSize.uintValue () ; j++) {
      tabChgtBool [i] = (uint16) (p->mVariableIndex.uintValue () + j) ;
      i ++ ;
    }
    p = p->nextObject () ;
  }
}

//---------------------------------------------------------------------*
//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleFor::evaluerFormule (const C_BDD & valeurFormuleCourante) {
  C_BDD resultat = aFormuleTraduite.mBDD ;
  if (aEstFormuleCourante.boolValue ()) {
  //--- Construire le tableau des changements de variables
    uint16 * tabChgtBool = NULL ;
    uint16 nombreVariablesBool = 0 ;
    construireTableauChangementVariables (aListeArgsBool, tabChgtBool, nombreVariablesBool) ;
  //--- Traduire le BDD
    resultat = valeurFormuleCourante.substitution (tabChgtBool, nombreVariablesBool) ;
    delete [] tabChgtBool ; tabChgtBool = NULL ;
  }
  return resultat ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleFor::
executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & tabValeurFormules,
                                  const sint32 numeroFormuleCourante) {
  aEstFormuleCourante.setValue (aNumeroFormule.uintValue () == (uint32) numeroFormuleCourante) ;
  if (! aEstFormuleCourante.boolValue ()) {
  //--- Construire le tableau des changements de variables
    uint16 * tabChgtBool = NULL ;
    uint16 nombreVariablesBool = 0 ;
    construireTableauChangementVariables (aListeArgsBool, tabChgtBool, nombreVariablesBool) ;
  //--- Traduire le BDD
    aFormuleTraduite.mBDD = tabValeurFormules ((uint16) aNumeroFormule.uintValue () COMMA_HERE).substitution (tabChgtBool, nombreVariablesBool) ;
    delete [] tabChgtBool ; tabChgtBool = NULL ;
  }
}

//---------------------------------------------------------------------*
//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleNon::evaluerFormule (const C_BDD & valeurFormuleCourante) {
  return ~ (aOperande (HERE)->evaluerFormule (valeurFormuleCourante)) ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleNon::
executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & tabValeurFormules,
                                  const sint32 numeroFormuleCourante) {
  aOperande (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
}

//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleEt::evaluerFormule (const C_BDD & valeurFormuleCourante) {
  return aOperande1 (HERE)->evaluerFormule (valeurFormuleCourante)
              &
         aOperande2 (HERE)->evaluerFormule (valeurFormuleCourante) ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleEt::
executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & tabValeurFormules,
                                  const sint32 numeroFormuleCourante) {
  aOperande1 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
  aOperande2 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
}

//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleIte::evaluerFormule (const C_BDD & valeurFormuleCourante) {
  return C_BDD::ite (aOperande1 (HERE)->evaluerFormule (valeurFormuleCourante),
                    aOperande2 (HERE)->evaluerFormule (valeurFormuleCourante),
                    aOperande3 (HERE)->evaluerFormule (valeurFormuleCourante)) ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleIte::executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & tabValeurFormules,
                                                      const sint32 numeroFormuleCourante) {
  aOperande1 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
  aOperande2 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
  aOperande3 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
}

//---------------------------------------------------------------------*
//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleOu::evaluerFormule (const C_BDD & valeurFormuleCourante) {
  return aOperande1 (HERE)->evaluerFormule (valeurFormuleCourante)
              |
         aOperande2 (HERE)->evaluerFormule (valeurFormuleCourante) ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleOu::executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & tabValeurFormules,
                                                      const sint32 numeroFormuleCourante) {
  aOperande1 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
  aOperande2 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
}

//---------------------------------------------------------------------*
//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleImplique::evaluerFormule (const C_BDD & valeurFormuleCourante) {
  return aOperande1 (HERE)->evaluerFormule (valeurFormuleCourante).implies (aOperande2 (HERE)->evaluerFormule (valeurFormuleCourante)) ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleImplique::
executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & tabValeurFormules,
                                  const sint32 numeroFormuleCourante) {
  aOperande1 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
  aOperande2 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
}

//---------------------------------------------------------------------*
//---------------------------------------------------------------------*

C_BDD cPtr_typeComparaisonFormules::evaluerFormule (const C_BDD & valeurFormuleCourante) {
  C_BDD::compareEnum comp = C_BDD::kEqual ;
  switch (aComparaison.uintValue ()) {
  case 1 :
    comp = C_BDD::kNonEqual ;
    break ;
  case 2 :
    comp = C_BDD::kLowerOrEqual ;
    break ;
  case 3 :
    comp = C_BDD::kStrictLower ;
    break ;
  case 4 :
    comp = C_BDD::kGreaterOrEqual ;
    break ;
  case 5 :
    comp = C_BDD::kStrictGreater ;
    break ;
  default :
    break ;
  }

  return aOperande1 (HERE)->evaluerFormule (valeurFormuleCourante)
             .compareWithBDD (comp, aOperande2 (HERE)->evaluerFormule (valeurFormuleCourante)) ;
}

//---------------------------------------------------------------------*

void cPtr_typeComparaisonFormules::
executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & tabValeurFormules,
                                  const sint32 numeroFormuleCourante) {
  aOperande1 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
  aOperande2 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
}

//---------------------------------------------------------------------*
//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleExist::evaluerFormule (const C_BDD & valeurFormuleCourante) {
  C_BDD resultat = aOperande (HERE)->evaluerFormule (valeurFormuleCourante) & aContraintes.mBDD ;
  resultat = resultat.existsOnBitsAfterNumber ((uint16) aListeArgsBooleens.firstObject ()->mVariableIndex.uintValue ()) ;
  return resultat ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleExist::
executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & tabValeurFormules,
                                  const sint32 numeroFormuleCourante) {
  aOperande (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
//--- Constraint evaluation
  C_BDD constraint = ~ C_BDD () ; // Initially true
  GGS_typeFormalArgumentsList::element_type * current = aListeArgsBooleens.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    const uint16 variableIndex = (uint16) current->mVariableIndex.uintValue () ;
    const uint16 variableBitSize = (uint16) current->mVariableBitSize.uintValue () ;
    const uint32 lowBound = current->mLowBound.uintValue () ;
    const uint32 highBound = current->mHighBound.uintValue () ;
    const bool hasConstraint = (lowBound != 0) || ((highBound + 1) < (1UL << variableBitSize)) ;
//    printf ("variableIndex:%lu; variableBitSize:%lu; lowBound:%lu; highBound:%lu hasConstraint:%s\n",
//            variableIndex, variableBitSize, lowBound, highBound, hasConstraint ? "yes" : "no") ;
    if (hasConstraint) {
      constraint &= C_BDD::varCompareConst (variableIndex, variableBitSize, C_BDD::kGreaterOrEqual, lowBound)
                  & C_BDD::varCompareConst (variableIndex, variableBitSize, C_BDD::kLowerOrEqual, highBound) ; 
    }
    current = current->nextObject () ;
  }
  aContraintes.mBDD = constraint ;
}

//---------------------------------------------------------------------*
//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleComparaisonValeur::evaluerFormule (const C_BDD & /* valeurFormuleCourante */) {
  const uint16 premierIndice = (uint16) aIndiceBDD.uintValue () ;
  const uint16 dimension = (uint16)  aDimension.uintValue () ;
  const uint32 valeur = aValeur.uintValue () ;
  C_BDD::compareEnum comp = C_BDD::kEqual ;
  switch (aComparaison.uintValue ()) {
  case 1 :
    comp = C_BDD::kNonEqual ;
    break ;
  case 2 :
    comp = C_BDD::kLowerOrEqual ;
    break ;
  case 3 :
    comp = C_BDD::kStrictLower ;
    break ;
  case 4 :
    comp = C_BDD::kGreaterOrEqual ;
    break ;
  case 5 :
    comp = C_BDD::kStrictGreater ;
    break ;
  default :
    break ;
  }
  return C_BDD::varCompareConst (premierIndice, dimension, comp, valeur) ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleComparaisonValeur::executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & /* tabValeurFormules */,
                                                         const sint32 /* numeroFormuleCourante */) {
}

//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleComparaisonVariable::evaluerFormule (const C_BDD & /* valeurFormuleCourante */) {
  const uint16 premierIndiceGauche = (uint16) aIndiceBDDgauche.uintValue () ;
  const uint16 dimension = (uint16) aDimension.uintValue () ;
  const uint16 premierIndiceDroite = (uint16) aIndiceBDDdroite.uintValue () ;
  C_BDD::compareEnum comp = C_BDD::kEqual ;
  switch (aComparaison.uintValue ()) {
  case 1 :
    comp = C_BDD::kNonEqual ;
    break ;
  case 2 :
    comp = C_BDD::kLowerOrEqual ;
    break ;
  case 3 :
    comp = C_BDD::kStrictLower ;
    break ;
  case 4 :
    comp = C_BDD::kGreaterOrEqual ;
    break ;
  case 5 :
    comp = C_BDD::kStrictGreater ;
    break ;
  default :
    break ;
  }
  return C_BDD::varCompareVar (premierIndiceGauche, dimension, comp, premierIndiceDroite) ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleComparaisonVariable::executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & /* tabValeurFormules */,
                                                         const sint32 /* numeroFormuleCourante */) {
}

//----------------------------------------------------------------------------*
//                                                                            *
//            Methods of 'cPtr_typeDirectVariable'                            *
//                                                                            *
//----------------------------------------------------------------------------*

void cPtr_typeDirectVariable::allocateBDDvariables (uint16 & ioBDDindex) {
  mIndex.setUlongValue (ioBDDindex) ;
  ioBDDindex += (uint16) mBitSize.uintValue () ;
}

//----------------------------------------------------------------------------*

long cPtr_typeDirectVariable::getBDDvariablesCount (void) const {
  return 1 ;
}

//----------------------------------------------------------------------------*

void cPtr_typeDirectVariable::defineBDDvariableNames (C_Display_BDD & ioBDDvariableNameArray,
                                                      const C_String & inVariableName,
                                                      uint32 & ioIndex) {
  const uint32 dimension = mBitSize.uintValue () ;
  ioBDDvariableNameArray.definir (ioIndex, inVariableName.cString (), (uint16) dimension) ;
  ioIndex ++ ;
}

//----------------------------------------------------------------------------*

void cPtr_typeDirectVariable::computeBoundsConstraint (C_BDD & ioConstraint) const {
  const uint32 borneInf = mLowBound.uintValue () ;
  const uint32 borneSup = mHighBound.uintValue () ;
  const uint16 varIndex = (uint16) mIndex.uintValue () ;
  const uint16 bitSize = (uint16) mBitSize.uintValue () ;
  if (borneInf > 0) {
    ioConstraint &= C_BDD::varCompareConst (varIndex, bitSize, C_BDD::kGreaterOrEqual, borneInf) ;
  }
  if (borneSup < ((1UL << bitSize) -1UL)) {
    ioConstraint &= C_BDD::varCompareConst (varIndex, bitSize, C_BDD::kLowerOrEqual, borneSup) ;
  }
}

//----------------------------------------------------------------------------*
//                                                                            *
//            Methods of 'cPtr_typeRecordVariable'                            *
//                                                                            *
//----------------------------------------------------------------------------*

void cPtr_typeRecordVariable::allocateBDDvariables (uint16 & ioBDDindex) {
  GGS_typeTableVariablesBool::element_type * p = mMap.firstObject () ;
  while (p != NULL) {
    macroValidPointer (p) ;
    p->mInfo.mVariableDescriptor (HERE)->allocateBDDvariables (ioBDDindex) ;
    p = p->nextObject () ;
  }
}

//----------------------------------------------------------------------------*

long cPtr_typeRecordVariable::getBDDvariablesCount (void) const {
  long variableCount = 0 ;
  GGS_typeTableVariablesBool::element_type * p = mMap.firstObject () ;
  while (p != NULL) {
    macroValidPointer (p) ;
    variableCount += p->mInfo.mVariableDescriptor (HERE)->getBDDvariablesCount () ;
    p = p->nextObject () ;
  }
  return variableCount ;
}

//----------------------------------------------------------------------------*

void cPtr_typeRecordVariable::defineBDDvariableNames (C_Display_BDD & ioBDDvariableNameArray,
                                                      const C_String & inVariableName,
                                                      uint32 & ioIndex) {
  GGS_typeTableVariablesBool::element_type * p = mMap.firstObject () ;
  while (p != NULL) {
    macroValidPointer (p) ;
    C_String variableName ;
    variableName << inVariableName << '.' << p->mKey ;
    p->mInfo.mVariableDescriptor (HERE)->defineBDDvariableNames (ioBDDvariableNameArray, variableName, ioIndex) ;
    p = p->nextObject () ;
  }
}

//----------------------------------------------------------------------------*

void cPtr_typeRecordVariable::computeBoundsConstraint (C_BDD & ioConstraint) const {
  GGS_typeTableVariablesBool::element_type * p = mMap.firstObject () ;
  while (p != NULL) {
    macroValidPointer (p) ;
    p->mInfo.mVariableDescriptor (HERE)->computeBoundsConstraint (ioConstraint) ;
    p = p->nextObject () ;
  }
}

//----------------------------------------------------------------------------*
