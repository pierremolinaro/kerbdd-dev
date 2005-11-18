//----------------------------------------------------------------------------*
//                                                                            *
//                        Table 'cTableVariablesBDD'                          *
//                                                                            *
//----------------------------------------------------------------------------*

#ifndef IMPLEMENTATION_TABLE_VARIABLES_BDD_DEFINIE
#define IMPLEMENTATION_TABLE_VARIABLES_BDD_DEFINIE

//----------------------------------------------------------------------------*

#include "cTableVariablesBDD.h"

//----------------------------------------------------------------------------*

template <class INFO>
cElementTableVariablesBDD <INFO>::
cElementTableVariablesBDD (const INFO & info,
                           const GGS_lstring & clef,
                           const sint32 numeroElement) {
  mEntryIndex = numeroElement ;
  mNextItem = NULL ;
  champPtrVersInf = NULL ;
  champPtrVersSup = NULL ;
  mKey = clef ;
  mInfo = info ;
}

//----------------------------------------------------------------------------*

template <class INFO> cElementTableVariablesBDD <INFO>::
~cElementTableVariablesBDD (void) {
  macroMyDelete (champPtrVersInf, element_type) ;
  macroMyDelete (champPtrVersSup, element_type) ;
}

//----------------------------------------------------------------------------*

template <class INFO>
cTableVariablesBDD <INFO>::cTableVariablesBDD (void) {
  mRoot = NULL ;
  mFirstItem = NULL ;
  mLastItem = NULL ;
  mListLength = 0 ;
  mBDDbitsCount = 0 ;
  mReferenceCountPtr = NULL ;
}

//----------------------------------------------------------------------------*

