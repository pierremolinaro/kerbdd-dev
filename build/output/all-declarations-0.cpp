#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@_32_lstringlist' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement__32_lstringlist : public cCollectionElement {
  public: GGS__32_lstringlist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                              const GGS_lstring & in_mValue_31_
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                                                        const GGS_lstring & in_mValue_31_
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue_30_, in_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mValue_30_, inElement.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement__32_lstringlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement__32_lstringlist::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement__32_lstringlist (mObject.mProperty_mValue_30_, mObject.mProperty_mValue_31_ COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement__32_lstringlist::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue0" ":") ;
  mObject.mProperty_mValue_30_.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue1" ":") ;
  mObject.mProperty_mValue_31_.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS__32_lstringlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS__32_lstringlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::enterElement (const GGS__32_lstringlist_2E_element & inValue,
                                        Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement__32_lstringlist (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                   const GGS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS__32_lstringlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS__32_lstringlist::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GGS_lstring & in_mValue_30_,
                                                     const GGS_lstring & in_mValue_31_
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = nullptr ;
  macroMyNew (p, cCollectionElement__32_lstringlist (in_mValue_30_,
                                                     in_mValue_31_ COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::addAssign_operation (const GGS_lstring & inOperand0,
                                               const GGS_lstring & inOperand1
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement__32_lstringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_append (const GGS_lstring inOperand0,
                                         const GGS_lstring inOperand1,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement__32_lstringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                const GGS_lstring inOperand1,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement__32_lstringlist (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
      outOperand0 = p->mObject.mProperty_mValue_30_ ;
      outOperand1 = p->mObject.mProperty_mValue_31_ ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_popFirst (GGS_lstring & outOperand0,
                                           GGS_lstring & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_popLast (GGS_lstring & outOperand0,
                                          GGS_lstring & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::method_first (GGS_lstring & outOperand0,
                                        GGS_lstring & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::method_last (GGS_lstring & outOperand0,
                                       GGS_lstring & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    outOperand0 = p->mObject.mProperty_mValue_30_ ;
    outOperand1 = p->mObject.mProperty_mValue_31_ ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::add_operation (const GGS__32_lstringlist & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result = GGS__32_lstringlist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result = GGS__32_lstringlist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result = GGS__32_lstringlist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::plusAssign_operation (const GGS__32_lstringlist inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_setMValue_30_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue_30_ = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS__32_lstringlist::getter_mValue_30_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    result = p->mObject.mProperty_mValue_30_ ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_setMValue_31_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mValue_31_ = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS__32_lstringlist::getter_mValue_31_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    result = p->mObject.mProperty_mValue_31_ ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator__32_lstringlist::cEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element cEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject.mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject.mProperty_mValue_31_ ;
}




//--------------------------------------------------------------------------------------------------
//
//     @2lstringlist generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist ("2lstringlist",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS__32_lstringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_lstringlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_lstringlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  const GGS__32_lstringlist * p = (const GGS__32_lstringlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_lstringlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "unicode_character_cpp.h"
#include "scanner_actions.h"
#include "cLexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_kerbdd_5F_lexique::cTokenFor_kerbdd_5F_lexique (void) :
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value () {
}

//--------------------------------------------------------------------------------------------------

Lexique_kerbdd_5F_lexique::Lexique_kerbdd_5F_lexique (Compiler * inCallerCompiler,
                                                      const String & inSourceFileName
                                                      COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

Lexique_kerbdd_5F_lexique::Lexique_kerbdd_5F_lexique (Compiler * inCallerCompiler,
                                                      const String & inSourceString,
                                                      const String & inStringForError
                                                      COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//--------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_kerbdd_5F_lexique_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_kerbdd_5F_lexique_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_kerbdd_5F_lexique_internalError = "internal error" ;

//--------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//--------------------------------------------------------------------------------------------------

String Lexique_kerbdd_5F_lexique::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 42)) {
    static const char * syntaxErrorMessageArray [42] = {kEndOfSourceLexicalErrorMessage,
        "an identifier",
        "a 32-bit unsigned decimal number",
        "a character string constant \"...\"",
        "a comment",
        "the 'nodeHashMapSize' keyword",
        "the 'andCacheMapSize' keyword",
        "the 'domain' keyword",
        "the 'bool' keyword",
        "the 'true' keyword",
        "the 'false' keyword",
        "the 'display' keyword",
        "the 'include' keyword",
        "the 'graphviz' keyword",
        "the 'dump' keyword",
        "the '(' delimitor",
        "the ')' delimitor",
        "the '[' delimitor",
        "the ']' delimitor",
        "the '{' delimitor",
        "the '}' delimitor",
        "the ':=' delimitor",
        "the ':' delimitor",
        "the '.' delimitor",
        "the '..' delimitor",
        "the '+=' delimitor",
        "the '-=' delimitor",
        "the '->' delimitor",
        "the '&' delimitor",
        "the '|' delimitor",
        "the '^' delimitor",
        "the '~' delimitor",
        "the ',' delimitor",
        "the '\?' delimitor",
        "the '!' delimitor",
        "the ';' delimitor",
        "the '=' delimitor",
        "the '!=' delimitor",
        "the '<' delimitor",
        "the '<=' delimitor",
        "the '>' delimitor",
        "the '>=' delimitor"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$!$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__21_ = {
  TO_UNICODE ('!'),
} ;

//--- Unicode string for '$!=$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__21__3D_ = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$&$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__26_ = {
  TO_UNICODE ('&'),
} ;

//--- Unicode string for '$($'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__28_ = {
  TO_UNICODE ('('),
} ;

//--- Unicode string for '$)$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__29_ = {
  TO_UNICODE (')'),
} ;

//--- Unicode string for '$+=$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__2B__3D_ = {
  TO_UNICODE ('+'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$,$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__2C_ = {
  TO_UNICODE (','),
} ;

//--- Unicode string for '$-=$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__2D__3D_ = {
  TO_UNICODE ('-'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$->$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__2D__3E_ = {
  TO_UNICODE ('-'),
  TO_UNICODE ('>'),
} ;

//--- Unicode string for '$.$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__2E_ = {
  TO_UNICODE ('.'),
} ;

//--- Unicode string for '$..$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__2E__2E_ = {
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
} ;

//--- Unicode string for '$:$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__3A_ = {
  TO_UNICODE (':'),
} ;

//--- Unicode string for '$:=$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__3A__3D_ = {
  TO_UNICODE (':'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$;$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__3B_ = {
  TO_UNICODE (';'),
} ;

//--- Unicode string for '$<$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__3C_ = {
  TO_UNICODE ('<'),
} ;

//--- Unicode string for '$<=$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__3C__3D_ = {
  TO_UNICODE ('<'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$=$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__3D_ = {
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$>$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__3E_ = {
  TO_UNICODE ('>'),
} ;

//--- Unicode string for '$>=$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__3E__3D_ = {
  TO_UNICODE ('>'),
  TO_UNICODE ('='),
} ;

//--- Unicode string for '$?$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__3F_ = {
  TO_UNICODE ('\?'),
} ;

//--- Unicode string for '$[$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__5B_ = {
  TO_UNICODE ('['),
} ;

//--- Unicode string for '$]$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__5D_ = {
  TO_UNICODE (']'),
} ;

//--- Unicode string for '$^$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__5E_ = {
  TO_UNICODE ('^'),
} ;

//--- Unicode string for '$andCacheMapSize$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique_andCacheMapSize = {
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('C'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('M'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('S'),
  TO_UNICODE ('i'),
  TO_UNICODE ('z'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$bool$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique_bool = {
  TO_UNICODE ('b'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
} ;

//--- Unicode string for '$display$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique_display = {
  TO_UNICODE ('d'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('y'),
} ;

//--- Unicode string for '$domain$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique_domain = {
  TO_UNICODE ('d'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
} ;

//--- Unicode string for '$dump$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique_dump = {
  TO_UNICODE ('d'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
} ;

//--- Unicode string for '$false$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique_false = {
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$graphviz$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique_graphviz = {
  TO_UNICODE ('g'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('h'),
  TO_UNICODE ('v'),
  TO_UNICODE ('i'),
  TO_UNICODE ('z'),
} ;

//--- Unicode string for '$include$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique_include = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$nodeHashMapSize$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique_nodeHashMapSize = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('H'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('h'),
  TO_UNICODE ('M'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('S'),
  TO_UNICODE ('i'),
  TO_UNICODE ('z'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '$true$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique_true = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
} ;

//--- Unicode string for '${$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__7B_ = {
  TO_UNICODE ('{'),
} ;

//--- Unicode string for '$|$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__7C_ = {
  TO_UNICODE ('|'),
} ;

//--- Unicode string for '$}$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__7D_ = {
  TO_UNICODE ('}'),
} ;

//--- Unicode string for '$~$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__7E_ = {
  TO_UNICODE ('~'),
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'delimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_kerbdd_5F_lexique_delimitorsList = 27 ;

static const C_unicode_lexique_table_entry ktable_for_kerbdd_5F_lexique_delimitorsList [ktable_size_kerbdd_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__21_, Lexique_kerbdd_5F_lexique::kToken__21_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__26_, Lexique_kerbdd_5F_lexique::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__28_, Lexique_kerbdd_5F_lexique::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__29_, Lexique_kerbdd_5F_lexique::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__2C_, Lexique_kerbdd_5F_lexique::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__2E_, Lexique_kerbdd_5F_lexique::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3A_, Lexique_kerbdd_5F_lexique::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3B_, Lexique_kerbdd_5F_lexique::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3C_, Lexique_kerbdd_5F_lexique::kToken__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3D_, Lexique_kerbdd_5F_lexique::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3E_, Lexique_kerbdd_5F_lexique::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3F_, Lexique_kerbdd_5F_lexique::kToken__3F_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__5B_, Lexique_kerbdd_5F_lexique::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__5D_, Lexique_kerbdd_5F_lexique::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__5E_, Lexique_kerbdd_5F_lexique::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__7B_, Lexique_kerbdd_5F_lexique::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__7C_, Lexique_kerbdd_5F_lexique::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__7D_, Lexique_kerbdd_5F_lexique::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__7E_, Lexique_kerbdd_5F_lexique::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__21__3D_, Lexique_kerbdd_5F_lexique::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__2B__3D_, Lexique_kerbdd_5F_lexique::kToken__2B__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__2D__3D_, Lexique_kerbdd_5F_lexique::kToken__2D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__2D__3E_, Lexique_kerbdd_5F_lexique::kToken__2D__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__2E__2E_, Lexique_kerbdd_5F_lexique::kToken__2E__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3A__3D_, Lexique_kerbdd_5F_lexique::kToken__3A__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3C__3D_, Lexique_kerbdd_5F_lexique::kToken__3C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3E__3D_, Lexique_kerbdd_5F_lexique::kToken__3E__3D_)
} ;

int32_t Lexique_kerbdd_5F_lexique::search_into_delimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_kerbdd_5F_lexique_delimitorsList, ktable_size_kerbdd_5F_lexique_delimitorsList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'keyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_kerbdd_5F_lexique_keyWordList = 10 ;

static const C_unicode_lexique_table_entry ktable_for_kerbdd_5F_lexique_keyWordList [ktable_size_kerbdd_5F_lexique_keyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_bool, Lexique_kerbdd_5F_lexique::kToken_bool),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_dump, Lexique_kerbdd_5F_lexique::kToken_dump),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_true, Lexique_kerbdd_5F_lexique::kToken_true),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_false, Lexique_kerbdd_5F_lexique::kToken_false),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_domain, Lexique_kerbdd_5F_lexique::kToken_domain),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_display, Lexique_kerbdd_5F_lexique::kToken_display),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_include, Lexique_kerbdd_5F_lexique::kToken_include),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_graphviz, Lexique_kerbdd_5F_lexique::kToken_graphviz),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_andCacheMapSize, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_nodeHashMapSize, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize)
} ;

int32_t Lexique_kerbdd_5F_lexique::search_into_keyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_kerbdd_5F_lexique_keyWordList, ktable_size_kerbdd_5F_lexique_keyWordList) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String Lexique_kerbdd_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_kerbdd_5F_lexique * ptr = (const cTokenFor_kerbdd_5F_lexique *) inTokenPtr ;
  String s ;
  if (ptr == nullptr) {
    s.appendCString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString ("$$") ;
      break ;
    case kToken_identifier:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("identifier") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_integer:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("integer") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken_literal_5F_string:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("literal_string") ;
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendChar (TO_UNICODE (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("comment") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_nodeHashMapSize:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("nodeHashMapSize") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_andCacheMapSize:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("andCacheMapSize") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_domain:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("domain") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_bool:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("bool") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_true:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("true") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_false:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("false") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_display:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("display") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_include:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("include") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_graphviz:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("graphviz") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken_dump:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("dump") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__28_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("(") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__29_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (")") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("[") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("]") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("{") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("}") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3A__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (":=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3A_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (":") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (".") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2E__2E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("..") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2B__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("+=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2D__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("-=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2D__3E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("->") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__26_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("&") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("|") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__5E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("^") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__7E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("~") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__2C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (",") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3F_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("\?") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__21_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("!") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3B_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (";") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__21__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("!=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3C_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("<") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3C__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString ("<=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3E_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (">") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    case kToken__3E__3D_:
      s.appendChar (TO_UNICODE ('$')) ;
      s.appendCString (">=") ;
      s.appendChar (TO_UNICODE ('$')) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//--------------------------------------------------------------------------------------------------

void Lexique_kerbdd_5F_lexique::internalParseLexicalToken (cTokenFor_kerbdd_5F_lexique & token) {
  bool loop = true ;
  token.mLexicalAttribute_tokenString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_uint_33__32_value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_keyWordList (token.mLexicalAttribute_tokenString) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = kToken_identifier ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
      ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
      do {
        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      ::scanner_routine_convertDecimalStringIntoUInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_kerbdd_5F_lexique_decimalNumberTooLarge, gLexicalMessage_kerbdd_5F_lexique_internalError) ;
      token.mTokenCode = kToken_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
      do {
        if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE (65533))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
        token.mTokenCode = kToken_literal_5F_string ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_kerbdd_5F_lexique_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3E__3D_, true)) {
      token.mTokenCode = kToken__3E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3C__3D_, true)) {
      token.mTokenCode = kToken__3C__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3A__3D_, true)) {
      token.mTokenCode = kToken__3A__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__2E__2E_, true)) {
      token.mTokenCode = kToken__2E__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__2D__3E_, true)) {
      token.mTokenCode = kToken__2D__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__2D__3D_, true)) {
      token.mTokenCode = kToken__2D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__2B__3D_, true)) {
      token.mTokenCode = kToken__2B__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__21__3D_, true)) {
      token.mTokenCode = kToken__21__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__7E_, true)) {
      token.mTokenCode = kToken__7E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__7D_, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__7C_, true)) {
      token.mTokenCode = kToken__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__7B_, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__5E_, true)) {
      token.mTokenCode = kToken__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__5D_, true)) {
      token.mTokenCode = kToken__5D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__5B_, true)) {
      token.mTokenCode = kToken__5B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3F_, true)) {
      token.mTokenCode = kToken__3F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3E_, true)) {
      token.mTokenCode = kToken__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3D_, true)) {
      token.mTokenCode = kToken__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3C_, true)) {
      token.mTokenCode = kToken__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3B_, true)) {
      token.mTokenCode = kToken__3B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3A_, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__2E_, true)) {
      token.mTokenCode = kToken__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__2C_, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__29_, true)) {
      token.mTokenCode = kToken__29_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__28_, true)) {
      token.mTokenCode = kToken__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__26_, true)) {
      token.mTokenCode = kToken__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__21_, true)) {
      token.mTokenCode = kToken__21_ ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('#'))) {
      do {
        if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      enterDroppedTerminal (kToken_comment) ;
    }else if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE (' '))) {
    }else if (testForInputUTF32Char (TO_UNICODE ('\0'))) { // End of source text ? 
      token.mTokenCode = kToken_ ; // Empty string code
    }else{ // Unknown input character
      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }catch (const C_lexicalErrorException &) {
    token.mTokenCode = -1 ; // No token
    advance () ; // ... go throught unknown character
  }
}

//--------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//--------------------------------------------------------------------------------------------------

