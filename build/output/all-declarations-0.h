#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
// Phase 1: @_32_lstringlist list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator__32_lstringlist final : public cGenericAbstractEnumerator {
  public: DownEnumerator__32_lstringlist (const class GGS__32_lstringlist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mValue_30_ (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mValue_31_ (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS__32_lstringlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator__32_lstringlist final : public cGenericAbstractEnumerator {
  public: UpEnumerator__32_lstringlist (const class GGS__32_lstringlist & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mValue_30_ (LOCATION_ARGS) const ;
  public: class GGS_lstring current_mValue_31_ (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS__32_lstringlist_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @2lstringlist list
//--------------------------------------------------------------------------------------------------

class GGS__32_lstringlist : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS__32_lstringlist (void) ;

//--------------------------------- List constructor by graph
  public: GGS__32_lstringlist (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mValue_30_,
                                                 const class GGS_lstring & in_mValue_31_
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__32_lstringlist init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__32_lstringlist extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS__32_lstringlist class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS__32_lstringlist class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                     const class GGS_lstring & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS__32_lstringlist inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstring & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS__32_lstringlist add_operation (const GGS__32_lstringlist & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstring constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstring constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstring & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstring & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstring & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue_30_AtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValue_31_AtIndex (class GGS_lstring constinArgument0,
                                                             class GGS_uint constinArgument1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstring & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstring & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mValue_30_AtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mValue_31_AtIndex (const class GGS_uint & constinOperand0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_lstringlist getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_lstringlist getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS__32_lstringlist getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS__32_lstringlist_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator__32_lstringlist ;
  friend class DownEnumerator__32_lstringlist ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @_32_lstringlist_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS__32_lstringlist_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mValue_30_ ;
  public: inline GGS_lstring readProperty_mValue_30_ (void) const {
    return mProperty_mValue_30_ ;
  }

  public: GGS_lstring mProperty_mValue_31_ ;
  public: inline GGS_lstring readProperty_mValue_31_ (void) const {
    return mProperty_mValue_31_ ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS__32_lstringlist_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMValue_30_ (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_30_ = inValue ;
  }

  public: inline void setter_setMValue_31_ (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue_31_ = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS__32_lstringlist_2E_element (const GGS_lstring & in_mValue_30_,
                                          const GGS_lstring & in_mValue_31_) ;

//--------------------------------- Copy constructor
  public: GGS__32_lstringlist_2E_element (const GGS__32_lstringlist_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS__32_lstringlist_2E_element & operator = (const GGS__32_lstringlist_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS__32_lstringlist_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_lstring & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS__32_lstringlist_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS__32_lstringlist_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                      const class GGS_lstring & inOperand1,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ;

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
  public: static GGS_stringlist symbols (LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected: virtual ~ Lexique_kerbdd_5F_lexique (void) { }
  #endif



//--- Terminal symbols enumeration
  public: const static int32_t kToken_ = 0 ;
  public: static const int32_t kToken_identifier = 1 ;
  public: static const int32_t kToken_integer = 2 ;
  public: static const int32_t kToken_literal_5F_string = 3 ;
  public: static const int32_t kToken_comment = 4 ;
  public: static const int32_t kToken_nodeHashMapSize = 5 ;
  public: static const int32_t kToken_andCacheMapSize = 6 ;
  public: static const int32_t kToken_domain = 7 ;
  public: static const int32_t kToken_bool = 8 ;
  public: static const int32_t kToken_true = 9 ;
  public: static const int32_t kToken_false = 10 ;
  public: static const int32_t kToken_display = 11 ;
  public: static const int32_t kToken_include = 12 ;
  public: static const int32_t kToken_graphviz = 13 ;
  public: static const int32_t kToken_dump = 14 ;
  public: static const int32_t kToken__28_ = 15 ;
  public: static const int32_t kToken__29_ = 16 ;
  public: static const int32_t kToken__5B_ = 17 ;
  public: static const int32_t kToken__5D_ = 18 ;
  public: static const int32_t kToken__7B_ = 19 ;
  public: static const int32_t kToken__7D_ = 20 ;
  public: static const int32_t kToken__3A__3D_ = 21 ;
  public: static const int32_t kToken__3A_ = 22 ;
  public: static const int32_t kToken__2E_ = 23 ;
  public: static const int32_t kToken__2E__2E_ = 24 ;
  public: static const int32_t kToken__2B__3D_ = 25 ;
  public: static const int32_t kToken__2D__3D_ = 26 ;
  public: static const int32_t kToken__2D__3E_ = 27 ;
  public: static const int32_t kToken__26_ = 28 ;
  public: static const int32_t kToken__7C_ = 29 ;
  public: static const int32_t kToken__5E_ = 30 ;
  public: static const int32_t kToken__7E_ = 31 ;
  public: static const int32_t kToken__2C_ = 32 ;
  public: static const int32_t kToken__3F_ = 33 ;
  public: static const int32_t kToken__21_ = 34 ;
  public: static const int32_t kToken__3B_ = 35 ;
  public: static const int32_t kToken__3D_ = 36 ;
  public: static const int32_t kToken__21__3D_ = 37 ;
  public: static const int32_t kToken__3C_ = 38 ;
  public: static const int32_t kToken__3C__3D_ = 39 ;
  public: static const int32_t kToken__3E_ = 40 ;
  public: static const int32_t kToken__3E__3D_ = 41 ;

//--- Key words table 'keyWordList'
  public: static int32_t search_into_keyWordList (const String & inSearchedString) ;

//--- Key words table 'delimitorsList'
  public: static int32_t search_into_delimitorsList (const String & inSearchedString) ;
  

//--- Assign from attribute
  public: GGS_lstring synthetizedAttribute_tokenString (void) const ;
  public: GGS_luint synthetizedAttribute_uint_33__32_value (void) const ;


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
//   enum bddType
//--------------------------------------------------------------------------------------------------

class GGS_bddType : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_bddType (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_bool,
    enum_boolArray,
    enum_namedType
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_boolArray (class GGS_uint & out_size) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_namedType (class GGS_lstring & out_typeName) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bddType extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bddType class_func_bool (LOCATION_ARGS) ;

  public: static class GGS_bddType class_func_boolArray (const class GGS_uint & inOperand0
                                                         COMMA_LOCATION_ARGS) ;

  public: static class GGS_bddType class_func_namedType (const class GGS_lstring & inOperand0
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractBoolArray (class GGS_uint & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractNamedType (class GGS_lstring & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bddType_2E_boolArray_3F_ getter_getBoolArray (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bddType_2E_namedType_3F_ getter_getNamedType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBool (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isBoolArray (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNamedType (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bddType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bddType_2E_boolArray struct
//--------------------------------------------------------------------------------------------------

class GGS_bddType_2E_boolArray : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_uint mProperty_size ;
  public: inline GGS_uint readProperty_size (void) const {
    return mProperty_size ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_bddType_2E_boolArray (void) ;

//--------------------------------- Property setters
  public: inline void setter_setSize (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_size = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_bddType_2E_boolArray (const GGS_uint & in_size) ;

//--------------------------------- Copy constructor
  public: GGS_bddType_2E_boolArray (const GGS_bddType_2E_boolArray & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_bddType_2E_boolArray & operator = (const GGS_bddType_2E_boolArray & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bddType_2E_boolArray init_21_ (const class GGS_uint & inOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bddType_2E_boolArray extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bddType_2E_boolArray class_func_new (const class GGS_uint & inOperand0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bddType_2E_boolArray ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: bddType.boolArray? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_bddType_2E_boolArray_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_bddType_2E_boolArray mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_bddType_2E_boolArray_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_bddType_2E_boolArray_3F_ (const GGS_bddType_2E_boolArray & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_bddType_2E_boolArray_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_bddType_2E_boolArray unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bddType_2E_boolArray_3F_ extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bddType_2E_boolArray_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @bddType_2E_namedType struct
//--------------------------------------------------------------------------------------------------

class GGS_bddType_2E_namedType : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_typeName ;
  public: inline GGS_lstring readProperty_typeName (void) const {
    return mProperty_typeName ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_bddType_2E_namedType (void) ;

//--------------------------------- Property setters
  public: inline void setter_setTypeName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_typeName = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_bddType_2E_namedType (const GGS_lstring & in_typeName) ;

//--------------------------------- Copy constructor
  public: GGS_bddType_2E_namedType (const GGS_bddType_2E_namedType & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_bddType_2E_namedType & operator = (const GGS_bddType_2E_namedType & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_bddType_2E_namedType init_21_ (const class GGS_lstring & inOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bddType_2E_namedType extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_bddType_2E_namedType class_func_new (const class GGS_lstring & inOperand0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bddType_2E_namedType ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: bddType.namedType? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_bddType_2E_namedType_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_bddType_2E_namedType mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_bddType_2E_namedType_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_bddType_2E_namedType_3F_ (const GGS_bddType_2E_namedType & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_bddType_2E_namedType_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_bddType_2E_namedType unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_bddType_2E_namedType_3F_ extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bddType_2E_namedType_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @domainFieldList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_domainFieldList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_domainFieldList (const class GGS_domainFieldList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mVarName (LOCATION_ARGS) const ;
  public: class GGS_bddType current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_domainFieldList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_domainFieldList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_domainFieldList (const class GGS_domainFieldList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mVarName (LOCATION_ARGS) const ;
  public: class GGS_bddType current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_domainFieldList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @domainFieldList list
//--------------------------------------------------------------------------------------------------

class GGS_domainFieldList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_domainFieldList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_domainFieldList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mVarName,
                                                 const class GGS_bddType & in_mType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_domainFieldList init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_domainFieldList extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_domainFieldList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_domainFieldList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                     const class GGS_bddType & inOperand1
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_domainFieldList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_bddType & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_domainFieldList add_operation (const GGS_domainFieldList & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_bddType constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_bddType constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_bddType & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_bddType & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_bddType & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GGS_bddType constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVarNameAtIndex (class GGS_lstring constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_bddType & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_bddType & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bddType getter_mTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mVarNameAtIndex (const class GGS_uint & constinOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_domainFieldList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_domainFieldList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_domainFieldList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_domainFieldList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_domainFieldList ;
  friend class DownEnumerator_domainFieldList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainFieldList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @domainFieldList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_domainFieldList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mVarName ;
  public: inline GGS_lstring readProperty_mVarName (void) const {
    return mProperty_mVarName ;
  }

  public: GGS_bddType mProperty_mType ;
  public: inline GGS_bddType readProperty_mType (void) const {
    return mProperty_mType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_domainFieldList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMVarName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mVarName = inValue ;
  }

  public: inline void setter_setMType (const GGS_bddType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_domainFieldList_2E_element (const GGS_lstring & in_mVarName,
                                          const GGS_bddType & in_mType) ;

//--------------------------------- Copy constructor
  public: GGS_domainFieldList_2E_element (const GGS_domainFieldList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_domainFieldList_2E_element & operator = (const GGS_domainFieldList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_domainFieldList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                              const class GGS_bddType & inOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_domainFieldList_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_domainFieldList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                      const class GGS_bddType & inOperand1,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainFieldList_2E_element ;

//--------------------------------------------------------------------------------------------------
//   enum domainDeclarationType
//--------------------------------------------------------------------------------------------------

class GGS_domainDeclarationType : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_domainDeclarationType (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_type,
    enum_record
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_type (class GGS_bddType & out_type) const ;
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_record (class GGS_domainFieldList & out_fieldList) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_domainDeclarationType extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_domainDeclarationType class_func_record (const class GGS_domainFieldList & inOperand0
                                                                    COMMA_LOCATION_ARGS) ;

  public: static class GGS_domainDeclarationType class_func_type (const class GGS_bddType & inOperand0
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractRecord (class GGS_domainFieldList & outArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_extractType (class GGS_bddType & outArgument0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_domainDeclarationType_2E_record_3F_ getter_getRecord (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_domainDeclarationType_2E_type_3F_ getter_getType (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isRecord (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isType (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationType ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @domainDeclarationType_2E_record struct
//--------------------------------------------------------------------------------------------------

class GGS_domainDeclarationType_2E_record : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_domainFieldList mProperty_fieldList ;
  public: inline GGS_domainFieldList readProperty_fieldList (void) const {
    return mProperty_fieldList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_domainDeclarationType_2E_record (void) ;

//--------------------------------- Property setters
  public: inline void setter_setFieldList (const GGS_domainFieldList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_fieldList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_domainDeclarationType_2E_record (const GGS_domainFieldList & in_fieldList) ;

//--------------------------------- Copy constructor
  public: GGS_domainDeclarationType_2E_record (const GGS_domainDeclarationType_2E_record & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_domainDeclarationType_2E_record & operator = (const GGS_domainDeclarationType_2E_record & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_domainDeclarationType_2E_record init_21_ (const class GGS_domainFieldList & inOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_domainDeclarationType_2E_record extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_domainDeclarationType_2E_record class_func_new (const class GGS_domainFieldList & inOperand0,
                                                                           class Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationType_2E_record ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: domainDeclarationType.record? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_domainDeclarationType_2E_record_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_domainDeclarationType_2E_record mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_domainDeclarationType_2E_record_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_domainDeclarationType_2E_record_3F_ (const GGS_domainDeclarationType_2E_record & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_domainDeclarationType_2E_record_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_domainDeclarationType_2E_record unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_domainDeclarationType_2E_record_3F_ extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationType_2E_record_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @domainDeclarationType_2E_type struct
//--------------------------------------------------------------------------------------------------

class GGS_domainDeclarationType_2E_type : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_bddType mProperty_type ;
  public: inline GGS_bddType readProperty_type (void) const {
    return mProperty_type ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_domainDeclarationType_2E_type (void) ;

//--------------------------------- Property setters
  public: inline void setter_setType (const GGS_bddType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_type = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_domainDeclarationType_2E_type (const GGS_bddType & in_type) ;

//--------------------------------- Copy constructor
  public: GGS_domainDeclarationType_2E_type (const GGS_domainDeclarationType_2E_type & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_domainDeclarationType_2E_type & operator = (const GGS_domainDeclarationType_2E_type & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_domainDeclarationType_2E_type init_21_ (const class GGS_bddType & inOperand0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_domainDeclarationType_2E_type extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_domainDeclarationType_2E_type class_func_new (const class GGS_bddType & inOperand0,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationType_2E_type ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: domainDeclarationType.type? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_domainDeclarationType_2E_type_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_domainDeclarationType_2E_type mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_domainDeclarationType_2E_type_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_domainDeclarationType_2E_type_3F_ (const GGS_domainDeclarationType_2E_type & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_domainDeclarationType_2E_type_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_domainDeclarationType_2E_type unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_domainDeclarationType_2E_type_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationType_2E_type_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @domainDeclarationList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_domainDeclarationList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_domainDeclarationList (const class GGS_domainDeclarationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mDomainName (LOCATION_ARGS) const ;
  public: class GGS_domainDeclarationType current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_domainDeclarationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_domainDeclarationList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_domainDeclarationList (const class GGS_domainDeclarationList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mDomainName (LOCATION_ARGS) const ;
  public: class GGS_domainDeclarationType current_mType (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_domainDeclarationList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @domainDeclarationList list
//--------------------------------------------------------------------------------------------------

class GGS_domainDeclarationList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_domainDeclarationList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_domainDeclarationList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mDomainName,
                                                 const class GGS_domainDeclarationType & in_mType
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_domainDeclarationList init (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_domainDeclarationList extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_domainDeclarationList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_domainDeclarationList class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                           const class GGS_domainDeclarationType & inOperand1
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_domainDeclarationList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_domainDeclarationType & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_domainDeclarationList add_operation (const GGS_domainDeclarationList & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_domainDeclarationType constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_domainDeclarationType constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_domainDeclarationType & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_domainDeclarationType & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_domainDeclarationType & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMDomainNameAtIndex (class GGS_lstring constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMTypeAtIndex (class GGS_domainDeclarationType constinArgument0,
                                                        class GGS_uint constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_domainDeclarationType & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_domainDeclarationType & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mDomainNameAtIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_domainDeclarationType getter_mTypeAtIndex (const class GGS_uint & constinOperand0,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_domainDeclarationList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_domainDeclarationList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_domainDeclarationList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_domainDeclarationList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_domainDeclarationList ;
  friend class DownEnumerator_domainDeclarationList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @domainDeclarationList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_domainDeclarationList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mDomainName ;
  public: inline GGS_lstring readProperty_mDomainName (void) const {
    return mProperty_mDomainName ;
  }

  public: GGS_domainDeclarationType mProperty_mType ;
  public: inline GGS_domainDeclarationType readProperty_mType (void) const {
    return mProperty_mType ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_domainDeclarationList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDomainName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDomainName = inValue ;
  }

  public: inline void setter_setMType (const GGS_domainDeclarationType & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mType = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_domainDeclarationList_2E_element (const GGS_lstring & in_mDomainName,
                                                const GGS_domainDeclarationType & in_mType) ;

//--------------------------------- Copy constructor
  public: GGS_domainDeclarationList_2E_element (const GGS_domainDeclarationList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_domainDeclarationList_2E_element & operator = (const GGS_domainDeclarationList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_domainDeclarationList_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                    const class GGS_domainDeclarationType & inOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_domainDeclarationList_2E_element extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_domainDeclarationList_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                            const class GGS_domainDeclarationType & inOperand1,
                                                                            class Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @recordDomainMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_recordDomainMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_recordDomainMap (const class GGS_recordDomainMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_uint current_mBitCount (LOCATION_ARGS) const ;
  public: class GGS_recordDomainMap current_mSubDomain (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_recordDomainMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_recordDomainMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_recordDomainMap (const class GGS_recordDomainMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_uint current_mBitCount (LOCATION_ARGS) const ;
  public: class GGS_recordDomainMap current_mSubDomain (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_recordDomainMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @recordDomainMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_recordDomainMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_recordDomainMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_recordDomainMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_recordDomainMap (void) ;

//--------------------------------- Handle copy
  public: GGS_recordDomainMap (const GGS_recordDomainMap & inSource) ;
  public: GGS_recordDomainMap & operator = (const GGS_recordDomainMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_recordDomainMap init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_recordDomainMap extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_recordDomainMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_recordDomainMap class_func_mapWithMapToOverride (const class GGS_recordDomainMap & inOperand0
                                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     const class GGS_uint & inOperand2,
                                                     const class GGS_recordDomainMap & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_recordDomainMap add_operation (const GGS_recordDomainMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  class GGS_uint constinArgument2,
                                                  class GGS_recordDomainMap constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitCountForKey (class GGS_uint constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GGS_uint constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMSubDomainForKey (class GGS_recordDomainMap constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  class GGS_uint & outArgument2,
                                                  class GGS_recordDomainMap & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mBitCountForKey (const class GGS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mIndexForKey (const class GGS_string & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_recordDomainMap getter_mSubDomainForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_recordDomainMap getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_recordDomainMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_recordDomainMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GGS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_recordDomainMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_recordDomainMap ;
  friend class DownEnumerator_recordDomainMap ;
 
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
  public: GGS_uint mProperty_mIndex ;
  public: GGS_uint mProperty_mBitCount ;
  public: GGS_recordDomainMap mProperty_mSubDomain ;

//--- Constructors
  public: cMapElement_recordDomainMap (const GGS_recordDomainMap_2E_element & inValue
                                       COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_recordDomainMap (const GGS_lstring & inKey,
                                       const GGS_uint & in_mIndex,
                                       const GGS_uint & in_mBitCount,
                                       const GGS_recordDomainMap & in_mSubDomain
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @recordDomainMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_recordDomainMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mIndex ;
  public: inline GGS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

  public: GGS_uint mProperty_mBitCount ;
  public: inline GGS_uint readProperty_mBitCount (void) const {
    return mProperty_mBitCount ;
  }

  public: GGS_recordDomainMap mProperty_mSubDomain ;
  public: inline GGS_recordDomainMap readProperty_mSubDomain (void) const {
    return mProperty_mSubDomain ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_recordDomainMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

  public: inline void setter_setMBitCount (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitCount = inValue ;
  }

  public: inline void setter_setMSubDomain (const GGS_recordDomainMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mSubDomain = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_recordDomainMap_2E_element (const GGS_lstring & in_lkey,
                                          const GGS_uint & in_mIndex,
                                          const GGS_uint & in_mBitCount,
                                          const GGS_recordDomainMap & in_mSubDomain) ;

//--------------------------------- Copy constructor
  public: GGS_recordDomainMap_2E_element (const GGS_recordDomainMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_recordDomainMap_2E_element & operator = (const GGS_recordDomainMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_recordDomainMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                      const class GGS_uint & inOperand1,
                                                                      const class GGS_uint & inOperand2,
                                                                      const class GGS_recordDomainMap & inOperand3,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_recordDomainMap_2E_element extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_recordDomainMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                      const class GGS_uint & inOperand1,
                                                                      const class GGS_uint & inOperand2,
                                                                      const class GGS_recordDomainMap & inOperand3,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_recordDomainMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: recordDomainMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_recordDomainMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_recordDomainMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_recordDomainMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_recordDomainMap_2E_element_3F_ (const GGS_recordDomainMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_recordDomainMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_recordDomainMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_recordDomainMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_recordDomainMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @domainMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_domainMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_domainMap (const class GGS_domainMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mBitCount (LOCATION_ARGS) const ;
  public: class GGS_recordDomainMap current_mRecordMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_domainMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_domainMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_domainMap (const class GGS_domainMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mBitCount (LOCATION_ARGS) const ;
  public: class GGS_recordDomainMap current_mRecordMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_domainMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @domainMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_domainMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_domainMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_domainMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_domainMap (void) ;

//--------------------------------- Handle copy
  public: GGS_domainMap (const GGS_domainMap & inSource) ;
  public: GGS_domainMap & operator = (const GGS_domainMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_domainMap init (Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_domainMap extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_domainMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_domainMap class_func_mapWithMapToOverride (const class GGS_domainMap & inOperand0
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     const class GGS_recordDomainMap & inOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_domainMap add_operation (const GGS_domainMap & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  class GGS_recordDomainMap constinArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitCountForKey (class GGS_uint constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRecordMapForKey (class GGS_recordDomainMap constinArgument0,
                                                            class GGS_string constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  class GGS_recordDomainMap & outArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mBitCountForKey (const class GGS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_recordDomainMap getter_mRecordMapForKey (const class GGS_string & constinOperand0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_domainMap getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_domainMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_domainMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                      const GGS_string & inKey
                                                                                      COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_domainMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_domainMap ;
  friend class DownEnumerator_domainMap ;
 
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
  public: GGS_uint mProperty_mBitCount ;
  public: GGS_recordDomainMap mProperty_mRecordMap ;

//--- Constructors
  public: cMapElement_domainMap (const GGS_domainMap_2E_element & inValue
                                 COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_domainMap (const GGS_lstring & inKey,
                                 const GGS_uint & in_mBitCount,
                                 const GGS_recordDomainMap & in_mRecordMap
                                 COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @domainMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_domainMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mBitCount ;
  public: inline GGS_uint readProperty_mBitCount (void) const {
    return mProperty_mBitCount ;
  }

  public: GGS_recordDomainMap mProperty_mRecordMap ;
  public: inline GGS_recordDomainMap readProperty_mRecordMap (void) const {
    return mProperty_mRecordMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_domainMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMBitCount (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitCount = inValue ;
  }

  public: inline void setter_setMRecordMap (const GGS_recordDomainMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRecordMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_domainMap_2E_element (const GGS_lstring & in_lkey,
                                    const GGS_uint & in_mBitCount,
                                    const GGS_recordDomainMap & in_mRecordMap) ;

//--------------------------------- Copy constructor
  public: GGS_domainMap_2E_element (const GGS_domainMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_domainMap_2E_element & operator = (const GGS_domainMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_domainMap_2E_element init_21__21__21_ (const class GGS_lstring & inOperand0,
                                                            const class GGS_uint & inOperand1,
                                                            const class GGS_recordDomainMap & inOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_domainMap_2E_element extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_domainMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                const class GGS_uint & inOperand1,
                                                                const class GGS_recordDomainMap & inOperand2,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: domainMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_domainMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_domainMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_domainMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_domainMap_2E_element_3F_ (const GGS_domainMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_domainMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_domainMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_domainMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@domainDeclarationList analyze'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyze (const class GGS_domainDeclarationList inObject,
                              class GGS_domainMap & out_outDomainMap,
                              class Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @varList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_varList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_varList (const class GGS_varList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mVarName (LOCATION_ARGS) const ;
  public: class GGS_uint current_mBitIndex (LOCATION_ARGS) const ;
  public: class GGS_uint current_mBitCount (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_varList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_varList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_varList (const class GGS_varList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_string current_mVarName (LOCATION_ARGS) const ;
  public: class GGS_uint current_mBitIndex (LOCATION_ARGS) const ;
  public: class GGS_uint current_mBitCount (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_varList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @varList list
//--------------------------------------------------------------------------------------------------

class GGS_varList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_varList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_varList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_string & in_mVarName,
                                                 const class GGS_uint & in_mBitIndex,
                                                 const class GGS_uint & in_mBitCount
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_varList init (Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_varList extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_varList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_varList class_func_listWithValue (const class GGS_string & inOperand0,
                                                             const class GGS_uint & inOperand1,
                                                             const class GGS_uint & inOperand2
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_varList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_string & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     const class GGS_uint & inOperand2
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_varList add_operation (const GGS_varList & inOperand,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_string constinArgument0,
                                               class GGS_uint constinArgument1,
                                               class GGS_uint constinArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_string constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_string & outArgument0,
                                                 class GGS_uint & outArgument1,
                                                 class GGS_uint & outArgument2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_string & outArgument0,
                                                class GGS_uint & outArgument1,
                                                class GGS_uint & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_string & outArgument0,
                                                      class GGS_uint & outArgument1,
                                                      class GGS_uint & outArgument2,
                                                      class GGS_uint constinArgument3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitCountAtIndex (class GGS_uint constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitIndexAtIndex (class GGS_uint constinArgument0,
                                                            class GGS_uint constinArgument1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVarNameAtIndex (class GGS_string constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_string & outArgument0,
                                              class GGS_uint & outArgument1,
                                              class GGS_uint & outArgument2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_string & outArgument0,
                                             class GGS_uint & outArgument1,
                                             class GGS_uint & outArgument2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mBitCountAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mBitIndexAtIndex (const class GGS_uint & constinOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_string getter_mVarNameAtIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_varList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_varList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_varList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_varList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_varList ;
  friend class DownEnumerator_varList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @varList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_varList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_string mProperty_mVarName ;
  public: inline GGS_string readProperty_mVarName (void) const {
    return mProperty_mVarName ;
  }

  public: GGS_uint mProperty_mBitIndex ;
  public: inline GGS_uint readProperty_mBitIndex (void) const {
    return mProperty_mBitIndex ;
  }

  public: GGS_uint mProperty_mBitCount ;
  public: inline GGS_uint readProperty_mBitCount (void) const {
    return mProperty_mBitCount ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_varList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMVarName (const GGS_string & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mVarName = inValue ;
  }

  public: inline void setter_setMBitIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitIndex = inValue ;
  }

  public: inline void setter_setMBitCount (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitCount = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_varList_2E_element (const GGS_string & in_mVarName,
                                  const GGS_uint & in_mBitIndex,
                                  const GGS_uint & in_mBitCount) ;

//--------------------------------- Copy constructor
  public: GGS_varList_2E_element (const GGS_varList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_varList_2E_element & operator = (const GGS_varList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_varList_2E_element init_21__21__21_ (const class GGS_string & inOperand0,
                                                          const class GGS_uint & inOperand1,
                                                          const class GGS_uint & inOperand2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_varList_2E_element extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_varList_2E_element class_func_new (const class GGS_string & inOperand0,
                                                              const class GGS_uint & inOperand1,
                                                              const class GGS_uint & inOperand2,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varList_2E_element ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @varMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_varMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_varMap (const class GGS_varMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_uint current_mBitCount (LOCATION_ARGS) const ;
  public: class GGS_recordDomainMap current_mRecordDomainMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_varMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_varMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_varMap (const class GGS_varMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_uint current_mIndex (LOCATION_ARGS) const ;
  public: class GGS_uint current_mBitCount (LOCATION_ARGS) const ;
  public: class GGS_recordDomainMap current_mRecordDomainMap (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_varMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @varMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_varMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_varMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_varMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_varMap (void) ;

//--------------------------------- Handle copy
  public: GGS_varMap (const GGS_varMap & inSource) ;
  public: GGS_varMap & operator = (const GGS_varMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_varMap init (Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_varMap extractObject (const GGS_object & inObject,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_varMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_varMap class_func_mapWithMapToOverride (const class GGS_varMap & inOperand0
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_uint & inOperand1,
                                                     const class GGS_uint & inOperand2,
                                                     const class GGS_recordDomainMap & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_varMap add_operation (const GGS_varMap & inOperand,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint constinArgument1,
                                                  class GGS_uint constinArgument2,
                                                  class GGS_recordDomainMap constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitCountForKey (class GGS_uint constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMIndexForKey (class GGS_uint constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMRecordDomainMapForKey (class GGS_recordDomainMap constinArgument0,
                                                                  class GGS_string constinArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_uint & outArgument1,
                                                  class GGS_uint & outArgument2,
                                                  class GGS_recordDomainMap & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mBitCountForKey (const class GGS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mIndexForKey (const class GGS_string & constinOperand0,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_recordDomainMap getter_mRecordDomainMapForKey (const class GGS_string & constinOperand0,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_varMap getter_overriddenMap (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_varMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_varMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                   const GGS_string & inKey
                                                                                   COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_varMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_varMap ;
  friend class DownEnumerator_varMap ;
 
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
  public: GGS_uint mProperty_mIndex ;
  public: GGS_uint mProperty_mBitCount ;
  public: GGS_recordDomainMap mProperty_mRecordDomainMap ;

//--- Constructors
  public: cMapElement_varMap (const GGS_varMap_2E_element & inValue
                              COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_varMap (const GGS_lstring & inKey,
                              const GGS_uint & in_mIndex,
                              const GGS_uint & in_mBitCount,
                              const GGS_recordDomainMap & in_mRecordDomainMap
                              COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @varMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_varMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_uint mProperty_mIndex ;
  public: inline GGS_uint readProperty_mIndex (void) const {
    return mProperty_mIndex ;
  }

  public: GGS_uint mProperty_mBitCount ;
  public: inline GGS_uint readProperty_mBitCount (void) const {
    return mProperty_mBitCount ;
  }

  public: GGS_recordDomainMap mProperty_mRecordDomainMap ;
  public: inline GGS_recordDomainMap readProperty_mRecordDomainMap (void) const {
    return mProperty_mRecordDomainMap ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_varMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMIndex (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mIndex = inValue ;
  }

  public: inline void setter_setMBitCount (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitCount = inValue ;
  }

  public: inline void setter_setMRecordDomainMap (const GGS_recordDomainMap & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mRecordDomainMap = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_varMap_2E_element (const GGS_lstring & in_lkey,
                                 const GGS_uint & in_mIndex,
                                 const GGS_uint & in_mBitCount,
                                 const GGS_recordDomainMap & in_mRecordDomainMap) ;

//--------------------------------- Copy constructor
  public: GGS_varMap_2E_element (const GGS_varMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_varMap_2E_element & operator = (const GGS_varMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_varMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_uint & inOperand1,
                                                             const class GGS_uint & inOperand2,
                                                             const class GGS_recordDomainMap & inOperand3,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_varMap_2E_element extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_varMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                             const class GGS_uint & inOperand1,
                                                             const class GGS_uint & inOperand2,
                                                             const class GGS_recordDomainMap & inOperand3,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: varMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_varMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_varMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_varMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_varMap_2E_element_3F_ (const GGS_varMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_varMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_varMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_varMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
//Extension method '@domainFieldList analyze'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyze (const class GGS_domainFieldList inObject,
                              const class GGS_domainMap constin_inDomainMap,
                              class GGS_varMap & io_ioVarMap,
                              class GGS_varList & io_ioVarList,
                              class GGS_uint & io_ioTotalBitCount,
                              class Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//   enum formulaKind
//--------------------------------------------------------------------------------------------------

class GGS_formulaKind : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_formulaKind (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_assignment,
    enum_fixedPoint
  } ;
  
//--------------------------------- Private properties
  private: AC_GALGAS_enumerationAssociatedValues mAssociatedValues ;
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction
  public: VIRTUAL_IN_DEBUG void getAssociatedValuesFor_fixedPoint (class GGS_binaryset & out_startValue) const ;

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
    mAssociatedValues.drop () ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_formulaKind extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_formulaKind class_func_assignment (LOCATION_ARGS) ;

  public: static class GGS_formulaKind class_func_fixedPoint (const class GGS_binaryset & inOperand0
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_extractFixedPoint (class GGS_binaryset & outArgument0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_formulaKind_2E_fixedPoint_3F_ getter_getFixedPoint (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isAssignment (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isFixedPoint (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaKind ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formulaKind_2E_fixedPoint struct
//--------------------------------------------------------------------------------------------------

class GGS_formulaKind_2E_fixedPoint : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_binaryset mProperty_startValue ;
  public: inline GGS_binaryset readProperty_startValue (void) const {
    return mProperty_startValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_formulaKind_2E_fixedPoint (void) ;

//--------------------------------- Property setters
  public: inline void setter_setStartValue (const GGS_binaryset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_startValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_formulaKind_2E_fixedPoint (const GGS_binaryset & in_startValue) ;

//--------------------------------- Copy constructor
  public: GGS_formulaKind_2E_fixedPoint (const GGS_formulaKind_2E_fixedPoint & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_formulaKind_2E_fixedPoint & operator = (const GGS_formulaKind_2E_fixedPoint & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formulaKind_2E_fixedPoint init_21_ (const class GGS_binaryset & inOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_formulaKind_2E_fixedPoint extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_formulaKind_2E_fixedPoint class_func_new (const class GGS_binaryset & inOperand0,
                                                                     class Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaKind_2E_fixedPoint ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: formulaKind.fixedPoint? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_formulaKind_2E_fixedPoint_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_formulaKind_2E_fixedPoint mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_formulaKind_2E_fixedPoint_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_formulaKind_2E_fixedPoint_3F_ (const GGS_formulaKind_2E_fixedPoint & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_formulaKind_2E_fixedPoint_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_formulaKind_2E_fixedPoint unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_formulaKind_2E_fixedPoint_3F_ extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaKind_2E_fixedPoint_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractFormula reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractFormula : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_abstractFormula (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_abstractFormula (const class cPtr_abstractFormula * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_abstractFormula init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractFormula extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractFormula & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void abstractFormula_init (Compiler * inCompiler) ;


//--- Extension method analyzeFormula
  public: virtual void method_analyzeFormula (const class GGS_string arg_inSourceFilePath,
           const class GGS_domainMap arg_inDomainMap,
           class GGS_computedFormulaMap & arg_ioComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_abstractFormula (Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @expression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_expression : public AC_GALGAS_reference_class {
//--------------------------------- Default constructor
  public: GGS_expression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_expression (const class cPtr_expression * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_expression init (Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_expression extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_expression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void expression_init (Compiler * inCompiler) ;


//--- Extension getter computeExpression
  public: virtual class GGS_binaryset getter_computeExpression (const class GGS_domainMap inDomainMap,
           const class GGS_varMap inVarMap,
           const class GGS_uint inTotalBitCount,
           const class GGS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const = 0 ;

//--- Properties



//--- Constructor
  public: cPtr_expression (Compiler * inCompiler
                           COMMA_LOCATION_ARGS) ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override = 0 ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @abstractFormula_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_abstractFormula_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_abstractFormula_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_abstractFormula_2E_weak (const class GGS_abstractFormula & inSource) ;

  public: GGS_abstractFormula_2E_weak & operator = (const class GGS_abstractFormula & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_abstractFormula_2E_weak init_nil (void) {
    GGS_abstractFormula_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_abstractFormula bang_abstractFormula_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_abstractFormula unwrappedValue (void) const {
    GGS_abstractFormula result ;
    if (isValid ()) {
      const cPtr_abstractFormula * p = (cPtr_abstractFormula *) ptr () ;
      if (nullptr != p) {
        result = GGS_abstractFormula (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_abstractFormula_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_abstractFormula_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_abstractFormula_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractFormula_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @computedFormulaMap map enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_computedFormulaMap final : public cGenericAbstractEnumerator {
  public: DownEnumerator_computedFormulaMap (const class GGS_computedFormulaMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_varList current_mVarList (LOCATION_ARGS) const ;
  public: class GGS_uint current_mBitCount (LOCATION_ARGS) const ;
  public: class GGS_binaryset current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_computedFormulaMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_computedFormulaMap final : public cGenericAbstractEnumerator {
  public: UpEnumerator_computedFormulaMap (const class GGS_computedFormulaMap & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_lkey (LOCATION_ARGS) const ;
  public: class GGS_varList current_mVarList (LOCATION_ARGS) const ;
  public: class GGS_uint current_mBitCount (LOCATION_ARGS) const ;
  public: class GGS_binaryset current_mValue (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_computedFormulaMap_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @computedFormulaMap map
//--------------------------------------------------------------------------------------------------

class cMapElement_computedFormulaMap ;

//--------------------------------------------------------------------------------------------------

extern const char * kSearchErrorMessage_computedFormulaMap_searchKey ;

//--------------------------------------------------------------------------------------------------

class GGS_computedFormulaMap : public AC_GALGAS_map {
//--------------------------------- Default constructor
  public: GGS_computedFormulaMap (void) ;

//--------------------------------- Handle copy
  public: GGS_computedFormulaMap (const GGS_computedFormulaMap & inSource) ;
  public: GGS_computedFormulaMap & operator = (const GGS_computedFormulaMap & inSource) ;
  
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_computedFormulaMap init (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_computedFormulaMap extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_computedFormulaMap class_func_emptyMap (LOCATION_ARGS) ;

  public: static class GGS_computedFormulaMap class_func_mapWithMapToOverride (const class GGS_computedFormulaMap & inOperand0
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_varList & inOperand1,
                                                     const class GGS_uint & inOperand2,
                                                     const class GGS_binaryset & inOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_computedFormulaMap add_operation (const GGS_computedFormulaMap & inOperand,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_insertKey (class GGS_lstring constinArgument0,
                                                  class GGS_varList constinArgument1,
                                                  class GGS_uint constinArgument2,
                                                  class GGS_binaryset constinArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMBitCountForKey (class GGS_uint constinArgument0,
                                                           class GGS_string constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMValueForKey (class GGS_binaryset constinArgument0,
                                                        class GGS_string constinArgument1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMVarListForKey (class GGS_varList constinArgument0,
                                                          class GGS_string constinArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_searchKey (class GGS_lstring constinArgument0,
                                                  class GGS_varList & outArgument1,
                                                  class GGS_uint & outArgument2,
                                                  class GGS_binaryset & outArgument3,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_uint getter_mBitCountForKey (const class GGS_string & constinOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_binaryset getter_mValueForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_varList getter_mVarListForKey (const class GGS_string & constinOperand0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_computedFormulaMap getter_overriddenMap (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts
  public: VIRTUAL_IN_DEBUG class GGS_computedFormulaMap_2E_element_3F_ readSubscript__3F_ (const class GGS_string & in0,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const ;


//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
  public: VIRTUAL_IN_DEBUG cMapElement_computedFormulaMap * readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GGS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) ;


//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_computedFormulaMap_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_computedFormulaMap ;
  friend class DownEnumerator_computedFormulaMap ;
 
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
  public: GGS_varList mProperty_mVarList ;
  public: GGS_uint mProperty_mBitCount ;
  public: GGS_binaryset mProperty_mValue ;

//--- Constructors
  public: cMapElement_computedFormulaMap (const GGS_computedFormulaMap_2E_element & inValue
                                          COMMA_LOCATION_ARGS) ;
 
  public: cMapElement_computedFormulaMap (const GGS_lstring & inKey,
                                          const GGS_varList & in_mVarList,
                                          const GGS_uint & in_mBitCount,
                                          const GGS_binaryset & in_mValue
                                          COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cMapElement * copy (void) ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @computedFormulaMap_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_computedFormulaMap_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_lkey ;
  public: inline GGS_lstring readProperty_lkey (void) const {
    return mProperty_lkey ;
  }

  public: GGS_varList mProperty_mVarList ;
  public: inline GGS_varList readProperty_mVarList (void) const {
    return mProperty_mVarList ;
  }

  public: GGS_uint mProperty_mBitCount ;
  public: inline GGS_uint readProperty_mBitCount (void) const {
    return mProperty_mBitCount ;
  }

  public: GGS_binaryset mProperty_mValue ;
  public: inline GGS_binaryset readProperty_mValue (void) const {
    return mProperty_mValue ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_computedFormulaMap_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setLkey (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_lkey = inValue ;
  }

  public: inline void setter_setMVarList (const GGS_varList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mVarList = inValue ;
  }

  public: inline void setter_setMBitCount (const GGS_uint & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mBitCount = inValue ;
  }

  public: inline void setter_setMValue (const GGS_binaryset & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mValue = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_computedFormulaMap_2E_element (const GGS_lstring & in_lkey,
                                             const GGS_varList & in_mVarList,
                                             const GGS_uint & in_mBitCount,
                                             const GGS_binaryset & in_mValue) ;

//--------------------------------- Copy constructor
  public: GGS_computedFormulaMap_2E_element (const GGS_computedFormulaMap_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_computedFormulaMap_2E_element & operator = (const GGS_computedFormulaMap_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_computedFormulaMap_2E_element init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                         const class GGS_varList & inOperand1,
                                                                         const class GGS_uint & inOperand2,
                                                                         const class GGS_binaryset & inOperand3,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_computedFormulaMap_2E_element extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_computedFormulaMap_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                         const class GGS_varList & inOperand1,
                                                                         const class GGS_uint & inOperand2,
                                                                         const class GGS_binaryset & inOperand3,
                                                                         class Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedFormulaMap_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: computedFormulaMap.element? optional
//
//--------------------------------------------------------------------------------------------------

class GGS_computedFormulaMap_2E_element_3F_ : public AC_GALGAS_root {
//--------------------------------- Private property
  private: GGS_computedFormulaMap_2E_element mValue ;
  private: OptionalState mState ;

//--------------------------------- Default constructor
  public: GGS_computedFormulaMap_2E_element_3F_ (void) ;

//--------------------------------- Constructor from unwrapped type
  public: GGS_computedFormulaMap_2E_element_3F_ (const GGS_computedFormulaMap_2E_element & inSource) ;

//--------------------------------- Constructor from weak type

//--------------------------------- nil initializer
  public: static GGS_computedFormulaMap_2E_element_3F_ init_nil (void) ;

  public: inline bool isNil (void) const { return mState == OptionalState::isNil ; }

  public: bool isValuated (void) const ;
  public: inline GGS_computedFormulaMap_2E_element unwrappedValue (void) const {
    return mValue ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::isNil) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (mState != OptionalState::invalid, mState == OptionalState::valuated) ;
  }

  
//--- Methods that every type should implement
  public: virtual bool isValid (void) const override ;
  
  public: virtual void drop (void) override ;

  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_computedFormulaMap_2E_element_3F_ extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;


//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedFormulaMap_2E_element_3F_ ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @setting_5F_nodeHashMapSize reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_setting_5F_nodeHashMapSize : public GGS_abstractFormula {
//--------------------------------- Default constructor
  public: GGS_setting_5F_nodeHashMapSize (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_setting_5F_nodeHashMapSize (const class cPtr_setting_5F_nodeHashMapSize * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mSetting (void) const ;
  public: void setProperty_mSetting (const GGS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_setting_5F_nodeHashMapSize init_21_ (const class GGS_luint & inOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_setting_5F_nodeHashMapSize extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_setting_5F_nodeHashMapSize class_func_new (const class GGS_luint & inOperand0,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_setting_5F_nodeHashMapSize & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void setting_5F_nodeHashMapSize_init_21_ (const class GGS_luint & inOperand0,
                                                    Compiler * inCompiler) ;


//--- Extension method analyzeFormula
  public: virtual void method_analyzeFormula (const class GGS_string arg_inSourceFilePath,
           const class GGS_domainMap arg_inDomainMap,
           class GGS_computedFormulaMap & arg_ioComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mSetting ;


//--- Default constructor
  public: cPtr_setting_5F_nodeHashMapSize (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_setting_5F_nodeHashMapSize (const GGS_luint & in_mSetting,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @setting_5F_nodeHashMapSize_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_setting_5F_nodeHashMapSize_2E_weak : public GGS_abstractFormula_2E_weak {
//--------------------------------- Default constructor
  public: GGS_setting_5F_nodeHashMapSize_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_setting_5F_nodeHashMapSize_2E_weak (const class GGS_setting_5F_nodeHashMapSize & inSource) ;

  public: GGS_setting_5F_nodeHashMapSize_2E_weak & operator = (const class GGS_setting_5F_nodeHashMapSize & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_setting_5F_nodeHashMapSize_2E_weak init_nil (void) {
    GGS_setting_5F_nodeHashMapSize_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_setting_5F_nodeHashMapSize bang_setting_5F_nodeHashMapSize_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_setting_5F_nodeHashMapSize unwrappedValue (void) const {
    GGS_setting_5F_nodeHashMapSize result ;
    if (isValid ()) {
      const cPtr_setting_5F_nodeHashMapSize * p = (cPtr_setting_5F_nodeHashMapSize *) ptr () ;
      if (nullptr != p) {
        result = GGS_setting_5F_nodeHashMapSize (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_setting_5F_nodeHashMapSize_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_setting_5F_nodeHashMapSize_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_setting_5F_nodeHashMapSize_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @setting_5F_andCacheMapSize reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_setting_5F_andCacheMapSize : public GGS_abstractFormula {
//--------------------------------- Default constructor
  public: GGS_setting_5F_andCacheMapSize (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_setting_5F_andCacheMapSize (const class cPtr_setting_5F_andCacheMapSize * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_luint readProperty_mSetting (void) const ;
  public: void setProperty_mSetting (const GGS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_setting_5F_andCacheMapSize init_21_ (const class GGS_luint & inOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_setting_5F_andCacheMapSize extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_setting_5F_andCacheMapSize class_func_new (const class GGS_luint & inOperand0,
                                                                      class Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_setting_5F_andCacheMapSize & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void setting_5F_andCacheMapSize_init_21_ (const class GGS_luint & inOperand0,
                                                    Compiler * inCompiler) ;


//--- Extension method analyzeFormula
  public: virtual void method_analyzeFormula (const class GGS_string arg_inSourceFilePath,
           const class GGS_domainMap arg_inDomainMap,
           class GGS_computedFormulaMap & arg_ioComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_luint mProperty_mSetting ;


//--- Default constructor
  public: cPtr_setting_5F_andCacheMapSize (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_setting_5F_andCacheMapSize (const GGS_luint & in_mSetting,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @setting_5F_andCacheMapSize_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_setting_5F_andCacheMapSize_2E_weak : public GGS_abstractFormula_2E_weak {
//--------------------------------- Default constructor
  public: GGS_setting_5F_andCacheMapSize_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_setting_5F_andCacheMapSize_2E_weak (const class GGS_setting_5F_andCacheMapSize & inSource) ;

  public: GGS_setting_5F_andCacheMapSize_2E_weak & operator = (const class GGS_setting_5F_andCacheMapSize & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_setting_5F_andCacheMapSize_2E_weak init_nil (void) {
    GGS_setting_5F_andCacheMapSize_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_setting_5F_andCacheMapSize bang_setting_5F_andCacheMapSize_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_setting_5F_andCacheMapSize unwrappedValue (void) const {
    GGS_setting_5F_andCacheMapSize result ;
    if (isValid ()) {
      const cPtr_setting_5F_andCacheMapSize * p = (cPtr_setting_5F_andCacheMapSize *) ptr () ;
      if (nullptr != p) {
        result = GGS_setting_5F_andCacheMapSize (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_setting_5F_andCacheMapSize_2E_weak extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_setting_5F_andCacheMapSize_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_setting_5F_andCacheMapSize_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dumpFormula reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_dumpFormula : public GGS_abstractFormula {
//--------------------------------- Default constructor
  public: GGS_dumpFormula (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_dumpFormula (const class cPtr_dumpFormula * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFormulaName (void) const ;
  public: void setProperty_mFormulaName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_dumpFormula init_21_ (const class GGS_lstring & inOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dumpFormula extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dumpFormula class_func_new (const class GGS_lstring & inOperand0,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dumpFormula & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void dumpFormula_init_21_ (const class GGS_lstring & inOperand0,
                                     Compiler * inCompiler) ;


//--- Extension method analyzeFormula
  public: virtual void method_analyzeFormula (const class GGS_string arg_inSourceFilePath,
           const class GGS_domainMap arg_inDomainMap,
           class GGS_computedFormulaMap & arg_ioComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mFormulaName ;


//--- Default constructor
  public: cPtr_dumpFormula (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_dumpFormula (const GGS_lstring & in_mFormulaName,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @dumpFormula_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_dumpFormula_2E_weak : public GGS_abstractFormula_2E_weak {
//--------------------------------- Default constructor
  public: GGS_dumpFormula_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_dumpFormula_2E_weak (const class GGS_dumpFormula & inSource) ;

  public: GGS_dumpFormula_2E_weak & operator = (const class GGS_dumpFormula & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_dumpFormula_2E_weak init_nil (void) {
    GGS_dumpFormula_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_dumpFormula bang_dumpFormula_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_dumpFormula unwrappedValue (void) const {
    GGS_dumpFormula result ;
    if (isValid ()) {
      const cPtr_dumpFormula * p = (cPtr_dumpFormula *) ptr () ;
      if (nullptr != p) {
        result = GGS_dumpFormula (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_dumpFormula_2E_weak extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_dumpFormula_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_dumpFormula_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dumpFormula_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @graphvizFormula reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_graphvizFormula : public GGS_abstractFormula {
//--------------------------------- Default constructor
  public: GGS_graphvizFormula (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_graphvizFormula (const class cPtr_graphvizFormula * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFormulaName (void) const ;
  public: void setProperty_mFormulaName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_graphvizFormula init_21_ (const class GGS_lstring & inOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_graphvizFormula extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_graphvizFormula class_func_new (const class GGS_lstring & inOperand0,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_graphvizFormula & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void graphvizFormula_init_21_ (const class GGS_lstring & inOperand0,
                                         Compiler * inCompiler) ;


//--- Extension method analyzeFormula
  public: virtual void method_analyzeFormula (const class GGS_string arg_inSourceFilePath,
           const class GGS_domainMap arg_inDomainMap,
           class GGS_computedFormulaMap & arg_ioComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mFormulaName ;


//--- Default constructor
  public: cPtr_graphvizFormula (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_graphvizFormula (const GGS_lstring & in_mFormulaName,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @graphvizFormula_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_graphvizFormula_2E_weak : public GGS_abstractFormula_2E_weak {
//--------------------------------- Default constructor
  public: GGS_graphvizFormula_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_graphvizFormula_2E_weak (const class GGS_graphvizFormula & inSource) ;

  public: GGS_graphvizFormula_2E_weak & operator = (const class GGS_graphvizFormula & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_graphvizFormula_2E_weak init_nil (void) {
    GGS_graphvizFormula_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_graphvizFormula bang_graphvizFormula_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_graphvizFormula unwrappedValue (void) const {
    GGS_graphvizFormula result ;
    if (isValid ()) {
      const cPtr_graphvizFormula * p = (cPtr_graphvizFormula *) ptr () ;
      if (nullptr != p) {
        result = GGS_graphvizFormula (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_graphvizFormula_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_graphvizFormula_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_graphvizFormula_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphvizFormula_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @expression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_expression_2E_weak : public AC_GALGAS_weak_reference {
//--------------------------------- Default constructor
  public: GGS_expression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_expression_2E_weak (const class GGS_expression & inSource) ;

  public: GGS_expression_2E_weak & operator = (const class GGS_expression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_expression_2E_weak init_nil (void) {
    GGS_expression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_expression bang_expression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_expression unwrappedValue (void) const {
    GGS_expression result ;
    if (isValid ()) {
      const cPtr_expression * p = (cPtr_expression *) ptr () ;
      if (nullptr != p) {
        result = GGS_expression (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_expression_2E_weak extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_expression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_expression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varInExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_varInExpression : public GGS_expression {
//--------------------------------- Default constructor
  public: GGS_varInExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_varInExpression (const class cPtr_varInExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mVarName (void) const ;
  public: void setProperty_mVarName (const GGS_lstring & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_varInExpression init_21_ (const class GGS_lstring & inOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_varInExpression extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_varInExpression class_func_new (const class GGS_lstring & inOperand0,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_varInExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void varInExpression_init_21_ (const class GGS_lstring & inOperand0,
                                         Compiler * inCompiler) ;


//--- Extension getter computeExpression
  public: virtual class GGS_binaryset getter_computeExpression (const class GGS_domainMap inDomainMap,
           const class GGS_varMap inVarMap,
           const class GGS_uint inTotalBitCount,
           const class GGS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_lstring mProperty_mVarName ;


//--- Default constructor
  public: cPtr_varInExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_varInExpression (const GGS_lstring & in_mVarName,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varInExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_varInExpression_2E_weak : public GGS_expression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_varInExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_varInExpression_2E_weak (const class GGS_varInExpression & inSource) ;

  public: GGS_varInExpression_2E_weak & operator = (const class GGS_varInExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_varInExpression_2E_weak init_nil (void) {
    GGS_varInExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_varInExpression bang_varInExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_varInExpression unwrappedValue (void) const {
    GGS_varInExpression result ;
    if (isValid ()) {
      const cPtr_varInExpression * p = (cPtr_varInExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_varInExpression (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_varInExpression_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_varInExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_varInExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varBitInExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_varBitInExpression : public GGS_expression {
//--------------------------------- Default constructor
  public: GGS_varBitInExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_varBitInExpression (const class cPtr_varBitInExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mVarName (void) const ;
  public: void setProperty_mVarName (const GGS_lstring & inValue) ;

  public: class GGS_luint readProperty_mVarBit (void) const ;
  public: void setProperty_mVarBit (const GGS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_varBitInExpression init_21__21_ (const class GGS_lstring & inOperand0,
                                                      const class GGS_luint & inOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_varBitInExpression extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_varBitInExpression class_func_new (const class GGS_lstring & inOperand0,
                                                              const class GGS_luint & inOperand1,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_varBitInExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void varBitInExpression_init_21__21_ (const class GGS_lstring & inOperand0,
                                                const class GGS_luint & inOperand1,
                                                Compiler * inCompiler) ;


//--- Extension getter computeExpression
  public: virtual class GGS_binaryset getter_computeExpression (const class GGS_domainMap inDomainMap,
           const class GGS_varMap inVarMap,
           const class GGS_uint inTotalBitCount,
           const class GGS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_lstring mProperty_mVarName ;
  public: GGS_luint mProperty_mVarBit ;


//--- Default constructor
  public: cPtr_varBitInExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_varBitInExpression (const GGS_lstring & in_mVarName,
                                   const GGS_luint & in_mVarBit,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @varBitInExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_varBitInExpression_2E_weak : public GGS_expression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_varBitInExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_varBitInExpression_2E_weak (const class GGS_varBitInExpression & inSource) ;

  public: GGS_varBitInExpression_2E_weak & operator = (const class GGS_varBitInExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_varBitInExpression_2E_weak init_nil (void) {
    GGS_varBitInExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_varBitInExpression bang_varBitInExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_varBitInExpression unwrappedValue (void) const {
    GGS_varBitInExpression result ;
    if (isValid ()) {
      const cPtr_varBitInExpression * p = (cPtr_varBitInExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_varBitInExpression (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_varBitInExpression_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_varBitInExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_varBitInExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varBitInExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @andExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_andExpression : public GGS_expression {
//--------------------------------- Default constructor
  public: GGS_andExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_andExpression (const class cPtr_andExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_expression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_expression & inValue) ;

  public: class GGS_expression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_expression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_andExpression init_21__21_ (const class GGS_expression & inOperand0,
                                                 const class GGS_expression & inOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_andExpression extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_andExpression class_func_new (const class GGS_expression & inOperand0,
                                                         const class GGS_expression & inOperand1,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_andExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void andExpression_init_21__21_ (const class GGS_expression & inOperand0,
                                           const class GGS_expression & inOperand1,
                                           Compiler * inCompiler) ;


//--- Extension getter computeExpression
  public: virtual class GGS_binaryset getter_computeExpression (const class GGS_domainMap inDomainMap,
           const class GGS_varMap inVarMap,
           const class GGS_uint inTotalBitCount,
           const class GGS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_expression mProperty_mLeftExpression ;
  public: GGS_expression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_andExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_andExpression (const GGS_expression & in_mLeftExpression,
                              const GGS_expression & in_mRightExpression,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @andExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_andExpression_2E_weak : public GGS_expression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_andExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_andExpression_2E_weak (const class GGS_andExpression & inSource) ;

  public: GGS_andExpression_2E_weak & operator = (const class GGS_andExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_andExpression_2E_weak init_nil (void) {
    GGS_andExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_andExpression bang_andExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_andExpression unwrappedValue (void) const {
    GGS_andExpression result ;
    if (isValid ()) {
      const cPtr_andExpression * p = (cPtr_andExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_andExpression (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_andExpression_2E_weak extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_andExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_andExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @orExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_orExpression : public GGS_expression {
//--------------------------------- Default constructor
  public: GGS_orExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_orExpression (const class cPtr_orExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_expression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_expression & inValue) ;

  public: class GGS_expression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_expression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_orExpression init_21__21_ (const class GGS_expression & inOperand0,
                                                const class GGS_expression & inOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_orExpression extractObject (const GGS_object & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_orExpression class_func_new (const class GGS_expression & inOperand0,
                                                        const class GGS_expression & inOperand1,
                                                        class Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_orExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void orExpression_init_21__21_ (const class GGS_expression & inOperand0,
                                          const class GGS_expression & inOperand1,
                                          Compiler * inCompiler) ;


//--- Extension getter computeExpression
  public: virtual class GGS_binaryset getter_computeExpression (const class GGS_domainMap inDomainMap,
           const class GGS_varMap inVarMap,
           const class GGS_uint inTotalBitCount,
           const class GGS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_expression mProperty_mLeftExpression ;
  public: GGS_expression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_orExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_orExpression (const GGS_expression & in_mLeftExpression,
                             const GGS_expression & in_mRightExpression,
                             Compiler * inCompiler
                             COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @orExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_orExpression_2E_weak : public GGS_expression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_orExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_orExpression_2E_weak (const class GGS_orExpression & inSource) ;

  public: GGS_orExpression_2E_weak & operator = (const class GGS_orExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_orExpression_2E_weak init_nil (void) {
    GGS_orExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_orExpression bang_orExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_orExpression unwrappedValue (void) const {
    GGS_orExpression result ;
    if (isValid ()) {
      const cPtr_orExpression * p = (cPtr_orExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_orExpression (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_orExpression_2E_weak extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_orExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_orExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @xorExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_xorExpression : public GGS_expression {
//--------------------------------- Default constructor
  public: GGS_xorExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_xorExpression (const class cPtr_xorExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_expression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_expression & inValue) ;

  public: class GGS_expression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_expression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_xorExpression init_21__21_ (const class GGS_expression & inOperand0,
                                                 const class GGS_expression & inOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_xorExpression extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_xorExpression class_func_new (const class GGS_expression & inOperand0,
                                                         const class GGS_expression & inOperand1,
                                                         class Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_xorExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void xorExpression_init_21__21_ (const class GGS_expression & inOperand0,
                                           const class GGS_expression & inOperand1,
                                           Compiler * inCompiler) ;


//--- Extension getter computeExpression
  public: virtual class GGS_binaryset getter_computeExpression (const class GGS_domainMap inDomainMap,
           const class GGS_varMap inVarMap,
           const class GGS_uint inTotalBitCount,
           const class GGS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_expression mProperty_mLeftExpression ;
  public: GGS_expression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_xorExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_xorExpression (const GGS_expression & in_mLeftExpression,
                              const GGS_expression & in_mRightExpression,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @xorExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_xorExpression_2E_weak : public GGS_expression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_xorExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_xorExpression_2E_weak (const class GGS_xorExpression & inSource) ;

  public: GGS_xorExpression_2E_weak & operator = (const class GGS_xorExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_xorExpression_2E_weak init_nil (void) {
    GGS_xorExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_xorExpression bang_xorExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_xorExpression unwrappedValue (void) const {
    GGS_xorExpression result ;
    if (isValid ()) {
      const cPtr_xorExpression * p = (cPtr_xorExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_xorExpression (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_xorExpression_2E_weak extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_xorExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_xorExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @equalExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_equalExpression : public GGS_expression {
//--------------------------------- Default constructor
  public: GGS_equalExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_equalExpression (const class cPtr_equalExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_expression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_expression & inValue) ;

  public: class GGS_expression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_expression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_equalExpression init_21__21_ (const class GGS_expression & inOperand0,
                                                   const class GGS_expression & inOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_equalExpression extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_equalExpression class_func_new (const class GGS_expression & inOperand0,
                                                           const class GGS_expression & inOperand1,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_equalExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void equalExpression_init_21__21_ (const class GGS_expression & inOperand0,
                                             const class GGS_expression & inOperand1,
                                             Compiler * inCompiler) ;


//--- Extension getter computeExpression
  public: virtual class GGS_binaryset getter_computeExpression (const class GGS_domainMap inDomainMap,
           const class GGS_varMap inVarMap,
           const class GGS_uint inTotalBitCount,
           const class GGS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_expression mProperty_mLeftExpression ;
  public: GGS_expression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_equalExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_equalExpression (const GGS_expression & in_mLeftExpression,
                                const GGS_expression & in_mRightExpression,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @equalExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_equalExpression_2E_weak : public GGS_expression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_equalExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_equalExpression_2E_weak (const class GGS_equalExpression & inSource) ;

  public: GGS_equalExpression_2E_weak & operator = (const class GGS_equalExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_equalExpression_2E_weak init_nil (void) {
    GGS_equalExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_equalExpression bang_equalExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_equalExpression unwrappedValue (void) const {
    GGS_equalExpression result ;
    if (isValid ()) {
      const cPtr_equalExpression * p = (cPtr_equalExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_equalExpression (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_equalExpression_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_equalExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_equalExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equalExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @notEqualExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_notEqualExpression : public GGS_expression {
//--------------------------------- Default constructor
  public: GGS_notEqualExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_notEqualExpression (const class cPtr_notEqualExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_expression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_expression & inValue) ;

  public: class GGS_expression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_expression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_notEqualExpression init_21__21_ (const class GGS_expression & inOperand0,
                                                      const class GGS_expression & inOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_notEqualExpression extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_notEqualExpression class_func_new (const class GGS_expression & inOperand0,
                                                              const class GGS_expression & inOperand1,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_notEqualExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void notEqualExpression_init_21__21_ (const class GGS_expression & inOperand0,
                                                const class GGS_expression & inOperand1,
                                                Compiler * inCompiler) ;


//--- Extension getter computeExpression
  public: virtual class GGS_binaryset getter_computeExpression (const class GGS_domainMap inDomainMap,
           const class GGS_varMap inVarMap,
           const class GGS_uint inTotalBitCount,
           const class GGS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_expression mProperty_mLeftExpression ;
  public: GGS_expression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_notEqualExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_notEqualExpression (const GGS_expression & in_mLeftExpression,
                                   const GGS_expression & in_mRightExpression,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @notEqualExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_notEqualExpression_2E_weak : public GGS_expression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_notEqualExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_notEqualExpression_2E_weak (const class GGS_notEqualExpression & inSource) ;

  public: GGS_notEqualExpression_2E_weak & operator = (const class GGS_notEqualExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_notEqualExpression_2E_weak init_nil (void) {
    GGS_notEqualExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_notEqualExpression bang_notEqualExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_notEqualExpression unwrappedValue (void) const {
    GGS_notEqualExpression result ;
    if (isValid ()) {
      const cPtr_notEqualExpression * p = (cPtr_notEqualExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_notEqualExpression (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_notEqualExpression_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_notEqualExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_notEqualExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notEqualExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @impliesExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_impliesExpression : public GGS_expression {
//--------------------------------- Default constructor
  public: GGS_impliesExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_impliesExpression (const class cPtr_impliesExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_expression readProperty_mLeftExpression (void) const ;
  public: void setProperty_mLeftExpression (const GGS_expression & inValue) ;

  public: class GGS_expression readProperty_mRightExpression (void) const ;
  public: void setProperty_mRightExpression (const GGS_expression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_impliesExpression init_21__21_ (const class GGS_expression & inOperand0,
                                                     const class GGS_expression & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_impliesExpression extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_impliesExpression class_func_new (const class GGS_expression & inOperand0,
                                                             const class GGS_expression & inOperand1,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_impliesExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void impliesExpression_init_21__21_ (const class GGS_expression & inOperand0,
                                               const class GGS_expression & inOperand1,
                                               Compiler * inCompiler) ;


//--- Extension getter computeExpression
  public: virtual class GGS_binaryset getter_computeExpression (const class GGS_domainMap inDomainMap,
           const class GGS_varMap inVarMap,
           const class GGS_uint inTotalBitCount,
           const class GGS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_expression mProperty_mLeftExpression ;
  public: GGS_expression mProperty_mRightExpression ;


//--- Default constructor
  public: cPtr_impliesExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_impliesExpression (const GGS_expression & in_mLeftExpression,
                                  const GGS_expression & in_mRightExpression,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @impliesExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_impliesExpression_2E_weak : public GGS_expression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_impliesExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_impliesExpression_2E_weak (const class GGS_impliesExpression & inSource) ;

  public: GGS_impliesExpression_2E_weak & operator = (const class GGS_impliesExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_impliesExpression_2E_weak init_nil (void) {
    GGS_impliesExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_impliesExpression bang_impliesExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_impliesExpression unwrappedValue (void) const {
    GGS_impliesExpression result ;
    if (isValid ()) {
      const cPtr_impliesExpression * p = (cPtr_impliesExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_impliesExpression (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_impliesExpression_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_impliesExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_impliesExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_impliesExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @complementExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_complementExpression : public GGS_expression {
//--------------------------------- Default constructor
  public: GGS_complementExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_complementExpression (const class cPtr_complementExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_expression readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_expression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_complementExpression init_21_ (const class GGS_expression & inOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_complementExpression extractObject (const GGS_object & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_complementExpression class_func_new (const class GGS_expression & inOperand0,
                                                                class Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_complementExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void complementExpression_init_21_ (const class GGS_expression & inOperand0,
                                              Compiler * inCompiler) ;


//--- Extension getter computeExpression
  public: virtual class GGS_binaryset getter_computeExpression (const class GGS_domainMap inDomainMap,
           const class GGS_varMap inVarMap,
           const class GGS_uint inTotalBitCount,
           const class GGS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_expression mProperty_mExpression ;


//--- Default constructor
  public: cPtr_complementExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_complementExpression (const GGS_expression & in_mExpression,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @complementExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_complementExpression_2E_weak : public GGS_expression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_complementExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_complementExpression_2E_weak (const class GGS_complementExpression & inSource) ;

  public: GGS_complementExpression_2E_weak & operator = (const class GGS_complementExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_complementExpression_2E_weak init_nil (void) {
    GGS_complementExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_complementExpression bang_complementExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_complementExpression unwrappedValue (void) const {
    GGS_complementExpression result ;
    if (isValid ()) {
      const cPtr_complementExpression * p = (cPtr_complementExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_complementExpression (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_complementExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_complementExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_complementExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_complementExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @trueExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_trueExpression : public GGS_expression {
//--------------------------------- Default constructor
  public: GGS_trueExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_trueExpression (const class cPtr_trueExpression * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_trueExpression init (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_trueExpression extractObject (const GGS_object & inObject,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_trueExpression class_func_new (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_trueExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void trueExpression_init (Compiler * inCompiler) ;


//--- Extension getter computeExpression
  public: virtual class GGS_binaryset getter_computeExpression (const class GGS_domainMap inDomainMap,
           const class GGS_varMap inVarMap,
           const class GGS_uint inTotalBitCount,
           const class GGS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties



//--- Constructor
  public: cPtr_trueExpression (Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @trueExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_trueExpression_2E_weak : public GGS_expression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_trueExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_trueExpression_2E_weak (const class GGS_trueExpression & inSource) ;

  public: GGS_trueExpression_2E_weak & operator = (const class GGS_trueExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_trueExpression_2E_weak init_nil (void) {
    GGS_trueExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_trueExpression bang_trueExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_trueExpression unwrappedValue (void) const {
    GGS_trueExpression result ;
    if (isValid ()) {
      const cPtr_trueExpression * p = (cPtr_trueExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_trueExpression (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_trueExpression_2E_weak extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_trueExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_trueExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @falseExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_falseExpression : public GGS_expression {
//--------------------------------- Default constructor
  public: GGS_falseExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_falseExpression (const class cPtr_falseExpression * inSourcePtr) ;

//--------------------------------- Property access
//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_falseExpression init (Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_falseExpression extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_falseExpression class_func_new (Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_falseExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void falseExpression_init (Compiler * inCompiler) ;


//--- Extension getter computeExpression
  public: virtual class GGS_binaryset getter_computeExpression (const class GGS_domainMap inDomainMap,
           const class GGS_varMap inVarMap,
           const class GGS_uint inTotalBitCount,
           const class GGS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties



//--- Constructor
  public: cPtr_falseExpression (Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @falseExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_falseExpression_2E_weak : public GGS_expression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_falseExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_falseExpression_2E_weak (const class GGS_falseExpression & inSource) ;

  public: GGS_falseExpression_2E_weak & operator = (const class GGS_falseExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_falseExpression_2E_weak init_nil (void) {
    GGS_falseExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_falseExpression bang_falseExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_falseExpression unwrappedValue (void) const {
    GGS_falseExpression result ;
    if (isValid ()) {
      const cPtr_falseExpression * p = (cPtr_falseExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_falseExpression (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_falseExpression_2E_weak extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_falseExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_falseExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formulaParameterListInExpression list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_formulaParameterListInExpression final : public cGenericAbstractEnumerator {
  public: DownEnumerator_formulaParameterListInExpression (const class GGS_formulaParameterListInExpression & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mParameterName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mFieldNames (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_formulaParameterListInExpression_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_formulaParameterListInExpression final : public cGenericAbstractEnumerator {
  public: UpEnumerator_formulaParameterListInExpression (const class GGS_formulaParameterListInExpression & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_lstring current_mParameterName (LOCATION_ARGS) const ;
  public: class GGS_lstringlist current_mFieldNames (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_formulaParameterListInExpression_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formulaParameterListInExpression list
//--------------------------------------------------------------------------------------------------

class GGS_formulaParameterListInExpression : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_formulaParameterListInExpression (void) ;

//--------------------------------- List constructor by graph
  public: GGS_formulaParameterListInExpression (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_lstring & in_mParameterName,
                                                 const class GGS_lstringlist & in_mFieldNames
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formulaParameterListInExpression init (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_formulaParameterListInExpression extractObject (const GGS_object & inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_formulaParameterListInExpression class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_formulaParameterListInExpression class_func_listWithValue (const class GGS_lstring & inOperand0,
                                                                                      const class GGS_lstringlist & inOperand1
                                                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_formulaParameterListInExpression inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_lstring & inOperand0,
                                                     const class GGS_lstringlist & inOperand1
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_formulaParameterListInExpression add_operation (const GGS_formulaParameterListInExpression & inOperand,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_lstring constinArgument0,
                                               class GGS_lstringlist constinArgument1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_lstring constinArgument0,
                                                      class GGS_lstringlist constinArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_lstring & outArgument0,
                                                 class GGS_lstringlist & outArgument1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_lstring & outArgument0,
                                                class GGS_lstringlist & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_lstring & outArgument0,
                                                      class GGS_lstringlist & outArgument1,
                                                      class GGS_uint constinArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFieldNamesAtIndex (class GGS_lstringlist constinArgument0,
                                                              class GGS_uint constinArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMParameterNameAtIndex (class GGS_lstring constinArgument0,
                                                                 class GGS_uint constinArgument1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_lstring & outArgument0,
                                              class GGS_lstringlist & outArgument1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_lstring & outArgument0,
                                             class GGS_lstringlist & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_lstringlist getter_mFieldNamesAtIndex (const class GGS_uint & constinOperand0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_lstring getter_mParameterNameAtIndex (const class GGS_uint & constinOperand0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formulaParameterListInExpression getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formulaParameterListInExpression getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formulaParameterListInExpression getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_formulaParameterListInExpression_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_formulaParameterListInExpression ;
  friend class DownEnumerator_formulaParameterListInExpression ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaParameterListInExpression ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formulaParameterListInExpression_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_formulaParameterListInExpression_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_lstring mProperty_mParameterName ;
  public: inline GGS_lstring readProperty_mParameterName (void) const {
    return mProperty_mParameterName ;
  }

  public: GGS_lstringlist mProperty_mFieldNames ;
  public: inline GGS_lstringlist readProperty_mFieldNames (void) const {
    return mProperty_mFieldNames ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_formulaParameterListInExpression_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMParameterName (const GGS_lstring & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mParameterName = inValue ;
  }

  public: inline void setter_setMFieldNames (const GGS_lstringlist & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFieldNames = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_formulaParameterListInExpression_2E_element (const GGS_lstring & in_mParameterName,
                                                           const GGS_lstringlist & in_mFieldNames) ;

//--------------------------------- Copy constructor
  public: GGS_formulaParameterListInExpression_2E_element (const GGS_formulaParameterListInExpression_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_formulaParameterListInExpression_2E_element & operator = (const GGS_formulaParameterListInExpression_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formulaParameterListInExpression_2E_element init_21__21_ (const class GGS_lstring & inOperand0,
                                                                               const class GGS_lstringlist & inOperand1,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_formulaParameterListInExpression_2E_element extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_formulaParameterListInExpression_2E_element class_func_new (const class GGS_lstring & inOperand0,
                                                                                       const class GGS_lstringlist & inOperand1,
                                                                                       class Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaParameterListInExpression_2E_element ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formulaInExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_formulaInExpression : public GGS_expression {
//--------------------------------- Default constructor
  public: GGS_formulaInExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_formulaInExpression (const class cPtr_formulaInExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFormulaName (void) const ;
  public: void setProperty_mFormulaName (const GGS_lstring & inValue) ;

  public: class GGS_formulaParameterListInExpression readProperty_mParameterList (void) const ;
  public: void setProperty_mParameterList (const GGS_formulaParameterListInExpression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formulaInExpression init_21__21_ (const class GGS_lstring & inOperand0,
                                                       const class GGS_formulaParameterListInExpression & inOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_formulaInExpression extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_formulaInExpression class_func_new (const class GGS_lstring & inOperand0,
                                                               const class GGS_formulaParameterListInExpression & inOperand1,
                                                               class Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_formulaInExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void formulaInExpression_init_21__21_ (const class GGS_lstring & inOperand0,
                                                 const class GGS_formulaParameterListInExpression & inOperand1,
                                                 Compiler * inCompiler) ;


//--- Extension getter computeExpression
  public: virtual class GGS_binaryset getter_computeExpression (const class GGS_domainMap inDomainMap,
           const class GGS_varMap inVarMap,
           const class GGS_uint inTotalBitCount,
           const class GGS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_lstring mProperty_mFormulaName ;
  public: GGS_formulaParameterListInExpression mProperty_mParameterList ;


//--- Default constructor
  public: cPtr_formulaInExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_formulaInExpression (const GGS_lstring & in_mFormulaName,
                                    const GGS_formulaParameterListInExpression & in_mParameterList,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @formulaInExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_formulaInExpression_2E_weak : public GGS_expression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_formulaInExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_formulaInExpression_2E_weak (const class GGS_formulaInExpression & inSource) ;

  public: GGS_formulaInExpression_2E_weak & operator = (const class GGS_formulaInExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_formulaInExpression_2E_weak init_nil (void) {
    GGS_formulaInExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_formulaInExpression bang_formulaInExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_formulaInExpression unwrappedValue (void) const {
    GGS_formulaInExpression result ;
    if (isValid ()) {
      const cPtr_formulaInExpression * p = (cPtr_formulaInExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_formulaInExpression (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_formulaInExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_formulaInExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_formulaInExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaInExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @existInExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_existInExpression : public GGS_expression {
//--------------------------------- Default constructor
  public: GGS_existInExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_existInExpression (const class cPtr_existInExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_domainFieldList readProperty_mArgumentList (void) const ;
  public: void setProperty_mArgumentList (const GGS_domainFieldList & inValue) ;

  public: class GGS_expression readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_expression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_existInExpression init_21__21_ (const class GGS_domainFieldList & inOperand0,
                                                     const class GGS_expression & inOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_existInExpression extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_existInExpression class_func_new (const class GGS_domainFieldList & inOperand0,
                                                             const class GGS_expression & inOperand1,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_existInExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void existInExpression_init_21__21_ (const class GGS_domainFieldList & inOperand0,
                                               const class GGS_expression & inOperand1,
                                               Compiler * inCompiler) ;


//--- Extension getter computeExpression
  public: virtual class GGS_binaryset getter_computeExpression (const class GGS_domainMap inDomainMap,
           const class GGS_varMap inVarMap,
           const class GGS_uint inTotalBitCount,
           const class GGS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_domainFieldList mProperty_mArgumentList ;
  public: GGS_expression mProperty_mExpression ;


//--- Default constructor
  public: cPtr_existInExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_existInExpression (const GGS_domainFieldList & in_mArgumentList,
                                  const GGS_expression & in_mExpression,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @existInExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_existInExpression_2E_weak : public GGS_expression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_existInExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_existInExpression_2E_weak (const class GGS_existInExpression & inSource) ;

  public: GGS_existInExpression_2E_weak & operator = (const class GGS_existInExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_existInExpression_2E_weak init_nil (void) {
    GGS_existInExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_existInExpression bang_existInExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_existInExpression unwrappedValue (void) const {
    GGS_existInExpression result ;
    if (isValid ()) {
      const cPtr_existInExpression * p = (cPtr_existInExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_existInExpression (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_existInExpression_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_existInExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_existInExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_existInExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forAllInExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_forAllInExpression : public GGS_expression {
//--------------------------------- Default constructor
  public: GGS_forAllInExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_forAllInExpression (const class cPtr_forAllInExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_domainFieldList readProperty_mArgumentList (void) const ;
  public: void setProperty_mArgumentList (const GGS_domainFieldList & inValue) ;

  public: class GGS_expression readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_expression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_forAllInExpression init_21__21_ (const class GGS_domainFieldList & inOperand0,
                                                      const class GGS_expression & inOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forAllInExpression extractObject (const GGS_object & inObject,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forAllInExpression class_func_new (const class GGS_domainFieldList & inOperand0,
                                                              const class GGS_expression & inOperand1,
                                                              class Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forAllInExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void forAllInExpression_init_21__21_ (const class GGS_domainFieldList & inOperand0,
                                                const class GGS_expression & inOperand1,
                                                Compiler * inCompiler) ;


//--- Extension getter computeExpression
  public: virtual class GGS_binaryset getter_computeExpression (const class GGS_domainMap inDomainMap,
           const class GGS_varMap inVarMap,
           const class GGS_uint inTotalBitCount,
           const class GGS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_domainFieldList mProperty_mArgumentList ;
  public: GGS_expression mProperty_mExpression ;


//--- Default constructor
  public: cPtr_forAllInExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_forAllInExpression (const GGS_domainFieldList & in_mArgumentList,
                                   const GGS_expression & in_mExpression,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @forAllInExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_forAllInExpression_2E_weak : public GGS_expression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_forAllInExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_forAllInExpression_2E_weak (const class GGS_forAllInExpression & inSource) ;

  public: GGS_forAllInExpression_2E_weak & operator = (const class GGS_forAllInExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_forAllInExpression_2E_weak init_nil (void) {
    GGS_forAllInExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_forAllInExpression bang_forAllInExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_forAllInExpression unwrappedValue (void) const {
    GGS_forAllInExpression result ;
    if (isValid ()) {
      const cPtr_forAllInExpression * p = (cPtr_forAllInExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_forAllInExpression (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_forAllInExpression_2E_weak extractObject (const GGS_object & inObject,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_forAllInExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_forAllInExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forAllInExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//   enum comparison
//--------------------------------------------------------------------------------------------------

class GGS_comparison : public AC_GALGAS_root {
//--------------------------------- Default constructor
  public: GGS_comparison (void) ;

//--------------------------------- Enumeration
  public: enum class Enumeration {
    invalid,
    enum_equal,
    enum_notEqual,
    enum_lowerOrEqual,
    enum_lowerThan,
    enum_greaterOrEqual,
    enum_greaterThan
  } ;
  
//--------------------------------- Private properties
  private: Enumeration mEnum ;

//--------------------------------- Associated value extraction

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const override {
    return Enumeration::invalid != mEnum ;
  }

  public: VIRTUAL_IN_DEBUG inline void drop (void) override {
    mEnum = Enumeration::invalid ;
  }

  public: inline Enumeration enumValue (void) const {
    return mEnum ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_comparison extractObject (const GGS_object & inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_comparison class_func_equal (LOCATION_ARGS) ;

  public: static class GGS_comparison class_func_greaterOrEqual (LOCATION_ARGS) ;

  public: static class GGS_comparison class_func_greaterThan (LOCATION_ARGS) ;

  public: static class GGS_comparison class_func_lowerOrEqual (LOCATION_ARGS) ;

  public: static class GGS_comparison class_func_lowerThan (LOCATION_ARGS) ;

  public: static class GGS_comparison class_func_notEqual (LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isGreaterOrEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isGreaterThan (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLowerOrEqual (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isLowerThan (LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_bool getter_isNotEqual (LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparison ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonWithConstantInExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_comparisonWithConstantInExpression : public GGS_expression {
//--------------------------------- Default constructor
  public: GGS_comparisonWithConstantInExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_comparisonWithConstantInExpression (const class cPtr_comparisonWithConstantInExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mVarName (void) const ;
  public: void setProperty_mVarName (const GGS_lstring & inValue) ;

  public: class GGS_lstringlist readProperty_mFieldNames (void) const ;
  public: void setProperty_mFieldNames (const GGS_lstringlist & inValue) ;

  public: class GGS_comparison readProperty_mComparison (void) const ;
  public: void setProperty_mComparison (const GGS_comparison & inValue) ;

  public: class GGS_luint readProperty_mConstant (void) const ;
  public: void setProperty_mConstant (const GGS_luint & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_comparisonWithConstantInExpression init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstringlist & inOperand1,
                                                                              const class GGS_comparison & inOperand2,
                                                                              const class GGS_luint & inOperand3,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_comparisonWithConstantInExpression extractObject (const GGS_object & inObject,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_comparisonWithConstantInExpression class_func_new (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstringlist & inOperand1,
                                                                              const class GGS_comparison & inOperand2,
                                                                              const class GGS_luint & inOperand3,
                                                                              class Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_comparisonWithConstantInExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void comparisonWithConstantInExpression_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstringlist & inOperand1,
                                                                        const class GGS_comparison & inOperand2,
                                                                        const class GGS_luint & inOperand3,
                                                                        Compiler * inCompiler) ;


//--- Extension getter computeExpression
  public: virtual class GGS_binaryset getter_computeExpression (const class GGS_domainMap inDomainMap,
           const class GGS_varMap inVarMap,
           const class GGS_uint inTotalBitCount,
           const class GGS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_lstring mProperty_mVarName ;
  public: GGS_lstringlist mProperty_mFieldNames ;
  public: GGS_comparison mProperty_mComparison ;
  public: GGS_luint mProperty_mConstant ;


//--- Default constructor
  public: cPtr_comparisonWithConstantInExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_comparisonWithConstantInExpression (const GGS_lstring & in_mVarName,
                                                   const GGS_lstringlist & in_mFieldNames,
                                                   const GGS_comparison & in_mComparison,
                                                   const GGS_luint & in_mConstant,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @comparisonWithConstantInExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_comparisonWithConstantInExpression_2E_weak : public GGS_expression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_comparisonWithConstantInExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_comparisonWithConstantInExpression_2E_weak (const class GGS_comparisonWithConstantInExpression & inSource) ;

  public: GGS_comparisonWithConstantInExpression_2E_weak & operator = (const class GGS_comparisonWithConstantInExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_comparisonWithConstantInExpression_2E_weak init_nil (void) {
    GGS_comparisonWithConstantInExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_comparisonWithConstantInExpression bang_comparisonWithConstantInExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_comparisonWithConstantInExpression unwrappedValue (void) const {
    GGS_comparisonWithConstantInExpression result ;
    if (isValid ()) {
      const cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_comparisonWithConstantInExpression (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_comparisonWithConstantInExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_comparisonWithConstantInExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_comparisonWithConstantInExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonWithConstantInExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @variableComparisonInExpression reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_variableComparisonInExpression : public GGS_expression {
//--------------------------------- Default constructor
  public: GGS_variableComparisonInExpression (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_variableComparisonInExpression (const class cPtr_variableComparisonInExpression * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mLeftVarName (void) const ;
  public: void setProperty_mLeftVarName (const GGS_lstring & inValue) ;

  public: class GGS_lstringlist readProperty_mLeftFieldNames (void) const ;
  public: void setProperty_mLeftFieldNames (const GGS_lstringlist & inValue) ;

  public: class GGS_comparison readProperty_mComparison (void) const ;
  public: void setProperty_mComparison (const GGS_comparison & inValue) ;

  public: class GGS_lstring readProperty_mRightVarName (void) const ;
  public: void setProperty_mRightVarName (const GGS_lstring & inValue) ;

  public: class GGS_lstringlist readProperty_mRightFieldNames (void) const ;
  public: void setProperty_mRightFieldNames (const GGS_lstringlist & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_variableComparisonInExpression init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                              const class GGS_lstringlist & inOperand1,
                                                                              const class GGS_comparison & inOperand2,
                                                                              const class GGS_lstring & inOperand3,
                                                                              const class GGS_lstringlist & inOperand4,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_variableComparisonInExpression extractObject (const GGS_object & inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_variableComparisonInExpression class_func_new (const class GGS_lstring & inOperand0,
                                                                          const class GGS_lstringlist & inOperand1,
                                                                          const class GGS_comparison & inOperand2,
                                                                          const class GGS_lstring & inOperand3,
                                                                          const class GGS_lstringlist & inOperand4,
                                                                          class Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_variableComparisonInExpression & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void variableComparisonInExpression_init_21__21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                                        const class GGS_lstringlist & inOperand1,
                                                                        const class GGS_comparison & inOperand2,
                                                                        const class GGS_lstring & inOperand3,
                                                                        const class GGS_lstringlist & inOperand4,
                                                                        Compiler * inCompiler) ;


//--- Extension getter computeExpression
  public: virtual class GGS_binaryset getter_computeExpression (const class GGS_domainMap inDomainMap,
           const class GGS_varMap inVarMap,
           const class GGS_uint inTotalBitCount,
           const class GGS_computedFormulaMap inComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) const override ;

//--- Properties
  public: GGS_lstring mProperty_mLeftVarName ;
  public: GGS_lstringlist mProperty_mLeftFieldNames ;
  public: GGS_comparison mProperty_mComparison ;
  public: GGS_lstring mProperty_mRightVarName ;
  public: GGS_lstringlist mProperty_mRightFieldNames ;


//--- Default constructor
  public: cPtr_variableComparisonInExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_variableComparisonInExpression (const GGS_lstring & in_mLeftVarName,
                                               const GGS_lstringlist & in_mLeftFieldNames,
                                               const GGS_comparison & in_mComparison,
                                               const GGS_lstring & in_mRightVarName,
                                               const GGS_lstringlist & in_mRightFieldNames,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @variableComparisonInExpression_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_variableComparisonInExpression_2E_weak : public GGS_expression_2E_weak {
//--------------------------------- Default constructor
  public: GGS_variableComparisonInExpression_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_variableComparisonInExpression_2E_weak (const class GGS_variableComparisonInExpression & inSource) ;

  public: GGS_variableComparisonInExpression_2E_weak & operator = (const class GGS_variableComparisonInExpression & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_variableComparisonInExpression_2E_weak init_nil (void) {
    GGS_variableComparisonInExpression_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_variableComparisonInExpression bang_variableComparisonInExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_variableComparisonInExpression unwrappedValue (void) const {
    GGS_variableComparisonInExpression result ;
    if (isValid ()) {
      const cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) ptr () ;
      if (nullptr != p) {
        result = GGS_variableComparisonInExpression (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_variableComparisonInExpression_2E_weak extractObject (const GGS_object & inObject,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_variableComparisonInExpression_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_variableComparisonInExpression_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_variableComparisonInExpression_2E_weak ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@expression computeExpression'
//
//--------------------------------------------------------------------------------------------------

class GGS_binaryset callExtensionGetter_computeExpression (const class cPtr_expression * inObject,
                                                           const class GGS_domainMap constin_inDomainMap,
                                                           const class GGS_varMap constin_inVarMap,
                                                           const class GGS_uint constin_inTotalBitCount,
                                                           const class GGS_computedFormulaMap constin_inComputedFormulaMap,
                                                           class Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Parser class 'kerbdd_syntax' declaration
//
//--------------------------------------------------------------------------------------------------

class cParser_kerbdd_5F_syntax {
//--- Virtual destructor
  public: virtual ~ cParser_kerbdd_5F_syntax (void) { }

//--- Non terminal declarations
  protected: virtual void nt_comparison_ (class GGS_expression & outArgument0,
                                          class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_comparison_parse (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_comparison_indexing (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_ (class GGS_expression & outArgument0,
                                          class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_parse (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_expression_indexing (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_factor_ (class GGS_expression & outArgument0,
                                      class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_factor_parse (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_factor_indexing (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_recordFields_ (class GGS_domainFieldList & outArgument0,
                                            class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_recordFields_parse (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_recordFields_indexing (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_ (class GGS_ast & outArgument0,
                                               class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_parse (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_start_5F_symbol_indexing (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_term_ (class GGS_expression & outArgument0,
                                    class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_term_parse (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_term_indexing (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_topLevelDeClaration_ (class GGS_ast & ioArgument0,
                                                   class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_topLevelDeClaration_parse (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_topLevelDeClaration_indexing (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_type_ (class GGS_bddType & outArgument0,
                                    class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_type_parse (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;

  protected: virtual void nt_type_indexing (class Lexique_kerbdd_5F_lexique * inLexique) = 0 ;


//--- Rule declarations
  protected: void rule_kerbdd_5F_syntax_start_5F_symbol_i0_ (GGS_ast & outArgument0,
                                                             Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_start_5F_symbol_i0_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_start_5F_symbol_i0_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i1_ (GGS_ast & ioArgument0,
                                                                 Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i1_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i1_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_recordFields_i2_ (GGS_domainFieldList & outArgument0,
                                                          Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_recordFields_i2_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_recordFields_i2_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_type_i3_ (GGS_bddType & outArgument0,
                                                  Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_type_i3_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_type_i3_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i4_ (GGS_ast & ioArgument0,
                                                                 Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i4_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i4_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i5_ (GGS_ast & ioArgument0,
                                                                 Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i5_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i5_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i6_ (GGS_ast & ioArgument0,
                                                                 Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i6_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i6_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i7_ (GGS_ast & ioArgument0,
                                                                 Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i7_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i7_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i8_ (GGS_ast & ioArgument0,
                                                                 Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i8_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_topLevelDeClaration_i8_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_expression_i9_ (GGS_expression & outArgument0,
                                                        Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_expression_i9_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_expression_i9_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_comparison_i10_ (GGS_expression & outArgument0,
                                                         Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_comparison_i10_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_comparison_i10_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_term_i11_ (GGS_expression & outArgument0,
                                                   Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_term_i11_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_term_i11_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i12_ (GGS_expression & outArgument0,
                                                     Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i12_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i12_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i13_ (GGS_expression & outArgument0,
                                                     Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i13_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i13_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i14_ (GGS_expression & outArgument0,
                                                     Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i14_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i14_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i15_ (GGS_expression & outArgument0,
                                                     Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i15_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i15_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i16_ (GGS_expression & outArgument0,
                                                     Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i16_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i16_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i17_ (GGS_expression & outArgument0,
                                                     Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i17_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i17_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i18_ (GGS_expression & outArgument0,
                                                     Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i18_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i18_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i19_ (GGS_expression & outArgument0,
                                                     Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i19_parse (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i19_indexing (Lexique_kerbdd_5F_lexique * inLexique) ;

  protected: void rule_kerbdd_5F_syntax_factor_i20_ (GGS_expression & outArgument0,
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

class GGS_assignmentFormula : public GGS_abstractFormula {
//--------------------------------- Default constructor
  public: GGS_assignmentFormula (void) ;

//--------------------------------- Constructor from pointer
  public: GGS_assignmentFormula (const class cPtr_assignmentFormula * inSourcePtr) ;

//--------------------------------- Property access
  public: class GGS_lstring readProperty_mFormulaName (void) const ;
  public: void setProperty_mFormulaName (const GGS_lstring & inValue) ;

  public: class GGS_domainFieldList readProperty_mFormulaArgumentList (void) const ;
  public: void setProperty_mFormulaArgumentList (const GGS_domainFieldList & inValue) ;

  public: class GGS_formulaKind readProperty_mKind (void) const ;
  public: void setProperty_mKind (const GGS_formulaKind & inValue) ;

  public: class GGS_expression readProperty_mExpression (void) const ;
  public: void setProperty_mExpression (const GGS_expression & inValue) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_assignmentFormula init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                             const class GGS_domainFieldList & inOperand1,
                                                             const class GGS_formulaKind & inOperand2,
                                                             const class GGS_expression & inOperand3,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assignmentFormula extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assignmentFormula class_func_new (const class GGS_lstring & inOperand0,
                                                             const class GGS_domainFieldList & inOperand1,
                                                             const class GGS_formulaKind & inOperand2,
                                                             const class GGS_expression & inOperand3,
                                                             class Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assignmentFormula & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

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

//--------------------------------- Initializers
  public: void assignmentFormula_init_21__21__21__21_ (const class GGS_lstring & inOperand0,
                                                       const class GGS_domainFieldList & inOperand1,
                                                       const class GGS_formulaKind & inOperand2,
                                                       const class GGS_expression & inOperand3,
                                                       Compiler * inCompiler) ;


//--- Extension method analyzeFormula
  public: virtual void method_analyzeFormula (const class GGS_string arg_inSourceFilePath,
           const class GGS_domainMap arg_inDomainMap,
           class GGS_computedFormulaMap & arg_ioComputedFormulaMap,
           Compiler * COMMA_LOCATION_ARGS) override ;

//--- Properties
  public: GGS_lstring mProperty_mFormulaName ;
  public: GGS_domainFieldList mProperty_mFormulaArgumentList ;
  public: GGS_formulaKind mProperty_mKind ;
  public: GGS_expression mProperty_mExpression ;


//--- Default constructor
  public: cPtr_assignmentFormula (Compiler * inCompiler COMMA_LOCATION_ARGS) ;

//--- Constructor
  public: cPtr_assignmentFormula (const GGS_lstring & in_mFormulaName,
                                  const GGS_domainFieldList & in_mFormulaArgumentList,
                                  const GGS_formulaKind & in_mKind,
                                  const GGS_expression & in_mExpression,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//--- Duplication
  public: virtual acPtr_class * duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const override ;

//--- Attribute accessors
//--- Description
  public: virtual void description (String & ioString,
                                    const int32_t inIndentation) const override ;

//--- Class descriptor
  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;

} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formulaList list enumerator
//--------------------------------------------------------------------------------------------------

class DownEnumerator_formulaList final : public cGenericAbstractEnumerator {
  public: DownEnumerator_formulaList (const class GGS_formulaList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_abstractFormula current_mFormula (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_formulaList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------

class UpEnumerator_formulaList final : public cGenericAbstractEnumerator {
  public: UpEnumerator_formulaList (const class GGS_formulaList & inEnumeratedObject) ;

//    public: bool hasCurrentObject (void) const ;
//    public: void gotoNextObject (void) ;
//    public: void rewind (void) ;

  public: class GGS_abstractFormula current_mFormula (LOCATION_ARGS) const ;
//--- Current element access
  public: class GGS_formulaList_2E_element current (LOCATION_ARGS) const ;
} ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formulaList list
//--------------------------------------------------------------------------------------------------

class GGS_formulaList : public AC_GALGAS_list {
//--------------------------------- Default constructor
  public: GGS_formulaList (void) ;

//--------------------------------- List constructor by graph
  public: GGS_formulaList (const capCollectionElementArray & inSharedArray) ;

//--------------------------------- Element constructor
  public: static void makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const class GGS_abstractFormula & in_mFormula
                                                 COMMA_LOCATION_ARGS) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formulaList init (Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_formulaList extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_formulaList class_func_emptyList (LOCATION_ARGS) ;

  public: static class GGS_formulaList class_func_listWithValue (const class GGS_abstractFormula & inOperand0
                                                                 COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with expression)
  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GGS_formulaList inOperand,
                                                       class Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) ;

//--------------------------------- += operator (with list of field expressions)
  public: VIRTUAL_IN_DEBUG void addAssign_operation (const class GGS_abstractFormula & inOperand0
                                                     COMMA_LOCATION_ARGS) ;
//--------------------------------- + operator
  public: VIRTUAL_IN_DEBUG GGS_formulaList add_operation (const GGS_formulaList & inOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Setters
  public: VIRTUAL_IN_DEBUG void setter_append (class GGS_abstractFormula constinArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_insertAtIndex (class GGS_abstractFormula constinArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popFirst (class GGS_abstractFormula & outArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_popLast (class GGS_abstractFormula & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_removeAtIndex (class GGS_abstractFormula & outArgument0,
                                                      class GGS_uint constinArgument1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

  public: VIRTUAL_IN_DEBUG void setter_setMFormulaAtIndex (class GGS_abstractFormula constinArgument0,
                                                           class GGS_uint constinArgument1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;


//--------------------------------- Instance Methods
  public: VIRTUAL_IN_DEBUG void method_first (class GGS_abstractFormula & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG void method_last (class GGS_abstractFormula & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const ;

//--------------------------------- Class Methods

//--------------------------------- Getters
  public: VIRTUAL_IN_DEBUG class GGS_abstractFormula getter_mFormulaAtIndex (const class GGS_uint & constinOperand0,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formulaList getter_subListFromIndex (const class GGS_uint & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formulaList getter_subListToIndex (const class GGS_uint & constinOperand0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const ;

  public: VIRTUAL_IN_DEBUG class GGS_formulaList getter_subListWithRange (const class GGS_range & constinOperand0,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const ;


//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;

//--- Append element
  public: VIRTUAL_IN_DEBUG void enterElement (const class GGS_formulaList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- Friend
  friend class UpEnumerator_formulaList ;
  friend class DownEnumerator_formulaList ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaList ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @ast struct
//--------------------------------------------------------------------------------------------------

class GGS_ast : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_domainDeclarationList mProperty_mDomainList ;
  public: inline GGS_domainDeclarationList readProperty_mDomainList (void) const {
    return mProperty_mDomainList ;
  }

  public: GGS_formulaList mProperty_mFormulaList ;
  public: inline GGS_formulaList readProperty_mFormulaList (void) const {
    return mProperty_mFormulaList ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_ast (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMDomainList (const GGS_domainDeclarationList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mDomainList = inValue ;
  }

  public: inline void setter_setMFormulaList (const GGS_formulaList & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormulaList = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_ast (const GGS_domainDeclarationList & in_mDomainList,
                   const GGS_formulaList & in_mFormulaList) ;

//--------------------------------- Copy constructor
  public: GGS_ast (const GGS_ast & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_ast & operator = (const GGS_ast & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_ast init (Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_ast extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_ast class_func_new (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ast ;

//--------------------------------------------------------------------------------------------------
// Phase 1: @formulaList_2E_element struct
//--------------------------------------------------------------------------------------------------

class GGS_formulaList_2E_element : public AC_GALGAS_root {
//--------------------------------- Properties
  public: GGS_abstractFormula mProperty_mFormula ;
  public: inline GGS_abstractFormula readProperty_mFormula (void) const {
    return mProperty_mFormula ;
  }

//--------------------------------- Accessors
  public: VIRTUAL_IN_DEBUG bool isValid (void) const override ;
  public: VIRTUAL_IN_DEBUG void drop (void) override ;

//--------------------------------- Default constructor
  public: GGS_formulaList_2E_element (void) ;

//--------------------------------- Property setters
  public: inline void setter_setMFormula (const GGS_abstractFormula & inValue COMMA_UNUSED_LOCATION_ARGS) {
    mProperty_mFormula = inValue ;
  }

//--------------------------------- Set initialized properties
  private: void setInitializedProperties (Compiler * inCompiler) ;

//--------------------------------- Native constructor
  public: GGS_formulaList_2E_element (const GGS_abstractFormula & in_mFormula) ;

//--------------------------------- Copy constructor
  public: GGS_formulaList_2E_element (const GGS_formulaList_2E_element & inSource) ;

//--------------------------------- Assignment operator
  public: GGS_formulaList_2E_element & operator = (const GGS_formulaList_2E_element & inSource) ;

//-- Start of type generic part

//--------------------------------- Initializers
  public: static GGS_formulaList_2E_element init_21_ (const class GGS_abstractFormula & inOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_formulaList_2E_element extractObject (const GGS_object & inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_formulaList_2E_element class_func_new (const class GGS_abstractFormula & inOperand0,
                                                                  class Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) ;

//--------------------------------- Implementation of getter 'description'
  public: VIRTUAL_IN_DEBUG void description (String & ioString,
                                             const int32_t inIndentation) const override ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaList_2E_element ;

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractFormula analyzeFormula'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeFormula (class cPtr_abstractFormula * inObject,
                                         const class GGS_string constin_inSourceFilePath,
                                         const class GGS_domainMap constin_inDomainMap,
                                         class GGS_computedFormulaMap & io_ioComputedFormulaMap,
                                         class Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
// Phase 1: @assignmentFormula_2E_weak weak reference class
//
//--------------------------------------------------------------------------------------------------

class GGS_assignmentFormula_2E_weak : public GGS_abstractFormula_2E_weak {
//--------------------------------- Default constructor
  public: GGS_assignmentFormula_2E_weak (void) ;

//--------------------------------- Constructor and assignment from strong reference
  public: GGS_assignmentFormula_2E_weak (const class GGS_assignmentFormula & inSource) ;

  public: GGS_assignmentFormula_2E_weak & operator = (const class GGS_assignmentFormula & inSource) ;

//--------------------------------- Constructor and assignment from optional reference

//--------------------------------- nil initializer
  public: inline static GGS_assignmentFormula_2E_weak init_nil (void) {
    GGS_assignmentFormula_2E_weak result ;
    macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    return result ;
  }

//--------------------------------- Bang operator
  public: GGS_assignmentFormula bang_assignmentFormula_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const ;

//--------------------------------- isValuated
  public: inline bool isValuated (void) const {
    return isValid () && (ptr () != nullptr) ;
  }

//--------------------------------- Unwrapped value
  public: inline GGS_assignmentFormula unwrappedValue (void) const {
    GGS_assignmentFormula result ;
    if (isValid ()) {
      const cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) ptr () ;
      if (nullptr != p) {
        result = GGS_assignmentFormula (p) ;
      }
    }
    return result ;
  }

//--------------------------------- GALGAS read only properties
  public: inline GGS_bool readProperty_isNil (void) const {
    return GGS_bool (isValid (), ptr () == nullptr) ;
  }

  public: inline GGS_bool readProperty_isSome (void) const {
    return GGS_bool (isValid (), ptr () != nullptr) ;
  }

//-- Start of type generic part

//--------------------------------- Initializers

//--------------------------------- Object cloning
  protected: virtual AC_GALGAS_root * clonedObject (void) const override ;

//--------------------------------- Object extraction
  public: static GGS_assignmentFormula_2E_weak extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) ;

//--------------------------------- GALGAS class functions
  public: static class GGS_assignmentFormula_2E_weak class_func_nil (LOCATION_ARGS) ;

//--------------------------------- Comparison
  public: ComparisonResult objectCompare (const GGS_assignmentFormula_2E_weak & inOperand) const ;

//--------------------------------- Setters

//--------------------------------- Instance Methods
//--------------------------------- Class Methods

//--------------------------------- Getters

//--------------------------------- Read subscripts

//--------------------------------- Introspection
  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const override ;
 
} ;

//--------------------------------------------------------------------------------------------------

extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentFormula_2E_weak ;

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
  public: virtual void nt_comparison_ (GGS_expression & outArgument0,
                                       Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public: virtual void nt_expression_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_ (GGS_expression & outArgument0,
                                       Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'factor' non terminal
//--- 'parse' label
  public: virtual void nt_factor_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_factor_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_factor_ (GGS_expression & outArgument0,
                                   Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'recordFields' non terminal
//--- 'parse' label
  public: virtual void nt_recordFields_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_recordFields_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_recordFields_ (GGS_domainFieldList & outArgument0,
                                         Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (GGS_ast & outArgument0,
                                            Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_ast & outArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_ast & outArgument0
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
  public: virtual void nt_term_ (GGS_expression & outArgument0,
                                 Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'topLevelDeClaration' non terminal
//--- 'parse' label
  public: virtual void nt_topLevelDeClaration_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_topLevelDeClaration_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_topLevelDeClaration_ (GGS_ast & ioArgument0,
                                                Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'type' non terminal
//--- 'parse' label
  public: virtual void nt_type_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_type_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_type_ (GGS_bddType & outArgument0,
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
