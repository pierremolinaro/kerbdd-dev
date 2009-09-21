//----------------------------------------------------------------------------*

#include "semantiqueBDD.h"
#include "collections/TC_UniqueArray.h"
#include "utilities/MF_MemoryControl.h"
#include "time/C_Timer.h"
#include "bdd/C_Display_BDD.h"

//----------------------------------------------------------------------------*

#ifdef SUN_UNIX
  #include <time.h>
#endif

//----------------------------------------------------------------------------*

#include <limits.h>

//---------------------------------------------------------------------------*
//                                                                           *
//                Get BDD Count for a map                                    *
//                                                                           *
//---------------------------------------------------------------------------*

static PMUInt16 bddCountForMap (const GGS_typeTableVariablesBool & inMap) {
  PMUInt16 result = 0 ;
  GGS_typeTableVariablesBool::cElement * current = inMap.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    result = (PMUInt16) (result + current->mInfo.mVariableDescriptor (HERE)->getBDDvariablesCount ()) ;
    current = current->nextObject () ;
  }
  return result ;
}

//----------------------------------------------------------------------------*

void routine_generate_code (C_Compiler & /* inLexique */,
                            const GGS_typeTableFormules /* inTableFormules */,
                            const GGS_typeListeCalculs inListeCalculs,
                            const GGS_typeDomainMap /* inDomainMap */
                            COMMA_UNUSED_LOCATION_ARGS) {
//--- Initial cache and map sizes
  co << "Initial size of BDD unique table: "
     << cStringWithSigned (C_BDD::getHashMapEntriesCount ())
     << ";\ninitial size of ITE cache: "
     << cStringWithSigned (C_BDD::getITEcacheEntriesCount ())
     << ";\ninitial size of AND cache: "
     << cStringWithSigned (C_BDD::getANDcacheEntriesCount ())
     << ".\n" ;
  switch (C_BDD::getComputingMode ()) {
  case C_BDD::ITE_COMPUTED_FROM_AND :
    co << "ITE is computed from AND.\n\n" ;
    break ;
  case C_BDD::AND_COMPUTED_FROM_ITE :
    co << "AND is computed from ITE.\n\n" ;
    break ;
  case C_BDD::ITE_and_AND_ARE_INDEPENDANT :
    co << "AND and ITE are computed independantly.\n\n" ;
    break ;
  }  
  co.flush () ;
//--- Tableau des valeurs des formules
  TC_UniqueArray <C_BDD> tabValeurFormules (inListeCalculs.count (), C_BDD () COMMA_HERE) ;
//--- Boucler sur les formules a calculer
  GGS_typeListeCalculs::cElement * courant = inListeCalculs.firstObject () ;
  while (courant != NULL) {
    macroValidPointer (courant) ;
    cPtr_typeCalcul * calcul = courant->mCalcul (HERE) ;
  //--- Effectuer le calcul
   calcul->executerCalcul (tabValeurFormules) ;
   co.flush () ;
   courant = courant->nextObject () ;
 }
}

//----------------------------------------------------------------------------*

void cPtr_typeAfficherBilan::executerCalcul (TC_UniqueArray <C_BDD> & /*tabValeurFormules */) {
  C_BDD::printBDDpackageOperationsSummary (co) ;
}

//----------------------------------------------------------------------------*

void cPtr_typeDimensionnerTable::
executerCalcul (TC_UniqueArray <C_BDD> & /*tabValeurFormules */) {
  C_Timer duree ;
  C_BDD::setHashMapSize ((PMUInt16) mDimensionTable.uintValue ()) ;
  duree.stopTimer () ;
  co << "map " << cStringWithUnsigned (mDimensionTable.uintValue ())
     << ": BDD unique table resized to "
     << cStringWithSigned (C_BDD::getHashMapEntriesCount ())
     << " (done in "
     << duree
     << ").\n\n" ; 
  co.flush () ; 
}

//----------------------------------------------------------------------------*