template <class INFO>
cTableVariablesBDD <INFO>::~cTableVariablesBDD (void) {
  destroy () ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//        Constructor from empty                                             *
//                                                                           *
//---------------------------------------------------------------------------*

template <class INFO>
cTableVariablesBDD <INFO> cTableVariablesBDD <INFO>::
constructor_empty (void) {
  cTableVariablesBDD <INFO> bdd ;
  bdd.mRoot = (element_type *) NULL ;
  bdd.mFirstItem = (element_type *) NULL ;
  bdd.mLastItem = (element_type *) NULL ;
  bdd.mListLength = 0 ;
  bdd.mReferenceCountPtr = (sint32 *) NULL ;
  macroMyNew (bdd.mReferenceCountPtr, sint32 (1)) ;
  return bdd ;
}

//---------------------------------------------------------------------------*

template <class INFO>
void cTableVariablesBDD <INFO>::build (void) {
  drop_operation () ;
  macroMyNew (mReferenceCountPtr, sint32 (1)) ;
}

//---------------------------------------------------------------------------*

template <class INFO>
void cTableVariablesBDD <INFO>::drop_operation (void) {
  mFirstItem = (element_type *) NULL ;
  mLastItem = (element_type *) NULL ;
  mListLength = 0 ;
  if (mReferenceCountPtr != NULL) {
    macroValidPointer (mReferenceCountPtr) ;
    if ((*mReferenceCountPtr) == 1) {
      macroMyDelete (mRoot, element_type) ;
      macroMyDelete (mReferenceCountPtr, sint32) ;
    }else{
      mRoot = (element_type *) NULL ;
      (*mReferenceCountPtr) -- ;
      mReferenceCountPtr = (sint32 *) NULL ;
    }
  }
}

//----------------------------------------------------------------------------*

template <class INFO>
cTableVariablesBDD <INFO>::
cTableVariablesBDD (const cTableVariablesBDD <INFO> & inSource) {
  mRoot = NULL ;
  mFirstItem = NULL ;
  mLastItem = NULL ;
  mListLength = 0 ;
  mBDDbitsCount = 0 ;
  mReferenceCountPtr = NULL ;
  *this = inSource ;
}

//----------------------------------------------------------------------------*

template <class INFO>
void cTableVariablesBDD <INFO>::
operator = (const cTableVariablesBDD <INFO> & inSource) {
  if (this != & inSource) {
    destroy () ;
    mRoot = inSource.mRoot ;
    mFirstItem = inSource.mFirstItem ;
    mLastItem = inSource.mLastItem ;
    mListLength = inSource.mListLength ;
    mBDDbitsCount = inSource.mBDDbitsCount ;
    mReferenceCountPtr = inSource.mReferenceCountPtr ;
    if (mReferenceCountPtr != NULL) {
      macroValidPointer (mReferenceCountPtr) ;
      (*mReferenceCountPtr) ++ ;
    }
  }
}

//----------------------------------------------------------------------------*

template <class INFO>
void cTableVariablesBDD <INFO>::destroy (void) {
  mFirstItem = NULL ;
  mLastItem = NULL ;
  mListLength = 0 ;
  mBDDbitsCount = 0 ;
  if (mReferenceCountPtr != NULL) {
    macroValidPointer (mReferenceCountPtr) ;
    if ((*mReferenceCountPtr) == 1) {
      macroMyDelete (mRoot, element_type) ;
      macroMyDelete (mReferenceCountPtr, sint32) ;
    }else{
      mRoot = NULL ;
      (*mReferenceCountPtr) -- ;
      mReferenceCountPtr = NULL ;
    }
  }
}

//----------------------------------------------------------------------------*

template <class INFO>
void cTableVariablesBDD <INFO>::insulateMap (void) {
//--- Si la table est referencee plusieurs fois, la dupliquer
  if (mReferenceCountPtr != NULL) {
    macroValidPointer (mReferenceCountPtr) ;
    if ((*mReferenceCountPtr) > 1) {
      (*mReferenceCountPtr) -- ;
      mReferenceCountPtr = NULL ;
      macroMyNew (mReferenceCountPtr, sint32 (1)) ;
      element_type * p = mFirstItem ;
      mLastItem = NULL ;
      mFirstItem = NULL ;
      mRoot = NULL ;
      mListLength = 0 ;
      mBDDbitsCount = 0 ;
      while (p != NULL) {
        macroValidPointer (p) ;
        insererInterne (p->mInfo, p->mKey, mRoot) ;
        p = p->nextObject () ;
      }
    }
  }
}

//----------------------------------------------------------------------------*

template <class INFO>
sint32 cTableVariablesBDD <INFO>::
insertKey (C_Lexique & inLexique,
        const INFO & info,
        const GGS_lstring & clef,
        const GGS_location & positionErreur,
        const char * messageErreurInsertion) {
  sint32 indiceAllocationBDD = -1 ;
  if (isBuilt ()) {
  //--- Si la table est referencee plusieurs fois, la dupliquer
    insulateMap () ;
  //--- Realiser l'insertion
    indiceAllocationBDD = insererInterne (info, clef, mRoot) ;
  //--- Erreur d'insertion : la clef existe deja
    if (indiceAllocationBDD < 0) {
      positionErreur.semanticError (inLexique, messageErreurInsertion) ;
    }
  }
  return indiceAllocationBDD ;
}

//----------------------------------------------------------------------------*

template <class INFO>
sint32 cTableVariablesBDD <INFO>::
insererInterne (const INFO & info,
                const GGS_lstring & clef,
                element_type * & racine) {
  sint32 indiceAllocationBDD = -1 ;
  if (racine == NULL) {
    macroMyNew (racine, element_type (info, clef, mListLength)) ;
    if (mLastItem == NULL) {
      mFirstItem = racine ;
    }else{
      macroValidPointer (mLastItem) ;
      mLastItem->mNextItem = racine ;
    }
    mLastItem = racine ;
    racine->mInfo.mVariableDescriptor (HERE)->allocateBDDvariables (mBDDbitsCount) ;
    indiceAllocationBDD = mListLength ;
    mListLength ++ ;
  }else{
    macroValidPointer (racine) ;
    const sint32 comparaison = racine->mKey.compare (clef) ;
    if (comparaison > 0) {
      indiceAllocationBDD = insererInterne (info, clef, racine->champPtrVersInf) ;
    }else if (comparaison < 0) {
      indiceAllocationBDD = insererInterne (info, clef, racine->champPtrVersSup) ;
    }else{
      indiceAllocationBDD = -1 ;
    }
  }
  return indiceAllocationBDD ;
}

//----------------------------------------------------------------------------*

template <class INFO>
GGS_bool cTableVariablesBDD <INFO>::reader_hasKey (const GGS_string & clef) {
  bool trouve = false ;
  if (isBuilt () && clef.isBuilt ()) {
    element_type * element = mRoot ;
    while ((element != NULL) && ! trouve) {
      macroValidPointer (element) ;
      const sint32 comparaison = element->mKey.compare (clef.string ()) ;
      if (comparaison > 0) {
        element = element->champPtrVersInf ;
      }else if (comparaison < 0) {
        element = element->champPtrVersSup ;
      }else{
        trouve = true ;
      }
    }
  }
  return GGS_bool (true, trouve) ;
}

//----------------------------------------------------------------------------*

template <class INFO>
cElementTableVariablesBDD <INFO> * cTableVariablesBDD <INFO>::
searchKey (C_Lexique & inLexique,
           const GGS_lstring & clef,
           const GGS_location & positionErreur,
           const char * messageErreurRecherche) {
  element_type * resultat = (element_type *) NULL ;
  if (isBuilt () && clef.isBuilt ()) {
    resultat = mRoot ;
    bool trouve = false ;
    while ((resultat != NULL) && ! trouve) {
      macroValidPointer (resultat) ;
      const sint32 comparaison = resultat->mKey.compare (clef) ;
      if (comparaison > 0) {
        resultat = resultat->champPtrVersInf ;
      }else if (comparaison < 0) {
        resultat = resultat->champPtrVersSup ;
      }else{
        trouve = true ;
      }
    }
    if (resultat == NULL) {
      positionErreur.semanticError (inLexique, messageErreurRecherche) ;
    }else{
      macroValidPointer (resultat) ;
    }
  }
  return resultat ;
}

//----------------------------------------------------------------------------*

#endif
