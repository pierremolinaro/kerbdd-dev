#ifndef all_2D_declarations_2D__30__ENTITIES_DEFINED
#define all_2D_declarations_2D__30__ENTITIES_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*



#ifndef kerbdd_5F_lexique_CLASS_DEFINED
#define kerbdd_5F_lexique_CLASS_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/C_Lexique.h"
#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    E X T E R N    R O U T I N E S                                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    E X T E R N    F U N C T I O N S                                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       T O K E N    C L A S S                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cTokenFor_kerbdd_5F_lexique : public cToken {
  public : C_String mLexicalAttribute_tokenString ;
  public : uint32_t mLexicalAttribute_uint_33__32_value ;

  public : cTokenFor_kerbdd_5F_lexique (void) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     S C A N N E R    C L A S S                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class C_Lexique_kerbdd_5F_lexique : public C_Lexique {
//--- Constructors
  public : C_Lexique_kerbdd_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inDependencyFileExtension,
                       const C_String & inDependencyFilePath,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public : C_Lexique_kerbdd_5F_lexique (C_Compiler * inCallerCompiler,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public : static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~ C_Lexique_kerbdd_5F_lexique (void) {}
  #endif



//--- Terminal symbols enumeration
  public : enum {kToken_,
   kToken_identifier,
   kToken_integer,
   kToken_literal_5F_string,
   kToken_comment,
   kToken_nodeHashMapSize,
   kToken_andCacheMapSize,
   kToken_domain,
   kToken_bool,
   kToken_true,
   kToken_false,
   kToken_display,
   kToken_include,
   kToken_graphviz,
   kToken_dump,
   kToken__28_,
   kToken__29_,
   kToken__5B_,
   kToken__5D_,
   kToken__7B_,
   kToken__7D_,
   kToken__3A__3D_,
   kToken__3A_,
   kToken__2E_,
   kToken__2E__2E_,
   kToken__2B__3D_,
   kToken__2D__3D_,
   kToken__2D__3E_,
   kToken__26_,
   kToken__7C_,
   kToken__5E_,
   kToken__7E_,
   kToken__2C_,
   kToken__3F_,
   kToken__21_,
   kToken__3B_,
   kToken__3D_,
   kToken__21__3D_,
   kToken__3C_,
   kToken__3C__3D_,
   kToken__3E_,
   kToken__3E__3D_} ;

//--- Key words table 'keyWordList'
  public : static int16_t search_into_keyWordList (const C_String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public : static int16_t search_into_delimitorsList (const C_String & inSearchedString) ;
  

//--- Assign from attribute
  public : GALGAS_lstring synthetizedAttribute_tokenString (void) const ;
  public : GALGAS_luint synthetizedAttribute_uint_33__32_value (void) const ;


//--- Attribute access
  public : C_String attributeValue_tokenString (void) const ;
  public : uint32_t attributeValue_uint_33__32_value (void) const ;


//--- Indexing keys

//--- Indexing directory
  protected : virtual C_String indexingDirectory (void) const ;

//--- Parse lexical token
  protected : virtual bool parseLexicalToken (void) ;

//--- Get terminal message
  protected : virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const ;

//--- Get terminal count
  public : virtual int16_t terminalVocabularyCount (void) const { return 41 ; }

//--- Get Token String
  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;

//--- Enter Token
  protected : void enterToken (const cTokenFor_kerbdd_5F_lexique & inToken) ;

//--- Style name for Latex
  protected : virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const ;
  protected : virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

#endif
//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @domainFieldList list                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_domainFieldList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_domainFieldList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_domainFieldList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mVarName,
                                                  const class GALGAS_bddType & in_mType
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_domainFieldList extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_domainFieldList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_domainFieldList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                    const class GALGAS_bddType & inOperand1
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_domainFieldList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_bddType & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_domainFieldList add_operation (const GALGAS_domainFieldList & inOperand,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_bddType constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_bddType & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_bddType & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_bddType & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_bddType & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bddType & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bddType getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_domainFieldList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_domainFieldList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_domainFieldList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_domainFieldList ;
 
} ; // End of GALGAS_domainFieldList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_domainFieldList : public cGenericAbstractEnumerator {
  public : cEnumerator_domainFieldList (const GALGAS_domainFieldList & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mVarName (LOCATION_ARGS) const ;
  public : class GALGAS_bddType current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_domainFieldList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainFieldList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @bddType enum                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bddType : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_bddType (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_bool,
    kEnum_boolArray,
    kEnum_namedType
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_bddType extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_bddType constructor_bool (LOCATION_ARGS) ;

  public : static GALGAS_bddType constructor_boolArray (const class GALGAS_uint & inOperand0
                                                        COMMA_LOCATION_ARGS) ;

  public : static GALGAS_bddType constructor_namedType (const class GALGAS_lstring & inOperand0
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_bddType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_boolArray (class GALGAS_uint & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_namedType (class GALGAS_lstring & outArgument0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBool (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBoolArray (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNamedType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_bddType class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bddType ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @bddType enum, associated values                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_bddType_boolArray : public cEnumAssociatedValues {
  public : const GALGAS_uint mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_bddType_boolArray (const GALGAS_uint & inAssociatedValue0
                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_bddType_boolArray (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_bddType_namedType : public cEnumAssociatedValues {
  public : const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_bddType_namedType (const GALGAS_lstring & inAssociatedValue0
                                                    COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_bddType_namedType (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @domainFieldList_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_domainFieldList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mVarName ;
  public : GALGAS_bddType mAttribute_mType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_domainFieldList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_domainFieldList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_domainFieldList_2D_element (const GALGAS_lstring & in_mVarName,
                                              const GALGAS_bddType & in_mType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_domainFieldList_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_domainFieldList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_bddType & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_domainFieldList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bddType getter_mType (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_domainFieldList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainFieldList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @domainDeclarationList list                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_domainDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_domainDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_domainDeclarationList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mDomainName,
                                                  const class GALGAS_domainDeclarationType & in_mType
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_domainDeclarationList extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_domainDeclarationList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_domainDeclarationList constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                          const class GALGAS_domainDeclarationType & inOperand1
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_domainDeclarationList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_domainDeclarationType & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_domainDeclarationList add_operation (const GALGAS_domainDeclarationList & inOperand,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_domainDeclarationType constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_domainDeclarationType & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_domainDeclarationType & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_domainDeclarationType & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_domainDeclarationType & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_domainDeclarationType & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDomainNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_domainDeclarationType getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_domainDeclarationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_domainDeclarationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_domainDeclarationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_domainDeclarationList ;
 
} ; // End of GALGAS_domainDeclarationList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_domainDeclarationList : public cGenericAbstractEnumerator {
  public : cEnumerator_domainDeclarationList (const GALGAS_domainDeclarationList & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mDomainName (LOCATION_ARGS) const ;
  public : class GALGAS_domainDeclarationType current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_domainDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @domainDeclarationType enum                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_domainDeclarationType : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_domainDeclarationType (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_type,
    kEnum_record
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_domainDeclarationType extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_domainDeclarationType constructor_record (const class GALGAS_domainFieldList & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

  public : static GALGAS_domainDeclarationType constructor_type (const class GALGAS_bddType & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_domainDeclarationType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_record (class GALGAS_domainFieldList & outArgument0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_type (class GALGAS_bddType & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRecord (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_domainDeclarationType class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationType ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @domainDeclarationType enum, associated values                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_domainDeclarationType_type : public cEnumAssociatedValues {
  public : const GALGAS_bddType mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_domainDeclarationType_type (const GALGAS_bddType & inAssociatedValue0
                                                             COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_domainDeclarationType_type (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_domainDeclarationType_record : public cEnumAssociatedValues {
  public : const GALGAS_domainFieldList mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_domainDeclarationType_record (const GALGAS_domainFieldList & inAssociatedValue0
                                                               COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_domainDeclarationType_record (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @domainDeclarationList_2D_element struct                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_domainDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mDomainName ;
  public : GALGAS_domainDeclarationType mAttribute_mType ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_domainDeclarationList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_domainDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_domainDeclarationList_2D_element (const GALGAS_lstring & in_mDomainName,
                                                    const GALGAS_domainDeclarationType & in_mType) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_domainDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_domainDeclarationList_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                           const class GALGAS_domainDeclarationType & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_domainDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDomainName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_domainDeclarationType getter_mType (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_domainDeclarationList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @recordDomainMap map                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_recordDomainMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_recordDomainMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_recordDomainMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_recordDomainMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_recordDomainMap (const GALGAS_recordDomainMap & inSource) ;
  public : GALGAS_recordDomainMap & operator = (const GALGAS_recordDomainMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_recordDomainMap extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_recordDomainMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_recordDomainMap constructor_mapWithMapToOverride (const class GALGAS_recordDomainMap & inOperand0
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      const class GALGAS_recordDomainMap & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   class GALGAS_uint constinArgument2,
                                                   class GALGAS_recordDomainMap constinArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBitCountForKey (class GALGAS_uint constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMSubDomainForKey (class GALGAS_recordDomainMap constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   class GALGAS_uint & outArgument2,
                                                   class GALGAS_recordDomainMap & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitCountForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_recordDomainMap getter_mSubDomainForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_recordDomainMap getter_overriddenMap (C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_recordDomainMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & inKey
                                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_recordDomainMap ;
 
} ; // End of GALGAS_recordDomainMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_recordDomainMap : public cGenericAbstractEnumerator {
  public : cEnumerator_recordDomainMap (const GALGAS_recordDomainMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mBitCount (LOCATION_ARGS) const ;
  public : class GALGAS_recordDomainMap current_mSubDomain (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_recordDomainMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_recordDomainMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@recordDomainMap' map                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_recordDomainMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mIndex ;
  public : GALGAS_uint mAttribute_mBitCount ;
  public : GALGAS_recordDomainMap mAttribute_mSubDomain ;

//--- Constructor
  public : cMapElement_recordDomainMap (const GALGAS_lstring & inKey,
                                        const GALGAS_uint & in_mIndex,
                                        const GALGAS_uint & in_mBitCount,
                                        const GALGAS_recordDomainMap & in_mSubDomain
                                        COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @recordDomainMap_2D_element struct                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_recordDomainMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mIndex ;
  public : GALGAS_uint mAttribute_mBitCount ;
  public : GALGAS_recordDomainMap mAttribute_mSubDomain ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_recordDomainMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_recordDomainMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_recordDomainMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_recordDomainMap_2D_element (const GALGAS_lstring & in_lkey,
                                              const GALGAS_uint & in_mIndex,
                                              const GALGAS_uint & in_mBitCount,
                                              const GALGAS_recordDomainMap & in_mSubDomain) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_recordDomainMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_recordDomainMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                     const class GALGAS_uint & inOperand1,
                                                                     const class GALGAS_uint & inOperand2,
                                                                     const class GALGAS_recordDomainMap & inOperand3
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_recordDomainMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_recordDomainMap getter_mSubDomain (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_recordDomainMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_recordDomainMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @domainMap map                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_domainMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_domainMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_domainMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_domainMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_domainMap (const GALGAS_domainMap & inSource) ;
  public : GALGAS_domainMap & operator = (const GALGAS_domainMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_domainMap extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_domainMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_domainMap constructor_mapWithMapToOverride (const class GALGAS_domainMap & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_recordDomainMap & inOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   class GALGAS_recordDomainMap constinArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBitCountForKey (class GALGAS_uint constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRecordMapForKey (class GALGAS_recordDomainMap constinArgument0,
                                                             class GALGAS_string constinArgument1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   class GALGAS_recordDomainMap & outArgument2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitCountForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_recordDomainMap getter_mRecordMapForKey (const class GALGAS_string & constinOperand0,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_domainMap getter_overriddenMap (C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_domainMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_domainMap ;
 
} ; // End of GALGAS_domainMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_domainMap : public cGenericAbstractEnumerator {
  public : cEnumerator_domainMap (const GALGAS_domainMap & inEnumeratedObject,
                                  const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mBitCount (LOCATION_ARGS) const ;
  public : class GALGAS_recordDomainMap current_mRecordMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_domainMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Class for element of '@domainMap' map                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_domainMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mBitCount ;
  public : GALGAS_recordDomainMap mAttribute_mRecordMap ;

//--- Constructor
  public : cMapElement_domainMap (const GALGAS_lstring & inKey,
                                  const GALGAS_uint & in_mBitCount,
                                  const GALGAS_recordDomainMap & in_mRecordMap
                                  COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @domainMap_2D_element struct                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_domainMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mBitCount ;
  public : GALGAS_recordDomainMap mAttribute_mRecordMap ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_domainMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_domainMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_domainMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_domainMap_2D_element (const GALGAS_lstring & in_lkey,
                                        const GALGAS_uint & in_mBitCount,
                                        const GALGAS_recordDomainMap & in_mRecordMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_domainMap_2D_element extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_domainMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                               const class GALGAS_uint & inOperand1,
                                                               const class GALGAS_recordDomainMap & inOperand2
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_domainMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_recordDomainMap getter_mRecordMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_domainMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @varList list                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_varList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_varList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_string & in_mVarName,
                                                  const class GALGAS_uint & in_mBitIndex,
                                                  const class GALGAS_uint & in_mBitCount
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varList extractObject (const GALGAS_object & inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_varList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_varList constructor_listWithValue (const class GALGAS_string & inOperand0,
                                                            const class GALGAS_uint & inOperand1,
                                                            const class GALGAS_uint & inOperand2
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_varList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_uint & inOperand2
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_varList add_operation (const GALGAS_varList & inOperand,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 class GALGAS_uint & outArgument2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                       class GALGAS_uint & outArgument1,
                                                       class GALGAS_uint & outArgument2,
                                                       class GALGAS_uint constinArgument3,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                               class GALGAS_uint & outArgument1,
                                               class GALGAS_uint & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              class GALGAS_uint & outArgument2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitCountAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mVarNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_varList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_varList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_varList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_varList ;
 
} ; // End of GALGAS_varList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_varList : public cGenericAbstractEnumerator {
  public : cEnumerator_varList (const GALGAS_varList & inEnumeratedObject,
                                const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_string current_mVarName (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mBitIndex (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mBitCount (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_varList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @varList_2D_element struct                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_string mAttribute_mVarName ;
  public : GALGAS_uint mAttribute_mBitIndex ;
  public : GALGAS_uint mAttribute_mBitCount ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_varList_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_varList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_varList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_varList_2D_element (const GALGAS_string & in_mVarName,
                                      const GALGAS_uint & in_mBitIndex,
                                      const GALGAS_uint & in_mBitCount) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varList_2D_element extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_varList_2D_element constructor_new (const class GALGAS_string & inOperand0,
                                                             const class GALGAS_uint & inOperand1,
                                                             const class GALGAS_uint & inOperand2
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_string getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @varMap map                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_varMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_varMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_varMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_varMap (const GALGAS_varMap & inSource) ;
  public : GALGAS_varMap & operator = (const GALGAS_varMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varMap extractObject (const GALGAS_object & inObject,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_varMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_varMap constructor_mapWithMapToOverride (const class GALGAS_varMap & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_uint & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      const class GALGAS_recordDomainMap & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint constinArgument1,
                                                   class GALGAS_uint constinArgument2,
                                                   class GALGAS_recordDomainMap constinArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBitCountForKey (class GALGAS_uint constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMRecordDomainMapForKey (class GALGAS_recordDomainMap constinArgument0,
                                                                   class GALGAS_string constinArgument1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_uint & outArgument1,
                                                   class GALGAS_uint & outArgument2,
                                                   class GALGAS_recordDomainMap & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitCountForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_recordDomainMap getter_mRecordDomainMapForKey (const class GALGAS_string & constinOperand0,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_varMap getter_overriddenMap (C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_varMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                    const GALGAS_string & inKey
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_varMap ;
 
} ; // End of GALGAS_varMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_varMap : public cGenericAbstractEnumerator {
  public : cEnumerator_varMap (const GALGAS_varMap & inEnumeratedObject,
                               const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mBitCount (LOCATION_ARGS) const ;
  public : class GALGAS_recordDomainMap current_mRecordDomainMap (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_varMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Class for element of '@varMap' map                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_varMap : public cMapElement {
//--- Map attributes
  public : GALGAS_uint mAttribute_mIndex ;
  public : GALGAS_uint mAttribute_mBitCount ;
  public : GALGAS_recordDomainMap mAttribute_mRecordDomainMap ;

//--- Constructor
  public : cMapElement_varMap (const GALGAS_lstring & inKey,
                               const GALGAS_uint & in_mIndex,
                               const GALGAS_uint & in_mBitCount,
                               const GALGAS_recordDomainMap & in_mRecordDomainMap
                               COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @varMap_2D_element struct                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_uint mAttribute_mIndex ;
  public : GALGAS_uint mAttribute_mBitCount ;
  public : GALGAS_recordDomainMap mAttribute_mRecordDomainMap ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_varMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_varMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_varMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_varMap_2D_element (const GALGAS_lstring & in_lkey,
                                     const GALGAS_uint & in_mIndex,
                                     const GALGAS_uint & in_mBitCount,
                                     const GALGAS_recordDomainMap & in_mRecordDomainMap) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varMap_2D_element extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_varMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                            const class GALGAS_uint & inOperand1,
                                                            const class GALGAS_uint & inOperand2,
                                                            const class GALGAS_recordDomainMap & inOperand3
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndex (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_recordDomainMap getter_mRecordDomainMap (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @computedFormulaMap map                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_computedFormulaMap ;

//---------------------------------------------------------------------------------------------------------------------*

extern const char * kSearchErrorMessage_computedFormulaMap_searchKey ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_computedFormulaMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public : GALGAS_computedFormulaMap (void) ;

//--------------------------------- Handle copy
  public : GALGAS_computedFormulaMap (const GALGAS_computedFormulaMap & inSource) ;
  public : GALGAS_computedFormulaMap & operator = (const GALGAS_computedFormulaMap & inSource) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_computedFormulaMap extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_computedFormulaMap constructor_emptyMap (LOCATION_ARGS) ;

  public : static GALGAS_computedFormulaMap constructor_mapWithMapToOverride (const class GALGAS_computedFormulaMap & inOperand0
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_varList & inOperand1,
                                                      const class GALGAS_uint & inOperand2,
                                                      const class GALGAS_binaryset & inOperand3,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_varList constinArgument1,
                                                   class GALGAS_uint constinArgument2,
                                                   class GALGAS_binaryset constinArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMBitCountForKey (class GALGAS_uint constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMValueForKey (class GALGAS_binaryset constinArgument0,
                                                         class GALGAS_string constinArgument1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_setMVarListForKey (class GALGAS_varList constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                   class GALGAS_varList & outArgument1,
                                                   class GALGAS_uint & outArgument2,
                                                   class GALGAS_binaryset & outArgument3,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitCountForKey (const class GALGAS_string & constinOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_binaryset getter_mValueForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_varList getter_mVarListForKey (const class GALGAS_string & constinOperand0,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_computedFormulaMap getter_overriddenMap (C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
  public : VIRTUAL_IN_DEBUG cMapElement_computedFormulaMap * readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                const GALGAS_string & inKey
                                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_computedFormulaMap ;
 
} ; // End of GALGAS_computedFormulaMap class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_computedFormulaMap : public cGenericAbstractEnumerator {
  public : cEnumerator_computedFormulaMap (const GALGAS_computedFormulaMap & inEnumeratedObject,
                                           const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public : class GALGAS_varList current_mVarList (LOCATION_ARGS) const ;
  public : class GALGAS_uint current_mBitCount (LOCATION_ARGS) const ;
  public : class GALGAS_binaryset current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_computedFormulaMap_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedFormulaMap ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@computedFormulaMap' map                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cMapElement_computedFormulaMap : public cMapElement {
//--- Map attributes
  public : GALGAS_varList mAttribute_mVarList ;
  public : GALGAS_uint mAttribute_mBitCount ;
  public : GALGAS_binaryset mAttribute_mValue ;

//--- Constructor
  public : cMapElement_computedFormulaMap (const GALGAS_lstring & inKey,
                                           const GALGAS_varList & in_mVarList,
                                           const GALGAS_uint & in_mBitCount,
                                           const GALGAS_binaryset & in_mValue
                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cMapElement * copy (void) ;

//--- Description
 public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @computedFormulaMap_2D_element struct                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_computedFormulaMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_lkey ;
  public : GALGAS_varList mAttribute_mVarList ;
  public : GALGAS_uint mAttribute_mBitCount ;
  public : GALGAS_binaryset mAttribute_mValue ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_computedFormulaMap_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_computedFormulaMap_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_computedFormulaMap_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_computedFormulaMap_2D_element (const GALGAS_lstring & in_lkey,
                                                 const GALGAS_varList & in_mVarList,
                                                 const GALGAS_uint & in_mBitCount,
                                                 const GALGAS_binaryset & in_mValue) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_computedFormulaMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_computedFormulaMap_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_varList & inOperand1,
                                                                        const class GALGAS_uint & inOperand2,
                                                                        const class GALGAS_binaryset & inOperand3
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_computedFormulaMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_lkey (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitCount (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_binaryset getter_mValue (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_varList getter_mVarList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_computedFormulaMap_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedFormulaMap_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @formulaParameterListInExpression list                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_formulaParameterListInExpression : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_formulaParameterListInExpression (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_formulaParameterListInExpression (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_lstring & in_mParameterName,
                                                  const class GALGAS_lstringlist & in_mFieldNames
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_formulaParameterListInExpression extractObject (const GALGAS_object & inObject,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_formulaParameterListInExpression constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_formulaParameterListInExpression constructor_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                     const class GALGAS_lstringlist & inOperand1
                                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_formulaParameterListInExpression inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                      const class GALGAS_lstringlist & inOperand1
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_formulaParameterListInExpression add_operation (const GALGAS_formulaParameterListInExpression & inOperand,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                       class GALGAS_lstringlist constinArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                  class GALGAS_lstringlist & outArgument1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                       class GALGAS_lstringlist & outArgument1,
                                                       class GALGAS_uint constinArgument2,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                               class GALGAS_lstringlist & outArgument1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFieldNamesAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mParameterNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formulaParameterListInExpression getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formulaParameterListInExpression getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formulaParameterListInExpression getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_formulaParameterListInExpression ;
 
} ; // End of GALGAS_formulaParameterListInExpression class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_formulaParameterListInExpression : public cGenericAbstractEnumerator {
  public : cEnumerator_formulaParameterListInExpression (const GALGAS_formulaParameterListInExpression & inEnumeratedObject,
                                                         const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_lstring current_mParameterName (LOCATION_ARGS) const ;
  public : class GALGAS_lstringlist current_mFieldNames (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_formulaParameterListInExpression_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaParameterListInExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @formulaParameterListInExpression_2D_element struct                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_formulaParameterListInExpression_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_lstring mAttribute_mParameterName ;
  public : GALGAS_lstringlist mAttribute_mFieldNames ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_formulaParameterListInExpression_2D_element constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_formulaParameterListInExpression_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_formulaParameterListInExpression_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_formulaParameterListInExpression_2D_element (const GALGAS_lstring & in_mParameterName,
                                                               const GALGAS_lstringlist & in_mFieldNames) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_formulaParameterListInExpression_2D_element extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_formulaParameterListInExpression_2D_element constructor_new (const class GALGAS_lstring & inOperand0,
                                                                                      const class GALGAS_lstringlist & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_formulaParameterListInExpression_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFieldNames (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mParameterName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_formulaParameterListInExpression_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaParameterListInExpression_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @comparison enum                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_comparison : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_comparison (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_equal,
    kEnum_notEqual,
    kEnum_lowerOrEqual,
    kEnum_lowerThan,
    kEnum_greaterOrEqual,
    kEnum_greaterThan
  } enumeration ;
  
//--------------------------------- Private data member
  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_comparison extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_comparison constructor_equal (LOCATION_ARGS) ;

  public : static GALGAS_comparison constructor_greaterOrEqual (LOCATION_ARGS) ;

  public : static GALGAS_comparison constructor_greaterThan (LOCATION_ARGS) ;

  public : static GALGAS_comparison constructor_lowerOrEqual (LOCATION_ARGS) ;

  public : static GALGAS_comparison constructor_lowerThan (LOCATION_ARGS) ;

  public : static GALGAS_comparison constructor_notEqual (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_comparison & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEqual (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGreaterOrEqual (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGreaterThan (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLowerOrEqual (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLowerThan (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNotEqual (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_comparison class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparison ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Parser class 'kerbdd_syntax' declaration                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cParser_kerbdd_5F_syntax {
//--- Virtual destructor
  public : virtual ~ cParser_kerbdd_5F_syntax (void) {}

//--- Non terminal declarations
  protected : virtual void nt_comparison_ (class GALGAS_expression & outArgument0,
                                           class C_Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_comparison_parse (class C_Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_ (class GALGAS_expression & outArgument0,
                                           class C_Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_expression_parse (class C_Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_factor_ (class GALGAS_expression & outArgument0,
                                       class C_Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_factor_parse (class C_Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_recordFields_ (class GALGAS_domainFieldList & outArgument0,
                                             class C_Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_recordFields_parse (class C_Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_ (class GALGAS_ast & outArgument0,
                                                class C_Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_start_5F_symbol_parse (class C_Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_term_ (class GALGAS_expression & outArgument0,
                                     class C_Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_term_parse (class C_Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_topLevelDeClaration_ (class GALGAS_ast & ioArgument0,
                                                    class C_Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_topLevelDeClaration_parse (class C_Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_type_ (class GALGAS_bddType & outArgument0,
                                     class C_Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected : virtual void nt_type_parse (class C_Lexique_kerbdd_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected : void rule_kerbdd_5F_syntax_start_5F_symbol_i0_ (GALGAS_ast & outArgument0,
                                                              C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_topLevelDeClaration_i1_ (GALGAS_ast & ioArgument0,
                                                                  C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_topLevelDeClaration_i1_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_recordFields_i2_ (GALGAS_domainFieldList & outArgument0,
                                                           C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_recordFields_i2_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_type_i3_ (GALGAS_bddType & outArgument0,
                                                   C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_type_i3_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_topLevelDeClaration_i4_ (GALGAS_ast & ioArgument0,
                                                                  C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_topLevelDeClaration_i4_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_topLevelDeClaration_i5_ (GALGAS_ast & ioArgument0,
                                                                  C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_topLevelDeClaration_i5_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_topLevelDeClaration_i6_ (GALGAS_ast & ioArgument0,
                                                                  C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_topLevelDeClaration_i6_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_topLevelDeClaration_i7_ (GALGAS_ast & ioArgument0,
                                                                  C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_topLevelDeClaration_i7_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_topLevelDeClaration_i8_ (GALGAS_ast & ioArgument0,
                                                                  C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_topLevelDeClaration_i8_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_expression_i9_ (GALGAS_expression & outArgument0,
                                                         C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_expression_i9_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_comparison_i10_ (GALGAS_expression & outArgument0,
                                                          C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_comparison_i10_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_term_i11_ (GALGAS_expression & outArgument0,
                                                    C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_term_i11_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_factor_i12_ (GALGAS_expression & outArgument0,
                                                      C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_factor_i12_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_factor_i13_ (GALGAS_expression & outArgument0,
                                                      C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_factor_i13_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_factor_i14_ (GALGAS_expression & outArgument0,
                                                      C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_factor_i14_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_factor_i15_ (GALGAS_expression & outArgument0,
                                                      C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_factor_i15_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_factor_i16_ (GALGAS_expression & outArgument0,
                                                      C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_factor_i16_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_factor_i17_ (GALGAS_expression & outArgument0,
                                                      C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_factor_i17_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_factor_i18_ (GALGAS_expression & outArgument0,
                                                      C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_factor_i18_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_factor_i19_ (GALGAS_expression & outArgument0,
                                                      C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_factor_i19_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_factor_i20_ (GALGAS_expression & outArgument0,
                                                      C_Lexique_kerbdd_5F_lexique * inLexique) ;

  protected : void rule_kerbdd_5F_syntax_factor_i20_parse (C_Lexique_kerbdd_5F_lexique * inLexique) ;



//--- Select methods
  protected : virtual int32_t select_kerbdd_5F_syntax_0 (C_Lexique_kerbdd_5F_lexique *) = 0 ;

  protected : virtual int32_t select_kerbdd_5F_syntax_1 (C_Lexique_kerbdd_5F_lexique *) = 0 ;

  protected : virtual int32_t select_kerbdd_5F_syntax_2 (C_Lexique_kerbdd_5F_lexique *) = 0 ;

  protected : virtual int32_t select_kerbdd_5F_syntax_3 (C_Lexique_kerbdd_5F_lexique *) = 0 ;

  protected : virtual int32_t select_kerbdd_5F_syntax_4 (C_Lexique_kerbdd_5F_lexique *) = 0 ;

  protected : virtual int32_t select_kerbdd_5F_syntax_5 (C_Lexique_kerbdd_5F_lexique *) = 0 ;

  protected : virtual int32_t select_kerbdd_5F_syntax_6 (C_Lexique_kerbdd_5F_lexique *) = 0 ;

  protected : virtual int32_t select_kerbdd_5F_syntax_7 (C_Lexique_kerbdd_5F_lexique *) = 0 ;

  protected : virtual int32_t select_kerbdd_5F_syntax_8 (C_Lexique_kerbdd_5F_lexique *) = 0 ;

  protected : virtual int32_t select_kerbdd_5F_syntax_9 (C_Lexique_kerbdd_5F_lexique *) = 0 ;

  protected : virtual int32_t select_kerbdd_5F_syntax_10 (C_Lexique_kerbdd_5F_lexique *) = 0 ;

  protected : virtual int32_t select_kerbdd_5F_syntax_11 (C_Lexique_kerbdd_5F_lexique *) = 0 ;

  protected : virtual int32_t select_kerbdd_5F_syntax_12 (C_Lexique_kerbdd_5F_lexique *) = 0 ;

  protected : virtual int32_t select_kerbdd_5F_syntax_13 (C_Lexique_kerbdd_5F_lexique *) = 0 ;

  protected : virtual int32_t select_kerbdd_5F_syntax_14 (C_Lexique_kerbdd_5F_lexique *) = 0 ;

  protected : virtual int32_t select_kerbdd_5F_syntax_15 (C_Lexique_kerbdd_5F_lexique *) = 0 ;

  protected : virtual int32_t select_kerbdd_5F_syntax_16 (C_Lexique_kerbdd_5F_lexique *) = 0 ;

  protected : virtual int32_t select_kerbdd_5F_syntax_17 (C_Lexique_kerbdd_5F_lexique *) = 0 ;


} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @expression class                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_expression : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_expression (void) ;

//---
  public : inline const class cPtr_expression * ptr (void) const { return (const cPtr_expression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_expression (const cPtr_expression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_expression extractObject (const GALGAS_object & inObject,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_expression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_expression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Pointer class for @expression class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_expression : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_expression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @andExpression class                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_andExpression : public GALGAS_expression {
//--- Constructor
  public : GALGAS_andExpression (void) ;

//---
  public : inline const class cPtr_andExpression * ptr (void) const { return (const cPtr_andExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_andExpression (const cPtr_andExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_andExpression extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_andExpression constructor_new (const class GALGAS_expression & inOperand0,
                                                        const class GALGAS_expression & inOperand1
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_andExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_andExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @andExpression class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_andExpression : public cPtr_expression {
//--- Attributes
  public : GALGAS_expression mAttribute_mLeftExpression ;
  public : GALGAS_expression mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_andExpression (const GALGAS_expression & in_mLeftExpression,
                               const GALGAS_expression & in_mRightExpression
                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @abstractFormula class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_abstractFormula : public AC_GALGAS_class {
//--- Constructor
  public : GALGAS_abstractFormula (void) ;

//---
  public : inline const class cPtr_abstractFormula * ptr (void) const { return (const cPtr_abstractFormula *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_abstractFormula (const cPtr_abstractFormula * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_abstractFormula extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_abstractFormula & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_abstractFormula class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractFormula ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @abstractFormula class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_abstractFormula : public acPtr_class {
//--- Attributes

//--- Constructor
  public : cPtr_abstractFormula (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const = 0 ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @assignmentFormula class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_assignmentFormula : public GALGAS_abstractFormula {
//--- Constructor
  public : GALGAS_assignmentFormula (void) ;

//---
  public : inline const class cPtr_assignmentFormula * ptr (void) const { return (const cPtr_assignmentFormula *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_assignmentFormula (const cPtr_assignmentFormula * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_assignmentFormula extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_assignmentFormula constructor_new (const class GALGAS_lstring & inOperand0,
                                                            const class GALGAS_domainFieldList & inOperand1,
                                                            const class GALGAS_formulaKind & inOperand2,
                                                            const class GALGAS_expression & inOperand3
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_assignmentFormula & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_domainFieldList getter_mFormulaArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormulaName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formulaKind getter_mKind (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_assignmentFormula class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentFormula ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @formulaKind enum                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_formulaKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public : GALGAS_formulaKind (void) ;

//--------------------------------- Enumeration
  public : typedef enum {
    kNotBuilt,
    kEnum_assignment,
    kEnum_fixedPoint
  } enumeration ;
  
//--------------------------------- Private data member
  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private : enumeration mEnum ;

//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }
  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }
  public : inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_formulaKind extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_formulaKind constructor_assignment (LOCATION_ARGS) ;

  public : static GALGAS_formulaKind constructor_fixedPoint (const class GALGAS_binaryset & inOperand0
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_formulaKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_fixedPoint (class GALGAS_binaryset & outArgument0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAssignment (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFixedPoint (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_formulaKind class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaKind ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @formulaKind enum, associated values                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumAssociatedValues_formulaKind_fixedPoint : public cEnumAssociatedValues {
  public : const GALGAS_binaryset mAssociatedValue0 ;

//--- Constructor
  public : cEnumAssociatedValues_formulaKind_fixedPoint (const GALGAS_binaryset & inAssociatedValue0
                                                         COMMA_LOCATION_ARGS) ;

  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;
  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public : virtual ~ cEnumAssociatedValues_formulaKind_fixedPoint (void) {}
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @assignmentFormula class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_assignmentFormula : public cPtr_abstractFormula {
//--- Attributes
  public : GALGAS_lstring mAttribute_mFormulaName ;
  public : GALGAS_domainFieldList mAttribute_mFormulaArgumentList ;
  public : GALGAS_formulaKind mAttribute_mKind ;
  public : GALGAS_expression mAttribute_mExpression ;

//--- Constructor
  public : cPtr_assignmentFormula (const GALGAS_lstring & in_mFormulaName,
                                   const GALGAS_domainFieldList & in_mFormulaArgumentList,
                                   const GALGAS_formulaKind & in_mKind,
                                   const GALGAS_expression & in_mExpression
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFormulaName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_domainFieldList getter_mFormulaArgumentList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formulaKind getter_mKind (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @comparisonWithConstantInExpression class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_comparisonWithConstantInExpression : public GALGAS_expression {
//--- Constructor
  public : GALGAS_comparisonWithConstantInExpression (void) ;

//---
  public : inline const class cPtr_comparisonWithConstantInExpression * ptr (void) const { return (const cPtr_comparisonWithConstantInExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_comparisonWithConstantInExpression (const cPtr_comparisonWithConstantInExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_comparisonWithConstantInExpression extractObject (const GALGAS_object & inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_comparisonWithConstantInExpression constructor_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstringlist & inOperand1,
                                                                             const class GALGAS_comparison & inOperand2,
                                                                             const class GALGAS_luint & inOperand3
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_comparisonWithConstantInExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_comparison getter_mComparison (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mConstant (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFieldNames (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_comparisonWithConstantInExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonWithConstantInExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Pointer class for @comparisonWithConstantInExpression class                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_comparisonWithConstantInExpression : public cPtr_expression {
//--- Attributes
  public : GALGAS_lstring mAttribute_mVarName ;
  public : GALGAS_lstringlist mAttribute_mFieldNames ;
  public : GALGAS_comparison mAttribute_mComparison ;
  public : GALGAS_luint mAttribute_mConstant ;

//--- Constructor
  public : cPtr_comparisonWithConstantInExpression (const GALGAS_lstring & in_mVarName,
                                                    const GALGAS_lstringlist & in_mFieldNames,
                                                    const GALGAS_comparison & in_mComparison,
                                                    const GALGAS_luint & in_mConstant
                                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mFieldNames (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_comparison getter_mComparison (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mConstant (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @complementExpression class                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_complementExpression : public GALGAS_expression {
//--- Constructor
  public : GALGAS_complementExpression (void) ;

//---
  public : inline const class cPtr_complementExpression * ptr (void) const { return (const cPtr_complementExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_complementExpression (const cPtr_complementExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_complementExpression extractObject (const GALGAS_object & inObject,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_complementExpression constructor_new (const class GALGAS_expression & inOperand0
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_complementExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_complementExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_complementExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @complementExpression class                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_complementExpression : public cPtr_expression {
//--- Attributes
  public : GALGAS_expression mAttribute_mExpression ;

//--- Constructor
  public : cPtr_complementExpression (const GALGAS_expression & in_mExpression
                                      COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @dumpFormula class                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_dumpFormula : public GALGAS_abstractFormula {
//--- Constructor
  public : GALGAS_dumpFormula (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_dumpFormula constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_dumpFormula * ptr (void) const { return (const cPtr_dumpFormula *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_dumpFormula (const cPtr_dumpFormula * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_dumpFormula extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_dumpFormula constructor_new (const class GALGAS_lstring & inOperand0
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_dumpFormula & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormulaName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_dumpFormula class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dumpFormula ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Pointer class for @dumpFormula class                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_dumpFormula : public cPtr_abstractFormula {
//--- Attributes
  public : GALGAS_lstring mAttribute_mFormulaName ;

//--- Constructor
  public : cPtr_dumpFormula (const GALGAS_lstring & in_mFormulaName
                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFormulaName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @equalExpression class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_equalExpression : public GALGAS_expression {
//--- Constructor
  public : GALGAS_equalExpression (void) ;

//---
  public : inline const class cPtr_equalExpression * ptr (void) const { return (const cPtr_equalExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_equalExpression (const cPtr_equalExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_equalExpression extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_equalExpression constructor_new (const class GALGAS_expression & inOperand0,
                                                          const class GALGAS_expression & inOperand1
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_equalExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_equalExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equalExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @equalExpression class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_equalExpression : public cPtr_expression {
//--- Attributes
  public : GALGAS_expression mAttribute_mLeftExpression ;
  public : GALGAS_expression mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_equalExpression (const GALGAS_expression & in_mLeftExpression,
                                 const GALGAS_expression & in_mRightExpression
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @existInExpression class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_existInExpression : public GALGAS_expression {
//--- Constructor
  public : GALGAS_existInExpression (void) ;

//---
  public : inline const class cPtr_existInExpression * ptr (void) const { return (const cPtr_existInExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_existInExpression (const cPtr_existInExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_existInExpression extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_existInExpression constructor_new (const class GALGAS_domainFieldList & inOperand0,
                                                            const class GALGAS_expression & inOperand1
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_existInExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_domainFieldList getter_mArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_existInExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_existInExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @existInExpression class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_existInExpression : public cPtr_expression {
//--- Attributes
  public : GALGAS_domainFieldList mAttribute_mArgumentList ;
  public : GALGAS_expression mAttribute_mExpression ;

//--- Constructor
  public : cPtr_existInExpression (const GALGAS_domainFieldList & in_mArgumentList,
                                   const GALGAS_expression & in_mExpression
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_domainFieldList getter_mArgumentList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @falseExpression class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_falseExpression : public GALGAS_expression {
//--- Constructor
  public : GALGAS_falseExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_falseExpression constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_falseExpression * ptr (void) const { return (const cPtr_falseExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_falseExpression (const cPtr_falseExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_falseExpression extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_falseExpression constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_falseExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_falseExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @falseExpression class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_falseExpression : public cPtr_expression {
//--- Attributes

//--- Constructor
  public : cPtr_falseExpression (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @forAllInExpression class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_forAllInExpression : public GALGAS_expression {
//--- Constructor
  public : GALGAS_forAllInExpression (void) ;

//---
  public : inline const class cPtr_forAllInExpression * ptr (void) const { return (const cPtr_forAllInExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_forAllInExpression (const cPtr_forAllInExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_forAllInExpression extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_forAllInExpression constructor_new (const class GALGAS_domainFieldList & inOperand0,
                                                             const class GALGAS_expression & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_forAllInExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_domainFieldList getter_mArgumentList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_forAllInExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forAllInExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @forAllInExpression class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_forAllInExpression : public cPtr_expression {
//--- Attributes
  public : GALGAS_domainFieldList mAttribute_mArgumentList ;
  public : GALGAS_expression mAttribute_mExpression ;

//--- Constructor
  public : cPtr_forAllInExpression (const GALGAS_domainFieldList & in_mArgumentList,
                                    const GALGAS_expression & in_mExpression
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_domainFieldList getter_mArgumentList (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @formulaInExpression class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_formulaInExpression : public GALGAS_expression {
//--- Constructor
  public : GALGAS_formulaInExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_formulaInExpression constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_formulaInExpression * ptr (void) const { return (const cPtr_formulaInExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_formulaInExpression (const cPtr_formulaInExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_formulaInExpression extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_formulaInExpression constructor_new (const class GALGAS_lstring & inOperand0,
                                                              const class GALGAS_formulaParameterListInExpression & inOperand1
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_formulaInExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormulaName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formulaParameterListInExpression getter_mParameterList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_formulaInExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaInExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Pointer class for @formulaInExpression class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_formulaInExpression : public cPtr_expression {
//--- Attributes
  public : GALGAS_lstring mAttribute_mFormulaName ;
  public : GALGAS_formulaParameterListInExpression mAttribute_mParameterList ;

//--- Constructor
  public : cPtr_formulaInExpression (const GALGAS_lstring & in_mFormulaName,
                                     const GALGAS_formulaParameterListInExpression & in_mParameterList
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFormulaName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_formulaParameterListInExpression getter_mParameterList (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @graphvizFormula class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_graphvizFormula : public GALGAS_abstractFormula {
//--- Constructor
  public : GALGAS_graphvizFormula (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_graphvizFormula constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_graphvizFormula * ptr (void) const { return (const cPtr_graphvizFormula *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_graphvizFormula (const cPtr_graphvizFormula * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_graphvizFormula extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_graphvizFormula constructor_new (const class GALGAS_lstring & inOperand0
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_graphvizFormula & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mFormulaName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_graphvizFormula class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphvizFormula ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @graphvizFormula class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_graphvizFormula : public cPtr_abstractFormula {
//--- Attributes
  public : GALGAS_lstring mAttribute_mFormulaName ;

//--- Constructor
  public : cPtr_graphvizFormula (const GALGAS_lstring & in_mFormulaName
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mFormulaName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @impliesExpression class                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_impliesExpression : public GALGAS_expression {
//--- Constructor
  public : GALGAS_impliesExpression (void) ;

//---
  public : inline const class cPtr_impliesExpression * ptr (void) const { return (const cPtr_impliesExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_impliesExpression (const cPtr_impliesExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_impliesExpression extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_impliesExpression constructor_new (const class GALGAS_expression & inOperand0,
                                                            const class GALGAS_expression & inOperand1
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_impliesExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_impliesExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_impliesExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @impliesExpression class                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_impliesExpression : public cPtr_expression {
//--- Attributes
  public : GALGAS_expression mAttribute_mLeftExpression ;
  public : GALGAS_expression mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_impliesExpression (const GALGAS_expression & in_mLeftExpression,
                                   const GALGAS_expression & in_mRightExpression
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @notEqualExpression class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_notEqualExpression : public GALGAS_expression {
//--- Constructor
  public : GALGAS_notEqualExpression (void) ;

//---
  public : inline const class cPtr_notEqualExpression * ptr (void) const { return (const cPtr_notEqualExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_notEqualExpression (const cPtr_notEqualExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_notEqualExpression extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_notEqualExpression constructor_new (const class GALGAS_expression & inOperand0,
                                                             const class GALGAS_expression & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_notEqualExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_notEqualExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notEqualExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @notEqualExpression class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_notEqualExpression : public cPtr_expression {
//--- Attributes
  public : GALGAS_expression mAttribute_mLeftExpression ;
  public : GALGAS_expression mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_notEqualExpression (const GALGAS_expression & in_mLeftExpression,
                                    const GALGAS_expression & in_mRightExpression
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @orExpression class                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_orExpression : public GALGAS_expression {
//--- Constructor
  public : GALGAS_orExpression (void) ;

//---
  public : inline const class cPtr_orExpression * ptr (void) const { return (const cPtr_orExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_orExpression (const cPtr_orExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_orExpression extractObject (const GALGAS_object & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_orExpression constructor_new (const class GALGAS_expression & inOperand0,
                                                       const class GALGAS_expression & inOperand1
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_orExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_orExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Pointer class for @orExpression class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_orExpression : public cPtr_expression {
//--- Attributes
  public : GALGAS_expression mAttribute_mLeftExpression ;
  public : GALGAS_expression mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_orExpression (const GALGAS_expression & in_mLeftExpression,
                              const GALGAS_expression & in_mRightExpression
                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @setting_5F_andCacheMapSize class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_setting_5F_andCacheMapSize : public GALGAS_abstractFormula {
//--- Constructor
  public : GALGAS_setting_5F_andCacheMapSize (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_setting_5F_andCacheMapSize constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_setting_5F_andCacheMapSize * ptr (void) const { return (const cPtr_setting_5F_andCacheMapSize *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_setting_5F_andCacheMapSize (const cPtr_setting_5F_andCacheMapSize * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_setting_5F_andCacheMapSize extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_setting_5F_andCacheMapSize constructor_new (const class GALGAS_luint & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_setting_5F_andCacheMapSize & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mSetting (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_setting_5F_andCacheMapSize class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @setting_andCacheMapSize class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_setting_5F_andCacheMapSize : public cPtr_abstractFormula {
//--- Attributes
  public : GALGAS_luint mAttribute_mSetting ;

//--- Constructor
  public : cPtr_setting_5F_andCacheMapSize (const GALGAS_luint & in_mSetting
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mSetting (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @setting_5F_nodeHashMapSize class                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_setting_5F_nodeHashMapSize : public GALGAS_abstractFormula {
//--- Constructor
  public : GALGAS_setting_5F_nodeHashMapSize (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_setting_5F_nodeHashMapSize constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_setting_5F_nodeHashMapSize * ptr (void) const { return (const cPtr_setting_5F_nodeHashMapSize *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_setting_5F_nodeHashMapSize (const cPtr_setting_5F_nodeHashMapSize * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_setting_5F_nodeHashMapSize extractObject (const GALGAS_object & inObject,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_setting_5F_nodeHashMapSize constructor_new (const class GALGAS_luint & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_setting_5F_nodeHashMapSize & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mSetting (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_setting_5F_nodeHashMapSize class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Pointer class for @setting_nodeHashMapSize class                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_setting_5F_nodeHashMapSize : public cPtr_abstractFormula {
//--- Attributes
  public : GALGAS_luint mAttribute_mSetting ;

//--- Constructor
  public : cPtr_setting_5F_nodeHashMapSize (const GALGAS_luint & in_mSetting
                                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mSetting (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @trueExpression class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_trueExpression : public GALGAS_expression {
//--- Constructor
  public : GALGAS_trueExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_trueExpression constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_trueExpression * ptr (void) const { return (const cPtr_trueExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_trueExpression (const cPtr_trueExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_trueExpression extractObject (const GALGAS_object & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_trueExpression constructor_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_trueExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_trueExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @trueExpression class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_trueExpression : public cPtr_expression {
//--- Attributes

//--- Constructor
  public : cPtr_trueExpression (LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @varBitInExpression class                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varBitInExpression : public GALGAS_expression {
//--- Constructor
  public : GALGAS_varBitInExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_varBitInExpression constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_varBitInExpression * ptr (void) const { return (const cPtr_varBitInExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_varBitInExpression (const cPtr_varBitInExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varBitInExpression extractObject (const GALGAS_object & inObject,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_varBitInExpression constructor_new (const class GALGAS_lstring & inOperand0,
                                                             const class GALGAS_luint & inOperand1
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varBitInExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_luint getter_mVarBit (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varBitInExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varBitInExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Pointer class for @varBitInExpression class                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_varBitInExpression : public cPtr_expression {
//--- Attributes
  public : GALGAS_lstring mAttribute_mVarName ;
  public : GALGAS_luint mAttribute_mVarBit ;

//--- Constructor
  public : cPtr_varBitInExpression (const GALGAS_lstring & in_mVarName,
                                    const GALGAS_luint & in_mVarBit
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_luint getter_mVarBit (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @varInExpression class                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_varInExpression : public GALGAS_expression {
//--- Constructor
  public : GALGAS_varInExpression (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_varInExpression constructor_default (LOCATION_ARGS) ;

//---
  public : inline const class cPtr_varInExpression * ptr (void) const { return (const cPtr_varInExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_varInExpression (const cPtr_varInExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_varInExpression extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_varInExpression constructor_new (const class GALGAS_lstring & inOperand0
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_varInExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_varInExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Pointer class for @varInExpression class                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_varInExpression : public cPtr_expression {
//--- Attributes
  public : GALGAS_lstring mAttribute_mVarName ;

//--- Constructor
  public : cPtr_varInExpression (const GALGAS_lstring & in_mVarName
                                 COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mVarName (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @variableComparisonInExpression class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_variableComparisonInExpression : public GALGAS_expression {
//--- Constructor
  public : GALGAS_variableComparisonInExpression (void) ;

//---
  public : inline const class cPtr_variableComparisonInExpression * ptr (void) const { return (const cPtr_variableComparisonInExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_variableComparisonInExpression (const cPtr_variableComparisonInExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_variableComparisonInExpression extractObject (const GALGAS_object & inObject,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_variableComparisonInExpression constructor_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstringlist & inOperand1,
                                                                         const class GALGAS_comparison & inOperand2,
                                                                         const class GALGAS_lstring & inOperand3,
                                                                         const class GALGAS_lstringlist & inOperand4
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_variableComparisonInExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_comparison getter_mComparison (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mLeftFieldNames (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mLeftVarName (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mRightFieldNames (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mRightVarName (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_variableComparisonInExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_variableComparisonInExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Pointer class for @variableComparisonInExpression class                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_variableComparisonInExpression : public cPtr_expression {
//--- Attributes
  public : GALGAS_lstring mAttribute_mLeftVarName ;
  public : GALGAS_lstringlist mAttribute_mLeftFieldNames ;
  public : GALGAS_comparison mAttribute_mComparison ;
  public : GALGAS_lstring mAttribute_mRightVarName ;
  public : GALGAS_lstringlist mAttribute_mRightFieldNames ;

//--- Constructor
  public : cPtr_variableComparisonInExpression (const GALGAS_lstring & in_mLeftVarName,
                                                const GALGAS_lstringlist & in_mLeftFieldNames,
                                                const GALGAS_comparison & in_mComparison,
                                                const GALGAS_lstring & in_mRightVarName,
                                                const GALGAS_lstringlist & in_mRightFieldNames
                                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mLeftVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mLeftFieldNames (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_comparison getter_mComparison (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstring getter_mRightVarName (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_lstringlist getter_mRightFieldNames (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @xorExpression class                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_xorExpression : public GALGAS_expression {
//--- Constructor
  public : GALGAS_xorExpression (void) ;

//---
  public : inline const class cPtr_xorExpression * ptr (void) const { return (const cPtr_xorExpression *) mObjectPtr ; }

//--------------------------------- Constructor from pointer
  public : GALGAS_xorExpression (const cPtr_xorExpression * inSourcePtr) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_xorExpression extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_xorExpression constructor_new (const class GALGAS_expression & inOperand0,
                                                        const class GALGAS_expression & inOperand1
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_xorExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mLeftExpression (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_expression getter_mRightExpression (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_xorExpression class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorExpression ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Pointer class for @xorExpression class                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cPtr_xorExpression : public cPtr_expression {
//--- Attributes
  public : GALGAS_expression mAttribute_mLeftExpression ;
  public : GALGAS_expression mAttribute_mRightExpression ;

//--- Constructor
  public : cPtr_xorExpression (const GALGAS_expression & in_mLeftExpression,
                               const GALGAS_expression & in_mRightExpression
                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;

//--- Attribute accessors
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mLeftExpression (LOCATION_ARGS) const ;
  public : VIRTUAL_IN_DEBUG GALGAS_expression getter_mRightExpression (LOCATION_ARGS) const ;
//--- Description
  public : virtual void description (C_String & ioString,
                                     const int32_t inIndentation) const ;

  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;

  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;

} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @formulaList list                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_formulaList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public : GALGAS_formulaList (void) ;

//--------------------------------- List constructor used by listmap
  public : GALGAS_formulaList (cSharedList * inSharedListPtr) ;

//--------------------------------- Element constructor used by listmap
  public : static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const class GALGAS_abstractFormula & in_mFormula
                                                  COMMA_LOCATION_ARGS) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_formulaList extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_formulaList constructor_emptyList (LOCATION_ARGS) ;

  public : static GALGAS_formulaList constructor_listWithValue (const class GALGAS_abstractFormula & inOperand0
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public : VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_formulaList inOperand,
                                                       class C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public : VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractFormula & inOperand0
                                                      COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public : VIRTUAL_IN_DEBUG GALGAS_formulaList add_operation (const GALGAS_formulaList & inOperand,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public : VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractFormula constinArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractFormula & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractFormula & outArgument0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public : VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractFormula & outArgument0,
                                                       class GALGAS_uint constinArgument1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public : VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractFormula & outArgument0,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractFormula & outArgument0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractFormula getter_mFormulaAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formulaList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formulaList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formulaList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
//--------------------------------- Friend

  friend class cEnumerator_formulaList ;
 
} ; // End of GALGAS_formulaList class

//---------------------------------------------------------------------------------------------------------------------*
//   Enumerator declaration                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

class cEnumerator_formulaList : public cGenericAbstractEnumerator {
  public : cEnumerator_formulaList (const GALGAS_formulaList & inEnumeratedObject,
                                    const typeEnumerationOrder inOrder) ;

//--- Current element access
  public : class GALGAS_abstractFormula current_mFormula (LOCATION_ARGS) const ;
//--- Current element access
  public : class GALGAS_formulaList_2D_element current (LOCATION_ARGS) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaList ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                     @ast struct                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_ast : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_domainDeclarationList mAttribute_mDomainList ;
  public : GALGAS_formulaList mAttribute_mFormulaList ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default GALGAS constructor
  public : static GALGAS_ast constructor_default (LOCATION_ARGS) ;

//--------------------------------- Default constructor
  public : GALGAS_ast (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_ast (void) ;

//--------------------------------- Native constructor
  public : GALGAS_ast (const GALGAS_domainDeclarationList & in_mDomainList,
                       const GALGAS_formulaList & in_mFormulaList) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_ast extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_ast constructor_new (const class GALGAS_domainDeclarationList & inOperand0,
                                              const class GALGAS_formulaList & inOperand1
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_ast & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_domainDeclarationList getter_mDomainList (LOCATION_ARGS) const ;

  public : VIRTUAL_IN_DEBUG class GALGAS_formulaList getter_mFormulaList (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_ast class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ast ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @formulaList_2D_element struct                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_formulaList_2D_element : public AC_GALGAS_root {
//--------------------------------- Public data members
  public : GALGAS_abstractFormula mAttribute_mFormula ;


//--------------------------------- Accessors
  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;
  public : VIRTUAL_IN_DEBUG void drop (void) ;

//--------------------------------- Default constructor
  public : GALGAS_formulaList_2D_element (void) ;

//--------------------------------- Virtual destructor (in debug mode)
  public : VIRTUAL_IN_DEBUG ~ GALGAS_formulaList_2D_element (void) ;

//--------------------------------- Native constructor
  public : GALGAS_formulaList_2D_element (const GALGAS_abstractFormula & in_mFormula) ;

//-- Start of generic part --*

//--------------------------------- Object cloning
  protected : virtual AC_GALGAS_root * clonedObject (void) const ;

//--------------------------------- Object extraction
  public : static GALGAS_formulaList_2D_element extractObject (const GALGAS_object & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS constructors
  public : static GALGAS_formulaList_2D_element constructor_new (const class GALGAS_abstractFormula & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,
                                              const int32_t inIndentation) const ;
//--------------------------------- Comparison
  public : typeComparisonResult objectCompare (const GALGAS_formulaList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public : VIRTUAL_IN_DEBUG class GALGAS_abstractFormula getter_mFormula (LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;
 
} ; // End of GALGAS_formulaList_2D_element class


//---------------------------------------------------------------------------------------------------------------------*

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaList_2D_element ;

//---------------------------------------------------------------------------------------------------------------------*
//  GRAMMAR kerbdd_grammar
//---------------------------------------------------------------------------------------------------------------------*

class cGrammar_kerbdd_5F_grammar : public cParser_kerbdd_5F_syntax {
//------------------------------------- 'comparison' non terminal
//--- 'parse' label
  public : virtual void nt_comparison_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_comparison_ (GALGAS_expression & outArgument0,
                                        C_Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public : virtual void nt_expression_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_expression_ (GALGAS_expression & outArgument0,
                                        C_Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'factor' non terminal
//--- 'parse' label
  public : virtual void nt_factor_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_factor_ (GALGAS_expression & outArgument0,
                                    C_Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'recordFields' non terminal
//--- 'parse' label
  public : virtual void nt_recordFields_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_recordFields_ (GALGAS_domainFieldList & outArgument0,
                                          C_Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public : virtual void nt_start_5F_symbol_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_start_5F_symbol_ (GALGAS_ast & outArgument0,
                                             C_Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- Start symbol
  public : static void _performSourceFileParsing_ (C_Compiler * inCompiler,
                                                   GALGAS_lstring inFileName,
                                                   GALGAS_ast & outArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public : static void _performSourceStringParsing_ (C_Compiler * inCompiler,
                                                     GALGAS_string inSourceString,
                                                     GALGAS_string inNameString,
                                                     GALGAS_ast & outArgument0
                                                     COMMA_LOCATION_ARGS) ;

//--- Indexing
  public : static void performIndexing (C_Compiler * inCompiler,
                                        const C_String & inSourceFilePath) ;

//--- Only lexical analysis
  public : static void performOnlyLexicalAnalysis (C_Compiler * inCompiler,
                                                   const C_String & inSourceFilePath) ;

//--- Only syntax analysis
  public : static void performOnlySyntaxAnalysis (C_Compiler * inCompiler,
                                                  const C_String & inSourceFilePath) ;

//------------------------------------- 'term' non terminal
//--- 'parse' label
  public : virtual void nt_term_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_term_ (GALGAS_expression & outArgument0,
                                  C_Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'topLevelDeClaration' non terminal
//--- 'parse' label
  public : virtual void nt_topLevelDeClaration_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_topLevelDeClaration_ (GALGAS_ast & ioArgument0,
                                                 C_Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'type' non terminal
//--- 'parse' label
  public : virtual void nt_type_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public : virtual void nt_type_ (GALGAS_bddType & outArgument0,
                                  C_Lexique_kerbdd_5F_lexique * inCompiler) ;

  public : virtual int32_t select_kerbdd_5F_syntax_0 (C_Lexique_kerbdd_5F_lexique *) ;

  public : virtual int32_t select_kerbdd_5F_syntax_1 (C_Lexique_kerbdd_5F_lexique *) ;

  public : virtual int32_t select_kerbdd_5F_syntax_2 (C_Lexique_kerbdd_5F_lexique *) ;

  public : virtual int32_t select_kerbdd_5F_syntax_3 (C_Lexique_kerbdd_5F_lexique *) ;

  public : virtual int32_t select_kerbdd_5F_syntax_4 (C_Lexique_kerbdd_5F_lexique *) ;

  public : virtual int32_t select_kerbdd_5F_syntax_5 (C_Lexique_kerbdd_5F_lexique *) ;

  public : virtual int32_t select_kerbdd_5F_syntax_6 (C_Lexique_kerbdd_5F_lexique *) ;

  public : virtual int32_t select_kerbdd_5F_syntax_7 (C_Lexique_kerbdd_5F_lexique *) ;

  public : virtual int32_t select_kerbdd_5F_syntax_8 (C_Lexique_kerbdd_5F_lexique *) ;

  public : virtual int32_t select_kerbdd_5F_syntax_9 (C_Lexique_kerbdd_5F_lexique *) ;

  public : virtual int32_t select_kerbdd_5F_syntax_10 (C_Lexique_kerbdd_5F_lexique *) ;

  public : virtual int32_t select_kerbdd_5F_syntax_11 (C_Lexique_kerbdd_5F_lexique *) ;

  public : virtual int32_t select_kerbdd_5F_syntax_12 (C_Lexique_kerbdd_5F_lexique *) ;

  public : virtual int32_t select_kerbdd_5F_syntax_13 (C_Lexique_kerbdd_5F_lexique *) ;

  public : virtual int32_t select_kerbdd_5F_syntax_14 (C_Lexique_kerbdd_5F_lexique *) ;

  public : virtual int32_t select_kerbdd_5F_syntax_15 (C_Lexique_kerbdd_5F_lexique *) ;

  public : virtual int32_t select_kerbdd_5F_syntax_16 (C_Lexique_kerbdd_5F_lexique *) ;

  public : virtual int32_t select_kerbdd_5F_syntax_17 (C_Lexique_kerbdd_5F_lexique *) ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Abstract extension method '@abstractFormula analyzeFormula'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_abstractFormula_analyzeFormula) (const class cPtr_abstractFormula * inObject,
                                                                        const class GALGAS_string constinArgument0,
                                                                        const class GALGAS_domainMap constinArgument1,
                                                                        class GALGAS_computedFormulaMap & ioArgument2,
                                                                        class C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeFormula (const int32_t inClassIndex,
                                         categoryMethodSignature_abstractFormula_analyzeFormula inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeFormula (const class cPtr_abstractFormula * inObject,
                                        const GALGAS_string constin_inSourceFilePath,
                                        const GALGAS_domainMap constin_inDomainMap,
                                        GALGAS_computedFormulaMap & io_ioComputedFormulaMap,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension method '@domainDeclarationList analyze'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_analyze (const class GALGAS_domainDeclarationList inObject,
                             class GALGAS_domainMap & out_outDomainMap,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Extension method '@domainFieldList analyze'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_analyze (const class GALGAS_domainFieldList inObject,
                             const class GALGAS_domainMap constin_inDomainMap,
                             class GALGAS_varMap & io_ioVarMap,
                             class GALGAS_varList & io_ioVarList,
                             class GALGAS_uint & io_ioTotalBitCount,
                             class C_Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Abstract extension getter '@expression computeExpression'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_binaryset (*categoryGetterSignature_expression_computeExpression) (const class cPtr_expression * inObject,
                                                                                        const class GALGAS_domainMap & constinArgument0,
                                                                                        const class GALGAS_varMap & constinArgument1,
                                                                                        const class GALGAS_uint & constinArgument2,
                                                                                        const class GALGAS_computedFormulaMap & constinArgument3,
                                                                                        class C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_computeExpression (const int32_t inClassIndex,
                                            categoryGetterSignature_expression_computeExpression inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_binaryset callCategoryGetter_computeExpression (const class cPtr_expression * inObject,
                                                             const GALGAS_domainMap & constin_inDomainMap,
                                                             const GALGAS_varMap & constin_inVarMap,
                                                             const GALGAS_uint & constin_inTotalBitCount,
                                                             const GALGAS_computedFormulaMap & constin_inComputedFormulaMap,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

#endif