void cPtr_typeDimensionnerANDCache::
executerCalcul (TC_UniqueArray <C_BDD> & /*tabValeurFormules */) {
  C_Timer duree ;
  C_BDD::setANDcacheSize ((PMSInt32) mDimensionCache.uintValue ()) ;
  duree.stopTimer () ;
  co << "and_cache "
     << cStringWithUnsigned (mDimensionCache.uintValue ())
     << ": AND cache resized to "
     << cStringWithSigned (C_BDD::getANDcacheEntriesCount ())
     << " (done in "
     << duree
     << ").\n\n" ;  
  co.flush () ; 
}

//----------------------------------------------------------------------------*

void cPtr_typeDimensionnerITECache::
executerCalcul (TC_UniqueArray <C_BDD> & /*tabValeurFormules */) {
  C_Timer duree ;
  C_BDD::setITEcacheSize ((PMSInt32) mDimensionCache.uintValue ()) ;
  duree.stopTimer () ;
  co << "ite_cache "
     << cStringWithUnsigned (mDimensionCache.uintValue ())
     << ": ITE cache resized to "
     << cStringWithSigned (C_BDD::getITEcacheEntriesCount ())
     << " (done in "
     << duree
     << ").\n\n" ;  
  co.flush () ; 
}

//----------------------------------------------------------------------------*

void cPtr_typeUse_AND::
executerCalcul (TC_UniqueArray <C_BDD> & /*tabValeurFormules */) {
  C_BDD::setComputingMode (C_BDD::ITE_COMPUTED_FROM_AND) ;
  co << "use_and: ITE is now computed from AND.\n\n" ;
  co.flush () ; 
}

//----------------------------------------------------------------------------*

void cPtr_typeUse_ITE::
executerCalcul (TC_UniqueArray <C_BDD> & /*tabValeurFormules */) {
  C_BDD::setComputingMode (C_BDD::AND_COMPUTED_FROM_ITE) ;
  co << "use_ite: AND is now computed from ITE.\n\n" ;
  co.flush () ; 
}

//----------------------------------------------------------------------------*

void cPtr_typeUse_AND_ITE::
executerCalcul (TC_UniqueArray <C_BDD> & /*tabValeurFormules */) {
  C_BDD::setComputingMode (C_BDD::ITE_and_AND_ARE_INDEPENDANT) ;
  co << "use_and_ite: AND and ITE are now computed independantly.\n\n" ;
  co.flush () ; 
}

//----------------------------------------------------------------------------*

