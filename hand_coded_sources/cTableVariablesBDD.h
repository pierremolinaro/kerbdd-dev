//----------------------------------------------------------------------------*
//                                                                            *
//                        Table 'cTableVariablesBDD'                          *
//                                                                            *
//----------------------------------------------------------------------------*

#ifndef TABLE_VARIABLES_BDD_DEFINIE
#define TABLE_VARIABLES_BDD_DEFINIE

//----------------------------------------------------------------------------*

#include "utilities/M_machine.h"

//----------------------------------------------------------------------------*

class AC_OutputStream ;
class AC_galgas_io ;
class GGS_location ;
class GGS_lstring ;

template <class INFO> class cTableVariablesBDD ;

//----------------------------------------------------------------------------*
//                                                                            *
//        classe element table 'cElementTableVariablesBDD'                    *
//                                                                            *
//----------------------------------------------------------------------------*

template <class INFO> class cElementTableVariablesBDD {
  public : typedef cElementTableVariablesBDD <INFO> element_type ;
//--- Protection contre la duplication 
  private : cElementTableVariablesBDD (element_type &) ;
  private : void operator = (element_type &) ;

//--- Attributs
  protected : element_type * mNextItem ;
  public : element_type * champPtrVersInf ;
  public : element_type * champPtrVersSup ;
  public : GGS_lstring mKey ;
  public : INFO mInfo ;
  public : sint32 mEntryIndex ;

//--- First item
  public : inline element_type * nextObject (void) { return mNextItem ; }
 
//--- Constructeur et destructeur
  public : cElementTableVariablesBDD (const INFO & info,
                                      const GGS_lstring & clef,
                                      const sint32 numeroElement) ;
  public : ~cElementTableVariablesBDD (void) ;

//--- Affichage
  #ifndef DO_NOT_GENERATE_PRINT_METHODS
    public : void printAttribute (const sint32 indentation,
                                  AC_OutputStream & es) const ;
  #endif

//--- Friend
  friend class cTableVariablesBDD <INFO> ;
} ;

//----------------------------------------------------------------------------*
//                                                                            *
//                     Table 'cTableVariablesBDD'                             *
//                                                                            *
//----------------------------------------------------------------------------*

template <class INFO> class cTableVariablesBDD {
  public : typedef cElementTableVariablesBDD <INFO> element_type ;
  public : element_type * mRoot ;
  protected : element_type * mFirstItem ;
  public : element_type * mLastItem ;
  public : sint32 mListLength ;
  public : unsigned short mBDDbitsCount ;
  private : sint32 * mReferenceCountPtr ;

  public : cTableVariablesBDD (void) ; // Constructeur par defaut
  public : virtual ~cTableVariablesBDD (void) ;

//--- Count
  public : inline sint32 count (void) const { return mListLength ; }

//--- First item
  public : inline element_type * firstObject (void) const { return mFirstItem ; }
 
//--- Gerer la duplication
  public : cTableVariablesBDD (const cTableVariablesBDD <INFO> &) ; // Constructeur de recopie
  public : void operator = (const cTableVariablesBDD <INFO> &) ; // Operateur d'affectation

  public : void build (void) ;
  public : void drop_operation (void) ;
  public : void destroy (void) ;
  protected : void insulateMap (void) ;

//--- 'empty' constructor
  public : static cTableVariablesBDD constructor_empty (void) ;

//--- Methode 'isBuilt'
  public : inline bool isBuilt (void) const {
    return mReferenceCountPtr != NULL ;
  }

//--- Methode recherche
  public : element_type * searchKey (C_Lexique & inLexique,
                                  const GGS_lstring & clef,
                                  const GGS_location & positionErreur,
                                  const char * messageErreurRecherche) ;

//--- Methode d'insertion
  public : sint32 insertKey (C_Lexique & inLexique,
                          const INFO & info,
                          const GGS_lstring & clef,
                          const GGS_location & positionErreur,
                          const char * messageErreurInsertion) ;

//--- Methode test
  public : GGS_bool reader_hasKey (const GGS_string & clef) ;

//--- Methodes internes privees ( renvoie -1 si erreur)
  private : sint32 insererInterne (const INFO & info,
                                   const GGS_lstring & clef,
                                   element_type * & racine) ;
} ;

//----------------------------------------------------------------------------*

#endif
