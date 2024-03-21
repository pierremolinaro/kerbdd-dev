#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
// Phase 1: @2lstringlist list
//
//--------------------------------------------------------------------------------------------------

class GALGAS__32_lstringlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS__32_lstringlist (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS__32_lstringlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mValue_30_,
                                                 const class GALGAS_lstring & in_mValue_31_
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS__32_lstringlist extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS__32_lstringlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS__32_lstringlist class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_lstring & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS__32_lstringlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS__32_lstringlist add_operation (const GALGAS__32_lstringlist & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstring constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstring & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue_30_AtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue_31_AtIndex (class GALGAS_lstring constinArgument0,
                                                             class GALGAS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mValue_30_AtIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mValue_31_AtIndex (const class GALGAS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS__32_lstringlist getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator__32_lstringlist ;
 
} ; // End of GALGAS__32_lstringlist class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator__32_lstringlist : public cGenericAbstractEnumerator {
  public: cEnumerator__32_lstringlist (const GALGAS__32_lstringlist & inEnumeratedObject,
                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mValue_30_ (LOCATION_ARGS) const ;
  public: class GALGAS_lstring current_mValue_31_ (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS__32_lstringlist_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @_32_lstringlist_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS__32_lstringlist_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mValue_30_ ;
  public: inline GALGAS_lstring readProperty_mValue_30_ (void) const {
    return mProperty_mValue_30_ ;
  }

  public: GALGAS_lstring mProperty_mValue_31_ ;
  public: inline GALGAS_lstring readProperty_mValue_31_ (void) const {
    return mProperty_mValue_31_ ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS__32_lstringlist_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue_30_ (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_30_ = inValue ;
  }

  public: inline void setter_setMValue_31_ (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_31_ = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS__32_lstringlist_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS__32_lstringlist_2D_element (const GALGAS_lstring & in_mValue_30_,
                                             const GALGAS_lstring & in_mValue_31_) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS__32_lstringlist_2D_element extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS__32_lstringlist_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_lstring & inOperand1,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS__32_lstringlist_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS__32_lstringlist_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//LEXIQUE kerbdd_5F_lexique
//
//--------------------------------------------------------------------------------------------------

#include "Lexique.h"

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    R O U T I N E S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                    E X T E R N    F U N C T I O N S
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//                       T O K E N    C L A S S
//--------------------------------------------------------------------------------------------------

class cTokenFor_kerbdd_5F_lexique : public cToken {
  public: String mLexicalAttribute_tokenString ;
  public: uint32_t mLexicalAttribute_uint_33__32_value ;

  public: cTokenFor_kerbdd_5F_lexique (void) ;
} ;

//--------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//--------------------------------------------------------------------------------------------------

class Lexique_kerbdd_5F_lexique : public Lexique {
//--- Constructors
  public: Lexique_kerbdd_5F_lexique (Compiler * inCallerCompiler,
                       const String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public: Lexique_kerbdd_5F_lexique (Compiler * inCallerCompiler,
                       const String & inSourceString,
                       const String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Instrospection
  public: static GALGAS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ Lexique_kerbdd_5F_lexique (void) {}
  #endif



//--- Terminal symbols enumeration
  public: enum {kToken_,
   kToken_identifier /* 1 */ ,
   kToken_integer /* 2 */ ,
   kToken_literal_5F_string /* 3 */ ,
   kToken_comment /* 4 */ ,
   kToken_nodeHashMapSize /* 5 */ ,
   kToken_andCacheMapSize /* 6 */ ,
   kToken_domain /* 7 */ ,
   kToken_bool /* 8 */ ,
   kToken_true /* 9 */ ,
   kToken_false /* 10 */ ,
   kToken_display /* 11 */ ,
   kToken_include /* 12 */ ,
   kToken_graphviz /* 13 */ ,
   kToken_dump /* 14 */ ,
   kToken__28_ /* 15 */ ,
   kToken__29_ /* 16 */ ,
   kToken__5B_ /* 17 */ ,
   kToken__5D_ /* 18 */ ,
   kToken__7B_ /* 19 */ ,
   kToken__7D_ /* 20 */ ,
   kToken__3A__3D_ /* 21 */ ,
   kToken__3A_ /* 22 */ ,
   kToken__2E_ /* 23 */ ,
   kToken__2E__2E_ /* 24 */ ,
   kToken__2B__3D_ /* 25 */ ,
   kToken__2D__3D_ /* 26 */ ,
   kToken__2D__3E_ /* 27 */ ,
   kToken__26_ /* 28 */ ,
   kToken__7C_ /* 29 */ ,
   kToken__5E_ /* 30 */ ,
   kToken__7E_ /* 31 */ ,
   kToken__2C_ /* 32 */ ,
   kToken__3F_ /* 33 */ ,
   kToken__21_ /* 34 */ ,
   kToken__3B_ /* 35 */ ,
   kToken__3D_ /* 36 */ ,
   kToken__21__3D_ /* 37 */ ,
   kToken__3C_ /* 38 */ ,
   kToken__3C__3D_ /* 39 */ ,
   kToken__3E_ /* 40 */ ,
   kToken__3E__3D_ /* 41 */ } ;

//--- Key words table 'keyWordList'
  public: static int32_t search_into_keyWordList (const String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public: static int32_t search_into_delimitorsList (const String & inSearchedString) ;
  

//--- Assign from attribute
  public: GALGAS_lstring synthetizedAttribute_tokenString (void) const ;
  public: GALGAS_luint synthetizedAttribute_uint_33__32_value (void) const ;


//--- Attribute access
  public: String attributeValue_tokenString (void) const ;
  public: uint32_t attributeValue_uint_33__32_value (void) const ;


//--- indexing keys

//--- Parse lexical token
  protected: void internalParseLexicalToken (cTokenFor_kerbdd_5F_lexique & token) ;
  protected: virtual bool parseLexicalToken (void) override ;

//--- Get terminal message
  protected: virtual String getMessageForTerminal (const int32_t inTerminalSymbol) const override ;

//--- Get terminal count
  public: virtual int32_t terminalVocabularyCount (void) const override { return 41 ; }

//--- Get Token String
  public: virtual String getCurrentTokenString (const cToken * inTokenPtr) const override ;

//--- Enter Token
  protected: void enterToken (cTokenFor_kerbdd_5F_lexique & ioToken) ;

//--- Style name for Latex
  protected: virtual String styleNameForIndex (const uint32_t inStyleIndex) const override ;
  protected: virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const override ;
} ;

//--------------------------------------------------------------------------------------------------
//
//                                                Phase 1: @bddType enum                                               *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_bddType : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_bddType (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_bool,
    kEnum_boolArray,
    kEnum_namedType
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_bddType extractObject (const GALGAS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_bddType class_func_bool (LOCATION_ARGS) ;

  public: static class GALGAS_bddType class_func_boolArray (const class GALGAS_uint & inOperand0
                                                            COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_bddType class_func_namedType (const class GALGAS_lstring & inOperand0
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_bddType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_boolArray (class GALGAS_uint & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_namedType (class GALGAS_lstring & outArgument0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBool (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isBoolArray (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNamedType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_bool () const ;

  public: VIRTUAL_IN_DEBUG bool optional_boolArray (class GALGAS_uint & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_namedType (class GALGAS_lstring & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_bddType class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bddType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @bddType enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_bddType_boolArray : public cEnumAssociatedValues {
  public: const GALGAS_uint mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_bddType_boolArray (const GALGAS_uint inAssociatedValue0
                                                   COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_bddType_boolArray (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_bddType_namedType : public cEnumAssociatedValues {
  public: const GALGAS_lstring mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_bddType_namedType (const GALGAS_lstring inAssociatedValue0
                                                   COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_bddType_namedType (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @domainFieldList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_domainFieldList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_domainFieldList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_domainFieldList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mVarName,
                                                 const class GALGAS_bddType & in_mType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_domainFieldList extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_domainFieldList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_domainFieldList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                        const class GALGAS_bddType & inOperand1
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_domainFieldList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_bddType & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_domainFieldList add_operation (const GALGAS_domainFieldList & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_bddType constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_bddType constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_bddType & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_bddType & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_bddType & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_bddType constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVarNameAtIndex (class GALGAS_lstring constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_bddType & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_bddType & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bddType getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mVarNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_domainFieldList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_domainFieldList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_domainFieldList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_domainFieldList ;
 
} ; // End of GALGAS_domainFieldList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_domainFieldList : public cGenericAbstractEnumerator {
  public: cEnumerator_domainFieldList (const GALGAS_domainFieldList & inEnumeratedObject,
                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mVarName (LOCATION_ARGS) const ;
  public: class GALGAS_bddType current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_domainFieldList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainFieldList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @domainFieldList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_domainFieldList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mVarName ;
  public: inline GALGAS_lstring readProperty_mVarName (void) const {
    return mProperty_mVarName ;
  }

  public: GALGAS_bddType mProperty_mType ;
  public: inline GALGAS_bddType readProperty_mType (void) const {
    return mProperty_mType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_domainFieldList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMVarName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mVarName = inValue ;
  }

  public: inline void setter_setMType (const GALGAS_bddType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_domainFieldList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_domainFieldList_2D_element (const GALGAS_lstring & in_mVarName,
                                             const GALGAS_bddType & in_mType) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_domainFieldList_2D_element extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_domainFieldList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_bddType & inOperand1,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_domainFieldList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_domainFieldList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainFieldList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//                                         Phase 1: @domainDeclarationType enum                                        *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_domainDeclarationType : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_domainDeclarationType (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_type,
    kEnum_record
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_domainDeclarationType extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_domainDeclarationType class_func_record (const class GALGAS_domainFieldList & inOperand0
                                                                       COMMA_LOCATION_ARGS) ;

  public: static class GALGAS_domainDeclarationType class_func_type (const class GALGAS_bddType & inOperand0
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_domainDeclarationType & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_record (class GALGAS_domainFieldList & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_type (class GALGAS_bddType & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isRecord (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isType (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_record (class GALGAS_domainFieldList & outOperand0) const ;

  public: VIRTUAL_IN_DEBUG bool optional_type (class GALGAS_bddType & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_domainDeclarationType class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @domainDeclarationType enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_domainDeclarationType_type : public cEnumAssociatedValues {
  public: const GALGAS_bddType mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_domainDeclarationType_type (const GALGAS_bddType inAssociatedValue0
                                                            COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_domainDeclarationType_type (void) {}
} ;

//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_domainDeclarationType_record : public cEnumAssociatedValues {
  public: const GALGAS_domainFieldList mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_domainDeclarationType_record (const GALGAS_domainFieldList inAssociatedValue0
                                                              COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_domainDeclarationType_record (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @domainDeclarationList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_domainDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_domainDeclarationList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_domainDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mDomainName,
                                                 const class GALGAS_domainDeclarationType & in_mType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_domainDeclarationList extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_domainDeclarationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_domainDeclarationList class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                              const class GALGAS_domainDeclarationType & inOperand1
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_domainDeclarationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_domainDeclarationType & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_domainDeclarationList add_operation (const GALGAS_domainDeclarationList & inOperand,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_domainDeclarationType constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_domainDeclarationType constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_domainDeclarationType & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_domainDeclarationType & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_domainDeclarationType & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDomainNameAtIndex (class GALGAS_lstring constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GALGAS_domainDeclarationType constinArgument0,
                                                        class GALGAS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_domainDeclarationType & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_domainDeclarationType & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mDomainNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_domainDeclarationType getter_mTypeAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_domainDeclarationList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_domainDeclarationList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_domainDeclarationList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_domainDeclarationList ;
 
} ; // End of GALGAS_domainDeclarationList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_domainDeclarationList : public cGenericAbstractEnumerator {
  public: cEnumerator_domainDeclarationList (const GALGAS_domainDeclarationList & inEnumeratedObject,
                                             const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mDomainName (LOCATION_ARGS) const ;
  public: class GALGAS_domainDeclarationType current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_domainDeclarationList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @domainDeclarationList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_domainDeclarationList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mDomainName ;
  public: inline GALGAS_lstring readProperty_mDomainName (void) const {
    return mProperty_mDomainName ;
  }

  public: GALGAS_domainDeclarationType mProperty_mType ;
  public: inline GALGAS_domainDeclarationType readProperty_mType (void) const {
    return mProperty_mType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_domainDeclarationList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDomainName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDomainName = inValue ;
  }

  public: inline void setter_setMType (const GALGAS_domainDeclarationType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_domainDeclarationList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_domainDeclarationList_2D_element (const GALGAS_lstring & in_mDomainName,
                                                   const GALGAS_domainDeclarationType & in_mType) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_domainDeclarationList_2D_element extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_domainDeclarationList_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                               const class GALGAS_domainDeclarationType & inOperand1,
                                                                               class Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_domainDeclarationList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_domainDeclarationList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @recordDomainMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_recordDomainMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_recordDomainMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_recordDomainMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_recordDomainMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_recordDomainMap (const GALGAS_recordDomainMap & inSource) ;
  public: GALGAS_recordDomainMap & operator = (const GALGAS_recordDomainMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_recordDomainMap extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_recordDomainMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_recordDomainMap class_func_mapWithMapToOverride (const class GALGAS_recordDomainMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     const class GALGAS_recordDomainMap & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_recordDomainMap add_operation (const GALGAS_recordDomainMap & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  class GALGAS_recordDomainMap constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitCountForKey (class GALGAS_uint constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSubDomainForKey (class GALGAS_recordDomainMap constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_recordDomainMap & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitCountForKey (const class GALGAS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_recordDomainMap getter_mSubDomainForKey (const class GALGAS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_recordDomainMap getter_overriddenMap (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1,
                                                    class GALGAS_uint & outOperand2,
                                                    class GALGAS_recordDomainMap & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_recordDomainMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GALGAS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_recordDomainMap ;
 
} ; // End of GALGAS_recordDomainMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_recordDomainMap : public cGenericAbstractEnumerator {
  public: cEnumerator_recordDomainMap (const GALGAS_recordDomainMap & inEnumeratedObject,
                                       const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mBitCount (LOCATION_ARGS) const ;
  public: class GALGAS_recordDomainMap current_mSubDomain (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_recordDomainMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_recordDomainMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@recordDomainMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_recordDomainMap : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mIndex ;
  public: GALGAS_uint mProperty_mBitCount ;
  public: GALGAS_recordDomainMap mProperty_mSubDomain ;

//--- Constructor
  public: cMapElement_recordDomainMap (const GALGAS_lstring & inKey,
                                       const GALGAS_uint & in_mIndex,
                                       const GALGAS_uint & in_mBitCount,
                                       const GALGAS_recordDomainMap & in_mSubDomain
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @recordDomainMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_recordDomainMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mIndex ;
  public: inline GALGAS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

  public: GALGAS_uint mProperty_mBitCount ;
  public: inline GALGAS_uint readProperty_mBitCount (void) const {
    return mProperty_mBitCount ;
  }

  public: GALGAS_recordDomainMap mProperty_mSubDomain ;
  public: inline GALGAS_recordDomainMap readProperty_mSubDomain (void) const {
    return mProperty_mSubDomain ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_recordDomainMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

  public: inline void setter_setMBitCount (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitCount = inValue ;
  }

  public: inline void setter_setMSubDomain (const GALGAS_recordDomainMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSubDomain = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_recordDomainMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_recordDomainMap_2D_element (const GALGAS_lstring & in_lkey,
                                             const GALGAS_uint & in_mIndex,
                                             const GALGAS_uint & in_mBitCount,
                                             const GALGAS_recordDomainMap & in_mSubDomain) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_recordDomainMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_recordDomainMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                         const class GALGAS_uint & inOperand1,
                                                                         const class GALGAS_uint & inOperand2,
                                                                         const class GALGAS_recordDomainMap & inOperand3,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_recordDomainMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_recordDomainMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_recordDomainMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @domainMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_domainMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_domainMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_domainMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_domainMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_domainMap (const GALGAS_domainMap & inSource) ;
  public: GALGAS_domainMap & operator = (const GALGAS_domainMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_domainMap extractObject (const GALGAS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_domainMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_domainMap class_func_mapWithMapToOverride (const class GALGAS_domainMap & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_recordDomainMap & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_domainMap add_operation (const GALGAS_domainMap & inOperand,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  class GALGAS_recordDomainMap constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitCountForKey (class GALGAS_uint constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRecordMapForKey (class GALGAS_recordDomainMap constinArgument0,
                                                            class GALGAS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_recordDomainMap & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitCountForKey (const class GALGAS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_recordDomainMap getter_mRecordMapForKey (const class GALGAS_string & constinOperand0,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_domainMap getter_overriddenMap (Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1,
                                                    class GALGAS_recordDomainMap & outOperand2) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_domainMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                      const GALGAS_string & inKey
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_domainMap ;
 
} ; // End of GALGAS_domainMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_domainMap : public cGenericAbstractEnumerator {
  public: cEnumerator_domainMap (const GALGAS_domainMap & inEnumeratedObject,
                                 const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mBitCount (LOCATION_ARGS) const ;
  public: class GALGAS_recordDomainMap current_mRecordMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_domainMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@domainMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_domainMap : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mBitCount ;
  public: GALGAS_recordDomainMap mProperty_mRecordMap ;

//--- Constructor
  public: cMapElement_domainMap (const GALGAS_lstring & inKey,
                                 const GALGAS_uint & in_mBitCount,
                                 const GALGAS_recordDomainMap & in_mRecordMap
                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @domainMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_domainMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mBitCount ;
  public: inline GALGAS_uint readProperty_mBitCount (void) const {
    return mProperty_mBitCount ;
  }

  public: GALGAS_recordDomainMap mProperty_mRecordMap ;
  public: inline GALGAS_recordDomainMap readProperty_mRecordMap (void) const {
    return mProperty_mRecordMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_domainMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMBitCount (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitCount = inValue ;
  }

  public: inline void setter_setMRecordMap (const GALGAS_recordDomainMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRecordMap = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_domainMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_domainMap_2D_element (const GALGAS_lstring & in_lkey,
                                       const GALGAS_uint & in_mBitCount,
                                       const GALGAS_recordDomainMap & in_mRecordMap) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_domainMap_2D_element extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_domainMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                   const class GALGAS_uint & inOperand1,
                                                                   const class GALGAS_recordDomainMap & inOperand2,
                                                                   class Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_domainMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_domainMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@domainDeclarationList analyze'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyze (const class GALGAS_domainDeclarationList inObject,
                              class GALGAS_domainMap & out_outDomainMap,
                              class Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_varList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_varList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_varList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_string & in_mVarName,
                                                 const class GALGAS_uint & in_mBitIndex,
                                                 const class GALGAS_uint & in_mBitCount
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_varList extractObject (const GALGAS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_varList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_varList class_func_listWithValue (const class GALGAS_string & inOperand0,
                                                                const class GALGAS_uint & inOperand1,
                                                                const class GALGAS_uint & inOperand2
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_varList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_string & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_uint & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_varList add_operation (const GALGAS_varList & inOperand,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_string constinArgument0,
                                               class GALGAS_uint constinArgument1,
                                               class GALGAS_uint constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_string constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_string & outArgument0,
                                                 class GALGAS_uint & outArgument1,
                                                 class GALGAS_uint & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_string & outArgument0,
                                                class GALGAS_uint & outArgument1,
                                                class GALGAS_uint & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_string & outArgument0,
                                                      class GALGAS_uint & outArgument1,
                                                      class GALGAS_uint & outArgument2,
                                                      class GALGAS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitCountAtIndex (class GALGAS_uint constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitIndexAtIndex (class GALGAS_uint constinArgument0,
                                                            class GALGAS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVarNameAtIndex (class GALGAS_string constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_string & outArgument0,
                                              class GALGAS_uint & outArgument1,
                                              class GALGAS_uint & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_string & outArgument0,
                                             class GALGAS_uint & outArgument1,
                                             class GALGAS_uint & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitCountAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitIndexAtIndex (const class GALGAS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_string getter_mVarNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_varList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_varList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_varList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_varList ;
 
} ; // End of GALGAS_varList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_varList : public cGenericAbstractEnumerator {
  public: cEnumerator_varList (const GALGAS_varList & inEnumeratedObject,
                               const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_string current_mVarName (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mBitIndex (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mBitCount (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_varList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_varList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_string mProperty_mVarName ;
  public: inline GALGAS_string readProperty_mVarName (void) const {
    return mProperty_mVarName ;
  }

  public: GALGAS_uint mProperty_mBitIndex ;
  public: inline GALGAS_uint readProperty_mBitIndex (void) const {
    return mProperty_mBitIndex ;
  }

  public: GALGAS_uint mProperty_mBitCount ;
  public: inline GALGAS_uint readProperty_mBitCount (void) const {
    return mProperty_mBitCount ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_varList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMVarName (const GALGAS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mVarName = inValue ;
  }

  public: inline void setter_setMBitIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitIndex = inValue ;
  }

  public: inline void setter_setMBitCount (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitCount = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_varList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_varList_2D_element (const GALGAS_string & in_mVarName,
                                     const GALGAS_uint & in_mBitIndex,
                                     const GALGAS_uint & in_mBitCount) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_varList_2D_element extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_varList_2D_element class_func_new (const class GALGAS_string & inOperand0,
                                                                 const class GALGAS_uint & inOperand1,
                                                                 const class GALGAS_uint & inOperand2,
                                                                 class Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_varList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_varList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_varMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_varMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_varMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_varMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_varMap (const GALGAS_varMap & inSource) ;
  public: GALGAS_varMap & operator = (const GALGAS_varMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_varMap extractObject (const GALGAS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_varMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_varMap class_func_mapWithMapToOverride (const class GALGAS_varMap & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_uint & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     const class GALGAS_recordDomainMap & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_varMap add_operation (const GALGAS_varMap & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  class GALGAS_recordDomainMap constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitCountForKey (class GALGAS_uint constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GALGAS_uint constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRecordDomainMapForKey (class GALGAS_recordDomainMap constinArgument0,
                                                                  class GALGAS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_uint & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_recordDomainMap & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitCountForKey (const class GALGAS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mIndexForKey (const class GALGAS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_recordDomainMap getter_mRecordDomainMapForKey (const class GALGAS_string & constinOperand0,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_varMap getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_uint & outOperand1,
                                                    class GALGAS_uint & outOperand2,
                                                    class GALGAS_recordDomainMap & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_varMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                   const GALGAS_string & inKey
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_varMap ;
 
} ; // End of GALGAS_varMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_varMap : public cGenericAbstractEnumerator {
  public: cEnumerator_varMap (const GALGAS_varMap & inEnumeratedObject,
                              const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mBitCount (LOCATION_ARGS) const ;
  public: class GALGAS_recordDomainMap current_mRecordDomainMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_varMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@varMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_varMap : public cMapElement {
//--- Map attributes
  public: GALGAS_uint mProperty_mIndex ;
  public: GALGAS_uint mProperty_mBitCount ;
  public: GALGAS_recordDomainMap mProperty_mRecordDomainMap ;

//--- Constructor
  public: cMapElement_varMap (const GALGAS_lstring & inKey,
                              const GALGAS_uint & in_mIndex,
                              const GALGAS_uint & in_mBitCount,
                              const GALGAS_recordDomainMap & in_mRecordDomainMap
                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_varMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_uint mProperty_mIndex ;
  public: inline GALGAS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

  public: GALGAS_uint mProperty_mBitCount ;
  public: inline GALGAS_uint readProperty_mBitCount (void) const {
    return mProperty_mBitCount ;
  }

  public: GALGAS_recordDomainMap mProperty_mRecordDomainMap ;
  public: inline GALGAS_recordDomainMap readProperty_mRecordDomainMap (void) const {
    return mProperty_mRecordDomainMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_varMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

  public: inline void setter_setMBitCount (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitCount = inValue ;
  }

  public: inline void setter_setMRecordDomainMap (const GALGAS_recordDomainMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRecordDomainMap = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_varMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_varMap_2D_element (const GALGAS_lstring & in_lkey,
                                    const GALGAS_uint & in_mIndex,
                                    const GALGAS_uint & in_mBitCount,
                                    const GALGAS_recordDomainMap & in_mRecordDomainMap) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_varMap_2D_element extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_varMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                const class GALGAS_uint & inOperand1,
                                                                const class GALGAS_uint & inOperand2,
                                                                const class GALGAS_recordDomainMap & inOperand3,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_varMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_varMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@domainFieldList analyze'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyze (const class GALGAS_domainFieldList inObject,
                              const class GALGAS_domainMap constin_inDomainMap,
                              class GALGAS_varMap & io_ioVarMap,
                              class GALGAS_varList & io_ioVarList,
                              class GALGAS_uint & io_ioTotalBitCount,
                              class Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//                                              Phase 1: @formulaKind enum                                             *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_formulaKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_formulaKind (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_assignment,
    kEnum_fixedPoint
  } enumeration ;
  
//--------------------------------- Private data member
  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;
  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {
    return mAssociatedValues.unsafePointer () ;
  }

  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_formulaKind extractObject (const GALGAS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_formulaKind class_func_assignment (LOCATION_ARGS) ;

  public: static class GALGAS_formulaKind class_func_fixedPoint (const class GALGAS_binaryset & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_formulaKind & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_fixedPoint (class GALGAS_binaryset & outArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isAssignment (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isFixedPoint (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_assignment () const ;

  public: VIRTUAL_IN_DEBUG bool optional_fixedPoint (class GALGAS_binaryset & outOperand0) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_formulaKind class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaKind ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: @formulaKind enum, associated values
//
//--------------------------------------------------------------------------------------------------

class cEnumAssociatedValues_formulaKind_fixedPoint : public cEnumAssociatedValues {
  public: const GALGAS_binaryset mAssociatedValue0 ;

//--- Constructor
  public: cEnumAssociatedValues_formulaKind_fixedPoint (const GALGAS_binaryset inAssociatedValue0
                                                        COMMA_LOCATION_ARGS) ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const ;
  public: virtual ComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;

  public: virtual ~ cEnumAssociatedValues_formulaKind_fixedPoint (void) {}
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractFormula reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractFormula : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_abstractFormula (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_abstractFormula (const class cPtr_abstractFormula * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractFormula extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractFormula & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractFormula class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractFormula ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @abstractFormula class
//
//--------------------------------------------------------------------------------------------------

class cPtr_abstractFormula : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeFormula
  public: virtual void method_analyzeFormula (const class GALGAS_string inSourceFilePath,
           const class GALGAS_domainMap inDomainMap,
           class GALGAS_computedFormulaMap & ioComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_abstractFormula (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @expression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_expression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GALGAS_expression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_expression (const class cPtr_expression * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_expression extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_expression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_expression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @expression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_expression : public acStrongPtr_class {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter computeExpression
  public: virtual class GALGAS_binaryset getter_computeExpression (const class GALGAS_domainMap inDomainMap,
           const class GALGAS_varMap inVarMap,
           const class GALGAS_uint inTotalBitCount,
           const class GALGAS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Properties

//--- Constructor
  public: cPtr_expression (LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractFormula_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_abstractFormula_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_abstractFormula_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_abstractFormula_2D_weak (const class GALGAS_abstractFormula & inSource) ;

  public: GALGAS_abstractFormula_2D_weak & operator = (const class GALGAS_abstractFormula & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_abstractFormula bang_abstractFormula_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_abstractFormula_2D_weak extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_abstractFormula_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_abstractFormula_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_abstractFormula_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractFormula_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @computedFormulaMap map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_computedFormulaMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_computedFormulaMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GALGAS_computedFormulaMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GALGAS_computedFormulaMap (void) ;

//--------------------------------- Handle copy
  public: GALGAS_computedFormulaMap (const GALGAS_computedFormulaMap & inSource) ;
  public: GALGAS_computedFormulaMap & operator = (const GALGAS_computedFormulaMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computedFormulaMap extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_computedFormulaMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GALGAS_computedFormulaMap class_func_mapWithMapToOverride (const class GALGAS_computedFormulaMap & inOperand0
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_varList & inOperand1,
                                                     const class GALGAS_uint & inOperand2,
                                                     const class GALGAS_binaryset & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_computedFormulaMap add_operation (const GALGAS_computedFormulaMap & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_varList constinArgument1,
                                                  class GALGAS_uint constinArgument2,
                                                  class GALGAS_binaryset constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitCountForKey (class GALGAS_uint constinArgument0,
                                                           class GALGAS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueForKey (class GALGAS_binaryset constinArgument0,
                                                        class GALGAS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVarListForKey (class GALGAS_varList constinArgument0,
                                                          class GALGAS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GALGAS_lstring constinArgument0,
                                                  class GALGAS_varList & outArgument1,
                                                  class GALGAS_uint & outArgument2,
                                                  class GALGAS_binaryset & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_uint getter_mBitCountForKey (const class GALGAS_string & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_binaryset getter_mValueForKey (const class GALGAS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_varList getter_mVarListForKey (const class GALGAS_string & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_computedFormulaMap getter_overriddenMap (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_searchKey (const class GALGAS_string & constinOperand0,
                                                    class GALGAS_varList & outOperand1,
                                                    class GALGAS_uint & outOperand2,
                                                    class GALGAS_binaryset & outOperand3) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_computedFormulaMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend

  friend class cEnumerator_computedFormulaMap ;
 
} ; // End of GALGAS_computedFormulaMap class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_computedFormulaMap : public cGenericAbstractEnumerator {
  public: cEnumerator_computedFormulaMap (const GALGAS_computedFormulaMap & inEnumeratedObject,
                                          const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GALGAS_varList current_mVarList (LOCATION_ARGS) const ;
  public: class GALGAS_uint current_mBitCount (LOCATION_ARGS) const ;
  public: class GALGAS_binaryset current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_computedFormulaMap_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedFormulaMap ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: class for element of '@computedFormulaMap' map
//
//--------------------------------------------------------------------------------------------------

class cMapElement_computedFormulaMap : public cMapElement {
//--- Map attributes
  public: GALGAS_varList mProperty_mVarList ;
  public: GALGAS_uint mProperty_mBitCount ;
  public: GALGAS_binaryset mProperty_mValue ;

//--- Constructor
  public: cMapElement_computedFormulaMap (const GALGAS_lstring & inKey,
                                          const GALGAS_varList & in_mVarList,
                                          const GALGAS_uint & in_mBitCount,
                                          const GALGAS_binaryset & in_mValue
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @computedFormulaMap_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_computedFormulaMap_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_lkey ;
  public: inline GALGAS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GALGAS_varList mProperty_mVarList ;
  public: inline GALGAS_varList readProperty_mVarList (void) const {
    return mProperty_mVarList ;
  }

  public: GALGAS_uint mProperty_mBitCount ;
  public: inline GALGAS_uint readProperty_mBitCount (void) const {
    return mProperty_mBitCount ;
  }

  public: GALGAS_binaryset mProperty_mValue ;
  public: inline GALGAS_binaryset readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_computedFormulaMap_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMVarList (const GALGAS_varList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mVarList = inValue ;
  }

  public: inline void setter_setMBitCount (const GALGAS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitCount = inValue ;
  }

  public: inline void setter_setMValue (const GALGAS_binaryset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_computedFormulaMap_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_computedFormulaMap_2D_element (const GALGAS_lstring & in_lkey,
                                                const GALGAS_varList & in_mVarList,
                                                const GALGAS_uint & in_mBitCount,
                                                const GALGAS_binaryset & in_mValue) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_computedFormulaMap_2D_element extractObject (const GALGAS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_computedFormulaMap_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                            const class GALGAS_varList & inOperand1,
                                                                            const class GALGAS_uint & inOperand2,
                                                                            const class GALGAS_binaryset & inOperand3,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_computedFormulaMap_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_computedFormulaMap_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedFormulaMap_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @setting_5F_nodeHashMapSize reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_setting_5F_nodeHashMapSize : public GALGAS_abstractFormula {
//--------------------------------- Default constructor
  public: GALGAS_setting_5F_nodeHashMapSize (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_setting_5F_nodeHashMapSize (const class cPtr_setting_5F_nodeHashMapSize * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_luint readProperty_mSetting (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_setting_5F_nodeHashMapSize extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_setting_5F_nodeHashMapSize class_func_new (const class GALGAS_luint & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_setting_5F_nodeHashMapSize & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMSetting (class GALGAS_luint inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_setting_5F_nodeHashMapSize class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @setting_nodeHashMapSize class
//
//--------------------------------------------------------------------------------------------------

class cPtr_setting_5F_nodeHashMapSize : public cPtr_abstractFormula {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeFormula
  public: virtual void method_analyzeFormula (const class GALGAS_string inSourceFilePath,
           const class GALGAS_domainMap inDomainMap,
           class GALGAS_computedFormulaMap & ioComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mSetting ;

//--- Constructor
  public: cPtr_setting_5F_nodeHashMapSize (const GALGAS_luint & in_mSetting
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @setting_5F_nodeHashMapSize_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_setting_5F_nodeHashMapSize_2D_weak : public GALGAS_abstractFormula_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_setting_5F_nodeHashMapSize_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_setting_5F_nodeHashMapSize_2D_weak (const class GALGAS_setting_5F_nodeHashMapSize & inSource) ;

  public: GALGAS_setting_5F_nodeHashMapSize_2D_weak & operator = (const class GALGAS_setting_5F_nodeHashMapSize & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_setting_5F_nodeHashMapSize bang_setting_5F_nodeHashMapSize_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_setting_5F_nodeHashMapSize_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_setting_5F_nodeHashMapSize_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_setting_5F_nodeHashMapSize_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_setting_5F_nodeHashMapSize_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @setting_5F_andCacheMapSize reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_setting_5F_andCacheMapSize : public GALGAS_abstractFormula {
//--------------------------------- Default constructor
  public: GALGAS_setting_5F_andCacheMapSize (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_setting_5F_andCacheMapSize (const class cPtr_setting_5F_andCacheMapSize * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_luint readProperty_mSetting (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_setting_5F_andCacheMapSize extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_setting_5F_andCacheMapSize class_func_new (const class GALGAS_luint & inOperand0
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_setting_5F_andCacheMapSize & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMSetting (class GALGAS_luint inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_setting_5F_andCacheMapSize class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @setting_andCacheMapSize class
//
//--------------------------------------------------------------------------------------------------

class cPtr_setting_5F_andCacheMapSize : public cPtr_abstractFormula {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeFormula
  public: virtual void method_analyzeFormula (const class GALGAS_string inSourceFilePath,
           const class GALGAS_domainMap inDomainMap,
           class GALGAS_computedFormulaMap & ioComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_luint mProperty_mSetting ;

//--- Constructor
  public: cPtr_setting_5F_andCacheMapSize (const GALGAS_luint & in_mSetting
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @setting_5F_andCacheMapSize_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_setting_5F_andCacheMapSize_2D_weak : public GALGAS_abstractFormula_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_setting_5F_andCacheMapSize_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_setting_5F_andCacheMapSize_2D_weak (const class GALGAS_setting_5F_andCacheMapSize & inSource) ;

  public: GALGAS_setting_5F_andCacheMapSize_2D_weak & operator = (const class GALGAS_setting_5F_andCacheMapSize & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_setting_5F_andCacheMapSize bang_setting_5F_andCacheMapSize_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_setting_5F_andCacheMapSize_2D_weak extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_setting_5F_andCacheMapSize_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_setting_5F_andCacheMapSize_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_setting_5F_andCacheMapSize_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dumpFormula reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dumpFormula : public GALGAS_abstractFormula {
//--------------------------------- Default constructor
  public: GALGAS_dumpFormula (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_dumpFormula (const class cPtr_dumpFormula * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mFormulaName (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dumpFormula extractObject (const GALGAS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_dumpFormula class_func_new (const class GALGAS_lstring & inOperand0
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_dumpFormula & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFormulaName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dumpFormula class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dumpFormula ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @dumpFormula class
//
//--------------------------------------------------------------------------------------------------

class cPtr_dumpFormula : public cPtr_abstractFormula {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeFormula
  public: virtual void method_analyzeFormula (const class GALGAS_string inSourceFilePath,
           const class GALGAS_domainMap inDomainMap,
           class GALGAS_computedFormulaMap & ioComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mFormulaName ;

//--- Constructor
  public: cPtr_dumpFormula (const GALGAS_lstring & in_mFormulaName
                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dumpFormula_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_dumpFormula_2D_weak : public GALGAS_abstractFormula_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_dumpFormula_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_dumpFormula_2D_weak (const class GALGAS_dumpFormula & inSource) ;

  public: GALGAS_dumpFormula_2D_weak & operator = (const class GALGAS_dumpFormula & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_dumpFormula bang_dumpFormula_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_dumpFormula_2D_weak extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_dumpFormula_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_dumpFormula_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_dumpFormula_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dumpFormula_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @graphvizFormula reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_graphvizFormula : public GALGAS_abstractFormula {
//--------------------------------- Default constructor
  public: GALGAS_graphvizFormula (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_graphvizFormula (const class cPtr_graphvizFormula * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mFormulaName (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_graphvizFormula extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_graphvizFormula class_func_new (const class GALGAS_lstring & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_graphvizFormula & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFormulaName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_graphvizFormula class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphvizFormula ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @graphvizFormula class
//
//--------------------------------------------------------------------------------------------------

class cPtr_graphvizFormula : public cPtr_abstractFormula {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeFormula
  public: virtual void method_analyzeFormula (const class GALGAS_string inSourceFilePath,
           const class GALGAS_domainMap inDomainMap,
           class GALGAS_computedFormulaMap & ioComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mFormulaName ;

//--- Constructor
  public: cPtr_graphvizFormula (const GALGAS_lstring & in_mFormulaName
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @graphvizFormula_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_graphvizFormula_2D_weak : public GALGAS_abstractFormula_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_graphvizFormula_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_graphvizFormula_2D_weak (const class GALGAS_graphvizFormula & inSource) ;

  public: GALGAS_graphvizFormula_2D_weak & operator = (const class GALGAS_graphvizFormula & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_graphvizFormula bang_graphvizFormula_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_graphvizFormula_2D_weak extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_graphvizFormula_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_graphvizFormula_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_graphvizFormula_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphvizFormula_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @expression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_expression_2D_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GALGAS_expression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_expression_2D_weak (const class GALGAS_expression & inSource) ;

  public: GALGAS_expression_2D_weak & operator = (const class GALGAS_expression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_expression bang_expression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_expression_2D_weak extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_expression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_expression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_expression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varInExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_varInExpression : public GALGAS_expression {
//--------------------------------- Default constructor
  public: GALGAS_varInExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_varInExpression (const class cPtr_varInExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mVarName (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_varInExpression extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_varInExpression class_func_new (const class GALGAS_lstring & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_varInExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMVarName (class GALGAS_lstring inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_varInExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @varInExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_varInExpression : public cPtr_expression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter computeExpression
  public: virtual class GALGAS_binaryset getter_computeExpression (const class GALGAS_domainMap inDomainMap,
           const class GALGAS_varMap inVarMap,
           const class GALGAS_uint inTotalBitCount,
           const class GALGAS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_lstring mProperty_mVarName ;

//--- Constructor
  public: cPtr_varInExpression (const GALGAS_lstring & in_mVarName
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varInExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_varInExpression_2D_weak : public GALGAS_expression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_varInExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_varInExpression_2D_weak (const class GALGAS_varInExpression & inSource) ;

  public: GALGAS_varInExpression_2D_weak & operator = (const class GALGAS_varInExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_varInExpression bang_varInExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_varInExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_varInExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_varInExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_varInExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varBitInExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_varBitInExpression : public GALGAS_expression {
//--------------------------------- Default constructor
  public: GALGAS_varBitInExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_varBitInExpression (const class cPtr_varBitInExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mVarName (void) const ;

  public: class GALGAS_luint readProperty_mVarBit (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_varBitInExpression extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_varBitInExpression class_func_new (const class GALGAS_lstring & inOperand0,
                                                                 const class GALGAS_luint & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_varBitInExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMVarBit (class GALGAS_luint inArgument0
                                                   COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVarName (class GALGAS_lstring inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_varBitInExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varBitInExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @varBitInExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_varBitInExpression : public cPtr_expression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter computeExpression
  public: virtual class GALGAS_binaryset getter_computeExpression (const class GALGAS_domainMap inDomainMap,
           const class GALGAS_varMap inVarMap,
           const class GALGAS_uint inTotalBitCount,
           const class GALGAS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_lstring mProperty_mVarName ;
  public: GALGAS_luint mProperty_mVarBit ;

//--- Constructor
  public: cPtr_varBitInExpression (const GALGAS_lstring & in_mVarName,
                                   const GALGAS_luint & in_mVarBit
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varBitInExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_varBitInExpression_2D_weak : public GALGAS_expression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_varBitInExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_varBitInExpression_2D_weak (const class GALGAS_varBitInExpression & inSource) ;

  public: GALGAS_varBitInExpression_2D_weak & operator = (const class GALGAS_varBitInExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_varBitInExpression bang_varBitInExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_varBitInExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_varBitInExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_varBitInExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_varBitInExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varBitInExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @andExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_andExpression : public GALGAS_expression {
//--------------------------------- Default constructor
  public: GALGAS_andExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_andExpression (const class cPtr_andExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_expression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_expression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_andExpression extractObject (const GALGAS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_andExpression class_func_new (const class GALGAS_expression & inOperand0,
                                                            const class GALGAS_expression & inOperand1
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_andExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_expression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_expression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_andExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @andExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_andExpression : public cPtr_expression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter computeExpression
  public: virtual class GALGAS_binaryset getter_computeExpression (const class GALGAS_domainMap inDomainMap,
           const class GALGAS_varMap inVarMap,
           const class GALGAS_uint inTotalBitCount,
           const class GALGAS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_expression mProperty_mLeftExpression ;
  public: GALGAS_expression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_andExpression (const GALGAS_expression & in_mLeftExpression,
                              const GALGAS_expression & in_mRightExpression
                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @andExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_andExpression_2D_weak : public GALGAS_expression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_andExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_andExpression_2D_weak (const class GALGAS_andExpression & inSource) ;

  public: GALGAS_andExpression_2D_weak & operator = (const class GALGAS_andExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_andExpression bang_andExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_andExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_andExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_andExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_andExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @orExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_orExpression : public GALGAS_expression {
//--------------------------------- Default constructor
  public: GALGAS_orExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_orExpression (const class cPtr_orExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_expression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_expression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_orExpression extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_orExpression class_func_new (const class GALGAS_expression & inOperand0,
                                                           const class GALGAS_expression & inOperand1
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_orExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_expression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_expression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_orExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @orExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_orExpression : public cPtr_expression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter computeExpression
  public: virtual class GALGAS_binaryset getter_computeExpression (const class GALGAS_domainMap inDomainMap,
           const class GALGAS_varMap inVarMap,
           const class GALGAS_uint inTotalBitCount,
           const class GALGAS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_expression mProperty_mLeftExpression ;
  public: GALGAS_expression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_orExpression (const GALGAS_expression & in_mLeftExpression,
                             const GALGAS_expression & in_mRightExpression
                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @orExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_orExpression_2D_weak : public GALGAS_expression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_orExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_orExpression_2D_weak (const class GALGAS_orExpression & inSource) ;

  public: GALGAS_orExpression_2D_weak & operator = (const class GALGAS_orExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_orExpression bang_orExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_orExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_orExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_orExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_orExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @xorExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_xorExpression : public GALGAS_expression {
//--------------------------------- Default constructor
  public: GALGAS_xorExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_xorExpression (const class cPtr_xorExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_expression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_expression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_xorExpression extractObject (const GALGAS_object & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_xorExpression class_func_new (const class GALGAS_expression & inOperand0,
                                                            const class GALGAS_expression & inOperand1
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_xorExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_expression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_expression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_xorExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @xorExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_xorExpression : public cPtr_expression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter computeExpression
  public: virtual class GALGAS_binaryset getter_computeExpression (const class GALGAS_domainMap inDomainMap,
           const class GALGAS_varMap inVarMap,
           const class GALGAS_uint inTotalBitCount,
           const class GALGAS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_expression mProperty_mLeftExpression ;
  public: GALGAS_expression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_xorExpression (const GALGAS_expression & in_mLeftExpression,
                              const GALGAS_expression & in_mRightExpression
                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @xorExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_xorExpression_2D_weak : public GALGAS_expression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_xorExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_xorExpression_2D_weak (const class GALGAS_xorExpression & inSource) ;

  public: GALGAS_xorExpression_2D_weak & operator = (const class GALGAS_xorExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_xorExpression bang_xorExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_xorExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_xorExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_xorExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_xorExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @equalExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_equalExpression : public GALGAS_expression {
//--------------------------------- Default constructor
  public: GALGAS_equalExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_equalExpression (const class cPtr_equalExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_expression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_expression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_equalExpression extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_equalExpression class_func_new (const class GALGAS_expression & inOperand0,
                                                              const class GALGAS_expression & inOperand1
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_equalExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_expression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_expression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_equalExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equalExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @equalExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_equalExpression : public cPtr_expression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter computeExpression
  public: virtual class GALGAS_binaryset getter_computeExpression (const class GALGAS_domainMap inDomainMap,
           const class GALGAS_varMap inVarMap,
           const class GALGAS_uint inTotalBitCount,
           const class GALGAS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_expression mProperty_mLeftExpression ;
  public: GALGAS_expression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_equalExpression (const GALGAS_expression & in_mLeftExpression,
                                const GALGAS_expression & in_mRightExpression
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @equalExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_equalExpression_2D_weak : public GALGAS_expression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_equalExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_equalExpression_2D_weak (const class GALGAS_equalExpression & inSource) ;

  public: GALGAS_equalExpression_2D_weak & operator = (const class GALGAS_equalExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_equalExpression bang_equalExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_equalExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_equalExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_equalExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_equalExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equalExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @notEqualExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_notEqualExpression : public GALGAS_expression {
//--------------------------------- Default constructor
  public: GALGAS_notEqualExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_notEqualExpression (const class cPtr_notEqualExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_expression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_expression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_notEqualExpression extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_notEqualExpression class_func_new (const class GALGAS_expression & inOperand0,
                                                                 const class GALGAS_expression & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_notEqualExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_expression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_expression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_notEqualExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notEqualExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @notEqualExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_notEqualExpression : public cPtr_expression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter computeExpression
  public: virtual class GALGAS_binaryset getter_computeExpression (const class GALGAS_domainMap inDomainMap,
           const class GALGAS_varMap inVarMap,
           const class GALGAS_uint inTotalBitCount,
           const class GALGAS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_expression mProperty_mLeftExpression ;
  public: GALGAS_expression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_notEqualExpression (const GALGAS_expression & in_mLeftExpression,
                                   const GALGAS_expression & in_mRightExpression
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @notEqualExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_notEqualExpression_2D_weak : public GALGAS_expression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_notEqualExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_notEqualExpression_2D_weak (const class GALGAS_notEqualExpression & inSource) ;

  public: GALGAS_notEqualExpression_2D_weak & operator = (const class GALGAS_notEqualExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_notEqualExpression bang_notEqualExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_notEqualExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_notEqualExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_notEqualExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_notEqualExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notEqualExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @impliesExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_impliesExpression : public GALGAS_expression {
//--------------------------------- Default constructor
  public: GALGAS_impliesExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_impliesExpression (const class cPtr_impliesExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_expression readProperty_mLeftExpression (void) const ;

  public: class GALGAS_expression readProperty_mRightExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_impliesExpression extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_impliesExpression class_func_new (const class GALGAS_expression & inOperand0,
                                                                const class GALGAS_expression & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_impliesExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMLeftExpression (class GALGAS_expression inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightExpression (class GALGAS_expression inArgument0
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_impliesExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_impliesExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @impliesExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_impliesExpression : public cPtr_expression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter computeExpression
  public: virtual class GALGAS_binaryset getter_computeExpression (const class GALGAS_domainMap inDomainMap,
           const class GALGAS_varMap inVarMap,
           const class GALGAS_uint inTotalBitCount,
           const class GALGAS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_expression mProperty_mLeftExpression ;
  public: GALGAS_expression mProperty_mRightExpression ;

//--- Constructor
  public: cPtr_impliesExpression (const GALGAS_expression & in_mLeftExpression,
                                  const GALGAS_expression & in_mRightExpression
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @impliesExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_impliesExpression_2D_weak : public GALGAS_expression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_impliesExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_impliesExpression_2D_weak (const class GALGAS_impliesExpression & inSource) ;

  public: GALGAS_impliesExpression_2D_weak & operator = (const class GALGAS_impliesExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_impliesExpression bang_impliesExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_impliesExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_impliesExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_impliesExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_impliesExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_impliesExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @complementExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_complementExpression : public GALGAS_expression {
//--------------------------------- Default constructor
  public: GALGAS_complementExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_complementExpression (const class cPtr_complementExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_expression readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_complementExpression extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_complementExpression class_func_new (const class GALGAS_expression & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_complementExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_expression inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_complementExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_complementExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @complementExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_complementExpression : public cPtr_expression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter computeExpression
  public: virtual class GALGAS_binaryset getter_computeExpression (const class GALGAS_domainMap inDomainMap,
           const class GALGAS_varMap inVarMap,
           const class GALGAS_uint inTotalBitCount,
           const class GALGAS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_expression mProperty_mExpression ;

//--- Constructor
  public: cPtr_complementExpression (const GALGAS_expression & in_mExpression
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @complementExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_complementExpression_2D_weak : public GALGAS_expression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_complementExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_complementExpression_2D_weak (const class GALGAS_complementExpression & inSource) ;

  public: GALGAS_complementExpression_2D_weak & operator = (const class GALGAS_complementExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_complementExpression bang_complementExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_complementExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_complementExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_complementExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_complementExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_complementExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @trueExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_trueExpression : public GALGAS_expression {
//--------------------------------- Default constructor
  public: GALGAS_trueExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_trueExpression (const class cPtr_trueExpression * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_trueExpression extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_trueExpression class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_trueExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_trueExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @trueExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_trueExpression : public cPtr_expression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter computeExpression
  public: virtual class GALGAS_binaryset getter_computeExpression (const class GALGAS_domainMap inDomainMap,
           const class GALGAS_varMap inVarMap,
           const class GALGAS_uint inTotalBitCount,
           const class GALGAS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties

//--- Constructor
  public: cPtr_trueExpression (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @trueExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_trueExpression_2D_weak : public GALGAS_expression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_trueExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_trueExpression_2D_weak (const class GALGAS_trueExpression & inSource) ;

  public: GALGAS_trueExpression_2D_weak & operator = (const class GALGAS_trueExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_trueExpression bang_trueExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_trueExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_trueExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_trueExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_trueExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @falseExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_falseExpression : public GALGAS_expression {
//--------------------------------- Default constructor
  public: GALGAS_falseExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_falseExpression (const class cPtr_falseExpression * inSourcePtr) ;

//--------------------------------- Property read access
//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_falseExpression extractObject (const GALGAS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_falseExpression class_func_new (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_falseExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_falseExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @falseExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_falseExpression : public cPtr_expression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter computeExpression
  public: virtual class GALGAS_binaryset getter_computeExpression (const class GALGAS_domainMap inDomainMap,
           const class GALGAS_varMap inVarMap,
           const class GALGAS_uint inTotalBitCount,
           const class GALGAS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties

//--- Constructor
  public: cPtr_falseExpression (LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @falseExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_falseExpression_2D_weak : public GALGAS_expression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_falseExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_falseExpression_2D_weak (const class GALGAS_falseExpression & inSource) ;

  public: GALGAS_falseExpression_2D_weak & operator = (const class GALGAS_falseExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_falseExpression bang_falseExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_falseExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_falseExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_falseExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_falseExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formulaParameterListInExpression list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_formulaParameterListInExpression : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_formulaParameterListInExpression (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_formulaParameterListInExpression (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_lstring & in_mParameterName,
                                                 const class GALGAS_lstringlist & in_mFieldNames
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_formulaParameterListInExpression extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_formulaParameterListInExpression class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_formulaParameterListInExpression class_func_listWithValue (const class GALGAS_lstring & inOperand0,
                                                                                         const class GALGAS_lstringlist & inOperand1
                                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_formulaParameterListInExpression inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_lstring & inOperand0,
                                                     const class GALGAS_lstringlist & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_formulaParameterListInExpression add_operation (const GALGAS_formulaParameterListInExpression & inOperand,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_lstring constinArgument0,
                                               class GALGAS_lstringlist constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_lstring constinArgument0,
                                                      class GALGAS_lstringlist constinArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_lstring & outArgument0,
                                                 class GALGAS_lstringlist & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_lstring & outArgument0,
                                                class GALGAS_lstringlist & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_lstring & outArgument0,
                                                      class GALGAS_lstringlist & outArgument1,
                                                      class GALGAS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFieldNamesAtIndex (class GALGAS_lstringlist constinArgument0,
                                                              class GALGAS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterNameAtIndex (class GALGAS_lstring constinArgument0,
                                                                 class GALGAS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_lstring & outArgument0,
                                              class GALGAS_lstringlist & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_lstring & outArgument0,
                                             class GALGAS_lstringlist & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_lstringlist getter_mFieldNamesAtIndex (const class GALGAS_uint & constinOperand0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_lstring getter_mParameterNameAtIndex (const class GALGAS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formulaParameterListInExpression getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formulaParameterListInExpression getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formulaParameterListInExpression getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_formulaParameterListInExpression ;
 
} ; // End of GALGAS_formulaParameterListInExpression class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_formulaParameterListInExpression : public cGenericAbstractEnumerator {
  public: cEnumerator_formulaParameterListInExpression (const GALGAS_formulaParameterListInExpression & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_lstring current_mParameterName (LOCATION_ARGS) const ;
  public: class GALGAS_lstringlist current_mFieldNames (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_formulaParameterListInExpression_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaParameterListInExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formulaParameterListInExpression_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_formulaParameterListInExpression_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_lstring mProperty_mParameterName ;
  public: inline GALGAS_lstring readProperty_mParameterName (void) const {
    return mProperty_mParameterName ;
  }

  public: GALGAS_lstringlist mProperty_mFieldNames ;
  public: inline GALGAS_lstringlist readProperty_mFieldNames (void) const {
    return mProperty_mFieldNames ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_formulaParameterListInExpression_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMParameterName (const GALGAS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterName = inValue ;
  }

  public: inline void setter_setMFieldNames (const GALGAS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFieldNames = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_formulaParameterListInExpression_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_formulaParameterListInExpression_2D_element (const GALGAS_lstring & in_mParameterName,
                                                              const GALGAS_lstringlist & in_mFieldNames) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_formulaParameterListInExpression_2D_element extractObject (const GALGAS_object & inObject,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_formulaParameterListInExpression_2D_element class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                          const class GALGAS_lstringlist & inOperand1,
                                                                                          class Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_formulaParameterListInExpression_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_formulaParameterListInExpression_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaParameterListInExpression_2D_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formulaInExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_formulaInExpression : public GALGAS_expression {
//--------------------------------- Default constructor
  public: GALGAS_formulaInExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_formulaInExpression (const class cPtr_formulaInExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mFormulaName (void) const ;

  public: class GALGAS_formulaParameterListInExpression readProperty_mParameterList (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_formulaInExpression extractObject (const GALGAS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_formulaInExpression class_func_new (const class GALGAS_lstring & inOperand0,
                                                                  const class GALGAS_formulaParameterListInExpression & inOperand1
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_formulaInExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMFormulaName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterList (class GALGAS_formulaParameterListInExpression inArgument0
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_formulaInExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaInExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @formulaInExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_formulaInExpression : public cPtr_expression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter computeExpression
  public: virtual class GALGAS_binaryset getter_computeExpression (const class GALGAS_domainMap inDomainMap,
           const class GALGAS_varMap inVarMap,
           const class GALGAS_uint inTotalBitCount,
           const class GALGAS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_lstring mProperty_mFormulaName ;
  public: GALGAS_formulaParameterListInExpression mProperty_mParameterList ;

//--- Constructor
  public: cPtr_formulaInExpression (const GALGAS_lstring & in_mFormulaName,
                                    const GALGAS_formulaParameterListInExpression & in_mParameterList
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formulaInExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_formulaInExpression_2D_weak : public GALGAS_expression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_formulaInExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_formulaInExpression_2D_weak (const class GALGAS_formulaInExpression & inSource) ;

  public: GALGAS_formulaInExpression_2D_weak & operator = (const class GALGAS_formulaInExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_formulaInExpression bang_formulaInExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_formulaInExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_formulaInExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_formulaInExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_formulaInExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaInExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @existInExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_existInExpression : public GALGAS_expression {
//--------------------------------- Default constructor
  public: GALGAS_existInExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_existInExpression (const class cPtr_existInExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_domainFieldList readProperty_mArgumentList (void) const ;

  public: class GALGAS_expression readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_existInExpression extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_existInExpression class_func_new (const class GALGAS_domainFieldList & inOperand0,
                                                                const class GALGAS_expression & inOperand1
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_existInExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMArgumentList (class GALGAS_domainFieldList inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_expression inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_existInExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_existInExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @existInExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_existInExpression : public cPtr_expression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter computeExpression
  public: virtual class GALGAS_binaryset getter_computeExpression (const class GALGAS_domainMap inDomainMap,
           const class GALGAS_varMap inVarMap,
           const class GALGAS_uint inTotalBitCount,
           const class GALGAS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_domainFieldList mProperty_mArgumentList ;
  public: GALGAS_expression mProperty_mExpression ;

//--- Constructor
  public: cPtr_existInExpression (const GALGAS_domainFieldList & in_mArgumentList,
                                  const GALGAS_expression & in_mExpression
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @existInExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_existInExpression_2D_weak : public GALGAS_expression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_existInExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_existInExpression_2D_weak (const class GALGAS_existInExpression & inSource) ;

  public: GALGAS_existInExpression_2D_weak & operator = (const class GALGAS_existInExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_existInExpression bang_existInExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_existInExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_existInExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_existInExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_existInExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_existInExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forAllInExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_forAllInExpression : public GALGAS_expression {
//--------------------------------- Default constructor
  public: GALGAS_forAllInExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_forAllInExpression (const class cPtr_forAllInExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_domainFieldList readProperty_mArgumentList (void) const ;

  public: class GALGAS_expression readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_forAllInExpression extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_forAllInExpression class_func_new (const class GALGAS_domainFieldList & inOperand0,
                                                                 const class GALGAS_expression & inOperand1
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_forAllInExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMArgumentList (class GALGAS_domainFieldList inArgument0
                                                         COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_expression inArgument0
                                                       COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_forAllInExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forAllInExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @forAllInExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_forAllInExpression : public cPtr_expression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter computeExpression
  public: virtual class GALGAS_binaryset getter_computeExpression (const class GALGAS_domainMap inDomainMap,
           const class GALGAS_varMap inVarMap,
           const class GALGAS_uint inTotalBitCount,
           const class GALGAS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_domainFieldList mProperty_mArgumentList ;
  public: GALGAS_expression mProperty_mExpression ;

//--- Constructor
  public: cPtr_forAllInExpression (const GALGAS_domainFieldList & in_mArgumentList,
                                   const GALGAS_expression & in_mExpression
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forAllInExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_forAllInExpression_2D_weak : public GALGAS_expression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_forAllInExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_forAllInExpression_2D_weak (const class GALGAS_forAllInExpression & inSource) ;

  public: GALGAS_forAllInExpression_2D_weak & operator = (const class GALGAS_forAllInExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_forAllInExpression bang_forAllInExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_forAllInExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_forAllInExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_forAllInExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_forAllInExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forAllInExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//                                              Phase 1: @comparison enum                                              *
//
//--------------------------------------------------------------------------------------------------

class GALGAS_comparison : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GALGAS_comparison (void) ;

//--------------------------------- Enumeration
  public: typedef enum {
    kNotBuilt,
    kEnum_equal,
    kEnum_notEqual,
    kEnum_lowerOrEqual,
    kEnum_lowerThan,
    kEnum_greaterOrEqual,
    kEnum_greaterThan
  } enumeration ;
  
//--------------------------------- Private data member
  private: enumeration mEnum ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override { return kNotBuilt != mEnum ; }
  public: VIRTUAL_IN_DEBUG inline void drop (void) override { mEnum = kNotBuilt ; }
  public: inline enumeration enumValue (void) const { return mEnum ; }

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_comparison extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_comparison class_func_equal (LOCATION_ARGS) ;

  public: static class GALGAS_comparison class_func_greaterOrEqual (LOCATION_ARGS) ;

  public: static class GALGAS_comparison class_func_greaterThan (LOCATION_ARGS) ;

  public: static class GALGAS_comparison class_func_lowerOrEqual (LOCATION_ARGS) ;

  public: static class GALGAS_comparison class_func_lowerThan (LOCATION_ARGS) ;

  public: static class GALGAS_comparison class_func_notEqual (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_comparison & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGreaterOrEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isGreaterThan (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLowerOrEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isLowerThan (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_bool getter_isNotEqual (LOCATION_ARGS) const ;


//--------------------------------- Optional Methods
  public: VIRTUAL_IN_DEBUG bool optional_equal () const ;

  public: VIRTUAL_IN_DEBUG bool optional_greaterOrEqual () const ;

  public: VIRTUAL_IN_DEBUG bool optional_greaterThan () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lowerOrEqual () const ;

  public: VIRTUAL_IN_DEBUG bool optional_lowerThan () const ;

  public: VIRTUAL_IN_DEBUG bool optional_notEqual () const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_comparison class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparison ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonWithConstantInExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_comparisonWithConstantInExpression : public GALGAS_expression {
//--------------------------------- Default constructor
  public: GALGAS_comparisonWithConstantInExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_comparisonWithConstantInExpression (const class cPtr_comparisonWithConstantInExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mVarName (void) const ;

  public: class GALGAS_lstringlist readProperty_mFieldNames (void) const ;

  public: class GALGAS_comparison readProperty_mComparison (void) const ;

  public: class GALGAS_luint readProperty_mConstant (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_comparisonWithConstantInExpression extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_comparisonWithConstantInExpression class_func_new (const class GALGAS_lstring & inOperand0,
                                                                                 const class GALGAS_lstringlist & inOperand1,
                                                                                 const class GALGAS_comparison & inOperand2,
                                                                                 const class GALGAS_luint & inOperand3
                                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_comparisonWithConstantInExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMComparison (class GALGAS_comparison inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMConstant (class GALGAS_luint inArgument0
                                                     COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFieldNames (class GALGAS_lstringlist inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVarName (class GALGAS_lstring inArgument0
                                                    COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_comparisonWithConstantInExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonWithConstantInExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @comparisonWithConstantInExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_comparisonWithConstantInExpression : public cPtr_expression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter computeExpression
  public: virtual class GALGAS_binaryset getter_computeExpression (const class GALGAS_domainMap inDomainMap,
           const class GALGAS_varMap inVarMap,
           const class GALGAS_uint inTotalBitCount,
           const class GALGAS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_lstring mProperty_mVarName ;
  public: GALGAS_lstringlist mProperty_mFieldNames ;
  public: GALGAS_comparison mProperty_mComparison ;
  public: GALGAS_luint mProperty_mConstant ;

//--- Constructor
  public: cPtr_comparisonWithConstantInExpression (const GALGAS_lstring & in_mVarName,
                                                   const GALGAS_lstringlist & in_mFieldNames,
                                                   const GALGAS_comparison & in_mComparison,
                                                   const GALGAS_luint & in_mConstant
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonWithConstantInExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_comparisonWithConstantInExpression_2D_weak : public GALGAS_expression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_comparisonWithConstantInExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_comparisonWithConstantInExpression_2D_weak (const class GALGAS_comparisonWithConstantInExpression & inSource) ;

  public: GALGAS_comparisonWithConstantInExpression_2D_weak & operator = (const class GALGAS_comparisonWithConstantInExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_comparisonWithConstantInExpression bang_comparisonWithConstantInExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_comparisonWithConstantInExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_comparisonWithConstantInExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_comparisonWithConstantInExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_comparisonWithConstantInExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonWithConstantInExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @variableComparisonInExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_variableComparisonInExpression : public GALGAS_expression {
//--------------------------------- Default constructor
  public: GALGAS_variableComparisonInExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_variableComparisonInExpression (const class cPtr_variableComparisonInExpression * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mLeftVarName (void) const ;

  public: class GALGAS_lstringlist readProperty_mLeftFieldNames (void) const ;

  public: class GALGAS_comparison readProperty_mComparison (void) const ;

  public: class GALGAS_lstring readProperty_mRightVarName (void) const ;

  public: class GALGAS_lstringlist readProperty_mRightFieldNames (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_variableComparisonInExpression extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_variableComparisonInExpression class_func_new (const class GALGAS_lstring & inOperand0,
                                                                             const class GALGAS_lstringlist & inOperand1,
                                                                             const class GALGAS_comparison & inOperand2,
                                                                             const class GALGAS_lstring & inOperand3,
                                                                             const class GALGAS_lstringlist & inOperand4
                                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_variableComparisonInExpression & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMComparison (class GALGAS_comparison inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLeftFieldNames (class GALGAS_lstringlist inArgument0
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMLeftVarName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightFieldNames (class GALGAS_lstringlist inArgument0
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRightVarName (class GALGAS_lstring inArgument0
                                                         COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_variableComparisonInExpression class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_variableComparisonInExpression ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @variableComparisonInExpression class
//
//--------------------------------------------------------------------------------------------------

class cPtr_variableComparisonInExpression : public cPtr_expression {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension getter computeExpression
  public: virtual class GALGAS_binaryset getter_computeExpression (const class GALGAS_domainMap inDomainMap,
           const class GALGAS_varMap inVarMap,
           const class GALGAS_uint inTotalBitCount,
           const class GALGAS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GALGAS_lstring mProperty_mLeftVarName ;
  public: GALGAS_lstringlist mProperty_mLeftFieldNames ;
  public: GALGAS_comparison mProperty_mComparison ;
  public: GALGAS_lstring mProperty_mRightVarName ;
  public: GALGAS_lstringlist mProperty_mRightFieldNames ;

//--- Constructor
  public: cPtr_variableComparisonInExpression (const GALGAS_lstring & in_mLeftVarName,
                                               const GALGAS_lstringlist & in_mLeftFieldNames,
                                               const GALGAS_comparison & in_mComparison,
                                               const GALGAS_lstring & in_mRightVarName,
                                               const GALGAS_lstringlist & in_mRightFieldNames
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @variableComparisonInExpression_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_variableComparisonInExpression_2D_weak : public GALGAS_expression_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_variableComparisonInExpression_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_variableComparisonInExpression_2D_weak (const class GALGAS_variableComparisonInExpression & inSource) ;

  public: GALGAS_variableComparisonInExpression_2D_weak & operator = (const class GALGAS_variableComparisonInExpression & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_variableComparisonInExpression bang_variableComparisonInExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_variableComparisonInExpression_2D_weak extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_variableComparisonInExpression_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_variableComparisonInExpression_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_variableComparisonInExpression_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_variableComparisonInExpression_2D_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@expression computeExpression'
//
//--------------------------------------------------------------------------------------------------

class GALGAS_binaryset callExtensionGetter_computeExpression (const class cPtr_expression * inObject,
                                                              const class GALGAS_domainMap constin_inDomainMap,
                                                              const class GALGAS_varMap constin_inVarMap,
                                                              const class GALGAS_uint constin_inTotalBitCount,
                                                              const class GALGAS_computedFormulaMap constin_inComputedFormulaMap,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'kerbdd_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_kerbdd_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_kerbdd_5F_syntax (void) {}

//--- Non terminal declarations
  protected: virtual void nt_comparison_ (class GALGAS_expression & outArgument0,
                                          class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_comparison_parse (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_comparison_indexing (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GALGAS_expression & outArgument0,
                                          class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_factor_ (class GALGAS_expression & outArgument0,
                                      class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_factor_parse (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_factor_indexing (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_recordFields_ (class GALGAS_domainFieldList & outArgument0,
                                            class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_recordFields_parse (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_recordFields_indexing (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GALGAS_ast & outArgument0,
                                               class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_term_ (class GALGAS_expression & outArgument0,
                                    class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_term_parse (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_term_indexing (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_topLevelDeClaration_ (class GALGAS_ast & ioArgument0,
                                                   class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_topLevelDeClaration_parse (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_topLevelDeClaration_indexing (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_type_ (class GALGAS_bddType & outArgument0,
                                    class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_type_parse (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_type_indexing (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_kerbdd_5F_syntax_start_5F_symbol_i0_ (GALGAS_ast & outArgument0,
                                                             Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_start_5F_symbol_i0_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_start_5F_symbol_i0_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i1_ (GALGAS_ast & ioArgument0,
                                                                 Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i1_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i1_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_recordFields_i2_ (GALGAS_domainFieldList & outArgument0,
                                                          Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_recordFields_i2_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_recordFields_i2_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_type_i3_ (GALGAS_bddType & outArgument0,
                                                  Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_type_i3_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_type_i3_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i4_ (GALGAS_ast & ioArgument0,
                                                                 Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i4_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i4_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i5_ (GALGAS_ast & ioArgument0,
                                                                 Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i5_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i5_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i6_ (GALGAS_ast & ioArgument0,
                                                                 Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i6_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i6_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i7_ (GALGAS_ast & ioArgument0,
                                                                 Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i7_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i7_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i8_ (GALGAS_ast & ioArgument0,
                                                                 Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i8_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i8_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_expression_i9_ (GALGAS_expression & outArgument0,
                                                        Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_expression_i9_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_expression_i9_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_comparison_i10_ (GALGAS_expression & outArgument0,
                                                         Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_comparison_i10_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_comparison_i10_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_term_i11_ (GALGAS_expression & outArgument0,
                                                   Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_term_i11_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_term_i11_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i12_ (GALGAS_expression & outArgument0,
                                                     Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i12_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i12_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i13_ (GALGAS_expression & outArgument0,
                                                     Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i13_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i13_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i14_ (GALGAS_expression & outArgument0,
                                                     Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i14_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i14_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i15_ (GALGAS_expression & outArgument0,
                                                     Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i15_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i15_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i16_ (GALGAS_expression & outArgument0,
                                                     Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i16_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i16_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i17_ (GALGAS_expression & outArgument0,
                                                     Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i17_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i17_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i18_ (GALGAS_expression & outArgument0,
                                                     Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i18_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i18_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i19_ (GALGAS_expression & outArgument0,
                                                     Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i19_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i19_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i20_ (GALGAS_expression & outArgument0,
                                                     Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i20_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i20_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;



//--- Select methods
  protected: virtual int32_t select_kerbdd_5F_syntax_0 (Lexique_kerbdd_5F_lexique *) = 0 ;

  protected: virtual int32_t select_kerbdd_5F_syntax_1 (Lexique_kerbdd_5F_lexique *) = 0 ;

  protected: virtual int32_t select_kerbdd_5F_syntax_2 (Lexique_kerbdd_5F_lexique *) = 0 ;

  protected: virtual int32_t select_kerbdd_5F_syntax_3 (Lexique_kerbdd_5F_lexique *) = 0 ;

  protected: virtual int32_t select_kerbdd_5F_syntax_4 (Lexique_kerbdd_5F_lexique *) = 0 ;

  protected: virtual int32_t select_kerbdd_5F_syntax_5 (Lexique_kerbdd_5F_lexique *) = 0 ;

  protected: virtual int32_t select_kerbdd_5F_syntax_6 (Lexique_kerbdd_5F_lexique *) = 0 ;

  protected: virtual int32_t select_kerbdd_5F_syntax_7 (Lexique_kerbdd_5F_lexique *) = 0 ;

  protected: virtual int32_t select_kerbdd_5F_syntax_8 (Lexique_kerbdd_5F_lexique *) = 0 ;

  protected: virtual int32_t select_kerbdd_5F_syntax_9 (Lexique_kerbdd_5F_lexique *) = 0 ;

  protected: virtual int32_t select_kerbdd_5F_syntax_10 (Lexique_kerbdd_5F_lexique *) = 0 ;

  protected: virtual int32_t select_kerbdd_5F_syntax_11 (Lexique_kerbdd_5F_lexique *) = 0 ;

  protected: virtual int32_t select_kerbdd_5F_syntax_12 (Lexique_kerbdd_5F_lexique *) = 0 ;

  protected: virtual int32_t select_kerbdd_5F_syntax_13 (Lexique_kerbdd_5F_lexique *) = 0 ;

  protected: virtual int32_t select_kerbdd_5F_syntax_14 (Lexique_kerbdd_5F_lexique *) = 0 ;

  protected: virtual int32_t select_kerbdd_5F_syntax_15 (Lexique_kerbdd_5F_lexique *) = 0 ;

  protected: virtual int32_t select_kerbdd_5F_syntax_16 (Lexique_kerbdd_5F_lexique *) = 0 ;

  protected: virtual int32_t select_kerbdd_5F_syntax_17 (Lexique_kerbdd_5F_lexique *) = 0 ;


} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentFormula reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_assignmentFormula : public GALGAS_abstractFormula {
//--------------------------------- Default constructor
  public: GALGAS_assignmentFormula (void) ;

//--------------------------------- Constructor from pointer
  public: GALGAS_assignmentFormula (const class cPtr_assignmentFormula * inSourcePtr) ;

//--------------------------------- Property read access
  public: class GALGAS_lstring readProperty_mFormulaName (void) const ;

  public: class GALGAS_domainFieldList readProperty_mFormulaArgumentList (void) const ;

  public: class GALGAS_formulaKind readProperty_mKind (void) const ;

  public: class GALGAS_expression readProperty_mExpression (void) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentFormula extractObject (const GALGAS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_assignmentFormula class_func_new (const class GALGAS_lstring & inOperand0,
                                                                const class GALGAS_domainFieldList & inOperand1,
                                                                const class GALGAS_formulaKind & inOperand2,
                                                                const class GALGAS_expression & inOperand3
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_assignmentFormula & inOperand) const ;

//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_setMExpression (class GALGAS_expression inArgument0
                                                       COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormulaArgumentList (class GALGAS_domainFieldList inArgument0
                                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormulaName (class GALGAS_lstring inArgument0
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMKind (class GALGAS_formulaKind inArgument0
                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_assignmentFormula class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentFormula ;

//--------------------------------------------------------------------------------------------------
//
// Phase 2: pointer class for @assignmentFormula class
//
//--------------------------------------------------------------------------------------------------

class cPtr_assignmentFormula : public cPtr_abstractFormula {

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: virtual void printNonNullClassInstanceProperties (void) const override ;
  #endif
//--- Extension method analyzeFormula
  public: virtual void method_analyzeFormula (const class GALGAS_string inSourceFilePath,
           const class GALGAS_domainMap inDomainMap,
           class GALGAS_computedFormulaMap & ioComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GALGAS_lstring mProperty_mFormulaName ;
  public: GALGAS_domainFieldList mProperty_mFormulaArgumentList ;
  public: GALGAS_formulaKind mProperty_mKind ;
  public: GALGAS_expression mProperty_mExpression ;

//--- Constructor
  public: cPtr_assignmentFormula (const GALGAS_lstring & in_mFormulaName,
                                  const GALGAS_domainFieldList & in_mFormulaArgumentList,
                                  const GALGAS_formulaKind & in_mKind,
                                  const GALGAS_expression & in_mExpression
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

  public: virtual ComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;

  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formulaList list
//
//--------------------------------------------------------------------------------------------------

class GALGAS_formulaList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GALGAS_formulaList (void) ;

//--------------------------------- List constructor used by listmap
  public: GALGAS_formulaList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GALGAS_abstractFormula & in_mFormula
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_formulaList extractObject (const GALGAS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_formulaList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GALGAS_formulaList class_func_listWithValue (const class GALGAS_abstractFormula & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_formulaList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GALGAS_abstractFormula & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GALGAS_formulaList add_operation (const GALGAS_formulaList & inOperand,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GALGAS_abstractFormula constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GALGAS_abstractFormula constinArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GALGAS_abstractFormula & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GALGAS_abstractFormula & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GALGAS_abstractFormula & outArgument0,
                                                      class GALGAS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormulaAtIndex (class GALGAS_abstractFormula constinArgument0,
                                                           class GALGAS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GALGAS_abstractFormula & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GALGAS_abstractFormula & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GALGAS_abstractFormula getter_mFormulaAtIndex (const class GALGAS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formulaList getter_subListFromIndex (const class GALGAS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formulaList getter_subListToIndex (const class GALGAS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GALGAS_formulaList getter_subListWithRange (const class GALGAS_range & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;


//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
//--------------------------------- Friend

  friend class cEnumerator_formulaList ;
 
} ; // End of GALGAS_formulaList class

//--------------------------------------------------------------------------------------------------
//   Enumerator declaration                                                                      
//--------------------------------------------------------------------------------------------------

class cEnumerator_formulaList : public cGenericAbstractEnumerator {
  public: cEnumerator_formulaList (const GALGAS_formulaList & inEnumeratedObject,
                                   const EnumerationOrder inOrder) ;

//--- Current element access
  public: class GALGAS_abstractFormula current_mFormula (LOCATION_ARGS) const ;
//--- Current element access
  public: class GALGAS_formulaList_2D_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaList ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @ast struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_ast : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_domainDeclarationList mProperty_mDomainList ;
  public: inline GALGAS_domainDeclarationList readProperty_mDomainList (void) const {
    return mProperty_mDomainList ;
  }

  public: GALGAS_formulaList mProperty_mFormulaList ;
  public: inline GALGAS_formulaList readProperty_mFormulaList (void) const {
    return mProperty_mFormulaList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_ast (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDomainList (const GALGAS_domainDeclarationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDomainList = inValue ;
  }

  public: inline void setter_setMFormulaList (const GALGAS_formulaList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormulaList = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_ast (void) ;

//--------------------------------- Native constructor
  public: GALGAS_ast (const GALGAS_domainDeclarationList & in_mDomainList,
                      const GALGAS_formulaList & in_mFormulaList) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_ast extractObject (const GALGAS_object & inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_ast class_func_new (Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_ast & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_ast class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ast ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formulaList_2D_element struct
//
//--------------------------------------------------------------------------------------------------

class GALGAS_formulaList_2D_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GALGAS_abstractFormula mProperty_mFormula ;
  public: inline GALGAS_abstractFormula readProperty_mFormula (void) const {
    return mProperty_mFormula ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GALGAS_formulaList_2D_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormula (const GALGAS_abstractFormula & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormula = inValue ;
  }

//--------------------------------- Virtual destructor (in debug mode)
  public: virtual ~ GALGAS_formulaList_2D_element (void) ;

//--------------------------------- Native constructor
  public: GALGAS_formulaList_2D_element (const GALGAS_abstractFormula & in_mFormula) ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_formulaList_2D_element extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_formulaList_2D_element class_func_new (const class GALGAS_abstractFormula & inOperand0,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;
//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_formulaList_2D_element & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_formulaList_2D_element class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaList_2D_element ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractFormula analyzeFormula'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeFormula (class cPtr_abstractFormula * inObject,
                                         const class GALGAS_string constin_inSourceFilePath,
                                         const class GALGAS_domainMap constin_inDomainMap,
                                         class GALGAS_computedFormulaMap & io_ioComputedFormulaMap,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentFormula_2D_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GALGAS_assignmentFormula_2D_weak : public GALGAS_abstractFormula_2D_weak {
//--------------------------------- Default constructor
  public: GALGAS_assignmentFormula_2D_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GALGAS_assignmentFormula_2D_weak (const class GALGAS_assignmentFormula & inSource) ;

  public: GALGAS_assignmentFormula_2D_weak & operator = (const class GALGAS_assignmentFormula & inSource) ;

//--------------------------------- Bang operator
  public: GALGAS_assignmentFormula bang_assignmentFormula_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//-- Start of type generic part

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GALGAS_assignmentFormula_2D_weak extractObject (const GALGAS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GALGAS_assignmentFormula_2D_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GALGAS_assignmentFormula_2D_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Optional Methods

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ; // End of GALGAS_assignmentFormula_2D_weak class


//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentFormula_2D_weak ;

//--------------------------------------------------------------------------------------------------
//  GRAMMAR kerbdd_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_kerbdd_5F_grammar : public cParser_kerbdd_5F_syntax {
//------------------------------------- 'comparison' non terminal
//--- 'parse' label
  public: virtual void nt_comparison_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_comparison_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_comparison_ (GALGAS_expression & outArgument0,
                                       Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public: virtual void nt_expression_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_ (GALGAS_expression & outArgument0,
                                       Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'factor' non terminal
//--- 'parse' label
  public: virtual void nt_factor_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_factor_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_factor_ (GALGAS_expression & outArgument0,
                                   Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'recordFields' non terminal
//--- 'parse' label
  public: virtual void nt_recordFields_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_recordFields_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_recordFields_ (GALGAS_domainFieldList & outArgument0,
                                         Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (GALGAS_ast & outArgument0,
                                            Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GALGAS_lstring inFileName,
                                                  GALGAS_ast & outArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GALGAS_string inSourceString,
                                                    GALGAS_string inNameString,
                                                    GALGAS_ast & outArgument0
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

//------------------------------------- 'term' non terminal
//--- 'parse' label
  public: virtual void nt_term_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_term_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_term_ (GALGAS_expression & outArgument0,
                                 Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'topLevelDeClaration' non terminal
//--- 'parse' label
  public: virtual void nt_topLevelDeClaration_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_topLevelDeClaration_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_topLevelDeClaration_ (GALGAS_ast & ioArgument0,
                                                Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'type' non terminal
//--- 'parse' label
  public: virtual void nt_type_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_type_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_type_ (GALGAS_bddType & outArgument0,
                                 Lexique_kerbdd_5F_lexique * inCompiler) ;

  public: virtual int32_t select_kerbdd_5F_syntax_0 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_1 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_2 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_3 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_4 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_5 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_6 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_7 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_8 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_9 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_10 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_11 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_12 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_13 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_14 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_15 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_16 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_17 (Lexique_kerbdd_5F_lexique *) ;
} ;

//--------------------------------------------------------------------------------------------------