static void construireTableauDesNoms (GGS_typeTableVariablesBool & tableDesVariablesBooleennes,
                                      C_Display_BDD & tableauDesNomsVariablesBooleennes) {
//--- Compute variables count
  PMSInt32 BDDvariablesCount = 0 ;
  GGS_typeTableVariablesBool::cElement * pb = tableDesVariablesBooleennes.firstObject () ;
  while (pb != NULL) {
    macroValidPointer (pb) ;
    BDDvariablesCount += pb->mInfo.mVariableDescriptor (HERE)->getBDDslotCount () ;
    pb = pb->nextObject () ;
  }
  tableauDesNomsVariablesBooleennes.allouer ((PMUInt16) BDDvariablesCount) ;
  pb = tableDesVariablesBooleennes.firstObject () ;
  PMUInt32 index = 0 ;
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
  GGS_typeTableVariablesBool::cElement * ptr = tableVariablesBool.firstObject () ;
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
  const PMSInt32 numeroFormule = (PMSInt32) mNumeroFormule.uintValue () ;
//--- Effectuer les eventuels changements de variable
  mFormule(HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormule) ;
//--- Evaluer les contraintes d'intervalle des variables
  const C_BDD contrainte = evaluerContraintesIntervalles (mTableVariablesBool) ;
//--- Evaluation
  const C_BDD resultat = contrainte & mFormule (HERE)->evaluerFormule (tabValeurFormules (numeroFormule COMMA_HERE)) ;
  tabValeurFormules (numeroFormule COMMA_HERE) = resultat ;
  duree.stopTimer () ;
  if (bddCountForMap (mTableVariablesBool) == 0) {
    co << "Predicate '"
       << mNomFormule
       << "', computed in "
       << duree
       << ", is "
       << (resultat.isFalse () ? "false" : "true")
       << "\n"  ;
    co.flush () ;
  }else{
  //--- Print Result
    const PMUInt64 nValeurs = resultat.valueCount (bddCountForMap (mTableVariablesBool)) ;
    const PMUInt32 nElements = resultat.getBDDnodesCount () ;
    co << "Formula '"
       << mNomFormule
       << "', computed in "
       << duree
       << ", has "
       << cStringWithUnsigned64 (nValeurs)
       << " value"
       << ((nValeurs < 2ULL) ? "" : "s")
       << " coded by "
       << cStringWithUnsigned64 (nElements)
       << " node"
       << ((nElements < 2) ? "" : "s")
       << "\n"  ;
  //--- Print values ?
    C_Display_BDD tableauDesNomsVariablesBooleennes (0) ;
    const PMUInt32 affichage = mAfficher.uintValue () ;
    if (affichage > 0) { //--- Construire le tableau des noms
      construireTableauDesNoms (mTableVariablesBool, tableauDesNomsVariablesBooleennes) ;
    }
  //--- Print BDD values ?
    if (affichage > 0) { 
      resultat.printBDD (co, bddCountForMap (mTableVariablesBool), tableauDesNomsVariablesBooleennes) ;
    }
  //--- Print BDD nodes ?
    if (affichage > 1) { 
      resultat.printBDDnodes (co, tableauDesNomsVariablesBooleennes) ;
    }
  //--- Check BDD ?  
    if (affichage > 2) { 
      PMSInt32 nErreurs = 0 ;
      for (PMUInt64 i=0 ; i<nValeurs ; i++) {
        C_BDD v = resultat.getNthBDD (i, bddCountForMap (mTableVariablesBool)) ;
        const PMUInt64 rang = resultat.getBDDrange (v, bddCountForMap (mTableVariablesBool)) ;
        if (rang != i) {
          co << " *** BDD RANGE ERROR "
             << cStringWithUnsigned64 (i)
             << " (RECOMPUTED VALUE: "
             << cStringWithUnsigned64 (rang)
             << ") ***\n" ;
          nErreurs ++ ;
        }
      }
      if (nErreurs == 0) {
        co << "No error raised during checking.\n" ;
      }
    }
  }
  co << "\n" ;
}  

//----------------------------------------------------------------------------*