bool Lexique_kerbdd_5F_lexique::parseLexicalToken (void) {
  cTokenFor_kerbdd_5F_lexique token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (UNICODE_VALUE (mCurrentChar) == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//--------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//--------------------------------------------------------------------------------------------------

void Lexique_kerbdd_5F_lexique::enterToken (cTokenFor_kerbdd_5F_lexique & ioToken) {
  cTokenFor_kerbdd_5F_lexique * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_kerbdd_5F_lexique ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = ioToken.mLexicalAttribute_uint_33__32_value ;
  enterTokenFromPointer (ptr) ;
}

//--------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//--------------------------------------------------------------------------------------------------

String Lexique_kerbdd_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_kerbdd_5F_lexique * ptr = (cTokenFor_kerbdd_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//--------------------------------------------------------------------------------------------------

uint32_t Lexique_kerbdd_5F_lexique::attributeValue_uint_33__32_value (void) const {
  cTokenFor_kerbdd_5F_lexique * ptr = (cTokenFor_kerbdd_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_kerbdd_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_kerbdd_5F_lexique * ptr = (cTokenFor_kerbdd_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_kerbdd_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_tokenString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint Lexique_kerbdd_5F_lexique::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_kerbdd_5F_lexique * ptr = (cTokenFor_kerbdd_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_kerbdd_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GGS_luint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

GGS_stringlist Lexique_kerbdd_5F_lexique::symbols (LOCATION_ARGS) {
  GGS_stringlist result = GGS_stringlist::class_func_emptyList (THERE) ;
  result.addAssign_operation (GGS_string ("identifier") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("integer") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("literal_string") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("comment") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("nodeHashMapSize") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("andCacheMapSize") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("domain") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("bool") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("true") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("false") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("display") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("include") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("graphviz") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("dump") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("(") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (")") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("[") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("]") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("{") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("}") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (":=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (":") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (".") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("..") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("+=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("-=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("->") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("&") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("|") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("^") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("~") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (",") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("\?") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("!") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (";") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("!=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("<") COMMA_HERE) ;
  result.addAssign_operation (GGS_string ("<=") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (">") COMMA_HERE) ;
  result.addAssign_operation (GGS_string (">=") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_kerbdd_5F_lexique (TC_UniqueArray <String> & ioList) {
  ioList.appendObject ("kerbdd_lexique:delimitorsList") ;
  ioList.appendObject ("kerbdd_lexique:keyWordList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_kerbdd_5F_lexique (const String & inIdentifier,
                                                        bool & ioFound,
                                                        TC_UniqueArray <String> & ioList) {
  if (inIdentifier == "kerbdd_lexique:delimitorsList") {
    ioFound = true ;
    ioList.appendObject ("!") ;
    ioList.appendObject ("&") ;
    ioList.appendObject ("(") ;
    ioList.appendObject (")") ;
    ioList.appendObject (",") ;
    ioList.appendObject (".") ;
    ioList.appendObject (":") ;
    ioList.appendObject (";") ;
    ioList.appendObject ("<") ;
    ioList.appendObject ("=") ;
    ioList.appendObject (">") ;
    ioList.appendObject ("\?") ;
    ioList.appendObject ("[") ;
    ioList.appendObject ("]") ;
    ioList.appendObject ("^") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("|") ;
    ioList.appendObject ("}") ;
    ioList.appendObject ("~") ;
    ioList.appendObject ("!=") ;
    ioList.appendObject ("+=") ;
    ioList.appendObject ("-=") ;
    ioList.appendObject ("->") ;
    ioList.appendObject ("..") ;
    ioList.appendObject (":=") ;
    ioList.appendObject ("<=") ;
    ioList.appendObject (">=") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "kerbdd_lexique:keyWordList") {
    ioFound = true ;
    ioList.appendObject ("bool") ;
    ioList.appendObject ("dump") ;
    ioList.appendObject ("true") ;
    ioList.appendObject ("false") ;
    ioList.appendObject ("domain") ;
    ioList.appendObject ("display") ;
    ioList.appendObject ("include") ;
    ioList.appendObject ("graphviz") ;
    ioList.appendObject ("andCacheMapSize") ;
    ioList.appendObject ("nodeHashMapSize") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//--------------------------------------------------------------------------------------------------

static cLexiqueIntrospection lexiqueIntrospection_kerbdd_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_kerbdd_5F_lexique, getKeywordsForIdentifier_kerbdd_5F_lexique) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_kerbdd_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [42] = {0,
    0 /* kerbdd_lexique_1_identifier */,
    2 /* kerbdd_lexique_1_integer */,
    3 /* kerbdd_lexique_1_literal_5F_string */,
    5 /* kerbdd_lexique_1_comment */,
    1 /* kerbdd_lexique_1_nodeHashMapSize */,
    1 /* kerbdd_lexique_1_andCacheMapSize */,
    1 /* kerbdd_lexique_1_domain */,
    1 /* kerbdd_lexique_1_bool */,
    1 /* kerbdd_lexique_1_true */,
    1 /* kerbdd_lexique_1_false */,
    1 /* kerbdd_lexique_1_display */,
    1 /* kerbdd_lexique_1_include */,
    1 /* kerbdd_lexique_1_graphviz */,
    1 /* kerbdd_lexique_1_dump */,
    4 /* kerbdd_lexique_1__28_ */,
    4 /* kerbdd_lexique_1__29_ */,
    4 /* kerbdd_lexique_1__5B_ */,
    4 /* kerbdd_lexique_1__5D_ */,
    4 /* kerbdd_lexique_1__7B_ */,
    4 /* kerbdd_lexique_1__7D_ */,
    4 /* kerbdd_lexique_1__3A__3D_ */,
    4 /* kerbdd_lexique_1__3A_ */,
    4 /* kerbdd_lexique_1__2E_ */,
    4 /* kerbdd_lexique_1__2E__2E_ */,
    4 /* kerbdd_lexique_1__2B__3D_ */,
    4 /* kerbdd_lexique_1__2D__3D_ */,
    4 /* kerbdd_lexique_1__2D__3E_ */,
    4 /* kerbdd_lexique_1__26_ */,
    4 /* kerbdd_lexique_1__7C_ */,
    4 /* kerbdd_lexique_1__5E_ */,
    4 /* kerbdd_lexique_1__7E_ */,
    4 /* kerbdd_lexique_1__2C_ */,
    4 /* kerbdd_lexique_1__3F_ */,
    4 /* kerbdd_lexique_1__21_ */,
    4 /* kerbdd_lexique_1__3B_ */,
    4 /* kerbdd_lexique_1__3D_ */,
    4 /* kerbdd_lexique_1__21__3D_ */,
    4 /* kerbdd_lexique_1__3C_ */,
    4 /* kerbdd_lexique_1__3C__3D_ */,
    4 /* kerbdd_lexique_1__3E_ */,
    4 /* kerbdd_lexique_1__3E__3D_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//--------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//--------------------------------------------------------------------------------------------------

String Lexique_kerbdd_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  String result ;
  if (inStyleIndex < 6) {
    static const char * kStyleArray [6] = {
      "",
      "keywordsStyle",
      "integerStyle",
      "stringStyle",
      "delimitersStyle",
      "commentStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum bddType
//--------------------------------------------------------------------------------------------------

GGS_bddType::GGS_bddType (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_bddType GGS_bddType::class_func_bool (UNUSED_LOCATION_ARGS) {
  GGS_bddType result ;
  result.mEnum = Enumeration::enum_bool ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bddType GGS_bddType::class_func_boolArray (const GGS_uint & inAssociatedValue0
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bddType result ;
  result.mEnum = Enumeration::enum_boolArray ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_bddType_2E_boolArray (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bddType GGS_bddType::class_func_namedType (const GGS_lstring & inAssociatedValue0
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bddType result ;
  result.mEnum = Enumeration::enum_namedType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_bddType_2E_namedType (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bddType::method_extractBoolArray (GGS_uint & outAssociatedValue_size,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_boolArray) {
    outAssociatedValue_size.drop () ;
    String s ;
    s.appendCString ("method @bddType.boolArray invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_bddType_2E_boolArray *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_size = ptr->mProperty_size ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bddType::method_extractNamedType (GGS_lstring & outAssociatedValue_typeName,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_namedType) {
    outAssociatedValue_typeName.drop () ;
    String s ;
    s.appendCString ("method @bddType.namedType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_bddType_2E_namedType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_typeName = ptr->mProperty_typeName ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_boolArray_3F_ GGS_bddType::getter_getBoolArray (UNUSED_LOCATION_ARGS) const {
  GGS_bddType_2E_boolArray_3F_ result ;
  if (mEnum == Enumeration::enum_boolArray) {
    const auto ptr = (const GGS_bddType_2E_boolArray *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_bddType_2E_boolArray (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bddType::getAssociatedValuesFor_boolArray (GGS_uint & out_size) const {
  const auto ptr = (const GGS_bddType_2E_boolArray *) mAssociatedValues.associatedValuesPointer () ;
  out_size = ptr->mProperty_size ;
}

//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_namedType_3F_ GGS_bddType::getter_getNamedType (UNUSED_LOCATION_ARGS) const {
  GGS_bddType_2E_namedType_3F_ result ;
  if (mEnum == Enumeration::enum_namedType) {
    const auto ptr = (const GGS_bddType_2E_namedType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_bddType_2E_namedType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bddType::getAssociatedValuesFor_namedType (GGS_lstring & out_typeName) const {
  const auto ptr = (const GGS_bddType_2E_namedType *) mAssociatedValues.associatedValuesPointer () ;
  out_typeName = ptr->mProperty_typeName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_bddType [4] = {
  "(not built)",
  "bool",
  "boolArray",
  "namedType"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bddType::getter_isBool (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bool == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bddType::getter_isBoolArray (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_boolArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bddType::getter_isNamedType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_namedType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bddType::description (String & ioString,
                               const int32_t inIndentation) const {
  ioString.appendCString ("<enum @bddType: ") ;
  ioString.appendCString (gEnumNameArrayFor_bddType [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @bddType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bddType ("bddType",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bddType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bddType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bddType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bddType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bddType GGS_bddType::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_bddType result ;
  const GGS_bddType * p = (const GGS_bddType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bddType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bddType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@domainFieldList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_domainFieldList : public cCollectionElement {
  public: GGS_domainFieldList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_domainFieldList (const GGS_lstring & in_mVarName,
                                              const GGS_bddType & in_mType
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_domainFieldList (const GGS_domainFieldList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_domainFieldList::cCollectionElement_domainFieldList (const GGS_lstring & in_mVarName,
                                                                        const GGS_bddType & in_mType
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mVarName, in_mType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_domainFieldList::cCollectionElement_domainFieldList (const GGS_domainFieldList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mVarName, inElement.mProperty_mType) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_domainFieldList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_domainFieldList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_domainFieldList (mObject.mProperty_mVarName, mObject.mProperty_mType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_domainFieldList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mVarName" ":") ;
  mObject.mProperty_mVarName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList::GGS_domainFieldList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList::GGS_domainFieldList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList GGS_domainFieldList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_domainFieldList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList GGS_domainFieldList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_domainFieldList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::enterElement (const GGS_domainFieldList_2E_element & inValue,
                                        Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_domainFieldList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList GGS_domainFieldList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                   const GGS_bddType & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  GGS_domainFieldList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_domainFieldList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_domainFieldList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GGS_lstring & in_mVarName,
                                                     const GGS_bddType & in_mType
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_domainFieldList * p = nullptr ;
  macroMyNew (p, cCollectionElement_domainFieldList (in_mVarName,
                                                     in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::addAssign_operation (const GGS_lstring & inOperand0,
                                               const GGS_bddType & inOperand1
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_domainFieldList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::setter_append (const GGS_lstring inOperand0,
                                         const GGS_bddType inOperand1,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_domainFieldList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                const GGS_bddType inOperand1,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_domainFieldList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                GGS_bddType & outOperand1,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
      outOperand0 = p->mObject.mProperty_mVarName ;
      outOperand1 = p->mObject.mProperty_mType ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::setter_popFirst (GGS_lstring & outOperand0,
                                           GGS_bddType & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    outOperand0 = p->mObject.mProperty_mVarName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::setter_popLast (GGS_lstring & outOperand0,
                                          GGS_bddType & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    outOperand0 = p->mObject.mProperty_mVarName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::method_first (GGS_lstring & outOperand0,
                                        GGS_bddType & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    outOperand0 = p->mObject.mProperty_mVarName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::method_last (GGS_lstring & outOperand0,
                                       GGS_bddType & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    outOperand0 = p->mObject.mProperty_mVarName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList GGS_domainFieldList::add_operation (const GGS_domainFieldList & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_domainFieldList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList GGS_domainFieldList::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_domainFieldList result = GGS_domainFieldList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList GGS_domainFieldList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_domainFieldList result = GGS_domainFieldList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList GGS_domainFieldList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_domainFieldList result = GGS_domainFieldList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::plusAssign_operation (const GGS_domainFieldList inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::setter_setMVarNameAtIndex (GGS_lstring inOperand,
                                                     GGS_uint inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mVarName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_domainFieldList::getter_mVarNameAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    result = p->mObject.mProperty_mVarName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::setter_setMTypeAtIndex (GGS_bddType inOperand,
                                                  GGS_uint inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bddType GGS_domainFieldList::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) attributes.ptr () ;
  GGS_bddType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_domainFieldList::cEnumerator_domainFieldList (const GGS_domainFieldList & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList_2E_element cEnumerator_domainFieldList::current (LOCATION_ARGS) const {
  const cCollectionElement_domainFieldList * p = (const cCollectionElement_domainFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_domainFieldList::current_mVarName (LOCATION_ARGS) const {
  const cCollectionElement_domainFieldList * p = (const cCollectionElement_domainFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
  return p->mObject.mProperty_mVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bddType cEnumerator_domainFieldList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_domainFieldList * p = (const cCollectionElement_domainFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
  return p->mObject.mProperty_mType ;
}




//--------------------------------------------------------------------------------------------------
//
//     @domainFieldList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainFieldList ("domainFieldList",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_domainFieldList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainFieldList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_domainFieldList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_domainFieldList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList GGS_domainFieldList::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_domainFieldList result ;
  const GGS_domainFieldList * p = (const GGS_domainFieldList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_domainFieldList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainFieldList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum domainDeclarationType
//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType::GGS_domainDeclarationType (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType GGS_domainDeclarationType::class_func_type (const GGS_bddType & inAssociatedValue0
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_domainDeclarationType result ;
  result.mEnum = Enumeration::enum_type ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_domainDeclarationType_2E_type (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType GGS_domainDeclarationType::class_func_record (const GGS_domainFieldList & inAssociatedValue0
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_domainDeclarationType result ;
  result.mEnum = Enumeration::enum_record ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_domainDeclarationType_2E_record (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationType::method_extractType (GGS_bddType & outAssociatedValue_type,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_type) {
    outAssociatedValue_type.drop () ;
    String s ;
    s.appendCString ("method @domainDeclarationType.type invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_domainDeclarationType_2E_type *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationType::method_extractRecord (GGS_domainFieldList & outAssociatedValue_fieldList,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_record) {
    outAssociatedValue_fieldList.drop () ;
    String s ;
    s.appendCString ("method @domainDeclarationType.record invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_domainDeclarationType_2E_record *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_fieldList = ptr->mProperty_fieldList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_type_3F_ GGS_domainDeclarationType::getter_getType (UNUSED_LOCATION_ARGS) const {
  GGS_domainDeclarationType_2E_type_3F_ result ;
  if (mEnum == Enumeration::enum_type) {
    const auto ptr = (const GGS_domainDeclarationType_2E_type *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_domainDeclarationType_2E_type (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationType::getAssociatedValuesFor_type (GGS_bddType & out_type) const {
  const auto ptr = (const GGS_domainDeclarationType_2E_type *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_record_3F_ GGS_domainDeclarationType::getter_getRecord (UNUSED_LOCATION_ARGS) const {
  GGS_domainDeclarationType_2E_record_3F_ result ;
  if (mEnum == Enumeration::enum_record) {
    const auto ptr = (const GGS_domainDeclarationType_2E_record *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_domainDeclarationType_2E_record (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationType::getAssociatedValuesFor_record (GGS_domainFieldList & out_fieldList) const {
  const auto ptr = (const GGS_domainDeclarationType_2E_record *) mAssociatedValues.associatedValuesPointer () ;
  out_fieldList = ptr->mProperty_fieldList ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_domainDeclarationType [3] = {
  "(not built)",
  "type",
  "record"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_domainDeclarationType::getter_isType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_type == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_domainDeclarationType::getter_isRecord (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_record == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationType::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<enum @domainDeclarationType: ") ;
  ioString.appendCString (gEnumNameArrayFor_domainDeclarationType [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @domainDeclarationType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationType ("domainDeclarationType",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_domainDeclarationType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainDeclarationType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_domainDeclarationType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_domainDeclarationType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType GGS_domainDeclarationType::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_domainDeclarationType result ;
  const GGS_domainDeclarationType * p = (const GGS_domainDeclarationType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_domainDeclarationType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainDeclarationType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@domainDeclarationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_domainDeclarationList : public cCollectionElement {
  public: GGS_domainDeclarationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_domainDeclarationList (const GGS_lstring & in_mDomainName,
                                                    const GGS_domainDeclarationType & in_mType
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_domainDeclarationList (const GGS_domainDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_domainDeclarationList::cCollectionElement_domainDeclarationList (const GGS_lstring & in_mDomainName,
                                                                                    const GGS_domainDeclarationType & in_mType
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDomainName, in_mType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_domainDeclarationList::cCollectionElement_domainDeclarationList (const GGS_domainDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDomainName, inElement.mProperty_mType) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_domainDeclarationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_domainDeclarationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_domainDeclarationList (mObject.mProperty_mDomainName, mObject.mProperty_mType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_domainDeclarationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDomainName" ":") ;
  mObject.mProperty_mDomainName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList::GGS_domainDeclarationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList::GGS_domainDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList GGS_domainDeclarationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_domainDeclarationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList GGS_domainDeclarationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_domainDeclarationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::enterElement (const GGS_domainDeclarationList_2E_element & inValue,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_domainDeclarationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList GGS_domainDeclarationList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                               const GGS_domainDeclarationType & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  GGS_domainDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_domainDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_domainDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GGS_lstring & in_mDomainName,
                                                           const GGS_domainDeclarationType & in_mType
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_domainDeclarationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_domainDeclarationList (in_mDomainName,
                                                           in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::addAssign_operation (const GGS_lstring & inOperand0,
                                                     const GGS_domainDeclarationType & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_domainDeclarationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::setter_append (const GGS_lstring inOperand0,
                                               const GGS_domainDeclarationType inOperand1,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_domainDeclarationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                      const GGS_domainDeclarationType inOperand1,
                                                      const GGS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_domainDeclarationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                      GGS_domainDeclarationType & outOperand1,
                                                      const GGS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
      outOperand0 = p->mObject.mProperty_mDomainName ;
      outOperand1 = p->mObject.mProperty_mType ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::setter_popFirst (GGS_lstring & outOperand0,
                                                 GGS_domainDeclarationType & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mDomainName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::setter_popLast (GGS_lstring & outOperand0,
                                                GGS_domainDeclarationType & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mDomainName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::method_first (GGS_lstring & outOperand0,
                                              GGS_domainDeclarationType & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mDomainName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::method_last (GGS_lstring & outOperand0,
                                             GGS_domainDeclarationType & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mDomainName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList GGS_domainDeclarationList::add_operation (const GGS_domainDeclarationList & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_domainDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList GGS_domainDeclarationList::getter_subListWithRange (const GGS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_domainDeclarationList result = GGS_domainDeclarationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList GGS_domainDeclarationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_domainDeclarationList result = GGS_domainDeclarationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList GGS_domainDeclarationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_domainDeclarationList result = GGS_domainDeclarationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::plusAssign_operation (const GGS_domainDeclarationList inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::setter_setMDomainNameAtIndex (GGS_lstring inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDomainName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_domainDeclarationList::getter_mDomainNameAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    result = p->mObject.mProperty_mDomainName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::setter_setMTypeAtIndex (GGS_domainDeclarationType inOperand,
                                                        GGS_uint inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType GGS_domainDeclarationList::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) attributes.ptr () ;
  GGS_domainDeclarationType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_domainDeclarationList::cEnumerator_domainDeclarationList (const GGS_domainDeclarationList & inEnumeratedObject,
                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList_2E_element cEnumerator_domainDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_domainDeclarationList * p = (const cCollectionElement_domainDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_domainDeclarationList::current_mDomainName (LOCATION_ARGS) const {
  const cCollectionElement_domainDeclarationList * p = (const cCollectionElement_domainDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
  return p->mObject.mProperty_mDomainName ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType cEnumerator_domainDeclarationList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_domainDeclarationList * p = (const cCollectionElement_domainDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
  return p->mObject.mProperty_mType ;
}




//--------------------------------------------------------------------------------------------------
//
//     @domainDeclarationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationList ("domainDeclarationList",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_domainDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_domainDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_domainDeclarationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList GGS_domainDeclarationList::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_domainDeclarationList result ;
  const GGS_domainDeclarationList * p = (const GGS_domainDeclarationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_domainDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_recordDomainMap::cMapElement_recordDomainMap (const GGS_recordDomainMap_2E_element & inValue
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mIndex (inValue.mProperty_mIndex),
mProperty_mBitCount (inValue.mProperty_mBitCount),
mProperty_mSubDomain (inValue.mProperty_mSubDomain) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_recordDomainMap::cMapElement_recordDomainMap (const GGS_lstring & inKey,
                                                          const GGS_uint & in_mIndex,
                                                          const GGS_uint & in_mBitCount,
                                                          const GGS_recordDomainMap & in_mSubDomain
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex),
mProperty_mBitCount (in_mBitCount),
mProperty_mSubDomain (in_mSubDomain) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_recordDomainMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_recordDomainMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_recordDomainMap (mProperty_lkey, mProperty_mIndex, mProperty_mBitCount, mProperty_mSubDomain COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_recordDomainMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIndex" ":") ;
  mProperty_mIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBitCount" ":") ;
  mProperty_mBitCount.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSubDomain" ":") ;
  mProperty_mSubDomain.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap::GGS_recordDomainMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap::GGS_recordDomainMap (const GGS_recordDomainMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap & GGS_recordDomainMap::operator = (const GGS_recordDomainMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap GGS_recordDomainMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_recordDomainMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap GGS_recordDomainMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_recordDomainMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap_2E_element_3F_ GGS_recordDomainMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_recordDomainMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_recordDomainMap * p = (cMapElement_recordDomainMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_recordDomainMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_recordDomainMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mIndex = p->mProperty_mIndex ;
      element.mProperty_mBitCount = p->mProperty_mBitCount ;
      element.mProperty_mSubDomain = p->mProperty_mSubDomain ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap GGS_recordDomainMap::class_func_mapWithMapToOverride (const GGS_recordDomainMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_recordDomainMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap GGS_recordDomainMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_recordDomainMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap::enterElement (const GGS_recordDomainMap_2E_element & inValue,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  cMapElement_recordDomainMap * p = nullptr ;
  macroMyNew (p, cMapElement_recordDomainMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@recordDomainMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap::addAssign_operation (const GGS_lstring & inKey,
                                               const GGS_uint & inArgument0,
                                               const GGS_uint & inArgument1,
                                               const GGS_recordDomainMap & inArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_recordDomainMap * p = nullptr ;
  macroMyNew (p, cMapElement_recordDomainMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@recordDomainMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap GGS_recordDomainMap::add_operation (const GGS_recordDomainMap & inOperand,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_recordDomainMap result = *this ;
  cEnumerator_recordDomainMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIndex (HERE), enumerator.current_mBitCount (HERE), enumerator.current_mSubDomain (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap::setter_insertKey (GGS_lstring inKey,
                                            GGS_uint inArgument0,
                                            GGS_uint inArgument1,
                                            GGS_recordDomainMap inArgument2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_recordDomainMap * p = nullptr ;
  macroMyNew (p, cMapElement_recordDomainMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' field is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_recordDomainMap_searchKey = "there is no '%K' field" ;

//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap::method_searchKey (GGS_lstring inKey,
                                            GGS_uint & outArgument0,
                                            GGS_uint & outArgument1,
                                            GGS_recordDomainMap & outArgument2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) performSearch (inKey,
                                                                                               inCompiler,
                                                                                               kSearchErrorMessage_recordDomainMap_searchKey
                                                                                               COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mBitCount ;
    outArgument2 = p->mProperty_mSubDomain ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_recordDomainMap::getter_mIndexForKey (const GGS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_recordDomainMap::getter_mBitCountForKey (const GGS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    result = p->mProperty_mBitCount ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap GGS_recordDomainMap::getter_mSubDomainForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) attributes ;
  GGS_recordDomainMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    result = p->mProperty_mSubDomain ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap::setter_setMIndexForKey (GGS_uint inAttributeValue,
                                                  GGS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_recordDomainMap * p = (cMapElement_recordDomainMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap::setter_setMBitCountForKey (GGS_uint inAttributeValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_recordDomainMap * p = (cMapElement_recordDomainMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    p->mProperty_mBitCount = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap::setter_setMSubDomainForKey (GGS_recordDomainMap inAttributeValue,
                                                      GGS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_recordDomainMap * p = (cMapElement_recordDomainMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    p->mProperty_mSubDomain = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_recordDomainMap * GGS_recordDomainMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                      const GGS_string & inKey
                                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_recordDomainMap * result = (cMapElement_recordDomainMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_recordDomainMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_recordDomainMap::cEnumerator_recordDomainMap (const GGS_recordDomainMap & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap_2E_element cEnumerator_recordDomainMap::current (LOCATION_ARGS) const {
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_recordDomainMap) ;
  return GGS_recordDomainMap_2E_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mBitCount, p->mProperty_mSubDomain) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_recordDomainMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_recordDomainMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_recordDomainMap) ;
  return p->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_recordDomainMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_recordDomainMap) ;
  return p->mProperty_mBitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap cEnumerator_recordDomainMap::current_mSubDomain (LOCATION_ARGS) const {
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_recordDomainMap) ;
  return p->mProperty_mSubDomain ;
}

//--------------------------------------------------------------------------------------------------
//
//     @recordDomainMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_recordDomainMap ("recordDomainMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_recordDomainMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_recordDomainMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_recordDomainMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_recordDomainMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap GGS_recordDomainMap::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_recordDomainMap result ;
  const GGS_recordDomainMap * p = (const GGS_recordDomainMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_recordDomainMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("recordDomainMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_domainMap::cMapElement_domainMap (const GGS_domainMap_2E_element & inValue
                                              COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mBitCount (inValue.mProperty_mBitCount),
mProperty_mRecordMap (inValue.mProperty_mRecordMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_domainMap::cMapElement_domainMap (const GGS_lstring & inKey,
                                              const GGS_uint & in_mBitCount,
                                              const GGS_recordDomainMap & in_mRecordMap
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mBitCount (in_mBitCount),
mProperty_mRecordMap (in_mRecordMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_domainMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_domainMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_domainMap (mProperty_lkey, mProperty_mBitCount, mProperty_mRecordMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_domainMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBitCount" ":") ;
  mProperty_mBitCount.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRecordMap" ":") ;
  mProperty_mRecordMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap::GGS_domainMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap::GGS_domainMap (const GGS_domainMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap & GGS_domainMap::operator = (const GGS_domainMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap GGS_domainMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_domainMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap GGS_domainMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_domainMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap_2E_element_3F_ GGS_domainMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_domainMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_domainMap * p = (cMapElement_domainMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_domainMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_domainMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mBitCount = p->mProperty_mBitCount ;
      element.mProperty_mRecordMap = p->mProperty_mRecordMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap GGS_domainMap::class_func_mapWithMapToOverride (const GGS_domainMap & inMapToOverride
                                                              COMMA_LOCATION_ARGS) {
  GGS_domainMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap GGS_domainMap::getter_overriddenMap (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_domainMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainMap::enterElement (const GGS_domainMap_2E_element & inValue,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cMapElement_domainMap * p = nullptr ;
  macroMyNew (p, cMapElement_domainMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@domainMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainMap::addAssign_operation (const GGS_lstring & inKey,
                                         const GGS_uint & inArgument0,
                                         const GGS_recordDomainMap & inArgument1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_domainMap * p = nullptr ;
  macroMyNew (p, cMapElement_domainMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@domainMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap GGS_domainMap::add_operation (const GGS_domainMap & inOperand,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GGS_domainMap result = *this ;
  cEnumerator_domainMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mBitCount (HERE), enumerator.current_mRecordMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainMap::setter_insertKey (GGS_lstring inKey,
                                      GGS_uint inArgument0,
                                      GGS_recordDomainMap inArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cMapElement_domainMap * p = nullptr ;
  macroMyNew (p, cMapElement_domainMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' domain is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_domainMap_searchKey = "there is no '%K' domain" ;

//--------------------------------------------------------------------------------------------------

void GGS_domainMap::method_searchKey (GGS_lstring inKey,
                                      GGS_uint & outArgument0,
                                      GGS_recordDomainMap & outArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) performSearch (inKey,
                                                                                   inCompiler,
                                                                                   kSearchErrorMessage_domainMap_searchKey
                                                                                   COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_domainMap) ;
    outArgument0 = p->mProperty_mBitCount ;
    outArgument1 = p->mProperty_mRecordMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_domainMap::getter_mBitCountForKey (const GGS_string & inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_domainMap) ;
    result = p->mProperty_mBitCount ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap GGS_domainMap::getter_mRecordMapForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) attributes ;
  GGS_recordDomainMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_domainMap) ;
    result = p->mProperty_mRecordMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainMap::setter_setMBitCountForKey (GGS_uint inAttributeValue,
                                               GGS_string inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_domainMap * p = (cMapElement_domainMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_domainMap) ;
    p->mProperty_mBitCount = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainMap::setter_setMRecordMapForKey (GGS_recordDomainMap inAttributeValue,
                                                GGS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_domainMap * p = (cMapElement_domainMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_domainMap) ;
    p->mProperty_mRecordMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_domainMap * GGS_domainMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                          const GGS_string & inKey
                                                                          COMMA_LOCATION_ARGS) {
  cMapElement_domainMap * result = (cMapElement_domainMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_domainMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_domainMap::cEnumerator_domainMap (const GGS_domainMap & inEnumeratedObject,
                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap_2E_element cEnumerator_domainMap::current (LOCATION_ARGS) const {
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_domainMap) ;
  return GGS_domainMap_2E_element (p->mProperty_lkey, p->mProperty_mBitCount, p->mProperty_mRecordMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_domainMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_domainMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_domainMap) ;
  return p->mProperty_mBitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap cEnumerator_domainMap::current_mRecordMap (LOCATION_ARGS) const {
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_domainMap) ;
  return p->mProperty_mRecordMap ;
}

//--------------------------------------------------------------------------------------------------
//
//     @domainMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainMap ("domainMap",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_domainMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_domainMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_domainMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap GGS_domainMap::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_domainMap result ;
  const GGS_domainMap * p = (const GGS_domainMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_domainMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@domainDeclarationList analyze'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyze (const GGS_domainDeclarationList inObject,
                              GGS_domainMap & outArgument_outDomainMap,
                              Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDomainMap.drop () ; // Release 'out' argument
  GGS_domainMap temp_0 = GGS_domainMap::init (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 122)) ;
  outArgument_outDomainMap = temp_0 ;
  const GGS_domainDeclarationList temp_1 = inObject ;
  cEnumerator_domainDeclarationList enumerator_3988 (temp_1, EnumerationOrder::up) ;
  bool bool_2 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("domain.ggs", 123)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_3988.hasCurrentObject () && bool_2) {
    while (enumerator_3988.hasCurrentObject () && bool_2) {
      switch (enumerator_3988.current_mType (HERE).enumValue ()) {
      case GGS_domainDeclarationType::Enumeration::invalid:
        break ;
      case GGS_domainDeclarationType::Enumeration::enum_type:
        {
          GGS_bddType extractedValue_4093_type_0 ;
          enumerator_3988.current_mType (HERE).getAssociatedValuesFor_type (extractedValue_4093_type_0) ;
          switch (extractedValue_4093_type_0.enumValue ()) {
          case GGS_bddType::Enumeration::invalid:
            break ;
          case GGS_bddType::Enumeration::enum_bool:
            {
              {
              GGS_recordDomainMap temp_3 = GGS_recordDomainMap::init (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 128)) ;
              outArgument_outDomainMap.setter_insertKey (enumerator_3988.current_mDomainName (HERE), GGS_uint (uint32_t (1U)), temp_3, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 128)) ;
              }
            }
            break ;
          case GGS_bddType::Enumeration::enum_boolArray:
            {
              GGS_uint extractedValue_4214_size_0 ;
              extractedValue_4093_type_0.getAssociatedValuesFor_boolArray (extractedValue_4214_size_0) ;
              {
              GGS_recordDomainMap temp_4 = GGS_recordDomainMap::init (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 130)) ;
              outArgument_outDomainMap.setter_insertKey (enumerator_3988.current_mDomainName (HERE), extractedValue_4214_size_0, temp_4, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 130)) ;
              }
            }
            break ;
          case GGS_bddType::Enumeration::enum_namedType:
            {
              GGS_lstring extractedValue_4305_typeName_0 ;
              extractedValue_4093_type_0.getAssociatedValuesFor_namedType (extractedValue_4305_typeName_0) ;
              GGS_uint var_size_4365 ;
              GGS_recordDomainMap var_subdomain_4376 ;
              outArgument_outDomainMap.method_searchKey (extractedValue_4305_typeName_0, var_size_4365, var_subdomain_4376, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 132)) ;
              {
              outArgument_outDomainMap.setter_insertKey (enumerator_3988.current_mDomainName (HERE), var_size_4365, var_subdomain_4376, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 133)) ;
              }
            }
            break ;
          }
        }
        break ;
      case GGS_domainDeclarationType::Enumeration::enum_record:
        {
          GGS_domainFieldList extractedValue_4490_fieldList_0 ;
          enumerator_3988.current_mType (HERE).getAssociatedValuesFor_record (extractedValue_4490_fieldList_0) ;
          GGS_bigint var_bitIndex_4513 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("domain.ggs", 136)) ;
          GGS_recordDomainMap temp_5 = GGS_recordDomainMap::init (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 137)) ;
          GGS_recordDomainMap var_recordMap_4553 = temp_5 ;
          cEnumerator_domainFieldList enumerator_4587 (extractedValue_4490_fieldList_0, EnumerationOrder::down) ;
          bool bool_6 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("domain.ggs", 138)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
          if (enumerator_4587.hasCurrentObject () && bool_6) {
            while (enumerator_4587.hasCurrentObject () && bool_6) {
              switch (enumerator_4587.current_mType (HERE).enumValue ()) {
              case GGS_bddType::Enumeration::invalid:
                break ;
              case GGS_bddType::Enumeration::enum_bool:
                {
                  {
                  GGS_recordDomainMap temp_7 = GGS_recordDomainMap::init (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 141)) ;
                  var_recordMap_4553.setter_insertKey (enumerator_4587.current_mVarName (HERE), var_bitIndex_4513.getter_uint (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 141)), GGS_uint (uint32_t (1U)), temp_7, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 141)) ;
                  }
                  var_bitIndex_4513.plusAssign_operation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("domain.ggs", 142)), inCompiler  COMMA_SOURCE_FILE ("domain.ggs", 142)) ;
                }
                break ;
              case GGS_bddType::Enumeration::enum_boolArray:
                {
                  GGS_uint extractedValue_4810_size_0 ;
                  enumerator_4587.current_mType (HERE).getAssociatedValuesFor_boolArray (extractedValue_4810_size_0) ;
                  {
                  GGS_recordDomainMap temp_8 = GGS_recordDomainMap::init (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 144)) ;
                  var_recordMap_4553.setter_insertKey (enumerator_4587.current_mVarName (HERE), var_bitIndex_4513.getter_uint (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 144)), extractedValue_4810_size_0, temp_8, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 144)) ;
                  }
                  var_bitIndex_4513 = var_bitIndex_4513.add_operation (extractedValue_4810_size_0.getter_bigint (SOURCE_FILE ("domain.ggs", 145)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 145)) ;
                }
                break ;
              case GGS_bddType::Enumeration::enum_namedType:
                {
                  GGS_lstring extractedValue_4950_typeName_0 ;
                  enumerator_4587.current_mType (HERE).getAssociatedValuesFor_namedType (extractedValue_4950_typeName_0) ;
                  GGS_uint var_size_5012 ;
                  GGS_recordDomainMap var_subdomain_5023 ;
                  outArgument_outDomainMap.method_searchKey (extractedValue_4950_typeName_0, var_size_5012, var_subdomain_5023, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 147)) ;
                  {
                  var_recordMap_4553.setter_insertKey (enumerator_4587.current_mVarName (HERE), var_bitIndex_4513.getter_uint (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 148)), var_size_5012, var_subdomain_5023, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 148)) ;
                  }
                  var_bitIndex_4513 = var_bitIndex_4513.add_operation (var_size_5012.getter_bigint (SOURCE_FILE ("domain.ggs", 149)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 149)) ;
                }
                break ;
              }
              enumerator_4587.gotoNextObject () ;
              if (enumerator_4587.hasCurrentObject ()) {
                bool_6 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("domain.ggs", 138)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
              }
            }
          }
          {
          outArgument_outDomainMap.setter_insertKey (enumerator_3988.current_mDomainName (HERE), var_bitIndex_4513.getter_uint (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 152)), var_recordMap_4553, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 152)) ;
          }
        }
        break ;
      }
      enumerator_3988.gotoNextObject () ;
      if (enumerator_3988.hasCurrentObject ()) {
        bool_2 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("domain.ggs", 123)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Class for element of '@varList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_varList : public cCollectionElement {
  public: GGS_varList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_varList (const GGS_string & in_mVarName,
                                      const GGS_uint & in_mBitIndex,
                                      const GGS_uint & in_mBitCount
                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_varList (const GGS_varList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_varList::cCollectionElement_varList (const GGS_string & in_mVarName,
                                                        const GGS_uint & in_mBitIndex,
                                                        const GGS_uint & in_mBitCount
                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mVarName, in_mBitIndex, in_mBitCount) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_varList::cCollectionElement_varList (const GGS_varList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mVarName, inElement.mProperty_mBitIndex, inElement.mProperty_mBitCount) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_varList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_varList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_varList (mObject.mProperty_mVarName, mObject.mProperty_mBitIndex, mObject.mProperty_mBitCount COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_varList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mVarName" ":") ;
  mObject.mProperty_mVarName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBitIndex" ":") ;
  mObject.mProperty_mBitIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBitCount" ":") ;
  mObject.mProperty_mBitCount.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_varList::GGS_varList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_varList::GGS_varList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_varList GGS_varList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_varList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_varList GGS_varList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_varList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::enterElement (const GGS_varList_2E_element & inValue,
                                Compiler * /* inCompiler */
                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_varList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_varList GGS_varList::class_func_listWithValue (const GGS_string & inOperand0,
                                                   const GGS_uint & inOperand1,
                                                   const GGS_uint & inOperand2
                                                   COMMA_LOCATION_ARGS) {
  GGS_varList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_varList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_varList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                             const GGS_string & in_mVarName,
                                             const GGS_uint & in_mBitIndex,
                                             const GGS_uint & in_mBitCount
                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_varList * p = nullptr ;
  macroMyNew (p, cCollectionElement_varList (in_mVarName,
                                             in_mBitIndex,
                                             in_mBitCount COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::addAssign_operation (const GGS_string & inOperand0,
                                       const GGS_uint & inOperand1,
                                       const GGS_uint & inOperand2
                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_varList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::setter_append (const GGS_string inOperand0,
                                 const GGS_uint inOperand1,
                                 const GGS_uint inOperand2,
                                 Compiler * /* inCompiler */
                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_varList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::setter_insertAtIndex (const GGS_string inOperand0,
                                        const GGS_uint inOperand1,
                                        const GGS_uint inOperand2,
                                        const GGS_uint inInsertionIndex,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_varList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::setter_removeAtIndex (GGS_string & outOperand0,
                                        GGS_uint & outOperand1,
                                        GGS_uint & outOperand2,
                                        const GGS_uint inRemoveIndex,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_varList) ;
      outOperand0 = p->mObject.mProperty_mVarName ;
      outOperand1 = p->mObject.mProperty_mBitIndex ;
      outOperand2 = p->mObject.mProperty_mBitCount ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::setter_popFirst (GGS_string & outOperand0,
                                   GGS_uint & outOperand1,
                                   GGS_uint & outOperand2,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_varList) ;
    outOperand0 = p->mObject.mProperty_mVarName ;
    outOperand1 = p->mObject.mProperty_mBitIndex ;
    outOperand2 = p->mObject.mProperty_mBitCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::setter_popLast (GGS_string & outOperand0,
                                  GGS_uint & outOperand1,
                                  GGS_uint & outOperand2,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_varList) ;
    outOperand0 = p->mObject.mProperty_mVarName ;
    outOperand1 = p->mObject.mProperty_mBitIndex ;
    outOperand2 = p->mObject.mProperty_mBitCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::method_first (GGS_string & outOperand0,
                                GGS_uint & outOperand1,
                                GGS_uint & outOperand2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_varList) ;
    outOperand0 = p->mObject.mProperty_mVarName ;
    outOperand1 = p->mObject.mProperty_mBitIndex ;
    outOperand2 = p->mObject.mProperty_mBitCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::method_last (GGS_string & outOperand0,
                               GGS_uint & outOperand1,
                               GGS_uint & outOperand2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_varList) ;
    outOperand0 = p->mObject.mProperty_mVarName ;
    outOperand1 = p->mObject.mProperty_mBitIndex ;
    outOperand2 = p->mObject.mProperty_mBitCount ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_varList GGS_varList::add_operation (const GGS_varList & inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_varList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varList GGS_varList::getter_subListWithRange (const GGS_range & inRange,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_varList result = GGS_varList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varList GGS_varList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_varList result = GGS_varList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varList GGS_varList::getter_subListToIndex (const GGS_uint & inIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_varList result = GGS_varList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::plusAssign_operation (const GGS_varList inOperand,
                                        Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::setter_setMVarNameAtIndex (GGS_string inOperand,
                                              GGS_uint inIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_varList * p = (cCollectionElement_varList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mVarName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_varList::getter_mVarNameAtIndex (const GGS_uint & inIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    result = p->mObject.mProperty_mVarName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::setter_setMBitIndexAtIndex (GGS_uint inOperand,
                                              GGS_uint inIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_varList * p = (cCollectionElement_varList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBitIndex = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_varList::getter_mBitIndexAtIndex (const GGS_uint & inIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    result = p->mObject.mProperty_mBitIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::setter_setMBitCountAtIndex (GGS_uint inOperand,
                                              GGS_uint inIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_varList * p = (cCollectionElement_varList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBitCount = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_varList::getter_mBitCountAtIndex (const GGS_uint & inIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    result = p->mObject.mProperty_mBitCount ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_varList::cEnumerator_varList (const GGS_varList & inEnumeratedObject,
                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_varList_2E_element cEnumerator_varList::current (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string cEnumerator_varList::current_mVarName (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_varList::current_mBitIndex (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mBitIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_varList::current_mBitCount (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mBitCount ;
}




//--------------------------------------------------------------------------------------------------
//
//     @varList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varList ("varList",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_varList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varList GGS_varList::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_varList result ;
  const GGS_varList * p = (const GGS_varList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_varMap::cMapElement_varMap (const GGS_varMap_2E_element & inValue
                                        COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mIndex (inValue.mProperty_mIndex),
mProperty_mBitCount (inValue.mProperty_mBitCount),
mProperty_mRecordDomainMap (inValue.mProperty_mRecordDomainMap) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_varMap::cMapElement_varMap (const GGS_lstring & inKey,
                                        const GGS_uint & in_mIndex,
                                        const GGS_uint & in_mBitCount,
                                        const GGS_recordDomainMap & in_mRecordDomainMap
                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex),
mProperty_mBitCount (in_mBitCount),
mProperty_mRecordDomainMap (in_mRecordDomainMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_varMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_varMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_varMap (mProperty_lkey, mProperty_mIndex, mProperty_mBitCount, mProperty_mRecordDomainMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_varMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIndex" ":") ;
  mProperty_mIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBitCount" ":") ;
  mProperty_mBitCount.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRecordDomainMap" ":") ;
  mProperty_mRecordDomainMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_varMap::GGS_varMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_varMap::GGS_varMap (const GGS_varMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_varMap & GGS_varMap::operator = (const GGS_varMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_varMap GGS_varMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_varMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varMap GGS_varMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_varMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varMap_2E_element_3F_ GGS_varMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_varMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_varMap * p = (cMapElement_varMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_varMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_varMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mIndex = p->mProperty_mIndex ;
      element.mProperty_mBitCount = p->mProperty_mBitCount ;
      element.mProperty_mRecordDomainMap = p->mProperty_mRecordDomainMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varMap GGS_varMap::class_func_mapWithMapToOverride (const GGS_varMap & inMapToOverride
                                                        COMMA_LOCATION_ARGS) {
  GGS_varMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varMap GGS_varMap::getter_overriddenMap (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  GGS_varMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varMap::enterElement (const GGS_varMap_2E_element & inValue,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) {
  cMapElement_varMap * p = nullptr ;
  macroMyNew (p, cMapElement_varMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@varMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varMap::addAssign_operation (const GGS_lstring & inKey,
                                      const GGS_uint & inArgument0,
                                      const GGS_uint & inArgument1,
                                      const GGS_recordDomainMap & inArgument2,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cMapElement_varMap * p = nullptr ;
  macroMyNew (p, cMapElement_varMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@varMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_varMap GGS_varMap::add_operation (const GGS_varMap & inOperand,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  GGS_varMap result = *this ;
  cEnumerator_varMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIndex (HERE), enumerator.current_mBitCount (HERE), enumerator.current_mRecordDomainMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varMap::setter_insertKey (GGS_lstring inKey,
                                   GGS_uint inArgument0,
                                   GGS_uint inArgument1,
                                   GGS_recordDomainMap inArgument2,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  cMapElement_varMap * p = nullptr ;
  macroMyNew (p, cMapElement_varMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' variable is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_varMap_searchKey = "there is no '%K' variable" ;

//--------------------------------------------------------------------------------------------------

void GGS_varMap::method_searchKey (GGS_lstring inKey,
                                   GGS_uint & outArgument0,
                                   GGS_uint & outArgument1,
                                   GGS_recordDomainMap & outArgument2,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) performSearch (inKey,
                                                                             inCompiler,
                                                                             kSearchErrorMessage_varMap_searchKey
                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_varMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mBitCount ;
    outArgument2 = p->mProperty_mRecordDomainMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_varMap::getter_mIndexForKey (const GGS_string & inKey,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_varMap * p = (const cMapElement_varMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_varMap::getter_mBitCountForKey (const GGS_string & inKey,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_varMap * p = (const cMapElement_varMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    result = p->mProperty_mBitCount ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap GGS_varMap::getter_mRecordDomainMapForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_varMap * p = (const cMapElement_varMap *) attributes ;
  GGS_recordDomainMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    result = p->mProperty_mRecordDomainMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varMap::setter_setMIndexForKey (GGS_uint inAttributeValue,
                                         GGS_string inKey,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_varMap * p = (cMapElement_varMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varMap::setter_setMBitCountForKey (GGS_uint inAttributeValue,
                                            GGS_string inKey,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_varMap * p = (cMapElement_varMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    p->mProperty_mBitCount = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varMap::setter_setMRecordDomainMapForKey (GGS_recordDomainMap inAttributeValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_varMap * p = (cMapElement_varMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    p->mProperty_mRecordDomainMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_varMap * GGS_varMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                    const GGS_string & inKey
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_varMap * result = (cMapElement_varMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_varMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_varMap::cEnumerator_varMap (const GGS_varMap & inEnumeratedObject,
                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_varMap_2E_element cEnumerator_varMap::current (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return GGS_varMap_2E_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mBitCount, p->mProperty_mRecordDomainMap) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_varMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_varMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_varMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mBitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap cEnumerator_varMap::current_mRecordDomainMap (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mRecordDomainMap ;
}

//--------------------------------------------------------------------------------------------------
//
//     @varMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varMap ("varMap",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_varMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varMap GGS_varMap::extractObject (const GGS_object & inObject,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GGS_varMap result ;
  const GGS_varMap * p = (const GGS_varMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@domainFieldList analyze'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyze (const GGS_domainFieldList inObject,
                              const GGS_domainMap constinArgument_inDomainMap,
                              GGS_varMap & ioArgument_ioVarMap,
                              GGS_varList & ioArgument_ioVarList,
                              GGS_uint & ioArgument_ioTotalBitCount,
                              Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_domainFieldList temp_0 = inObject ;
  cEnumerator_domainFieldList enumerator_6324 (temp_0, EnumerationOrder::down) ;
  while (enumerator_6324.hasCurrentObject ()) {
    switch (enumerator_6324.current_mType (HERE).enumValue ()) {
    case GGS_bddType::Enumeration::invalid:
      break ;
    case GGS_bddType::Enumeration::enum_bool:
      {
        {
        GGS_recordDomainMap temp_1 = GGS_recordDomainMap::init (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 189)) ;
        ioArgument_ioVarMap.setter_insertKey (enumerator_6324.current_mVarName (HERE), ioArgument_ioTotalBitCount, GGS_uint (uint32_t (1U)), temp_1, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 189)) ;
        }
        {
        ioArgument_ioVarList.setter_insertAtIndex (enumerator_6324.current_mVarName (HERE).readProperty_string (), ioArgument_ioTotalBitCount, GGS_uint (uint32_t (1U)), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 190)) ;
        }
        ioArgument_ioTotalBitCount.plusAssign_operation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("domain.ggs", 191)) ;
      }
      break ;
    case GGS_bddType::Enumeration::enum_boolArray:
      {
        GGS_uint extractedValue_6557_size_0 ;
        enumerator_6324.current_mType (HERE).getAssociatedValuesFor_boolArray (extractedValue_6557_size_0) ;
        {
        GGS_recordDomainMap temp_2 = GGS_recordDomainMap::init (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 193)) ;
        ioArgument_ioVarMap.setter_insertKey (enumerator_6324.current_mVarName (HERE), ioArgument_ioTotalBitCount, extractedValue_6557_size_0, temp_2, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 193)) ;
        }
        {
        ioArgument_ioVarList.setter_insertAtIndex (enumerator_6324.current_mVarName (HERE).readProperty_string (), ioArgument_ioTotalBitCount, extractedValue_6557_size_0, GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 194)) ;
        }
        ioArgument_ioTotalBitCount = ioArgument_ioTotalBitCount.add_operation (extractedValue_6557_size_0, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 195)) ;
      }
      break ;
    case GGS_bddType::Enumeration::enum_namedType:
      {
        GGS_lstring extractedValue_6778_typeName_0 ;
        enumerator_6324.current_mType (HERE).getAssociatedValuesFor_namedType (extractedValue_6778_typeName_0) ;
        GGS_uint var_size_6835 ;
        GGS_recordDomainMap var_subDomainMap_6846 ;
        constinArgument_inDomainMap.method_searchKey (extractedValue_6778_typeName_0, var_size_6835, var_subDomainMap_6846, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 197)) ;
        {
        ioArgument_ioVarMap.setter_insertKey (enumerator_6324.current_mVarName (HERE), ioArgument_ioTotalBitCount, var_size_6835, var_subDomainMap_6846, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 198)) ;
        }
        {
        ioArgument_ioVarList.setter_insertAtIndex (enumerator_6324.current_mVarName (HERE).readProperty_string (), ioArgument_ioTotalBitCount, var_size_6835, GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 199)) ;
        }
        ioArgument_ioTotalBitCount = ioArgument_ioTotalBitCount.add_operation (var_size_6835, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 200)) ;
      }
      break ;
    }
    enumerator_6324.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//  Enum formulaKind
//--------------------------------------------------------------------------------------------------

GGS_formulaKind::GGS_formulaKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_formulaKind GGS_formulaKind::class_func_assignment (UNUSED_LOCATION_ARGS) {
  GGS_formulaKind result ;
  result.mEnum = Enumeration::enum_assignment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaKind GGS_formulaKind::class_func_fixedPoint (const GGS_binaryset & inAssociatedValue0
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formulaKind result ;
  result.mEnum = Enumeration::enum_fixedPoint ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_formulaKind_2E_fixedPoint (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaKind::method_extractFixedPoint (GGS_binaryset & outAssociatedValue_startValue,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fixedPoint) {
    outAssociatedValue_startValue.drop () ;
    String s ;
    s.appendCString ("method @formulaKind.fixedPoint invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_formulaKind_2E_fixedPoint *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_startValue = ptr->mProperty_startValue ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_formulaKind_2E_fixedPoint_3F_ GGS_formulaKind::getter_getFixedPoint (UNUSED_LOCATION_ARGS) const {
  GGS_formulaKind_2E_fixedPoint_3F_ result ;
  if (mEnum == Enumeration::enum_fixedPoint) {
    const auto ptr = (const GGS_formulaKind_2E_fixedPoint *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_formulaKind_2E_fixedPoint (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaKind::getAssociatedValuesFor_fixedPoint (GGS_binaryset & out_startValue) const {
  const auto ptr = (const GGS_formulaKind_2E_fixedPoint *) mAssociatedValues.associatedValuesPointer () ;
  out_startValue = ptr->mProperty_startValue ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_formulaKind [3] = {
  "(not built)",
  "assignment",
  "fixedPoint"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_formulaKind::getter_isAssignment (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_assignment == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_formulaKind::getter_isFixedPoint (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixedPoint == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaKind::description (String & ioString,
                                   const int32_t inIndentation) const {
  ioString.appendCString ("<enum @formulaKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_formulaKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @formulaKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaKind ("formulaKind",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_formulaKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formulaKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formulaKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaKind GGS_formulaKind::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_formulaKind result ;
  const GGS_formulaKind * p = (const GGS_formulaKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formulaKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractFormula reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractFormula::objectCompare (const GGS_abstractFormula & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFormula::GGS_abstractFormula (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFormula::GGS_abstractFormula (const cPtr_abstractFormula * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractFormula) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractFormula class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractFormula::cPtr_abstractFormula (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractFormula::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @abstractFormula generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractFormula ("abstractFormula",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractFormula::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractFormula ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractFormula::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractFormula (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFormula GGS_abstractFormula::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractFormula result ;
  const GGS_abstractFormula * p = (const GGS_abstractFormula *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractFormula *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractFormula", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @expression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_expression::objectCompare (const GGS_expression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expression::GGS_expression (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_expression::GGS_expression (const cPtr_expression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expression) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @expression class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_expression::cPtr_expression (Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_expression::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @expression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expression ("expression",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_expression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_expression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_expression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expression GGS_expression::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_expression result ;
  const GGS_expression * p = (const GGS_expression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_expression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractFormula_2E_weak::objectCompare (const GGS_abstractFormula_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFormula_2E_weak::GGS_abstractFormula_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFormula_2E_weak & GGS_abstractFormula_2E_weak::operator = (const GGS_abstractFormula & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFormula_2E_weak::GGS_abstractFormula_2E_weak (const GGS_abstractFormula & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractFormula_2E_weak GGS_abstractFormula_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractFormula_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFormula GGS_abstractFormula_2E_weak::bang_abstractFormula_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractFormula result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractFormula) ;
      result = GGS_abstractFormula ((cPtr_abstractFormula *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractFormula.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractFormula_2E_weak ("abstractFormula.weak",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractFormula_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractFormula_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractFormula_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractFormula_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFormula_2E_weak GGS_abstractFormula_2E_weak::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractFormula_2E_weak result ;
  const GGS_abstractFormula_2E_weak * p = (const GGS_abstractFormula_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractFormula_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractFormula.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_computedFormulaMap::cMapElement_computedFormulaMap (const GGS_computedFormulaMap_2E_element & inValue
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mVarList (inValue.mProperty_mVarList),
mProperty_mBitCount (inValue.mProperty_mBitCount),
mProperty_mValue (inValue.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_computedFormulaMap::cMapElement_computedFormulaMap (const GGS_lstring & inKey,
                                                                const GGS_varList & in_mVarList,
                                                                const GGS_uint & in_mBitCount,
                                                                const GGS_binaryset & in_mValue
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mVarList (in_mVarList),
mProperty_mBitCount (in_mBitCount),
mProperty_mValue (in_mValue) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_computedFormulaMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_computedFormulaMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_computedFormulaMap (mProperty_lkey, mProperty_mVarList, mProperty_mBitCount, mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_computedFormulaMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mVarList" ":") ;
  mProperty_mVarList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBitCount" ":") ;
  mProperty_mBitCount.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mValue" ":") ;
  mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap::GGS_computedFormulaMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap::GGS_computedFormulaMap (const GGS_computedFormulaMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap & GGS_computedFormulaMap::operator = (const GGS_computedFormulaMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap GGS_computedFormulaMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_computedFormulaMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap GGS_computedFormulaMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_computedFormulaMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap_2E_element_3F_ GGS_computedFormulaMap
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_computedFormulaMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_computedFormulaMap * p = (cMapElement_computedFormulaMap *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_computedFormulaMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_computedFormulaMap_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mVarList = p->mProperty_mVarList ;
      element.mProperty_mBitCount = p->mProperty_mBitCount ;
      element.mProperty_mValue = p->mProperty_mValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap GGS_computedFormulaMap::class_func_mapWithMapToOverride (const GGS_computedFormulaMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_computedFormulaMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap GGS_computedFormulaMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_computedFormulaMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap::enterElement (const GGS_computedFormulaMap_2E_element & inValue,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  cMapElement_computedFormulaMap * p = nullptr ;
  macroMyNew (p, cMapElement_computedFormulaMap (inValue COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@computedFormulaMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap::addAssign_operation (const GGS_lstring & inKey,
                                                  const GGS_varList & inArgument0,
                                                  const GGS_uint & inArgument1,
                                                  const GGS_binaryset & inArgument2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_computedFormulaMap * p = nullptr ;
  macroMyNew (p, cMapElement_computedFormulaMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@computedFormulaMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap GGS_computedFormulaMap::add_operation (const GGS_computedFormulaMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_computedFormulaMap result = *this ;
  cEnumerator_computedFormulaMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mVarList (HERE), enumerator.current_mBitCount (HERE), enumerator.current_mValue (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap::setter_insertKey (GGS_lstring inKey,
                                               GGS_varList inArgument0,
                                               GGS_uint inArgument1,
                                               GGS_binaryset inArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_computedFormulaMap * p = nullptr ;
  macroMyNew (p, cMapElement_computedFormulaMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' formula is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_computedFormulaMap_searchKey = "there is no '%K' formula" ;

//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap::method_searchKey (GGS_lstring inKey,
                                               GGS_varList & outArgument0,
                                               GGS_uint & outArgument1,
                                               GGS_binaryset & outArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_computedFormulaMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    outArgument0 = p->mProperty_mVarList ;
    outArgument1 = p->mProperty_mBitCount ;
    outArgument2 = p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_varList GGS_computedFormulaMap::getter_mVarListForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) attributes ;
  GGS_varList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    result = p->mProperty_mVarList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_computedFormulaMap::getter_mBitCountForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    result = p->mProperty_mBitCount ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_computedFormulaMap::getter_mValueForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) attributes ;
  GGS_binaryset result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap::setter_setMVarListForKey (GGS_varList inAttributeValue,
                                                       GGS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_computedFormulaMap * p = (cMapElement_computedFormulaMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    p->mProperty_mVarList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap::setter_setMBitCountForKey (GGS_uint inAttributeValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_computedFormulaMap * p = (cMapElement_computedFormulaMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    p->mProperty_mBitCount = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap::setter_setMValueForKey (GGS_binaryset inAttributeValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_computedFormulaMap * p = (cMapElement_computedFormulaMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    p->mProperty_mValue = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_computedFormulaMap * GGS_computedFormulaMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                            const GGS_string & inKey
                                                                                            COMMA_LOCATION_ARGS) {
  cMapElement_computedFormulaMap * result = (cMapElement_computedFormulaMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_computedFormulaMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_computedFormulaMap::cEnumerator_computedFormulaMap (const GGS_computedFormulaMap & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap_2E_element cEnumerator_computedFormulaMap::current (LOCATION_ARGS) const {
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
  return GGS_computedFormulaMap_2E_element (p->mProperty_lkey, p->mProperty_mVarList, p->mProperty_mBitCount, p->mProperty_mValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_computedFormulaMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_varList cEnumerator_computedFormulaMap::current_mVarList (LOCATION_ARGS) const {
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
  return p->mProperty_mVarList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint cEnumerator_computedFormulaMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
  return p->mProperty_mBitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset cEnumerator_computedFormulaMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
  return p->mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------
//
//     @computedFormulaMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedFormulaMap ("computedFormulaMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_computedFormulaMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedFormulaMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedFormulaMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedFormulaMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap GGS_computedFormulaMap::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_computedFormulaMap result ;
  const GGS_computedFormulaMap * p = (const GGS_computedFormulaMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedFormulaMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedFormulaMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_setting_5F_nodeHashMapSize_2E_weak::objectCompare (const GGS_setting_5F_nodeHashMapSize_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setting_5F_nodeHashMapSize_2E_weak::GGS_setting_5F_nodeHashMapSize_2E_weak (void) :
GGS_abstractFormula_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_setting_5F_nodeHashMapSize_2E_weak & GGS_setting_5F_nodeHashMapSize_2E_weak::operator = (const GGS_setting_5F_nodeHashMapSize & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_setting_5F_nodeHashMapSize_2E_weak::GGS_setting_5F_nodeHashMapSize_2E_weak (const GGS_setting_5F_nodeHashMapSize & inSource) :
GGS_abstractFormula_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_setting_5F_nodeHashMapSize_2E_weak GGS_setting_5F_nodeHashMapSize_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_setting_5F_nodeHashMapSize_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setting_5F_nodeHashMapSize GGS_setting_5F_nodeHashMapSize_2E_weak::bang_setting_5F_nodeHashMapSize_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_setting_5F_nodeHashMapSize result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_setting_5F_nodeHashMapSize) ;
      result = GGS_setting_5F_nodeHashMapSize ((cPtr_setting_5F_nodeHashMapSize *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @setting_nodeHashMapSize.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize_2E_weak ("setting_nodeHashMapSize.weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractFormula_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_setting_5F_nodeHashMapSize_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_setting_5F_nodeHashMapSize_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_setting_5F_nodeHashMapSize_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setting_5F_nodeHashMapSize_2E_weak GGS_setting_5F_nodeHashMapSize_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_setting_5F_nodeHashMapSize_2E_weak result ;
  const GGS_setting_5F_nodeHashMapSize_2E_weak * p = (const GGS_setting_5F_nodeHashMapSize_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_setting_5F_nodeHashMapSize_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setting_nodeHashMapSize.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_setting_5F_andCacheMapSize_2E_weak::objectCompare (const GGS_setting_5F_andCacheMapSize_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setting_5F_andCacheMapSize_2E_weak::GGS_setting_5F_andCacheMapSize_2E_weak (void) :
GGS_abstractFormula_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_setting_5F_andCacheMapSize_2E_weak & GGS_setting_5F_andCacheMapSize_2E_weak::operator = (const GGS_setting_5F_andCacheMapSize & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_setting_5F_andCacheMapSize_2E_weak::GGS_setting_5F_andCacheMapSize_2E_weak (const GGS_setting_5F_andCacheMapSize & inSource) :
GGS_abstractFormula_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_setting_5F_andCacheMapSize_2E_weak GGS_setting_5F_andCacheMapSize_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_setting_5F_andCacheMapSize_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setting_5F_andCacheMapSize GGS_setting_5F_andCacheMapSize_2E_weak::bang_setting_5F_andCacheMapSize_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_setting_5F_andCacheMapSize result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_setting_5F_andCacheMapSize) ;
      result = GGS_setting_5F_andCacheMapSize ((cPtr_setting_5F_andCacheMapSize *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @setting_andCacheMapSize.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize_2E_weak ("setting_andCacheMapSize.weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractFormula_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_setting_5F_andCacheMapSize_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_setting_5F_andCacheMapSize_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_setting_5F_andCacheMapSize_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setting_5F_andCacheMapSize_2E_weak GGS_setting_5F_andCacheMapSize_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_setting_5F_andCacheMapSize_2E_weak result ;
  const GGS_setting_5F_andCacheMapSize_2E_weak * p = (const GGS_setting_5F_andCacheMapSize_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_setting_5F_andCacheMapSize_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setting_andCacheMapSize.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dumpFormula_2E_weak::objectCompare (const GGS_dumpFormula_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dumpFormula_2E_weak::GGS_dumpFormula_2E_weak (void) :
GGS_abstractFormula_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dumpFormula_2E_weak & GGS_dumpFormula_2E_weak::operator = (const GGS_dumpFormula & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dumpFormula_2E_weak::GGS_dumpFormula_2E_weak (const GGS_dumpFormula & inSource) :
GGS_abstractFormula_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dumpFormula_2E_weak GGS_dumpFormula_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dumpFormula_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dumpFormula GGS_dumpFormula_2E_weak::bang_dumpFormula_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dumpFormula result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dumpFormula) ;
      result = GGS_dumpFormula ((cPtr_dumpFormula *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @dumpFormula.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dumpFormula_2E_weak ("dumpFormula.weak",
                                                                           & kTypeDescriptor_GALGAS_abstractFormula_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_dumpFormula_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dumpFormula_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dumpFormula_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dumpFormula_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dumpFormula_2E_weak GGS_dumpFormula_2E_weak::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_dumpFormula_2E_weak result ;
  const GGS_dumpFormula_2E_weak * p = (const GGS_dumpFormula_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dumpFormula_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dumpFormula.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_graphvizFormula_2E_weak::objectCompare (const GGS_graphvizFormula_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphvizFormula_2E_weak::GGS_graphvizFormula_2E_weak (void) :
GGS_abstractFormula_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_graphvizFormula_2E_weak & GGS_graphvizFormula_2E_weak::operator = (const GGS_graphvizFormula & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphvizFormula_2E_weak::GGS_graphvizFormula_2E_weak (const GGS_graphvizFormula & inSource) :
GGS_abstractFormula_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_graphvizFormula_2E_weak GGS_graphvizFormula_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_graphvizFormula_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphvizFormula GGS_graphvizFormula_2E_weak::bang_graphvizFormula_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_graphvizFormula result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_graphvizFormula) ;
      result = GGS_graphvizFormula ((cPtr_graphvizFormula *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @graphvizFormula.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphvizFormula_2E_weak ("graphvizFormula.weak",
                                                                               & kTypeDescriptor_GALGAS_abstractFormula_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_graphvizFormula_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphvizFormula_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_graphvizFormula_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_graphvizFormula_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphvizFormula_2E_weak GGS_graphvizFormula_2E_weak::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_graphvizFormula_2E_weak result ;
  const GGS_graphvizFormula_2E_weak * p = (const GGS_graphvizFormula_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_graphvizFormula_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphvizFormula.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_expression_2E_weak::objectCompare (const GGS_expression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expression_2E_weak::GGS_expression_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_expression_2E_weak & GGS_expression_2E_weak::operator = (const GGS_expression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_expression_2E_weak::GGS_expression_2E_weak (const GGS_expression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_expression_2E_weak GGS_expression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_expression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expression GGS_expression_2E_weak::bang_expression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_expression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_expression) ;
      result = GGS_expression ((cPtr_expression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @expression.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expression_2E_weak ("expression.weak",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_expression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_expression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_expression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expression_2E_weak GGS_expression_2E_weak::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_expression_2E_weak result ;
  const GGS_expression_2E_weak * p = (const GGS_expression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_expression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_varInExpression_2E_weak::objectCompare (const GGS_varInExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpression_2E_weak::GGS_varInExpression_2E_weak (void) :
GGS_expression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpression_2E_weak & GGS_varInExpression_2E_weak::operator = (const GGS_varInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpression_2E_weak::GGS_varInExpression_2E_weak (const GGS_varInExpression & inSource) :
GGS_expression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_varInExpression_2E_weak GGS_varInExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_varInExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpression GGS_varInExpression_2E_weak::bang_varInExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_varInExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_varInExpression) ;
      result = GGS_varInExpression ((cPtr_varInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @varInExpression.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpression_2E_weak ("varInExpression.weak",
                                                                               & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_varInExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varInExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varInExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpression_2E_weak GGS_varInExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_varInExpression_2E_weak result ;
  const GGS_varInExpression_2E_weak * p = (const GGS_varInExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varInExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_varBitInExpression_2E_weak::objectCompare (const GGS_varBitInExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varBitInExpression_2E_weak::GGS_varBitInExpression_2E_weak (void) :
GGS_expression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_varBitInExpression_2E_weak & GGS_varBitInExpression_2E_weak::operator = (const GGS_varBitInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_varBitInExpression_2E_weak::GGS_varBitInExpression_2E_weak (const GGS_varBitInExpression & inSource) :
GGS_expression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_varBitInExpression_2E_weak GGS_varBitInExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_varBitInExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varBitInExpression GGS_varBitInExpression_2E_weak::bang_varBitInExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_varBitInExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_varBitInExpression) ;
      result = GGS_varBitInExpression ((cPtr_varBitInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @varBitInExpression.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varBitInExpression_2E_weak ("varBitInExpression.weak",
                                                                                  & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_varBitInExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varBitInExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varBitInExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varBitInExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varBitInExpression_2E_weak GGS_varBitInExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_varBitInExpression_2E_weak result ;
  const GGS_varBitInExpression_2E_weak * p = (const GGS_varBitInExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varBitInExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varBitInExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @andExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andExpression::objectCompare (const GGS_andExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andExpression::GGS_andExpression (void) :
GGS_expression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_andExpression GGS_andExpression::
init_21__21_ (const GGS_expression & in_mLeftExpression,
              const GGS_expression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_andExpression * object = nullptr ;
  macroMyNew (object, cPtr_andExpression (inCompiler COMMA_THERE)) ;
  object->andExpression_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_andExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_andExpression::
andExpression_init_21__21_ (const GGS_expression & in_mLeftExpression,
                            const GGS_expression & in_mRightExpression,
                            Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_andExpression::GGS_andExpression (const cPtr_andExpression * inSourcePtr) :
GGS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_andExpression GGS_andExpression::class_func_new (const GGS_expression & in_mLeftExpression,
                                                     const GGS_expression & in_mRightExpression,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GGS_andExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_andExpression (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expression GGS_andExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expression () ;
  }else{
    cPtr_andExpression * p = (cPtr_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_andExpression::setProperty_mLeftExpression (const GGS_expression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_andExpression * p = (cPtr_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expression GGS_andExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expression () ;
  }else{
    cPtr_andExpression * p = (cPtr_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_andExpression::setProperty_mRightExpression (const GGS_expression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_andExpression * p = (cPtr_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @andExpression class
//--------------------------------------------------------------------------------------------------

cPtr_andExpression::cPtr_andExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_andExpression::cPtr_andExpression (const GGS_expression & in_mLeftExpression,
                                        const GGS_expression & in_mRightExpression,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpression ;
}

void cPtr_andExpression::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@andExpression:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_andExpression (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_andExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @andExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andExpression ("andExpression",
                                                                     & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_andExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_andExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_andExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andExpression GGS_andExpression::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_andExpression result ;
  const GGS_andExpression * p = (const GGS_andExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_andExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andExpression_2E_weak::objectCompare (const GGS_andExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andExpression_2E_weak::GGS_andExpression_2E_weak (void) :
GGS_expression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_andExpression_2E_weak & GGS_andExpression_2E_weak::operator = (const GGS_andExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_andExpression_2E_weak::GGS_andExpression_2E_weak (const GGS_andExpression & inSource) :
GGS_expression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_andExpression_2E_weak GGS_andExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_andExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andExpression GGS_andExpression_2E_weak::bang_andExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_andExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andExpression) ;
      result = GGS_andExpression ((cPtr_andExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @andExpression.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andExpression_2E_weak ("andExpression.weak",
                                                                             & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_andExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_andExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_andExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andExpression_2E_weak GGS_andExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_andExpression_2E_weak result ;
  const GGS_andExpression_2E_weak * p = (const GGS_andExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_andExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @orExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_orExpression::objectCompare (const GGS_orExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orExpression::GGS_orExpression (void) :
GGS_expression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_orExpression GGS_orExpression::
init_21__21_ (const GGS_expression & in_mLeftExpression,
              const GGS_expression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_orExpression * object = nullptr ;
  macroMyNew (object, cPtr_orExpression (inCompiler COMMA_THERE)) ;
  object->orExpression_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_orExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_orExpression::
orExpression_init_21__21_ (const GGS_expression & in_mLeftExpression,
                           const GGS_expression & in_mRightExpression,
                           Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_orExpression::GGS_orExpression (const cPtr_orExpression * inSourcePtr) :
GGS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_orExpression GGS_orExpression::class_func_new (const GGS_expression & in_mLeftExpression,
                                                   const GGS_expression & in_mRightExpression,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  GGS_orExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_orExpression (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expression GGS_orExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expression () ;
  }else{
    cPtr_orExpression * p = (cPtr_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_orExpression::setProperty_mLeftExpression (const GGS_expression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_orExpression * p = (cPtr_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expression GGS_orExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expression () ;
  }else{
    cPtr_orExpression * p = (cPtr_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_orExpression::setProperty_mRightExpression (const GGS_expression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_orExpression * p = (cPtr_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @orExpression class
//--------------------------------------------------------------------------------------------------

cPtr_orExpression::cPtr_orExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_orExpression::cPtr_orExpression (const GGS_expression & in_mLeftExpression,
                                      const GGS_expression & in_mRightExpression,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_orExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpression ;
}

void cPtr_orExpression::description (String & ioString,
                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@orExpression:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_orExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_orExpression (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_orExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @orExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orExpression ("orExpression",
                                                                    & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_orExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_orExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_orExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orExpression GGS_orExpression::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_orExpression result ;
  const GGS_orExpression * p = (const GGS_orExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_orExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_orExpression_2E_weak::objectCompare (const GGS_orExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orExpression_2E_weak::GGS_orExpression_2E_weak (void) :
GGS_expression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_orExpression_2E_weak & GGS_orExpression_2E_weak::operator = (const GGS_orExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_orExpression_2E_weak::GGS_orExpression_2E_weak (const GGS_orExpression & inSource) :
GGS_expression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_orExpression_2E_weak GGS_orExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_orExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orExpression GGS_orExpression_2E_weak::bang_orExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_orExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_orExpression) ;
      result = GGS_orExpression ((cPtr_orExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @orExpression.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orExpression_2E_weak ("orExpression.weak",
                                                                            & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_orExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_orExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_orExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orExpression_2E_weak GGS_orExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_orExpression_2E_weak result ;
  const GGS_orExpression_2E_weak * p = (const GGS_orExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_orExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @xorExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_xorExpression::objectCompare (const GGS_xorExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorExpression::GGS_xorExpression (void) :
GGS_expression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_xorExpression GGS_xorExpression::
init_21__21_ (const GGS_expression & in_mLeftExpression,
              const GGS_expression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_xorExpression * object = nullptr ;
  macroMyNew (object, cPtr_xorExpression (inCompiler COMMA_THERE)) ;
  object->xorExpression_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_xorExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_xorExpression::
xorExpression_init_21__21_ (const GGS_expression & in_mLeftExpression,
                            const GGS_expression & in_mRightExpression,
                            Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorExpression::GGS_xorExpression (const cPtr_xorExpression * inSourcePtr) :
GGS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_xorExpression GGS_xorExpression::class_func_new (const GGS_expression & in_mLeftExpression,
                                                     const GGS_expression & in_mRightExpression,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GGS_xorExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_xorExpression (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expression GGS_xorExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expression () ;
  }else{
    cPtr_xorExpression * p = (cPtr_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_xorExpression::setProperty_mLeftExpression (const GGS_expression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_xorExpression * p = (cPtr_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expression GGS_xorExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expression () ;
  }else{
    cPtr_xorExpression * p = (cPtr_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_xorExpression::setProperty_mRightExpression (const GGS_expression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_xorExpression * p = (cPtr_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @xorExpression class
//--------------------------------------------------------------------------------------------------

cPtr_xorExpression::cPtr_xorExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_xorExpression::cPtr_xorExpression (const GGS_expression & in_mLeftExpression,
                                        const GGS_expression & in_mRightExpression,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_xorExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpression ;
}

void cPtr_xorExpression::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@xorExpression:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_xorExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_xorExpression (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_xorExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @xorExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorExpression ("xorExpression",
                                                                     & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_xorExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_xorExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_xorExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorExpression GGS_xorExpression::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_xorExpression result ;
  const GGS_xorExpression * p = (const GGS_xorExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_xorExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_xorExpression_2E_weak::objectCompare (const GGS_xorExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorExpression_2E_weak::GGS_xorExpression_2E_weak (void) :
GGS_expression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_xorExpression_2E_weak & GGS_xorExpression_2E_weak::operator = (const GGS_xorExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorExpression_2E_weak::GGS_xorExpression_2E_weak (const GGS_xorExpression & inSource) :
GGS_expression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_xorExpression_2E_weak GGS_xorExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_xorExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorExpression GGS_xorExpression_2E_weak::bang_xorExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_xorExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_xorExpression) ;
      result = GGS_xorExpression ((cPtr_xorExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @xorExpression.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorExpression_2E_weak ("xorExpression.weak",
                                                                             & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_xorExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_xorExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_xorExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorExpression_2E_weak GGS_xorExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_xorExpression_2E_weak result ;
  const GGS_xorExpression_2E_weak * p = (const GGS_xorExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_xorExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @equalExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_equalExpression::objectCompare (const GGS_equalExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equalExpression::GGS_equalExpression (void) :
GGS_expression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_equalExpression GGS_equalExpression::
init_21__21_ (const GGS_expression & in_mLeftExpression,
              const GGS_expression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_equalExpression * object = nullptr ;
  macroMyNew (object, cPtr_equalExpression (inCompiler COMMA_THERE)) ;
  object->equalExpression_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_equalExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_equalExpression::
equalExpression_init_21__21_ (const GGS_expression & in_mLeftExpression,
                              const GGS_expression & in_mRightExpression,
                              Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_equalExpression::GGS_equalExpression (const cPtr_equalExpression * inSourcePtr) :
GGS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_equalExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_equalExpression GGS_equalExpression::class_func_new (const GGS_expression & in_mLeftExpression,
                                                         const GGS_expression & in_mRightExpression,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GGS_equalExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_equalExpression (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expression GGS_equalExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expression () ;
  }else{
    cPtr_equalExpression * p = (cPtr_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_equalExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_equalExpression::setProperty_mLeftExpression (const GGS_expression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_equalExpression * p = (cPtr_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_equalExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expression GGS_equalExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expression () ;
  }else{
    cPtr_equalExpression * p = (cPtr_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_equalExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_equalExpression::setProperty_mRightExpression (const GGS_expression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_equalExpression * p = (cPtr_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_equalExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @equalExpression class
//--------------------------------------------------------------------------------------------------

cPtr_equalExpression::cPtr_equalExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_equalExpression::cPtr_equalExpression (const GGS_expression & in_mLeftExpression,
                                            const GGS_expression & in_mRightExpression,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_equalExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equalExpression ;
}

void cPtr_equalExpression::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@equalExpression:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_equalExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_equalExpression (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_equalExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @equalExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equalExpression ("equalExpression",
                                                                       & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_equalExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equalExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_equalExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_equalExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equalExpression GGS_equalExpression::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_equalExpression result ;
  const GGS_equalExpression * p = (const GGS_equalExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_equalExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("equalExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_equalExpression_2E_weak::objectCompare (const GGS_equalExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equalExpression_2E_weak::GGS_equalExpression_2E_weak (void) :
GGS_expression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_equalExpression_2E_weak & GGS_equalExpression_2E_weak::operator = (const GGS_equalExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_equalExpression_2E_weak::GGS_equalExpression_2E_weak (const GGS_equalExpression & inSource) :
GGS_expression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_equalExpression_2E_weak GGS_equalExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_equalExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equalExpression GGS_equalExpression_2E_weak::bang_equalExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_equalExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_equalExpression) ;
      result = GGS_equalExpression ((cPtr_equalExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @equalExpression.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equalExpression_2E_weak ("equalExpression.weak",
                                                                               & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_equalExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equalExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_equalExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_equalExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equalExpression_2E_weak GGS_equalExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_equalExpression_2E_weak result ;
  const GGS_equalExpression_2E_weak * p = (const GGS_equalExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_equalExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("equalExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @notEqualExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_notEqualExpression::objectCompare (const GGS_notEqualExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_notEqualExpression::GGS_notEqualExpression (void) :
GGS_expression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_notEqualExpression GGS_notEqualExpression::
init_21__21_ (const GGS_expression & in_mLeftExpression,
              const GGS_expression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_notEqualExpression * object = nullptr ;
  macroMyNew (object, cPtr_notEqualExpression (inCompiler COMMA_THERE)) ;
  object->notEqualExpression_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_notEqualExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_notEqualExpression::
notEqualExpression_init_21__21_ (const GGS_expression & in_mLeftExpression,
                                 const GGS_expression & in_mRightExpression,
                                 Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_notEqualExpression::GGS_notEqualExpression (const cPtr_notEqualExpression * inSourcePtr) :
GGS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_notEqualExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_notEqualExpression GGS_notEqualExpression::class_func_new (const GGS_expression & in_mLeftExpression,
                                                               const GGS_expression & in_mRightExpression,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_notEqualExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_notEqualExpression (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expression GGS_notEqualExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expression () ;
  }else{
    cPtr_notEqualExpression * p = (cPtr_notEqualExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notEqualExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_notEqualExpression::setProperty_mLeftExpression (const GGS_expression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_notEqualExpression * p = (cPtr_notEqualExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notEqualExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expression GGS_notEqualExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expression () ;
  }else{
    cPtr_notEqualExpression * p = (cPtr_notEqualExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notEqualExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_notEqualExpression::setProperty_mRightExpression (const GGS_expression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_notEqualExpression * p = (cPtr_notEqualExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notEqualExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @notEqualExpression class
//--------------------------------------------------------------------------------------------------

cPtr_notEqualExpression::cPtr_notEqualExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_notEqualExpression::cPtr_notEqualExpression (const GGS_expression & in_mLeftExpression,
                                                  const GGS_expression & in_mRightExpression,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_notEqualExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notEqualExpression ;
}

void cPtr_notEqualExpression::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@notEqualExpression:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_notEqualExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_notEqualExpression (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_notEqualExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @notEqualExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notEqualExpression ("notEqualExpression",
                                                                          & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_notEqualExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notEqualExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_notEqualExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_notEqualExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_notEqualExpression GGS_notEqualExpression::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_notEqualExpression result ;
  const GGS_notEqualExpression * p = (const GGS_notEqualExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_notEqualExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("notEqualExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_notEqualExpression_2E_weak::objectCompare (const GGS_notEqualExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_notEqualExpression_2E_weak::GGS_notEqualExpression_2E_weak (void) :
GGS_expression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_notEqualExpression_2E_weak & GGS_notEqualExpression_2E_weak::operator = (const GGS_notEqualExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_notEqualExpression_2E_weak::GGS_notEqualExpression_2E_weak (const GGS_notEqualExpression & inSource) :
GGS_expression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_notEqualExpression_2E_weak GGS_notEqualExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_notEqualExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_notEqualExpression GGS_notEqualExpression_2E_weak::bang_notEqualExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_notEqualExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_notEqualExpression) ;
      result = GGS_notEqualExpression ((cPtr_notEqualExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @notEqualExpression.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notEqualExpression_2E_weak ("notEqualExpression.weak",
                                                                                  & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_notEqualExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notEqualExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_notEqualExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_notEqualExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_notEqualExpression_2E_weak GGS_notEqualExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_notEqualExpression_2E_weak result ;
  const GGS_notEqualExpression_2E_weak * p = (const GGS_notEqualExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_notEqualExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("notEqualExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @impliesExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_impliesExpression::objectCompare (const GGS_impliesExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_impliesExpression::GGS_impliesExpression (void) :
GGS_expression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_impliesExpression GGS_impliesExpression::
init_21__21_ (const GGS_expression & in_mLeftExpression,
              const GGS_expression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_impliesExpression * object = nullptr ;
  macroMyNew (object, cPtr_impliesExpression (inCompiler COMMA_THERE)) ;
  object->impliesExpression_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_impliesExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_impliesExpression::
impliesExpression_init_21__21_ (const GGS_expression & in_mLeftExpression,
                                const GGS_expression & in_mRightExpression,
                                Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_impliesExpression::GGS_impliesExpression (const cPtr_impliesExpression * inSourcePtr) :
GGS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_impliesExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_impliesExpression GGS_impliesExpression::class_func_new (const GGS_expression & in_mLeftExpression,
                                                             const GGS_expression & in_mRightExpression,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_impliesExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_impliesExpression (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expression GGS_impliesExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expression () ;
  }else{
    cPtr_impliesExpression * p = (cPtr_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impliesExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_impliesExpression::setProperty_mLeftExpression (const GGS_expression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_impliesExpression * p = (cPtr_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impliesExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expression GGS_impliesExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expression () ;
  }else{
    cPtr_impliesExpression * p = (cPtr_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impliesExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_impliesExpression::setProperty_mRightExpression (const GGS_expression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_impliesExpression * p = (cPtr_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impliesExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @impliesExpression class
//--------------------------------------------------------------------------------------------------

cPtr_impliesExpression::cPtr_impliesExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_impliesExpression::cPtr_impliesExpression (const GGS_expression & in_mLeftExpression,
                                                const GGS_expression & in_mRightExpression,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_impliesExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impliesExpression ;
}

void cPtr_impliesExpression::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@impliesExpression:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_impliesExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_impliesExpression (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_impliesExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @impliesExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_impliesExpression ("impliesExpression",
                                                                         & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_impliesExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impliesExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_impliesExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_impliesExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_impliesExpression GGS_impliesExpression::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_impliesExpression result ;
  const GGS_impliesExpression * p = (const GGS_impliesExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_impliesExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("impliesExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_impliesExpression_2E_weak::objectCompare (const GGS_impliesExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_impliesExpression_2E_weak::GGS_impliesExpression_2E_weak (void) :
GGS_expression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_impliesExpression_2E_weak & GGS_impliesExpression_2E_weak::operator = (const GGS_impliesExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_impliesExpression_2E_weak::GGS_impliesExpression_2E_weak (const GGS_impliesExpression & inSource) :
GGS_expression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_impliesExpression_2E_weak GGS_impliesExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_impliesExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_impliesExpression GGS_impliesExpression_2E_weak::bang_impliesExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_impliesExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_impliesExpression) ;
      result = GGS_impliesExpression ((cPtr_impliesExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @impliesExpression.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_impliesExpression_2E_weak ("impliesExpression.weak",
                                                                                 & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_impliesExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impliesExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_impliesExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_impliesExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_impliesExpression_2E_weak GGS_impliesExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_impliesExpression_2E_weak result ;
  const GGS_impliesExpression_2E_weak * p = (const GGS_impliesExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_impliesExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("impliesExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @complementExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_complementExpression::objectCompare (const GGS_complementExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_complementExpression::GGS_complementExpression (void) :
GGS_expression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_complementExpression GGS_complementExpression::
init_21_ (const GGS_expression & in_mExpression,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_complementExpression * object = nullptr ;
  macroMyNew (object, cPtr_complementExpression (inCompiler COMMA_THERE)) ;
  object->complementExpression_init_21_ (in_mExpression, inCompiler) ;
  const GGS_complementExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_complementExpression::
complementExpression_init_21_ (const GGS_expression & in_mExpression,
                               Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_complementExpression::GGS_complementExpression (const cPtr_complementExpression * inSourcePtr) :
GGS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_complementExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_complementExpression GGS_complementExpression::class_func_new (const GGS_expression & in_mExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_complementExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_complementExpression (in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expression GGS_complementExpression::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expression () ;
  }else{
    cPtr_complementExpression * p = (cPtr_complementExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_complementExpression) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_complementExpression::setProperty_mExpression (const GGS_expression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_complementExpression * p = (cPtr_complementExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_complementExpression) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @complementExpression class
//--------------------------------------------------------------------------------------------------

cPtr_complementExpression::cPtr_complementExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_complementExpression::cPtr_complementExpression (const GGS_expression & in_mExpression,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_complementExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complementExpression ;
}

void cPtr_complementExpression::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@complementExpression:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_complementExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_complementExpression (mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_complementExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @complementExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_complementExpression ("complementExpression",
                                                                            & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_complementExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complementExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_complementExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_complementExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_complementExpression GGS_complementExpression::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_complementExpression result ;
  const GGS_complementExpression * p = (const GGS_complementExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_complementExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("complementExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_complementExpression_2E_weak::objectCompare (const GGS_complementExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_complementExpression_2E_weak::GGS_complementExpression_2E_weak (void) :
GGS_expression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_complementExpression_2E_weak & GGS_complementExpression_2E_weak::operator = (const GGS_complementExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_complementExpression_2E_weak::GGS_complementExpression_2E_weak (const GGS_complementExpression & inSource) :
GGS_expression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_complementExpression_2E_weak GGS_complementExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_complementExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_complementExpression GGS_complementExpression_2E_weak::bang_complementExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_complementExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_complementExpression) ;
      result = GGS_complementExpression ((cPtr_complementExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @complementExpression.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_complementExpression_2E_weak ("complementExpression.weak",
                                                                                    & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_complementExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complementExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_complementExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_complementExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_complementExpression_2E_weak GGS_complementExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_complementExpression_2E_weak result ;
  const GGS_complementExpression_2E_weak * p = (const GGS_complementExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_complementExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("complementExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @trueExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_trueExpression::objectCompare (const GGS_trueExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpression::GGS_trueExpression (void) :
GGS_expression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_trueExpression GGS_trueExpression::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_trueExpression * object = nullptr ;
  macroMyNew (object, cPtr_trueExpression (inCompiler COMMA_THERE)) ;
  object->trueExpression_init (inCompiler) ;
  const GGS_trueExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_trueExpression::
trueExpression_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpression::GGS_trueExpression (const cPtr_trueExpression * inSourcePtr) :
GGS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_trueExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_trueExpression GGS_trueExpression::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_trueExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_trueExpression (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @trueExpression class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_trueExpression::cPtr_trueExpression (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_trueExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpression ;
}

void cPtr_trueExpression::description (String & ioString,
                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@trueExpression]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_trueExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_trueExpression (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_trueExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @trueExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpression ("trueExpression",
                                                                      & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_trueExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_trueExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_trueExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpression GGS_trueExpression::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_trueExpression result ;
  const GGS_trueExpression * p = (const GGS_trueExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_trueExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("trueExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_trueExpression_2E_weak::objectCompare (const GGS_trueExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpression_2E_weak::GGS_trueExpression_2E_weak (void) :
GGS_expression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpression_2E_weak & GGS_trueExpression_2E_weak::operator = (const GGS_trueExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpression_2E_weak::GGS_trueExpression_2E_weak (const GGS_trueExpression & inSource) :
GGS_expression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_trueExpression_2E_weak GGS_trueExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_trueExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpression GGS_trueExpression_2E_weak::bang_trueExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_trueExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_trueExpression) ;
      result = GGS_trueExpression ((cPtr_trueExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @trueExpression.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpression_2E_weak ("trueExpression.weak",
                                                                              & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_trueExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_trueExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_trueExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpression_2E_weak GGS_trueExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_trueExpression_2E_weak result ;
  const GGS_trueExpression_2E_weak * p = (const GGS_trueExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_trueExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("trueExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @falseExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_falseExpression::objectCompare (const GGS_falseExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpression::GGS_falseExpression (void) :
GGS_expression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_falseExpression GGS_falseExpression::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_falseExpression * object = nullptr ;
  macroMyNew (object, cPtr_falseExpression (inCompiler COMMA_THERE)) ;
  object->falseExpression_init (inCompiler) ;
  const GGS_falseExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_falseExpression::
falseExpression_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpression::GGS_falseExpression (const cPtr_falseExpression * inSourcePtr) :
GGS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_falseExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_falseExpression GGS_falseExpression::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_falseExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_falseExpression (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @falseExpression class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_falseExpression::cPtr_falseExpression (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_falseExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpression ;
}

void cPtr_falseExpression::description (String & ioString,
                                        const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@falseExpression]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_falseExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_falseExpression (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_falseExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @falseExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpression ("falseExpression",
                                                                       & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_falseExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_falseExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_falseExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpression GGS_falseExpression::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_falseExpression result ;
  const GGS_falseExpression * p = (const GGS_falseExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_falseExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("falseExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_falseExpression_2E_weak::objectCompare (const GGS_falseExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpression_2E_weak::GGS_falseExpression_2E_weak (void) :
GGS_expression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpression_2E_weak & GGS_falseExpression_2E_weak::operator = (const GGS_falseExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpression_2E_weak::GGS_falseExpression_2E_weak (const GGS_falseExpression & inSource) :
GGS_expression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_falseExpression_2E_weak GGS_falseExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_falseExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpression GGS_falseExpression_2E_weak::bang_falseExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_falseExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_falseExpression) ;
      result = GGS_falseExpression ((cPtr_falseExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @falseExpression.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpression_2E_weak ("falseExpression.weak",
                                                                               & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_falseExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_falseExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_falseExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpression_2E_weak GGS_falseExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_falseExpression_2E_weak result ;
  const GGS_falseExpression_2E_weak * p = (const GGS_falseExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_falseExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("falseExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@formulaParameterListInExpression' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_formulaParameterListInExpression : public cCollectionElement {
  public: GGS_formulaParameterListInExpression_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_formulaParameterListInExpression (const GGS_lstring & in_mParameterName,
                                                               const GGS_lstringlist & in_mFieldNames
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formulaParameterListInExpression (const GGS_formulaParameterListInExpression_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_formulaParameterListInExpression::cCollectionElement_formulaParameterListInExpression (const GGS_lstring & in_mParameterName,
                                                                                                          const GGS_lstringlist & in_mFieldNames
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mParameterName, in_mFieldNames) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_formulaParameterListInExpression::cCollectionElement_formulaParameterListInExpression (const GGS_formulaParameterListInExpression_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mParameterName, inElement.mProperty_mFieldNames) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_formulaParameterListInExpression::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_formulaParameterListInExpression::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_formulaParameterListInExpression (mObject.mProperty_mParameterName, mObject.mProperty_mFieldNames COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_formulaParameterListInExpression::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mParameterName" ":") ;
  mObject.mProperty_mParameterName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFieldNames" ":") ;
  mObject.mProperty_mFieldNames.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression::GGS_formulaParameterListInExpression (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression::GGS_formulaParameterListInExpression (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression GGS_formulaParameterListInExpression::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_formulaParameterListInExpression (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression GGS_formulaParameterListInExpression::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_formulaParameterListInExpression (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::enterElement (const GGS_formulaParameterListInExpression_2E_element & inValue,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_formulaParameterListInExpression (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression GGS_formulaParameterListInExpression::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                     const GGS_lstringlist & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_formulaParameterListInExpression result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_formulaParameterListInExpression (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_formulaParameterListInExpression::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GGS_lstring & in_mParameterName,
                                                                      const GGS_lstringlist & in_mFieldNames
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_formulaParameterListInExpression * p = nullptr ;
  macroMyNew (p, cCollectionElement_formulaParameterListInExpression (in_mParameterName,
                                                                      in_mFieldNames COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::addAssign_operation (const GGS_lstring & inOperand0,
                                                                const GGS_lstringlist & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formulaParameterListInExpression (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::setter_append (const GGS_lstring inOperand0,
                                                          const GGS_lstringlist inOperand1,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formulaParameterListInExpression (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                 const GGS_lstringlist inOperand1,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formulaParameterListInExpression (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                 GGS_lstringlist & outOperand1,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
      outOperand0 = p->mObject.mProperty_mParameterName ;
      outOperand1 = p->mObject.mProperty_mFieldNames ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::setter_popFirst (GGS_lstring & outOperand0,
                                                            GGS_lstringlist & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mFieldNames ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::setter_popLast (GGS_lstring & outOperand0,
                                                           GGS_lstringlist & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mFieldNames ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::method_first (GGS_lstring & outOperand0,
                                                         GGS_lstringlist & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mFieldNames ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::method_last (GGS_lstring & outOperand0,
                                                        GGS_lstringlist & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mFieldNames ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression GGS_formulaParameterListInExpression::add_operation (const GGS_formulaParameterListInExpression & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_formulaParameterListInExpression result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression GGS_formulaParameterListInExpression::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_formulaParameterListInExpression result = GGS_formulaParameterListInExpression::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression GGS_formulaParameterListInExpression::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_formulaParameterListInExpression result = GGS_formulaParameterListInExpression::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression GGS_formulaParameterListInExpression::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_formulaParameterListInExpression result = GGS_formulaParameterListInExpression::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::plusAssign_operation (const GGS_formulaParameterListInExpression inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::setter_setMParameterNameAtIndex (GGS_lstring inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_formulaParameterListInExpression::getter_mParameterNameAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    result = p->mObject.mProperty_mParameterName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::setter_setMFieldNamesAtIndex (GGS_lstringlist inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFieldNames = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_formulaParameterListInExpression::getter_mFieldNamesAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) attributes.ptr () ;
  GGS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    result = p->mObject.mProperty_mFieldNames ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_formulaParameterListInExpression::cEnumerator_formulaParameterListInExpression (const GGS_formulaParameterListInExpression & inEnumeratedObject,
                                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression_2E_element cEnumerator_formulaParameterListInExpression::current (LOCATION_ARGS) const {
  const cCollectionElement_formulaParameterListInExpression * p = (const cCollectionElement_formulaParameterListInExpression *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring cEnumerator_formulaParameterListInExpression::current_mParameterName (LOCATION_ARGS) const {
  const cCollectionElement_formulaParameterListInExpression * p = (const cCollectionElement_formulaParameterListInExpression *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
  return p->mObject.mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist cEnumerator_formulaParameterListInExpression::current_mFieldNames (LOCATION_ARGS) const {
  const cCollectionElement_formulaParameterListInExpression * p = (const cCollectionElement_formulaParameterListInExpression *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
  return p->mObject.mProperty_mFieldNames ;
}




//--------------------------------------------------------------------------------------------------
//
//     @formulaParameterListInExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaParameterListInExpression ("formulaParameterListInExpression",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_formulaParameterListInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaParameterListInExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formulaParameterListInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formulaParameterListInExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression GGS_formulaParameterListInExpression::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_formulaParameterListInExpression result ;
  const GGS_formulaParameterListInExpression * p = (const GGS_formulaParameterListInExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formulaParameterListInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaParameterListInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_formulaInExpression_2E_weak::objectCompare (const GGS_formulaInExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaInExpression_2E_weak::GGS_formulaInExpression_2E_weak (void) :
GGS_expression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaInExpression_2E_weak & GGS_formulaInExpression_2E_weak::operator = (const GGS_formulaInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaInExpression_2E_weak::GGS_formulaInExpression_2E_weak (const GGS_formulaInExpression & inSource) :
GGS_expression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_formulaInExpression_2E_weak GGS_formulaInExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_formulaInExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaInExpression GGS_formulaInExpression_2E_weak::bang_formulaInExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_formulaInExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_formulaInExpression) ;
      result = GGS_formulaInExpression ((cPtr_formulaInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @formulaInExpression.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaInExpression_2E_weak ("formulaInExpression.weak",
                                                                                   & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_formulaInExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaInExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formulaInExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formulaInExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaInExpression_2E_weak GGS_formulaInExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_formulaInExpression_2E_weak result ;
  const GGS_formulaInExpression_2E_weak * p = (const GGS_formulaInExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formulaInExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaInExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @existInExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_existInExpression::objectCompare (const GGS_existInExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_existInExpression::GGS_existInExpression (void) :
GGS_expression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_existInExpression GGS_existInExpression::
init_21__21_ (const GGS_domainFieldList & in_mArgumentList,
              const GGS_expression & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_existInExpression * object = nullptr ;
  macroMyNew (object, cPtr_existInExpression (inCompiler COMMA_THERE)) ;
  object->existInExpression_init_21__21_ (in_mArgumentList, in_mExpression, inCompiler) ;
  const GGS_existInExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_existInExpression::
existInExpression_init_21__21_ (const GGS_domainFieldList & in_mArgumentList,
                                const GGS_expression & in_mExpression,
                                Compiler * /* inCompiler */) {
  mProperty_mArgumentList = in_mArgumentList ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_existInExpression::GGS_existInExpression (const cPtr_existInExpression * inSourcePtr) :
GGS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_existInExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_existInExpression GGS_existInExpression::class_func_new (const GGS_domainFieldList & in_mArgumentList,
                                                             const GGS_expression & in_mExpression,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_existInExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_existInExpression (in_mArgumentList, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList GGS_existInExpression::readProperty_mArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_domainFieldList () ;
  }else{
    cPtr_existInExpression * p = (cPtr_existInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_existInExpression) ;
    return p->mProperty_mArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_existInExpression::setProperty_mArgumentList (const GGS_domainFieldList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_existInExpression * p = (cPtr_existInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_existInExpression) ;
    p->mProperty_mArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expression GGS_existInExpression::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expression () ;
  }else{
    cPtr_existInExpression * p = (cPtr_existInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_existInExpression) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_existInExpression::setProperty_mExpression (const GGS_expression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_existInExpression * p = (cPtr_existInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_existInExpression) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @existInExpression class
//--------------------------------------------------------------------------------------------------

cPtr_existInExpression::cPtr_existInExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mArgumentList (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_existInExpression::cPtr_existInExpression (const GGS_domainFieldList & in_mArgumentList,
                                                const GGS_expression & in_mExpression,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mArgumentList (),
mProperty_mExpression () {
  mProperty_mArgumentList = in_mArgumentList ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_existInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_existInExpression ;
}

void cPtr_existInExpression::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@existInExpression:") ;
  mProperty_mArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_existInExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_existInExpression (mProperty_mArgumentList, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_existInExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mArgumentList.printNonNullClassInstanceProperties ("mArgumentList") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @existInExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_existInExpression ("existInExpression",
                                                                         & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_existInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_existInExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_existInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_existInExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_existInExpression GGS_existInExpression::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_existInExpression result ;
  const GGS_existInExpression * p = (const GGS_existInExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_existInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("existInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_existInExpression_2E_weak::objectCompare (const GGS_existInExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_existInExpression_2E_weak::GGS_existInExpression_2E_weak (void) :
GGS_expression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_existInExpression_2E_weak & GGS_existInExpression_2E_weak::operator = (const GGS_existInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_existInExpression_2E_weak::GGS_existInExpression_2E_weak (const GGS_existInExpression & inSource) :
GGS_expression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_existInExpression_2E_weak GGS_existInExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_existInExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_existInExpression GGS_existInExpression_2E_weak::bang_existInExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_existInExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_existInExpression) ;
      result = GGS_existInExpression ((cPtr_existInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @existInExpression.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_existInExpression_2E_weak ("existInExpression.weak",
                                                                                 & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_existInExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_existInExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_existInExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_existInExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_existInExpression_2E_weak GGS_existInExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_existInExpression_2E_weak result ;
  const GGS_existInExpression_2E_weak * p = (const GGS_existInExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_existInExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("existInExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @forAllInExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forAllInExpression::objectCompare (const GGS_forAllInExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forAllInExpression::GGS_forAllInExpression (void) :
GGS_expression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_forAllInExpression GGS_forAllInExpression::
init_21__21_ (const GGS_domainFieldList & in_mArgumentList,
              const GGS_expression & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_forAllInExpression * object = nullptr ;
  macroMyNew (object, cPtr_forAllInExpression (inCompiler COMMA_THERE)) ;
  object->forAllInExpression_init_21__21_ (in_mArgumentList, in_mExpression, inCompiler) ;
  const GGS_forAllInExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_forAllInExpression::
forAllInExpression_init_21__21_ (const GGS_domainFieldList & in_mArgumentList,
                                 const GGS_expression & in_mExpression,
                                 Compiler * /* inCompiler */) {
  mProperty_mArgumentList = in_mArgumentList ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_forAllInExpression::GGS_forAllInExpression (const cPtr_forAllInExpression * inSourcePtr) :
GGS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forAllInExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_forAllInExpression GGS_forAllInExpression::class_func_new (const GGS_domainFieldList & in_mArgumentList,
                                                               const GGS_expression & in_mExpression,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_forAllInExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_forAllInExpression (in_mArgumentList, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList GGS_forAllInExpression::readProperty_mArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_domainFieldList () ;
  }else{
    cPtr_forAllInExpression * p = (cPtr_forAllInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forAllInExpression) ;
    return p->mProperty_mArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forAllInExpression::setProperty_mArgumentList (const GGS_domainFieldList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forAllInExpression * p = (cPtr_forAllInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forAllInExpression) ;
    p->mProperty_mArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expression GGS_forAllInExpression::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expression () ;
  }else{
    cPtr_forAllInExpression * p = (cPtr_forAllInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forAllInExpression) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forAllInExpression::setProperty_mExpression (const GGS_expression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_forAllInExpression * p = (cPtr_forAllInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forAllInExpression) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forAllInExpression class
//--------------------------------------------------------------------------------------------------

cPtr_forAllInExpression::cPtr_forAllInExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mArgumentList (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_forAllInExpression::cPtr_forAllInExpression (const GGS_domainFieldList & in_mArgumentList,
                                                  const GGS_expression & in_mExpression,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mArgumentList (),
mProperty_mExpression () {
  mProperty_mArgumentList = in_mArgumentList ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_forAllInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forAllInExpression ;
}

void cPtr_forAllInExpression::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@forAllInExpression:") ;
  mProperty_mArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forAllInExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forAllInExpression (mProperty_mArgumentList, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_forAllInExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mArgumentList.printNonNullClassInstanceProperties ("mArgumentList") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @forAllInExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forAllInExpression ("forAllInExpression",
                                                                          & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_forAllInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forAllInExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forAllInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forAllInExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forAllInExpression GGS_forAllInExpression::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_forAllInExpression result ;
  const GGS_forAllInExpression * p = (const GGS_forAllInExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forAllInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forAllInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forAllInExpression_2E_weak::objectCompare (const GGS_forAllInExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forAllInExpression_2E_weak::GGS_forAllInExpression_2E_weak (void) :
GGS_expression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_forAllInExpression_2E_weak & GGS_forAllInExpression_2E_weak::operator = (const GGS_forAllInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_forAllInExpression_2E_weak::GGS_forAllInExpression_2E_weak (const GGS_forAllInExpression & inSource) :
GGS_expression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_forAllInExpression_2E_weak GGS_forAllInExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_forAllInExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forAllInExpression GGS_forAllInExpression_2E_weak::bang_forAllInExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_forAllInExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forAllInExpression) ;
      result = GGS_forAllInExpression ((cPtr_forAllInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forAllInExpression.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forAllInExpression_2E_weak ("forAllInExpression.weak",
                                                                                  & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_forAllInExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forAllInExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forAllInExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forAllInExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forAllInExpression_2E_weak GGS_forAllInExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_forAllInExpression_2E_weak result ;
  const GGS_forAllInExpression_2E_weak * p = (const GGS_forAllInExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forAllInExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forAllInExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum comparison
//--------------------------------------------------------------------------------------------------

GGS_comparison::GGS_comparison (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_equal (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_equal ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_notEqual (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_notEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_lowerOrEqual (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_lowerOrEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_lowerThan (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_lowerThan ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_greaterOrEqual (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_greaterOrEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_greaterThan (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_greaterThan ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_comparison [7] = {
  "(not built)",
  "equal",
  "notEqual",
  "lowerOrEqual",
  "lowerThan",
  "greaterOrEqual",
  "greaterThan"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_equal == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isNotEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_notEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isLowerOrEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lowerOrEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isLowerThan (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lowerThan == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isGreaterOrEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_greaterOrEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isGreaterThan (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_greaterThan == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_comparison::description (String & ioString,
                                  const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @comparison: ") ;
  ioString.appendCString (gEnumNameArrayFor_comparison [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @comparison generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparison ("comparison",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_comparison::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparison ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_comparison::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_comparison (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_comparison result ;
  const GGS_comparison * p = (const GGS_comparison *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_comparison *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparison", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_comparisonWithConstantInExpression_2E_weak::objectCompare (const GGS_comparisonWithConstantInExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonWithConstantInExpression_2E_weak::GGS_comparisonWithConstantInExpression_2E_weak (void) :
GGS_expression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonWithConstantInExpression_2E_weak & GGS_comparisonWithConstantInExpression_2E_weak::operator = (const GGS_comparisonWithConstantInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonWithConstantInExpression_2E_weak::GGS_comparisonWithConstantInExpression_2E_weak (const GGS_comparisonWithConstantInExpression & inSource) :
GGS_expression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_comparisonWithConstantInExpression_2E_weak GGS_comparisonWithConstantInExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_comparisonWithConstantInExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonWithConstantInExpression GGS_comparisonWithConstantInExpression_2E_weak::bang_comparisonWithConstantInExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_comparisonWithConstantInExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_comparisonWithConstantInExpression) ;
      result = GGS_comparisonWithConstantInExpression ((cPtr_comparisonWithConstantInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @comparisonWithConstantInExpression.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonWithConstantInExpression_2E_weak ("comparisonWithConstantInExpression.weak",
                                                                                                  & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_comparisonWithConstantInExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonWithConstantInExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_comparisonWithConstantInExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_comparisonWithConstantInExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonWithConstantInExpression_2E_weak GGS_comparisonWithConstantInExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_comparisonWithConstantInExpression_2E_weak result ;
  const GGS_comparisonWithConstantInExpression_2E_weak * p = (const GGS_comparisonWithConstantInExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_comparisonWithConstantInExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonWithConstantInExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_variableComparisonInExpression_2E_weak::objectCompare (const GGS_variableComparisonInExpression_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_variableComparisonInExpression_2E_weak::GGS_variableComparisonInExpression_2E_weak (void) :
GGS_expression_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_variableComparisonInExpression_2E_weak & GGS_variableComparisonInExpression_2E_weak::operator = (const GGS_variableComparisonInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_variableComparisonInExpression_2E_weak::GGS_variableComparisonInExpression_2E_weak (const GGS_variableComparisonInExpression & inSource) :
GGS_expression_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_variableComparisonInExpression_2E_weak GGS_variableComparisonInExpression_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_variableComparisonInExpression_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_variableComparisonInExpression GGS_variableComparisonInExpression_2E_weak::bang_variableComparisonInExpression_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_variableComparisonInExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_variableComparisonInExpression) ;
      result = GGS_variableComparisonInExpression ((cPtr_variableComparisonInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @variableComparisonInExpression.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_variableComparisonInExpression_2E_weak ("variableComparisonInExpression.weak",
                                                                                              & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_variableComparisonInExpression_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableComparisonInExpression_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_variableComparisonInExpression_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_variableComparisonInExpression_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_variableComparisonInExpression_2E_weak GGS_variableComparisonInExpression_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_variableComparisonInExpression_2E_weak result ;
  const GGS_variableComparisonInExpression_2E_weak * p = (const GGS_variableComparisonInExpression_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_variableComparisonInExpression_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("variableComparisonInExpression.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@expression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset callExtensionGetter_computeExpression (const cPtr_expression * inObject,
                                                     const GGS_domainMap in_inDomainMap,
                                                     const GGS_varMap in_inVarMap,
                                                     const GGS_uint in_inTotalBitCount,
                                                     const GGS_computedFormulaMap in_inComputedFormulaMap,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GGS_binaryset result ;
  if (nullptr != inObject) {
    result = inObject->getter_computeExpression (in_inDomainMap, in_inVarMap, in_inTotalBitCount, in_inComputedFormulaMap, inCompiler COMMA_THERE) ;
  }
  return result ;
}



//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_start_5F_symbol_i0_ (GGS_ast & outArgument_outAST,
                                                                          Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outAST.drop () ; // Release 'out' argument
  outArgument_outAST = GGS_ast::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_kerbdd_5F_syntax_0 (inCompiler) == 2) {
      nt_topLevelDeClaration_ (outArgument_outAST, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_start_5F_symbol_i0_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_kerbdd_5F_syntax_0 (inCompiler) == 2) {
      nt_topLevelDeClaration_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_start_5F_symbol_i0_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_kerbdd_5F_syntax_0 (inCompiler) == 2) {
      nt_topLevelDeClaration_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i1_ (GGS_ast & ioArgument_ioAST,
                                                                              Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_domain COMMA_SOURCE_FILE ("domain.ggs", 41)) ;
  GGS_lstring var_domainName_1549 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 42)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("domain.ggs", 43)) ;
  GGS_domainDeclarationType var_domainDeclarationType_1596 ;
  switch (select_kerbdd_5F_syntax_1 (inCompiler)) {
  case 1: {
    GGS_bddType var_type_1653 ;
    nt_type_ (var_type_1653, inCompiler) ;
    var_domainDeclarationType_1596 = GGS_domainDeclarationType::class_func_type (var_type_1653  COMMA_SOURCE_FILE ("domain.ggs", 47)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("domain.ggs", 49)) ;
    GGS_domainFieldList var_fieldList_1761 ;
    nt_recordFields_ (var_fieldList_1761, inCompiler) ;
    var_domainDeclarationType_1596 = GGS_domainDeclarationType::class_func_record (var_fieldList_1761  COMMA_SOURCE_FILE ("domain.ggs", 51)) ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("domain.ggs", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("domain.ggs", 54)) ;
  {
  ioArgument_ioAST.mProperty_mDomainList.setter_append (var_domainName_1549, var_domainDeclarationType_1596, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 55)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i1_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_domain COMMA_SOURCE_FILE ("domain.ggs", 41)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 42)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("domain.ggs", 43)) ;
  switch (select_kerbdd_5F_syntax_1 (inCompiler)) {
  case 1: {
    nt_type_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("domain.ggs", 49)) ;
    nt_recordFields_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("domain.ggs", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("domain.ggs", 54)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i1_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_domain COMMA_SOURCE_FILE ("domain.ggs", 41)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 42)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("domain.ggs", 43)) ;
  switch (select_kerbdd_5F_syntax_1 (inCompiler)) {
  case 1: {
    nt_type_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("domain.ggs", 49)) ;
    nt_recordFields_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("domain.ggs", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("domain.ggs", 54)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_recordFields_i2_ (GGS_domainFieldList & outArgument_outFormulaArgumentList,
                                                                       Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outFormulaArgumentList.drop () ; // Release 'out' argument
  GGS_domainFieldList temp_0 = GGS_domainFieldList::init (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 61)) ;
  outArgument_outFormulaArgumentList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_varName_2146 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 63)) ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("domain.ggs", 64)) ;
    GGS_bddType var_type_2189 ;
    nt_type_ (var_type_2189, inCompiler) ;
    {
    outArgument_outFormulaArgumentList.setter_append (var_varName_2146, var_type_2189, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 66)) ;
    }
    if (select_kerbdd_5F_syntax_2 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("domain.ggs", 68)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_recordFields_i2_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 63)) ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("domain.ggs", 64)) ;
    nt_type_parse (inCompiler) ;
    if (select_kerbdd_5F_syntax_2 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("domain.ggs", 68)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_recordFields_i2_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 63)) ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("domain.ggs", 64)) ;
    nt_type_indexing (inCompiler) ;
    if (select_kerbdd_5F_syntax_2 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("domain.ggs", 68)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_type_i3_ (GGS_bddType & outArgument_outType,
                                                               Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outType.drop () ; // Release 'out' argument
  switch (select_kerbdd_5F_syntax_3 (inCompiler)) {
  case 1: {
    GGS_lstring var_typeName_2438 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 76)) ;
    outArgument_outType = GGS_bddType::class_func_namedType (var_typeName_2438  COMMA_SOURCE_FILE ("domain.ggs", 77)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_bool COMMA_SOURCE_FILE ("domain.ggs", 79)) ;
    switch (select_kerbdd_5F_syntax_4 (inCompiler)) {
    case 1: {
      outArgument_outType = GGS_bddType::class_func_bool (SOURCE_FILE ("domain.ggs", 81)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("domain.ggs", 83)) ;
      GGS_luint var_bitCount_2582 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("domain.ggs", 84)) ;
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("domain.ggs", 85)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::equal, var_bitCount_2582.readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_bitCount_2582.readProperty_location (), GGS_string ("size should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("domain.ggs", 87)) ;
        }
      }
      outArgument_outType = GGS_bddType::class_func_boolArray (var_bitCount_2582.readProperty_uint ()  COMMA_SOURCE_FILE ("domain.ggs", 89)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_type_i3_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  switch (select_kerbdd_5F_syntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 76)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_bool COMMA_SOURCE_FILE ("domain.ggs", 79)) ;
    switch (select_kerbdd_5F_syntax_4 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("domain.ggs", 83)) ;
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("domain.ggs", 84)) ;
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("domain.ggs", 85)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_type_i3_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  switch (select_kerbdd_5F_syntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 76)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_bool COMMA_SOURCE_FILE ("domain.ggs", 79)) ;
    switch (select_kerbdd_5F_syntax_4 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("domain.ggs", 83)) ;
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("domain.ggs", 84)) ;
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("domain.ggs", 85)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i4_ (GGS_ast & ioArgument_ioAST,
                                                                              Lexique_kerbdd_5F_lexique * inCompiler) {
  GGS_lstring var_formulaName_1228 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-assignment.ggs", 28)) ;
  GGS_domainFieldList var_domainFieldList_1264 ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 30)) ;
  switch (select_kerbdd_5F_syntax_5 (inCompiler)) {
  case 1: {
    GGS_domainFieldList temp_0 = GGS_domainFieldList::init (inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 32)) ;
    var_domainFieldList_1264 = temp_0 ;
  } break ;
  case 2: {
    nt_recordFields_ (var_domainFieldList_1264, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 36)) ;
  GGS_formulaKind var_kind_1394 ;
  switch (select_kerbdd_5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3A__3D_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 39)) ;
    var_kind_1394 = GGS_formulaKind::class_func_assignment (SOURCE_FILE ("formula-assignment.ggs", 40)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2B__3D_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 42)) ;
    var_kind_1394 = GGS_formulaKind::class_func_fixedPoint (GGS_binaryset::class_func_emptyBinarySet (SOURCE_FILE ("formula-assignment.ggs", 43))  COMMA_SOURCE_FILE ("formula-assignment.ggs", 43)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2D__3D_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 45)) ;
    var_kind_1394 = GGS_formulaKind::class_func_fixedPoint (GGS_binaryset::class_func_fullBinarySet (SOURCE_FILE ("formula-assignment.ggs", 46))  COMMA_SOURCE_FILE ("formula-assignment.ggs", 46)) ;
  } break ;
  default:
    break ;
  }
  GGS_expression var_expression_1612 ;
  nt_expression_ (var_expression_1612, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 49)) ;
  {
  ioArgument_ioAST.mProperty_mFormulaList.setter_append (GGS_assignmentFormula::init_21__21__21__21_ (var_formulaName_1228, var_domainFieldList_1264, var_kind_1394, var_expression_1612, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 50)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i4_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-assignment.ggs", 28)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 30)) ;
  switch (select_kerbdd_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_recordFields_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 36)) ;
  switch (select_kerbdd_5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3A__3D_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 39)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2B__3D_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 42)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2D__3D_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 45)) ;
  } break ;
  default:
    break ;
  }
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 49)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i4_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-assignment.ggs", 28)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 30)) ;
  switch (select_kerbdd_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_recordFields_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 36)) ;
  switch (select_kerbdd_5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3A__3D_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 39)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2B__3D_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 42)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2D__3D_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 45)) ;
  } break ;
  default:
    break ;
  }
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 49)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i5_ (GGS_ast & ioArgument_ioAST,
                                                                              Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize COMMA_SOURCE_FILE ("setting-map.ggs", 24)) ;
  GGS_luint var_setting_1132 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("setting-map.ggs", 25)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("setting-map.ggs", 26)) ;
  {
  ioArgument_ioAST.mProperty_mFormulaList.setter_append (GGS_setting_5F_nodeHashMapSize::init_21_ (var_setting_1132, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("setting-map.ggs", 27)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i5_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize COMMA_SOURCE_FILE ("setting-map.ggs", 24)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("setting-map.ggs", 25)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("setting-map.ggs", 26)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i5_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize COMMA_SOURCE_FILE ("setting-map.ggs", 24)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("setting-map.ggs", 25)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("setting-map.ggs", 26)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i6_ (GGS_ast & ioArgument_ioAST,
                                                                              Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize COMMA_SOURCE_FILE ("setting-map.ggs", 33)) ;
  GGS_luint var_setting_1412 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("setting-map.ggs", 34)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("setting-map.ggs", 35)) ;
  {
  ioArgument_ioAST.mProperty_mFormulaList.setter_append (GGS_setting_5F_andCacheMapSize::init_21_ (var_setting_1412, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("setting-map.ggs", 36)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i6_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize COMMA_SOURCE_FILE ("setting-map.ggs", 33)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("setting-map.ggs", 34)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("setting-map.ggs", 35)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i6_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize COMMA_SOURCE_FILE ("setting-map.ggs", 33)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("setting-map.ggs", 34)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("setting-map.ggs", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i7_ (GGS_ast & ioArgument_ioAST,
                                                                              Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_dump COMMA_SOURCE_FILE ("formula-dump.ggs", 18)) ;
  GGS_lstring var_formulaName_934 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-dump.ggs", 19)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-dump.ggs", 20)) ;
  {
  ioArgument_ioAST.mProperty_mFormulaList.setter_append (GGS_dumpFormula::init_21_ (var_formulaName_934, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 21)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i7_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_dump COMMA_SOURCE_FILE ("formula-dump.ggs", 18)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-dump.ggs", 19)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-dump.ggs", 20)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i7_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_dump COMMA_SOURCE_FILE ("formula-dump.ggs", 18)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-dump.ggs", 19)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-dump.ggs", 20)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i8_ (GGS_ast & ioArgument_ioAST,
                                                                              Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("formula-graphviz.ggs", 18)) ;
  GGS_lstring var_formulaName_942 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-graphviz.ggs", 19)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-graphviz.ggs", 20)) ;
  {
  ioArgument_ioAST.mProperty_mFormulaList.setter_append (GGS_graphvizFormula::init_21_ (var_formulaName_942, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 21)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i8_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("formula-graphviz.ggs", 18)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-graphviz.ggs", 19)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-graphviz.ggs", 20)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i8_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("formula-graphviz.ggs", 18)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-graphviz.ggs", 19)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-graphviz.ggs", 20)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_expression_i9_ (GGS_expression & outArgument_outExpression,
                                                                     Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_comparison_ (outArgument_outExpression, inCompiler) ;
  switch (select_kerbdd_5F_syntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("expression.ggs", 149)) ;
    GGS_expression var_rightExpression_4927 ;
    nt_comparison_ (var_rightExpression_4927, inCompiler) ;
    outArgument_outExpression = GGS_equalExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_4927, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("expression.ggs", 153)) ;
    GGS_expression var_rightExpression_5065 ;
    nt_comparison_ (var_rightExpression_5065, inCompiler) ;
    outArgument_outExpression = GGS_notEqualExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_5065, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_expression_i9_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  nt_comparison_parse (inCompiler) ;
  switch (select_kerbdd_5F_syntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("expression.ggs", 149)) ;
    nt_comparison_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("expression.ggs", 153)) ;
    nt_comparison_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_expression_i9_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  nt_comparison_indexing (inCompiler) ;
  switch (select_kerbdd_5F_syntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("expression.ggs", 149)) ;
    nt_comparison_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("expression.ggs", 153)) ;
    nt_comparison_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_comparison_i10_ (GGS_expression & outArgument_outExpression,
                                                                      Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("expression.ggs", 165)) ;
      GGS_expression var_rightExpression_5395 ;
      nt_term_ (var_rightExpression_5395, inCompiler) ;
      outArgument_outExpression = GGS_orExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_5395, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("expression.ggs", 169)) ;
      GGS_expression var_rightExpression_5526 ;
      nt_term_ (var_rightExpression_5526, inCompiler) ;
      outArgument_outExpression = GGS_xorExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_5526, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_comparison_i10_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  nt_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("expression.ggs", 165)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("expression.ggs", 169)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_comparison_i10_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  nt_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("expression.ggs", 165)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("expression.ggs", 169)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_term_i11_ (GGS_expression & outArgument_outExpression,
                                                                Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("expression.ggs", 181)) ;
      GGS_expression var_rightExpression_5849 ;
      nt_factor_ (var_rightExpression_5849, inCompiler) ;
      outArgument_outExpression = GGS_andExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_5849, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("expression.ggs", 185)) ;
      GGS_expression var_rightExpression_5984 ;
      nt_factor_ (var_rightExpression_5984, inCompiler) ;
      outArgument_outExpression = GGS_impliesExpression::init_21__21_ (outArgument_outExpression, var_rightExpression_5984, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_term_i11_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  nt_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("expression.ggs", 181)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("expression.ggs", 185)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_term_i11_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  nt_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("expression.ggs", 181)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("expression.ggs", 185)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i12_ (GGS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_varName_6250 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 194)) ;
  switch (select_kerbdd_5F_syntax_10 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GGS_varInExpression::init_21_ (var_varName_6250, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 198)) ;
    GGS_luint var_varBit_6349 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression.ggs", 199)) ;
    outArgument_outExpression = GGS_varBitInExpression::init_21__21_ (var_varName_6250, var_varBit_6349, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i12_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 194)) ;
  switch (select_kerbdd_5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 198)) ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression.ggs", 199)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i12_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 194)) ;
  switch (select_kerbdd_5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 198)) ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression.ggs", 199)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i13_ (GGS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 207)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 209)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i13_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 207)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 209)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i13_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 207)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 209)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i14_ (GGS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression.ggs", 215)) ;
  GGS_expression var_expression_6786 ;
  nt_factor_ (var_expression_6786, inCompiler) ;
  outArgument_outExpression = GGS_complementExpression::init_21_ (var_expression_6786, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i14_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression.ggs", 215)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i14_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression.ggs", 215)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i15_ (GGS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_true COMMA_SOURCE_FILE ("expression.ggs", 223)) ;
  outArgument_outExpression = GGS_trueExpression::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i15_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_true COMMA_SOURCE_FILE ("expression.ggs", 223)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i15_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_true COMMA_SOURCE_FILE ("expression.ggs", 223)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i16_ (GGS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_false COMMA_SOURCE_FILE ("expression.ggs", 230)) ;
  outArgument_outExpression = GGS_falseExpression::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i16_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_false COMMA_SOURCE_FILE ("expression.ggs", 230)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i16_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_false COMMA_SOURCE_FILE ("expression.ggs", 230)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i17_ (GGS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_formulaName_7411 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 237)) ;
  GGS_formulaParameterListInExpression temp_0 = GGS_formulaParameterListInExpression::init (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 238)) ;
  GGS_formulaParameterListInExpression var_parameterList_7464 = temp_0 ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 239)) ;
  switch (select_kerbdd_5F_syntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_parameterName_7539 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 243)) ;
      GGS_lstringlist temp_2 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 244)) ;
      GGS_lstringlist var_fieldNames_7577 = temp_2 ;
      bool repeatFlag_3 = true ;
      while (repeatFlag_3) {
        if (select_kerbdd_5F_syntax_13 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 247)) ;
          GGS_lstring var_fieldName_7657 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 248)) ;
          {
          var_fieldNames_7577.setter_append (var_fieldName_7657, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 249)) ;
          }
        }else{
          repeatFlag_3 = false ;
        }
      }
      {
      var_parameterList_7464.setter_append (var_parameterName_7539, var_fieldNames_7577, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 251)) ;
      }
      if (select_kerbdd_5F_syntax_12 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("expression.ggs", 253)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 256)) ;
  outArgument_outExpression = GGS_formulaInExpression::init_21__21_ (var_formulaName_7411, var_parameterList_7464, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i17_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 237)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 239)) ;
  switch (select_kerbdd_5F_syntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 243)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_kerbdd_5F_syntax_13 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 247)) ;
          inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 248)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      if (select_kerbdd_5F_syntax_12 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("expression.ggs", 253)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 256)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i17_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 237)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 239)) ;
  switch (select_kerbdd_5F_syntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 243)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_kerbdd_5F_syntax_13 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 247)) ;
          inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 248)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      if (select_kerbdd_5F_syntax_12 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("expression.ggs", 253)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 256)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i18_ (GGS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("expression.ggs", 263)) ;
  GGS_domainFieldList var_domainFieldList_8079 ;
  nt_recordFields_ (var_domainFieldList_8079, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 265)) ;
  GGS_expression var_expression_8123 ;
  nt_expression_ (var_expression_8123, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 267)) ;
  outArgument_outExpression = GGS_existInExpression::init_21__21_ (var_domainFieldList_8079, var_expression_8123, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i18_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("expression.ggs", 263)) ;
  nt_recordFields_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 265)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 267)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i18_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("expression.ggs", 263)) ;
  nt_recordFields_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 265)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 267)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i19_ (GGS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("expression.ggs", 274)) ;
  GGS_domainFieldList var_domainFieldList_8404 ;
  nt_recordFields_ (var_domainFieldList_8404, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 276)) ;
  GGS_expression var_expression_8448 ;
  nt_expression_ (var_expression_8448, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 278)) ;
  outArgument_outExpression = GGS_forAllInExpression::init_21__21_ (var_domainFieldList_8404, var_expression_8448, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i19_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("expression.ggs", 274)) ;
  nt_recordFields_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 276)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 278)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i19_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("expression.ggs", 274)) ;
  nt_recordFields_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 276)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 278)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i20_ (GGS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression.ggs", 284)) ;
  GGS_lstring var_varName_8710 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 285)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 286)) ;
  GGS_lstringlist var_leftFieldNames_8738 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_kerbdd_5F_syntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 289)) ;
      GGS_lstring var_fieldName_8806 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 290)) ;
      {
      var_leftFieldNames_8738.setter_append (var_fieldName_8806, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 291)) ;
      }
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_comparison var_comparison_8881 ;
  switch (select_kerbdd_5F_syntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("expression.ggs", 295)) ;
    var_comparison_8881 = GGS_comparison::class_func_equal (SOURCE_FILE ("expression.ggs", 296)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("expression.ggs", 298)) ;
    var_comparison_8881 = GGS_comparison::class_func_notEqual (SOURCE_FILE ("expression.ggs", 299)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression.ggs", 301)) ;
    var_comparison_8881 = GGS_comparison::class_func_lowerOrEqual (SOURCE_FILE ("expression.ggs", 302)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("expression.ggs", 304)) ;
    var_comparison_8881 = GGS_comparison::class_func_lowerThan (SOURCE_FILE ("expression.ggs", 305)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression.ggs", 307)) ;
    var_comparison_8881 = GGS_comparison::class_func_greaterOrEqual (SOURCE_FILE ("expression.ggs", 308)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("expression.ggs", 310)) ;
    var_comparison_8881 = GGS_comparison::class_func_greaterThan (SOURCE_FILE ("expression.ggs", 311)) ;
  } break ;
  default:
    break ;
  }
  switch (select_kerbdd_5F_syntax_16 (inCompiler)) {
  case 1: {
    GGS_luint var_constant_9185 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression.ggs", 314)) ;
    outArgument_outExpression = GGS_comparisonWithConstantInExpression::init_21__21__21__21_ (var_varName_8710, var_leftFieldNames_8738, var_comparison_8881, var_constant_9185, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    GGS_lstring var_rightVarName_9331 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 317)) ;
    GGS_lstringlist temp_2 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 318)) ;
    GGS_lstringlist var_rightFieldNames_9366 = temp_2 ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      if (select_kerbdd_5F_syntax_17 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 321)) ;
        GGS_lstring var_fieldName_9443 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 322)) ;
        {
        var_rightFieldNames_9366.setter_append (var_fieldName_9443, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 323)) ;
        }
      }else{
        repeatFlag_3 = false ;
      }
    }
    outArgument_outExpression = GGS_variableComparisonInExpression::init_21__21__21__21__21_ (var_varName_8710, var_leftFieldNames_8738, var_comparison_8881, var_rightVarName_9331, var_rightFieldNames_9366, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression.ggs", 327)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i20_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression.ggs", 284)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 285)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_kerbdd_5F_syntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 289)) ;
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 290)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_kerbdd_5F_syntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("expression.ggs", 295)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("expression.ggs", 298)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression.ggs", 301)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("expression.ggs", 304)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression.ggs", 307)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("expression.ggs", 310)) ;
  } break ;
  default:
    break ;
  }
  switch (select_kerbdd_5F_syntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression.ggs", 314)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 317)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_kerbdd_5F_syntax_17 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 321)) ;
        inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 322)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression.ggs", 327)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i20_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression.ggs", 284)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 285)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_kerbdd_5F_syntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 289)) ;
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 290)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_kerbdd_5F_syntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("expression.ggs", 295)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("expression.ggs", 298)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression.ggs", 301)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("expression.ggs", 304)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression.ggs", 307)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("expression.ggs", 310)) ;
  } break ;
  default:
    break ;
  }
  switch (select_kerbdd_5F_syntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression.ggs", 314)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 317)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_kerbdd_5F_syntax_17 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 321)) ;
        inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 322)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression.ggs", 327)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@formulaList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_formulaList : public cCollectionElement {
  public: GGS_formulaList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_formulaList (const GGS_abstractFormula & in_mFormula
                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formulaList (const GGS_formulaList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_formulaList::cCollectionElement_formulaList (const GGS_abstractFormula & in_mFormula
                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormula) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_formulaList::cCollectionElement_formulaList (const GGS_formulaList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormula) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_formulaList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_formulaList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_formulaList (mObject.mProperty_mFormula COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_formulaList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormula" ":") ;
  mObject.mProperty_mFormula.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList::GGS_formulaList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList::GGS_formulaList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList GGS_formulaList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_formulaList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList GGS_formulaList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_formulaList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::enterElement (const GGS_formulaList_2E_element & inValue,
                                    Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_formulaList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList GGS_formulaList::class_func_listWithValue (const GGS_abstractFormula & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  GGS_formulaList result ;
  if (inOperand0.isValid ()) {
    result = GGS_formulaList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_formulaList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                 const GGS_abstractFormula & in_mFormula
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_formulaList * p = nullptr ;
  macroMyNew (p, cCollectionElement_formulaList (in_mFormula COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::addAssign_operation (const GGS_abstractFormula & inOperand0
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formulaList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::setter_append (const GGS_abstractFormula inOperand0,
                                     Compiler * /* inCompiler */
                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formulaList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::setter_insertAtIndex (const GGS_abstractFormula inOperand0,
                                            const GGS_uint inInsertionIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formulaList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::setter_removeAtIndex (GGS_abstractFormula & outOperand0,
                                            const GGS_uint inRemoveIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_formulaList * p = (cCollectionElement_formulaList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_formulaList) ;
      outOperand0 = p->mObject.mProperty_mFormula ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::setter_popFirst (GGS_abstractFormula & outOperand0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaList * p = (cCollectionElement_formulaList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formulaList) ;
    outOperand0 = p->mObject.mProperty_mFormula ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::setter_popLast (GGS_abstractFormula & outOperand0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaList * p = (cCollectionElement_formulaList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formulaList) ;
    outOperand0 = p->mObject.mProperty_mFormula ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::method_first (GGS_abstractFormula & outOperand0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaList * p = (cCollectionElement_formulaList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formulaList) ;
    outOperand0 = p->mObject.mProperty_mFormula ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::method_last (GGS_abstractFormula & outOperand0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaList * p = (cCollectionElement_formulaList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formulaList) ;
    outOperand0 = p->mObject.mProperty_mFormula ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList GGS_formulaList::add_operation (const GGS_formulaList & inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_formulaList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList GGS_formulaList::getter_subListWithRange (const GGS_range & inRange,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_formulaList result = GGS_formulaList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList GGS_formulaList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_formulaList result = GGS_formulaList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList GGS_formulaList::getter_subListToIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_formulaList result = GGS_formulaList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::plusAssign_operation (const GGS_formulaList inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::setter_setMFormulaAtIndex (GGS_abstractFormula inOperand,
                                                 GGS_uint inIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_formulaList * p = (cCollectionElement_formulaList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formulaList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormula = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFormula GGS_formulaList::getter_mFormulaAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaList * p = (cCollectionElement_formulaList *) attributes.ptr () ;
  GGS_abstractFormula result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formulaList) ;
    result = p->mObject.mProperty_mFormula ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_formulaList::cEnumerator_formulaList (const GGS_formulaList & inEnumeratedObject,
                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList_2E_element cEnumerator_formulaList::current (LOCATION_ARGS) const {
  const cCollectionElement_formulaList * p = (const cCollectionElement_formulaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formulaList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_abstractFormula cEnumerator_formulaList::current_mFormula (LOCATION_ARGS) const {
  const cCollectionElement_formulaList * p = (const cCollectionElement_formulaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formulaList) ;
  return p->mObject.mProperty_mFormula ;
}




//--------------------------------------------------------------------------------------------------
//
//     @formulaList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaList ("formulaList",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_formulaList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formulaList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formulaList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList GGS_formulaList::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_formulaList result ;
  const GGS_formulaList * p = (const GGS_formulaList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formulaList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ast::GGS_ast (void) :
mProperty_mDomainList (),
mProperty_mFormulaList () {
}

//--------------------------------------------------------------------------------------------------

GGS_ast::~ GGS_ast (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ast GGS_ast::init (Compiler * inCompiler
                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ast result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ast::setInitializedProperties (Compiler * inCompiler) {
GGS_domainDeclarationList temp_0 = GGS_domainDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("grammar.ggs", 25)) ;
  mProperty_mDomainList = temp_0 ;
GGS_formulaList temp_1 = GGS_formulaList::init (inCompiler COMMA_SOURCE_FILE ("grammar.ggs", 26)) ;
  mProperty_mFormulaList = temp_1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_ast::GGS_ast (const GGS_domainDeclarationList & inOperand0,
                  const GGS_formulaList & inOperand1) :
mProperty_mDomainList (inOperand0),
mProperty_mFormulaList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_ast GGS_ast::class_func_new (Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ast result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ast::isValid (void) const {
  return mProperty_mDomainList.isValid () && mProperty_mFormulaList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ast::drop (void) {
  mProperty_mDomainList.drop () ;
  mProperty_mFormulaList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ast::description (String & ioString,
                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ast:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDomainList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormulaList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ast generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ast ("ast",
                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ast::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ast ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ast::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ast (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ast GGS_ast::extractObject (const GGS_object & inObject,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) {
  GGS_ast result ;
  const GGS_ast * p = (const GGS_ast *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ast *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ast", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractFormula analyzeFormula'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeFormula (cPtr_abstractFormula * inObject,
                                         const GGS_string constin_inSourceFilePath,
                                         const GGS_domainMap constin_inDomainMap,
                                         GGS_computedFormulaMap & io_ioComputedFormulaMap,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractFormula) ;
    inObject->method_analyzeFormula (constin_inSourceFilePath, constin_inDomainMap, io_ioComputedFormulaMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_boolArray::GGS_bddType_2E_boolArray (void) :
mProperty_size () {
}

//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_boolArray::~ GGS_bddType_2E_boolArray (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_bddType_2E_boolArray GGS_bddType_2E_boolArray::init_21_ (const GGS_uint & in_size,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bddType_2E_boolArray result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_size = in_size ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bddType_2E_boolArray::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_boolArray::GGS_bddType_2E_boolArray (const GGS_uint & inOperand0) :
mProperty_size (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_boolArray GGS_bddType_2E_boolArray::class_func_new (const GGS_uint & in_size,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bddType_2E_boolArray result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_size = in_size ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bddType_2E_boolArray::isValid (void) const {
  return mProperty_size.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bddType_2E_boolArray::drop (void) {
  mProperty_size.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bddType_2E_boolArray::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @bddType.boolArray:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_size.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @bddType.boolArray generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bddType_2E_boolArray ("bddType.boolArray",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bddType_2E_boolArray::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bddType_2E_boolArray ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bddType_2E_boolArray::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bddType_2E_boolArray (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_boolArray GGS_bddType_2E_boolArray::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_bddType_2E_boolArray result ;
  const GGS_bddType_2E_boolArray * p = (const GGS_bddType_2E_boolArray *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bddType_2E_boolArray *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bddType.boolArray", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @bddType_2E_boolArray_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_boolArray_3F_::GGS_bddType_2E_boolArray_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_boolArray_3F_::GGS_bddType_2E_boolArray_3F_ (const GGS_bddType_2E_boolArray & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_boolArray_3F_ GGS_bddType_2E_boolArray_3F_::init_nil (void) {
  GGS_bddType_2E_boolArray_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bddType_2E_boolArray_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bddType_2E_boolArray_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bddType_2E_boolArray_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_bddType_2E_boolArray () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bddType_2E_boolArray_3F_::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @bddType.boolArray? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bddType_2E_boolArray_3F_ ("bddType.boolArray?",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bddType_2E_boolArray_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bddType_2E_boolArray_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bddType_2E_boolArray_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bddType_2E_boolArray_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_boolArray_3F_ GGS_bddType_2E_boolArray_3F_::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_bddType_2E_boolArray_3F_ result ;
  const GGS_bddType_2E_boolArray_3F_ * p = (const GGS_bddType_2E_boolArray_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bddType_2E_boolArray_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bddType.boolArray?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_type::GGS_domainDeclarationType_2E_type (void) :
mProperty_type () {
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_type::~ GGS_domainDeclarationType_2E_type (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_domainDeclarationType_2E_type GGS_domainDeclarationType_2E_type::init_21_ (const GGS_bddType & in_type,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_domainDeclarationType_2E_type result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationType_2E_type::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_type::GGS_domainDeclarationType_2E_type (const GGS_bddType & inOperand0) :
mProperty_type (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_type GGS_domainDeclarationType_2E_type::class_func_new (const GGS_bddType & in_type,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_domainDeclarationType_2E_type result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_domainDeclarationType_2E_type::isValid (void) const {
  return mProperty_type.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationType_2E_type::drop (void) {
  mProperty_type.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationType_2E_type::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @domainDeclarationType.type:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @domainDeclarationType.type generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationType_2E_type ("domainDeclarationType.type",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_domainDeclarationType_2E_type::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainDeclarationType_2E_type ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_domainDeclarationType_2E_type::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_domainDeclarationType_2E_type (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_type GGS_domainDeclarationType_2E_type::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_domainDeclarationType_2E_type result ;
  const GGS_domainDeclarationType_2E_type * p = (const GGS_domainDeclarationType_2E_type *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_domainDeclarationType_2E_type *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainDeclarationType.type", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @domainDeclarationType_2E_type_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_type_3F_::GGS_domainDeclarationType_2E_type_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_type_3F_::GGS_domainDeclarationType_2E_type_3F_ (const GGS_domainDeclarationType_2E_type & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_type_3F_ GGS_domainDeclarationType_2E_type_3F_::init_nil (void) {
  GGS_domainDeclarationType_2E_type_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_domainDeclarationType_2E_type_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_domainDeclarationType_2E_type_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationType_2E_type_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_domainDeclarationType_2E_type () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationType_2E_type_3F_::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @domainDeclarationType.type? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationType_2E_type_3F_ ("domainDeclarationType.type?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_domainDeclarationType_2E_type_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainDeclarationType_2E_type_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_domainDeclarationType_2E_type_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_domainDeclarationType_2E_type_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_type_3F_ GGS_domainDeclarationType_2E_type_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_domainDeclarationType_2E_type_3F_ result ;
  const GGS_domainDeclarationType_2E_type_3F_ * p = (const GGS_domainDeclarationType_2E_type_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_domainDeclarationType_2E_type_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainDeclarationType.type?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_record::GGS_domainDeclarationType_2E_record (void) :
mProperty_fieldList () {
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_record::~ GGS_domainDeclarationType_2E_record (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_domainDeclarationType_2E_record GGS_domainDeclarationType_2E_record::init_21_ (const GGS_domainFieldList & in_fieldList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_domainDeclarationType_2E_record result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_fieldList = in_fieldList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationType_2E_record::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_record::GGS_domainDeclarationType_2E_record (const GGS_domainFieldList & inOperand0) :
mProperty_fieldList (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_record GGS_domainDeclarationType_2E_record::class_func_new (const GGS_domainFieldList & in_fieldList,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_domainDeclarationType_2E_record result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_fieldList = in_fieldList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_domainDeclarationType_2E_record::isValid (void) const {
  return mProperty_fieldList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationType_2E_record::drop (void) {
  mProperty_fieldList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationType_2E_record::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @domainDeclarationType.record:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_fieldList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @domainDeclarationType.record generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationType_2E_record ("domainDeclarationType.record",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_domainDeclarationType_2E_record::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainDeclarationType_2E_record ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_domainDeclarationType_2E_record::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_domainDeclarationType_2E_record (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_record GGS_domainDeclarationType_2E_record::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_domainDeclarationType_2E_record result ;
  const GGS_domainDeclarationType_2E_record * p = (const GGS_domainDeclarationType_2E_record *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_domainDeclarationType_2E_record *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainDeclarationType.record", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @domainDeclarationType_2E_record_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_record_3F_::GGS_domainDeclarationType_2E_record_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_record_3F_::GGS_domainDeclarationType_2E_record_3F_ (const GGS_domainDeclarationType_2E_record & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_record_3F_ GGS_domainDeclarationType_2E_record_3F_::init_nil (void) {
  GGS_domainDeclarationType_2E_record_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_domainDeclarationType_2E_record_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_domainDeclarationType_2E_record_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationType_2E_record_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_domainDeclarationType_2E_record () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationType_2E_record_3F_::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @domainDeclarationType.record? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationType_2E_record_3F_ ("domainDeclarationType.record?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_domainDeclarationType_2E_record_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainDeclarationType_2E_record_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_domainDeclarationType_2E_record_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_domainDeclarationType_2E_record_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_record_3F_ GGS_domainDeclarationType_2E_record_3F_::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_domainDeclarationType_2E_record_3F_ result ;
  const GGS_domainDeclarationType_2E_record_3F_ * p = (const GGS_domainDeclarationType_2E_record_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_domainDeclarationType_2E_record_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainDeclarationType.record?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varList_2E_element::GGS_varList_2E_element (void) :
mProperty_mVarName (),
mProperty_mBitIndex (),
mProperty_mBitCount () {
}

//--------------------------------------------------------------------------------------------------

GGS_varList_2E_element::~ GGS_varList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_varList_2E_element GGS_varList_2E_element::init_21__21__21_ (const GGS_string & in_mVarName,
                                                                 const GGS_uint & in_mBitIndex,
                                                                 const GGS_uint & in_mBitCount,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_varList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mVarName = in_mVarName ;
  result.mProperty_mBitIndex = in_mBitIndex ;
  result.mProperty_mBitCount = in_mBitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_varList_2E_element::GGS_varList_2E_element (const GGS_string & inOperand0,
                                                const GGS_uint & inOperand1,
                                                const GGS_uint & inOperand2) :
mProperty_mVarName (inOperand0),
mProperty_mBitIndex (inOperand1),
mProperty_mBitCount (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_varList_2E_element GGS_varList_2E_element::class_func_new (const GGS_string & in_mVarName,
                                                               const GGS_uint & in_mBitIndex,
                                                               const GGS_uint & in_mBitCount,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_varList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mVarName = in_mVarName ;
  result.mProperty_mBitIndex = in_mBitIndex ;
  result.mProperty_mBitCount = in_mBitCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_varList_2E_element::isValid (void) const {
  return mProperty_mVarName.isValid () && mProperty_mBitIndex.isValid () && mProperty_mBitCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varList_2E_element::drop (void) {
  mProperty_mVarName.drop () ;
  mProperty_mBitIndex.drop () ;
  mProperty_mBitCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varList_2E_element::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @varList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mVarName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @varList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varList_2E_element ("varList.element",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_varList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varList_2E_element GGS_varList_2E_element::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_varList_2E_element result ;
  const GGS_varList_2E_element * p = (const GGS_varList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaKind_2E_fixedPoint::GGS_formulaKind_2E_fixedPoint (void) :
mProperty_startValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaKind_2E_fixedPoint::~ GGS_formulaKind_2E_fixedPoint (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_formulaKind_2E_fixedPoint GGS_formulaKind_2E_fixedPoint::init_21_ (const GGS_binaryset & in_startValue,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formulaKind_2E_fixedPoint result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_startValue = in_startValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaKind_2E_fixedPoint::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaKind_2E_fixedPoint::GGS_formulaKind_2E_fixedPoint (const GGS_binaryset & inOperand0) :
mProperty_startValue (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaKind_2E_fixedPoint GGS_formulaKind_2E_fixedPoint::class_func_new (const GGS_binaryset & in_startValue,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formulaKind_2E_fixedPoint result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_startValue = in_startValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_formulaKind_2E_fixedPoint::isValid (void) const {
  return mProperty_startValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaKind_2E_fixedPoint::drop (void) {
  mProperty_startValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaKind_2E_fixedPoint::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @formulaKind.fixedPoint:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_startValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @formulaKind.fixedPoint generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaKind_2E_fixedPoint ("formulaKind.fixedPoint",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_formulaKind_2E_fixedPoint::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaKind_2E_fixedPoint ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formulaKind_2E_fixedPoint::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formulaKind_2E_fixedPoint (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaKind_2E_fixedPoint GGS_formulaKind_2E_fixedPoint::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_formulaKind_2E_fixedPoint result ;
  const GGS_formulaKind_2E_fixedPoint * p = (const GGS_formulaKind_2E_fixedPoint *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formulaKind_2E_fixedPoint *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaKind.fixedPoint", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @formulaKind_2E_fixedPoint_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_formulaKind_2E_fixedPoint_3F_::GGS_formulaKind_2E_fixedPoint_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaKind_2E_fixedPoint_3F_::GGS_formulaKind_2E_fixedPoint_3F_ (const GGS_formulaKind_2E_fixedPoint & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_formulaKind_2E_fixedPoint_3F_ GGS_formulaKind_2E_fixedPoint_3F_::init_nil (void) {
  GGS_formulaKind_2E_fixedPoint_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_formulaKind_2E_fixedPoint_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_formulaKind_2E_fixedPoint_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaKind_2E_fixedPoint_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_formulaKind_2E_fixedPoint () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaKind_2E_fixedPoint_3F_::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @formulaKind.fixedPoint? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaKind_2E_fixedPoint_3F_ ("formulaKind.fixedPoint?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_formulaKind_2E_fixedPoint_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaKind_2E_fixedPoint_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formulaKind_2E_fixedPoint_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formulaKind_2E_fixedPoint_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaKind_2E_fixedPoint_3F_ GGS_formulaKind_2E_fixedPoint_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_formulaKind_2E_fixedPoint_3F_ result ;
  const GGS_formulaKind_2E_fixedPoint_3F_ * p = (const GGS_formulaKind_2E_fixedPoint_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formulaKind_2E_fixedPoint_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaKind.fixedPoint?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList_2E_element::GGS_formulaList_2E_element (void) :
mProperty_mFormula () {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList_2E_element::~ GGS_formulaList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_formulaList_2E_element GGS_formulaList_2E_element::init_21_ (const GGS_abstractFormula & in_mFormula,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formulaList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormula = in_mFormula ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList_2E_element::GGS_formulaList_2E_element (const GGS_abstractFormula & inOperand0) :
mProperty_mFormula (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList_2E_element GGS_formulaList_2E_element::class_func_new (const GGS_abstractFormula & in_mFormula,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formulaList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormula = in_mFormula ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_formulaList_2E_element::isValid (void) const {
  return mProperty_mFormula.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList_2E_element::drop (void) {
  mProperty_mFormula.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList_2E_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @formulaList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormula.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @formulaList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaList_2E_element ("formulaList.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_formulaList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formulaList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formulaList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList_2E_element GGS_formulaList_2E_element::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_formulaList_2E_element result ;
  const GGS_formulaList_2E_element * p = (const GGS_formulaList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formulaList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @assignmentFormula reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignmentFormula::objectCompare (const GGS_assignmentFormula & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentFormula::GGS_assignmentFormula (void) :
GGS_abstractFormula () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_assignmentFormula GGS_assignmentFormula::
init_21__21__21__21_ (const GGS_lstring & in_mFormulaName,
                      const GGS_domainFieldList & in_mFormulaArgumentList,
                      const GGS_formulaKind & in_mKind,
                      const GGS_expression & in_mExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_assignmentFormula * object = nullptr ;
  macroMyNew (object, cPtr_assignmentFormula (inCompiler COMMA_THERE)) ;
  object->assignmentFormula_init_21__21__21__21_ (in_mFormulaName, in_mFormulaArgumentList, in_mKind, in_mExpression, inCompiler) ;
  const GGS_assignmentFormula result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assignmentFormula::
assignmentFormula_init_21__21__21__21_ (const GGS_lstring & in_mFormulaName,
                                        const GGS_domainFieldList & in_mFormulaArgumentList,
                                        const GGS_formulaKind & in_mKind,
                                        const GGS_expression & in_mExpression,
                                        Compiler * /* inCompiler */) {
  mProperty_mFormulaName = in_mFormulaName ;
  mProperty_mFormulaArgumentList = in_mFormulaArgumentList ;
  mProperty_mKind = in_mKind ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentFormula::GGS_assignmentFormula (const cPtr_assignmentFormula * inSourcePtr) :
GGS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentFormula) ;
}
//--------------------------------------------------------------------------------------------------

GGS_assignmentFormula GGS_assignmentFormula::class_func_new (const GGS_lstring & in_mFormulaName,
                                                             const GGS_domainFieldList & in_mFormulaArgumentList,
                                                             const GGS_formulaKind & in_mKind,
                                                             const GGS_expression & in_mExpression,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_assignmentFormula result ;
  macroMyNew (result.mObjectPtr, cPtr_assignmentFormula (in_mFormulaName, in_mFormulaArgumentList, in_mKind, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_assignmentFormula::readProperty_mFormulaName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    return p->mProperty_mFormulaName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentFormula::setProperty_mFormulaName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    p->mProperty_mFormulaName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList GGS_assignmentFormula::readProperty_mFormulaArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_domainFieldList () ;
  }else{
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    return p->mProperty_mFormulaArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentFormula::setProperty_mFormulaArgumentList (const GGS_domainFieldList & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    p->mProperty_mFormulaArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formulaKind GGS_assignmentFormula::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formulaKind () ;
  }else{
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentFormula::setProperty_mKind (const GGS_formulaKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    p->mProperty_mKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_expression GGS_assignmentFormula::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_expression () ;
  }else{
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_assignmentFormula::setProperty_mExpression (const GGS_expression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assignmentFormula class
//--------------------------------------------------------------------------------------------------

cPtr_assignmentFormula::cPtr_assignmentFormula (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (inCompiler COMMA_THERE),
mProperty_mFormulaName (),
mProperty_mFormulaArgumentList (),
mProperty_mKind (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_assignmentFormula::cPtr_assignmentFormula (const GGS_lstring & in_mFormulaName,
                                                const GGS_domainFieldList & in_mFormulaArgumentList,
                                                const GGS_formulaKind & in_mKind,
                                                const GGS_expression & in_mExpression,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (inCompiler COMMA_THERE),
mProperty_mFormulaName (),
mProperty_mFormulaArgumentList (),
mProperty_mKind (),
mProperty_mExpression () {
  mProperty_mFormulaName = in_mFormulaName ;
  mProperty_mFormulaArgumentList = in_mFormulaArgumentList ;
  mProperty_mKind = in_mKind ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_assignmentFormula::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentFormula ;
}

void cPtr_assignmentFormula::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@assignmentFormula:") ;
  mProperty_mFormulaName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormulaArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignmentFormula::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assignmentFormula (mProperty_mFormulaName, mProperty_mFormulaArgumentList, mProperty_mKind, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assignmentFormula::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFormula::printNonNullClassInstanceProperties () ;
    mProperty_mFormulaName.printNonNullClassInstanceProperties ("mFormulaName") ;
    mProperty_mFormulaArgumentList.printNonNullClassInstanceProperties ("mFormulaArgumentList") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @assignmentFormula generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentFormula ("assignmentFormula",
                                                                         & kTypeDescriptor_GALGAS_abstractFormula) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_assignmentFormula::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentFormula ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentFormula::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentFormula (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentFormula GGS_assignmentFormula::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_assignmentFormula result ;
  const GGS_assignmentFormula * p = (const GGS_assignmentFormula *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentFormula *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentFormula", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignmentFormula_2E_weak::objectCompare (const GGS_assignmentFormula_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentFormula_2E_weak::GGS_assignmentFormula_2E_weak (void) :
GGS_abstractFormula_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentFormula_2E_weak & GGS_assignmentFormula_2E_weak::operator = (const GGS_assignmentFormula & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentFormula_2E_weak::GGS_assignmentFormula_2E_weak (const GGS_assignmentFormula & inSource) :
GGS_abstractFormula_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_assignmentFormula_2E_weak GGS_assignmentFormula_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_assignmentFormula_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentFormula GGS_assignmentFormula_2E_weak::bang_assignmentFormula_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_assignmentFormula result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignmentFormula) ;
      result = GGS_assignmentFormula ((cPtr_assignmentFormula *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assignmentFormula.weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentFormula_2E_weak ("assignmentFormula.weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractFormula_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_assignmentFormula_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentFormula_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentFormula_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentFormula_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentFormula_2E_weak GGS_assignmentFormula_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_assignmentFormula_2E_weak result ;
  const GGS_assignmentFormula_2E_weak * p = (const GGS_assignmentFormula_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentFormula_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentFormula.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @setting_5F_andCacheMapSize reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_setting_5F_andCacheMapSize::objectCompare (const GGS_setting_5F_andCacheMapSize & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setting_5F_andCacheMapSize::GGS_setting_5F_andCacheMapSize (void) :
GGS_abstractFormula () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_setting_5F_andCacheMapSize GGS_setting_5F_andCacheMapSize::
init_21_ (const GGS_luint & in_mSetting,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_setting_5F_andCacheMapSize * object = nullptr ;
  macroMyNew (object, cPtr_setting_5F_andCacheMapSize (inCompiler COMMA_THERE)) ;
  object->setting_5F_andCacheMapSize_init_21_ (in_mSetting, inCompiler) ;
  const GGS_setting_5F_andCacheMapSize result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_setting_5F_andCacheMapSize::
setting_5F_andCacheMapSize_init_21_ (const GGS_luint & in_mSetting,
                                     Compiler * /* inCompiler */) {
  mProperty_mSetting = in_mSetting ;
}

//--------------------------------------------------------------------------------------------------

GGS_setting_5F_andCacheMapSize::GGS_setting_5F_andCacheMapSize (const cPtr_setting_5F_andCacheMapSize * inSourcePtr) :
GGS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_setting_5F_andCacheMapSize) ;
}
//--------------------------------------------------------------------------------------------------

GGS_setting_5F_andCacheMapSize GGS_setting_5F_andCacheMapSize::class_func_new (const GGS_luint & in_mSetting,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_setting_5F_andCacheMapSize result ;
  macroMyNew (result.mObjectPtr, cPtr_setting_5F_andCacheMapSize (in_mSetting,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_setting_5F_andCacheMapSize::readProperty_mSetting (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_setting_5F_andCacheMapSize * p = (cPtr_setting_5F_andCacheMapSize *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setting_5F_andCacheMapSize) ;
    return p->mProperty_mSetting ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_setting_5F_andCacheMapSize::setProperty_mSetting (const GGS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_setting_5F_andCacheMapSize * p = (cPtr_setting_5F_andCacheMapSize *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setting_5F_andCacheMapSize) ;
    p->mProperty_mSetting = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @setting_andCacheMapSize class
//--------------------------------------------------------------------------------------------------

cPtr_setting_5F_andCacheMapSize::cPtr_setting_5F_andCacheMapSize (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (inCompiler COMMA_THERE),
mProperty_mSetting () {
}

//--------------------------------------------------------------------------------------------------

cPtr_setting_5F_andCacheMapSize::cPtr_setting_5F_andCacheMapSize (const GGS_luint & in_mSetting,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (inCompiler COMMA_THERE),
mProperty_mSetting () {
  mProperty_mSetting = in_mSetting ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_setting_5F_andCacheMapSize::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize ;
}

void cPtr_setting_5F_andCacheMapSize::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@setting_andCacheMapSize:") ;
  mProperty_mSetting.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_setting_5F_andCacheMapSize::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_setting_5F_andCacheMapSize (mProperty_mSetting, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_setting_5F_andCacheMapSize::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFormula::printNonNullClassInstanceProperties () ;
    mProperty_mSetting.printNonNullClassInstanceProperties ("mSetting") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @setting_andCacheMapSize generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize ("setting_andCacheMapSize",
                                                                                  & kTypeDescriptor_GALGAS_abstractFormula) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_setting_5F_andCacheMapSize::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_setting_5F_andCacheMapSize::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_setting_5F_andCacheMapSize (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setting_5F_andCacheMapSize GGS_setting_5F_andCacheMapSize::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_setting_5F_andCacheMapSize result ;
  const GGS_setting_5F_andCacheMapSize * p = (const GGS_setting_5F_andCacheMapSize *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_setting_5F_andCacheMapSize *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setting_andCacheMapSize", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dumpFormula reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dumpFormula::objectCompare (const GGS_dumpFormula & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dumpFormula::GGS_dumpFormula (void) :
GGS_abstractFormula () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dumpFormula GGS_dumpFormula::
init_21_ (const GGS_lstring & in_mFormulaName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_dumpFormula * object = nullptr ;
  macroMyNew (object, cPtr_dumpFormula (inCompiler COMMA_THERE)) ;
  object->dumpFormula_init_21_ (in_mFormulaName, inCompiler) ;
  const GGS_dumpFormula result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dumpFormula::
dumpFormula_init_21_ (const GGS_lstring & in_mFormulaName,
                      Compiler * /* inCompiler */) {
  mProperty_mFormulaName = in_mFormulaName ;
}

//--------------------------------------------------------------------------------------------------

GGS_dumpFormula::GGS_dumpFormula (const cPtr_dumpFormula * inSourcePtr) :
GGS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dumpFormula) ;
}
//--------------------------------------------------------------------------------------------------

GGS_dumpFormula GGS_dumpFormula::class_func_new (const GGS_lstring & in_mFormulaName,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  GGS_dumpFormula result ;
  macroMyNew (result.mObjectPtr, cPtr_dumpFormula (in_mFormulaName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dumpFormula::readProperty_mFormulaName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_dumpFormula * p = (cPtr_dumpFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dumpFormula) ;
    return p->mProperty_mFormulaName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_dumpFormula::setProperty_mFormulaName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_dumpFormula * p = (cPtr_dumpFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dumpFormula) ;
    p->mProperty_mFormulaName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dumpFormula class
//--------------------------------------------------------------------------------------------------

cPtr_dumpFormula::cPtr_dumpFormula (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (inCompiler COMMA_THERE),
mProperty_mFormulaName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dumpFormula::cPtr_dumpFormula (const GGS_lstring & in_mFormulaName,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (inCompiler COMMA_THERE),
mProperty_mFormulaName () {
  mProperty_mFormulaName = in_mFormulaName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dumpFormula::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dumpFormula ;
}

void cPtr_dumpFormula::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@dumpFormula:") ;
  mProperty_mFormulaName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dumpFormula::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dumpFormula (mProperty_mFormulaName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dumpFormula::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFormula::printNonNullClassInstanceProperties () ;
    mProperty_mFormulaName.printNonNullClassInstanceProperties ("mFormulaName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @dumpFormula generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dumpFormula ("dumpFormula",
                                                                   & kTypeDescriptor_GALGAS_abstractFormula) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_dumpFormula::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dumpFormula ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dumpFormula::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dumpFormula (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dumpFormula GGS_dumpFormula::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_dumpFormula result ;
  const GGS_dumpFormula * p = (const GGS_dumpFormula *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dumpFormula *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dumpFormula", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @graphvizFormula reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_graphvizFormula::objectCompare (const GGS_graphvizFormula & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphvizFormula::GGS_graphvizFormula (void) :
GGS_abstractFormula () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_graphvizFormula GGS_graphvizFormula::
init_21_ (const GGS_lstring & in_mFormulaName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_graphvizFormula * object = nullptr ;
  macroMyNew (object, cPtr_graphvizFormula (inCompiler COMMA_THERE)) ;
  object->graphvizFormula_init_21_ (in_mFormulaName, inCompiler) ;
  const GGS_graphvizFormula result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_graphvizFormula::
graphvizFormula_init_21_ (const GGS_lstring & in_mFormulaName,
                          Compiler * /* inCompiler */) {
  mProperty_mFormulaName = in_mFormulaName ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphvizFormula::GGS_graphvizFormula (const cPtr_graphvizFormula * inSourcePtr) :
GGS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_graphvizFormula) ;
}
//--------------------------------------------------------------------------------------------------

GGS_graphvizFormula GGS_graphvizFormula::class_func_new (const GGS_lstring & in_mFormulaName,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GGS_graphvizFormula result ;
  macroMyNew (result.mObjectPtr, cPtr_graphvizFormula (in_mFormulaName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_graphvizFormula::readProperty_mFormulaName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_graphvizFormula * p = (cPtr_graphvizFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphvizFormula) ;
    return p->mProperty_mFormulaName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_graphvizFormula::setProperty_mFormulaName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_graphvizFormula * p = (cPtr_graphvizFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphvizFormula) ;
    p->mProperty_mFormulaName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @graphvizFormula class
//--------------------------------------------------------------------------------------------------

cPtr_graphvizFormula::cPtr_graphvizFormula (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (inCompiler COMMA_THERE),
mProperty_mFormulaName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_graphvizFormula::cPtr_graphvizFormula (const GGS_lstring & in_mFormulaName,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (inCompiler COMMA_THERE),
mProperty_mFormulaName () {
  mProperty_mFormulaName = in_mFormulaName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_graphvizFormula::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphvizFormula ;
}

void cPtr_graphvizFormula::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@graphvizFormula:") ;
  mProperty_mFormulaName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_graphvizFormula::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_graphvizFormula (mProperty_mFormulaName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_graphvizFormula::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFormula::printNonNullClassInstanceProperties () ;
    mProperty_mFormulaName.printNonNullClassInstanceProperties ("mFormulaName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @graphvizFormula generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphvizFormula ("graphvizFormula",
                                                                       & kTypeDescriptor_GALGAS_abstractFormula) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_graphvizFormula::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphvizFormula ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_graphvizFormula::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_graphvizFormula (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphvizFormula GGS_graphvizFormula::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_graphvizFormula result ;
  const GGS_graphvizFormula * p = (const GGS_graphvizFormula *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_graphvizFormula *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphvizFormula", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @varInExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_varInExpression::objectCompare (const GGS_varInExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpression::GGS_varInExpression (void) :
GGS_expression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_varInExpression GGS_varInExpression::
init_21_ (const GGS_lstring & in_mVarName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_varInExpression * object = nullptr ;
  macroMyNew (object, cPtr_varInExpression (inCompiler COMMA_THERE)) ;
  object->varInExpression_init_21_ (in_mVarName, inCompiler) ;
  const GGS_varInExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_varInExpression::
varInExpression_init_21_ (const GGS_lstring & in_mVarName,
                          Compiler * /* inCompiler */) {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpression::GGS_varInExpression (const cPtr_varInExpression * inSourcePtr) :
GGS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_varInExpression GGS_varInExpression::class_func_new (const GGS_lstring & in_mVarName,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GGS_varInExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_varInExpression (in_mVarName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_varInExpression::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_varInExpression * p = (cPtr_varInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpression) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varInExpression::setProperty_mVarName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varInExpression * p = (cPtr_varInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpression) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varInExpression class
//--------------------------------------------------------------------------------------------------

cPtr_varInExpression::cPtr_varInExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mVarName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_varInExpression::cPtr_varInExpression (const GGS_lstring & in_mVarName,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mVarName () {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpression ;
}

void cPtr_varInExpression::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@varInExpression:") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varInExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varInExpression (mProperty_mVarName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_varInExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @varInExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpression ("varInExpression",
                                                                       & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_varInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varInExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpression GGS_varInExpression::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_varInExpression result ;
  const GGS_varInExpression * p = (const GGS_varInExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @varBitInExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_varBitInExpression::objectCompare (const GGS_varBitInExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varBitInExpression::GGS_varBitInExpression (void) :
GGS_expression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_varBitInExpression GGS_varBitInExpression::
init_21__21_ (const GGS_lstring & in_mVarName,
              const GGS_luint & in_mVarBit,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_varBitInExpression * object = nullptr ;
  macroMyNew (object, cPtr_varBitInExpression (inCompiler COMMA_THERE)) ;
  object->varBitInExpression_init_21__21_ (in_mVarName, in_mVarBit, inCompiler) ;
  const GGS_varBitInExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_varBitInExpression::
varBitInExpression_init_21__21_ (const GGS_lstring & in_mVarName,
                                 const GGS_luint & in_mVarBit,
                                 Compiler * /* inCompiler */) {
  mProperty_mVarName = in_mVarName ;
  mProperty_mVarBit = in_mVarBit ;
}

//--------------------------------------------------------------------------------------------------

GGS_varBitInExpression::GGS_varBitInExpression (const cPtr_varBitInExpression * inSourcePtr) :
GGS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varBitInExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_varBitInExpression GGS_varBitInExpression::class_func_new (const GGS_lstring & in_mVarName,
                                                               const GGS_luint & in_mVarBit,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_varBitInExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_varBitInExpression (in_mVarName, in_mVarBit,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_varBitInExpression::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_varBitInExpression * p = (cPtr_varBitInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varBitInExpression) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varBitInExpression::setProperty_mVarName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varBitInExpression * p = (cPtr_varBitInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varBitInExpression) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_varBitInExpression::readProperty_mVarBit (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_varBitInExpression * p = (cPtr_varBitInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varBitInExpression) ;
    return p->mProperty_mVarBit ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varBitInExpression::setProperty_mVarBit (const GGS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_varBitInExpression * p = (cPtr_varBitInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varBitInExpression) ;
    p->mProperty_mVarBit = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varBitInExpression class
//--------------------------------------------------------------------------------------------------

cPtr_varBitInExpression::cPtr_varBitInExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mVarBit () {
}

//--------------------------------------------------------------------------------------------------

cPtr_varBitInExpression::cPtr_varBitInExpression (const GGS_lstring & in_mVarName,
                                                  const GGS_luint & in_mVarBit,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mVarBit () {
  mProperty_mVarName = in_mVarName ;
  mProperty_mVarBit = in_mVarBit ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varBitInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varBitInExpression ;
}

void cPtr_varBitInExpression::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@varBitInExpression:") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVarBit.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varBitInExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varBitInExpression (mProperty_mVarName, mProperty_mVarBit, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_varBitInExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
    mProperty_mVarBit.printNonNullClassInstanceProperties ("mVarBit") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @varBitInExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varBitInExpression ("varBitInExpression",
                                                                          & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_varBitInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varBitInExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varBitInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varBitInExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varBitInExpression GGS_varBitInExpression::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_varBitInExpression result ;
  const GGS_varBitInExpression * p = (const GGS_varBitInExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varBitInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varBitInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @formulaInExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_formulaInExpression::objectCompare (const GGS_formulaInExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaInExpression::GGS_formulaInExpression (void) :
GGS_expression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_formulaInExpression GGS_formulaInExpression::
init_21__21_ (const GGS_lstring & in_mFormulaName,
              const GGS_formulaParameterListInExpression & in_mParameterList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_formulaInExpression * object = nullptr ;
  macroMyNew (object, cPtr_formulaInExpression (inCompiler COMMA_THERE)) ;
  object->formulaInExpression_init_21__21_ (in_mFormulaName, in_mParameterList, inCompiler) ;
  const GGS_formulaInExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_formulaInExpression::
formulaInExpression_init_21__21_ (const GGS_lstring & in_mFormulaName,
                                  const GGS_formulaParameterListInExpression & in_mParameterList,
                                  Compiler * /* inCompiler */) {
  mProperty_mFormulaName = in_mFormulaName ;
  mProperty_mParameterList = in_mParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaInExpression::GGS_formulaInExpression (const cPtr_formulaInExpression * inSourcePtr) :
GGS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_formulaInExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_formulaInExpression GGS_formulaInExpression::class_func_new (const GGS_lstring & in_mFormulaName,
                                                                 const GGS_formulaParameterListInExpression & in_mParameterList,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_formulaInExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_formulaInExpression (in_mFormulaName, in_mParameterList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_formulaInExpression::readProperty_mFormulaName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_formulaInExpression * p = (cPtr_formulaInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_formulaInExpression) ;
    return p->mProperty_mFormulaName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaInExpression::setProperty_mFormulaName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_formulaInExpression * p = (cPtr_formulaInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_formulaInExpression) ;
    p->mProperty_mFormulaName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression GGS_formulaInExpression::readProperty_mParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formulaParameterListInExpression () ;
  }else{
    cPtr_formulaInExpression * p = (cPtr_formulaInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_formulaInExpression) ;
    return p->mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaInExpression::setProperty_mParameterList (const GGS_formulaParameterListInExpression & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_formulaInExpression * p = (cPtr_formulaInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_formulaInExpression) ;
    p->mProperty_mParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @formulaInExpression class
//--------------------------------------------------------------------------------------------------

cPtr_formulaInExpression::cPtr_formulaInExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mFormulaName (),
mProperty_mParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_formulaInExpression::cPtr_formulaInExpression (const GGS_lstring & in_mFormulaName,
                                                    const GGS_formulaParameterListInExpression & in_mParameterList,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mFormulaName (),
mProperty_mParameterList () {
  mProperty_mFormulaName = in_mFormulaName ;
  mProperty_mParameterList = in_mParameterList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_formulaInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaInExpression ;
}

void cPtr_formulaInExpression::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@formulaInExpression:") ;
  mProperty_mFormulaName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_formulaInExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_formulaInExpression (mProperty_mFormulaName, mProperty_mParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_formulaInExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mFormulaName.printNonNullClassInstanceProperties ("mFormulaName") ;
    mProperty_mParameterList.printNonNullClassInstanceProperties ("mParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @formulaInExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaInExpression ("formulaInExpression",
                                                                           & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_formulaInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaInExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formulaInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formulaInExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaInExpression GGS_formulaInExpression::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_formulaInExpression result ;
  const GGS_formulaInExpression * p = (const GGS_formulaInExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formulaInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @comparisonWithConstantInExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_comparisonWithConstantInExpression::objectCompare (const GGS_comparisonWithConstantInExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonWithConstantInExpression::GGS_comparisonWithConstantInExpression (void) :
GGS_expression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_comparisonWithConstantInExpression GGS_comparisonWithConstantInExpression::
init_21__21__21__21_ (const GGS_lstring & in_mVarName,
                      const GGS_lstringlist & in_mFieldNames,
                      const GGS_comparison & in_mComparison,
                      const GGS_luint & in_mConstant,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_comparisonWithConstantInExpression * object = nullptr ;
  macroMyNew (object, cPtr_comparisonWithConstantInExpression (inCompiler COMMA_THERE)) ;
  object->comparisonWithConstantInExpression_init_21__21__21__21_ (in_mVarName, in_mFieldNames, in_mComparison, in_mConstant, inCompiler) ;
  const GGS_comparisonWithConstantInExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_comparisonWithConstantInExpression::
comparisonWithConstantInExpression_init_21__21__21__21_ (const GGS_lstring & in_mVarName,
                                                         const GGS_lstringlist & in_mFieldNames,
                                                         const GGS_comparison & in_mComparison,
                                                         const GGS_luint & in_mConstant,
                                                         Compiler * /* inCompiler */) {
  mProperty_mVarName = in_mVarName ;
  mProperty_mFieldNames = in_mFieldNames ;
  mProperty_mComparison = in_mComparison ;
  mProperty_mConstant = in_mConstant ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonWithConstantInExpression::GGS_comparisonWithConstantInExpression (const cPtr_comparisonWithConstantInExpression * inSourcePtr) :
GGS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonWithConstantInExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_comparisonWithConstantInExpression GGS_comparisonWithConstantInExpression::class_func_new (const GGS_lstring & in_mVarName,
                                                                                               const GGS_lstringlist & in_mFieldNames,
                                                                                               const GGS_comparison & in_mComparison,
                                                                                               const GGS_luint & in_mConstant,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  GGS_comparisonWithConstantInExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_comparisonWithConstantInExpression (in_mVarName, in_mFieldNames, in_mComparison, in_mConstant,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_comparisonWithConstantInExpression::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_comparisonWithConstantInExpression::setProperty_mVarName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_comparisonWithConstantInExpression::readProperty_mFieldNames (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    return p->mProperty_mFieldNames ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_comparisonWithConstantInExpression::setProperty_mFieldNames (const GGS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    p->mProperty_mFieldNames = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparisonWithConstantInExpression::readProperty_mComparison (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_comparison () ;
  }else{
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    return p->mProperty_mComparison ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_comparisonWithConstantInExpression::setProperty_mComparison (const GGS_comparison & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    p->mProperty_mComparison = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_comparisonWithConstantInExpression::readProperty_mConstant (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    return p->mProperty_mConstant ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_comparisonWithConstantInExpression::setProperty_mConstant (const GGS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    p->mProperty_mConstant = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @comparisonWithConstantInExpression class
//--------------------------------------------------------------------------------------------------

cPtr_comparisonWithConstantInExpression::cPtr_comparisonWithConstantInExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mFieldNames (),
mProperty_mComparison (),
mProperty_mConstant () {
}

//--------------------------------------------------------------------------------------------------

cPtr_comparisonWithConstantInExpression::cPtr_comparisonWithConstantInExpression (const GGS_lstring & in_mVarName,
                                                                                  const GGS_lstringlist & in_mFieldNames,
                                                                                  const GGS_comparison & in_mComparison,
                                                                                  const GGS_luint & in_mConstant,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mVarName (),
mProperty_mFieldNames (),
mProperty_mComparison (),
mProperty_mConstant () {
  mProperty_mVarName = in_mVarName ;
  mProperty_mFieldNames = in_mFieldNames ;
  mProperty_mComparison = in_mComparison ;
  mProperty_mConstant = in_mConstant ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_comparisonWithConstantInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonWithConstantInExpression ;
}

void cPtr_comparisonWithConstantInExpression::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@comparisonWithConstantInExpression:") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFieldNames.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mComparison.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstant.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_comparisonWithConstantInExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_comparisonWithConstantInExpression (mProperty_mVarName, mProperty_mFieldNames, mProperty_mComparison, mProperty_mConstant, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_comparisonWithConstantInExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
    mProperty_mFieldNames.printNonNullClassInstanceProperties ("mFieldNames") ;
    mProperty_mComparison.printNonNullClassInstanceProperties ("mComparison") ;
    mProperty_mConstant.printNonNullClassInstanceProperties ("mConstant") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @comparisonWithConstantInExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonWithConstantInExpression ("comparisonWithConstantInExpression",
                                                                                          & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_comparisonWithConstantInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonWithConstantInExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_comparisonWithConstantInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_comparisonWithConstantInExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonWithConstantInExpression GGS_comparisonWithConstantInExpression::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_comparisonWithConstantInExpression result ;
  const GGS_comparisonWithConstantInExpression * p = (const GGS_comparisonWithConstantInExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_comparisonWithConstantInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonWithConstantInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @variableComparisonInExpression reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_variableComparisonInExpression::objectCompare (const GGS_variableComparisonInExpression & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_variableComparisonInExpression::GGS_variableComparisonInExpression (void) :
GGS_expression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_variableComparisonInExpression GGS_variableComparisonInExpression::
init_21__21__21__21__21_ (const GGS_lstring & in_mLeftVarName,
                          const GGS_lstringlist & in_mLeftFieldNames,
                          const GGS_comparison & in_mComparison,
                          const GGS_lstring & in_mRightVarName,
                          const GGS_lstringlist & in_mRightFieldNames,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_variableComparisonInExpression * object = nullptr ;
  macroMyNew (object, cPtr_variableComparisonInExpression (inCompiler COMMA_THERE)) ;
  object->variableComparisonInExpression_init_21__21__21__21__21_ (in_mLeftVarName, in_mLeftFieldNames, in_mComparison, in_mRightVarName, in_mRightFieldNames, inCompiler) ;
  const GGS_variableComparisonInExpression result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_variableComparisonInExpression::
variableComparisonInExpression_init_21__21__21__21__21_ (const GGS_lstring & in_mLeftVarName,
                                                         const GGS_lstringlist & in_mLeftFieldNames,
                                                         const GGS_comparison & in_mComparison,
                                                         const GGS_lstring & in_mRightVarName,
                                                         const GGS_lstringlist & in_mRightFieldNames,
                                                         Compiler * /* inCompiler */) {
  mProperty_mLeftVarName = in_mLeftVarName ;
  mProperty_mLeftFieldNames = in_mLeftFieldNames ;
  mProperty_mComparison = in_mComparison ;
  mProperty_mRightVarName = in_mRightVarName ;
  mProperty_mRightFieldNames = in_mRightFieldNames ;
}

//--------------------------------------------------------------------------------------------------

GGS_variableComparisonInExpression::GGS_variableComparisonInExpression (const cPtr_variableComparisonInExpression * inSourcePtr) :
GGS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_variableComparisonInExpression) ;
}
//--------------------------------------------------------------------------------------------------

GGS_variableComparisonInExpression GGS_variableComparisonInExpression::class_func_new (const GGS_lstring & in_mLeftVarName,
                                                                                       const GGS_lstringlist & in_mLeftFieldNames,
                                                                                       const GGS_comparison & in_mComparison,
                                                                                       const GGS_lstring & in_mRightVarName,
                                                                                       const GGS_lstringlist & in_mRightFieldNames,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_variableComparisonInExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_variableComparisonInExpression (in_mLeftVarName, in_mLeftFieldNames, in_mComparison, in_mRightVarName, in_mRightFieldNames,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_variableComparisonInExpression::readProperty_mLeftVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    return p->mProperty_mLeftVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_variableComparisonInExpression::setProperty_mLeftVarName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    p->mProperty_mLeftVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_variableComparisonInExpression::readProperty_mLeftFieldNames (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    return p->mProperty_mLeftFieldNames ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_variableComparisonInExpression::setProperty_mLeftFieldNames (const GGS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    p->mProperty_mLeftFieldNames = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_variableComparisonInExpression::readProperty_mComparison (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_comparison () ;
  }else{
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    return p->mProperty_mComparison ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_variableComparisonInExpression::setProperty_mComparison (const GGS_comparison & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    p->mProperty_mComparison = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_variableComparisonInExpression::readProperty_mRightVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    return p->mProperty_mRightVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_variableComparisonInExpression::setProperty_mRightVarName (const GGS_lstring & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    p->mProperty_mRightVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_variableComparisonInExpression::readProperty_mRightFieldNames (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    return p->mProperty_mRightFieldNames ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_variableComparisonInExpression::setProperty_mRightFieldNames (const GGS_lstringlist & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    p->mProperty_mRightFieldNames = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @variableComparisonInExpression class
//--------------------------------------------------------------------------------------------------

cPtr_variableComparisonInExpression::cPtr_variableComparisonInExpression (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mLeftVarName (),
mProperty_mLeftFieldNames (),
mProperty_mComparison (),
mProperty_mRightVarName (),
mProperty_mRightFieldNames () {
}

//--------------------------------------------------------------------------------------------------

cPtr_variableComparisonInExpression::cPtr_variableComparisonInExpression (const GGS_lstring & in_mLeftVarName,
                                                                          const GGS_lstringlist & in_mLeftFieldNames,
                                                                          const GGS_comparison & in_mComparison,
                                                                          const GGS_lstring & in_mRightVarName,
                                                                          const GGS_lstringlist & in_mRightFieldNames,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE),
mProperty_mLeftVarName (),
mProperty_mLeftFieldNames (),
mProperty_mComparison (),
mProperty_mRightVarName (),
mProperty_mRightFieldNames () {
  mProperty_mLeftVarName = in_mLeftVarName ;
  mProperty_mLeftFieldNames = in_mLeftFieldNames ;
  mProperty_mComparison = in_mComparison ;
  mProperty_mRightVarName = in_mRightVarName ;
  mProperty_mRightFieldNames = in_mRightFieldNames ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_variableComparisonInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableComparisonInExpression ;
}

void cPtr_variableComparisonInExpression::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@variableComparisonInExpression:") ;
  mProperty_mLeftVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftFieldNames.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mComparison.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightFieldNames.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_variableComparisonInExpression::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_variableComparisonInExpression (mProperty_mLeftVarName, mProperty_mLeftFieldNames, mProperty_mComparison, mProperty_mRightVarName, mProperty_mRightFieldNames, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_variableComparisonInExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftVarName.printNonNullClassInstanceProperties ("mLeftVarName") ;
    mProperty_mLeftFieldNames.printNonNullClassInstanceProperties ("mLeftFieldNames") ;
    mProperty_mComparison.printNonNullClassInstanceProperties ("mComparison") ;
    mProperty_mRightVarName.printNonNullClassInstanceProperties ("mRightVarName") ;
    mProperty_mRightFieldNames.printNonNullClassInstanceProperties ("mRightFieldNames") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @variableComparisonInExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_variableComparisonInExpression ("variableComparisonInExpression",
                                                                                      & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_variableComparisonInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableComparisonInExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_variableComparisonInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_variableComparisonInExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_variableComparisonInExpression GGS_variableComparisonInExpression::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_variableComparisonInExpression result ;
  const GGS_variableComparisonInExpression * p = (const GGS_variableComparisonInExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_variableComparisonInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("variableComparisonInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#include "MF_MemoryControl.h"
#include "C_galgas_CLI_Options.h"

#include "FileManager.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//                             N O N    T E R M I N A L    N A M E S                                
//
//--------------------------------------------------------------------------------------------------

static const char * gNonTerminalNames_kerbdd_grammar [27] = {
  "<start_symbol>",// Index 0
  "<topLevelDeClaration>",// Index 1
  "<recordFields>",// Index 2
  "<type>",// Index 3
  "<expression>",// Index 4
  "<comparison>",// Index 5
  "<term>",// Index 6
  "<factor>",// Index 7
  "<select_kerbdd_5F_syntax_0>",// Index 8
  "<select_kerbdd_5F_syntax_1>",// Index 9
  "<select_kerbdd_5F_syntax_2>",// Index 10
  "<select_kerbdd_5F_syntax_3>",// Index 11
  "<select_kerbdd_5F_syntax_4>",// Index 12
  "<select_kerbdd_5F_syntax_5>",// Index 13
  "<select_kerbdd_5F_syntax_6>",// Index 14
  "<select_kerbdd_5F_syntax_7>",// Index 15
  "<select_kerbdd_5F_syntax_8>",// Index 16
  "<select_kerbdd_5F_syntax_9>",// Index 17
  "<select_kerbdd_5F_syntax_10>",// Index 18
  "<select_kerbdd_5F_syntax_11>",// Index 19
  "<select_kerbdd_5F_syntax_12>",// Index 20
  "<select_kerbdd_5F_syntax_13>",// Index 21
  "<select_kerbdd_5F_syntax_14>",// Index 22
  "<select_kerbdd_5F_syntax_15>",// Index 23
  "<select_kerbdd_5F_syntax_16>",// Index 24
  "<select_kerbdd_5F_syntax_17>",// Index 25
  "<>"// Index 26
} ;

//--------------------------------------------------------------------------------------------------
//
//                      S L R    A N A L Y Z E R    A C T I O N    T A B L E                        
//
//--------------------------------------------------------------------------------------------------

// Action tables handle shift and reduce actions:
//  - a shift action is (terminal_symbol, SHIFT (n)): if shifts to state n;
//  - the accept action is (terminal_symbol, ACCEPT);
//  - a reduce action is (terminal_symbol, REDUCE (n)); if reduces to state n.

static const int32_t gActionTable_kerbdd_grammar [] = {
// State S0 (index = 0)
  Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_SHIFT (1)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (2)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_SHIFT (3)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_SHIFT (4)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_SHIFT (5)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_SHIFT (6)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (21)
, BOTTOM_UP_END
// State S1 (index = 15)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (10)
, BOTTOM_UP_END
// State S2 (index = 18)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (11)
, BOTTOM_UP_END
// State S3 (index = 21)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (12)
, BOTTOM_UP_END
// State S4 (index = 24)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (13)
, BOTTOM_UP_END
// State S5 (index = 27)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (14)
, BOTTOM_UP_END
// State S6 (index = 30)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (15)
, BOTTOM_UP_END
// State S7 (index = 33)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_ACCEPT
, BOTTOM_UP_END
// State S8 (index = 36)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_SHIFT (1)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (2)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_SHIFT (3)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_SHIFT (4)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_SHIFT (5)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_SHIFT (6)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (21)
, BOTTOM_UP_END
// State S9 (index = 51)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (0)
, BOTTOM_UP_END
// State S10 (index = 54)
, Lexique_kerbdd_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (17)
, BOTTOM_UP_END
// State S11 (index = 57)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (18)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (31)
, BOTTOM_UP_END
// State S12 (index = 62)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (21)
, BOTTOM_UP_END
// State S13 (index = 65)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S14 (index = 68)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (23)
, BOTTOM_UP_END
// State S15 (index = 71)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (24)
, BOTTOM_UP_END
// State S16 (index = 74)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (22)
, BOTTOM_UP_END
// State S17 (index = 77)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (25)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (26)
, Lexique_kerbdd_5F_lexique::kToken_bool, BOTTOM_UP_SHIFT (27)
, BOTTOM_UP_END
// State S18 (index = 84)
, Lexique_kerbdd_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (31)
, BOTTOM_UP_END
// State S19 (index = 87)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (32)
, BOTTOM_UP_END
// State S20 (index = 90)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (32)
, BOTTOM_UP_END
// State S21 (index = 93)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_REDUCE (5)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (5)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_REDUCE (5)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_REDUCE (5)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_REDUCE (5)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (5)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (5)
, BOTTOM_UP_END
// State S22 (index = 108)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_REDUCE (6)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (6)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_REDUCE (6)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_REDUCE (6)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_REDUCE (6)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (6)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (6)
, BOTTOM_UP_END
// State S23 (index = 123)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_REDUCE (7)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (7)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_REDUCE (7)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_REDUCE (7)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_REDUCE (7)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (7)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (7)
, BOTTOM_UP_END
// State S24 (index = 138)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_REDUCE (8)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (8)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_REDUCE (8)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_REDUCE (8)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_REDUCE (8)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (8)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (8)
, BOTTOM_UP_END
// State S25 (index = 153)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (27)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (27)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (27)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (27)
, BOTTOM_UP_END
// State S26 (index = 162)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (18)
, BOTTOM_UP_END
// State S27 (index = 165)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (29)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (29)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (29)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (29)
, Lexique_kerbdd_5F_lexique::kToken__5B_, BOTTOM_UP_SHIFT (34)
, BOTTOM_UP_END
// State S28 (index = 176)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (23)
, BOTTOM_UP_END
// State S29 (index = 179)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (36)
, BOTTOM_UP_END
// State S30 (index = 182)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (3)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (3)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (3)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (3)
, BOTTOM_UP_END
// State S31 (index = 191)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (25)
, Lexique_kerbdd_5F_lexique::kToken_bool, BOTTOM_UP_SHIFT (27)
, BOTTOM_UP_END
// State S32 (index = 196)
, Lexique_kerbdd_5F_lexique::kToken__3A__3D_, BOTTOM_UP_SHIFT (38)
, Lexique_kerbdd_5F_lexique::kToken__2B__3D_, BOTTOM_UP_SHIFT (39)
, Lexique_kerbdd_5F_lexique::kToken__2D__3D_, BOTTOM_UP_SHIFT (40)
, BOTTOM_UP_END
// State S33 (index = 203)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (42)
, BOTTOM_UP_END
// State S34 (index = 206)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (43)
, BOTTOM_UP_END
// State S35 (index = 209)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (28)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (28)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (28)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (28)
, BOTTOM_UP_END
// State S36 (index = 218)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_REDUCE (1)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (1)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_REDUCE (1)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_REDUCE (1)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_REDUCE (1)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (1)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (1)
, BOTTOM_UP_END
// State S37 (index = 233)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (25)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (25)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (44)
, BOTTOM_UP_END
// State S38 (index = 240)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (33)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (33)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_REDUCE (33)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_REDUCE (33)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_REDUCE (33)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_REDUCE (33)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_REDUCE (33)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (33)
, BOTTOM_UP_END
// State S39 (index = 257)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (34)
, BOTTOM_UP_END
// State S40 (index = 274)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (35)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (35)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_REDUCE (35)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_REDUCE (35)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_REDUCE (35)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_REDUCE (35)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_REDUCE (35)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (35)
, BOTTOM_UP_END
// State S41 (index = 291)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END
// State S42 (index = 308)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (24)
, BOTTOM_UP_END
// State S43 (index = 311)
, Lexique_kerbdd_5F_lexique::kToken__5D_, BOTTOM_UP_SHIFT (58)
, BOTTOM_UP_END
// State S44 (index = 314)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (59)
, BOTTOM_UP_END
// State S45 (index = 317)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (2)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (2)
, BOTTOM_UP_END
// State S46 (index = 322)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (60)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (45)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (45)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (45)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (45)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (45)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (45)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (45)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (45)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (61)
, BOTTOM_UP_END
// State S47 (index = 343)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END
// State S48 (index = 360)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END
// State S49 (index = 377)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (15)
, BOTTOM_UP_END
// State S50 (index = 394)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (16)
, BOTTOM_UP_END
// State S51 (index = 411)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (18)
, BOTTOM_UP_END
// State S52 (index = 414)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (18)
, BOTTOM_UP_END
// State S53 (index = 417)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (67)
, BOTTOM_UP_END
// State S54 (index = 420)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (68)
, BOTTOM_UP_END
// State S55 (index = 423)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (36)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (36)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_SHIFT (69)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_SHIFT (70)
, BOTTOM_UP_END
// State S56 (index = 432)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_SHIFT (72)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S57 (index = 445)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_SHIFT (75)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_SHIFT (76)
, BOTTOM_UP_END
// State S58 (index = 462)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (30)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (30)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (30)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (30)
, BOTTOM_UP_END
// State S59 (index = 471)
, Lexique_kerbdd_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (78)
, BOTTOM_UP_END
// State S60 (index = 474)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (79)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (47)
, BOTTOM_UP_END
// State S61 (index = 479)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
// State S62 (index = 482)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (12)
, BOTTOM_UP_END
// State S63 (index = 499)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (82)
, BOTTOM_UP_END
// State S64 (index = 502)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (14)
, BOTTOM_UP_END
// State S65 (index = 519)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (83)
, BOTTOM_UP_END
// State S66 (index = 522)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (84)
, BOTTOM_UP_END
// State S67 (index = 525)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (85)
, Lexique_kerbdd_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_kerbdd_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (53)
, Lexique_kerbdd_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_kerbdd_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (53)
, BOTTOM_UP_END
// State S68 (index = 540)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_REDUCE (4)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (4)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_REDUCE (4)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_REDUCE (4)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_REDUCE (4)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (4)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (4)
, BOTTOM_UP_END
// State S69 (index = 555)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END
// State S70 (index = 572)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END
// State S71 (index = 589)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (9)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (9)
, BOTTOM_UP_END
// State S72 (index = 594)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END
// State S73 (index = 611)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END
// State S74 (index = 628)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (10)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (10)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (10)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (10)
, BOTTOM_UP_END
// State S75 (index = 637)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END
// State S76 (index = 654)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END
// State S77 (index = 671)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (11)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (11)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (11)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (11)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (11)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (11)
, BOTTOM_UP_END
// State S78 (index = 684)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (25)
, Lexique_kerbdd_5F_lexique::kToken_bool, BOTTOM_UP_SHIFT (27)
, BOTTOM_UP_END
// State S79 (index = 689)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (51)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (51)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (94)
, BOTTOM_UP_END
// State S80 (index = 696)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (96)
, BOTTOM_UP_END
// State S81 (index = 699)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (46)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (46)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (46)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (46)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (46)
, BOTTOM_UP_END
// State S82 (index = 716)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (13)
, BOTTOM_UP_END
// State S83 (index = 733)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END
// State S84 (index = 750)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END
// State S85 (index = 767)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (99)
, BOTTOM_UP_END
// State S86 (index = 770)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_SHIFT (100)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_SHIFT (101)
, Lexique_kerbdd_5F_lexique::kToken__3C__3D_, BOTTOM_UP_SHIFT (102)
, Lexique_kerbdd_5F_lexique::kToken__3C_, BOTTOM_UP_SHIFT (103)
, Lexique_kerbdd_5F_lexique::kToken__3E__3D_, BOTTOM_UP_SHIFT (104)
, Lexique_kerbdd_5F_lexique::kToken__3E_, BOTTOM_UP_SHIFT (105)
, BOTTOM_UP_END
// State S87 (index = 783)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (37)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (37)
, BOTTOM_UP_END
// State S88 (index = 788)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (38)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (38)
, BOTTOM_UP_END
// State S89 (index = 793)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_SHIFT (72)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S90 (index = 806)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_SHIFT (72)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END
// State S91 (index = 819)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_SHIFT (75)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_SHIFT (76)
, BOTTOM_UP_END
// State S92 (index = 836)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_SHIFT (75)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_SHIFT (76)
, BOTTOM_UP_END
// State S93 (index = 853)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (25)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (25)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (44)
, BOTTOM_UP_END
// State S94 (index = 860)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (112)
, BOTTOM_UP_END
// State S95 (index = 863)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (49)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (113)
, BOTTOM_UP_END
// State S96 (index = 868)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (17)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (17)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (17)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (17)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (17)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (17)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (17)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (17)
, BOTTOM_UP_END
// State S97 (index = 885)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (115)
, BOTTOM_UP_END
// State S98 (index = 888)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (116)
, BOTTOM_UP_END
// State S99 (index = 891)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (85)
, Lexique_kerbdd_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_kerbdd_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (53)
, Lexique_kerbdd_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_kerbdd_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (53)
, BOTTOM_UP_END
// State S100 (index = 906)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (55)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (55)
, BOTTOM_UP_END
// State S101 (index = 911)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (56)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (56)
, BOTTOM_UP_END
// State S102 (index = 916)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (57)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (57)
, BOTTOM_UP_END
// State S103 (index = 921)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (58)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (58)
, BOTTOM_UP_END
// State S104 (index = 926)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (59)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (59)
, BOTTOM_UP_END
// State S105 (index = 931)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (60)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (60)
, BOTTOM_UP_END
// State S106 (index = 936)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (118)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (119)
, BOTTOM_UP_END
// State S107 (index = 941)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (40)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (40)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (40)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (40)
, BOTTOM_UP_END
// State S108 (index = 950)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (41)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (41)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (41)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (41)
, BOTTOM_UP_END
// State S109 (index = 959)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (43)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (43)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (43)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (43)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (43)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (43)
, BOTTOM_UP_END
// State S110 (index = 972)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (44)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (44)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (44)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (44)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (44)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (44)
, BOTTOM_UP_END
// State S111 (index = 985)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (26)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (26)
, BOTTOM_UP_END
// State S112 (index = 990)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (51)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (51)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (94)
, BOTTOM_UP_END
// State S113 (index = 997)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (122)
, BOTTOM_UP_END
// State S114 (index = 1000)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (48)
, BOTTOM_UP_END
// State S115 (index = 1003)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (18)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (18)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (18)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (18)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (18)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (18)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (18)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (18)
, BOTTOM_UP_END
// State S116 (index = 1020)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (19)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (19)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (19)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (19)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (19)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (19)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (19)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (19)
, BOTTOM_UP_END
// State S117 (index = 1037)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (54)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (54)
, Lexique_kerbdd_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (54)
, Lexique_kerbdd_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (54)
, Lexique_kerbdd_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (54)
, Lexique_kerbdd_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (54)
, BOTTOM_UP_END
// State S118 (index = 1050)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (123)
, Lexique_kerbdd_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (63)
, BOTTOM_UP_END
// State S119 (index = 1055)
, Lexique_kerbdd_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (61)
, BOTTOM_UP_END
// State S120 (index = 1058)
, Lexique_kerbdd_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (125)
, BOTTOM_UP_END
// State S121 (index = 1061)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (52)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (52)
, BOTTOM_UP_END
// State S122 (index = 1066)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (51)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (51)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (94)
, BOTTOM_UP_END
// State S123 (index = 1073)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (127)
, BOTTOM_UP_END
// State S124 (index = 1076)
, Lexique_kerbdd_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (62)
, BOTTOM_UP_END
// State S125 (index = 1079)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (20)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (20)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (20)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (20)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (20)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (20)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (20)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (20)
, BOTTOM_UP_END
// State S126 (index = 1096)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (49)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (113)
, BOTTOM_UP_END
// State S127 (index = 1101)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (123)
, Lexique_kerbdd_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (63)
, BOTTOM_UP_END
// State S128 (index = 1106)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (50)
, BOTTOM_UP_END
// State S129 (index = 1109)
, Lexique_kerbdd_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (64)
, BOTTOM_UP_END} ;

static const uint32_t gActionTableIndex_kerbdd_grammar [130] = {
  0  // S0
, 15  // S1
, 18  // S2
, 21  // S3
, 24  // S4
, 27  // S5
, 30  // S6
, 33  // S7
, 36  // S8
, 51  // S9
, 54  // S10
, 57  // S11
, 62  // S12
, 65  // S13
, 68  // S14
, 71  // S15
, 74  // S16
, 77  // S17
, 84  // S18
, 87  // S19
, 90  // S20
, 93  // S21
, 108  // S22
, 123  // S23
, 138  // S24
, 153  // S25
, 162  // S26
, 165  // S27
, 176  // S28
, 179  // S29
, 182  // S30
, 191  // S31
, 196  // S32
, 203  // S33
, 206  // S34
, 209  // S35
, 218  // S36
, 233  // S37
, 240  // S38
, 257  // S39
, 274  // S40
, 291  // S41
, 308  // S42
, 311  // S43
, 314  // S44
, 317  // S45
, 322  // S46
, 343  // S47
, 360  // S48
, 377  // S49
, 394  // S50
, 411  // S51
, 414  // S52
, 417  // S53
, 420  // S54
, 423  // S55
, 432  // S56
, 445  // S57
, 462  // S58
, 471  // S59
, 474  // S60
, 479  // S61
, 482  // S62
, 499  // S63
, 502  // S64
, 519  // S65
, 522  // S66
, 525  // S67
, 540  // S68
, 555  // S69
, 572  // S70
, 589  // S71
, 594  // S72
, 611  // S73
, 628  // S74
, 637  // S75
, 654  // S76
, 671  // S77
, 684  // S78
, 689  // S79
, 696  // S80
, 699  // S81
, 716  // S82
, 733  // S83
, 750  // S84
, 767  // S85
, 770  // S86
, 783  // S87
, 788  // S88
, 793  // S89
, 806  // S90
, 819  // S91
, 836  // S92
, 853  // S93
, 860  // S94
, 863  // S95
, 868  // S96
, 885  // S97
, 888  // S98
, 891  // S99
, 906  // S100
, 911  // S101
, 916  // S102
, 921  // S103
, 926  // S104
, 931  // S105
, 936  // S106
, 941  // S107
, 950  // S108
, 959  // S109
, 972  // S110
, 985  // S111
, 990  // S112
, 997  // S113
, 1000  // S114
, 1003  // S115
, 1020  // S116
, 1037  // S117
, 1050  // S118
, 1055  // S119
, 1058  // S120
, 1061  // S121
, 1066  // S122
, 1073  // S123
, 1076  // S124
, 1079  // S125
, 1096  // S126
, 1101  // S127
, 1106  // S128
, 1109  // S129
} ;

//--------------------------------------------------------------------------------------------------
//
//                                  SLR states successors table                                     
//
//--------------------------------------------------------------------------------------------------

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int32_t gSuccessorTable_kerbdd_grammar_0 [7] = {0, 7,
  1, 8,
  8, 9, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_8 [5] = {1, 8,
  8, 16, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_11 [5] = {2, 19,
  13, 20, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_17 [7] = {3, 28,
  9, 29,
  11, 30, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_26 [3] = {2, 33, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_27 [3] = {12, 35, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_31 [5] = {3, 37,
  11, 30, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_32 [3] = {14, 41, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_37 [3] = {10, 45, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_41 [9] = {4, 54,
  5, 55,
  6, 56,
  7, 57, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_46 [3] = {18, 62, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_47 [9] = {4, 63,
  5, 55,
  6, 56,
  7, 57, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_48 [3] = {7, 64, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_51 [3] = {2, 65, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_52 [3] = {2, 66, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_55 [3] = {15, 71, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_56 [3] = {16, 74, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_57 [3] = {17, 77, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_60 [3] = {19, 80, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_67 [3] = {22, 86, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_69 [7] = {5, 87,
  6, 56,
  7, 57, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_70 [7] = {5, 88,
  6, 56,
  7, 57, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_72 [5] = {6, 89,
  7, 57, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_73 [5] = {6, 90,
  7, 57, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_75 [3] = {7, 91, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_76 [3] = {7, 92, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_78 [5] = {3, 93,
  11, 30, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_79 [3] = {21, 95, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_83 [9] = {4, 97,
  5, 55,
  6, 56,
  7, 57, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_84 [9] = {4, 98,
  5, 55,
  6, 56,
  7, 57, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_86 [3] = {23, 106, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_89 [3] = {16, 107, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_90 [3] = {16, 108, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_91 [3] = {17, 109, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_92 [3] = {17, 110, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_93 [3] = {10, 111, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_95 [3] = {20, 114, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_99 [3] = {22, 117, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_106 [3] = {24, 120, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_112 [3] = {21, 121, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_118 [3] = {25, 124, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_122 [3] = {21, 126, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_126 [3] = {20, 128, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_127 [3] = {25, 129, -1} ;

static const int32_t * gSuccessorTable_kerbdd_grammar [130] = {
gSuccessorTable_kerbdd_grammar_0, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_kerbdd_grammar_8, nullptr, nullptr, gSuccessorTable_kerbdd_grammar_11, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_kerbdd_grammar_17, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_kerbdd_grammar_26, gSuccessorTable_kerbdd_grammar_27, 
  nullptr, nullptr, nullptr, gSuccessorTable_kerbdd_grammar_31, 
  gSuccessorTable_kerbdd_grammar_32, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_kerbdd_grammar_37, nullptr, nullptr, 
  nullptr, gSuccessorTable_kerbdd_grammar_41, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_kerbdd_grammar_46, gSuccessorTable_kerbdd_grammar_47, 
  gSuccessorTable_kerbdd_grammar_48, nullptr, nullptr, gSuccessorTable_kerbdd_grammar_51, 
  gSuccessorTable_kerbdd_grammar_52, nullptr, nullptr, gSuccessorTable_kerbdd_grammar_55, 
  gSuccessorTable_kerbdd_grammar_56, gSuccessorTable_kerbdd_grammar_57, nullptr, nullptr, 
  gSuccessorTable_kerbdd_grammar_60, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_kerbdd_grammar_67, 
  nullptr, gSuccessorTable_kerbdd_grammar_69, gSuccessorTable_kerbdd_grammar_70, nullptr, 
  gSuccessorTable_kerbdd_grammar_72, gSuccessorTable_kerbdd_grammar_73, nullptr, gSuccessorTable_kerbdd_grammar_75, 
  gSuccessorTable_kerbdd_grammar_76, nullptr, gSuccessorTable_kerbdd_grammar_78, gSuccessorTable_kerbdd_grammar_79, 
  nullptr, nullptr, nullptr, gSuccessorTable_kerbdd_grammar_83, 
  gSuccessorTable_kerbdd_grammar_84, nullptr, gSuccessorTable_kerbdd_grammar_86, nullptr, 
  nullptr, gSuccessorTable_kerbdd_grammar_89, gSuccessorTable_kerbdd_grammar_90, gSuccessorTable_kerbdd_grammar_91, 
  gSuccessorTable_kerbdd_grammar_92, gSuccessorTable_kerbdd_grammar_93, nullptr, gSuccessorTable_kerbdd_grammar_95, 
  nullptr, nullptr, nullptr, gSuccessorTable_kerbdd_grammar_99, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_kerbdd_grammar_106, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_kerbdd_grammar_112, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_kerbdd_grammar_118, nullptr, 
  nullptr, nullptr, gSuccessorTable_kerbdd_grammar_122, nullptr, 
  nullptr, nullptr, gSuccessorTable_kerbdd_grammar_126, gSuccessorTable_kerbdd_grammar_127, 
  nullptr, nullptr} ;

//--------------------------------------------------------------------------------------------------
//
//                Production rules infos (left non terminal, size of right string)                  
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionsTable_kerbdd_grammar [66 * 2] = {
  0, 1,
  1, 5,
  2, 4,
  3, 1,
  1, 7,
  1, 3,
  1, 3,
  1, 3,
  1, 3,
  4, 2,
  5, 2,
  6, 2,
  7, 2,
  7, 3,
  7, 2,
  7, 1,
  7, 1,
  7, 4,
  7, 5,
  7, 5,
  7, 6,
  8, 0,
  8, 2,
  9, 1,
  9, 3,
  10, 0,
  10, 5,
  11, 1,
  11, 2,
  12, 0,
  12, 3,
  13, 0,
  13, 1,
  14, 1,
  14, 1,
  14, 1,
  15, 0,
  15, 2,
  15, 2,
  16, 0,
  16, 3,
  16, 3,
  17, 0,
  17, 3,
  17, 3,
  18, 0,
  18, 2,
  19, 0,
  19, 3,
  20, 0,
  20, 4,
  21, 0,
  21, 3,
  22, 0,
  22, 3,
  23, 1,
  23, 1,
  23, 1,
  23, 1,
  23, 1,
  23, 1,
  24, 1,
  24, 2,
  25, 0,
  25, 3,
  26, 1
} ;

//--------------------------------------------------------------------------------------------------
//
//                           'start_symbol' non terminal implementation                             
//
//--------------------------------------------------------------------------------------------------

void cGrammar_kerbdd_5F_grammar::nt_start_5F_symbol_parse (Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_kerbdd_5F_syntax_start_5F_symbol_i0_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_start_5F_symbol_indexing (Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_kerbdd_5F_syntax_start_5F_symbol_i0_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_start_5F_symbol_ (GGS_ast &  parameter_1,
                                Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_kerbdd_5F_syntax_start_5F_symbol_i0_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_kerbdd_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_kerbdd_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performBottomUpParsing (gActionTable_kerbdd_grammar, gNonTerminalNames_kerbdd_grammar,
                                                     gActionTableIndex_kerbdd_grammar, gSuccessorTable_kerbdd_grammar,
                                                     gProductionsTable_kerbdd_grammar) ;
    if (ok) {
      cGrammar_kerbdd_5F_grammar grammar ;
      grammar.nt_start_5F_symbol_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_kerbdd_5F_grammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_kerbdd_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_kerbdd_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_kerbdd_5F_grammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_kerbdd_5F_lexique * scanner = nullptr ;
  macroMyNew (scanner, Lexique_kerbdd_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performBottomUpParsing (gActionTable_kerbdd_grammar, gNonTerminalNames_kerbdd_grammar,
                                     gActionTableIndex_kerbdd_grammar, gSuccessorTable_kerbdd_grammar,
                                     gProductionsTable_kerbdd_grammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_kerbdd_5F_grammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath,
                                GGS_ast &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
      Lexique_kerbdd_5F_lexique * scanner = nullptr ;
      macroMyNew (scanner, Lexique_kerbdd_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
      if (scanner->sourceText ().isValid ()) {
        const bool ok = scanner->performBottomUpParsing (gActionTable_kerbdd_grammar, gNonTerminalNames_kerbdd_grammar,
                                                         gActionTableIndex_kerbdd_grammar, gSuccessorTable_kerbdd_grammar,
                                                         gProductionsTable_kerbdd_grammar) ;
        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
          cGrammar_kerbdd_5F_grammar grammar ;
          grammar.nt_start_5F_symbol_ (parameter_1, scanner) ;
        }
      }else{
        String message ;
        message.appendString ("the '") ;
        message.appendString (filePath) ;
        message.appendString ("' file exists, but cannot be read") ;
        const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.appendString ("the '") ;
      message.appendString (filePath) ;
      message.appendString ("' file does not exist") ;
      const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <FixItDescription> () COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void cGrammar_kerbdd_5F_grammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString,
                                GGS_ast &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_kerbdd_5F_lexique * scanner = nullptr ;
    macroMyNew (scanner, Lexique_kerbdd_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performBottomUpParsing (gActionTable_kerbdd_grammar, gNonTerminalNames_kerbdd_grammar,
                                                       gActionTableIndex_kerbdd_grammar, gSuccessorTable_kerbdd_grammar,
                                                       gProductionsTable_kerbdd_grammar) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_kerbdd_5F_grammar grammar ;
        grammar.nt_start_5F_symbol_ (parameter_1, scanner) ;
      }
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                       'topLevelDeClaration' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_kerbdd_5F_grammar::nt_topLevelDeClaration_parse (Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i1_parse(inLexique) ;
    break ;
  case 4 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i4_parse(inLexique) ;
    break ;
  case 5 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i5_parse(inLexique) ;
    break ;
  case 6 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i6_parse(inLexique) ;
    break ;
  case 7 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i7_parse(inLexique) ;
    break ;
  case 8 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i8_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_topLevelDeClaration_indexing (Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i1_indexing(inLexique) ;
    break ;
  case 4 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i4_indexing(inLexique) ;
    break ;
  case 5 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i5_indexing(inLexique) ;
    break ;
  case 6 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i6_indexing(inLexique) ;
    break ;
  case 7 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i7_indexing(inLexique) ;
    break ;
  case 8 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i8_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_topLevelDeClaration_ (GGS_ast &  parameter_1,
                                Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i1_(parameter_1, inLexique) ;
    break ;
  case 4 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i4_(parameter_1, inLexique) ;
    break ;
  case 5 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i5_(parameter_1, inLexique) ;
    break ;
  case 6 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i6_(parameter_1, inLexique) ;
    break ;
  case 7 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i7_(parameter_1, inLexique) ;
    break ;
  case 8 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i8_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                           'recordFields' non terminal implementation                             
//
//--------------------------------------------------------------------------------------------------

void cGrammar_kerbdd_5F_grammar::nt_recordFields_parse (Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_kerbdd_5F_syntax_recordFields_i2_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_recordFields_indexing (Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_kerbdd_5F_syntax_recordFields_i2_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_recordFields_ (GGS_domainFieldList &  parameter_1,
                                Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_kerbdd_5F_syntax_recordFields_i2_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                               'type' non terminal implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_kerbdd_5F_grammar::nt_type_parse (Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_kerbdd_5F_syntax_type_i3_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_type_indexing (Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_kerbdd_5F_syntax_type_i3_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_type_ (GGS_bddType &  parameter_1,
                                Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_kerbdd_5F_syntax_type_i3_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                            'expression' non terminal implementation                              
//
//--------------------------------------------------------------------------------------------------

void cGrammar_kerbdd_5F_grammar::nt_expression_parse (Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 9) {
  rule_kerbdd_5F_syntax_expression_i9_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_expression_indexing (Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 9) {
  rule_kerbdd_5F_syntax_expression_i9_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_expression_ (GGS_expression &  parameter_1,
                                Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 9) {
  rule_kerbdd_5F_syntax_expression_i9_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                            'comparison' non terminal implementation                              
//
//--------------------------------------------------------------------------------------------------

void cGrammar_kerbdd_5F_grammar::nt_comparison_parse (Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 10) {
  rule_kerbdd_5F_syntax_comparison_i10_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_comparison_indexing (Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 10) {
  rule_kerbdd_5F_syntax_comparison_i10_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_comparison_ (GGS_expression &  parameter_1,
                                Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 10) {
  rule_kerbdd_5F_syntax_comparison_i10_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                               'term' non terminal implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_kerbdd_5F_grammar::nt_term_parse (Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 11) {
  rule_kerbdd_5F_syntax_term_i11_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_term_indexing (Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 11) {
  rule_kerbdd_5F_syntax_term_i11_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_term_ (GGS_expression &  parameter_1,
                                Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 11) {
  rule_kerbdd_5F_syntax_term_i11_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                              'factor' non terminal implementation                                
//
//--------------------------------------------------------------------------------------------------

void cGrammar_kerbdd_5F_grammar::nt_factor_parse (Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 12 :
      rule_kerbdd_5F_syntax_factor_i12_parse(inLexique) ;
    break ;
  case 13 :
      rule_kerbdd_5F_syntax_factor_i13_parse(inLexique) ;
    break ;
  case 14 :
      rule_kerbdd_5F_syntax_factor_i14_parse(inLexique) ;
    break ;
  case 15 :
      rule_kerbdd_5F_syntax_factor_i15_parse(inLexique) ;
    break ;
  case 16 :
      rule_kerbdd_5F_syntax_factor_i16_parse(inLexique) ;
    break ;
  case 17 :
      rule_kerbdd_5F_syntax_factor_i17_parse(inLexique) ;
    break ;
  case 18 :
      rule_kerbdd_5F_syntax_factor_i18_parse(inLexique) ;
    break ;
  case 19 :
      rule_kerbdd_5F_syntax_factor_i19_parse(inLexique) ;
    break ;
  case 20 :
      rule_kerbdd_5F_syntax_factor_i20_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_factor_indexing (Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 12 :
      rule_kerbdd_5F_syntax_factor_i12_indexing(inLexique) ;
    break ;
  case 13 :
      rule_kerbdd_5F_syntax_factor_i13_indexing(inLexique) ;
    break ;
  case 14 :
      rule_kerbdd_5F_syntax_factor_i14_indexing(inLexique) ;
    break ;
  case 15 :
      rule_kerbdd_5F_syntax_factor_i15_indexing(inLexique) ;
    break ;
  case 16 :
      rule_kerbdd_5F_syntax_factor_i16_indexing(inLexique) ;
    break ;
  case 17 :
      rule_kerbdd_5F_syntax_factor_i17_indexing(inLexique) ;
    break ;
  case 18 :
      rule_kerbdd_5F_syntax_factor_i18_indexing(inLexique) ;
    break ;
  case 19 :
      rule_kerbdd_5F_syntax_factor_i19_indexing(inLexique) ;
    break ;
  case 20 :
      rule_kerbdd_5F_syntax_factor_i20_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_factor_ (GGS_expression &  parameter_1,
                                Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 12 :
      rule_kerbdd_5F_syntax_factor_i12_(parameter_1, inLexique) ;
    break ;
  case 13 :
      rule_kerbdd_5F_syntax_factor_i13_(parameter_1, inLexique) ;
    break ;
  case 14 :
      rule_kerbdd_5F_syntax_factor_i14_(parameter_1, inLexique) ;
    break ;
  case 15 :
      rule_kerbdd_5F_syntax_factor_i15_(parameter_1, inLexique) ;
    break ;
  case 16 :
      rule_kerbdd_5F_syntax_factor_i16_(parameter_1, inLexique) ;
    break ;
  case 17 :
      rule_kerbdd_5F_syntax_factor_i17_(parameter_1, inLexique) ;
    break ;
  case 18 :
      rule_kerbdd_5F_syntax_factor_i18_(parameter_1, inLexique) ;
    break ;
  case 19 :
      rule_kerbdd_5F_syntax_factor_i19_(parameter_1, inLexique) ;
    break ;
  case 20 :
      rule_kerbdd_5F_syntax_factor_i20_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_0' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_0 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  21 22
  return inLexique->nextProductionIndex () - 20 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_1' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_1 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  23 24
  return inLexique->nextProductionIndex () - 22 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_2' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_2 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  25 26
  return inLexique->nextProductionIndex () - 24 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_3' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_3 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  27 28
  return inLexique->nextProductionIndex () - 26 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_4' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_4 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  29 30
  return inLexique->nextProductionIndex () - 28 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_5' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_5 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  31 32
  return inLexique->nextProductionIndex () - 30 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_6' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_6 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  33 34 35
  return inLexique->nextProductionIndex () - 32 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_7' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_7 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  36 37 38
  return inLexique->nextProductionIndex () - 35 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_8' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_8 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  39 40 41
  return inLexique->nextProductionIndex () - 38 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_9' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_9 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  42 43 44
  return inLexique->nextProductionIndex () - 41 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_10' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_10 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  45 46
  return inLexique->nextProductionIndex () - 44 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_11' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_11 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  47 48
  return inLexique->nextProductionIndex () - 46 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_12' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_12 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  49 50
  return inLexique->nextProductionIndex () - 48 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_13' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_13 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  51 52
  return inLexique->nextProductionIndex () - 50 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_14' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_14 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  53 54
  return inLexique->nextProductionIndex () - 52 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_15' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_15 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  55 56 57 58 59 60
  return inLexique->nextProductionIndex () - 54 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_16' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_16 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  61 62
  return inLexique->nextProductionIndex () - 60 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_17' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_17 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  63 64
  return inLexique->nextProductionIndex () - 62 ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::~ GGS__32_lstringlist_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::init_21__21_ (const GGS_lstring & in_mValue_30_,
                                                                             const GGS_lstring & in_mValue_31_,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue_30_ ;
  result.mProperty_mValue_31_ = in_mValue_31_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_lstring & inOperand1) :
mProperty_mValue_30_ (inOperand0),
mProperty_mValue_31_ (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::class_func_new (const GGS_lstring & in_mValue0,
                                                                               const GGS_lstring & in_mValue1,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue0 ;
  result.mProperty_mValue_31_ = in_mValue1 ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS__32_lstringlist_2E_element::isValid (void) const {
  return mProperty_mValue_30_.isValid () && mProperty_mValue_31_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::drop (void) {
  mProperty_mValue_30_.drop () ;
  mProperty_mValue_31_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @2lstringlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue_30_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue_31_.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @2lstringlist.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ("2lstringlist.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS__32_lstringlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_lstringlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_lstringlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  const GGS__32_lstringlist_2E_element * p = (const GGS__32_lstringlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_lstringlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

