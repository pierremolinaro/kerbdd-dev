#include "Compiler.h"
#include "C_galgas_io.h"
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
  public: GALGAS__32_lstringlist_2D_element mObject ;

//--- Class functions
  public: cCollectionElement__32_lstringlist (const GALGAS_lstring & in_mValue_30_,
                                              const GALGAS_lstring & in_mValue_31_
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement__32_lstringlist (const GALGAS__32_lstringlist_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GALGAS_lstring & in_mValue_30_,
                                                                        const GALGAS_lstring & in_mValue_31_
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mValue_30_, in_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement__32_lstringlist::cCollectionElement__32_lstringlist (const GALGAS__32_lstringlist_2D_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendString ("mValue0" ":") ;
  mObject.mProperty_mValue_30_.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mValue1" ":") ;
  mObject.mProperty_mValue_31_.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement__32_lstringlist::compare (const cCollectionElement * inOperand) const {
  cCollectionElement__32_lstringlist * operand = (cCollectionElement__32_lstringlist *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement__32_lstringlist) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist::GALGAS__32_lstringlist (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist::GALGAS__32_lstringlist (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS__32_lstringlist (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                         const GALGAS_lstring & inOperand1
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS__32_lstringlist result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS__32_lstringlist (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS__32_lstringlist::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_lstring & in_mValue_30_,
                                                        const GALGAS_lstring & in_mValue_31_
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = nullptr ;
  macroMyNew (p, cCollectionElement__32_lstringlist (in_mValue_30_,
                                                     in_mValue_31_ COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_lstring & inOperand1
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

void GALGAS__32_lstringlist::setter_append (const GALGAS_lstring inOperand0,
                                            const GALGAS_lstring inOperand1,
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

void GALGAS__32_lstringlist::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                   const GALGAS_lstring inOperand1,
                                                   const GALGAS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement__32_lstringlist (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   const GALGAS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
        outOperand0 = p->mObject.mProperty_mValue_30_ ;
        outOperand1 = p->mObject.mProperty_mValue_31_ ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::setter_popFirst (GALGAS_lstring & outOperand0,
                                              GALGAS_lstring & outOperand1,
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

void GALGAS__32_lstringlist::setter_popLast (GALGAS_lstring & outOperand0,
                                             GALGAS_lstring & outOperand1,
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

void GALGAS__32_lstringlist::method_first (GALGAS_lstring & outOperand0,
                                           GALGAS_lstring & outOperand1,
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

void GALGAS__32_lstringlist::method_last (GALGAS_lstring & outOperand0,
                                          GALGAS_lstring & outOperand1,
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

GALGAS__32_lstringlist GALGAS__32_lstringlist::add_operation (const GALGAS__32_lstringlist & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result = GALGAS__32_lstringlist::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result = GALGAS__32_lstringlist::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS__32_lstringlist result = GALGAS__32_lstringlist::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::plusAssign_operation (const GALGAS__32_lstringlist inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::setter_setMValue_30_AtIndex (GALGAS_lstring inOperand,
                                                          GALGAS_uint inIndex,
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

GALGAS_lstring GALGAS__32_lstringlist::getter_mValue_30_AtIndex (const GALGAS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    result = p->mObject.mProperty_mValue_30_ ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist::setter_setMValue_31_AtIndex (GALGAS_lstring inOperand,
                                                          GALGAS_uint inIndex,
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

GALGAS_lstring GALGAS__32_lstringlist::getter_mValue_31_AtIndex (const GALGAS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    result = p->mObject.mProperty_mValue_31_ ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator__32_lstringlist::cEnumerator__32_lstringlist (const GALGAS__32_lstringlist & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element cEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  const cCollectionElement__32_lstringlist * p = (const cCollectionElement__32_lstringlist *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
  return p->mObject.mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GALGAS__32_lstringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS__32_lstringlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS__32_lstringlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist GALGAS__32_lstringlist::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS__32_lstringlist result ;
  const GALGAS__32_lstringlist * p = (const GALGAS__32_lstringlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS__32_lstringlist *> (p)) {
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

//--- Unicode string for '$_21_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__21_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__3D_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__21__3D_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_28_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__28_ [] = {
  TO_UNICODE ('('),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_29_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__29_ [] = {
  TO_UNICODE (')'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__3D_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__2B__3D_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2C_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__2C_ [] = {
  TO_UNICODE (','),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3D_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__2D__3D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3E_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__2D__3E_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E__2E_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__2E__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__3A_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A__3D_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__3A__3D_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3B_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__3B_ [] = {
  TO_UNICODE (';'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__3C_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C__3D_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__3C__3D_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3D_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__3E__3D_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3F_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__3F_ [] = {
  TO_UNICODE ('\?'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5B_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__5B_ [] = {
  TO_UNICODE ('['),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5D_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__5D_ [] = {
  TO_UNICODE (']'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5E_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__5E_ [] = {
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$andCacheMapSize$'
static const utf32 kUnicodeString_kerbdd_5F_lexique_andCacheMapSize [] = {
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
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bool$'
static const utf32 kUnicodeString_kerbdd_5F_lexique_bool [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$display$'
static const utf32 kUnicodeString_kerbdd_5F_lexique_display [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$domain$'
static const utf32 kUnicodeString_kerbdd_5F_lexique_domain [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$dump$'
static const utf32 kUnicodeString_kerbdd_5F_lexique_dump [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$false$'
static const utf32 kUnicodeString_kerbdd_5F_lexique_false [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$graphviz$'
static const utf32 kUnicodeString_kerbdd_5F_lexique_graphviz [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('h'),
  TO_UNICODE ('v'),
  TO_UNICODE ('i'),
  TO_UNICODE ('z'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$include$'
static const utf32 kUnicodeString_kerbdd_5F_lexique_include [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$nodeHashMapSize$'
static const utf32 kUnicodeString_kerbdd_5F_lexique_nodeHashMapSize [] = {
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
  TO_UNICODE (0)
} ;

//--- Unicode string for '$true$'
static const utf32 kUnicodeString_kerbdd_5F_lexique_true [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7B_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__7B_ [] = {
  TO_UNICODE ('{'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7D_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__7D_ [] = {
  TO_UNICODE ('}'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7E_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__7E_ [] = {
  TO_UNICODE ('~'),
  TO_UNICODE (0)
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'delimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_kerbdd_5F_lexique_delimitorsList = 27 ;

static const C_unicode_lexique_table_entry ktable_for_kerbdd_5F_lexique_delimitorsList [ktable_size_kerbdd_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__21_, 1, Lexique_kerbdd_5F_lexique::kToken__21_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__26_, 1, Lexique_kerbdd_5F_lexique::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__28_, 1, Lexique_kerbdd_5F_lexique::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__29_, 1, Lexique_kerbdd_5F_lexique::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__2C_, 1, Lexique_kerbdd_5F_lexique::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__2E_, 1, Lexique_kerbdd_5F_lexique::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3A_, 1, Lexique_kerbdd_5F_lexique::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3B_, 1, Lexique_kerbdd_5F_lexique::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3C_, 1, Lexique_kerbdd_5F_lexique::kToken__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3D_, 1, Lexique_kerbdd_5F_lexique::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3E_, 1, Lexique_kerbdd_5F_lexique::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3F_, 1, Lexique_kerbdd_5F_lexique::kToken__3F_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__5B_, 1, Lexique_kerbdd_5F_lexique::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__5D_, 1, Lexique_kerbdd_5F_lexique::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__5E_, 1, Lexique_kerbdd_5F_lexique::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__7B_, 1, Lexique_kerbdd_5F_lexique::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__7C_, 1, Lexique_kerbdd_5F_lexique::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__7D_, 1, Lexique_kerbdd_5F_lexique::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__7E_, 1, Lexique_kerbdd_5F_lexique::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__21__3D_, 2, Lexique_kerbdd_5F_lexique::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__2B__3D_, 2, Lexique_kerbdd_5F_lexique::kToken__2B__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__2D__3D_, 2, Lexique_kerbdd_5F_lexique::kToken__2D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__2D__3E_, 2, Lexique_kerbdd_5F_lexique::kToken__2D__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__2E__2E_, 2, Lexique_kerbdd_5F_lexique::kToken__2E__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3A__3D_, 2, Lexique_kerbdd_5F_lexique::kToken__3A__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3C__3D_, 2, Lexique_kerbdd_5F_lexique::kToken__3C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3E__3D_, 2, Lexique_kerbdd_5F_lexique::kToken__3E__3D_)
} ;

int32_t Lexique_kerbdd_5F_lexique::search_into_delimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_kerbdd_5F_lexique_delimitorsList, ktable_size_kerbdd_5F_lexique_delimitorsList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'keyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_kerbdd_5F_lexique_keyWordList = 10 ;

static const C_unicode_lexique_table_entry ktable_for_kerbdd_5F_lexique_keyWordList [ktable_size_kerbdd_5F_lexique_keyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_bool, 4, Lexique_kerbdd_5F_lexique::kToken_bool),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_dump, 4, Lexique_kerbdd_5F_lexique::kToken_dump),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_true, 4, Lexique_kerbdd_5F_lexique::kToken_true),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_false, 5, Lexique_kerbdd_5F_lexique::kToken_false),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_domain, 6, Lexique_kerbdd_5F_lexique::kToken_domain),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_display, 7, Lexique_kerbdd_5F_lexique::kToken_display),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_include, 7, Lexique_kerbdd_5F_lexique::kToken_include),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_graphviz, 8, Lexique_kerbdd_5F_lexique::kToken_graphviz),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_andCacheMapSize, 15, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_nodeHashMapSize, 15, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize)
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
    s.appendString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendString ("$$") ;
      break ;
    case kToken_identifier:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("identifier") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_integer:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("integer") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken_literal_5F_string:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("literal_string") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("comment") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_nodeHashMapSize:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("nodeHashMapSize") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_andCacheMapSize:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("andCacheMapSize") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_domain:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("domain") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bool:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("bool") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_true:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("true") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_false:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("false") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_display:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("display") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_include:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("include") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_graphviz:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("graphviz") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_dump:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("dump") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__28_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("(") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__29_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString (")") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5B_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("[") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5D_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("]") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7B_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("{") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7D_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("}") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A__3D_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString (":=") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString (":") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString (".") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E__2E_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("..") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B__3D_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("+=") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__3D_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("-=") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__3E_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("->") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("&") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("|") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5E_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("^") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7E_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("~") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2C_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString (",") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3F_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("\?") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("!") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3B_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString (";") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("=") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__3D_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("!=") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("<") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C__3D_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString ("<=") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString (">") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E__3D_:
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendString (">=") ;
      s.appendUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
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
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3E__3D_, 2, true)) {
      token.mTokenCode = kToken__3E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3C__3D_, 2, true)) {
      token.mTokenCode = kToken__3C__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3A__3D_, 2, true)) {
      token.mTokenCode = kToken__3A__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__2E__2E_, 2, true)) {
      token.mTokenCode = kToken__2E__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__2D__3E_, 2, true)) {
      token.mTokenCode = kToken__2D__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__2D__3D_, 2, true)) {
      token.mTokenCode = kToken__2D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__2B__3D_, 2, true)) {
      token.mTokenCode = kToken__2B__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__21__3D_, 2, true)) {
      token.mTokenCode = kToken__21__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__7E_, 1, true)) {
      token.mTokenCode = kToken__7E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__7D_, 1, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__7C_, 1, true)) {
      token.mTokenCode = kToken__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__7B_, 1, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__5E_, 1, true)) {
      token.mTokenCode = kToken__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__5D_, 1, true)) {
      token.mTokenCode = kToken__5D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__5B_, 1, true)) {
      token.mTokenCode = kToken__5B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3F_, 1, true)) {
      token.mTokenCode = kToken__3F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3E_, 1, true)) {
      token.mTokenCode = kToken__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3D_, 1, true)) {
      token.mTokenCode = kToken__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3C_, 1, true)) {
      token.mTokenCode = kToken__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3B_, 1, true)) {
      token.mTokenCode = kToken__3B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3A_, 1, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__2E_, 1, true)) {
      token.mTokenCode = kToken__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__2C_, 1, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__29_, 1, true)) {
      token.mTokenCode = kToken__29_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__28_, 1, true)) {
      token.mTokenCode = kToken__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__26_, 1, true)) {
      token.mTokenCode = kToken__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__21_, 1, true)) {
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

GALGAS_lstring Lexique_kerbdd_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_kerbdd_5F_lexique * ptr = (cTokenFor_kerbdd_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_kerbdd_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint Lexique_kerbdd_5F_lexique::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_kerbdd_5F_lexique * ptr = (cTokenFor_kerbdd_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_kerbdd_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist Lexique_kerbdd_5F_lexique::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::class_func_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("integer") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("literal_string") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("nodeHashMapSize") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("andCacheMapSize") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("domain") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("bool") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("true") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("false") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("display") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("include") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("graphviz") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("dump") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("(") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (")") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (":=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("..") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("+=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("-=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("->") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("|") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("^") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("~") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("\?") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (">") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (">=") COMMA_HERE) ;
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

cEnumAssociatedValues_bddType_boolArray::cEnumAssociatedValues_bddType_boolArray (const GALGAS_uint inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_bddType_boolArray::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_bddType_boolArray::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_bddType_boolArray * ptr = dynamic_cast<const cEnumAssociatedValues_bddType_boolArray *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_bddType_namedType::cEnumAssociatedValues_bddType_namedType (const GALGAS_lstring inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_bddType_namedType::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_bddType_namedType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_bddType_namedType * ptr = dynamic_cast<const cEnumAssociatedValues_bddType_namedType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bddType::GALGAS_bddType (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bddType GALGAS_bddType::class_func_bool (UNUSED_LOCATION_ARGS) {
  GALGAS_bddType result ;
  result.mEnum = kEnum_bool ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bddType GALGAS_bddType::class_func_boolArray (const GALGAS_uint & inAssociatedValue0
                                                     COMMA_LOCATION_ARGS) {
  GALGAS_bddType result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_boolArray ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_bddType_boolArray (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bddType GALGAS_bddType::class_func_namedType (const GALGAS_lstring & inAssociatedValue0
                                                     COMMA_LOCATION_ARGS) {
  GALGAS_bddType result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_namedType ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_bddType_namedType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bddType::method_boolArray (GALGAS_uint & outAssociatedValue0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_boolArray) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendString ("method @bddType boolArray invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_bddType_boolArray * ptr = (const cEnumAssociatedValues_bddType_boolArray *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bddType::method_namedType (GALGAS_lstring & outAssociatedValue0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_namedType) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendString ("method @bddType namedType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_bddType_namedType * ptr = (const cEnumAssociatedValues_bddType_namedType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_bddType::optional_bool () const {
  const bool ok = mEnum == kEnum_bool ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_bddType::optional_boolArray (GALGAS_uint & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_boolArray ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_bddType_boolArray *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_bddType::optional_namedType (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_namedType ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_bddType_namedType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_bddType [4] = {
  "(not built)",
  "bool",
  "boolArray",
  "namedType"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_bddType::getter_isBool (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bool == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_bddType::getter_isBoolArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_bddType::getter_isNamedType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_namedType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bddType::description (String & ioString,
                                  const int32_t inIndentation) const {
  ioString.appendString ("<enum @bddType: ") ;
  ioString.appendString (gEnumNameArrayFor_bddType [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_bddType::objectCompare (const GALGAS_bddType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @bddType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bddType ("bddType",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bddType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bddType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bddType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bddType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bddType GALGAS_bddType::extractObject (const GALGAS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_bddType result ;
  const GALGAS_bddType * p = (const GALGAS_bddType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bddType *> (p)) {
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
  public: GALGAS_domainFieldList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_domainFieldList (const GALGAS_lstring & in_mVarName,
                                              const GALGAS_bddType & in_mType
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_domainFieldList (const GALGAS_domainFieldList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_domainFieldList::cCollectionElement_domainFieldList (const GALGAS_lstring & in_mVarName,
                                                                        const GALGAS_bddType & in_mType
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mVarName, in_mType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_domainFieldList::cCollectionElement_domainFieldList (const GALGAS_domainFieldList_2D_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendString ("mVarName" ":") ;
  mObject.mProperty_mVarName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_domainFieldList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_domainFieldList * operand = (cCollectionElement_domainFieldList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_domainFieldList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainFieldList::GALGAS_domainFieldList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainFieldList::GALGAS_domainFieldList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainFieldList GALGAS_domainFieldList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_domainFieldList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainFieldList GALGAS_domainFieldList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                         const GALGAS_bddType & inOperand1
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_domainFieldList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_domainFieldList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_domainFieldList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainFieldList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_lstring & in_mVarName,
                                                        const GALGAS_bddType & in_mType
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_domainFieldList * p = nullptr ;
  macroMyNew (p, cCollectionElement_domainFieldList (in_mVarName,
                                                     in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainFieldList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_bddType & inOperand1
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

void GALGAS_domainFieldList::setter_append (const GALGAS_lstring inOperand0,
                                            const GALGAS_bddType inOperand1,
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

void GALGAS_domainFieldList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                   const GALGAS_bddType inOperand1,
                                                   const GALGAS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_domainFieldList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainFieldList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                   GALGAS_bddType & outOperand1,
                                                   const GALGAS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
        outOperand0 = p->mObject.mProperty_mVarName ;
        outOperand1 = p->mObject.mProperty_mType ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainFieldList::setter_popFirst (GALGAS_lstring & outOperand0,
                                              GALGAS_bddType & outOperand1,
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

void GALGAS_domainFieldList::setter_popLast (GALGAS_lstring & outOperand0,
                                             GALGAS_bddType & outOperand1,
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

void GALGAS_domainFieldList::method_first (GALGAS_lstring & outOperand0,
                                           GALGAS_bddType & outOperand1,
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

void GALGAS_domainFieldList::method_last (GALGAS_lstring & outOperand0,
                                          GALGAS_bddType & outOperand1,
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

GALGAS_domainFieldList GALGAS_domainFieldList::add_operation (const GALGAS_domainFieldList & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_domainFieldList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainFieldList GALGAS_domainFieldList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_domainFieldList result = GALGAS_domainFieldList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainFieldList GALGAS_domainFieldList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_domainFieldList result = GALGAS_domainFieldList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainFieldList GALGAS_domainFieldList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_domainFieldList result = GALGAS_domainFieldList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainFieldList::plusAssign_operation (const GALGAS_domainFieldList inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainFieldList::setter_setMVarNameAtIndex (GALGAS_lstring inOperand,
                                                        GALGAS_uint inIndex,
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

GALGAS_lstring GALGAS_domainFieldList::getter_mVarNameAtIndex (const GALGAS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    result = p->mObject.mProperty_mVarName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainFieldList::setter_setMTypeAtIndex (GALGAS_bddType inOperand,
                                                     GALGAS_uint inIndex,
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

GALGAS_bddType GALGAS_domainFieldList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) attributes.ptr () ;
  GALGAS_bddType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_domainFieldList::cEnumerator_domainFieldList (const GALGAS_domainFieldList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainFieldList_2D_element cEnumerator_domainFieldList::current (LOCATION_ARGS) const {
  const cCollectionElement_domainFieldList * p = (const cCollectionElement_domainFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_domainFieldList::current_mVarName (LOCATION_ARGS) const {
  const cCollectionElement_domainFieldList * p = (const cCollectionElement_domainFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
  return p->mObject.mProperty_mVarName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bddType cEnumerator_domainFieldList::current_mType (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GALGAS_domainFieldList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainFieldList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_domainFieldList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainFieldList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainFieldList GALGAS_domainFieldList::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_domainFieldList result ;
  const GALGAS_domainFieldList * p = (const GALGAS_domainFieldList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_domainFieldList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainFieldList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_domainDeclarationType_type::cEnumAssociatedValues_domainDeclarationType_type (const GALGAS_bddType inAssociatedValue0
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_domainDeclarationType_type::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_domainDeclarationType_type::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_domainDeclarationType_type * ptr = dynamic_cast<const cEnumAssociatedValues_domainDeclarationType_type *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_domainDeclarationType_record::cEnumAssociatedValues_domainDeclarationType_record (const GALGAS_domainFieldList inAssociatedValue0
                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_domainDeclarationType_record::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_domainDeclarationType_record::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_domainDeclarationType_record * ptr = dynamic_cast<const cEnumAssociatedValues_domainDeclarationType_record *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationType::GALGAS_domainDeclarationType (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationType GALGAS_domainDeclarationType::class_func_type (const GALGAS_bddType & inAssociatedValue0
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_domainDeclarationType result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_type ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_domainDeclarationType_type (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationType GALGAS_domainDeclarationType::class_func_record (const GALGAS_domainFieldList & inAssociatedValue0
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_domainDeclarationType result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_record ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_domainDeclarationType_record (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationType::method_type (GALGAS_bddType & outAssociatedValue0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_type) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendString ("method @domainDeclarationType type invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_domainDeclarationType_type * ptr = (const cEnumAssociatedValues_domainDeclarationType_type *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationType::method_record (GALGAS_domainFieldList & outAssociatedValue0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_record) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendString ("method @domainDeclarationType record invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_domainDeclarationType_record * ptr = (const cEnumAssociatedValues_domainDeclarationType_record *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_domainDeclarationType::optional_type (GALGAS_bddType & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_type ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_domainDeclarationType_type *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_domainDeclarationType::optional_record (GALGAS_domainFieldList & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_record ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_domainDeclarationType_record *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_domainDeclarationType [3] = {
  "(not built)",
  "type",
  "record"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_domainDeclarationType::getter_isType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_type == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_domainDeclarationType::getter_isRecord (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_record == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationType::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendString ("<enum @domainDeclarationType: ") ;
  ioString.appendString (gEnumNameArrayFor_domainDeclarationType [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_domainDeclarationType::objectCompare (const GALGAS_domainDeclarationType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @domainDeclarationType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationType ("domainDeclarationType",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_domainDeclarationType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainDeclarationType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_domainDeclarationType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainDeclarationType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationType GALGAS_domainDeclarationType::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_domainDeclarationType result ;
  const GALGAS_domainDeclarationType * p = (const GALGAS_domainDeclarationType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_domainDeclarationType *> (p)) {
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
  public: GALGAS_domainDeclarationList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_domainDeclarationList (const GALGAS_lstring & in_mDomainName,
                                                    const GALGAS_domainDeclarationType & in_mType
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_domainDeclarationList (const GALGAS_domainDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_domainDeclarationList::cCollectionElement_domainDeclarationList (const GALGAS_lstring & in_mDomainName,
                                                                                    const GALGAS_domainDeclarationType & in_mType
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDomainName, in_mType) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_domainDeclarationList::cCollectionElement_domainDeclarationList (const GALGAS_domainDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendString ("mDomainName" ":") ;
  mObject.mProperty_mDomainName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_domainDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_domainDeclarationList * operand = (cCollectionElement_domainDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_domainDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList::GALGAS_domainDeclarationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList::GALGAS_domainDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList GALGAS_domainDeclarationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_domainDeclarationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList GALGAS_domainDeclarationList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                     const GALGAS_domainDeclarationType & inOperand1
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_domainDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_domainDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_domainDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mDomainName,
                                                              const GALGAS_domainDeclarationType & in_mType
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_domainDeclarationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_domainDeclarationList (in_mDomainName,
                                                           in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_domainDeclarationType & inOperand1
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

void GALGAS_domainDeclarationList::setter_append (const GALGAS_lstring inOperand0,
                                                  const GALGAS_domainDeclarationType inOperand1,
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

void GALGAS_domainDeclarationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_domainDeclarationType inOperand1,
                                                         const GALGAS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_domainDeclarationList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_domainDeclarationType & outOperand1,
                                                         const GALGAS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
        outOperand0 = p->mObject.mProperty_mDomainName ;
        outOperand1 = p->mObject.mProperty_mType ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_domainDeclarationType & outOperand1,
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

void GALGAS_domainDeclarationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_domainDeclarationType & outOperand1,
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

void GALGAS_domainDeclarationList::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_domainDeclarationType & outOperand1,
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

void GALGAS_domainDeclarationList::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_domainDeclarationType & outOperand1,
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

GALGAS_domainDeclarationList GALGAS_domainDeclarationList::add_operation (const GALGAS_domainDeclarationList & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_domainDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList GALGAS_domainDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_domainDeclarationList result = GALGAS_domainDeclarationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList GALGAS_domainDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_domainDeclarationList result = GALGAS_domainDeclarationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList GALGAS_domainDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_domainDeclarationList result = GALGAS_domainDeclarationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationList::plusAssign_operation (const GALGAS_domainDeclarationList inOperand,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationList::setter_setMDomainNameAtIndex (GALGAS_lstring inOperand,
                                                                 GALGAS_uint inIndex,
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

GALGAS_lstring GALGAS_domainDeclarationList::getter_mDomainNameAtIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    result = p->mObject.mProperty_mDomainName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationList::setter_setMTypeAtIndex (GALGAS_domainDeclarationType inOperand,
                                                           GALGAS_uint inIndex,
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

GALGAS_domainDeclarationType GALGAS_domainDeclarationList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) attributes.ptr () ;
  GALGAS_domainDeclarationType result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_domainDeclarationList::cEnumerator_domainDeclarationList (const GALGAS_domainDeclarationList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList_2D_element cEnumerator_domainDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_domainDeclarationList * p = (const cCollectionElement_domainDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_domainDeclarationList::current_mDomainName (LOCATION_ARGS) const {
  const cCollectionElement_domainDeclarationList * p = (const cCollectionElement_domainDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
  return p->mObject.mProperty_mDomainName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationType cEnumerator_domainDeclarationList::current_mType (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GALGAS_domainDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_domainDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainDeclarationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList GALGAS_domainDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_domainDeclarationList result ;
  const GALGAS_domainDeclarationList * p = (const GALGAS_domainDeclarationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_domainDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_recordDomainMap::cMapElement_recordDomainMap (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & in_mIndex,
                                                          const GALGAS_uint & in_mBitCount,
                                                          const GALGAS_recordDomainMap & in_mSubDomain
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
  ioString.appendString ("mIndex" ":") ;
  mProperty_mIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mBitCount" ":") ;
  mProperty_mBitCount.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mSubDomain" ":") ;
  mProperty_mSubDomain.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_recordDomainMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_recordDomainMap * operand = (cMapElement_recordDomainMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitCount.objectCompare (operand->mProperty_mBitCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSubDomain.objectCompare (operand->mProperty_mSubDomain) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap::GALGAS_recordDomainMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap::GALGAS_recordDomainMap (const GALGAS_recordDomainMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap & GALGAS_recordDomainMap::operator = (const GALGAS_recordDomainMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap GALGAS_recordDomainMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_recordDomainMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap GALGAS_recordDomainMap::class_func_mapWithMapToOverride (const GALGAS_recordDomainMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_recordDomainMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap GALGAS_recordDomainMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_recordDomainMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_recordDomainMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  const GALGAS_uint & inArgument0,
                                                  const GALGAS_uint & inArgument1,
                                                  const GALGAS_recordDomainMap & inArgument2,
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

GALGAS_recordDomainMap GALGAS_recordDomainMap::add_operation (const GALGAS_recordDomainMap & inOperand,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_recordDomainMap result = *this ;
  cEnumerator_recordDomainMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIndex (HERE), enumerator.current_mBitCount (HERE), enumerator.current_mSubDomain (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_recordDomainMap::setter_insertKey (GALGAS_lstring inKey,
                                               GALGAS_uint inArgument0,
                                               GALGAS_uint inArgument1,
                                               GALGAS_recordDomainMap inArgument2,
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

void GALGAS_recordDomainMap::method_searchKey (GALGAS_lstring inKey,
                                               GALGAS_uint & outArgument0,
                                               GALGAS_uint & outArgument1,
                                               GALGAS_recordDomainMap & outArgument2,
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

GALGAS_uint GALGAS_recordDomainMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_recordDomainMap::getter_mBitCountForKey (const GALGAS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    result = p->mProperty_mBitCount ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap GALGAS_recordDomainMap::getter_mSubDomainForKey (const GALGAS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) attributes ;
  GALGAS_recordDomainMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    result = p->mProperty_mSubDomain ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_recordDomainMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                     GALGAS_string inKey,
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

void GALGAS_recordDomainMap::setter_setMBitCountForKey (GALGAS_uint inAttributeValue,
                                                        GALGAS_string inKey,
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

void GALGAS_recordDomainMap::setter_setMSubDomainForKey (GALGAS_recordDomainMap inAttributeValue,
                                                         GALGAS_string inKey,
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

cMapElement_recordDomainMap * GALGAS_recordDomainMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_recordDomainMap * result = (cMapElement_recordDomainMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_recordDomainMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_recordDomainMap::cEnumerator_recordDomainMap (const GALGAS_recordDomainMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap_2D_element cEnumerator_recordDomainMap::current (LOCATION_ARGS) const {
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_recordDomainMap) ;
  return GALGAS_recordDomainMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mBitCount, p->mProperty_mSubDomain) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_recordDomainMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_recordDomainMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_recordDomainMap) ;
  return p->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_recordDomainMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_recordDomainMap) ;
  return p->mProperty_mBitCount ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap cEnumerator_recordDomainMap::current_mSubDomain (LOCATION_ARGS) const {
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_recordDomainMap) ;
  return p->mProperty_mSubDomain ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_recordDomainMap::optional_searchKey (const GALGAS_string & inKey,
                                                 GALGAS_uint & outArgument0,
                                                 GALGAS_uint & outArgument1,
                                                 GALGAS_recordDomainMap & outArgument2) const {
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mBitCount ;
    outArgument2 = p->mProperty_mSubDomain ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @recordDomainMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_recordDomainMap ("recordDomainMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_recordDomainMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_recordDomainMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_recordDomainMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_recordDomainMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap GALGAS_recordDomainMap::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_recordDomainMap result ;
  const GALGAS_recordDomainMap * p = (const GALGAS_recordDomainMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_recordDomainMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("recordDomainMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_domainMap::cMapElement_domainMap (const GALGAS_lstring & inKey,
                                              const GALGAS_uint & in_mBitCount,
                                              const GALGAS_recordDomainMap & in_mRecordMap
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
  ioString.appendString ("mBitCount" ":") ;
  mProperty_mBitCount.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mRecordMap" ":") ;
  mProperty_mRecordMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_domainMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_domainMap * operand = (cMapElement_domainMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mBitCount.objectCompare (operand->mProperty_mBitCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRecordMap.objectCompare (operand->mProperty_mRecordMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainMap::GALGAS_domainMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainMap::GALGAS_domainMap (const GALGAS_domainMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainMap & GALGAS_domainMap::operator = (const GALGAS_domainMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainMap GALGAS_domainMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_domainMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainMap GALGAS_domainMap::class_func_mapWithMapToOverride (const GALGAS_domainMap & inMapToOverride
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_domainMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainMap GALGAS_domainMap::getter_overriddenMap (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_domainMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainMap::addAssign_operation (const GALGAS_lstring & inKey,
                                            const GALGAS_uint & inArgument0,
                                            const GALGAS_recordDomainMap & inArgument1,
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

GALGAS_domainMap GALGAS_domainMap::add_operation (const GALGAS_domainMap & inOperand,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_domainMap result = *this ;
  cEnumerator_domainMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mBitCount (HERE), enumerator.current_mRecordMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainMap::setter_insertKey (GALGAS_lstring inKey,
                                         GALGAS_uint inArgument0,
                                         GALGAS_recordDomainMap inArgument1,
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

void GALGAS_domainMap::method_searchKey (GALGAS_lstring inKey,
                                         GALGAS_uint & outArgument0,
                                         GALGAS_recordDomainMap & outArgument1,
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

GALGAS_uint GALGAS_domainMap::getter_mBitCountForKey (const GALGAS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_domainMap) ;
    result = p->mProperty_mBitCount ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap GALGAS_domainMap::getter_mRecordMapForKey (const GALGAS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) attributes ;
  GALGAS_recordDomainMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_domainMap) ;
    result = p->mProperty_mRecordMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainMap::setter_setMBitCountForKey (GALGAS_uint inAttributeValue,
                                                  GALGAS_string inKey,
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

void GALGAS_domainMap::setter_setMRecordMapForKey (GALGAS_recordDomainMap inAttributeValue,
                                                   GALGAS_string inKey,
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

cMapElement_domainMap * GALGAS_domainMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_domainMap * result = (cMapElement_domainMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_domainMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_domainMap::cEnumerator_domainMap (const GALGAS_domainMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainMap_2D_element cEnumerator_domainMap::current (LOCATION_ARGS) const {
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_domainMap) ;
  return GALGAS_domainMap_2D_element (p->mProperty_lkey, p->mProperty_mBitCount, p->mProperty_mRecordMap) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_domainMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_domainMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_domainMap) ;
  return p->mProperty_mBitCount ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap cEnumerator_domainMap::current_mRecordMap (LOCATION_ARGS) const {
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_domainMap) ;
  return p->mProperty_mRecordMap ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_domainMap::optional_searchKey (const GALGAS_string & inKey,
                                           GALGAS_uint & outArgument0,
                                           GALGAS_recordDomainMap & outArgument1) const {
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_domainMap) ;
    outArgument0 = p->mProperty_mBitCount ;
    outArgument1 = p->mProperty_mRecordMap ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @domainMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainMap ("domainMap",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_domainMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_domainMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainMap GALGAS_domainMap::extractObject (const GALGAS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_domainMap result ;
  const GALGAS_domainMap * p = (const GALGAS_domainMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_domainMap *> (p)) {
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

void extensionMethod_analyze (const GALGAS_domainDeclarationList inObject,
                              GALGAS_domainMap & outArgument_outDomainMap,
                              Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDomainMap.drop () ; // Release 'out' argument
  outArgument_outDomainMap = GALGAS_domainMap::class_func_emptyMap (SOURCE_FILE ("domain.ggs", 122)) ;
  const GALGAS_domainDeclarationList temp_0 = inObject ;
  cEnumerator_domainDeclarationList enumerator_4315 (temp_0, kENUMERATION_UP) ;
  bool bool_1 = GALGAS_bool (kIsEqual, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("domain.ggs", 123)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_4315.hasCurrentObject () && bool_1) {
    while (enumerator_4315.hasCurrentObject () && bool_1) {
      switch (enumerator_4315.current_mType (HERE).enumValue ()) {
      case GALGAS_domainDeclarationType::kNotBuilt:
        break ;
      case GALGAS_domainDeclarationType::kEnum_type:
        {
          const cEnumAssociatedValues_domainDeclarationType_type * extractPtr_4779 = (const cEnumAssociatedValues_domainDeclarationType_type *) (enumerator_4315.current_mType (HERE).unsafePointer ()) ;
          const GALGAS_bddType extractedValue_4420_type = extractPtr_4779->mAssociatedValue0 ;
          switch (extractedValue_4420_type.enumValue ()) {
          case GALGAS_bddType::kNotBuilt:
            break ;
          case GALGAS_bddType::kEnum_bool:
            {
              {
              outArgument_outDomainMap.setter_insertKey (enumerator_4315.current_mDomainName (HERE), GALGAS_uint (uint32_t (1U)), GALGAS_recordDomainMap::class_func_emptyMap (SOURCE_FILE ("domain.ggs", 128)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 128)) ;
              }
            }
            break ;
          case GALGAS_bddType::kEnum_boolArray:
            {
              const cEnumAssociatedValues_bddType_boolArray * extractPtr_4599 = (const cEnumAssociatedValues_bddType_boolArray *) (extractedValue_4420_type.unsafePointer ()) ;
              const GALGAS_uint extractedValue_4541_size = extractPtr_4599->mAssociatedValue0 ;
              {
              outArgument_outDomainMap.setter_insertKey (enumerator_4315.current_mDomainName (HERE), extractedValue_4541_size, GALGAS_recordDomainMap::class_func_emptyMap (SOURCE_FILE ("domain.ggs", 130)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 130)) ;
              }
            }
            break ;
          case GALGAS_bddType::kEnum_namedType:
            {
              const cEnumAssociatedValues_bddType_namedType * extractPtr_4771 = (const cEnumAssociatedValues_bddType_namedType *) (extractedValue_4420_type.unsafePointer ()) ;
              const GALGAS_lstring extractedValue_4632_typeName = extractPtr_4771->mAssociatedValue0 ;
              GALGAS_uint var_size_4692 ;
              GALGAS_recordDomainMap var_subdomain_4703 ;
              outArgument_outDomainMap.method_searchKey (extractedValue_4632_typeName, var_size_4692, var_subdomain_4703, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 132)) ;
              {
              outArgument_outDomainMap.setter_insertKey (enumerator_4315.current_mDomainName (HERE), var_size_4692, var_subdomain_4703, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 133)) ;
              }
            }
            break ;
          }
        }
        break ;
      case GALGAS_domainDeclarationType::kEnum_record:
        {
          const cEnumAssociatedValues_domainDeclarationType_record * extractPtr_5550 = (const cEnumAssociatedValues_domainDeclarationType_record *) (enumerator_4315.current_mType (HERE).unsafePointer ()) ;
          const GALGAS_domainFieldList extractedValue_4817_fieldList = extractPtr_5550->mAssociatedValue0 ;
          GALGAS_bigint var_bitIndex_4840 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("domain.ggs", 136)) ;
          GALGAS_recordDomainMap var_recordMap_4880 = GALGAS_recordDomainMap::class_func_emptyMap (SOURCE_FILE ("domain.ggs", 137)) ;
          cEnumerator_domainFieldList enumerator_4914 (extractedValue_4817_fieldList, kENUMERATION_DOWN) ;
          bool bool_2 = GALGAS_bool (kIsEqual, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("domain.ggs", 138)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
          if (enumerator_4914.hasCurrentObject () && bool_2) {
            while (enumerator_4914.hasCurrentObject () && bool_2) {
              switch (enumerator_4914.current_mType (HERE).enumValue ()) {
              case GALGAS_bddType::kNotBuilt:
                break ;
              case GALGAS_bddType::kEnum_bool:
                {
                  {
                  var_recordMap_4880.setter_insertKey (enumerator_4914.current_mVarName (HERE), var_bitIndex_4840.getter_uint (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 141)), GALGAS_uint (uint32_t (1U)), GALGAS_recordDomainMap::class_func_emptyMap (SOURCE_FILE ("domain.ggs", 141)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 141)) ;
                  }
                  var_bitIndex_4840.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("domain.ggs", 142)), inCompiler  COMMA_SOURCE_FILE ("domain.ggs", 142)) ;
                }
                break ;
              case GALGAS_bddType::kEnum_boolArray:
                {
                  const cEnumAssociatedValues_bddType_boolArray * extractPtr_5239 = (const cEnumAssociatedValues_bddType_boolArray *) (enumerator_4914.current_mType (HERE).unsafePointer ()) ;
                  const GALGAS_uint extractedValue_5137_size = extractPtr_5239->mAssociatedValue0 ;
                  {
                  var_recordMap_4880.setter_insertKey (enumerator_4914.current_mVarName (HERE), var_bitIndex_4840.getter_uint (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 144)), extractedValue_5137_size, GALGAS_recordDomainMap::class_func_emptyMap (SOURCE_FILE ("domain.ggs", 144)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 144)) ;
                  }
                  var_bitIndex_4840 = var_bitIndex_4840.add_operation (extractedValue_5137_size.getter_bigint (SOURCE_FILE ("domain.ggs", 145)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 145)) ;
                }
                break ;
              case GALGAS_bddType::kEnum_namedType:
                {
                  const cEnumAssociatedValues_bddType_namedType * extractPtr_5464 = (const cEnumAssociatedValues_bddType_namedType *) (enumerator_4914.current_mType (HERE).unsafePointer ()) ;
                  const GALGAS_lstring extractedValue_5277_typeName = extractPtr_5464->mAssociatedValue0 ;
                  GALGAS_uint var_size_5339 ;
                  GALGAS_recordDomainMap var_subdomain_5350 ;
                  outArgument_outDomainMap.method_searchKey (extractedValue_5277_typeName, var_size_5339, var_subdomain_5350, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 147)) ;
                  {
                  var_recordMap_4880.setter_insertKey (enumerator_4914.current_mVarName (HERE), var_bitIndex_4840.getter_uint (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 148)), var_size_5339, var_subdomain_5350, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 148)) ;
                  }
                  var_bitIndex_4840 = var_bitIndex_4840.add_operation (var_size_5339.getter_bigint (SOURCE_FILE ("domain.ggs", 149)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 149)) ;
                }
                break ;
              }
              enumerator_4914.gotoNextObject () ;
              if (enumerator_4914.hasCurrentObject ()) {
                bool_2 = GALGAS_bool (kIsEqual, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("domain.ggs", 138)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
              }
            }
          }
          {
          outArgument_outDomainMap.setter_insertKey (enumerator_4315.current_mDomainName (HERE), var_bitIndex_4840.getter_uint (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 152)), var_recordMap_4880, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 152)) ;
          }
        }
        break ;
      }
      enumerator_4315.gotoNextObject () ;
      if (enumerator_4315.hasCurrentObject ()) {
        bool_1 = GALGAS_bool (kIsEqual, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("domain.ggs", 123)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
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
  public: GALGAS_varList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_varList (const GALGAS_string & in_mVarName,
                                      const GALGAS_uint & in_mBitIndex,
                                      const GALGAS_uint & in_mBitCount
                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_varList (const GALGAS_varList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_varList::cCollectionElement_varList (const GALGAS_string & in_mVarName,
                                                        const GALGAS_uint & in_mBitIndex,
                                                        const GALGAS_uint & in_mBitCount
                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mVarName, in_mBitIndex, in_mBitCount) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_varList::cCollectionElement_varList (const GALGAS_varList_2D_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendString ("mVarName" ":") ;
  mObject.mProperty_mVarName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mBitIndex" ":") ;
  mObject.mProperty_mBitIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mBitCount" ":") ;
  mObject.mProperty_mBitCount.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_varList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_varList * operand = (cCollectionElement_varList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_varList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varList::GALGAS_varList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varList::GALGAS_varList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varList GALGAS_varList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_varList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varList GALGAS_varList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                         const GALGAS_uint & inOperand1,
                                                         const GALGAS_uint & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_varList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_varList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_varList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                const GALGAS_string & in_mVarName,
                                                const GALGAS_uint & in_mBitIndex,
                                                const GALGAS_uint & in_mBitCount
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_varList * p = nullptr ;
  macroMyNew (p, cCollectionElement_varList (in_mVarName,
                                             in_mBitIndex,
                                             in_mBitCount COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varList::addAssign_operation (const GALGAS_string & inOperand0,
                                          const GALGAS_uint & inOperand1,
                                          const GALGAS_uint & inOperand2
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

void GALGAS_varList::setter_append (const GALGAS_string inOperand0,
                                    const GALGAS_uint inOperand1,
                                    const GALGAS_uint inOperand2,
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

void GALGAS_varList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                           const GALGAS_uint inOperand1,
                                           const GALGAS_uint inOperand2,
                                           const GALGAS_uint inInsertionIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_varList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                           GALGAS_uint & outOperand1,
                                           GALGAS_uint & outOperand2,
                                           const GALGAS_uint inRemoveIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_varList) ;
        outOperand0 = p->mObject.mProperty_mVarName ;
        outOperand1 = p->mObject.mProperty_mBitIndex ;
        outOperand2 = p->mObject.mProperty_mBitCount ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varList::setter_popFirst (GALGAS_string & outOperand0,
                                      GALGAS_uint & outOperand1,
                                      GALGAS_uint & outOperand2,
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

void GALGAS_varList::setter_popLast (GALGAS_string & outOperand0,
                                     GALGAS_uint & outOperand1,
                                     GALGAS_uint & outOperand2,
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

void GALGAS_varList::method_first (GALGAS_string & outOperand0,
                                   GALGAS_uint & outOperand1,
                                   GALGAS_uint & outOperand2,
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

void GALGAS_varList::method_last (GALGAS_string & outOperand0,
                                  GALGAS_uint & outOperand1,
                                  GALGAS_uint & outOperand2,
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

GALGAS_varList GALGAS_varList::add_operation (const GALGAS_varList & inOperand,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_varList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varList GALGAS_varList::getter_subListWithRange (const GALGAS_range & inRange,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_varList result = GALGAS_varList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varList GALGAS_varList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_varList result = GALGAS_varList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varList GALGAS_varList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_varList result = GALGAS_varList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varList::plusAssign_operation (const GALGAS_varList inOperand,
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varList::setter_setMVarNameAtIndex (GALGAS_string inOperand,
                                                GALGAS_uint inIndex,
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

GALGAS_string GALGAS_varList::getter_mVarNameAtIndex (const GALGAS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    result = p->mObject.mProperty_mVarName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varList::setter_setMBitIndexAtIndex (GALGAS_uint inOperand,
                                                 GALGAS_uint inIndex,
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

GALGAS_uint GALGAS_varList::getter_mBitIndexAtIndex (const GALGAS_uint & inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    result = p->mObject.mProperty_mBitIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varList::setter_setMBitCountAtIndex (GALGAS_uint inOperand,
                                                 GALGAS_uint inIndex,
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

GALGAS_uint GALGAS_varList::getter_mBitCountAtIndex (const GALGAS_uint & inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    result = p->mObject.mProperty_mBitCount ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_varList::cEnumerator_varList (const GALGAS_varList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varList_2D_element cEnumerator_varList::current (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_varList::current_mVarName (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mVarName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_varList::current_mBitIndex (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mBitIndex ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_varList::current_mBitCount (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GALGAS_varList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varList GALGAS_varList::extractObject (const GALGAS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_varList result ;
  const GALGAS_varList * p = (const GALGAS_varList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_varList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_varMap::cMapElement_varMap (const GALGAS_lstring & inKey,
                                        const GALGAS_uint & in_mIndex,
                                        const GALGAS_uint & in_mBitCount,
                                        const GALGAS_recordDomainMap & in_mRecordDomainMap
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
  ioString.appendString ("mIndex" ":") ;
  mProperty_mIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mBitCount" ":") ;
  mProperty_mBitCount.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mRecordDomainMap" ":") ;
  mProperty_mRecordDomainMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_varMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_varMap * operand = (cMapElement_varMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitCount.objectCompare (operand->mProperty_mBitCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRecordDomainMap.objectCompare (operand->mProperty_mRecordDomainMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varMap::GALGAS_varMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varMap::GALGAS_varMap (const GALGAS_varMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varMap & GALGAS_varMap::operator = (const GALGAS_varMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varMap GALGAS_varMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_varMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varMap GALGAS_varMap::class_func_mapWithMapToOverride (const GALGAS_varMap & inMapToOverride
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_varMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varMap GALGAS_varMap::getter_overriddenMap (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_varMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varMap::addAssign_operation (const GALGAS_lstring & inKey,
                                         const GALGAS_uint & inArgument0,
                                         const GALGAS_uint & inArgument1,
                                         const GALGAS_recordDomainMap & inArgument2,
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

GALGAS_varMap GALGAS_varMap::add_operation (const GALGAS_varMap & inOperand,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GALGAS_varMap result = *this ;
  cEnumerator_varMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mIndex (HERE), enumerator.current_mBitCount (HERE), enumerator.current_mRecordDomainMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varMap::setter_insertKey (GALGAS_lstring inKey,
                                      GALGAS_uint inArgument0,
                                      GALGAS_uint inArgument1,
                                      GALGAS_recordDomainMap inArgument2,
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

void GALGAS_varMap::method_searchKey (GALGAS_lstring inKey,
                                      GALGAS_uint & outArgument0,
                                      GALGAS_uint & outArgument1,
                                      GALGAS_recordDomainMap & outArgument2,
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

GALGAS_uint GALGAS_varMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_varMap * p = (const cMapElement_varMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_varMap::getter_mBitCountForKey (const GALGAS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_varMap * p = (const cMapElement_varMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    result = p->mProperty_mBitCount ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap GALGAS_varMap::getter_mRecordDomainMapForKey (const GALGAS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_varMap * p = (const cMapElement_varMap *) attributes ;
  GALGAS_recordDomainMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    result = p->mProperty_mRecordDomainMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                            GALGAS_string inKey,
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

void GALGAS_varMap::setter_setMBitCountForKey (GALGAS_uint inAttributeValue,
                                               GALGAS_string inKey,
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

void GALGAS_varMap::setter_setMRecordDomainMapForKey (GALGAS_recordDomainMap inAttributeValue,
                                                      GALGAS_string inKey,
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

cMapElement_varMap * GALGAS_varMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                       const GALGAS_string & inKey
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_varMap * result = (cMapElement_varMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_varMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_varMap::cEnumerator_varMap (const GALGAS_varMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element cEnumerator_varMap::current (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return GALGAS_varMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mBitCount, p->mProperty_mRecordDomainMap) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_varMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_varMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_varMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mBitCount ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap cEnumerator_varMap::current_mRecordDomainMap (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mRecordDomainMap ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_varMap::optional_searchKey (const GALGAS_string & inKey,
                                        GALGAS_uint & outArgument0,
                                        GALGAS_uint & outArgument1,
                                        GALGAS_recordDomainMap & outArgument2) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mBitCount ;
    outArgument2 = p->mProperty_mRecordDomainMap ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @varMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varMap ("varMap",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varMap GALGAS_varMap::extractObject (const GALGAS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_varMap result ;
  const GALGAS_varMap * p = (const GALGAS_varMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_varMap *> (p)) {
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

void extensionMethod_analyze (const GALGAS_domainFieldList inObject,
                              const GALGAS_domainMap constinArgument_inDomainMap,
                              GALGAS_varMap & ioArgument_ioVarMap,
                              GALGAS_varList & ioArgument_ioVarList,
                              GALGAS_uint & ioArgument_ioTotalBitCount,
                              Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_domainFieldList temp_0 = inObject ;
  cEnumerator_domainFieldList enumerator_6737 (temp_0, kENUMERATION_DOWN) ;
  while (enumerator_6737.hasCurrentObject ()) {
    switch (enumerator_6737.current_mType (HERE).enumValue ()) {
    case GALGAS_bddType::kNotBuilt:
      break ;
    case GALGAS_bddType::kEnum_bool:
      {
        {
        ioArgument_ioVarMap.setter_insertKey (enumerator_6737.current_mVarName (HERE), ioArgument_ioTotalBitCount, GALGAS_uint (uint32_t (1U)), GALGAS_recordDomainMap::class_func_emptyMap (SOURCE_FILE ("domain.ggs", 189)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 189)) ;
        }
        {
        ioArgument_ioVarList.setter_insertAtIndex (enumerator_6737.current_mVarName (HERE).readProperty_string (), ioArgument_ioTotalBitCount, GALGAS_uint (uint32_t (1U)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 190)) ;
        }
        ioArgument_ioTotalBitCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("domain.ggs", 191)) ;
      }
      break ;
    case GALGAS_bddType::kEnum_boolArray:
      {
        const cEnumAssociatedValues_bddType_boolArray * extractPtr_7157 = (const cEnumAssociatedValues_bddType_boolArray *) (enumerator_6737.current_mType (HERE).unsafePointer ()) ;
        const GALGAS_uint extractedValue_6970_size = extractPtr_7157->mAssociatedValue0 ;
        {
        ioArgument_ioVarMap.setter_insertKey (enumerator_6737.current_mVarName (HERE), ioArgument_ioTotalBitCount, extractedValue_6970_size, GALGAS_recordDomainMap::class_func_emptyMap (SOURCE_FILE ("domain.ggs", 193)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 193)) ;
        }
        {
        ioArgument_ioVarList.setter_insertAtIndex (enumerator_6737.current_mVarName (HERE).readProperty_string (), ioArgument_ioTotalBitCount, extractedValue_6970_size, GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 194)) ;
        }
        ioArgument_ioTotalBitCount = ioArgument_ioTotalBitCount.add_operation (extractedValue_6970_size, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 195)) ;
      }
      break ;
    case GALGAS_bddType::kEnum_namedType:
      {
        const cEnumAssociatedValues_bddType_namedType * extractPtr_7464 = (const cEnumAssociatedValues_bddType_namedType *) (enumerator_6737.current_mType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_7191_typeName = extractPtr_7464->mAssociatedValue0 ;
        GALGAS_uint var_size_7248 ;
        GALGAS_recordDomainMap var_subDomainMap_7259 ;
        constinArgument_inDomainMap.method_searchKey (extractedValue_7191_typeName, var_size_7248, var_subDomainMap_7259, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 197)) ;
        {
        ioArgument_ioVarMap.setter_insertKey (enumerator_6737.current_mVarName (HERE), ioArgument_ioTotalBitCount, var_size_7248, var_subDomainMap_7259, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 198)) ;
        }
        {
        ioArgument_ioVarList.setter_insertAtIndex (enumerator_6737.current_mVarName (HERE).readProperty_string (), ioArgument_ioTotalBitCount, var_size_7248, GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 199)) ;
        }
        ioArgument_ioTotalBitCount = ioArgument_ioTotalBitCount.add_operation (var_size_7248, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 200)) ;
      }
      break ;
    }
    enumerator_6737.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_formulaKind_fixedPoint::cEnumAssociatedValues_formulaKind_fixedPoint (const GALGAS_binaryset inAssociatedValue0
                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_formulaKind_fixedPoint::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendString (")") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_formulaKind_fixedPoint::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_formulaKind_fixedPoint * ptr = dynamic_cast<const cEnumAssociatedValues_formulaKind_fixedPoint *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaKind::GALGAS_formulaKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaKind GALGAS_formulaKind::class_func_assignment (UNUSED_LOCATION_ARGS) {
  GALGAS_formulaKind result ;
  result.mEnum = kEnum_assignment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaKind GALGAS_formulaKind::class_func_fixedPoint (const GALGAS_binaryset & inAssociatedValue0
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_formulaKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_fixedPoint ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_formulaKind_fixedPoint (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaKind::method_fixedPoint (GALGAS_binaryset & outAssociatedValue0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fixedPoint) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendString ("method @formulaKind fixedPoint invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_formulaKind_fixedPoint * ptr = (const cEnumAssociatedValues_formulaKind_fixedPoint *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_formulaKind::optional_assignment () const {
  const bool ok = mEnum == kEnum_assignment ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_formulaKind::optional_fixedPoint (GALGAS_binaryset & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_fixedPoint ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_formulaKind_fixedPoint *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_formulaKind [3] = {
  "(not built)",
  "assignment",
  "fixedPoint"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formulaKind::getter_isAssignment (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_assignment == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formulaKind::getter_isFixedPoint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixedPoint == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaKind::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendString ("<enum @formulaKind: ") ;
  ioString.appendString (gEnumNameArrayFor_formulaKind [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_formulaKind::objectCompare (const GALGAS_formulaKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @formulaKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaKind ("formulaKind",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formulaKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formulaKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formulaKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaKind GALGAS_formulaKind::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formulaKind result ;
  const GALGAS_formulaKind * p = (const GALGAS_formulaKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_formulaKind *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractFormula::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractFormula::objectCompare (const GALGAS_abstractFormula & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractFormula::GALGAS_abstractFormula (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractFormula::GALGAS_abstractFormula (const cPtr_abstractFormula * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractFormula) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractFormula class
//--------------------------------------------------------------------------------------------------

cPtr_abstractFormula::cPtr_abstractFormula (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractFormula generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractFormula ("abstractFormula",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractFormula::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractFormula ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractFormula::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractFormula (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractFormula GALGAS_abstractFormula::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractFormula result ;
  const GALGAS_abstractFormula * p = (const GALGAS_abstractFormula *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractFormula *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_expression::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_expression::objectCompare (const GALGAS_expression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression::GALGAS_expression (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression::GALGAS_expression (const cPtr_expression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expression) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @expression class
//--------------------------------------------------------------------------------------------------

cPtr_expression::cPtr_expression (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @expression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expression ("expression",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_expression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_expression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_expression::extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_expression result ;
  const GALGAS_expression * p = (const GALGAS_expression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_expression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractFormula_2D_weak::objectCompare (const GALGAS_abstractFormula_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractFormula_2D_weak::GALGAS_abstractFormula_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractFormula_2D_weak & GALGAS_abstractFormula_2D_weak::operator = (const GALGAS_abstractFormula & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractFormula_2D_weak::GALGAS_abstractFormula_2D_weak (const GALGAS_abstractFormula & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractFormula_2D_weak GALGAS_abstractFormula_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_abstractFormula_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractFormula GALGAS_abstractFormula_2D_weak::bang_abstractFormula_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractFormula result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractFormula) ;
      result = GALGAS_abstractFormula ((cPtr_abstractFormula *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractFormula-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractFormula_2D_weak ("abstractFormula-weak",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractFormula_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractFormula_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractFormula_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractFormula_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractFormula_2D_weak GALGAS_abstractFormula_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractFormula_2D_weak result ;
  const GALGAS_abstractFormula_2D_weak * p = (const GALGAS_abstractFormula_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractFormula_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractFormula-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_computedFormulaMap::cMapElement_computedFormulaMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_varList & in_mVarList,
                                                                const GALGAS_uint & in_mBitCount,
                                                                const GALGAS_binaryset & in_mValue
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
  ioString.appendString ("mVarList" ":") ;
  mProperty_mVarList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mBitCount" ":") ;
  mProperty_mBitCount.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mValue" ":") ;
  mProperty_mValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_computedFormulaMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_computedFormulaMap * operand = (cMapElement_computedFormulaMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarList.objectCompare (operand->mProperty_mVarList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitCount.objectCompare (operand->mProperty_mBitCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (operand->mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap::GALGAS_computedFormulaMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap::GALGAS_computedFormulaMap (const GALGAS_computedFormulaMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap & GALGAS_computedFormulaMap::operator = (const GALGAS_computedFormulaMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap GALGAS_computedFormulaMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_computedFormulaMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap GALGAS_computedFormulaMap::class_func_mapWithMapToOverride (const GALGAS_computedFormulaMap & inMapToOverride
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_computedFormulaMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap GALGAS_computedFormulaMap::getter_overriddenMap (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_computedFormulaMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedFormulaMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_varList & inArgument0,
                                                     const GALGAS_uint & inArgument1,
                                                     const GALGAS_binaryset & inArgument2,
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

GALGAS_computedFormulaMap GALGAS_computedFormulaMap::add_operation (const GALGAS_computedFormulaMap & inOperand,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_computedFormulaMap result = *this ;
  cEnumerator_computedFormulaMap enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mVarList (HERE), enumerator.current_mBitCount (HERE), enumerator.current_mValue (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedFormulaMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_varList inArgument0,
                                                  GALGAS_uint inArgument1,
                                                  GALGAS_binaryset inArgument2,
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

void GALGAS_computedFormulaMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_varList & outArgument0,
                                                  GALGAS_uint & outArgument1,
                                                  GALGAS_binaryset & outArgument2,
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

GALGAS_varList GALGAS_computedFormulaMap::getter_mVarListForKey (const GALGAS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) attributes ;
  GALGAS_varList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    result = p->mProperty_mVarList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_computedFormulaMap::getter_mBitCountForKey (const GALGAS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    result = p->mProperty_mBitCount ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_binaryset GALGAS_computedFormulaMap::getter_mValueForKey (const GALGAS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) attributes ;
  GALGAS_binaryset result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedFormulaMap::setter_setMVarListForKey (GALGAS_varList inAttributeValue,
                                                          GALGAS_string inKey,
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

void GALGAS_computedFormulaMap::setter_setMBitCountForKey (GALGAS_uint inAttributeValue,
                                                           GALGAS_string inKey,
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

void GALGAS_computedFormulaMap::setter_setMValueForKey (GALGAS_binaryset inAttributeValue,
                                                        GALGAS_string inKey,
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

cMapElement_computedFormulaMap * GALGAS_computedFormulaMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_computedFormulaMap * result = (cMapElement_computedFormulaMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_computedFormulaMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_computedFormulaMap::cEnumerator_computedFormulaMap (const GALGAS_computedFormulaMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap_2D_element cEnumerator_computedFormulaMap::current (LOCATION_ARGS) const {
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
  return GALGAS_computedFormulaMap_2D_element (p->mProperty_lkey, p->mProperty_mVarList, p->mProperty_mBitCount, p->mProperty_mValue) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_computedFormulaMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varList cEnumerator_computedFormulaMap::current_mVarList (LOCATION_ARGS) const {
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
  return p->mProperty_mVarList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_computedFormulaMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
  return p->mProperty_mBitCount ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_binaryset cEnumerator_computedFormulaMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
  return p->mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_computedFormulaMap::optional_searchKey (const GALGAS_string & inKey,
                                                    GALGAS_varList & outArgument0,
                                                    GALGAS_uint & outArgument1,
                                                    GALGAS_binaryset & outArgument2) const {
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    outArgument0 = p->mProperty_mVarList ;
    outArgument1 = p->mProperty_mBitCount ;
    outArgument2 = p->mProperty_mValue ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @computedFormulaMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedFormulaMap ("computedFormulaMap",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedFormulaMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedFormulaMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedFormulaMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedFormulaMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap GALGAS_computedFormulaMap::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_computedFormulaMap result ;
  const GALGAS_computedFormulaMap * p = (const GALGAS_computedFormulaMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_computedFormulaMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedFormulaMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_setting_5F_nodeHashMapSize_2D_weak::objectCompare (const GALGAS_setting_5F_nodeHashMapSize_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize_2D_weak::GALGAS_setting_5F_nodeHashMapSize_2D_weak (void) :
GALGAS_abstractFormula_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize_2D_weak & GALGAS_setting_5F_nodeHashMapSize_2D_weak::operator = (const GALGAS_setting_5F_nodeHashMapSize & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize_2D_weak::GALGAS_setting_5F_nodeHashMapSize_2D_weak (const GALGAS_setting_5F_nodeHashMapSize & inSource) :
GALGAS_abstractFormula_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize_2D_weak GALGAS_setting_5F_nodeHashMapSize_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_setting_5F_nodeHashMapSize_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize GALGAS_setting_5F_nodeHashMapSize_2D_weak::bang_setting_5F_nodeHashMapSize_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_setting_5F_nodeHashMapSize result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_setting_5F_nodeHashMapSize) ;
      result = GALGAS_setting_5F_nodeHashMapSize ((cPtr_setting_5F_nodeHashMapSize *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @setting_nodeHashMapSize-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize_2D_weak ("setting_nodeHashMapSize-weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractFormula_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_setting_5F_nodeHashMapSize_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_setting_5F_nodeHashMapSize_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setting_5F_nodeHashMapSize_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize_2D_weak GALGAS_setting_5F_nodeHashMapSize_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_setting_5F_nodeHashMapSize_2D_weak result ;
  const GALGAS_setting_5F_nodeHashMapSize_2D_weak * p = (const GALGAS_setting_5F_nodeHashMapSize_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_setting_5F_nodeHashMapSize_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setting_nodeHashMapSize-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_setting_5F_andCacheMapSize_2D_weak::objectCompare (const GALGAS_setting_5F_andCacheMapSize_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_andCacheMapSize_2D_weak::GALGAS_setting_5F_andCacheMapSize_2D_weak (void) :
GALGAS_abstractFormula_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_andCacheMapSize_2D_weak & GALGAS_setting_5F_andCacheMapSize_2D_weak::operator = (const GALGAS_setting_5F_andCacheMapSize & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_andCacheMapSize_2D_weak::GALGAS_setting_5F_andCacheMapSize_2D_weak (const GALGAS_setting_5F_andCacheMapSize & inSource) :
GALGAS_abstractFormula_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_andCacheMapSize_2D_weak GALGAS_setting_5F_andCacheMapSize_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_setting_5F_andCacheMapSize_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_andCacheMapSize GALGAS_setting_5F_andCacheMapSize_2D_weak::bang_setting_5F_andCacheMapSize_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_setting_5F_andCacheMapSize result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_setting_5F_andCacheMapSize) ;
      result = GALGAS_setting_5F_andCacheMapSize ((cPtr_setting_5F_andCacheMapSize *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @setting_andCacheMapSize-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize_2D_weak ("setting_andCacheMapSize-weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractFormula_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_setting_5F_andCacheMapSize_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_setting_5F_andCacheMapSize_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setting_5F_andCacheMapSize_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_andCacheMapSize_2D_weak GALGAS_setting_5F_andCacheMapSize_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_setting_5F_andCacheMapSize_2D_weak result ;
  const GALGAS_setting_5F_andCacheMapSize_2D_weak * p = (const GALGAS_setting_5F_andCacheMapSize_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_setting_5F_andCacheMapSize_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setting_andCacheMapSize-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dumpFormula_2D_weak::objectCompare (const GALGAS_dumpFormula_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dumpFormula_2D_weak::GALGAS_dumpFormula_2D_weak (void) :
GALGAS_abstractFormula_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_dumpFormula_2D_weak & GALGAS_dumpFormula_2D_weak::operator = (const GALGAS_dumpFormula & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dumpFormula_2D_weak::GALGAS_dumpFormula_2D_weak (const GALGAS_dumpFormula & inSource) :
GALGAS_abstractFormula_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_dumpFormula_2D_weak GALGAS_dumpFormula_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_dumpFormula_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dumpFormula GALGAS_dumpFormula_2D_weak::bang_dumpFormula_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dumpFormula result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dumpFormula) ;
      result = GALGAS_dumpFormula ((cPtr_dumpFormula *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @dumpFormula-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dumpFormula_2D_weak ("dumpFormula-weak",
                                                                           & kTypeDescriptor_GALGAS_abstractFormula_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dumpFormula_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dumpFormula_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dumpFormula_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dumpFormula_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dumpFormula_2D_weak GALGAS_dumpFormula_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dumpFormula_2D_weak result ;
  const GALGAS_dumpFormula_2D_weak * p = (const GALGAS_dumpFormula_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dumpFormula_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dumpFormula-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_graphvizFormula_2D_weak::objectCompare (const GALGAS_graphvizFormula_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphvizFormula_2D_weak::GALGAS_graphvizFormula_2D_weak (void) :
GALGAS_abstractFormula_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphvizFormula_2D_weak & GALGAS_graphvizFormula_2D_weak::operator = (const GALGAS_graphvizFormula & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphvizFormula_2D_weak::GALGAS_graphvizFormula_2D_weak (const GALGAS_graphvizFormula & inSource) :
GALGAS_abstractFormula_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphvizFormula_2D_weak GALGAS_graphvizFormula_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_graphvizFormula_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphvizFormula GALGAS_graphvizFormula_2D_weak::bang_graphvizFormula_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_graphvizFormula result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_graphvizFormula) ;
      result = GALGAS_graphvizFormula ((cPtr_graphvizFormula *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @graphvizFormula-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphvizFormula_2D_weak ("graphvizFormula-weak",
                                                                               & kTypeDescriptor_GALGAS_abstractFormula_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphvizFormula_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphvizFormula_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphvizFormula_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphvizFormula_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphvizFormula_2D_weak GALGAS_graphvizFormula_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_graphvizFormula_2D_weak result ;
  const GALGAS_graphvizFormula_2D_weak * p = (const GALGAS_graphvizFormula_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_graphvizFormula_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphvizFormula-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_expression_2D_weak::objectCompare (const GALGAS_expression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression_2D_weak::GALGAS_expression_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression_2D_weak & GALGAS_expression_2D_weak::operator = (const GALGAS_expression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression_2D_weak::GALGAS_expression_2D_weak (const GALGAS_expression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression_2D_weak GALGAS_expression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_expression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_expression_2D_weak::bang_expression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_expression) ;
      result = GALGAS_expression ((cPtr_expression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @expression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_expression_2D_weak ("expression-weak",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_expression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_expression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression_2D_weak GALGAS_expression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_expression_2D_weak result ;
  const GALGAS_expression_2D_weak * p = (const GALGAS_expression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_expression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_varInExpression_2D_weak::objectCompare (const GALGAS_varInExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInExpression_2D_weak::GALGAS_varInExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInExpression_2D_weak & GALGAS_varInExpression_2D_weak::operator = (const GALGAS_varInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInExpression_2D_weak::GALGAS_varInExpression_2D_weak (const GALGAS_varInExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInExpression_2D_weak GALGAS_varInExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_varInExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInExpression GALGAS_varInExpression_2D_weak::bang_varInExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_varInExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_varInExpression) ;
      result = GALGAS_varInExpression ((cPtr_varInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @varInExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpression_2D_weak ("varInExpression-weak",
                                                                               & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varInExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varInExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInExpression_2D_weak GALGAS_varInExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_varInExpression_2D_weak result ;
  const GALGAS_varInExpression_2D_weak * p = (const GALGAS_varInExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_varInExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_varBitInExpression_2D_weak::objectCompare (const GALGAS_varBitInExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varBitInExpression_2D_weak::GALGAS_varBitInExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varBitInExpression_2D_weak & GALGAS_varBitInExpression_2D_weak::operator = (const GALGAS_varBitInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varBitInExpression_2D_weak::GALGAS_varBitInExpression_2D_weak (const GALGAS_varBitInExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varBitInExpression_2D_weak GALGAS_varBitInExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_varBitInExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varBitInExpression GALGAS_varBitInExpression_2D_weak::bang_varBitInExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_varBitInExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_varBitInExpression) ;
      result = GALGAS_varBitInExpression ((cPtr_varBitInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @varBitInExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varBitInExpression_2D_weak ("varBitInExpression-weak",
                                                                                  & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varBitInExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varBitInExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varBitInExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varBitInExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varBitInExpression_2D_weak GALGAS_varBitInExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_varBitInExpression_2D_weak result ;
  const GALGAS_varBitInExpression_2D_weak * p = (const GALGAS_varBitInExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_varBitInExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varBitInExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @andExpression reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_andExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_andExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_andExpression * p = (const cPtr_andExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_andExpression::objectCompare (const GALGAS_andExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andExpression::GALGAS_andExpression (void) :
GALGAS_expression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_andExpression::GALGAS_andExpression (const cPtr_andExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andExpression) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_andExpression GALGAS_andExpression::class_func_new (const GALGAS_expression & inAttribute_mLeftExpression,
                                                           const GALGAS_expression & inAttribute_mRightExpression
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_andExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_andExpression::setter_setMLeftExpression (GALGAS_expression inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_andExpression * p = (cPtr_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_andExpression::setter_setMRightExpression (GALGAS_expression inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_andExpression * p = (cPtr_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_andExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_andExpression * p = (cPtr_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_andExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_andExpression * p = (cPtr_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @andExpression class
//--------------------------------------------------------------------------------------------------

cPtr_andExpression::cPtr_andExpression (const GALGAS_expression & in_mLeftExpression,
                                        const GALGAS_expression & in_mRightExpression
                                        COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpression ;
}

void cPtr_andExpression::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendString ("[@andExpression:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_andExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @andExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andExpression ("andExpression",
                                                                     & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andExpression GALGAS_andExpression::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_andExpression result ;
  const GALGAS_andExpression * p = (const GALGAS_andExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_andExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_andExpression_2D_weak::objectCompare (const GALGAS_andExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andExpression_2D_weak::GALGAS_andExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_andExpression_2D_weak & GALGAS_andExpression_2D_weak::operator = (const GALGAS_andExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andExpression_2D_weak::GALGAS_andExpression_2D_weak (const GALGAS_andExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_andExpression_2D_weak GALGAS_andExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_andExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andExpression GALGAS_andExpression_2D_weak::bang_andExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_andExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andExpression) ;
      result = GALGAS_andExpression ((cPtr_andExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @andExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_andExpression_2D_weak ("andExpression-weak",
                                                                             & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_andExpression_2D_weak GALGAS_andExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_andExpression_2D_weak result ;
  const GALGAS_andExpression_2D_weak * p = (const GALGAS_andExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_andExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @orExpression reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_orExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_orExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_orExpression * p = (const cPtr_orExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_orExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_orExpression::objectCompare (const GALGAS_orExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orExpression::GALGAS_orExpression (void) :
GALGAS_expression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_orExpression::GALGAS_orExpression (const cPtr_orExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orExpression) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_orExpression GALGAS_orExpression::class_func_new (const GALGAS_expression & inAttribute_mLeftExpression,
                                                         const GALGAS_expression & inAttribute_mRightExpression
                                                         COMMA_LOCATION_ARGS) {
  GALGAS_orExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_orExpression::setter_setMLeftExpression (GALGAS_expression inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_orExpression * p = (cPtr_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_orExpression::setter_setMRightExpression (GALGAS_expression inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_orExpression * p = (cPtr_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_orExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_orExpression * p = (cPtr_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_orExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_orExpression * p = (cPtr_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @orExpression class
//--------------------------------------------------------------------------------------------------

cPtr_orExpression::cPtr_orExpression (const GALGAS_expression & in_mLeftExpression,
                                      const GALGAS_expression & in_mRightExpression
                                      COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_orExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpression ;
}

void cPtr_orExpression::description (String & ioString,
                                     const int32_t inIndentation) const {
  ioString.appendString ("[@orExpression:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_orExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_orExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @orExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orExpression ("orExpression",
                                                                    & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orExpression GALGAS_orExpression::extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_orExpression result ;
  const GALGAS_orExpression * p = (const GALGAS_orExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_orExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_orExpression_2D_weak::objectCompare (const GALGAS_orExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orExpression_2D_weak::GALGAS_orExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_orExpression_2D_weak & GALGAS_orExpression_2D_weak::operator = (const GALGAS_orExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orExpression_2D_weak::GALGAS_orExpression_2D_weak (const GALGAS_orExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_orExpression_2D_weak GALGAS_orExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_orExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orExpression GALGAS_orExpression_2D_weak::bang_orExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_orExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_orExpression) ;
      result = GALGAS_orExpression ((cPtr_orExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @orExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orExpression_2D_weak ("orExpression-weak",
                                                                            & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_orExpression_2D_weak GALGAS_orExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_orExpression_2D_weak result ;
  const GALGAS_orExpression_2D_weak * p = (const GALGAS_orExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_orExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @xorExpression reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_xorExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_xorExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_xorExpression * p = (const cPtr_xorExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_xorExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_xorExpression::objectCompare (const GALGAS_xorExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorExpression::GALGAS_xorExpression (void) :
GALGAS_expression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorExpression::GALGAS_xorExpression (const cPtr_xorExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorExpression) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_xorExpression GALGAS_xorExpression::class_func_new (const GALGAS_expression & inAttribute_mLeftExpression,
                                                           const GALGAS_expression & inAttribute_mRightExpression
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_xorExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xorExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_xorExpression::setter_setMLeftExpression (GALGAS_expression inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_xorExpression * p = (cPtr_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_xorExpression::setter_setMRightExpression (GALGAS_expression inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_xorExpression * p = (cPtr_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_xorExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_xorExpression * p = (cPtr_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_xorExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_xorExpression * p = (cPtr_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @xorExpression class
//--------------------------------------------------------------------------------------------------

cPtr_xorExpression::cPtr_xorExpression (const GALGAS_expression & in_mLeftExpression,
                                        const GALGAS_expression & in_mRightExpression
                                        COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_xorExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpression ;
}

void cPtr_xorExpression::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendString ("[@xorExpression:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_xorExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_xorExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @xorExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorExpression ("xorExpression",
                                                                     & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xorExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xorExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorExpression GALGAS_xorExpression::extractObject (const GALGAS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_xorExpression result ;
  const GALGAS_xorExpression * p = (const GALGAS_xorExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_xorExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_xorExpression_2D_weak::objectCompare (const GALGAS_xorExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorExpression_2D_weak::GALGAS_xorExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorExpression_2D_weak & GALGAS_xorExpression_2D_weak::operator = (const GALGAS_xorExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorExpression_2D_weak::GALGAS_xorExpression_2D_weak (const GALGAS_xorExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorExpression_2D_weak GALGAS_xorExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_xorExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorExpression GALGAS_xorExpression_2D_weak::bang_xorExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_xorExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_xorExpression) ;
      result = GALGAS_xorExpression ((cPtr_xorExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @xorExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_xorExpression_2D_weak ("xorExpression-weak",
                                                                             & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xorExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xorExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_xorExpression_2D_weak GALGAS_xorExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_xorExpression_2D_weak result ;
  const GALGAS_xorExpression_2D_weak * p = (const GALGAS_xorExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_xorExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @equalExpression reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_equalExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_equalExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_equalExpression * p = (const cPtr_equalExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_equalExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_equalExpression::objectCompare (const GALGAS_equalExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_equalExpression::GALGAS_equalExpression (void) :
GALGAS_expression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_equalExpression::GALGAS_equalExpression (const cPtr_equalExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_equalExpression) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_equalExpression GALGAS_equalExpression::class_func_new (const GALGAS_expression & inAttribute_mLeftExpression,
                                                               const GALGAS_expression & inAttribute_mRightExpression
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_equalExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_equalExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_equalExpression::setter_setMLeftExpression (GALGAS_expression inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_equalExpression * p = (cPtr_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_equalExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_equalExpression::setter_setMRightExpression (GALGAS_expression inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_equalExpression * p = (cPtr_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_equalExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_equalExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_equalExpression * p = (cPtr_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_equalExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_equalExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_equalExpression * p = (cPtr_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_equalExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @equalExpression class
//--------------------------------------------------------------------------------------------------

cPtr_equalExpression::cPtr_equalExpression (const GALGAS_expression & in_mLeftExpression,
                                            const GALGAS_expression & in_mRightExpression
                                            COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_equalExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equalExpression ;
}

void cPtr_equalExpression::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendString ("[@equalExpression:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_equalExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_equalExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @equalExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equalExpression ("equalExpression",
                                                                       & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_equalExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equalExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_equalExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_equalExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_equalExpression GALGAS_equalExpression::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_equalExpression result ;
  const GALGAS_equalExpression * p = (const GALGAS_equalExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_equalExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("equalExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_equalExpression_2D_weak::objectCompare (const GALGAS_equalExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_equalExpression_2D_weak::GALGAS_equalExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_equalExpression_2D_weak & GALGAS_equalExpression_2D_weak::operator = (const GALGAS_equalExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_equalExpression_2D_weak::GALGAS_equalExpression_2D_weak (const GALGAS_equalExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_equalExpression_2D_weak GALGAS_equalExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_equalExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_equalExpression GALGAS_equalExpression_2D_weak::bang_equalExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_equalExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_equalExpression) ;
      result = GALGAS_equalExpression ((cPtr_equalExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @equalExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_equalExpression_2D_weak ("equalExpression-weak",
                                                                               & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_equalExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equalExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_equalExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_equalExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_equalExpression_2D_weak GALGAS_equalExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_equalExpression_2D_weak result ;
  const GALGAS_equalExpression_2D_weak * p = (const GALGAS_equalExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_equalExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("equalExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @notEqualExpression reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_notEqualExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_notEqualExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_notEqualExpression * p = (const cPtr_notEqualExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_notEqualExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_notEqualExpression::objectCompare (const GALGAS_notEqualExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_notEqualExpression::GALGAS_notEqualExpression (void) :
GALGAS_expression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_notEqualExpression::GALGAS_notEqualExpression (const cPtr_notEqualExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_notEqualExpression) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_notEqualExpression GALGAS_notEqualExpression::class_func_new (const GALGAS_expression & inAttribute_mLeftExpression,
                                                                     const GALGAS_expression & inAttribute_mRightExpression
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_notEqualExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_notEqualExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_notEqualExpression::setter_setMLeftExpression (GALGAS_expression inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_notEqualExpression * p = (cPtr_notEqualExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notEqualExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_notEqualExpression::setter_setMRightExpression (GALGAS_expression inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_notEqualExpression * p = (cPtr_notEqualExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notEqualExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_notEqualExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_notEqualExpression * p = (cPtr_notEqualExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notEqualExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_notEqualExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_notEqualExpression * p = (cPtr_notEqualExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notEqualExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @notEqualExpression class
//--------------------------------------------------------------------------------------------------

cPtr_notEqualExpression::cPtr_notEqualExpression (const GALGAS_expression & in_mLeftExpression,
                                                  const GALGAS_expression & in_mRightExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_notEqualExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notEqualExpression ;
}

void cPtr_notEqualExpression::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendString ("[@notEqualExpression:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_notEqualExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_notEqualExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @notEqualExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notEqualExpression ("notEqualExpression",
                                                                          & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_notEqualExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notEqualExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_notEqualExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_notEqualExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_notEqualExpression GALGAS_notEqualExpression::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_notEqualExpression result ;
  const GALGAS_notEqualExpression * p = (const GALGAS_notEqualExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_notEqualExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("notEqualExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_notEqualExpression_2D_weak::objectCompare (const GALGAS_notEqualExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_notEqualExpression_2D_weak::GALGAS_notEqualExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_notEqualExpression_2D_weak & GALGAS_notEqualExpression_2D_weak::operator = (const GALGAS_notEqualExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_notEqualExpression_2D_weak::GALGAS_notEqualExpression_2D_weak (const GALGAS_notEqualExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_notEqualExpression_2D_weak GALGAS_notEqualExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_notEqualExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_notEqualExpression GALGAS_notEqualExpression_2D_weak::bang_notEqualExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_notEqualExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_notEqualExpression) ;
      result = GALGAS_notEqualExpression ((cPtr_notEqualExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @notEqualExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_notEqualExpression_2D_weak ("notEqualExpression-weak",
                                                                                  & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_notEqualExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notEqualExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_notEqualExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_notEqualExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_notEqualExpression_2D_weak GALGAS_notEqualExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_notEqualExpression_2D_weak result ;
  const GALGAS_notEqualExpression_2D_weak * p = (const GALGAS_notEqualExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_notEqualExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("notEqualExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @impliesExpression reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_impliesExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_impliesExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_impliesExpression * p = (const cPtr_impliesExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_impliesExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_impliesExpression::objectCompare (const GALGAS_impliesExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_impliesExpression::GALGAS_impliesExpression (void) :
GALGAS_expression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_impliesExpression::GALGAS_impliesExpression (const cPtr_impliesExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_impliesExpression) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_impliesExpression GALGAS_impliesExpression::class_func_new (const GALGAS_expression & inAttribute_mLeftExpression,
                                                                   const GALGAS_expression & inAttribute_mRightExpression
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_impliesExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_impliesExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_impliesExpression::setter_setMLeftExpression (GALGAS_expression inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_impliesExpression * p = (cPtr_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impliesExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_impliesExpression::setter_setMRightExpression (GALGAS_expression inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_impliesExpression * p = (cPtr_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impliesExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_impliesExpression::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_impliesExpression * p = (cPtr_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impliesExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_impliesExpression::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_impliesExpression * p = (cPtr_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impliesExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @impliesExpression class
//--------------------------------------------------------------------------------------------------

cPtr_impliesExpression::cPtr_impliesExpression (const GALGAS_expression & in_mLeftExpression,
                                                const GALGAS_expression & in_mRightExpression
                                                COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_impliesExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impliesExpression ;
}

void cPtr_impliesExpression::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendString ("[@impliesExpression:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_impliesExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_impliesExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @impliesExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_impliesExpression ("impliesExpression",
                                                                         & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_impliesExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impliesExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_impliesExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_impliesExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_impliesExpression GALGAS_impliesExpression::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_impliesExpression result ;
  const GALGAS_impliesExpression * p = (const GALGAS_impliesExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_impliesExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("impliesExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_impliesExpression_2D_weak::objectCompare (const GALGAS_impliesExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_impliesExpression_2D_weak::GALGAS_impliesExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_impliesExpression_2D_weak & GALGAS_impliesExpression_2D_weak::operator = (const GALGAS_impliesExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_impliesExpression_2D_weak::GALGAS_impliesExpression_2D_weak (const GALGAS_impliesExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_impliesExpression_2D_weak GALGAS_impliesExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_impliesExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_impliesExpression GALGAS_impliesExpression_2D_weak::bang_impliesExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_impliesExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_impliesExpression) ;
      result = GALGAS_impliesExpression ((cPtr_impliesExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @impliesExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_impliesExpression_2D_weak ("impliesExpression-weak",
                                                                                 & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_impliesExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impliesExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_impliesExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_impliesExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_impliesExpression_2D_weak GALGAS_impliesExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_impliesExpression_2D_weak result ;
  const GALGAS_impliesExpression_2D_weak * p = (const GALGAS_impliesExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_impliesExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("impliesExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @complementExpression reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_complementExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_complementExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_complementExpression * p = (const cPtr_complementExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_complementExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_complementExpression::objectCompare (const GALGAS_complementExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_complementExpression::GALGAS_complementExpression (void) :
GALGAS_expression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_complementExpression::GALGAS_complementExpression (const cPtr_complementExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_complementExpression) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_complementExpression GALGAS_complementExpression::class_func_new (const GALGAS_expression & inAttribute_mExpression
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_complementExpression result ;
  if (inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_complementExpression (inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_complementExpression::setter_setMExpression (GALGAS_expression inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_complementExpression * p = (cPtr_complementExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_complementExpression) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_complementExpression::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_complementExpression * p = (cPtr_complementExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_complementExpression) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @complementExpression class
//--------------------------------------------------------------------------------------------------

cPtr_complementExpression::cPtr_complementExpression (const GALGAS_expression & in_mExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mExpression (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_complementExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complementExpression ;
}

void cPtr_complementExpression::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendString ("[@complementExpression:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_complementExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_complementExpression (mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @complementExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_complementExpression ("complementExpression",
                                                                            & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_complementExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complementExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_complementExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_complementExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_complementExpression GALGAS_complementExpression::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_complementExpression result ;
  const GALGAS_complementExpression * p = (const GALGAS_complementExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_complementExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("complementExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_complementExpression_2D_weak::objectCompare (const GALGAS_complementExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_complementExpression_2D_weak::GALGAS_complementExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_complementExpression_2D_weak & GALGAS_complementExpression_2D_weak::operator = (const GALGAS_complementExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_complementExpression_2D_weak::GALGAS_complementExpression_2D_weak (const GALGAS_complementExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_complementExpression_2D_weak GALGAS_complementExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_complementExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_complementExpression GALGAS_complementExpression_2D_weak::bang_complementExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_complementExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_complementExpression) ;
      result = GALGAS_complementExpression ((cPtr_complementExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @complementExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_complementExpression_2D_weak ("complementExpression-weak",
                                                                                    & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_complementExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complementExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_complementExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_complementExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_complementExpression_2D_weak GALGAS_complementExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_complementExpression_2D_weak result ;
  const GALGAS_complementExpression_2D_weak * p = (const GALGAS_complementExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_complementExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("complementExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @trueExpression reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_trueExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_trueExpression::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_trueExpression::objectCompare (const GALGAS_trueExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_trueExpression::GALGAS_trueExpression (void) :
GALGAS_expression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_trueExpression::GALGAS_trueExpression (const cPtr_trueExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_trueExpression) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_trueExpression GALGAS_trueExpression::class_func_new (LOCATION_ARGS) {
  GALGAS_trueExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_trueExpression (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @trueExpression class
//--------------------------------------------------------------------------------------------------

cPtr_trueExpression::cPtr_trueExpression (LOCATION_ARGS) :
cPtr_expression (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_trueExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpression ;
}

void cPtr_trueExpression::description (String & ioString,
                                       const int32_t /* inIndentation */) const {
  ioString.appendString ("[@trueExpression]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_trueExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_trueExpression (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @trueExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpression ("trueExpression",
                                                                      & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_trueExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_trueExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_trueExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_trueExpression GALGAS_trueExpression::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_trueExpression result ;
  const GALGAS_trueExpression * p = (const GALGAS_trueExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_trueExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("trueExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_trueExpression_2D_weak::objectCompare (const GALGAS_trueExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_trueExpression_2D_weak::GALGAS_trueExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_trueExpression_2D_weak & GALGAS_trueExpression_2D_weak::operator = (const GALGAS_trueExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_trueExpression_2D_weak::GALGAS_trueExpression_2D_weak (const GALGAS_trueExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_trueExpression_2D_weak GALGAS_trueExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_trueExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_trueExpression GALGAS_trueExpression_2D_weak::bang_trueExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_trueExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_trueExpression) ;
      result = GALGAS_trueExpression ((cPtr_trueExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @trueExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_trueExpression_2D_weak ("trueExpression-weak",
                                                                              & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_trueExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_trueExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_trueExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_trueExpression_2D_weak GALGAS_trueExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_trueExpression_2D_weak result ;
  const GALGAS_trueExpression_2D_weak * p = (const GALGAS_trueExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_trueExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("trueExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @falseExpression reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_falseExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_falseExpression::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_falseExpression::objectCompare (const GALGAS_falseExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_falseExpression::GALGAS_falseExpression (void) :
GALGAS_expression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_falseExpression::GALGAS_falseExpression (const cPtr_falseExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_falseExpression) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_falseExpression GALGAS_falseExpression::class_func_new (LOCATION_ARGS) {
  GALGAS_falseExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_falseExpression (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @falseExpression class
//--------------------------------------------------------------------------------------------------

cPtr_falseExpression::cPtr_falseExpression (LOCATION_ARGS) :
cPtr_expression (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_falseExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpression ;
}

void cPtr_falseExpression::description (String & ioString,
                                        const int32_t /* inIndentation */) const {
  ioString.appendString ("[@falseExpression]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_falseExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_falseExpression (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @falseExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpression ("falseExpression",
                                                                       & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_falseExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_falseExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_falseExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_falseExpression GALGAS_falseExpression::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_falseExpression result ;
  const GALGAS_falseExpression * p = (const GALGAS_falseExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_falseExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("falseExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_falseExpression_2D_weak::objectCompare (const GALGAS_falseExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_falseExpression_2D_weak::GALGAS_falseExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_falseExpression_2D_weak & GALGAS_falseExpression_2D_weak::operator = (const GALGAS_falseExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_falseExpression_2D_weak::GALGAS_falseExpression_2D_weak (const GALGAS_falseExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_falseExpression_2D_weak GALGAS_falseExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_falseExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_falseExpression GALGAS_falseExpression_2D_weak::bang_falseExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_falseExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_falseExpression) ;
      result = GALGAS_falseExpression ((cPtr_falseExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @falseExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_falseExpression_2D_weak ("falseExpression-weak",
                                                                               & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_falseExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_falseExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_falseExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_falseExpression_2D_weak GALGAS_falseExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_falseExpression_2D_weak result ;
  const GALGAS_falseExpression_2D_weak * p = (const GALGAS_falseExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_falseExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("falseExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  public: GALGAS_formulaParameterListInExpression_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_formulaParameterListInExpression (const GALGAS_lstring & in_mParameterName,
                                                               const GALGAS_lstringlist & in_mFieldNames
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formulaParameterListInExpression (const GALGAS_formulaParameterListInExpression_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_formulaParameterListInExpression::cCollectionElement_formulaParameterListInExpression (const GALGAS_lstring & in_mParameterName,
                                                                                                          const GALGAS_lstringlist & in_mFieldNames
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mParameterName, in_mFieldNames) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_formulaParameterListInExpression::cCollectionElement_formulaParameterListInExpression (const GALGAS_formulaParameterListInExpression_2D_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendString ("mParameterName" ":") ;
  mObject.mProperty_mParameterName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendString ("mFieldNames" ":") ;
  mObject.mProperty_mFieldNames.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_formulaParameterListInExpression::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formulaParameterListInExpression * operand = (cCollectionElement_formulaParameterListInExpression *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formulaParameterListInExpression) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression::GALGAS_formulaParameterListInExpression (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression::GALGAS_formulaParameterListInExpression (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression GALGAS_formulaParameterListInExpression::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_formulaParameterListInExpression (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression GALGAS_formulaParameterListInExpression::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                           const GALGAS_lstringlist & inOperand1
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_formulaParameterListInExpression result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_formulaParameterListInExpression (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_formulaParameterListInExpression::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaParameterListInExpression::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lstring & in_mParameterName,
                                                                         const GALGAS_lstringlist & in_mFieldNames
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_formulaParameterListInExpression * p = nullptr ;
  macroMyNew (p, cCollectionElement_formulaParameterListInExpression (in_mParameterName,
                                                                      in_mFieldNames COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaParameterListInExpression::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_lstringlist & inOperand1
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

void GALGAS_formulaParameterListInExpression::setter_append (const GALGAS_lstring inOperand0,
                                                             const GALGAS_lstringlist inOperand1,
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

void GALGAS_formulaParameterListInExpression::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                    const GALGAS_lstringlist inOperand1,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_formulaParameterListInExpression (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaParameterListInExpression::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                    GALGAS_lstringlist & outOperand1,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
        outOperand0 = p->mObject.mProperty_mParameterName ;
        outOperand1 = p->mObject.mProperty_mFieldNames ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaParameterListInExpression::setter_popFirst (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstringlist & outOperand1,
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

void GALGAS_formulaParameterListInExpression::setter_popLast (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstringlist & outOperand1,
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

void GALGAS_formulaParameterListInExpression::method_first (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstringlist & outOperand1,
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

void GALGAS_formulaParameterListInExpression::method_last (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstringlist & outOperand1,
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

GALGAS_formulaParameterListInExpression GALGAS_formulaParameterListInExpression::add_operation (const GALGAS_formulaParameterListInExpression & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formulaParameterListInExpression result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression GALGAS_formulaParameterListInExpression::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formulaParameterListInExpression result = GALGAS_formulaParameterListInExpression::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression GALGAS_formulaParameterListInExpression::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formulaParameterListInExpression result = GALGAS_formulaParameterListInExpression::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression GALGAS_formulaParameterListInExpression::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_formulaParameterListInExpression result = GALGAS_formulaParameterListInExpression::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaParameterListInExpression::plusAssign_operation (const GALGAS_formulaParameterListInExpression inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaParameterListInExpression::setter_setMParameterNameAtIndex (GALGAS_lstring inOperand,
                                                                               GALGAS_uint inIndex,
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

GALGAS_lstring GALGAS_formulaParameterListInExpression::getter_mParameterNameAtIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    result = p->mObject.mProperty_mParameterName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaParameterListInExpression::setter_setMFieldNamesAtIndex (GALGAS_lstringlist inOperand,
                                                                            GALGAS_uint inIndex,
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

GALGAS_lstringlist GALGAS_formulaParameterListInExpression::getter_mFieldNamesAtIndex (const GALGAS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    result = p->mObject.mProperty_mFieldNames ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_formulaParameterListInExpression::cEnumerator_formulaParameterListInExpression (const GALGAS_formulaParameterListInExpression & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression_2D_element cEnumerator_formulaParameterListInExpression::current (LOCATION_ARGS) const {
  const cCollectionElement_formulaParameterListInExpression * p = (const cCollectionElement_formulaParameterListInExpression *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formulaParameterListInExpression::current_mParameterName (LOCATION_ARGS) const {
  const cCollectionElement_formulaParameterListInExpression * p = (const cCollectionElement_formulaParameterListInExpression *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
  return p->mObject.mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_formulaParameterListInExpression::current_mFieldNames (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GALGAS_formulaParameterListInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaParameterListInExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formulaParameterListInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formulaParameterListInExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression GALGAS_formulaParameterListInExpression::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_formulaParameterListInExpression result ;
  const GALGAS_formulaParameterListInExpression * p = (const GALGAS_formulaParameterListInExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_formulaParameterListInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaParameterListInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_formulaInExpression_2D_weak::objectCompare (const GALGAS_formulaInExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaInExpression_2D_weak::GALGAS_formulaInExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaInExpression_2D_weak & GALGAS_formulaInExpression_2D_weak::operator = (const GALGAS_formulaInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaInExpression_2D_weak::GALGAS_formulaInExpression_2D_weak (const GALGAS_formulaInExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaInExpression_2D_weak GALGAS_formulaInExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_formulaInExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaInExpression GALGAS_formulaInExpression_2D_weak::bang_formulaInExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_formulaInExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_formulaInExpression) ;
      result = GALGAS_formulaInExpression ((cPtr_formulaInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @formulaInExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaInExpression_2D_weak ("formulaInExpression-weak",
                                                                                   & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formulaInExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaInExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formulaInExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formulaInExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaInExpression_2D_weak GALGAS_formulaInExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formulaInExpression_2D_weak result ;
  const GALGAS_formulaInExpression_2D_weak * p = (const GALGAS_formulaInExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_formulaInExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaInExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @existInExpression reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_existInExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mArgumentList.printNonNullClassInstanceProperties ("mArgumentList") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_existInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_existInExpression * p = (const cPtr_existInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_existInExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mArgumentList.objectCompare (p->mProperty_mArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_existInExpression::objectCompare (const GALGAS_existInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_existInExpression::GALGAS_existInExpression (void) :
GALGAS_expression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_existInExpression::GALGAS_existInExpression (const cPtr_existInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_existInExpression) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_existInExpression GALGAS_existInExpression::class_func_new (const GALGAS_domainFieldList & inAttribute_mArgumentList,
                                                                   const GALGAS_expression & inAttribute_mExpression
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_existInExpression result ;
  if (inAttribute_mArgumentList.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_existInExpression (inAttribute_mArgumentList, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_existInExpression::setter_setMArgumentList (GALGAS_domainFieldList inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_existInExpression * p = (cPtr_existInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_existInExpression) ;
    p->mProperty_mArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_existInExpression::setter_setMExpression (GALGAS_expression inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_existInExpression * p = (cPtr_existInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_existInExpression) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainFieldList GALGAS_existInExpression::readProperty_mArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_domainFieldList () ;
  }else{
    cPtr_existInExpression * p = (cPtr_existInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_existInExpression) ;
    return p->mProperty_mArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_existInExpression::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_existInExpression * p = (cPtr_existInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_existInExpression) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @existInExpression class
//--------------------------------------------------------------------------------------------------

cPtr_existInExpression::cPtr_existInExpression (const GALGAS_domainFieldList & in_mArgumentList,
                                                const GALGAS_expression & in_mExpression
                                                COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mArgumentList (in_mArgumentList),
mProperty_mExpression (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_existInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_existInExpression ;
}

void cPtr_existInExpression::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendString ("[@existInExpression:") ;
  mProperty_mArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_existInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_existInExpression (mProperty_mArgumentList, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @existInExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_existInExpression ("existInExpression",
                                                                         & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_existInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_existInExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_existInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_existInExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_existInExpression GALGAS_existInExpression::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_existInExpression result ;
  const GALGAS_existInExpression * p = (const GALGAS_existInExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_existInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("existInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_existInExpression_2D_weak::objectCompare (const GALGAS_existInExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_existInExpression_2D_weak::GALGAS_existInExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_existInExpression_2D_weak & GALGAS_existInExpression_2D_weak::operator = (const GALGAS_existInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_existInExpression_2D_weak::GALGAS_existInExpression_2D_weak (const GALGAS_existInExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_existInExpression_2D_weak GALGAS_existInExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_existInExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_existInExpression GALGAS_existInExpression_2D_weak::bang_existInExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_existInExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_existInExpression) ;
      result = GALGAS_existInExpression ((cPtr_existInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @existInExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_existInExpression_2D_weak ("existInExpression-weak",
                                                                                 & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_existInExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_existInExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_existInExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_existInExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_existInExpression_2D_weak GALGAS_existInExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_existInExpression_2D_weak result ;
  const GALGAS_existInExpression_2D_weak * p = (const GALGAS_existInExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_existInExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("existInExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @forAllInExpression reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_forAllInExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mArgumentList.printNonNullClassInstanceProperties ("mArgumentList") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_forAllInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forAllInExpression * p = (const cPtr_forAllInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forAllInExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mArgumentList.objectCompare (p->mProperty_mArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_forAllInExpression::objectCompare (const GALGAS_forAllInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forAllInExpression::GALGAS_forAllInExpression (void) :
GALGAS_expression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forAllInExpression::GALGAS_forAllInExpression (const cPtr_forAllInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forAllInExpression) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_forAllInExpression GALGAS_forAllInExpression::class_func_new (const GALGAS_domainFieldList & inAttribute_mArgumentList,
                                                                     const GALGAS_expression & inAttribute_mExpression
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_forAllInExpression result ;
  if (inAttribute_mArgumentList.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forAllInExpression (inAttribute_mArgumentList, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forAllInExpression::setter_setMArgumentList (GALGAS_domainFieldList inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forAllInExpression * p = (cPtr_forAllInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forAllInExpression) ;
    p->mProperty_mArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_forAllInExpression::setter_setMExpression (GALGAS_expression inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_forAllInExpression * p = (cPtr_forAllInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forAllInExpression) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainFieldList GALGAS_forAllInExpression::readProperty_mArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_domainFieldList () ;
  }else{
    cPtr_forAllInExpression * p = (cPtr_forAllInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forAllInExpression) ;
    return p->mProperty_mArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_forAllInExpression::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_forAllInExpression * p = (cPtr_forAllInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forAllInExpression) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forAllInExpression class
//--------------------------------------------------------------------------------------------------

cPtr_forAllInExpression::cPtr_forAllInExpression (const GALGAS_domainFieldList & in_mArgumentList,
                                                  const GALGAS_expression & in_mExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mArgumentList (in_mArgumentList),
mProperty_mExpression (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_forAllInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forAllInExpression ;
}

void cPtr_forAllInExpression::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendString ("[@forAllInExpression:") ;
  mProperty_mArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forAllInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forAllInExpression (mProperty_mArgumentList, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @forAllInExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forAllInExpression ("forAllInExpression",
                                                                          & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forAllInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forAllInExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forAllInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forAllInExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forAllInExpression GALGAS_forAllInExpression::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_forAllInExpression result ;
  const GALGAS_forAllInExpression * p = (const GALGAS_forAllInExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forAllInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forAllInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_forAllInExpression_2D_weak::objectCompare (const GALGAS_forAllInExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forAllInExpression_2D_weak::GALGAS_forAllInExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forAllInExpression_2D_weak & GALGAS_forAllInExpression_2D_weak::operator = (const GALGAS_forAllInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forAllInExpression_2D_weak::GALGAS_forAllInExpression_2D_weak (const GALGAS_forAllInExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_forAllInExpression_2D_weak GALGAS_forAllInExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_forAllInExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forAllInExpression GALGAS_forAllInExpression_2D_weak::bang_forAllInExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_forAllInExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forAllInExpression) ;
      result = GALGAS_forAllInExpression ((cPtr_forAllInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @forAllInExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forAllInExpression_2D_weak ("forAllInExpression-weak",
                                                                                  & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forAllInExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forAllInExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forAllInExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forAllInExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_forAllInExpression_2D_weak GALGAS_forAllInExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_forAllInExpression_2D_weak result ;
  const GALGAS_forAllInExpression_2D_weak * p = (const GALGAS_forAllInExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_forAllInExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forAllInExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparison::GALGAS_comparison (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::class_func_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::class_func_notEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_notEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::class_func_lowerOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_lowerOrEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::class_func_lowerThan (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_lowerThan ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::class_func_greaterOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_greaterOrEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::class_func_greaterThan (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_greaterThan ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_equal () const {
  const bool ok = mEnum == kEnum_equal ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_notEqual () const {
  const bool ok = mEnum == kEnum_notEqual ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_lowerOrEqual () const {
  const bool ok = mEnum == kEnum_lowerOrEqual ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_lowerThan () const {
  const bool ok = mEnum == kEnum_lowerThan ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_greaterOrEqual () const {
  const bool ok = mEnum == kEnum_greaterOrEqual ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_greaterThan () const {
  const bool ok = mEnum == kEnum_greaterThan ;
  return ok ;
}

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

GALGAS_bool GALGAS_comparison::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isNotEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_notEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isLowerOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lowerOrEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isLowerThan (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lowerThan == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isGreaterOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greaterOrEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isGreaterThan (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greaterThan == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_comparison::description (String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString.appendString ("<enum @comparison: ") ;
  ioString.appendString (gEnumNameArrayFor_comparison [mEnum]) ;
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_comparison::objectCompare (const GALGAS_comparison & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @comparison generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparison ("comparison",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparison::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparison ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparison::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparison (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_comparison result ;
  const GALGAS_comparison * p = (const GALGAS_comparison *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_comparison *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparison", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_comparisonWithConstantInExpression_2D_weak::objectCompare (const GALGAS_comparisonWithConstantInExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonWithConstantInExpression_2D_weak::GALGAS_comparisonWithConstantInExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonWithConstantInExpression_2D_weak & GALGAS_comparisonWithConstantInExpression_2D_weak::operator = (const GALGAS_comparisonWithConstantInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonWithConstantInExpression_2D_weak::GALGAS_comparisonWithConstantInExpression_2D_weak (const GALGAS_comparisonWithConstantInExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonWithConstantInExpression_2D_weak GALGAS_comparisonWithConstantInExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_comparisonWithConstantInExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonWithConstantInExpression GALGAS_comparisonWithConstantInExpression_2D_weak::bang_comparisonWithConstantInExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_comparisonWithConstantInExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_comparisonWithConstantInExpression) ;
      result = GALGAS_comparisonWithConstantInExpression ((cPtr_comparisonWithConstantInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @comparisonWithConstantInExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonWithConstantInExpression_2D_weak ("comparisonWithConstantInExpression-weak",
                                                                                                  & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonWithConstantInExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonWithConstantInExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonWithConstantInExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonWithConstantInExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonWithConstantInExpression_2D_weak GALGAS_comparisonWithConstantInExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_comparisonWithConstantInExpression_2D_weak result ;
  const GALGAS_comparisonWithConstantInExpression_2D_weak * p = (const GALGAS_comparisonWithConstantInExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_comparisonWithConstantInExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonWithConstantInExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_variableComparisonInExpression_2D_weak::objectCompare (const GALGAS_variableComparisonInExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_variableComparisonInExpression_2D_weak::GALGAS_variableComparisonInExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_variableComparisonInExpression_2D_weak & GALGAS_variableComparisonInExpression_2D_weak::operator = (const GALGAS_variableComparisonInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_variableComparisonInExpression_2D_weak::GALGAS_variableComparisonInExpression_2D_weak (const GALGAS_variableComparisonInExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_variableComparisonInExpression_2D_weak GALGAS_variableComparisonInExpression_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_variableComparisonInExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_variableComparisonInExpression GALGAS_variableComparisonInExpression_2D_weak::bang_variableComparisonInExpression_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_variableComparisonInExpression result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_variableComparisonInExpression) ;
      result = GALGAS_variableComparisonInExpression ((cPtr_variableComparisonInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @variableComparisonInExpression-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_variableComparisonInExpression_2D_weak ("variableComparisonInExpression-weak",
                                                                                              & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_variableComparisonInExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableComparisonInExpression_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_variableComparisonInExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_variableComparisonInExpression_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_variableComparisonInExpression_2D_weak GALGAS_variableComparisonInExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_variableComparisonInExpression_2D_weak result ;
  const GALGAS_variableComparisonInExpression_2D_weak * p = (const GALGAS_variableComparisonInExpression_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_variableComparisonInExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("variableComparisonInExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@expression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GALGAS_binaryset callExtensionGetter_computeExpression (const cPtr_expression * inObject,
                                                        const GALGAS_domainMap in_inDomainMap,
                                                        const GALGAS_varMap in_inVarMap,
                                                        const GALGAS_uint in_inTotalBitCount,
                                                        const GALGAS_computedFormulaMap in_inComputedFormulaMap,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_binaryset result ;
  if (nullptr != inObject) {
    result = inObject->getter_computeExpression (in_inDomainMap, in_inVarMap, in_inTotalBitCount, in_inComputedFormulaMap, inCompiler COMMA_THERE) ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_start_5F_symbol_i0_ (GALGAS_ast & outArgument_outAST,
                                                                          Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outAST.drop () ; // Release 'out' argument
  outArgument_outAST = GALGAS_ast::class_func_new (inCompiler  COMMA_SOURCE_FILE ("grammar.ggs", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_kerbdd_5F_syntax_0 (inCompiler) == 2) {
      nt_topLevelDeClaration_ (outArgument_outAST, inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i1_ (GALGAS_ast & ioArgument_ioAST,
                                                                              Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_domain COMMA_SOURCE_FILE ("domain.ggs", 41)) ;
  GALGAS_lstring var_domainName_1723 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 42)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("domain.ggs", 43)) ;
  GALGAS_domainDeclarationType var_domainDeclarationType_1770 ;
  switch (select_kerbdd_5F_syntax_1 (inCompiler)) {
  case 1: {
    GALGAS_bddType var_type_1827 ;
    nt_type_ (var_type_1827, inCompiler) ;
    var_domainDeclarationType_1770 = GALGAS_domainDeclarationType::class_func_type (var_type_1827  COMMA_SOURCE_FILE ("domain.ggs", 47)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("domain.ggs", 49)) ;
    GALGAS_domainFieldList var_fieldList_1935 ;
    nt_recordFields_ (var_fieldList_1935, inCompiler) ;
    var_domainDeclarationType_1770 = GALGAS_domainDeclarationType::class_func_record (var_fieldList_1935  COMMA_SOURCE_FILE ("domain.ggs", 51)) ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("domain.ggs", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("domain.ggs", 54)) ;
  {
  ioArgument_ioAST.mProperty_mDomainList.setter_append (var_domainName_1723, var_domainDeclarationType_1770, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 55)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_recordFields_i2_ (GALGAS_domainFieldList & outArgument_outFormulaArgumentList,
                                                                       Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outFormulaArgumentList.drop () ; // Release 'out' argument
  outArgument_outFormulaArgumentList = GALGAS_domainFieldList::class_func_emptyList (SOURCE_FILE ("domain.ggs", 61)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_varName_2342 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 63)) ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("domain.ggs", 64)) ;
    GALGAS_bddType var_type_2385 ;
    nt_type_ (var_type_2385, inCompiler) ;
    {
    outArgument_outFormulaArgumentList.setter_append (var_varName_2342, var_type_2385, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 66)) ;
    }
    if (select_kerbdd_5F_syntax_2 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("domain.ggs", 68)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_type_i3_ (GALGAS_bddType & outArgument_outType,
                                                               Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outType.drop () ; // Release 'out' argument
  switch (select_kerbdd_5F_syntax_3 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_typeName_2656 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 76)) ;
    outArgument_outType = GALGAS_bddType::class_func_namedType (var_typeName_2656  COMMA_SOURCE_FILE ("domain.ggs", 77)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_bool COMMA_SOURCE_FILE ("domain.ggs", 79)) ;
    switch (select_kerbdd_5F_syntax_4 (inCompiler)) {
    case 1: {
      outArgument_outType = GALGAS_bddType::class_func_bool (SOURCE_FILE ("domain.ggs", 81)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("domain.ggs", 83)) ;
      GALGAS_luint var_bitCount_2800 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("domain.ggs", 84)) ;
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("domain.ggs", 85)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, var_bitCount_2800.readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_bitCount_2800.readProperty_location (), GALGAS_string ("size should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("domain.ggs", 87)) ;
        }
      }
      outArgument_outType = GALGAS_bddType::class_func_boolArray (var_bitCount_2800.readProperty_uint ()  COMMA_SOURCE_FILE ("domain.ggs", 89)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i4_ (GALGAS_ast & ioArgument_ioAST,
                                                                              Lexique_kerbdd_5F_lexique * inCompiler) {
  GALGAS_lstring var_formulaName_1358 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-assignment.ggs", 28)) ;
  GALGAS_domainFieldList var_domainFieldList_1394 ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 30)) ;
  switch (select_kerbdd_5F_syntax_5 (inCompiler)) {
  case 1: {
    var_domainFieldList_1394 = GALGAS_domainFieldList::class_func_emptyList (SOURCE_FILE ("formula-assignment.ggs", 32)) ;
  } break ;
  case 2: {
    nt_recordFields_ (var_domainFieldList_1394, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 36)) ;
  GALGAS_formulaKind var_kind_1524 ;
  switch (select_kerbdd_5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3A__3D_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 39)) ;
    var_kind_1524 = GALGAS_formulaKind::class_func_assignment (SOURCE_FILE ("formula-assignment.ggs", 40)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2B__3D_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 42)) ;
    var_kind_1524 = GALGAS_formulaKind::class_func_fixedPoint (GALGAS_binaryset::class_func_emptyBinarySet (SOURCE_FILE ("formula-assignment.ggs", 43))  COMMA_SOURCE_FILE ("formula-assignment.ggs", 43)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2D__3D_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 45)) ;
    var_kind_1524 = GALGAS_formulaKind::class_func_fixedPoint (GALGAS_binaryset::class_func_fullBinarySet (SOURCE_FILE ("formula-assignment.ggs", 46))  COMMA_SOURCE_FILE ("formula-assignment.ggs", 46)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_expression var_expression_1742 ;
  nt_expression_ (var_expression_1742, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 49)) ;
  {
  ioArgument_ioAST.mProperty_mFormulaList.setter_append (GALGAS_assignmentFormula::class_func_new (var_formulaName_1358, var_domainFieldList_1394, var_kind_1524, var_expression_1742  COMMA_SOURCE_FILE ("formula-assignment.ggs", 50)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 50)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i5_ (GALGAS_ast & ioArgument_ioAST,
                                                                              Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize COMMA_SOURCE_FILE ("setting-map.ggs", 24)) ;
  GALGAS_luint var_setting_1262 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("setting-map.ggs", 25)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("setting-map.ggs", 26)) ;
  {
  ioArgument_ioAST.mProperty_mFormulaList.setter_append (GALGAS_setting_5F_nodeHashMapSize::class_func_new (var_setting_1262  COMMA_SOURCE_FILE ("setting-map.ggs", 27)), inCompiler COMMA_SOURCE_FILE ("setting-map.ggs", 27)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i5_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize COMMA_SOURCE_FILE ("setting-map.ggs", 24)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("setting-map.ggs", 25)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("setting-map.ggs", 26)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i5_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize COMMA_SOURCE_FILE ("setting-map.ggs", 24)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("setting-map.ggs", 25)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("setting-map.ggs", 26)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i6_ (GALGAS_ast & ioArgument_ioAST,
                                                                              Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize COMMA_SOURCE_FILE ("setting-map.ggs", 33)) ;
  GALGAS_luint var_setting_1568 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("setting-map.ggs", 34)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("setting-map.ggs", 35)) ;
  {
  ioArgument_ioAST.mProperty_mFormulaList.setter_append (GALGAS_setting_5F_andCacheMapSize::class_func_new (var_setting_1568  COMMA_SOURCE_FILE ("setting-map.ggs", 36)), inCompiler COMMA_SOURCE_FILE ("setting-map.ggs", 36)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i6_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize COMMA_SOURCE_FILE ("setting-map.ggs", 33)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("setting-map.ggs", 34)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("setting-map.ggs", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i6_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize COMMA_SOURCE_FILE ("setting-map.ggs", 33)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("setting-map.ggs", 34)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("setting-map.ggs", 35)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i7_ (GALGAS_ast & ioArgument_ioAST,
                                                                              Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_dump COMMA_SOURCE_FILE ("formula-dump.ggs", 18)) ;
  GALGAS_lstring var_formulaName_1042 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-dump.ggs", 19)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-dump.ggs", 20)) ;
  {
  ioArgument_ioAST.mProperty_mFormulaList.setter_append (GALGAS_dumpFormula::class_func_new (var_formulaName_1042  COMMA_SOURCE_FILE ("formula-dump.ggs", 21)), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 21)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i7_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_dump COMMA_SOURCE_FILE ("formula-dump.ggs", 18)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-dump.ggs", 19)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-dump.ggs", 20)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i7_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_dump COMMA_SOURCE_FILE ("formula-dump.ggs", 18)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-dump.ggs", 19)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-dump.ggs", 20)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i8_ (GALGAS_ast & ioArgument_ioAST,
                                                                              Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("formula-graphviz.ggs", 18)) ;
  GALGAS_lstring var_formulaName_1050 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-graphviz.ggs", 19)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-graphviz.ggs", 20)) ;
  {
  ioArgument_ioAST.mProperty_mFormulaList.setter_append (GALGAS_graphvizFormula::class_func_new (var_formulaName_1050  COMMA_SOURCE_FILE ("formula-graphviz.ggs", 21)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 21)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i8_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("formula-graphviz.ggs", 18)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-graphviz.ggs", 19)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-graphviz.ggs", 20)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i8_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("formula-graphviz.ggs", 18)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-graphviz.ggs", 19)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-graphviz.ggs", 20)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_expression_i9_ (GALGAS_expression & outArgument_outExpression,
                                                                     Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_comparison_ (outArgument_outExpression, inCompiler) ;
  switch (select_kerbdd_5F_syntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("expression.ggs", 149)) ;
    GALGAS_expression var_rightExpression_5431 ;
    nt_comparison_ (var_rightExpression_5431, inCompiler) ;
    outArgument_outExpression = GALGAS_equalExpression::class_func_new (outArgument_outExpression, var_rightExpression_5431  COMMA_SOURCE_FILE ("expression.ggs", 151)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("expression.ggs", 153)) ;
    GALGAS_expression var_rightExpression_5573 ;
    nt_comparison_ (var_rightExpression_5573, inCompiler) ;
    outArgument_outExpression = GALGAS_notEqualExpression::class_func_new (outArgument_outExpression, var_rightExpression_5573  COMMA_SOURCE_FILE ("expression.ggs", 155)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_comparison_i10_ (GALGAS_expression & outArgument_outExpression,
                                                                      Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("expression.ggs", 165)) ;
      GALGAS_expression var_rightExpression_5929 ;
      nt_term_ (var_rightExpression_5929, inCompiler) ;
      outArgument_outExpression = GALGAS_orExpression::class_func_new (outArgument_outExpression, var_rightExpression_5929  COMMA_SOURCE_FILE ("expression.ggs", 167)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("expression.ggs", 169)) ;
      GALGAS_expression var_rightExpression_6064 ;
      nt_term_ (var_rightExpression_6064, inCompiler) ;
      outArgument_outExpression = GALGAS_xorExpression::class_func_new (outArgument_outExpression, var_rightExpression_6064  COMMA_SOURCE_FILE ("expression.ggs", 171)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_term_i11_ (GALGAS_expression & outArgument_outExpression,
                                                                Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("expression.ggs", 181)) ;
      GALGAS_expression var_rightExpression_6413 ;
      nt_factor_ (var_rightExpression_6413, inCompiler) ;
      outArgument_outExpression = GALGAS_andExpression::class_func_new (outArgument_outExpression, var_rightExpression_6413  COMMA_SOURCE_FILE ("expression.ggs", 183)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("expression.ggs", 185)) ;
      GALGAS_expression var_rightExpression_6552 ;
      nt_factor_ (var_rightExpression_6552, inCompiler) ;
      outArgument_outExpression = GALGAS_impliesExpression::class_func_new (outArgument_outExpression, var_rightExpression_6552  COMMA_SOURCE_FILE ("expression.ggs", 187)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i12_ (GALGAS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_varName_6844 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 194)) ;
  switch (select_kerbdd_5F_syntax_10 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_varInExpression::class_func_new (var_varName_6844  COMMA_SOURCE_FILE ("expression.ggs", 196)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 198)) ;
    GALGAS_luint var_varBit_6947 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression.ggs", 199)) ;
    outArgument_outExpression = GALGAS_varBitInExpression::class_func_new (var_varName_6844, var_varBit_6947  COMMA_SOURCE_FILE ("expression.ggs", 200)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i13_ (GALGAS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 207)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 209)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i13_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 207)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 209)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i13_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 207)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 209)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i14_ (GALGAS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression.ggs", 215)) ;
  GALGAS_expression var_expression_7428 ;
  nt_factor_ (var_expression_7428, inCompiler) ;
  outArgument_outExpression = GALGAS_complementExpression::class_func_new (var_expression_7428  COMMA_SOURCE_FILE ("expression.ggs", 217)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i14_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression.ggs", 215)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i14_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression.ggs", 215)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i15_ (GALGAS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_true COMMA_SOURCE_FILE ("expression.ggs", 223)) ;
  outArgument_outExpression = GALGAS_trueExpression::class_func_new (SOURCE_FILE ("expression.ggs", 224)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i15_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_true COMMA_SOURCE_FILE ("expression.ggs", 223)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i15_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_true COMMA_SOURCE_FILE ("expression.ggs", 223)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i16_ (GALGAS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_false COMMA_SOURCE_FILE ("expression.ggs", 230)) ;
  outArgument_outExpression = GALGAS_falseExpression::class_func_new (SOURCE_FILE ("expression.ggs", 231)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i16_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_false COMMA_SOURCE_FILE ("expression.ggs", 230)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i16_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_false COMMA_SOURCE_FILE ("expression.ggs", 230)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i17_ (GALGAS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_formulaName_8125 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 237)) ;
  GALGAS_formulaParameterListInExpression var_parameterList_8178 = GALGAS_formulaParameterListInExpression::class_func_emptyList (SOURCE_FILE ("expression.ggs", 238)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 239)) ;
  switch (select_kerbdd_5F_syntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_parameterName_8253 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 243)) ;
      GALGAS_lstringlist var_fieldNames_8291 = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("expression.ggs", 244)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_kerbdd_5F_syntax_13 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 247)) ;
          GALGAS_lstring var_fieldName_8371 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 248)) ;
          {
          var_fieldNames_8291.setter_append (var_fieldName_8371, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 249)) ;
          }
        }else{
          repeatFlag_1 = false ;
        }
      }
      {
      var_parameterList_8178.setter_append (var_parameterName_8253, var_fieldNames_8291, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 251)) ;
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
  outArgument_outExpression = GALGAS_formulaInExpression::class_func_new (var_formulaName_8125, var_parameterList_8178  COMMA_SOURCE_FILE ("expression.ggs", 257)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i18_ (GALGAS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("expression.ggs", 263)) ;
  GALGAS_domainFieldList var_domainFieldList_8819 ;
  nt_recordFields_ (var_domainFieldList_8819, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 265)) ;
  GALGAS_expression var_expression_8863 ;
  nt_expression_ (var_expression_8863, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 267)) ;
  outArgument_outExpression = GALGAS_existInExpression::class_func_new (var_domainFieldList_8819, var_expression_8863  COMMA_SOURCE_FILE ("expression.ggs", 268)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i18_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("expression.ggs", 263)) ;
  nt_recordFields_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 265)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 267)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i18_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("expression.ggs", 263)) ;
  nt_recordFields_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 265)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 267)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i19_ (GALGAS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("expression.ggs", 274)) ;
  GALGAS_domainFieldList var_domainFieldList_9170 ;
  nt_recordFields_ (var_domainFieldList_9170, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 276)) ;
  GALGAS_expression var_expression_9214 ;
  nt_expression_ (var_expression_9214, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 278)) ;
  outArgument_outExpression = GALGAS_forAllInExpression::class_func_new (var_domainFieldList_9170, var_expression_9214  COMMA_SOURCE_FILE ("expression.ggs", 279)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i19_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("expression.ggs", 274)) ;
  nt_recordFields_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 276)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 278)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i19_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("expression.ggs", 274)) ;
  nt_recordFields_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 276)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 278)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i20_ (GALGAS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression.ggs", 284)) ;
  GALGAS_lstring var_varName_9502 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 285)) ;
  GALGAS_lstringlist var_leftFieldNames_9530 = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("expression.ggs", 286)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_kerbdd_5F_syntax_14 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 289)) ;
      GALGAS_lstring var_fieldName_9598 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 290)) ;
      {
      var_leftFieldNames_9530.setter_append (var_fieldName_9598, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 291)) ;
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_comparison var_comparison_9673 ;
  switch (select_kerbdd_5F_syntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("expression.ggs", 295)) ;
    var_comparison_9673 = GALGAS_comparison::class_func_equal (SOURCE_FILE ("expression.ggs", 296)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("expression.ggs", 298)) ;
    var_comparison_9673 = GALGAS_comparison::class_func_notEqual (SOURCE_FILE ("expression.ggs", 299)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression.ggs", 301)) ;
    var_comparison_9673 = GALGAS_comparison::class_func_lowerOrEqual (SOURCE_FILE ("expression.ggs", 302)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("expression.ggs", 304)) ;
    var_comparison_9673 = GALGAS_comparison::class_func_lowerThan (SOURCE_FILE ("expression.ggs", 305)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression.ggs", 307)) ;
    var_comparison_9673 = GALGAS_comparison::class_func_greaterOrEqual (SOURCE_FILE ("expression.ggs", 308)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("expression.ggs", 310)) ;
    var_comparison_9673 = GALGAS_comparison::class_func_greaterThan (SOURCE_FILE ("expression.ggs", 311)) ;
  } break ;
  default:
    break ;
  }
  switch (select_kerbdd_5F_syntax_16 (inCompiler)) {
  case 1: {
    GALGAS_luint var_constant_9977 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression.ggs", 314)) ;
    outArgument_outExpression = GALGAS_comparisonWithConstantInExpression::class_func_new (var_varName_9502, var_leftFieldNames_9530, var_comparison_9673, var_constant_9977  COMMA_SOURCE_FILE ("expression.ggs", 315)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_rightVarName_10127 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 317)) ;
    GALGAS_lstringlist var_rightFieldNames_10162 = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("expression.ggs", 318)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_kerbdd_5F_syntax_17 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 321)) ;
        GALGAS_lstring var_fieldName_10239 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 322)) ;
        {
        var_rightFieldNames_10162.setter_append (var_fieldName_10239, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 323)) ;
        }
      }else{
        repeatFlag_1 = false ;
      }
    }
    outArgument_outExpression = GALGAS_variableComparisonInExpression::class_func_new (var_varName_9502, var_leftFieldNames_9530, var_comparison_9673, var_rightVarName_10127, var_rightFieldNames_10162  COMMA_SOURCE_FILE ("expression.ggs", 325)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression.ggs", 327)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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
  public: GALGAS_formulaList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_formulaList (const GALGAS_abstractFormula & in_mFormula
                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formulaList (const GALGAS_formulaList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_formulaList::cCollectionElement_formulaList (const GALGAS_abstractFormula & in_mFormula
                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormula) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_formulaList::cCollectionElement_formulaList (const GALGAS_formulaList_2D_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendString ("mFormula" ":") ;
  mObject.mProperty_mFormula.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_formulaList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formulaList * operand = (cCollectionElement_formulaList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formulaList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaList::GALGAS_formulaList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaList::GALGAS_formulaList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaList GALGAS_formulaList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_formulaList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaList GALGAS_formulaList::class_func_listWithValue (const GALGAS_abstractFormula & inOperand0
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_formulaList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_formulaList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_formulaList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                    const GALGAS_abstractFormula & in_mFormula
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_formulaList * p = nullptr ;
  macroMyNew (p, cCollectionElement_formulaList (in_mFormula COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaList::addAssign_operation (const GALGAS_abstractFormula & inOperand0
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

void GALGAS_formulaList::setter_append (const GALGAS_abstractFormula inOperand0,
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

void GALGAS_formulaList::setter_insertAtIndex (const GALGAS_abstractFormula inOperand0,
                                               const GALGAS_uint inInsertionIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_formulaList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaList::setter_removeAtIndex (GALGAS_abstractFormula & outOperand0,
                                               const GALGAS_uint inRemoveIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_formulaList * p = (cCollectionElement_formulaList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_formulaList) ;
        outOperand0 = p->mObject.mProperty_mFormula ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaList::setter_popFirst (GALGAS_abstractFormula & outOperand0,
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

void GALGAS_formulaList::setter_popLast (GALGAS_abstractFormula & outOperand0,
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

void GALGAS_formulaList::method_first (GALGAS_abstractFormula & outOperand0,
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

void GALGAS_formulaList::method_last (GALGAS_abstractFormula & outOperand0,
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

GALGAS_formulaList GALGAS_formulaList::add_operation (const GALGAS_formulaList & inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formulaList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaList GALGAS_formulaList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formulaList result = GALGAS_formulaList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaList GALGAS_formulaList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formulaList result = GALGAS_formulaList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaList GALGAS_formulaList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_formulaList result = GALGAS_formulaList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaList::plusAssign_operation (const GALGAS_formulaList inOperand,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaList::setter_setMFormulaAtIndex (GALGAS_abstractFormula inOperand,
                                                    GALGAS_uint inIndex,
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

GALGAS_abstractFormula GALGAS_formulaList::getter_mFormulaAtIndex (const GALGAS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaList * p = (cCollectionElement_formulaList *) attributes.ptr () ;
  GALGAS_abstractFormula result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formulaList) ;
    result = p->mObject.mProperty_mFormula ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_formulaList::cEnumerator_formulaList (const GALGAS_formulaList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaList_2D_element cEnumerator_formulaList::current (LOCATION_ARGS) const {
  const cCollectionElement_formulaList * p = (const cCollectionElement_formulaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formulaList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_abstractFormula cEnumerator_formulaList::current_mFormula (LOCATION_ARGS) const {
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

const C_galgas_type_descriptor * GALGAS_formulaList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formulaList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formulaList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaList GALGAS_formulaList::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formulaList result ;
  const GALGAS_formulaList * p = (const GALGAS_formulaList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_formulaList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ast::GALGAS_ast (void) :
mProperty_mDomainList (),
mProperty_mFormulaList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ast::~ GALGAS_ast (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ast::GALGAS_ast (const GALGAS_domainDeclarationList & inOperand0,
                        const GALGAS_formulaList & inOperand1) :
mProperty_mDomainList (inOperand0),
mProperty_mFormulaList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ast GALGAS_ast::class_func_new (Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_domainDeclarationList in_mDomainList = GALGAS_domainDeclarationList::class_func_emptyList (SOURCE_FILE ("grammar.ggs", 25)) ;
  const GALGAS_formulaList in_mFormulaList = GALGAS_formulaList::class_func_emptyList (SOURCE_FILE ("grammar.ggs", 26)) ;
  GALGAS_ast result ;
  if (in_mDomainList.isValid () && in_mFormulaList.isValid ()) {
    result = GALGAS_ast (in_mDomainList, in_mFormulaList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ast::objectCompare (const GALGAS_ast & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDomainList.objectCompare (inOperand.mProperty_mDomainList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormulaList.objectCompare (inOperand.mProperty_mFormulaList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_ast::isValid (void) const {
  return mProperty_mDomainList.isValid () && mProperty_mFormulaList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ast::drop (void) {
  mProperty_mDomainList.drop () ;
  mProperty_mFormulaList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ast::description (String & ioString,
                              const int32_t inIndentation) const {
  ioString.appendString ("<struct @ast:") ;
  if (! isValid ()) {
    ioString.appendString (" not built") ;
  }else{
    mProperty_mDomainList.description (ioString, inIndentation+1) ;
    ioString.appendString (", ") ;
    mProperty_mFormulaList.description (ioString, inIndentation+1) ;
  }
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ast generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ast ("ast",
                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ast::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ast ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ast::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ast (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ast GALGAS_ast::extractObject (const GALGAS_object & inObject,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GALGAS_ast result ;
  const GALGAS_ast * p = (const GALGAS_ast *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ast *> (p)) {
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
                                         const GALGAS_string constin_inSourceFilePath,
                                         const GALGAS_domainMap constin_inDomainMap,
                                         GALGAS_computedFormulaMap & io_ioComputedFormulaMap,
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

GALGAS_varList_2D_element::GALGAS_varList_2D_element (void) :
mProperty_mVarName (),
mProperty_mBitIndex (),
mProperty_mBitCount () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varList_2D_element::~ GALGAS_varList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varList_2D_element::GALGAS_varList_2D_element (const GALGAS_string & inOperand0,
                                                      const GALGAS_uint & inOperand1,
                                                      const GALGAS_uint & inOperand2) :
mProperty_mVarName (inOperand0),
mProperty_mBitIndex (inOperand1),
mProperty_mBitCount (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varList_2D_element GALGAS_varList_2D_element::class_func_new (const GALGAS_string & in_mVarName,
                                                                     const GALGAS_uint & in_mBitIndex,
                                                                     const GALGAS_uint & in_mBitCount,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_varList_2D_element result ;
  if (in_mVarName.isValid () && in_mBitIndex.isValid () && in_mBitCount.isValid ()) {
    result = GALGAS_varList_2D_element (in_mVarName, in_mBitIndex, in_mBitCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_varList_2D_element::objectCompare (const GALGAS_varList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mVarName.objectCompare (inOperand.mProperty_mVarName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitIndex.objectCompare (inOperand.mProperty_mBitIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitCount.objectCompare (inOperand.mProperty_mBitCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_varList_2D_element::isValid (void) const {
  return mProperty_mVarName.isValid () && mProperty_mBitIndex.isValid () && mProperty_mBitCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varList_2D_element::drop (void) {
  mProperty_mVarName.drop () ;
  mProperty_mBitIndex.drop () ;
  mProperty_mBitCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varList_2D_element::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendString ("<struct @varList-element:") ;
  if (! isValid ()) {
    ioString.appendString (" not built") ;
  }else{
    mProperty_mVarName.description (ioString, inIndentation+1) ;
    ioString.appendString (", ") ;
    mProperty_mBitIndex.description (ioString, inIndentation+1) ;
    ioString.appendString (", ") ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
  }
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @varList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varList_2D_element ("varList-element",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varList_2D_element GALGAS_varList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_varList_2D_element result ;
  const GALGAS_varList_2D_element * p = (const GALGAS_varList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_varList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaList_2D_element::GALGAS_formulaList_2D_element (void) :
mProperty_mFormula () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaList_2D_element::~ GALGAS_formulaList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaList_2D_element::GALGAS_formulaList_2D_element (const GALGAS_abstractFormula & inOperand0) :
mProperty_mFormula (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaList_2D_element GALGAS_formulaList_2D_element::class_func_new (const GALGAS_abstractFormula & in_mFormula,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formulaList_2D_element result ;
  if (in_mFormula.isValid ()) {
    result = GALGAS_formulaList_2D_element (in_mFormula) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_formulaList_2D_element::objectCompare (const GALGAS_formulaList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormula.objectCompare (inOperand.mProperty_mFormula) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_formulaList_2D_element::isValid (void) const {
  return mProperty_mFormula.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaList_2D_element::drop (void) {
  mProperty_mFormula.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaList_2D_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendString ("<struct @formulaList-element:") ;
  if (! isValid ()) {
    ioString.appendString (" not built") ;
  }else{
    mProperty_mFormula.description (ioString, inIndentation+1) ;
  }
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @formulaList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaList_2D_element ("formulaList-element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formulaList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formulaList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formulaList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaList_2D_element GALGAS_formulaList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_formulaList_2D_element result ;
  const GALGAS_formulaList_2D_element * p = (const GALGAS_formulaList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_formulaList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @assignmentFormula reference class
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

typeComparisonResult cPtr_assignmentFormula::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assignmentFormula * p = (const cPtr_assignmentFormula *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignmentFormula) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormulaName.objectCompare (p->mProperty_mFormulaName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFormulaArgumentList.objectCompare (p->mProperty_mFormulaArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_assignmentFormula::objectCompare (const GALGAS_assignmentFormula & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentFormula::GALGAS_assignmentFormula (void) :
GALGAS_abstractFormula () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentFormula::GALGAS_assignmentFormula (const cPtr_assignmentFormula * inSourcePtr) :
GALGAS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentFormula) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_assignmentFormula GALGAS_assignmentFormula::class_func_new (const GALGAS_lstring & inAttribute_mFormulaName,
                                                                   const GALGAS_domainFieldList & inAttribute_mFormulaArgumentList,
                                                                   const GALGAS_formulaKind & inAttribute_mKind,
                                                                   const GALGAS_expression & inAttribute_mExpression
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_assignmentFormula result ;
  if (inAttribute_mFormulaName.isValid () && inAttribute_mFormulaArgumentList.isValid () && inAttribute_mKind.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignmentFormula (inAttribute_mFormulaName, inAttribute_mFormulaArgumentList, inAttribute_mKind, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentFormula::setter_setMFormulaName (GALGAS_lstring inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    p->mProperty_mFormulaName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentFormula::setter_setMFormulaArgumentList (GALGAS_domainFieldList inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    p->mProperty_mFormulaArgumentList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentFormula::setter_setMKind (GALGAS_formulaKind inValue
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    p->mProperty_mKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_assignmentFormula::setter_setMExpression (GALGAS_expression inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    p->mProperty_mExpression = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_assignmentFormula::readProperty_mFormulaName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    return p->mProperty_mFormulaName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainFieldList GALGAS_assignmentFormula::readProperty_mFormulaArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_domainFieldList () ;
  }else{
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    return p->mProperty_mFormulaArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaKind GALGAS_assignmentFormula::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formulaKind () ;
  }else{
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_assignmentFormula::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assignmentFormula class
//--------------------------------------------------------------------------------------------------

cPtr_assignmentFormula::cPtr_assignmentFormula (const GALGAS_lstring & in_mFormulaName,
                                                const GALGAS_domainFieldList & in_mFormulaArgumentList,
                                                const GALGAS_formulaKind & in_mKind,
                                                const GALGAS_expression & in_mExpression
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (THERE),
mProperty_mFormulaName (in_mFormulaName),
mProperty_mFormulaArgumentList (in_mFormulaArgumentList),
mProperty_mKind (in_mKind),
mProperty_mExpression (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_assignmentFormula::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentFormula ;
}

void cPtr_assignmentFormula::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendString ("[@assignmentFormula:") ;
  mProperty_mFormulaName.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mFormulaArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignmentFormula::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assignmentFormula (mProperty_mFormulaName, mProperty_mFormulaArgumentList, mProperty_mKind, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @assignmentFormula generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentFormula ("assignmentFormula",
                                                                         & kTypeDescriptor_GALGAS_abstractFormula) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentFormula::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentFormula ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentFormula::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentFormula (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentFormula GALGAS_assignmentFormula::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_assignmentFormula result ;
  const GALGAS_assignmentFormula * p = (const GALGAS_assignmentFormula *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignmentFormula *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentFormula", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_assignmentFormula_2D_weak::objectCompare (const GALGAS_assignmentFormula_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentFormula_2D_weak::GALGAS_assignmentFormula_2D_weak (void) :
GALGAS_abstractFormula_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentFormula_2D_weak & GALGAS_assignmentFormula_2D_weak::operator = (const GALGAS_assignmentFormula & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentFormula_2D_weak::GALGAS_assignmentFormula_2D_weak (const GALGAS_assignmentFormula & inSource) :
GALGAS_abstractFormula_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentFormula_2D_weak GALGAS_assignmentFormula_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_assignmentFormula_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentFormula GALGAS_assignmentFormula_2D_weak::bang_assignmentFormula_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_assignmentFormula result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignmentFormula) ;
      result = GALGAS_assignmentFormula ((cPtr_assignmentFormula *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @assignmentFormula-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentFormula_2D_weak ("assignmentFormula-weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractFormula_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentFormula_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentFormula_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentFormula_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentFormula_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_assignmentFormula_2D_weak GALGAS_assignmentFormula_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_assignmentFormula_2D_weak result ;
  const GALGAS_assignmentFormula_2D_weak * p = (const GALGAS_assignmentFormula_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_assignmentFormula_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentFormula-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @setting_5F_andCacheMapSize reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_setting_5F_andCacheMapSize::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFormula::printNonNullClassInstanceProperties () ;
    mProperty_mSetting.printNonNullClassInstanceProperties ("mSetting") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_setting_5F_andCacheMapSize::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_setting_5F_andCacheMapSize * p = (const cPtr_setting_5F_andCacheMapSize *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_setting_5F_andCacheMapSize) ;
  if (kOperandEqual == result) {
    result = mProperty_mSetting.objectCompare (p->mProperty_mSetting) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_setting_5F_andCacheMapSize::objectCompare (const GALGAS_setting_5F_andCacheMapSize & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_andCacheMapSize::GALGAS_setting_5F_andCacheMapSize (void) :
GALGAS_abstractFormula () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_andCacheMapSize::GALGAS_setting_5F_andCacheMapSize (const cPtr_setting_5F_andCacheMapSize * inSourcePtr) :
GALGAS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_setting_5F_andCacheMapSize) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_andCacheMapSize GALGAS_setting_5F_andCacheMapSize::class_func_new (const GALGAS_luint & inAttribute_mSetting
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_setting_5F_andCacheMapSize result ;
  if (inAttribute_mSetting.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_setting_5F_andCacheMapSize (inAttribute_mSetting COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_setting_5F_andCacheMapSize::setter_setMSetting (GALGAS_luint inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_setting_5F_andCacheMapSize * p = (cPtr_setting_5F_andCacheMapSize *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setting_5F_andCacheMapSize) ;
    p->mProperty_mSetting = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_setting_5F_andCacheMapSize::readProperty_mSetting (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_setting_5F_andCacheMapSize * p = (cPtr_setting_5F_andCacheMapSize *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setting_5F_andCacheMapSize) ;
    return p->mProperty_mSetting ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @setting_andCacheMapSize class
//--------------------------------------------------------------------------------------------------

cPtr_setting_5F_andCacheMapSize::cPtr_setting_5F_andCacheMapSize (const GALGAS_luint & in_mSetting
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (THERE),
mProperty_mSetting (in_mSetting) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_setting_5F_andCacheMapSize::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize ;
}

void cPtr_setting_5F_andCacheMapSize::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendString ("[@setting_andCacheMapSize:") ;
  mProperty_mSetting.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_setting_5F_andCacheMapSize::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_setting_5F_andCacheMapSize (mProperty_mSetting COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @setting_andCacheMapSize generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize ("setting_andCacheMapSize",
                                                                                  & kTypeDescriptor_GALGAS_abstractFormula) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_setting_5F_andCacheMapSize::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_setting_5F_andCacheMapSize::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setting_5F_andCacheMapSize (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_andCacheMapSize GALGAS_setting_5F_andCacheMapSize::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_setting_5F_andCacheMapSize result ;
  const GALGAS_setting_5F_andCacheMapSize * p = (const GALGAS_setting_5F_andCacheMapSize *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_setting_5F_andCacheMapSize *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dumpFormula::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFormula::printNonNullClassInstanceProperties () ;
    mProperty_mFormulaName.printNonNullClassInstanceProperties ("mFormulaName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_dumpFormula::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dumpFormula * p = (const cPtr_dumpFormula *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dumpFormula) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormulaName.objectCompare (p->mProperty_mFormulaName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_dumpFormula::objectCompare (const GALGAS_dumpFormula & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dumpFormula::GALGAS_dumpFormula (void) :
GALGAS_abstractFormula () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_dumpFormula::GALGAS_dumpFormula (const cPtr_dumpFormula * inSourcePtr) :
GALGAS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dumpFormula) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_dumpFormula GALGAS_dumpFormula::class_func_new (const GALGAS_lstring & inAttribute_mFormulaName
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_dumpFormula result ;
  if (inAttribute_mFormulaName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dumpFormula (inAttribute_mFormulaName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_dumpFormula::setter_setMFormulaName (GALGAS_lstring inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_dumpFormula * p = (cPtr_dumpFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dumpFormula) ;
    p->mProperty_mFormulaName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_dumpFormula::readProperty_mFormulaName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_dumpFormula * p = (cPtr_dumpFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dumpFormula) ;
    return p->mProperty_mFormulaName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dumpFormula class
//--------------------------------------------------------------------------------------------------

cPtr_dumpFormula::cPtr_dumpFormula (const GALGAS_lstring & in_mFormulaName
                                    COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (THERE),
mProperty_mFormulaName (in_mFormulaName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dumpFormula::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dumpFormula ;
}

void cPtr_dumpFormula::description (String & ioString,
                                    const int32_t inIndentation) const {
  ioString.appendString ("[@dumpFormula:") ;
  mProperty_mFormulaName.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dumpFormula::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dumpFormula (mProperty_mFormulaName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @dumpFormula generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dumpFormula ("dumpFormula",
                                                                   & kTypeDescriptor_GALGAS_abstractFormula) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dumpFormula::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dumpFormula ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dumpFormula::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dumpFormula (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_dumpFormula GALGAS_dumpFormula::extractObject (const GALGAS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dumpFormula result ;
  const GALGAS_dumpFormula * p = (const GALGAS_dumpFormula *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_dumpFormula *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_graphvizFormula::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFormula::printNonNullClassInstanceProperties () ;
    mProperty_mFormulaName.printNonNullClassInstanceProperties ("mFormulaName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_graphvizFormula::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_graphvizFormula * p = (const cPtr_graphvizFormula *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_graphvizFormula) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormulaName.objectCompare (p->mProperty_mFormulaName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_graphvizFormula::objectCompare (const GALGAS_graphvizFormula & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphvizFormula::GALGAS_graphvizFormula (void) :
GALGAS_abstractFormula () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphvizFormula::GALGAS_graphvizFormula (const cPtr_graphvizFormula * inSourcePtr) :
GALGAS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_graphvizFormula) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_graphvizFormula GALGAS_graphvizFormula::class_func_new (const GALGAS_lstring & inAttribute_mFormulaName
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_graphvizFormula result ;
  if (inAttribute_mFormulaName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_graphvizFormula (inAttribute_mFormulaName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_graphvizFormula::setter_setMFormulaName (GALGAS_lstring inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_graphvizFormula * p = (cPtr_graphvizFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphvizFormula) ;
    p->mProperty_mFormulaName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_graphvizFormula::readProperty_mFormulaName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_graphvizFormula * p = (cPtr_graphvizFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphvizFormula) ;
    return p->mProperty_mFormulaName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @graphvizFormula class
//--------------------------------------------------------------------------------------------------

cPtr_graphvizFormula::cPtr_graphvizFormula (const GALGAS_lstring & in_mFormulaName
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (THERE),
mProperty_mFormulaName (in_mFormulaName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_graphvizFormula::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphvizFormula ;
}

void cPtr_graphvizFormula::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendString ("[@graphvizFormula:") ;
  mProperty_mFormulaName.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_graphvizFormula::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_graphvizFormula (mProperty_mFormulaName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @graphvizFormula generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphvizFormula ("graphvizFormula",
                                                                       & kTypeDescriptor_GALGAS_abstractFormula) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphvizFormula::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphvizFormula ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphvizFormula::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphvizFormula (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphvizFormula GALGAS_graphvizFormula::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_graphvizFormula result ;
  const GALGAS_graphvizFormula * p = (const GALGAS_graphvizFormula *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_graphvizFormula *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_varInExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_varInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varInExpression * p = (const cPtr_varInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_varInExpression::objectCompare (const GALGAS_varInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInExpression::GALGAS_varInExpression (void) :
GALGAS_expression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInExpression::GALGAS_varInExpression (const cPtr_varInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpression) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_varInExpression GALGAS_varInExpression::class_func_new (const GALGAS_lstring & inAttribute_mVarName
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_varInExpression result ;
  if (inAttribute_mVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varInExpression (inAttribute_mVarName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varInExpression::setter_setMVarName (GALGAS_lstring inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_varInExpression * p = (cPtr_varInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpression) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_varInExpression::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_varInExpression * p = (cPtr_varInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpression) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varInExpression class
//--------------------------------------------------------------------------------------------------

cPtr_varInExpression::cPtr_varInExpression (const GALGAS_lstring & in_mVarName
                                            COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mVarName (in_mVarName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpression ;
}

void cPtr_varInExpression::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendString ("[@varInExpression:") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varInExpression (mProperty_mVarName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @varInExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varInExpression ("varInExpression",
                                                                       & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varInExpression GALGAS_varInExpression::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_varInExpression result ;
  const GALGAS_varInExpression * p = (const GALGAS_varInExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_varInExpression *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_varBitInExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
    mProperty_mVarBit.printNonNullClassInstanceProperties ("mVarBit") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_varBitInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varBitInExpression * p = (const cPtr_varBitInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varBitInExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVarBit.objectCompare (p->mProperty_mVarBit) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_varBitInExpression::objectCompare (const GALGAS_varBitInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varBitInExpression::GALGAS_varBitInExpression (void) :
GALGAS_expression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varBitInExpression::GALGAS_varBitInExpression (const cPtr_varBitInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varBitInExpression) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_varBitInExpression GALGAS_varBitInExpression::class_func_new (const GALGAS_lstring & inAttribute_mVarName,
                                                                     const GALGAS_luint & inAttribute_mVarBit
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_varBitInExpression result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mVarBit.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varBitInExpression (inAttribute_mVarName, inAttribute_mVarBit COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varBitInExpression::setter_setMVarName (GALGAS_lstring inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_varBitInExpression * p = (cPtr_varBitInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varBitInExpression) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varBitInExpression::setter_setMVarBit (GALGAS_luint inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_varBitInExpression * p = (cPtr_varBitInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varBitInExpression) ;
    p->mProperty_mVarBit = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_varBitInExpression::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_varBitInExpression * p = (cPtr_varBitInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varBitInExpression) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_varBitInExpression::readProperty_mVarBit (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_varBitInExpression * p = (cPtr_varBitInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varBitInExpression) ;
    return p->mProperty_mVarBit ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varBitInExpression class
//--------------------------------------------------------------------------------------------------

cPtr_varBitInExpression::cPtr_varBitInExpression (const GALGAS_lstring & in_mVarName,
                                                  const GALGAS_luint & in_mVarBit
                                                  COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mVarName (in_mVarName),
mProperty_mVarBit (in_mVarBit) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varBitInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varBitInExpression ;
}

void cPtr_varBitInExpression::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendString ("[@varBitInExpression:") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mVarBit.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varBitInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varBitInExpression (mProperty_mVarName, mProperty_mVarBit COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @varBitInExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varBitInExpression ("varBitInExpression",
                                                                          & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varBitInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varBitInExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varBitInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varBitInExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varBitInExpression GALGAS_varBitInExpression::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_varBitInExpression result ;
  const GALGAS_varBitInExpression * p = (const GALGAS_varBitInExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_varBitInExpression *> (p)) {
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_formulaInExpression::printNonNullClassInstanceProperties (void) const {
    cPtr_expression::printNonNullClassInstanceProperties () ;
    mProperty_mFormulaName.printNonNullClassInstanceProperties ("mFormulaName") ;
    mProperty_mParameterList.printNonNullClassInstanceProperties ("mParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_formulaInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_formulaInExpression * p = (const cPtr_formulaInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_formulaInExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormulaName.objectCompare (p->mProperty_mFormulaName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mParameterList.objectCompare (p->mProperty_mParameterList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_formulaInExpression::objectCompare (const GALGAS_formulaInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaInExpression::GALGAS_formulaInExpression (void) :
GALGAS_expression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaInExpression::GALGAS_formulaInExpression (const cPtr_formulaInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_formulaInExpression) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_formulaInExpression GALGAS_formulaInExpression::class_func_new (const GALGAS_lstring & inAttribute_mFormulaName,
                                                                       const GALGAS_formulaParameterListInExpression & inAttribute_mParameterList
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_formulaInExpression result ;
  if (inAttribute_mFormulaName.isValid () && inAttribute_mParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_formulaInExpression (inAttribute_mFormulaName, inAttribute_mParameterList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaInExpression::setter_setMFormulaName (GALGAS_lstring inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_formulaInExpression * p = (cPtr_formulaInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_formulaInExpression) ;
    p->mProperty_mFormulaName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaInExpression::setter_setMParameterList (GALGAS_formulaParameterListInExpression inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_formulaInExpression * p = (cPtr_formulaInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_formulaInExpression) ;
    p->mProperty_mParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formulaInExpression::readProperty_mFormulaName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_formulaInExpression * p = (cPtr_formulaInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_formulaInExpression) ;
    return p->mProperty_mFormulaName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression GALGAS_formulaInExpression::readProperty_mParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_formulaParameterListInExpression () ;
  }else{
    cPtr_formulaInExpression * p = (cPtr_formulaInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_formulaInExpression) ;
    return p->mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @formulaInExpression class
//--------------------------------------------------------------------------------------------------

cPtr_formulaInExpression::cPtr_formulaInExpression (const GALGAS_lstring & in_mFormulaName,
                                                    const GALGAS_formulaParameterListInExpression & in_mParameterList
                                                    COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mFormulaName (in_mFormulaName),
mProperty_mParameterList (in_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_formulaInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaInExpression ;
}

void cPtr_formulaInExpression::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendString ("[@formulaInExpression:") ;
  mProperty_mFormulaName.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_formulaInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_formulaInExpression (mProperty_mFormulaName, mProperty_mParameterList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @formulaInExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaInExpression ("formulaInExpression",
                                                                           & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formulaInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaInExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formulaInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formulaInExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaInExpression GALGAS_formulaInExpression::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formulaInExpression result ;
  const GALGAS_formulaInExpression * p = (const GALGAS_formulaInExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_formulaInExpression *> (p)) {
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

typeComparisonResult cPtr_comparisonWithConstantInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_comparisonWithConstantInExpression * p = (const cPtr_comparisonWithConstantInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFieldNames.objectCompare (p->mProperty_mFieldNames) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mComparison.objectCompare (p->mProperty_mComparison) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstant.objectCompare (p->mProperty_mConstant) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_comparisonWithConstantInExpression::objectCompare (const GALGAS_comparisonWithConstantInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonWithConstantInExpression::GALGAS_comparisonWithConstantInExpression (void) :
GALGAS_expression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonWithConstantInExpression::GALGAS_comparisonWithConstantInExpression (const cPtr_comparisonWithConstantInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonWithConstantInExpression) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_comparisonWithConstantInExpression GALGAS_comparisonWithConstantInExpression::class_func_new (const GALGAS_lstring & inAttribute_mVarName,
                                                                                                     const GALGAS_lstringlist & inAttribute_mFieldNames,
                                                                                                     const GALGAS_comparison & inAttribute_mComparison,
                                                                                                     const GALGAS_luint & inAttribute_mConstant
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_comparisonWithConstantInExpression result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mFieldNames.isValid () && inAttribute_mComparison.isValid () && inAttribute_mConstant.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_comparisonWithConstantInExpression (inAttribute_mVarName, inAttribute_mFieldNames, inAttribute_mComparison, inAttribute_mConstant COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_comparisonWithConstantInExpression::setter_setMVarName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    p->mProperty_mVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_comparisonWithConstantInExpression::setter_setMFieldNames (GALGAS_lstringlist inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    p->mProperty_mFieldNames = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_comparisonWithConstantInExpression::setter_setMComparison (GALGAS_comparison inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    p->mProperty_mComparison = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_comparisonWithConstantInExpression::setter_setMConstant (GALGAS_luint inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    p->mProperty_mConstant = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_comparisonWithConstantInExpression::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_comparisonWithConstantInExpression::readProperty_mFieldNames (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    return p->mProperty_mFieldNames ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparisonWithConstantInExpression::readProperty_mComparison (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_comparison () ;
  }else{
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    return p->mProperty_mComparison ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_comparisonWithConstantInExpression::readProperty_mConstant (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    return p->mProperty_mConstant ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @comparisonWithConstantInExpression class
//--------------------------------------------------------------------------------------------------

cPtr_comparisonWithConstantInExpression::cPtr_comparisonWithConstantInExpression (const GALGAS_lstring & in_mVarName,
                                                                                  const GALGAS_lstringlist & in_mFieldNames,
                                                                                  const GALGAS_comparison & in_mComparison,
                                                                                  const GALGAS_luint & in_mConstant
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mVarName (in_mVarName),
mProperty_mFieldNames (in_mFieldNames),
mProperty_mComparison (in_mComparison),
mProperty_mConstant (in_mConstant) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_comparisonWithConstantInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonWithConstantInExpression ;
}

void cPtr_comparisonWithConstantInExpression::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendString ("[@comparisonWithConstantInExpression:") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mFieldNames.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mComparison.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mConstant.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_comparisonWithConstantInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_comparisonWithConstantInExpression (mProperty_mVarName, mProperty_mFieldNames, mProperty_mComparison, mProperty_mConstant COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @comparisonWithConstantInExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_comparisonWithConstantInExpression ("comparisonWithConstantInExpression",
                                                                                          & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonWithConstantInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonWithConstantInExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonWithConstantInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonWithConstantInExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparisonWithConstantInExpression GALGAS_comparisonWithConstantInExpression::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_comparisonWithConstantInExpression result ;
  const GALGAS_comparisonWithConstantInExpression * p = (const GALGAS_comparisonWithConstantInExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_comparisonWithConstantInExpression *> (p)) {
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

typeComparisonResult cPtr_variableComparisonInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_variableComparisonInExpression * p = (const cPtr_variableComparisonInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftVarName.objectCompare (p->mProperty_mLeftVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftFieldNames.objectCompare (p->mProperty_mLeftFieldNames) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mComparison.objectCompare (p->mProperty_mComparison) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightVarName.objectCompare (p->mProperty_mRightVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightFieldNames.objectCompare (p->mProperty_mRightFieldNames) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_variableComparisonInExpression::objectCompare (const GALGAS_variableComparisonInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_variableComparisonInExpression::GALGAS_variableComparisonInExpression (void) :
GALGAS_expression () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_variableComparisonInExpression::GALGAS_variableComparisonInExpression (const cPtr_variableComparisonInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_variableComparisonInExpression) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_variableComparisonInExpression GALGAS_variableComparisonInExpression::class_func_new (const GALGAS_lstring & inAttribute_mLeftVarName,
                                                                                             const GALGAS_lstringlist & inAttribute_mLeftFieldNames,
                                                                                             const GALGAS_comparison & inAttribute_mComparison,
                                                                                             const GALGAS_lstring & inAttribute_mRightVarName,
                                                                                             const GALGAS_lstringlist & inAttribute_mRightFieldNames
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_variableComparisonInExpression result ;
  if (inAttribute_mLeftVarName.isValid () && inAttribute_mLeftFieldNames.isValid () && inAttribute_mComparison.isValid () && inAttribute_mRightVarName.isValid () && inAttribute_mRightFieldNames.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_variableComparisonInExpression (inAttribute_mLeftVarName, inAttribute_mLeftFieldNames, inAttribute_mComparison, inAttribute_mRightVarName, inAttribute_mRightFieldNames COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_variableComparisonInExpression::setter_setMLeftVarName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    p->mProperty_mLeftVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_variableComparisonInExpression::setter_setMLeftFieldNames (GALGAS_lstringlist inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    p->mProperty_mLeftFieldNames = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_variableComparisonInExpression::setter_setMComparison (GALGAS_comparison inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    p->mProperty_mComparison = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_variableComparisonInExpression::setter_setMRightVarName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    p->mProperty_mRightVarName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_variableComparisonInExpression::setter_setMRightFieldNames (GALGAS_lstringlist inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    p->mProperty_mRightFieldNames = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_variableComparisonInExpression::readProperty_mLeftVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    return p->mProperty_mLeftVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_variableComparisonInExpression::readProperty_mLeftFieldNames (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    return p->mProperty_mLeftFieldNames ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_variableComparisonInExpression::readProperty_mComparison (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_comparison () ;
  }else{
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    return p->mProperty_mComparison ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_variableComparisonInExpression::readProperty_mRightVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    return p->mProperty_mRightVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_variableComparisonInExpression::readProperty_mRightFieldNames (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    return p->mProperty_mRightFieldNames ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @variableComparisonInExpression class
//--------------------------------------------------------------------------------------------------

cPtr_variableComparisonInExpression::cPtr_variableComparisonInExpression (const GALGAS_lstring & in_mLeftVarName,
                                                                          const GALGAS_lstringlist & in_mLeftFieldNames,
                                                                          const GALGAS_comparison & in_mComparison,
                                                                          const GALGAS_lstring & in_mRightVarName,
                                                                          const GALGAS_lstringlist & in_mRightFieldNames
                                                                          COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mLeftVarName (in_mLeftVarName),
mProperty_mLeftFieldNames (in_mLeftFieldNames),
mProperty_mComparison (in_mComparison),
mProperty_mRightVarName (in_mRightVarName),
mProperty_mRightFieldNames (in_mRightFieldNames) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_variableComparisonInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableComparisonInExpression ;
}

void cPtr_variableComparisonInExpression::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendString ("[@variableComparisonInExpression:") ;
  mProperty_mLeftVarName.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mLeftFieldNames.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mComparison.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mRightVarName.description (ioString, inIndentation+1) ;
  ioString.appendString (", ") ;
  mProperty_mRightFieldNames.description (ioString, inIndentation+1) ;
  ioString.appendString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_variableComparisonInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_variableComparisonInExpression (mProperty_mLeftVarName, mProperty_mLeftFieldNames, mProperty_mComparison, mProperty_mRightVarName, mProperty_mRightFieldNames COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @variableComparisonInExpression generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_variableComparisonInExpression ("variableComparisonInExpression",
                                                                                      & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_variableComparisonInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableComparisonInExpression ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_variableComparisonInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_variableComparisonInExpression (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_variableComparisonInExpression GALGAS_variableComparisonInExpression::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_variableComparisonInExpression result ;
  const GALGAS_variableComparisonInExpression * p = (const GALGAS_variableComparisonInExpression *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_variableComparisonInExpression *> (p)) {
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
, BOTTOM_UP_END ()
// State S1 (index = 15)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (10)
, BOTTOM_UP_END ()
// State S2 (index = 18)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (11)
, BOTTOM_UP_END ()
// State S3 (index = 21)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (12)
, BOTTOM_UP_END ()
// State S4 (index = 24)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (13)
, BOTTOM_UP_END ()
// State S5 (index = 27)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (14)
, BOTTOM_UP_END ()
// State S6 (index = 30)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (15)
, BOTTOM_UP_END ()
// State S7 (index = 33)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_ACCEPT ()
, BOTTOM_UP_END ()
// State S8 (index = 36)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_SHIFT (1)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (2)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_SHIFT (3)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_SHIFT (4)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_SHIFT (5)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_SHIFT (6)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (21)
, BOTTOM_UP_END ()
// State S9 (index = 51)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (0)
, BOTTOM_UP_END ()
// State S10 (index = 54)
, Lexique_kerbdd_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (17)
, BOTTOM_UP_END ()
// State S11 (index = 57)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (18)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (31)
, BOTTOM_UP_END ()
// State S12 (index = 62)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (21)
, BOTTOM_UP_END ()
// State S13 (index = 65)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END ()
// State S14 (index = 68)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (23)
, BOTTOM_UP_END ()
// State S15 (index = 71)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (24)
, BOTTOM_UP_END ()
// State S16 (index = 74)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (22)
, BOTTOM_UP_END ()
// State S17 (index = 77)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (25)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (26)
, Lexique_kerbdd_5F_lexique::kToken_bool, BOTTOM_UP_SHIFT (27)
, BOTTOM_UP_END ()
// State S18 (index = 84)
, Lexique_kerbdd_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (31)
, BOTTOM_UP_END ()
// State S19 (index = 87)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (32)
, BOTTOM_UP_END ()
// State S20 (index = 90)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (32)
, BOTTOM_UP_END ()
// State S21 (index = 93)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_REDUCE (5)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (5)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_REDUCE (5)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_REDUCE (5)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_REDUCE (5)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (5)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (5)
, BOTTOM_UP_END ()
// State S22 (index = 108)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_REDUCE (6)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (6)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_REDUCE (6)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_REDUCE (6)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_REDUCE (6)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (6)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (6)
, BOTTOM_UP_END ()
// State S23 (index = 123)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_REDUCE (7)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (7)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_REDUCE (7)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_REDUCE (7)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_REDUCE (7)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (7)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (7)
, BOTTOM_UP_END ()
// State S24 (index = 138)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_REDUCE (8)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (8)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_REDUCE (8)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_REDUCE (8)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_REDUCE (8)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (8)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (8)
, BOTTOM_UP_END ()
// State S25 (index = 153)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (27)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (27)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (27)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (27)
, BOTTOM_UP_END ()
// State S26 (index = 162)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (18)
, BOTTOM_UP_END ()
// State S27 (index = 165)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (29)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (29)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (29)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (29)
, Lexique_kerbdd_5F_lexique::kToken__5B_, BOTTOM_UP_SHIFT (34)
, BOTTOM_UP_END ()
// State S28 (index = 176)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (23)
, BOTTOM_UP_END ()
// State S29 (index = 179)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (36)
, BOTTOM_UP_END ()
// State S30 (index = 182)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (3)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (3)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (3)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (3)
, BOTTOM_UP_END ()
// State S31 (index = 191)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (25)
, Lexique_kerbdd_5F_lexique::kToken_bool, BOTTOM_UP_SHIFT (27)
, BOTTOM_UP_END ()
// State S32 (index = 196)
, Lexique_kerbdd_5F_lexique::kToken__3A__3D_, BOTTOM_UP_SHIFT (38)
, Lexique_kerbdd_5F_lexique::kToken__2B__3D_, BOTTOM_UP_SHIFT (39)
, Lexique_kerbdd_5F_lexique::kToken__2D__3D_, BOTTOM_UP_SHIFT (40)
, BOTTOM_UP_END ()
// State S33 (index = 203)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (42)
, BOTTOM_UP_END ()
// State S34 (index = 206)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (43)
, BOTTOM_UP_END ()
// State S35 (index = 209)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (28)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (28)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (28)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (28)
, BOTTOM_UP_END ()
// State S36 (index = 218)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_REDUCE (1)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (1)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_REDUCE (1)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_REDUCE (1)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_REDUCE (1)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (1)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (1)
, BOTTOM_UP_END ()
// State S37 (index = 233)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (25)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (25)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (44)
, BOTTOM_UP_END ()
// State S38 (index = 240)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (33)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (33)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_REDUCE (33)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_REDUCE (33)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_REDUCE (33)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_REDUCE (33)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_REDUCE (33)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (33)
, BOTTOM_UP_END ()
// State S39 (index = 257)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (34)
, BOTTOM_UP_END ()
// State S40 (index = 274)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (35)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (35)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_REDUCE (35)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_REDUCE (35)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_REDUCE (35)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_REDUCE (35)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_REDUCE (35)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (35)
, BOTTOM_UP_END ()
// State S41 (index = 291)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END ()
// State S42 (index = 308)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (24)
, BOTTOM_UP_END ()
// State S43 (index = 311)
, Lexique_kerbdd_5F_lexique::kToken__5D_, BOTTOM_UP_SHIFT (58)
, BOTTOM_UP_END ()
// State S44 (index = 314)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (59)
, BOTTOM_UP_END ()
// State S45 (index = 317)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (2)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (2)
, BOTTOM_UP_END ()
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
, BOTTOM_UP_END ()
// State S47 (index = 343)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END ()
// State S48 (index = 360)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END ()
// State S49 (index = 377)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (15)
, BOTTOM_UP_END ()
// State S50 (index = 394)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (16)
, BOTTOM_UP_END ()
// State S51 (index = 411)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (18)
, BOTTOM_UP_END ()
// State S52 (index = 414)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (18)
, BOTTOM_UP_END ()
// State S53 (index = 417)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (67)
, BOTTOM_UP_END ()
// State S54 (index = 420)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (68)
, BOTTOM_UP_END ()
// State S55 (index = 423)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (36)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (36)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_SHIFT (69)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_SHIFT (70)
, BOTTOM_UP_END ()
// State S56 (index = 432)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_SHIFT (72)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END ()
// State S57 (index = 445)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_SHIFT (75)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_SHIFT (76)
, BOTTOM_UP_END ()
// State S58 (index = 462)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (30)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (30)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (30)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (30)
, BOTTOM_UP_END ()
// State S59 (index = 471)
, Lexique_kerbdd_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (78)
, BOTTOM_UP_END ()
// State S60 (index = 474)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (79)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (47)
, BOTTOM_UP_END ()
// State S61 (index = 479)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END ()
// State S62 (index = 482)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (12)
, BOTTOM_UP_END ()
// State S63 (index = 499)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (82)
, BOTTOM_UP_END ()
// State S64 (index = 502)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (14)
, BOTTOM_UP_END ()
// State S65 (index = 519)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (83)
, BOTTOM_UP_END ()
// State S66 (index = 522)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (84)
, BOTTOM_UP_END ()
// State S67 (index = 525)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (85)
, Lexique_kerbdd_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_kerbdd_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (53)
, Lexique_kerbdd_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_kerbdd_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (53)
, BOTTOM_UP_END ()
// State S68 (index = 540)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_REDUCE (4)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (4)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_REDUCE (4)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_REDUCE (4)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_REDUCE (4)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (4)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (4)
, BOTTOM_UP_END ()
// State S69 (index = 555)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END ()
// State S70 (index = 572)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END ()
// State S71 (index = 589)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (9)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (9)
, BOTTOM_UP_END ()
// State S72 (index = 594)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END ()
// State S73 (index = 611)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END ()
// State S74 (index = 628)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (10)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (10)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (10)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (10)
, BOTTOM_UP_END ()
// State S75 (index = 637)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END ()
// State S76 (index = 654)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END ()
// State S77 (index = 671)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (11)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (11)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (11)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (11)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (11)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (11)
, BOTTOM_UP_END ()
// State S78 (index = 684)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (25)
, Lexique_kerbdd_5F_lexique::kToken_bool, BOTTOM_UP_SHIFT (27)
, BOTTOM_UP_END ()
// State S79 (index = 689)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (51)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (51)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (94)
, BOTTOM_UP_END ()
// State S80 (index = 696)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (96)
, BOTTOM_UP_END ()
// State S81 (index = 699)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (46)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (46)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (46)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (46)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (46)
, BOTTOM_UP_END ()
// State S82 (index = 716)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (13)
, BOTTOM_UP_END ()
// State S83 (index = 733)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END ()
// State S84 (index = 750)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (51)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (52)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (53)
, BOTTOM_UP_END ()
// State S85 (index = 767)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (99)
, BOTTOM_UP_END ()
// State S86 (index = 770)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_SHIFT (100)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_SHIFT (101)
, Lexique_kerbdd_5F_lexique::kToken__3C__3D_, BOTTOM_UP_SHIFT (102)
, Lexique_kerbdd_5F_lexique::kToken__3C_, BOTTOM_UP_SHIFT (103)
, Lexique_kerbdd_5F_lexique::kToken__3E__3D_, BOTTOM_UP_SHIFT (104)
, Lexique_kerbdd_5F_lexique::kToken__3E_, BOTTOM_UP_SHIFT (105)
, BOTTOM_UP_END ()
// State S87 (index = 783)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (37)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (37)
, BOTTOM_UP_END ()
// State S88 (index = 788)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (38)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (38)
, BOTTOM_UP_END ()
// State S89 (index = 793)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_SHIFT (72)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END ()
// State S90 (index = 806)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (39)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_SHIFT (72)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_SHIFT (73)
, BOTTOM_UP_END ()
// State S91 (index = 819)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_SHIFT (75)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_SHIFT (76)
, BOTTOM_UP_END ()
// State S92 (index = 836)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (42)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_SHIFT (75)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_SHIFT (76)
, BOTTOM_UP_END ()
// State S93 (index = 853)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (25)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (25)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (44)
, BOTTOM_UP_END ()
// State S94 (index = 860)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (112)
, BOTTOM_UP_END ()
// State S95 (index = 863)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (49)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (113)
, BOTTOM_UP_END ()
// State S96 (index = 868)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (17)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (17)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (17)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (17)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (17)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (17)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (17)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (17)
, BOTTOM_UP_END ()
// State S97 (index = 885)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (115)
, BOTTOM_UP_END ()
// State S98 (index = 888)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (116)
, BOTTOM_UP_END ()
// State S99 (index = 891)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (85)
, Lexique_kerbdd_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_kerbdd_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (53)
, Lexique_kerbdd_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_kerbdd_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (53)
, BOTTOM_UP_END ()
// State S100 (index = 906)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (55)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (55)
, BOTTOM_UP_END ()
// State S101 (index = 911)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (56)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (56)
, BOTTOM_UP_END ()
// State S102 (index = 916)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (57)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (57)
, BOTTOM_UP_END ()
// State S103 (index = 921)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (58)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (58)
, BOTTOM_UP_END ()
// State S104 (index = 926)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (59)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (59)
, BOTTOM_UP_END ()
// State S105 (index = 931)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (60)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (60)
, BOTTOM_UP_END ()
// State S106 (index = 936)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (118)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (119)
, BOTTOM_UP_END ()
// State S107 (index = 941)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (40)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (40)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (40)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (40)
, BOTTOM_UP_END ()
// State S108 (index = 950)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (41)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (41)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (41)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (41)
, BOTTOM_UP_END ()
// State S109 (index = 959)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (43)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (43)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (43)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (43)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (43)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (43)
, BOTTOM_UP_END ()
// State S110 (index = 972)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (44)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (44)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (44)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (44)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (44)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (44)
, BOTTOM_UP_END ()
// State S111 (index = 985)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (26)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (26)
, BOTTOM_UP_END ()
// State S112 (index = 990)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (51)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (51)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (94)
, BOTTOM_UP_END ()
// State S113 (index = 997)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (122)
, BOTTOM_UP_END ()
// State S114 (index = 1000)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (48)
, BOTTOM_UP_END ()
// State S115 (index = 1003)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (18)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (18)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (18)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (18)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (18)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (18)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (18)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (18)
, BOTTOM_UP_END ()
// State S116 (index = 1020)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (19)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (19)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (19)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (19)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (19)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (19)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (19)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (19)
, BOTTOM_UP_END ()
// State S117 (index = 1037)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (54)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (54)
, Lexique_kerbdd_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (54)
, Lexique_kerbdd_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (54)
, Lexique_kerbdd_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (54)
, Lexique_kerbdd_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (54)
, BOTTOM_UP_END ()
// State S118 (index = 1050)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (123)
, Lexique_kerbdd_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (63)
, BOTTOM_UP_END ()
// State S119 (index = 1055)
, Lexique_kerbdd_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (61)
, BOTTOM_UP_END ()
// State S120 (index = 1058)
, Lexique_kerbdd_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (125)
, BOTTOM_UP_END ()
// State S121 (index = 1061)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (52)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (52)
, BOTTOM_UP_END ()
// State S122 (index = 1066)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (51)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (51)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (94)
, BOTTOM_UP_END ()
// State S123 (index = 1073)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (127)
, BOTTOM_UP_END ()
// State S124 (index = 1076)
, Lexique_kerbdd_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (62)
, BOTTOM_UP_END ()
// State S125 (index = 1079)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (20)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (20)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (20)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (20)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (20)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (20)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (20)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (20)
, BOTTOM_UP_END ()
// State S126 (index = 1096)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (49)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (113)
, BOTTOM_UP_END ()
// State S127 (index = 1101)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (123)
, Lexique_kerbdd_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (63)
, BOTTOM_UP_END ()
// State S128 (index = 1106)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (50)
, BOTTOM_UP_END ()
// State S129 (index = 1109)
, Lexique_kerbdd_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (64)
, BOTTOM_UP_END ()} ;

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

void cGrammar_kerbdd_5F_grammar::nt_start_5F_symbol_ (GALGAS_ast &  parameter_1,
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
                                GALGAS_lstring inFilePath,
                                GALGAS_ast &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.readProperty_string () ;
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
        const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.appendString ("the '") ;
      message.appendString (filePath) ;
      message.appendString ("' file does not exist") ;
      const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void cGrammar_kerbdd_5F_grammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_ast &  parameter_1
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

void cGrammar_kerbdd_5F_grammar::nt_topLevelDeClaration_ (GALGAS_ast &  parameter_1,
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

void cGrammar_kerbdd_5F_grammar::nt_recordFields_ (GALGAS_domainFieldList &  parameter_1,
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

void cGrammar_kerbdd_5F_grammar::nt_type_ (GALGAS_bddType &  parameter_1,
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

void cGrammar_kerbdd_5F_grammar::nt_expression_ (GALGAS_expression &  parameter_1,
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

void cGrammar_kerbdd_5F_grammar::nt_comparison_ (GALGAS_expression &  parameter_1,
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

void cGrammar_kerbdd_5F_grammar::nt_term_ (GALGAS_expression &  parameter_1,
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

void cGrammar_kerbdd_5F_grammar::nt_factor_ (GALGAS_expression &  parameter_1,
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

GALGAS__32_lstringlist_2D_element::GALGAS__32_lstringlist_2D_element (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element::~ GALGAS__32_lstringlist_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element::GALGAS__32_lstringlist_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_lstring & inOperand1) :
mProperty_mValue_30_ (inOperand0),
mProperty_mValue_31_ (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element GALGAS__32_lstringlist_2D_element::class_func_new (const GALGAS_lstring & in_mValue0,
                                                                                     const GALGAS_lstring & in_mValue1,
                                                                                     Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS__32_lstringlist_2D_element result ;
  if (in_mValue0.isValid () && in_mValue1.isValid ()) {
    result = GALGAS__32_lstringlist_2D_element (in_mValue0, in_mValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS__32_lstringlist_2D_element::objectCompare (const GALGAS__32_lstringlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mValue_30_.objectCompare (inOperand.mProperty_mValue_30_) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValue_31_.objectCompare (inOperand.mProperty_mValue_31_) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS__32_lstringlist_2D_element::isValid (void) const {
  return mProperty_mValue_30_.isValid () && mProperty_mValue_31_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist_2D_element::drop (void) {
  mProperty_mValue_30_.drop () ;
  mProperty_mValue_31_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist_2D_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendString ("<struct @2lstringlist-element:") ;
  if (! isValid ()) {
    ioString.appendString (" not built") ;
  }else{
    mProperty_mValue_30_.description (ioString, inIndentation+1) ;
    ioString.appendString (", ") ;
    mProperty_mValue_31_.description (ioString, inIndentation+1) ;
  }
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @2lstringlist-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS__32_lstringlist_2D_element ("2lstringlist-element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS__32_lstringlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS__32_lstringlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS__32_lstringlist_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element GALGAS__32_lstringlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS__32_lstringlist_2D_element result ;
  const GALGAS__32_lstringlist_2D_element * p = (const GALGAS__32_lstringlist_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS__32_lstringlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainFieldList_2D_element::GALGAS_domainFieldList_2D_element (void) :
mProperty_mVarName (),
mProperty_mType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainFieldList_2D_element::~ GALGAS_domainFieldList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainFieldList_2D_element::GALGAS_domainFieldList_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_bddType & inOperand1) :
mProperty_mVarName (inOperand0),
mProperty_mType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainFieldList_2D_element GALGAS_domainFieldList_2D_element::class_func_new (const GALGAS_lstring & in_mVarName,
                                                                                     const GALGAS_bddType & in_mType,
                                                                                     Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_domainFieldList_2D_element result ;
  if (in_mVarName.isValid () && in_mType.isValid ()) {
    result = GALGAS_domainFieldList_2D_element (in_mVarName, in_mType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_domainFieldList_2D_element::objectCompare (const GALGAS_domainFieldList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mVarName.objectCompare (inOperand.mProperty_mVarName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_domainFieldList_2D_element::isValid (void) const {
  return mProperty_mVarName.isValid () && mProperty_mType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainFieldList_2D_element::drop (void) {
  mProperty_mVarName.drop () ;
  mProperty_mType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainFieldList_2D_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendString ("<struct @domainFieldList-element:") ;
  if (! isValid ()) {
    ioString.appendString (" not built") ;
  }else{
    mProperty_mVarName.description (ioString, inIndentation+1) ;
    ioString.appendString (", ") ;
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @domainFieldList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainFieldList_2D_element ("domainFieldList-element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_domainFieldList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainFieldList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_domainFieldList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainFieldList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainFieldList_2D_element GALGAS_domainFieldList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_domainFieldList_2D_element result ;
  const GALGAS_domainFieldList_2D_element * p = (const GALGAS_domainFieldList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_domainFieldList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainFieldList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList_2D_element::GALGAS_domainDeclarationList_2D_element (void) :
mProperty_mDomainName (),
mProperty_mType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList_2D_element::~ GALGAS_domainDeclarationList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList_2D_element::GALGAS_domainDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_domainDeclarationType & inOperand1) :
mProperty_mDomainName (inOperand0),
mProperty_mType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList_2D_element GALGAS_domainDeclarationList_2D_element::class_func_new (const GALGAS_lstring & in_mDomainName,
                                                                                                 const GALGAS_domainDeclarationType & in_mType,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_domainDeclarationList_2D_element result ;
  if (in_mDomainName.isValid () && in_mType.isValid ()) {
    result = GALGAS_domainDeclarationList_2D_element (in_mDomainName, in_mType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_domainDeclarationList_2D_element::objectCompare (const GALGAS_domainDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDomainName.objectCompare (inOperand.mProperty_mDomainName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_domainDeclarationList_2D_element::isValid (void) const {
  return mProperty_mDomainName.isValid () && mProperty_mType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationList_2D_element::drop (void) {
  mProperty_mDomainName.drop () ;
  mProperty_mType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationList_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendString ("<struct @domainDeclarationList-element:") ;
  if (! isValid ()) {
    ioString.appendString (" not built") ;
  }else{
    mProperty_mDomainName.description (ioString, inIndentation+1) ;
    ioString.appendString (", ") ;
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @domainDeclarationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationList_2D_element ("domainDeclarationList-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_domainDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainDeclarationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_domainDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList_2D_element GALGAS_domainDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_domainDeclarationList_2D_element result ;
  const GALGAS_domainDeclarationList_2D_element * p = (const GALGAS_domainDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_domainDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap_2D_element::GALGAS_recordDomainMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mBitCount (),
mProperty_mSubDomain () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap_2D_element::~ GALGAS_recordDomainMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap_2D_element::GALGAS_recordDomainMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1,
                                                                      const GALGAS_uint & inOperand2,
                                                                      const GALGAS_recordDomainMap & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mBitCount (inOperand2),
mProperty_mSubDomain (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap_2D_element GALGAS_recordDomainMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                     const GALGAS_uint & in_mIndex,
                                                                                     const GALGAS_uint & in_mBitCount,
                                                                                     const GALGAS_recordDomainMap & in_mSubDomain,
                                                                                     Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_recordDomainMap_2D_element result ;
  if (in_lkey.isValid () && in_mIndex.isValid () && in_mBitCount.isValid () && in_mSubDomain.isValid ()) {
    result = GALGAS_recordDomainMap_2D_element (in_lkey, in_mIndex, in_mBitCount, in_mSubDomain) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_recordDomainMap_2D_element::objectCompare (const GALGAS_recordDomainMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitCount.objectCompare (inOperand.mProperty_mBitCount) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSubDomain.objectCompare (inOperand.mProperty_mSubDomain) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_recordDomainMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mBitCount.isValid () && mProperty_mSubDomain.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_recordDomainMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mBitCount.drop () ;
  mProperty_mSubDomain.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_recordDomainMap_2D_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendString ("<struct @recordDomainMap-element:") ;
  if (! isValid ()) {
    ioString.appendString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString.appendString (", ") ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
    ioString.appendString (", ") ;
    mProperty_mSubDomain.description (ioString, inIndentation+1) ;
  }
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @recordDomainMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_recordDomainMap_2D_element ("recordDomainMap-element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_recordDomainMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_recordDomainMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_recordDomainMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_recordDomainMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap_2D_element GALGAS_recordDomainMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_recordDomainMap_2D_element result ;
  const GALGAS_recordDomainMap_2D_element * p = (const GALGAS_recordDomainMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_recordDomainMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("recordDomainMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainMap_2D_element::GALGAS_domainMap_2D_element (void) :
mProperty_lkey (),
mProperty_mBitCount (),
mProperty_mRecordMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainMap_2D_element::~ GALGAS_domainMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainMap_2D_element::GALGAS_domainMap_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_uint & inOperand1,
                                                          const GALGAS_recordDomainMap & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mBitCount (inOperand1),
mProperty_mRecordMap (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainMap_2D_element GALGAS_domainMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                         const GALGAS_uint & in_mBitCount,
                                                                         const GALGAS_recordDomainMap & in_mRecordMap,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_domainMap_2D_element result ;
  if (in_lkey.isValid () && in_mBitCount.isValid () && in_mRecordMap.isValid ()) {
    result = GALGAS_domainMap_2D_element (in_lkey, in_mBitCount, in_mRecordMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_domainMap_2D_element::objectCompare (const GALGAS_domainMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitCount.objectCompare (inOperand.mProperty_mBitCount) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRecordMap.objectCompare (inOperand.mProperty_mRecordMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_domainMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBitCount.isValid () && mProperty_mRecordMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mBitCount.drop () ;
  mProperty_mRecordMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainMap_2D_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendString ("<struct @domainMap-element:") ;
  if (! isValid ()) {
    ioString.appendString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendString (", ") ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
    ioString.appendString (", ") ;
    mProperty_mRecordMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @domainMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainMap_2D_element ("domainMap-element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_domainMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_domainMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainMap_2D_element GALGAS_domainMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_domainMap_2D_element result ;
  const GALGAS_domainMap_2D_element * p = (const GALGAS_domainMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_domainMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element::GALGAS_varMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mBitCount (),
mProperty_mRecordDomainMap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element::~ GALGAS_varMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element::GALGAS_varMap_2D_element (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_uint & inOperand1,
                                                    const GALGAS_uint & inOperand2,
                                                    const GALGAS_recordDomainMap & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mBitCount (inOperand2),
mProperty_mRecordDomainMap (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element GALGAS_varMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                   const GALGAS_uint & in_mIndex,
                                                                   const GALGAS_uint & in_mBitCount,
                                                                   const GALGAS_recordDomainMap & in_mRecordDomainMap,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_varMap_2D_element result ;
  if (in_lkey.isValid () && in_mIndex.isValid () && in_mBitCount.isValid () && in_mRecordDomainMap.isValid ()) {
    result = GALGAS_varMap_2D_element (in_lkey, in_mIndex, in_mBitCount, in_mRecordDomainMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_varMap_2D_element::objectCompare (const GALGAS_varMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitCount.objectCompare (inOperand.mProperty_mBitCount) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRecordDomainMap.objectCompare (inOperand.mProperty_mRecordDomainMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_varMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mBitCount.isValid () && mProperty_mRecordDomainMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mBitCount.drop () ;
  mProperty_mRecordDomainMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varMap_2D_element::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendString ("<struct @varMap-element:") ;
  if (! isValid ()) {
    ioString.appendString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString.appendString (", ") ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
    ioString.appendString (", ") ;
    mProperty_mRecordDomainMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @varMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varMap_2D_element ("varMap-element",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element GALGAS_varMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_varMap_2D_element result ;
  const GALGAS_varMap_2D_element * p = (const GALGAS_varMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_varMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap_2D_element::GALGAS_computedFormulaMap_2D_element (void) :
mProperty_lkey (),
mProperty_mVarList (),
mProperty_mBitCount (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap_2D_element::~ GALGAS_computedFormulaMap_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap_2D_element::GALGAS_computedFormulaMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_varList & inOperand1,
                                                                            const GALGAS_uint & inOperand2,
                                                                            const GALGAS_binaryset & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mVarList (inOperand1),
mProperty_mBitCount (inOperand2),
mProperty_mValue (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap_2D_element GALGAS_computedFormulaMap_2D_element::class_func_new (const GALGAS_lstring & in_lkey,
                                                                                           const GALGAS_varList & in_mVarList,
                                                                                           const GALGAS_uint & in_mBitCount,
                                                                                           const GALGAS_binaryset & in_mValue,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_computedFormulaMap_2D_element result ;
  if (in_lkey.isValid () && in_mVarList.isValid () && in_mBitCount.isValid () && in_mValue.isValid ()) {
    result = GALGAS_computedFormulaMap_2D_element (in_lkey, in_mVarList, in_mBitCount, in_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_computedFormulaMap_2D_element::objectCompare (const GALGAS_computedFormulaMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mVarList.objectCompare (inOperand.mProperty_mVarList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitCount.objectCompare (inOperand.mProperty_mBitCount) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mValue.objectCompare (inOperand.mProperty_mValue) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_computedFormulaMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mVarList.isValid () && mProperty_mBitCount.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedFormulaMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mVarList.drop () ;
  mProperty_mBitCount.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedFormulaMap_2D_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendString ("<struct @computedFormulaMap-element:") ;
  if (! isValid ()) {
    ioString.appendString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendString (", ") ;
    mProperty_mVarList.description (ioString, inIndentation+1) ;
    ioString.appendString (", ") ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
    ioString.appendString (", ") ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @computedFormulaMap-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedFormulaMap_2D_element ("computedFormulaMap-element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedFormulaMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedFormulaMap_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedFormulaMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedFormulaMap_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap_2D_element GALGAS_computedFormulaMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_computedFormulaMap_2D_element result ;
  const GALGAS_computedFormulaMap_2D_element * p = (const GALGAS_computedFormulaMap_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_computedFormulaMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedFormulaMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression_2D_element::GALGAS_formulaParameterListInExpression_2D_element (void) :
mProperty_mParameterName (),
mProperty_mFieldNames () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression_2D_element::~ GALGAS_formulaParameterListInExpression_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression_2D_element::GALGAS_formulaParameterListInExpression_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstringlist & inOperand1) :
mProperty_mParameterName (inOperand0),
mProperty_mFieldNames (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression_2D_element GALGAS_formulaParameterListInExpression_2D_element::class_func_new (const GALGAS_lstring & in_mParameterName,
                                                                                                                       const GALGAS_lstringlist & in_mFieldNames,
                                                                                                                       Compiler * /* inCompiler */
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formulaParameterListInExpression_2D_element result ;
  if (in_mParameterName.isValid () && in_mFieldNames.isValid ()) {
    result = GALGAS_formulaParameterListInExpression_2D_element (in_mParameterName, in_mFieldNames) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_formulaParameterListInExpression_2D_element::objectCompare (const GALGAS_formulaParameterListInExpression_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mParameterName.objectCompare (inOperand.mProperty_mParameterName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFieldNames.objectCompare (inOperand.mProperty_mFieldNames) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_formulaParameterListInExpression_2D_element::isValid (void) const {
  return mProperty_mParameterName.isValid () && mProperty_mFieldNames.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaParameterListInExpression_2D_element::drop (void) {
  mProperty_mParameterName.drop () ;
  mProperty_mFieldNames.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaParameterListInExpression_2D_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendString ("<struct @formulaParameterListInExpression-element:") ;
  if (! isValid ()) {
    ioString.appendString (" not built") ;
  }else{
    mProperty_mParameterName.description (ioString, inIndentation+1) ;
    ioString.appendString (", ") ;
    mProperty_mFieldNames.description (ioString, inIndentation+1) ;
  }
  ioString.appendString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @formulaParameterListInExpression-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaParameterListInExpression_2D_element ("formulaParameterListInExpression-element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formulaParameterListInExpression_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaParameterListInExpression_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formulaParameterListInExpression_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formulaParameterListInExpression_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression_2D_element GALGAS_formulaParameterListInExpression_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formulaParameterListInExpression_2D_element result ;
  const GALGAS_formulaParameterListInExpression_2D_element * p = (const GALGAS_formulaParameterListInExpression_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_formulaParameterListInExpression_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaParameterListInExpression-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