void cPtr_typeCalculIteratif::executerCalcul (TC_UniqueArray <C_BDD> & tabValeurFormules) {
  C_Timer duree ;
  const PMSInt32 numeroFormule = (PMSInt32) mNumeroFormule.uintValue () ;
//--- Valeur initiale
  if (mSigne.boolValue ()) {
    tabValeurFormules (numeroFormule COMMA_HERE) = C_BDD () ; // vide
  }else{
    tabValeurFormules (numeroFormule COMMA_HERE) = ~ C_BDD () ; // plein
  }
//--- Effectuer les eventuels changements de variable
  mFormule(HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormule) ;
//--- Evaluer les contraintes d'intervalle des variables
  const C_BDD contrainte = evaluerContraintesIntervalles (mTableVariablesBool) ;
//--- Evaluation initiale
  C_BDD resultat = contrainte & mFormule (HERE)->evaluerFormule (tabValeurFormules (numeroFormule COMMA_HERE)) ;
  PMSInt32 nIterations = 1 ;
//--- Iterer
  do{
    tabValeurFormules (numeroFormule COMMA_HERE) = resultat ;
    resultat = contrainte & mFormule(HERE)->evaluerFormule (resultat) ;
    nIterations ++ ;
  }while (! resultat.isEqualToBDD (tabValeurFormules (numeroFormule COMMA_HERE))) ;
  duree.stopTimer () ;
  if (bddCountForMap (mTableVariablesBool) == 0) {
    co << "Predicate '"
       << mNomFormule
       << "', computed in "
       << duree
       << ", is "
       << (resultat.isFalse () ? "false" : "true")
       << "\n" ;
  }else{
    const PMUInt64 nValeurs = resultat.valueCount (bddCountForMap (mTableVariablesBool)) ;
    const PMUInt32 nElements = resultat.getBDDnodesCount () ;
    co << "Formula '"
       << mNomFormule
       << "', computed in "
       << duree
       << " with "
       << cStringWithSigned (nIterations)
       << " iterations, has "
       << cStringWithUnsigned64 (nValeurs)
       << " value"
       << ((nValeurs < 2ULL) ? "" : "s")
       << " coded by "
       << cStringWithUnsigned (nElements)
       << " node"
       << ((nElements < 2) ? "" : "s")
       << "\n" ;
  //--- Imprimer la composition du resultat
    C_Display_BDD tableauDesNomsVariablesBooleennes (0) ;
    const PMUInt32 affichage = mAfficher.uintValue () ;
    if (affichage > 0) { //--- Construire le tableau des noms
      construireTableauDesNoms (mTableVariablesBool, tableauDesNomsVariablesBooleennes) ;
    }
  //--- Imprimer la composition du resultat ?
    if (affichage > 0) { 
      resultat.printBDD (co, bddCountForMap (mTableVariablesBool), tableauDesNomsVariablesBooleennes) ;
    }
  //--- Ecrire la composition du BDD ?
    if (affichage > 1) { 
      resultat.printBDDnodes (co, tableauDesNomsVariablesBooleennes) ;
    }
  //--- Verifier le BDD ?  
    if (affichage > 2) { 
      PMSInt32 nErreurs = 0 ;
      for (PMUInt64 i=0 ; i<nValeurs ; i++) {
        C_BDD v = resultat.getNthBDD (i, bddCountForMap (mTableVariablesBool)) ;
        const PMUInt64 rang = resultat.getBDDrange (v, bddCountForMap (mTableVariablesBool)) ;
        if (rang != i) {
          co << " *** BDD RANGE ERROR "
             << cStringWithUnsigned64 (i)
             << " (RECOMPUTED VALUE: "
             << cStringWithUnsigned64 (rang)
             << ") ***\n" ;
          nErreurs ++ ;
        }
      }
      if (nErreurs == 0) {
        co << "No error raised during checking.\n" ;
      }
    }
  }
  co << "\n" ;
}

//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleVar::evaluerFormule (const C_BDD & /* valeurFormuleCourante */) {
  return C_BDD ((PMUInt16) mNumeroVariable.uintValue (), true) ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleVar::
executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & /* tabValeurFormules */,
                                  const PMSInt32 /* numeroFormuleCourante */) {
}

//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleTrue::evaluerFormule (const C_BDD & /* valeurFormuleCourante */) {
  return ~C_BDD () ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleTrue::
executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & /* tabValeurFormules */,
                                  const PMSInt32 /* numeroFormuleCourante */) {
}

//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleFalse::evaluerFormule (const C_BDD & /* valeurFormuleCourante */) {
  return C_BDD () ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleFalse::
executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & /* tabValeurFormules */,
                                  const PMSInt32 /* numeroFormuleCourante */) {
}

//---------------------------------------------------------------------*

static void
construireTableauChangementVariables (GGS_typeActualArgumentsList & listeArgumentsBooleens,
                                      PMUInt16 * & tabChgtBool,
                                      PMUInt16 & nombreVariablesBool) {
//--- Calculer la taille du tableau des changements de variables
  nombreVariablesBool = 0 ;
  GGS_typeActualArgumentsList::cElement * p = listeArgumentsBooleens.firstObject () ;
  while (p != NULL) {
    nombreVariablesBool = (PMUInt16) (nombreVariablesBool + p->mVariableBitSize.uintValue ()) ;
    p = p->nextObject () ;
  }
//--- Construire le tableau des changements de variables booleennes
  tabChgtBool = new PMUInt16 [nombreVariablesBool] ;
  p = listeArgumentsBooleens.firstObject () ;
  size_t i = 0 ;
  while (p != NULL) {
    macroValidPointer (p) ;
    for (PMUInt16 j=0 ; j < p->mVariableBitSize.uintValue () ; j++) {
      tabChgtBool [i] = (PMUInt16) (p->mVariableIndex.uintValue () + j) ;
      i ++ ;
    }
    p = p->nextObject () ;
  }
}

//---------------------------------------------------------------------*
//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleFor::evaluerFormule (const C_BDD & valeurFormuleCourante) {
  C_BDD resultat = mFormuleTraduite.mBDD ;
  if (mEstFormuleCourante.boolValue ()) {
  //--- Construire le tableau des changements de variables
    PMUInt16 * tabChgtBool = NULL ;
    PMUInt16 nombreVariablesBool = 0 ;
    construireTableauChangementVariables (mListeArgsBool, tabChgtBool, nombreVariablesBool) ;
  //--- Traduire le BDD
    resultat = valeurFormuleCourante.substitution (tabChgtBool, nombreVariablesBool) ;
    delete [] tabChgtBool ; tabChgtBool = NULL ;
  }
  return resultat ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleFor::
executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & tabValeurFormules,
                                  const PMSInt32 numeroFormuleCourante) {
  mEstFormuleCourante.setValue (mNumeroFormule.uintValue () == (PMUInt32) numeroFormuleCourante) ;
  if (! mEstFormuleCourante.boolValue ()) {
  //--- Construire le tableau des changements de variables
    PMUInt16 * tabChgtBool = NULL ;
    PMUInt16 nombreVariablesBool = 0 ;
    construireTableauChangementVariables (mListeArgsBool, tabChgtBool, nombreVariablesBool) ;
  //--- Traduire le BDD
    mFormuleTraduite.mBDD = tabValeurFormules ((PMUInt16) mNumeroFormule.uintValue () COMMA_HERE).substitution (tabChgtBool, nombreVariablesBool) ;
    delete [] tabChgtBool ; tabChgtBool = NULL ;
  }
}

//---------------------------------------------------------------------*
//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleNon::evaluerFormule (const C_BDD & valeurFormuleCourante) {
  return ~ (mOperand (HERE)->evaluerFormule (valeurFormuleCourante)) ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleNon::
executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & tabValeurFormules,
                                  const PMSInt32 numeroFormuleCourante) {
  mOperand (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
}

//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleEt::evaluerFormule (const C_BDD & valeurFormuleCourante) {
  return mOperand1 (HERE)->evaluerFormule (valeurFormuleCourante)
              &
         mOperand2 (HERE)->evaluerFormule (valeurFormuleCourante) ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleEt::
executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & tabValeurFormules,
                                  const PMSInt32 numeroFormuleCourante) {
  mOperand1 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
  mOperand2 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
}

//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleIte::evaluerFormule (const C_BDD & valeurFormuleCourante) {
  return C_BDD::ite (mOperand1 (HERE)->evaluerFormule (valeurFormuleCourante),
                    mOperand2 (HERE)->evaluerFormule (valeurFormuleCourante),
                    mOperand3 (HERE)->evaluerFormule (valeurFormuleCourante)) ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleIte::executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & tabValeurFormules,
                                                      const PMSInt32 numeroFormuleCourante) {
  mOperand1 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
  mOperand2 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
  mOperand3 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
}

//---------------------------------------------------------------------*
//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleOu::evaluerFormule (const C_BDD & valeurFormuleCourante) {
  return mOperand1 (HERE)->evaluerFormule (valeurFormuleCourante)
              |
         mOperand2 (HERE)->evaluerFormule (valeurFormuleCourante) ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleOu::executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & tabValeurFormules,
                                                      const PMSInt32 numeroFormuleCourante) {
  mOperand1 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
  mOperand2 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
}

//---------------------------------------------------------------------*
//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleImplique::evaluerFormule (const C_BDD & valeurFormuleCourante) {
  return mOperand1 (HERE)->evaluerFormule (valeurFormuleCourante).implies (mOperand2 (HERE)->evaluerFormule (valeurFormuleCourante)) ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleImplique::
executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & tabValeurFormules,
                                  const PMSInt32 numeroFormuleCourante) {
  mOperand1 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
  mOperand2 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
}

//---------------------------------------------------------------------*
//---------------------------------------------------------------------*

C_BDD cPtr_typeComparaisonFormules::evaluerFormule (const C_BDD & valeurFormuleCourante) {
  C_BDD::compareEnum comp = C_BDD::kEqual ;
  switch (mComparaison.uintValue ()) {
  case 1 :
    comp = C_BDD::kNotEqual ;
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

  return mOperand1 (HERE)->evaluerFormule (valeurFormuleCourante)
             .compareWithBDD (comp, mOperand2 (HERE)->evaluerFormule (valeurFormuleCourante)) ;
}

//---------------------------------------------------------------------*

void cPtr_typeComparaisonFormules::
executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & tabValeurFormules,
                                  const PMSInt32 numeroFormuleCourante) {
  mOperand1 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
  mOperand2 (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
}

//---------------------------------------------------------------------*
//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleExist::evaluerFormule (const C_BDD & valeurFormuleCourante) {
  C_BDD resultat = mOperand (HERE)->evaluerFormule (valeurFormuleCourante) & mContraints.mBDD ;
  resultat = resultat.existsOnBitsAfterNumber ((PMUInt16) mListeArgsBooleens.firstObject ()->mVariableIndex.uintValue ()) ;
  return resultat ;
}

//---------------------------------------------------------------------*

void cPtr_typeFormuleExist::
executerLesChangementsDeVariable (TC_UniqueArray <C_BDD> & tabValeurFormules,
                                  const PMSInt32 numeroFormuleCourante) {
  mOperand (HERE)->executerLesChangementsDeVariable (tabValeurFormules, numeroFormuleCourante) ;
//--- Constraint evaluation
  C_BDD constraint = ~ C_BDD () ; // Initially true
  GGS_typeFormalArgumentsList::cElement * current = mListeArgsBooleens.firstObject () ;
  while (current != NULL) {
    macroValidPointer (current) ;
    const PMUInt16 variableIndex = (PMUInt16) current->mVariableIndex.uintValue () ;
    const PMUInt16 variableBitSize = (PMUInt16) current->mVariableBitSize.uintValue () ;
    const PMUInt32 lowBound = current->mLowBound.uintValue () ;
    const PMUInt32 highBound = current->mHighBound.uintValue () ;
    const bool hasConstraint = (lowBound != 0) || ((highBound + 1) < (1UL << variableBitSize)) ;
    if (hasConstraint) {
      constraint &= C_BDD::varCompareConst (variableIndex, variableBitSize, C_BDD::kGreaterOrEqual, lowBound)
                  & C_BDD::varCompareConst (variableIndex, variableBitSize, C_BDD::kLowerOrEqual, highBound) ; 
    }
    current = current->nextObject () ;
  }
  mContraints.mBDD = constraint ;
}

//---------------------------------------------------------------------*
//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleComparaisonValeur::evaluerFormule (const C_BDD & /* valeurFormuleCourante */) {
  const PMUInt16 premierIndice = (PMUInt16) mIndiceBDD.uintValue () ;
  const PMUInt16 dimension = (PMUInt16)  mDimension.uintValue () ;
  const PMUInt32 valeur = mValeur.uintValue () ;
  C_BDD::compareEnum comp = C_BDD::kEqual ;
  switch (mComparaison.uintValue ()) {
  case 1 :
    comp = C_BDD::kNotEqual ;
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
                                                         const PMSInt32 /* numeroFormuleCourante */) {
}

//---------------------------------------------------------------------*

C_BDD cPtr_typeFormuleComparaisonVariable::evaluerFormule (const C_BDD & /* valeurFormuleCourante */) {
  const PMUInt16 premierIndiceGauche = (PMUInt16) mIndiceBDDgauche.uintValue () ;
  const PMUInt16 dimension = (PMUInt16) mDimension.uintValue () ;
  const PMUInt16 premierIndiceDroite = (PMUInt16) mIndiceBDDdroite.uintValue () ;
  C_BDD::compareEnum comp = C_BDD::kEqual ;
  switch (mComparaison.uintValue ()) {
  case 1 :
    comp = C_BDD::kNotEqual ;
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
                                                         const PMSInt32 /* numeroFormuleCourante */) {
}

//----------------------------------------------------------------------------*
//                                                                            *
//            Methods of 'cPtr_typeDirectVariable'                            *
//                                                                            *
//----------------------------------------------------------------------------*

PMSInt32 cPtr_typeDirectVariable::
getBDDvariablesCount (void) const {
  return (PMSInt32) mBitSize.uintValue () ;
}

//----------------------------------------------------------------------------*

PMSInt32 cPtr_typeDirectVariable::
getBDDslotCount (void) const {
  return 1 ;
}

//----------------------------------------------------------------------------*

void cPtr_typeDirectVariable::
defineBDDvariableNames (C_Display_BDD & ioBDDvariableNameArray,
                        const C_String & inVariableName,
                        PMUInt32 & ioIndex) const {
  const PMUInt32 dimension = mBitSize.uintValue () ;
  ioBDDvariableNameArray.definir (ioIndex, inVariableName.cString (HERE), (PMUInt16) dimension) ;
  ioIndex ++ ;
}

//----------------------------------------------------------------------------*

void cPtr_typeDirectVariable::
computeBoundsConstraint (C_BDD & ioConstraint) const {
  const PMUInt32 borneInf = mLowBound.uintValue () ;
  const PMUInt32 borneSup = mHighBound.uintValue () ;
  const PMUInt16 varIndex = (PMUInt16) mIndex.uintValue () ;
  const PMUInt16 bitSize = (PMUInt16) mBitSize.uintValue () ;
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

PMSInt32 cPtr_typeRecordVariable::
getBDDvariablesCount (void) const {
  PMSInt32 variableCount = 0 ;
  GGS_typeTableVariablesBool::cElement * p = mMap.firstObject () ;
  while (p != NULL) {
    macroValidPointer (p) ;
    variableCount += p->mInfo.mVariableDescriptor (HERE)->getBDDvariablesCount () ;
    p = p->nextObject () ;
  }
  return variableCount ;
}

//----------------------------------------------------------------------------*

PMSInt32 cPtr_typeRecordVariable::
getBDDslotCount (void) const {
  PMSInt32 slotCount = 0 ;
  GGS_typeTableVariablesBool::cElement * p = mMap.firstObject () ;
  while (p != NULL) {
    macroValidPointer (p) ;
    slotCount += p->mInfo.mVariableDescriptor (HERE)->getBDDslotCount () ;
    p = p->nextObject () ;
  }
  return slotCount ;
}

//----------------------------------------------------------------------------*

void cPtr_typeRecordVariable::
defineBDDvariableNames (C_Display_BDD & ioBDDvariableNameArray,
                        const C_String & inVariableName,
                        PMUInt32 & ioIndex) const {
  GGS_typeTableVariablesBool::cElement * p = mMap.firstObject () ;
  while (p != NULL) {
    macroValidPointer (p) ;
    C_String variableName ;
    variableName << inVariableName << "." << p->mKey ;
    p->mInfo.mVariableDescriptor (HERE)->defineBDDvariableNames (ioBDDvariableNameArray, variableName, ioIndex) ;
    p = p->nextObject () ;
  }
}

//----------------------------------------------------------------------------*

void cPtr_typeRecordVariable::
computeBoundsConstraint (C_BDD & ioConstraint) const {
  GGS_typeTableVariablesBool::cElement * p = mMap.firstObject () ;
  while (p != NULL) {
    macroValidPointer (p) ;
    p->mInfo.mVariableDescriptor (HERE)->computeBoundsConstraint (ioConstraint) ;
    p = p->nextObject () ;
  }
}

//---------------------------------------------------------------------*
