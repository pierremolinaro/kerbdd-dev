#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@_32_lstringlist' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement__32_lstringlist : public cCollectionElement {
  public: GGS__32_lstringlist_2E_element mObject ;

//--- Class functions
  public: cCollectionElement__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                              const GGS_lstring & in_mValue_31_
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @_32_lstringlist
//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement__32_lstringlist * p = (cCollectionElement__32_lstringlist *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement__32_lstringlist) ;
    const GGS__32_lstringlist_2E_element element (p->mObject.mProperty_mValue_30_, p->mObject.mProperty_mValue_31_) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GGS_lstring & in_mValue_30_,
                                                     const GGS_lstring & in_mValue_31_
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement__32_lstringlist * p = nullptr ;
  macroMyNew (p, cCollectionElement__32_lstringlist (in_mValue_30_, in_mValue_31_ COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__32_lstringlist::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS__32_lstringlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mValue0:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mValue_30_.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mValue1:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mValue_31_.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::plusPlusAssignOperation (const GGS__32_lstringlist_2E_element & inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                   const GGS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element element (inOperand0, inOperand1) ;
  GGS__32_lstringlist result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::addAssignOperation (const GGS_lstring & inOperand0,
                                              const GGS_lstring & inOperand1
                                              COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_append (const GGS_lstring inOperand0,
                                         const GGS_lstring inOperand1,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                const GGS_lstring inOperand1,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mValue_31_ ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_popFirst (GGS_lstring & outOperand0,
                                           GGS_lstring & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValue_31_ ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_popLast (GGS_lstring & outOperand0,
                                          GGS_lstring & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValue_31_ ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::method_first (GGS_lstring & outOperand0,
                                        GGS_lstring & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValue_31_ ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::method_last (GGS_lstring & outOperand0,
                                       GGS_lstring & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValue_31_ ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::add_operation (const GGS__32_lstringlist & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::plusAssignOperation (const GGS__32_lstringlist inList,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_setMValue_30_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_30_ = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS__32_lstringlist::getter_mValue_30_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_30_ ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_setMValue_31_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_31_ = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS__32_lstringlist::getter_mValue_31_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_31_ ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_32_lstringlist
//--------------------------------------------------------------------------------------------------

DownEnumerator__32_lstringlist::DownEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element DownEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_31_ ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_32_lstringlist
//--------------------------------------------------------------------------------------------------

UpEnumerator__32_lstringlist::UpEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element UpEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_31_ ;
}




//--------------------------------------------------------------------------------------------------
//     @2lstringlist generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist ("2lstringlist",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__32_lstringlist::staticTypeDescriptor (void) const {
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


void cPtr_abstractFormula::
abstractFormula_init (Compiler * /* inCompiler */) {
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
//     @abstractFormula generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractFormula ("abstractFormula",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractFormula::staticTypeDescriptor (void) const {
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
//     @formulaKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formulaKind ("formulaKind",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formulaKind::staticTypeDescriptor (void) const {
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
//Class for element of '@domainFieldList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_domainFieldList : public cCollectionElement {
  public: GGS_domainFieldList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_domainFieldList (const GGS_lstring & in_mVarName,
                                              const GGS_bddType & in_mType
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_domainFieldList (const GGS_domainFieldList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @domainFieldList
//--------------------------------------------------------------------------------------------------

GGS_domainFieldList::GGS_domainFieldList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList::GGS_domainFieldList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    const GGS_domainFieldList_2E_element element (p->mObject.mProperty_mVarName, p->mObject.mProperty_mType) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GGS_lstring & in_mVarName,
                                                     const GGS_bddType & in_mType
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_domainFieldList * p = nullptr ;
  macroMyNew (p, cCollectionElement_domainFieldList (in_mVarName, in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_domainFieldList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_domainFieldList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mVarName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mVarName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mType.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList GGS_domainFieldList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_domainFieldList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::plusPlusAssignOperation (const GGS_domainFieldList_2E_element & inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList GGS_domainFieldList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                   const GGS_bddType & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_domainFieldList_2E_element element (inOperand0, inOperand1) ;
  GGS_domainFieldList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::addAssignOperation (const GGS_lstring & inOperand0,
                                              const GGS_bddType & inOperand1
                                              COMMA_LOCATION_ARGS) {
  const GGS_domainFieldList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::setter_append (const GGS_lstring inOperand0,
                                         const GGS_bddType inOperand1,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  const GGS_domainFieldList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                const GGS_bddType inOperand1,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_domainFieldList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                GGS_bddType & outOperand1,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mVarName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mType ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::setter_popFirst (GGS_lstring & outOperand0,
                                           GGS_bddType & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mVarName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mType ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::setter_popLast (GGS_lstring & outOperand0,
                                          GGS_bddType & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mVarName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mType ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::method_first (GGS_lstring & outOperand0,
                                        GGS_bddType & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mVarName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mType ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::method_last (GGS_lstring & outOperand0,
                                       GGS_bddType & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mVarName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mType ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList GGS_domainFieldList::add_operation (const GGS_domainFieldList & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_domainFieldList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList GGS_domainFieldList::subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_domainFieldList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList GGS_domainFieldList::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_domainFieldList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList GGS_domainFieldList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_domainFieldList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList GGS_domainFieldList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_domainFieldList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::plusAssignOperation (const GGS_domainFieldList inList,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::setter_setMVarNameAtIndex (GGS_lstring inOperand,
                                                     GGS_uint inIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mVarName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_domainFieldList::getter_mVarNameAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mVarName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList::setter_setMTypeAtIndex (GGS_bddType inOperand,
                                                  GGS_uint inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mType = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_bddType GGS_domainFieldList::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_bddType result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mType ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @domainFieldList
//--------------------------------------------------------------------------------------------------

DownEnumerator_domainFieldList::DownEnumerator_domainFieldList (const GGS_domainFieldList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList_2E_element DownEnumerator_domainFieldList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_domainFieldList::current_mVarName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bddType DownEnumerator_domainFieldList::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @domainFieldList
//--------------------------------------------------------------------------------------------------

UpEnumerator_domainFieldList::UpEnumerator_domainFieldList (const GGS_domainFieldList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList_2E_element UpEnumerator_domainFieldList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_domainFieldList::current_mVarName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bddType UpEnumerator_domainFieldList::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}




//--------------------------------------------------------------------------------------------------
//     @domainFieldList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_domainFieldList ("domainFieldList",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_domainFieldList::staticTypeDescriptor (void) const {
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


void cPtr_expression::
expression_init (Compiler * /* inCompiler */) {
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
//     @expression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_expression ("expression",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_expression::staticTypeDescriptor (void) const {
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

GGS_abstractFormula GGS_abstractFormula_2E_weak::unwrappedValue (void) const {
  GGS_abstractFormula result ;
  if (isValid ()) {
    const cPtr_abstractFormula * p = (cPtr_abstractFormula *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractFormula (p) ;
    }
  }
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
//     @abstractFormula.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractFormula_2E_weak ("abstractFormula.weak",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractFormula_2E_weak::staticTypeDescriptor (void) const {
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
//  Map type @computedFormulaMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap::GGS_computedFormulaMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap::~ GGS_computedFormulaMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap::GGS_computedFormulaMap (const GGS_computedFormulaMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap & GGS_computedFormulaMap::operator = (const GGS_computedFormulaMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap GGS_computedFormulaMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_computedFormulaMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_computedFormulaMap::getter_hasKey (const GGS_string & inKey
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_computedFormulaMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                       const GGS_uint & inLevel
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_computedFormulaMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_computedFormulaMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_computedFormulaMap::getter_locationForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_computedFormulaMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_computedFormulaMap::getter_keyList (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_computedFormulaMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_computedFormulaMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap::performInsert (const GGS_computedFormulaMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_computedFormulaMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_computedFormulaMap_2E_element>
GGS_computedFormulaMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_computedFormulaMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_computedFormulaMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_computedFormulaMap_2E_element>>
GGS_computedFormulaMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_computedFormulaMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_computedFormulaMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap_2E_element_3F_ GGS_computedFormulaMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_computedFormulaMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_computedFormulaMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_computedFormulaMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_computedFormulaMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mVarList = info->mProperty_mVarList ;
      element.mProperty_mBitCount = info->mProperty_mBitCount ;
      element.mProperty_mValue = info->mProperty_mValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap GGS_computedFormulaMap::class_func_mapWithMapToOverride (const GGS_computedFormulaMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_computedFormulaMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_computedFormulaMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap GGS_computedFormulaMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_computedFormulaMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap::setter_insertKey (GGS_lstring inLKey,
                                               GGS_varList inArgument0,
                                               GGS_uint inArgument1,
                                               GGS_binaryset inArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const GGS_computedFormulaMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' formula is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap::method_searchKey (GGS_lstring inLKey,
                                               GGS_varList & outArgument0,
                                               GGS_uint & outArgument1,
                                               GGS_binaryset & outArgument2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_computedFormulaMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' formula" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mVarList ;
    outArgument1 = info->mProperty_mBitCount ;
    outArgument2 = info->mProperty_mValue ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_varList GGS_computedFormulaMap::getter_mVarListForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_varList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_computedFormulaMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mVarList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_computedFormulaMap::getter_mBitCountForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_computedFormulaMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mBitCount ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_binaryset GGS_computedFormulaMap::getter_mValueForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_binaryset result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_computedFormulaMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mValue ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap::setter_setMVarListForKey (GGS_varList inValue,
                                                       GGS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_computedFormulaMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mVarList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap::setter_setMBitCountForKey (GGS_uint inValue,
                                                        GGS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_computedFormulaMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mBitCount = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap::setter_setMValueForKey (GGS_binaryset inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_computedFormulaMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mValue = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_computedFormulaMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_computedFormulaMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mVarList:") ;
    inArray (i COMMA_HERE)->mProperty_mVarList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mBitCount:") ;
    inArray (i COMMA_HERE)->mProperty_mBitCount.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mValue:") ;
    inArray (i COMMA_HERE)->mProperty_mValue.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_computedFormulaMap_2E_element>> array = sortedInfoArray () ;
    GGS_computedFormulaMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_computedFormulaMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_computedFormulaMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @computedFormulaMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_computedFormulaMap::DownEnumerator_computedFormulaMap (const GGS_computedFormulaMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap_2E_element DownEnumerator_computedFormulaMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_computedFormulaMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_varList DownEnumerator_computedFormulaMap::current_mVarList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mVarList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_computedFormulaMap::current_mBitCount (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset DownEnumerator_computedFormulaMap::current_mValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mValue ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @computedFormulaMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_computedFormulaMap::UpEnumerator_computedFormulaMap (const GGS_computedFormulaMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap_2E_element UpEnumerator_computedFormulaMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_computedFormulaMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_varList UpEnumerator_computedFormulaMap::current_mVarList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mVarList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_computedFormulaMap::current_mBitCount (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryset UpEnumerator_computedFormulaMap::current_mValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mValue ;
}


//--------------------------------------------------------------------------------------------------
//     @computedFormulaMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedFormulaMap ("computedFormulaMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computedFormulaMap::staticTypeDescriptor (void) const {
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
//Class for element of '@varList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_varList : public cCollectionElement {
  public: GGS_varList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_varList (const GGS_string & in_mVarName,
                                      const GGS_uint & in_mBitIndex,
                                      const GGS_uint & in_mBitCount
                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_varList (const GGS_varList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @varList
//--------------------------------------------------------------------------------------------------

GGS_varList::GGS_varList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_varList::GGS_varList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_varList * p = (cCollectionElement_varList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_varList) ;
    const GGS_varList_2E_element element (p->mObject.mProperty_mVarName, p->mObject.mProperty_mBitIndex, p->mObject.mProperty_mBitCount) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                             const GGS_string & in_mVarName,
                                             const GGS_uint & in_mBitIndex,
                                             const GGS_uint & in_mBitCount
                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_varList * p = nullptr ;
  macroMyNew (p, cCollectionElement_varList (in_mVarName, in_mBitIndex, in_mBitCount COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_varList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_varList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::description (String & ioString,
                               const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mVarName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mVarName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBitIndex:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBitIndex.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBitCount:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBitCount.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_varList GGS_varList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_varList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::plusPlusAssignOperation (const GGS_varList_2E_element & inValue
                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_varList GGS_varList::class_func_listWithValue (const GGS_string & inOperand0,
                                                   const GGS_uint & inOperand1,
                                                   const GGS_uint & inOperand2
                                                   COMMA_LOCATION_ARGS) {
  const GGS_varList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_varList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::addAssignOperation (const GGS_string & inOperand0,
                                      const GGS_uint & inOperand1,
                                      const GGS_uint & inOperand2
                                      COMMA_LOCATION_ARGS) {
  const GGS_varList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::setter_append (const GGS_string inOperand0,
                                 const GGS_uint inOperand1,
                                 const GGS_uint inOperand2,
                                 Compiler * /* inCompiler */
                                 COMMA_LOCATION_ARGS) {
  const GGS_varList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::setter_insertAtIndex (const GGS_string inOperand0,
                                        const GGS_uint inOperand1,
                                        const GGS_uint inOperand2,
                                        const GGS_uint inInsertionIndex,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  const GGS_varList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::setter_removeAtIndex (GGS_string & outOperand0,
                                        GGS_uint & outOperand1,
                                        GGS_uint & outOperand2,
                                        const GGS_uint inRemoveIndex,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mVarName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mBitIndex ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mBitCount ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::setter_popFirst (GGS_string & outOperand0,
                                   GGS_uint & outOperand1,
                                   GGS_uint & outOperand2,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mVarName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBitIndex ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBitCount ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::setter_popLast (GGS_string & outOperand0,
                                  GGS_uint & outOperand1,
                                  GGS_uint & outOperand2,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mVarName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBitIndex ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBitCount ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::method_first (GGS_string & outOperand0,
                                GGS_uint & outOperand1,
                                GGS_uint & outOperand2,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mVarName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBitIndex ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBitCount ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::method_last (GGS_string & outOperand0,
                               GGS_uint & outOperand1,
                               GGS_uint & outOperand2,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mVarName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBitIndex ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBitCount ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_varList GGS_varList::add_operation (const GGS_varList & inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_varList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varList GGS_varList::subList (const int32_t inStart,
                                  const int32_t inLength,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  GGS_varList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varList GGS_varList::getter_subListWithRange (const GGS_range & inRange,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_varList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varList GGS_varList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_varList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varList GGS_varList::getter_subListToIndex (const GGS_uint & inIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_varList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::plusAssignOperation (const GGS_varList inList,
                                       Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varList::setter_setMVarNameAtIndex (GGS_string inOperand,
                                             GGS_uint inIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mVarName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_varList::getter_mVarNameAtIndex (const GGS_uint & inIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mVarName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_varList::setter_setMBitIndexAtIndex (GGS_uint inOperand,
                                              GGS_uint inIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBitIndex = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_uint GGS_varList::getter_mBitIndexAtIndex (const GGS_uint & inIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBitIndex ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_varList::setter_setMBitCountAtIndex (GGS_uint inOperand,
                                              GGS_uint inIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBitCount = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_uint GGS_varList::getter_mBitCountAtIndex (const GGS_uint & inIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBitCount ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @varList
//--------------------------------------------------------------------------------------------------

DownEnumerator_varList::DownEnumerator_varList (const GGS_varList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_varList_2E_element DownEnumerator_varList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_varList::current_mVarName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_varList::current_mBitIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBitIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_varList::current_mBitCount (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBitCount ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @varList
//--------------------------------------------------------------------------------------------------

UpEnumerator_varList::UpEnumerator_varList (const GGS_varList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_varList_2E_element UpEnumerator_varList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_varList::current_mVarName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_varList::current_mBitIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBitIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_varList::current_mBitCount (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBitCount ;
}




//--------------------------------------------------------------------------------------------------
//     @varList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varList ("varList",
                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varList::staticTypeDescriptor (void) const {
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

GGS_graphvizFormula GGS_graphvizFormula_2E_weak::unwrappedValue (void) const {
  GGS_graphvizFormula result ;
  if (isValid ()) {
    const cPtr_graphvizFormula * p = (cPtr_graphvizFormula *) ptr () ;
    if (nullptr != p) {
      result = GGS_graphvizFormula (p) ;
    }
  }
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
//     @graphvizFormula.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphvizFormula_2E_weak ("graphvizFormula.weak",
                                                                            & kTypeDescriptor_GALGAS_abstractFormula_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_graphvizFormula_2E_weak::staticTypeDescriptor (void) const {
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
//Class for element of '@formulaList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_formulaList : public cCollectionElement {
  public: GGS_formulaList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_formulaList (const GGS_abstractFormula & in_mFormula
                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formulaList (const GGS_formulaList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @formulaList
//--------------------------------------------------------------------------------------------------

GGS_formulaList::GGS_formulaList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList::GGS_formulaList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_formulaList * p = (cCollectionElement_formulaList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_formulaList) ;
    const GGS_formulaList_2E_element element (p->mObject.mProperty_mFormula) ;
    mArray.appendObject (element) ;
  }
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

GGS_uint GGS_formulaList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_formulaList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::description (String & ioString,
                                   const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFormula:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFormula.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList GGS_formulaList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formulaList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::plusPlusAssignOperation (const GGS_formulaList_2E_element & inValue
                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList GGS_formulaList::class_func_listWithValue (const GGS_abstractFormula & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  const GGS_formulaList_2E_element element (inOperand0) ;
  GGS_formulaList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::addAssignOperation (const GGS_abstractFormula & inOperand0
                                          COMMA_LOCATION_ARGS) {
  const GGS_formulaList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::setter_append (const GGS_abstractFormula inOperand0,
                                     Compiler * /* inCompiler */
                                     COMMA_LOCATION_ARGS) {
  const GGS_formulaList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::setter_insertAtIndex (const GGS_abstractFormula inOperand0,
                                            const GGS_uint inInsertionIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_formulaList_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::setter_removeAtIndex (GGS_abstractFormula & outOperand0,
                                            const GGS_uint inRemoveIndex,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mFormula ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::setter_popFirst (GGS_abstractFormula & outOperand0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFormula ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::setter_popLast (GGS_abstractFormula & outOperand0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFormula ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::method_first (GGS_abstractFormula & outOperand0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFormula ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::method_last (GGS_abstractFormula & outOperand0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFormula ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList GGS_formulaList::add_operation (const GGS_formulaList & inOperand,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_formulaList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList GGS_formulaList::subList (const int32_t inStart,
                                          const int32_t inLength,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  GGS_formulaList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList GGS_formulaList::getter_subListWithRange (const GGS_range & inRange,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_formulaList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList GGS_formulaList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_formulaList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList GGS_formulaList::getter_subListToIndex (const GGS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_formulaList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::plusAssignOperation (const GGS_formulaList inList,
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaList::setter_setMFormulaAtIndex (GGS_abstractFormula inOperand,
                                                 GGS_uint inIndex,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFormula = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_abstractFormula GGS_formulaList::getter_mFormulaAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_abstractFormula result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFormula ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @formulaList
//--------------------------------------------------------------------------------------------------

DownEnumerator_formulaList::DownEnumerator_formulaList (const GGS_formulaList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList_2E_element DownEnumerator_formulaList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFormula DownEnumerator_formulaList::current_mFormula (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormula ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @formulaList
//--------------------------------------------------------------------------------------------------

UpEnumerator_formulaList::UpEnumerator_formulaList (const GGS_formulaList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList_2E_element UpEnumerator_formulaList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFormula UpEnumerator_formulaList::current_mFormula (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFormula ;
}




//--------------------------------------------------------------------------------------------------
//     @formulaList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formulaList ("formulaList",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formulaList::staticTypeDescriptor (void) const {
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
//Class for element of '@domainDeclarationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_domainDeclarationList : public cCollectionElement {
  public: GGS_domainDeclarationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_domainDeclarationList (const GGS_lstring & in_mDomainName,
                                                    const GGS_domainDeclarationType & in_mType
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_domainDeclarationList (const GGS_domainDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @domainDeclarationList
//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList::GGS_domainDeclarationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList::GGS_domainDeclarationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    const GGS_domainDeclarationList_2E_element element (p->mObject.mProperty_mDomainName, p->mObject.mProperty_mType) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GGS_lstring & in_mDomainName,
                                                           const GGS_domainDeclarationType & in_mType
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_domainDeclarationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_domainDeclarationList (in_mDomainName, in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_domainDeclarationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_domainDeclarationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDomainName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDomainName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mType.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList GGS_domainDeclarationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_domainDeclarationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::plusPlusAssignOperation (const GGS_domainDeclarationList_2E_element & inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList GGS_domainDeclarationList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                               const GGS_domainDeclarationType & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_domainDeclarationList_2E_element element (inOperand0, inOperand1) ;
  GGS_domainDeclarationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::addAssignOperation (const GGS_lstring & inOperand0,
                                                    const GGS_domainDeclarationType & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  const GGS_domainDeclarationList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::setter_append (const GGS_lstring inOperand0,
                                               const GGS_domainDeclarationType inOperand1,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  const GGS_domainDeclarationList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                      const GGS_domainDeclarationType inOperand1,
                                                      const GGS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const GGS_domainDeclarationList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                      GGS_domainDeclarationType & outOperand1,
                                                      const GGS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mDomainName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mType ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::setter_popFirst (GGS_lstring & outOperand0,
                                                 GGS_domainDeclarationType & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDomainName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mType ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::setter_popLast (GGS_lstring & outOperand0,
                                                GGS_domainDeclarationType & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDomainName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mType ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::method_first (GGS_lstring & outOperand0,
                                              GGS_domainDeclarationType & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mDomainName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mType ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::method_last (GGS_lstring & outOperand0,
                                             GGS_domainDeclarationType & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mDomainName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mType ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList GGS_domainDeclarationList::add_operation (const GGS_domainDeclarationList & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_domainDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList GGS_domainDeclarationList::subList (const int32_t inStart,
                                                              const int32_t inLength,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_domainDeclarationList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList GGS_domainDeclarationList::getter_subListWithRange (const GGS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_domainDeclarationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList GGS_domainDeclarationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_domainDeclarationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList GGS_domainDeclarationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_domainDeclarationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::plusAssignOperation (const GGS_domainDeclarationList inList,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::setter_setMDomainNameAtIndex (GGS_lstring inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDomainName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_domainDeclarationList::getter_mDomainNameAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDomainName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList::setter_setMTypeAtIndex (GGS_domainDeclarationType inOperand,
                                                        GGS_uint inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mType = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_domainDeclarationType GGS_domainDeclarationList::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_domainDeclarationType result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mType ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @domainDeclarationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_domainDeclarationList::DownEnumerator_domainDeclarationList (const GGS_domainDeclarationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList_2E_element DownEnumerator_domainDeclarationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_domainDeclarationList::current_mDomainName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDomainName ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType DownEnumerator_domainDeclarationList::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @domainDeclarationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_domainDeclarationList::UpEnumerator_domainDeclarationList (const GGS_domainDeclarationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList_2E_element UpEnumerator_domainDeclarationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_domainDeclarationList::current_mDomainName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDomainName ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType UpEnumerator_domainDeclarationList::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}




//--------------------------------------------------------------------------------------------------
//     @domainDeclarationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_domainDeclarationList ("domainDeclarationList",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_domainDeclarationList::staticTypeDescriptor (void) const {
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

GGS_setting_5F_nodeHashMapSize GGS_setting_5F_nodeHashMapSize_2E_weak::unwrappedValue (void) const {
  GGS_setting_5F_nodeHashMapSize result ;
  if (isValid ()) {
    const cPtr_setting_5F_nodeHashMapSize * p = (cPtr_setting_5F_nodeHashMapSize *) ptr () ;
    if (nullptr != p) {
      result = GGS_setting_5F_nodeHashMapSize (p) ;
    }
  }
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
//     @setting_nodeHashMapSize.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize_2E_weak ("setting_nodeHashMapSize.weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractFormula_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_setting_5F_nodeHashMapSize_2E_weak::staticTypeDescriptor (void) const {
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

GGS_setting_5F_andCacheMapSize GGS_setting_5F_andCacheMapSize_2E_weak::unwrappedValue (void) const {
  GGS_setting_5F_andCacheMapSize result ;
  if (isValid ()) {
    const cPtr_setting_5F_andCacheMapSize * p = (cPtr_setting_5F_andCacheMapSize *) ptr () ;
    if (nullptr != p) {
      result = GGS_setting_5F_andCacheMapSize (p) ;
    }
  }
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
//     @setting_andCacheMapSize.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize_2E_weak ("setting_andCacheMapSize.weak",
                                                                                       & kTypeDescriptor_GALGAS_abstractFormula_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_setting_5F_andCacheMapSize_2E_weak::staticTypeDescriptor (void) const {
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

GGS_expression GGS_expression_2E_weak::unwrappedValue (void) const {
  GGS_expression result ;
  if (isValid ()) {
    const cPtr_expression * p = (cPtr_expression *) ptr () ;
    if (nullptr != p) {
      result = GGS_expression (p) ;
    }
  }
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
//     @expression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_expression_2E_weak ("expression.weak",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_expression_2E_weak::staticTypeDescriptor (void) const {
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

GGS_varInExpression GGS_varInExpression_2E_weak::unwrappedValue (void) const {
  GGS_varInExpression result ;
  if (isValid ()) {
    const cPtr_varInExpression * p = (cPtr_varInExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_varInExpression (p) ;
    }
  }
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
//     @varInExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInExpression_2E_weak ("varInExpression.weak",
                                                                            & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varInExpression_2E_weak::staticTypeDescriptor (void) const {
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

GGS_varBitInExpression GGS_varBitInExpression_2E_weak::unwrappedValue (void) const {
  GGS_varBitInExpression result ;
  if (isValid ()) {
    const cPtr_varBitInExpression * p = (cPtr_varBitInExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_varBitInExpression (p) ;
    }
  }
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
//     @varBitInExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varBitInExpression_2E_weak ("varBitInExpression.weak",
                                                                               & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varBitInExpression_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_andExpression::classDescriptor (void) const {
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
//     @andExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andExpression ("andExpression",
                                                                  & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_andExpression::staticTypeDescriptor (void) const {
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

GGS_andExpression GGS_andExpression_2E_weak::unwrappedValue (void) const {
  GGS_andExpression result ;
  if (isValid ()) {
    const cPtr_andExpression * p = (cPtr_andExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_andExpression (p) ;
    }
  }
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
//     @andExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andExpression_2E_weak ("andExpression.weak",
                                                                          & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_andExpression_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_orExpression::classDescriptor (void) const {
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
//     @orExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orExpression ("orExpression",
                                                                 & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_orExpression::staticTypeDescriptor (void) const {
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

GGS_orExpression GGS_orExpression_2E_weak::unwrappedValue (void) const {
  GGS_orExpression result ;
  if (isValid ()) {
    const cPtr_orExpression * p = (cPtr_orExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_orExpression (p) ;
    }
  }
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
//     @orExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orExpression_2E_weak ("orExpression.weak",
                                                                         & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_orExpression_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_xorExpression::classDescriptor (void) const {
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
//     @xorExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xorExpression ("xorExpression",
                                                                  & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_xorExpression::staticTypeDescriptor (void) const {
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

GGS_xorExpression GGS_xorExpression_2E_weak::unwrappedValue (void) const {
  GGS_xorExpression result ;
  if (isValid ()) {
    const cPtr_xorExpression * p = (cPtr_xorExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_xorExpression (p) ;
    }
  }
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
//     @xorExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xorExpression_2E_weak ("xorExpression.weak",
                                                                          & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_xorExpression_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_equalExpression::classDescriptor (void) const {
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
//     @equalExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_equalExpression ("equalExpression",
                                                                    & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_equalExpression::staticTypeDescriptor (void) const {
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

GGS_equalExpression GGS_equalExpression_2E_weak::unwrappedValue (void) const {
  GGS_equalExpression result ;
  if (isValid ()) {
    const cPtr_equalExpression * p = (cPtr_equalExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_equalExpression (p) ;
    }
  }
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
//     @equalExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_equalExpression_2E_weak ("equalExpression.weak",
                                                                            & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_equalExpression_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_notEqualExpression::classDescriptor (void) const {
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
//     @notEqualExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_notEqualExpression ("notEqualExpression",
                                                                       & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_notEqualExpression::staticTypeDescriptor (void) const {
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

GGS_notEqualExpression GGS_notEqualExpression_2E_weak::unwrappedValue (void) const {
  GGS_notEqualExpression result ;
  if (isValid ()) {
    const cPtr_notEqualExpression * p = (cPtr_notEqualExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_notEqualExpression (p) ;
    }
  }
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
//     @notEqualExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_notEqualExpression_2E_weak ("notEqualExpression.weak",
                                                                               & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_notEqualExpression_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_impliesExpression::classDescriptor (void) const {
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
//     @impliesExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_impliesExpression ("impliesExpression",
                                                                      & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_impliesExpression::staticTypeDescriptor (void) const {
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

GGS_impliesExpression GGS_impliesExpression_2E_weak::unwrappedValue (void) const {
  GGS_impliesExpression result ;
  if (isValid ()) {
    const cPtr_impliesExpression * p = (cPtr_impliesExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_impliesExpression (p) ;
    }
  }
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
//     @impliesExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_impliesExpression_2E_weak ("impliesExpression.weak",
                                                                              & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_impliesExpression_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_complementExpression::classDescriptor (void) const {
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
//     @complementExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_complementExpression ("complementExpression",
                                                                         & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_complementExpression::staticTypeDescriptor (void) const {
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

GGS_complementExpression GGS_complementExpression_2E_weak::unwrappedValue (void) const {
  GGS_complementExpression result ;
  if (isValid ()) {
    const cPtr_complementExpression * p = (cPtr_complementExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_complementExpression (p) ;
    }
  }
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
//     @complementExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_complementExpression_2E_weak ("complementExpression.weak",
                                                                                 & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_complementExpression_2E_weak::staticTypeDescriptor (void) const {
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
//Pointer class for @trueExpression class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_trueExpression::cPtr_trueExpression (Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_trueExpression::classDescriptor (void) const {
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
//     @trueExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_trueExpression ("trueExpression",
                                                                   & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_trueExpression::staticTypeDescriptor (void) const {
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

GGS_trueExpression GGS_trueExpression_2E_weak::unwrappedValue (void) const {
  GGS_trueExpression result ;
  if (isValid ()) {
    const cPtr_trueExpression * p = (cPtr_trueExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_trueExpression (p) ;
    }
  }
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
//     @trueExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_trueExpression_2E_weak ("trueExpression.weak",
                                                                           & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_trueExpression_2E_weak::staticTypeDescriptor (void) const {
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
//Pointer class for @falseExpression class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_falseExpression::cPtr_falseExpression (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) :
cPtr_expression (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_falseExpression::classDescriptor (void) const {
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
//     @falseExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_falseExpression ("falseExpression",
                                                                    & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_falseExpression::staticTypeDescriptor (void) const {
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

GGS_falseExpression GGS_falseExpression_2E_weak::unwrappedValue (void) const {
  GGS_falseExpression result ;
  if (isValid ()) {
    const cPtr_falseExpression * p = (cPtr_falseExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_falseExpression (p) ;
    }
  }
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
//     @falseExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_falseExpression_2E_weak ("falseExpression.weak",
                                                                            & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_falseExpression_2E_weak::staticTypeDescriptor (void) const {
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
//Class for element of '@formulaParameterListInExpression' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_formulaParameterListInExpression : public cCollectionElement {
  public: GGS_formulaParameterListInExpression_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_formulaParameterListInExpression (const GGS_lstring & in_mParameterName,
                                                               const GGS_lstringlist & in_mFieldNames
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formulaParameterListInExpression (const GGS_formulaParameterListInExpression_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @formulaParameterListInExpression
//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression::GGS_formulaParameterListInExpression (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression::GGS_formulaParameterListInExpression (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    const GGS_formulaParameterListInExpression_2E_element element (p->mObject.mProperty_mParameterName, p->mObject.mProperty_mFieldNames) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GGS_lstring & in_mParameterName,
                                                                      const GGS_lstringlist & in_mFieldNames
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_formulaParameterListInExpression * p = nullptr ;
  macroMyNew (p, cCollectionElement_formulaParameterListInExpression (in_mParameterName, in_mFieldNames COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_formulaParameterListInExpression::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_formulaParameterListInExpression::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mParameterName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mParameterName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFieldNames:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFieldNames.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression GGS_formulaParameterListInExpression::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formulaParameterListInExpression result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::plusPlusAssignOperation (const GGS_formulaParameterListInExpression_2E_element & inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression GGS_formulaParameterListInExpression::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                     const GGS_lstringlist & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_formulaParameterListInExpression_2E_element element (inOperand0, inOperand1) ;
  GGS_formulaParameterListInExpression result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::addAssignOperation (const GGS_lstring & inOperand0,
                                                               const GGS_lstringlist & inOperand1
                                                               COMMA_LOCATION_ARGS) {
  const GGS_formulaParameterListInExpression_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::setter_append (const GGS_lstring inOperand0,
                                                          const GGS_lstringlist inOperand1,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  const GGS_formulaParameterListInExpression_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                 const GGS_lstringlist inOperand1,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_formulaParameterListInExpression_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                 GGS_lstringlist & outOperand1,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mParameterName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFieldNames ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::setter_popFirst (GGS_lstring & outOperand0,
                                                            GGS_lstringlist & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mParameterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFieldNames ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::setter_popLast (GGS_lstring & outOperand0,
                                                           GGS_lstringlist & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mParameterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFieldNames ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::method_first (GGS_lstring & outOperand0,
                                                         GGS_lstringlist & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mParameterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFieldNames ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::method_last (GGS_lstring & outOperand0,
                                                        GGS_lstringlist & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mParameterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFieldNames ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression GGS_formulaParameterListInExpression::add_operation (const GGS_formulaParameterListInExpression & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_formulaParameterListInExpression result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression GGS_formulaParameterListInExpression::subList (const int32_t inStart,
                                                                                    const int32_t inLength,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_formulaParameterListInExpression result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression GGS_formulaParameterListInExpression::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_formulaParameterListInExpression result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression GGS_formulaParameterListInExpression::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_formulaParameterListInExpression result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression GGS_formulaParameterListInExpression::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_formulaParameterListInExpression result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::plusAssignOperation (const GGS_formulaParameterListInExpression inList,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::setter_setMParameterNameAtIndex (GGS_lstring inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstring GGS_formulaParameterListInExpression::getter_mParameterNameAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression::setter_setMFieldNamesAtIndex (GGS_lstringlist inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFieldNames = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_lstringlist GGS_formulaParameterListInExpression::getter_mFieldNamesAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFieldNames ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @formulaParameterListInExpression
//--------------------------------------------------------------------------------------------------

DownEnumerator_formulaParameterListInExpression::DownEnumerator_formulaParameterListInExpression (const GGS_formulaParameterListInExpression & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression_2E_element DownEnumerator_formulaParameterListInExpression::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_formulaParameterListInExpression::current_mParameterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_formulaParameterListInExpression::current_mFieldNames (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFieldNames ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @formulaParameterListInExpression
//--------------------------------------------------------------------------------------------------

UpEnumerator_formulaParameterListInExpression::UpEnumerator_formulaParameterListInExpression (const GGS_formulaParameterListInExpression & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression_2E_element UpEnumerator_formulaParameterListInExpression::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_formulaParameterListInExpression::current_mParameterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_formulaParameterListInExpression::current_mFieldNames (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFieldNames ;
}




//--------------------------------------------------------------------------------------------------
//     @formulaParameterListInExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formulaParameterListInExpression ("formulaParameterListInExpression",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formulaParameterListInExpression::staticTypeDescriptor (void) const {
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

GGS_formulaInExpression GGS_formulaInExpression_2E_weak::unwrappedValue (void) const {
  GGS_formulaInExpression result ;
  if (isValid ()) {
    const cPtr_formulaInExpression * p = (cPtr_formulaInExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_formulaInExpression (p) ;
    }
  }
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
//     @formulaInExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formulaInExpression_2E_weak ("formulaInExpression.weak",
                                                                                & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formulaInExpression_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_existInExpression::classDescriptor (void) const {
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
//     @existInExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_existInExpression ("existInExpression",
                                                                      & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_existInExpression::staticTypeDescriptor (void) const {
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

GGS_existInExpression GGS_existInExpression_2E_weak::unwrappedValue (void) const {
  GGS_existInExpression result ;
  if (isValid ()) {
    const cPtr_existInExpression * p = (cPtr_existInExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_existInExpression (p) ;
    }
  }
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
//     @existInExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_existInExpression_2E_weak ("existInExpression.weak",
                                                                              & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_existInExpression_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_forAllInExpression::classDescriptor (void) const {
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
//     @forAllInExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forAllInExpression ("forAllInExpression",
                                                                       & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forAllInExpression::staticTypeDescriptor (void) const {
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

GGS_forAllInExpression GGS_forAllInExpression_2E_weak::unwrappedValue (void) const {
  GGS_forAllInExpression result ;
  if (isValid ()) {
    const cPtr_forAllInExpression * p = (cPtr_forAllInExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_forAllInExpression (p) ;
    }
  }
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
//     @forAllInExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forAllInExpression_2E_weak ("forAllInExpression.weak",
                                                                               & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forAllInExpression_2E_weak::staticTypeDescriptor (void) const {
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
//     @comparison generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparison ("comparison",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_comparison::staticTypeDescriptor (void) const {
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

GGS_comparisonWithConstantInExpression GGS_comparisonWithConstantInExpression_2E_weak::unwrappedValue (void) const {
  GGS_comparisonWithConstantInExpression result ;
  if (isValid ()) {
    const cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_comparisonWithConstantInExpression (p) ;
    }
  }
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
//     @comparisonWithConstantInExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonWithConstantInExpression_2E_weak ("comparisonWithConstantInExpression.weak",
                                                                                               & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_comparisonWithConstantInExpression_2E_weak::staticTypeDescriptor (void) const {
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

GGS_variableComparisonInExpression GGS_variableComparisonInExpression_2E_weak::unwrappedValue (void) const {
  GGS_variableComparisonInExpression result ;
  if (isValid ()) {
    const cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) ptr () ;
    if (nullptr != p) {
      result = GGS_variableComparisonInExpression (p) ;
    }
  }
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
//     @variableComparisonInExpression.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_variableComparisonInExpression_2E_weak ("variableComparisonInExpression.weak",
                                                                                           & kTypeDescriptor_GALGAS_expression_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_variableComparisonInExpression_2E_weak::staticTypeDescriptor (void) const {
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

GGS_dumpFormula GGS_dumpFormula_2E_weak::unwrappedValue (void) const {
  GGS_dumpFormula result ;
  if (isValid ()) {
    const cPtr_dumpFormula * p = (cPtr_dumpFormula *) ptr () ;
    if (nullptr != p) {
      result = GGS_dumpFormula (p) ;
    }
  }
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
//     @dumpFormula.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dumpFormula_2E_weak ("dumpFormula.weak",
                                                                        & kTypeDescriptor_GALGAS_abstractFormula_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dumpFormula_2E_weak::staticTypeDescriptor (void) const {
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
//     @bddType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bddType ("bddType",
                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bddType::staticTypeDescriptor (void) const {
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
//     @domainDeclarationType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_domainDeclarationType ("domainDeclarationType",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_domainDeclarationType::staticTypeDescriptor (void) const {
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
//  Map type @recordDomainMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap::GGS_recordDomainMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap::~ GGS_recordDomainMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap::GGS_recordDomainMap (const GGS_recordDomainMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap & GGS_recordDomainMap::operator = (const GGS_recordDomainMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap GGS_recordDomainMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_recordDomainMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_recordDomainMap::getter_hasKey (const GGS_string & inKey
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_recordDomainMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                    const GGS_uint & inLevel
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_recordDomainMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_recordDomainMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_recordDomainMap::getter_locationForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_recordDomainMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_recordDomainMap::getter_keyList (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_recordDomainMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_recordDomainMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap::performInsert (const GGS_recordDomainMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_recordDomainMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_recordDomainMap_2E_element>
GGS_recordDomainMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_recordDomainMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_recordDomainMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_recordDomainMap_2E_element>>
GGS_recordDomainMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_recordDomainMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_recordDomainMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap_2E_element_3F_ GGS_recordDomainMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_recordDomainMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_recordDomainMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_recordDomainMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_recordDomainMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mIndex = info->mProperty_mIndex ;
      element.mProperty_mBitCount = info->mProperty_mBitCount ;
      element.mProperty_mSubDomain = info->mProperty_mSubDomain ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap GGS_recordDomainMap::class_func_mapWithMapToOverride (const GGS_recordDomainMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_recordDomainMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_recordDomainMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap GGS_recordDomainMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_recordDomainMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap::setter_insertKey (GGS_lstring inLKey,
                                            GGS_uint inArgument0,
                                            GGS_uint inArgument1,
                                            GGS_recordDomainMap inArgument2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_recordDomainMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' field is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap::method_searchKey (GGS_lstring inLKey,
                                            GGS_uint & outArgument0,
                                            GGS_uint & outArgument1,
                                            GGS_recordDomainMap & outArgument2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_recordDomainMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' field" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mIndex ;
    outArgument1 = info->mProperty_mBitCount ;
    outArgument2 = info->mProperty_mSubDomain ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_recordDomainMap::getter_mIndexForKey (const GGS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_recordDomainMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_recordDomainMap::getter_mBitCountForKey (const GGS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_recordDomainMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mBitCount ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap GGS_recordDomainMap::getter_mSubDomainForKey (const GGS_string & inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_recordDomainMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_recordDomainMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSubDomain ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap::setter_setMIndexForKey (GGS_uint inValue,
                                                  GGS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_recordDomainMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap::setter_setMBitCountForKey (GGS_uint inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_recordDomainMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mBitCount = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap::setter_setMSubDomainForKey (GGS_recordDomainMap inValue,
                                                      GGS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_recordDomainMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSubDomain = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_recordDomainMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_recordDomainMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mIndex.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mBitCount:") ;
    inArray (i COMMA_HERE)->mProperty_mBitCount.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mSubDomain:") ;
    inArray (i COMMA_HERE)->mProperty_mSubDomain.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_recordDomainMap_2E_element>> array = sortedInfoArray () ;
    GGS_recordDomainMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_recordDomainMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_recordDomainMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @recordDomainMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_recordDomainMap::DownEnumerator_recordDomainMap (const GGS_recordDomainMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap_2E_element DownEnumerator_recordDomainMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_recordDomainMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_recordDomainMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_recordDomainMap::current_mBitCount (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap DownEnumerator_recordDomainMap::current_mSubDomain (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSubDomain ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @recordDomainMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_recordDomainMap::UpEnumerator_recordDomainMap (const GGS_recordDomainMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap_2E_element UpEnumerator_recordDomainMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_recordDomainMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_recordDomainMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_recordDomainMap::current_mBitCount (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap UpEnumerator_recordDomainMap::current_mSubDomain (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSubDomain ;
}


//--------------------------------------------------------------------------------------------------
//     @recordDomainMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_recordDomainMap ("recordDomainMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_recordDomainMap::staticTypeDescriptor (void) const {
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
//  Map type @domainMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_domainMap::GGS_domainMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap::~ GGS_domainMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap::GGS_domainMap (const GGS_domainMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap & GGS_domainMap::operator = (const GGS_domainMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap GGS_domainMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_domainMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_domainMap::getter_hasKey (const GGS_string & inKey
                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_domainMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                              const GGS_uint & inLevel
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_domainMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_domainMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_domainMap::getter_locationForKey (const GGS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_domainMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_domainMap::getter_keyList (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_domainMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_domainMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainMap::performInsert (const GGS_domainMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_domainMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_domainMap_2E_element>
GGS_domainMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_domainMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_domainMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_domainMap_2E_element>>
GGS_domainMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_domainMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_domainMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap_2E_element_3F_ GGS_domainMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_domainMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_domainMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_domainMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_domainMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mBitCount = info->mProperty_mBitCount ;
      element.mProperty_mRecordMap = info->mProperty_mRecordMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap GGS_domainMap::class_func_mapWithMapToOverride (const GGS_domainMap & inMapToOverride
                                                              COMMA_LOCATION_ARGS) {
  GGS_domainMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_domainMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap GGS_domainMap::getter_overriddenMap (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_domainMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainMap::setter_insertKey (GGS_lstring inLKey,
                                      GGS_uint inArgument0,
                                      GGS_recordDomainMap inArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  const GGS_domainMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' domain is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainMap::method_searchKey (GGS_lstring inLKey,
                                      GGS_uint & outArgument0,
                                      GGS_recordDomainMap & outArgument1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_domainMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' domain" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mBitCount ;
    outArgument1 = info->mProperty_mRecordMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_domainMap::getter_mBitCountForKey (const GGS_string & inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_domainMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mBitCount ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap GGS_domainMap::getter_mRecordMapForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_recordDomainMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_domainMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRecordMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_domainMap::setter_setMBitCountForKey (GGS_uint inValue,
                                               GGS_string inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_domainMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mBitCount = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_domainMap::setter_setMRecordMapForKey (GGS_recordDomainMap inValue,
                                                GGS_string inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_domainMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRecordMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_domainMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_domainMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mBitCount:") ;
    inArray (i COMMA_HERE)->mProperty_mBitCount.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mRecordMap:") ;
    inArray (i COMMA_HERE)->mProperty_mRecordMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_domainMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_domainMap_2E_element>> array = sortedInfoArray () ;
    GGS_domainMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_domainMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_domainMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @domainMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_domainMap::DownEnumerator_domainMap (const GGS_domainMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap_2E_element DownEnumerator_domainMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_domainMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_domainMap::current_mBitCount (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap DownEnumerator_domainMap::current_mRecordMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRecordMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @domainMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_domainMap::UpEnumerator_domainMap (const GGS_domainMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap_2E_element UpEnumerator_domainMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_domainMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_domainMap::current_mBitCount (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap UpEnumerator_domainMap::current_mRecordMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRecordMap ;
}


//--------------------------------------------------------------------------------------------------
//     @domainMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_domainMap ("domainMap",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_domainMap::staticTypeDescriptor (void) const {
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
  outArgument_outDomainMap = GGS_domainMap::init (inCompiler COMMA_HERE) ;
  const GGS_domainDeclarationList temp_0 = inObject ;
  UpEnumerator_domainDeclarationList enumerator_3988 (temp_0) ;
  bool bool_1 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("domain.ggs", 123)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_3988.hasCurrentObject () && bool_1) {
    while (enumerator_3988.hasCurrentObject () && bool_1) {
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
              outArgument_outDomainMap.setter_insertKey (enumerator_3988.current_mDomainName (HERE), GGS_uint (uint32_t (1U)), GGS_recordDomainMap::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 128)) ;
              }
            }
            break ;
          case GGS_bddType::Enumeration::enum_boolArray:
            {
              GGS_uint extractedValue_4213_size_0 ;
              extractedValue_4093_type_0.getAssociatedValuesFor_boolArray (extractedValue_4213_size_0) ;
              {
              outArgument_outDomainMap.setter_insertKey (enumerator_3988.current_mDomainName (HERE), extractedValue_4213_size_0, GGS_recordDomainMap::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 130)) ;
              }
            }
            break ;
          case GGS_bddType::Enumeration::enum_namedType:
            {
              GGS_lstring extractedValue_4303_typeName_0 ;
              extractedValue_4093_type_0.getAssociatedValuesFor_namedType (extractedValue_4303_typeName_0) ;
              GGS_uint var_size_4363 ;
              GGS_recordDomainMap var_subdomain_4374 ;
              outArgument_outDomainMap.method_searchKey (extractedValue_4303_typeName_0, var_size_4363, var_subdomain_4374, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 132)) ;
              {
              outArgument_outDomainMap.setter_insertKey (enumerator_3988.current_mDomainName (HERE), var_size_4363, var_subdomain_4374, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 133)) ;
              }
            }
            break ;
          }
        }
        break ;
      case GGS_domainDeclarationType::Enumeration::enum_record:
        {
          GGS_domainFieldList extractedValue_4488_fieldList_0 ;
          enumerator_3988.current_mType (HERE).getAssociatedValuesFor_record (extractedValue_4488_fieldList_0) ;
          GGS_bigint var_bitIndex_4511 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("domain.ggs", 136)) ;
          GGS_recordDomainMap var_recordMap_4551 = GGS_recordDomainMap::init (inCompiler COMMA_HERE) ;
          DownEnumerator_domainFieldList enumerator_4585 (extractedValue_4488_fieldList_0) ;
          bool bool_2 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("domain.ggs", 138)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
          if (enumerator_4585.hasCurrentObject () && bool_2) {
            while (enumerator_4585.hasCurrentObject () && bool_2) {
              switch (enumerator_4585.current_mType (HERE).enumValue ()) {
              case GGS_bddType::Enumeration::invalid:
                break ;
              case GGS_bddType::Enumeration::enum_bool:
                {
                  {
                  var_recordMap_4551.setter_insertKey (enumerator_4585.current_mVarName (HERE), var_bitIndex_4511.getter_uint (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 141)), GGS_uint (uint32_t (1U)), GGS_recordDomainMap::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 141)) ;
                  }
                  var_bitIndex_4511.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("domain.ggs", 142)), inCompiler  COMMA_SOURCE_FILE ("domain.ggs", 142)) ;
                }
                break ;
              case GGS_bddType::Enumeration::enum_boolArray:
                {
                  GGS_uint extractedValue_4807_size_0 ;
                  enumerator_4585.current_mType (HERE).getAssociatedValuesFor_boolArray (extractedValue_4807_size_0) ;
                  {
                  var_recordMap_4551.setter_insertKey (enumerator_4585.current_mVarName (HERE), var_bitIndex_4511.getter_uint (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 144)), extractedValue_4807_size_0, GGS_recordDomainMap::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 144)) ;
                  }
                  var_bitIndex_4511 = var_bitIndex_4511.add_operation (extractedValue_4807_size_0.getter_bigint (SOURCE_FILE ("domain.ggs", 145)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 145)) ;
                }
                break ;
              case GGS_bddType::Enumeration::enum_namedType:
                {
                  GGS_lstring extractedValue_4946_typeName_0 ;
                  enumerator_4585.current_mType (HERE).getAssociatedValuesFor_namedType (extractedValue_4946_typeName_0) ;
                  GGS_uint var_size_5008 ;
                  GGS_recordDomainMap var_subdomain_5019 ;
                  outArgument_outDomainMap.method_searchKey (extractedValue_4946_typeName_0, var_size_5008, var_subdomain_5019, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 147)) ;
                  {
                  var_recordMap_4551.setter_insertKey (enumerator_4585.current_mVarName (HERE), var_bitIndex_4511.getter_uint (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 148)), var_size_5008, var_subdomain_5019, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 148)) ;
                  }
                  var_bitIndex_4511 = var_bitIndex_4511.add_operation (var_size_5008.getter_bigint (SOURCE_FILE ("domain.ggs", 149)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 149)) ;
                }
                break ;
              }
              enumerator_4585.gotoNextObject () ;
              if (enumerator_4585.hasCurrentObject ()) {
                bool_2 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("domain.ggs", 138)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
              }
            }
          }
          {
          outArgument_outDomainMap.setter_insertKey (enumerator_3988.current_mDomainName (HERE), var_bitIndex_4511.getter_uint (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 152)), var_recordMap_4551, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 152)) ;
          }
        }
        break ;
      }
      enumerator_3988.gotoNextObject () ;
      if (enumerator_3988.hasCurrentObject ()) {
        bool_1 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("domain.ggs", 123)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//  Map type @varMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_varMap::GGS_varMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_varMap::~ GGS_varMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_varMap::GGS_varMap (const GGS_varMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_varMap & GGS_varMap::operator = (const GGS_varMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_varMap GGS_varMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_varMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_varMap::getter_hasKey (const GGS_string & inKey
                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_varMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                           const GGS_uint & inLevel
                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_varMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_varMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_varMap::getter_locationForKey (const GGS_string & inKey,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_varMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_varMap::getter_keyList (Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_varMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_varMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varMap::performInsert (const GGS_varMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_varMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_varMap_2E_element>
GGS_varMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_varMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_varMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_varMap_2E_element>>
GGS_varMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_varMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_varMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_varMap_2E_element_3F_ GGS_varMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_varMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_varMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_varMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_varMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mIndex = info->mProperty_mIndex ;
      element.mProperty_mBitCount = info->mProperty_mBitCount ;
      element.mProperty_mRecordDomainMap = info->mProperty_mRecordDomainMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varMap GGS_varMap::class_func_mapWithMapToOverride (const GGS_varMap & inMapToOverride
                                                        COMMA_LOCATION_ARGS) {
  GGS_varMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_varMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varMap GGS_varMap::getter_overriddenMap (Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  GGS_varMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varMap::setter_insertKey (GGS_lstring inLKey,
                                   GGS_uint inArgument0,
                                   GGS_uint inArgument1,
                                   GGS_recordDomainMap inArgument2,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  const GGS_varMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' variable is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varMap::method_searchKey (GGS_lstring inLKey,
                                   GGS_uint & outArgument0,
                                   GGS_uint & outArgument1,
                                   GGS_recordDomainMap & outArgument2,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_varMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' variable" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mIndex ;
    outArgument1 = info->mProperty_mBitCount ;
    outArgument2 = info->mProperty_mRecordDomainMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_varMap::getter_mIndexForKey (const GGS_string & inKey,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_varMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_varMap::getter_mBitCountForKey (const GGS_string & inKey,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_varMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mBitCount ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap GGS_varMap::getter_mRecordDomainMapForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_recordDomainMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_varMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mRecordDomainMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_varMap::setter_setMIndexForKey (GGS_uint inValue,
                                         GGS_string inKey,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_varMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_varMap::setter_setMBitCountForKey (GGS_uint inValue,
                                            GGS_string inKey,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_varMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mBitCount = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_varMap::setter_setMRecordDomainMapForKey (GGS_recordDomainMap inValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_varMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mRecordDomainMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_varMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_varMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mIndex.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mBitCount:") ;
    inArray (i COMMA_HERE)->mProperty_mBitCount.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mRecordDomainMap:") ;
    inArray (i COMMA_HERE)->mProperty_mRecordDomainMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_varMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_varMap_2E_element>> array = sortedInfoArray () ;
    GGS_varMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_varMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_varMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @varMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_varMap::DownEnumerator_varMap (const GGS_varMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_varMap_2E_element DownEnumerator_varMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_varMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_varMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_varMap::current_mBitCount (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap DownEnumerator_varMap::current_mRecordDomainMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRecordDomainMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @varMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_varMap::UpEnumerator_varMap (const GGS_varMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_varMap_2E_element UpEnumerator_varMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_varMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_varMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_varMap::current_mBitCount (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBitCount ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap UpEnumerator_varMap::current_mRecordDomainMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mRecordDomainMap ;
}


//--------------------------------------------------------------------------------------------------
//     @varMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varMap ("varMap",
                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varMap::staticTypeDescriptor (void) const {
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
  DownEnumerator_domainFieldList enumerator_6320 (temp_0) ;
  while (enumerator_6320.hasCurrentObject ()) {
    switch (enumerator_6320.current_mType (HERE).enumValue ()) {
    case GGS_bddType::Enumeration::invalid:
      break ;
    case GGS_bddType::Enumeration::enum_bool:
      {
        {
        ioArgument_ioVarMap.setter_insertKey (enumerator_6320.current_mVarName (HERE), ioArgument_ioTotalBitCount, GGS_uint (uint32_t (1U)), GGS_recordDomainMap::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 189)) ;
        }
        {
        ioArgument_ioVarList.setter_insertAtIndex (enumerator_6320.current_mVarName (HERE).readProperty_string (), ioArgument_ioTotalBitCount, GGS_uint (uint32_t (1U)), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 190)) ;
        }
        ioArgument_ioTotalBitCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("domain.ggs", 191)) ;
      }
      break ;
    case GGS_bddType::Enumeration::enum_boolArray:
      {
        GGS_uint extractedValue_6552_size_0 ;
        enumerator_6320.current_mType (HERE).getAssociatedValuesFor_boolArray (extractedValue_6552_size_0) ;
        {
        ioArgument_ioVarMap.setter_insertKey (enumerator_6320.current_mVarName (HERE), ioArgument_ioTotalBitCount, extractedValue_6552_size_0, GGS_recordDomainMap::init (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 193)) ;
        }
        {
        ioArgument_ioVarList.setter_insertAtIndex (enumerator_6320.current_mVarName (HERE).readProperty_string (), ioArgument_ioTotalBitCount, extractedValue_6552_size_0, GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 194)) ;
        }
        ioArgument_ioTotalBitCount = ioArgument_ioTotalBitCount.add_operation (extractedValue_6552_size_0, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 195)) ;
      }
      break ;
    case GGS_bddType::Enumeration::enum_namedType:
      {
        GGS_lstring extractedValue_6772_typeName_0 ;
        enumerator_6320.current_mType (HERE).getAssociatedValuesFor_namedType (extractedValue_6772_typeName_0) ;
        GGS_uint var_size_6829 ;
        GGS_recordDomainMap var_subDomainMap_6840 ;
        constinArgument_inDomainMap.method_searchKey (extractedValue_6772_typeName_0, var_size_6829, var_subDomainMap_6840, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 197)) ;
        {
        ioArgument_ioVarMap.setter_insertKey (enumerator_6320.current_mVarName (HERE), ioArgument_ioTotalBitCount, var_size_6829, var_subDomainMap_6840, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 198)) ;
        }
        {
        ioArgument_ioVarList.setter_insertAtIndex (enumerator_6320.current_mVarName (HERE).readProperty_string (), ioArgument_ioTotalBitCount, var_size_6829, GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 199)) ;
        }
        ioArgument_ioTotalBitCount = ioArgument_ioTotalBitCount.add_operation (var_size_6829, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 200)) ;
      }
      break ;
    }
    enumerator_6320.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "utf32.h"
#include "scanner_actions.h"
#include "LexiqueIntrospection.h"

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
  utf32 ('!'),
} ;

//--- Unicode string for '$!=$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__21__3D_ = {
  utf32 ('!'),
  utf32 ('='),
} ;

//--- Unicode string for '$&$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__26_ = {
  utf32 ('&'),
} ;

//--- Unicode string for '$($'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__28_ = {
  utf32 ('('),
} ;

//--- Unicode string for '$)$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__29_ = {
  utf32 (')'),
} ;

//--- Unicode string for '$+=$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__2B__3D_ = {
  utf32 ('+'),
  utf32 ('='),
} ;

//--- Unicode string for '$,$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__2C_ = {
  utf32 (','),
} ;

//--- Unicode string for '$-=$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__2D__3D_ = {
  utf32 ('-'),
  utf32 ('='),
} ;

//--- Unicode string for '$->$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__2D__3E_ = {
  utf32 ('-'),
  utf32 ('>'),
} ;

//--- Unicode string for '$.$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__2E_ = {
  utf32 ('.'),
} ;

//--- Unicode string for '$..$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__2E__2E_ = {
  utf32 ('.'),
  utf32 ('.'),
} ;

//--- Unicode string for '$:$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__3A_ = {
  utf32 (':'),
} ;

//--- Unicode string for '$:=$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__3A__3D_ = {
  utf32 (':'),
  utf32 ('='),
} ;

//--- Unicode string for '$;$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__3B_ = {
  utf32 (';'),
} ;

//--- Unicode string for '$<$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__3C_ = {
  utf32 ('<'),
} ;

//--- Unicode string for '$<=$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__3C__3D_ = {
  utf32 ('<'),
  utf32 ('='),
} ;

//--- Unicode string for '$=$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__3D_ = {
  utf32 ('='),
} ;

//--- Unicode string for '$>$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__3E_ = {
  utf32 ('>'),
} ;

//--- Unicode string for '$>=$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__3E__3D_ = {
  utf32 ('>'),
  utf32 ('='),
} ;

//--- Unicode string for '$?$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__3F_ = {
  utf32 ('\?'),
} ;

//--- Unicode string for '$[$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__5B_ = {
  utf32 ('['),
} ;

//--- Unicode string for '$]$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__5D_ = {
  utf32 (']'),
} ;

//--- Unicode string for '$^$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__5E_ = {
  utf32 ('^'),
} ;

//--- Unicode string for '$andCacheMapSize$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique_andCacheMapSize = {
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('d'),
  utf32 ('C'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('h'),
  utf32 ('e'),
  utf32 ('M'),
  utf32 ('a'),
  utf32 ('p'),
  utf32 ('S'),
  utf32 ('i'),
  utf32 ('z'),
  utf32 ('e'),
} ;

//--- Unicode string for '$bool$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique_bool = {
  utf32 ('b'),
  utf32 ('o'),
  utf32 ('o'),
  utf32 ('l'),
} ;

//--- Unicode string for '$display$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique_display = {
  utf32 ('d'),
  utf32 ('i'),
  utf32 ('s'),
  utf32 ('p'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('y'),
} ;

//--- Unicode string for '$domain$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique_domain = {
  utf32 ('d'),
  utf32 ('o'),
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('i'),
  utf32 ('n'),
} ;

//--- Unicode string for '$dump$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique_dump = {
  utf32 ('d'),
  utf32 ('u'),
  utf32 ('m'),
  utf32 ('p'),
} ;

//--- Unicode string for '$false$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique_false = {
  utf32 ('f'),
  utf32 ('a'),
  utf32 ('l'),
  utf32 ('s'),
  utf32 ('e'),
} ;

//--- Unicode string for '$graphviz$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique_graphviz = {
  utf32 ('g'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('p'),
  utf32 ('h'),
  utf32 ('v'),
  utf32 ('i'),
  utf32 ('z'),
} ;

//--- Unicode string for '$include$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique_include = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('c'),
  utf32 ('l'),
  utf32 ('u'),
  utf32 ('d'),
  utf32 ('e'),
} ;

//--- Unicode string for '$nodeHashMapSize$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique_nodeHashMapSize = {
  utf32 ('n'),
  utf32 ('o'),
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('H'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('h'),
  utf32 ('M'),
  utf32 ('a'),
  utf32 ('p'),
  utf32 ('S'),
  utf32 ('i'),
  utf32 ('z'),
  utf32 ('e'),
} ;

//--- Unicode string for '$true$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique_true = {
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('u'),
  utf32 ('e'),
} ;

//--- Unicode string for '${$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__7B_ = {
  utf32 ('{'),
} ;

//--- Unicode string for '$|$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__7C_ = {
  utf32 ('|'),
} ;

//--- Unicode string for '$}$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__7D_ = {
  utf32 ('}'),
} ;

//--- Unicode string for '$~$'
static const std::initializer_list <utf32> kUnicodeString_kerbdd_5F_lexique__7E_ = {
  utf32 ('~'),
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
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("identifier") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_integer:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("integer") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken_literal_5F_string:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("literal_string") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("comment") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_nodeHashMapSize:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("nodeHashMapSize") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_andCacheMapSize:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("andCacheMapSize") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_domain:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("domain") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_bool:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("bool") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_true:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("true") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_false:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("false") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_display:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("display") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_include:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("include") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_graphviz:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("graphviz") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_dump:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("dump") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__28_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("(") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__29_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (")") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("[") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("]") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("{") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("}") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3A__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (":=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (":") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (".") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2E__2E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("..") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2B__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("+=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("-=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("->") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("|") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("^") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("~") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (",") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3F_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("\?") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (";") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (">") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3E__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (">=") ;
      s.appendChar (utf32 ('$')) ;
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
    if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z'))) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
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
    }else if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
      ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
      do {
        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else if (testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      ::scanner_routine_convertDecimalStringIntoUInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_kerbdd_5F_lexique_decimalNumberTooLarge, gLexicalMessage_kerbdd_5F_lexique_internalError) ;
      token.mTokenCode = kToken_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('\"'))) {
      do {
        if (testForInputUTF32Char (utf32 (' ')) || testForInputUTF32Char (utf32 ('!')) || testForInputUTF32CharRange (utf32 ('#'), utf32 (65533))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (utf32 ('\"'))) {
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
    }else if (testForInputUTF32Char (utf32 ('#'))) {
      do {
        if (testForInputUTF32CharRange (utf32 (1), utf32 ('\t')) || testForInputUTF32Char (utf32 ('\v')) || testForInputUTF32Char (utf32 ('\f')) || testForInputUTF32CharRange (utf32 (14), utf32 (65533))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      enterDroppedTerminal (kToken_comment) ;
    }else if (testForInputUTF32CharRange (utf32 (1), utf32 (' '))) {
    }else if (testForInputUTF32Char (utf32 ('\0'))) { // End of source text ? 
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
  while ((token.mTokenCode < 0) && (mCurrentChar.u32 () != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (mCurrentChar.u32 () == '\0') {
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
  GGS_stringlist result = GGS_stringlist::init (nullptr COMMA_THERE) ;
  result.addAssignOperation (GGS_string ("identifier") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("integer") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("literal_string") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("comment") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("nodeHashMapSize") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("andCacheMapSize") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("domain") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bool") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("true") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("false") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("display") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("include") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("graphviz") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("dump") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("(") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (")") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("[") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("]") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("{") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("}") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (":=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (":") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (".") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("..") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("+=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("-=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("->") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("|") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("^") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("~") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (",") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("\?") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (";") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">=") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_kerbdd_5F_lexique (GenericUniqueArray <String> & ioList) {
  ioList.appendObject ("kerbdd_lexique:delimitorsList") ;
  ioList.appendObject ("kerbdd_lexique:keyWordList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_kerbdd_5F_lexique (const String & inIdentifier,
                                                        bool & ioFound,
                                                        GenericUniqueArray <String> & ioList) {
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

static LexiqueIntrospection lexiqueIntrospection_kerbdd_5F_lexique
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

GGS_formulaKind_2E_fixedPoint::GGS_formulaKind_2E_fixedPoint (void) :
mProperty_startValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaKind_2E_fixedPoint::GGS_formulaKind_2E_fixedPoint (const GGS_formulaKind_2E_fixedPoint & inSource) :
mProperty_startValue (inSource.mProperty_startValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaKind_2E_fixedPoint & GGS_formulaKind_2E_fixedPoint::operator = (const GGS_formulaKind_2E_fixedPoint & inSource) {
  mProperty_startValue = inSource.mProperty_startValue ;
  return *this ;
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
//     @formulaKind.fixedPoint generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formulaKind_2E_fixedPoint ("formulaKind.fixedPoint",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formulaKind_2E_fixedPoint::staticTypeDescriptor (void) const {
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
//Optional @formulaKind_2E_fixedPoint_3F_
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
//     @formulaKind.fixedPoint? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formulaKind_2E_fixedPoint_3F_ ("formulaKind.fixedPoint?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formulaKind_2E_fixedPoint_3F_::staticTypeDescriptor (void) const {
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

GGS_formulaList_2E_element::GGS_formulaList_2E_element (const GGS_formulaList_2E_element & inSource) :
mProperty_mFormula (inSource.mProperty_mFormula) {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaList_2E_element & GGS_formulaList_2E_element::operator = (const GGS_formulaList_2E_element & inSource) {
  mProperty_mFormula = inSource.mProperty_mFormula ;
  return *this ;
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
//     @formulaList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formulaList_2E_element ("formulaList.element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formulaList_2E_element::staticTypeDescriptor (void) const {
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

GGS_bddType_2E_boolArray::GGS_bddType_2E_boolArray (void) :
mProperty_size () {
}

//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_boolArray::GGS_bddType_2E_boolArray (const GGS_bddType_2E_boolArray & inSource) :
mProperty_size (inSource.mProperty_size) {
}

//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_boolArray & GGS_bddType_2E_boolArray::operator = (const GGS_bddType_2E_boolArray & inSource) {
  mProperty_size = inSource.mProperty_size ;
  return *this ;
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
//     @bddType.boolArray generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bddType_2E_boolArray ("bddType.boolArray",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bddType_2E_boolArray::staticTypeDescriptor (void) const {
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
//Optional @bddType_2E_boolArray_3F_
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
//     @bddType.boolArray? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bddType_2E_boolArray_3F_ ("bddType.boolArray?",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bddType_2E_boolArray_3F_::staticTypeDescriptor (void) const {
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

GGS_domainDeclarationType_2E_type::GGS_domainDeclarationType_2E_type (const GGS_domainDeclarationType_2E_type & inSource) :
mProperty_type (inSource.mProperty_type) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_type & GGS_domainDeclarationType_2E_type::operator = (const GGS_domainDeclarationType_2E_type & inSource) {
  mProperty_type = inSource.mProperty_type ;
  return *this ;
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
//     @domainDeclarationType.type generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_domainDeclarationType_2E_type ("domainDeclarationType.type",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_domainDeclarationType_2E_type::staticTypeDescriptor (void) const {
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
//Optional @domainDeclarationType_2E_type_3F_
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
//     @domainDeclarationType.type? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_domainDeclarationType_2E_type_3F_ ("domainDeclarationType.type?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_domainDeclarationType_2E_type_3F_::staticTypeDescriptor (void) const {
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

GGS_domainDeclarationType_2E_record::GGS_domainDeclarationType_2E_record (const GGS_domainDeclarationType_2E_record & inSource) :
mProperty_fieldList (inSource.mProperty_fieldList) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationType_2E_record & GGS_domainDeclarationType_2E_record::operator = (const GGS_domainDeclarationType_2E_record & inSource) {
  mProperty_fieldList = inSource.mProperty_fieldList ;
  return *this ;
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
//     @domainDeclarationType.record generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_domainDeclarationType_2E_record ("domainDeclarationType.record",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_domainDeclarationType_2E_record::staticTypeDescriptor (void) const {
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
//Optional @domainDeclarationType_2E_record_3F_
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
//     @domainDeclarationType.record? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_domainDeclarationType_2E_record_3F_ ("domainDeclarationType.record?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_domainDeclarationType_2E_record_3F_::staticTypeDescriptor (void) const {
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

GGS_varList_2E_element::GGS_varList_2E_element (const GGS_varList_2E_element & inSource) :
mProperty_mVarName (inSource.mProperty_mVarName),
mProperty_mBitIndex (inSource.mProperty_mBitIndex),
mProperty_mBitCount (inSource.mProperty_mBitCount) {
}

//--------------------------------------------------------------------------------------------------

GGS_varList_2E_element & GGS_varList_2E_element::operator = (const GGS_varList_2E_element & inSource) {
  mProperty_mVarName = inSource.mProperty_mVarName ;
  mProperty_mBitIndex = inSource.mProperty_mBitIndex ;
  mProperty_mBitCount = inSource.mProperty_mBitCount ;
  return *this ;
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
//     @varList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varList_2E_element ("varList.element",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varList_2E_element::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_assignmentFormula::classDescriptor (void) const {
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
//     @assignmentFormula generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentFormula ("assignmentFormula",
                                                                      & kTypeDescriptor_GALGAS_abstractFormula) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignmentFormula::staticTypeDescriptor (void) const {
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

GGS_assignmentFormula GGS_assignmentFormula_2E_weak::unwrappedValue (void) const {
  GGS_assignmentFormula result ;
  if (isValid ()) {
    const cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) ptr () ;
    if (nullptr != p) {
      result = GGS_assignmentFormula (p) ;
    }
  }
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
//     @assignmentFormula.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentFormula_2E_weak ("assignmentFormula.weak",
                                                                              & kTypeDescriptor_GALGAS_abstractFormula_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignmentFormula_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_graphvizFormula::classDescriptor (void) const {
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
//     @graphvizFormula generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphvizFormula ("graphvizFormula",
                                                                    & kTypeDescriptor_GALGAS_abstractFormula) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_graphvizFormula::staticTypeDescriptor (void) const {
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
  GGS_lstring var_formulaName_1228 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-assignment.ggs", 28)) ;
  GGS_domainFieldList var_domainFieldList_1264 ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 30)) ;
  switch (select_kerbdd_5F_syntax_1 (inCompiler)) {
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
  switch (select_kerbdd_5F_syntax_2 (inCompiler)) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i1_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-assignment.ggs", 28)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 30)) ;
  switch (select_kerbdd_5F_syntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_recordFields_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 36)) ;
  switch (select_kerbdd_5F_syntax_2 (inCompiler)) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i1_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-assignment.ggs", 28)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 30)) ;
  switch (select_kerbdd_5F_syntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_recordFields_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 36)) ;
  switch (select_kerbdd_5F_syntax_2 (inCompiler)) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i2_ (GGS_ast & ioArgument_ioAST,
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i2_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("formula-graphviz.ggs", 18)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-graphviz.ggs", 19)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-graphviz.ggs", 20)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i2_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("formula-graphviz.ggs", 18)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-graphviz.ggs", 19)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-graphviz.ggs", 20)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i3_ (GGS_ast & ioArgument_ioAST,
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i3_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize COMMA_SOURCE_FILE ("setting-map.ggs", 24)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("setting-map.ggs", 25)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("setting-map.ggs", 26)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i3_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize COMMA_SOURCE_FILE ("setting-map.ggs", 24)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("setting-map.ggs", 25)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("setting-map.ggs", 26)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i4_ (GGS_ast & ioArgument_ioAST,
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i4_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize COMMA_SOURCE_FILE ("setting-map.ggs", 33)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("setting-map.ggs", 34)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("setting-map.ggs", 35)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i4_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize COMMA_SOURCE_FILE ("setting-map.ggs", 33)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("setting-map.ggs", 34)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("setting-map.ggs", 35)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_expression_i5_ (GGS_expression & outArgument_outExpression,
                                                                     Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_comparison_ (outArgument_outExpression, inCompiler) ;
  switch (select_kerbdd_5F_syntax_3 (inCompiler)) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_expression_i5_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  nt_comparison_parse (inCompiler) ;
  switch (select_kerbdd_5F_syntax_3 (inCompiler)) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_expression_i5_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  nt_comparison_indexing (inCompiler) ;
  switch (select_kerbdd_5F_syntax_3 (inCompiler)) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_comparison_i6_ (GGS_expression & outArgument_outExpression,
                                                                     Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_4 (inCompiler)) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_comparison_i6_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  nt_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_4 (inCompiler)) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_comparison_i6_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  nt_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_4 (inCompiler)) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_term_i7_ (GGS_expression & outArgument_outExpression,
                                                               Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_5 (inCompiler)) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_term_i7_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  nt_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_5 (inCompiler)) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_term_i7_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  nt_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_5 (inCompiler)) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i8_ (GGS_expression & outArgument_outExpression,
                                                                 Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_varName_6250 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 194)) ;
  switch (select_kerbdd_5F_syntax_6 (inCompiler)) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i8_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 194)) ;
  switch (select_kerbdd_5F_syntax_6 (inCompiler)) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i8_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 194)) ;
  switch (select_kerbdd_5F_syntax_6 (inCompiler)) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i9_ (GGS_expression & outArgument_outExpression,
                                                                 Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 207)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 209)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i9_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 207)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 209)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i9_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 207)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 209)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i10_ (GGS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression.ggs", 215)) ;
  GGS_expression var_expression_6786 ;
  nt_factor_ (var_expression_6786, inCompiler) ;
  outArgument_outExpression = GGS_complementExpression::init_21_ (var_expression_6786, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i10_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression.ggs", 215)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i10_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression.ggs", 215)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i11_ (GGS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_true COMMA_SOURCE_FILE ("expression.ggs", 223)) ;
  outArgument_outExpression = GGS_trueExpression::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i11_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_true COMMA_SOURCE_FILE ("expression.ggs", 223)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i11_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_true COMMA_SOURCE_FILE ("expression.ggs", 223)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i12_ (GGS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_false COMMA_SOURCE_FILE ("expression.ggs", 230)) ;
  outArgument_outExpression = GGS_falseExpression::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i12_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_false COMMA_SOURCE_FILE ("expression.ggs", 230)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i12_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_false COMMA_SOURCE_FILE ("expression.ggs", 230)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i13_ (GGS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_formulaName_7411 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 237)) ;
  GGS_formulaParameterListInExpression temp_0 = GGS_formulaParameterListInExpression::init (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 238)) ;
  GGS_formulaParameterListInExpression var_parameterList_7464 = temp_0 ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 239)) ;
  switch (select_kerbdd_5F_syntax_7 (inCompiler)) {
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
        if (select_kerbdd_5F_syntax_9 (inCompiler) == 2) {
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
      if (select_kerbdd_5F_syntax_8 (inCompiler) == 2) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i13_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 237)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 239)) ;
  switch (select_kerbdd_5F_syntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 243)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_kerbdd_5F_syntax_9 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 247)) ;
          inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 248)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      if (select_kerbdd_5F_syntax_8 (inCompiler) == 2) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i13_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 237)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 239)) ;
  switch (select_kerbdd_5F_syntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 243)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        if (select_kerbdd_5F_syntax_9 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 247)) ;
          inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 248)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      if (select_kerbdd_5F_syntax_8 (inCompiler) == 2) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i14_ (GGS_expression & outArgument_outExpression,
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i14_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("expression.ggs", 263)) ;
  nt_recordFields_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 265)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 267)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i14_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("expression.ggs", 263)) ;
  nt_recordFields_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 265)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 267)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i15_ (GGS_expression & outArgument_outExpression,
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i15_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("expression.ggs", 274)) ;
  nt_recordFields_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 276)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 278)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i15_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("expression.ggs", 274)) ;
  nt_recordFields_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 276)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 278)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i16_ (GGS_expression & outArgument_outExpression,
                                                                  Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression.ggs", 284)) ;
  GGS_lstring var_varName_8710 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 285)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 286)) ;
  GGS_lstringlist var_leftFieldNames_8738 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_kerbdd_5F_syntax_10 (inCompiler) == 2) {
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
  switch (select_kerbdd_5F_syntax_11 (inCompiler)) {
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
  switch (select_kerbdd_5F_syntax_12 (inCompiler)) {
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
      if (select_kerbdd_5F_syntax_13 (inCompiler) == 2) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i16_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression.ggs", 284)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 285)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_kerbdd_5F_syntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 289)) ;
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 290)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_kerbdd_5F_syntax_11 (inCompiler)) {
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
  switch (select_kerbdd_5F_syntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression.ggs", 314)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 317)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_kerbdd_5F_syntax_13 (inCompiler) == 2) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i16_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression.ggs", 284)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 285)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_kerbdd_5F_syntax_10 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 289)) ;
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 290)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_kerbdd_5F_syntax_11 (inCompiler)) {
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
  switch (select_kerbdd_5F_syntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression.ggs", 314)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 317)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_kerbdd_5F_syntax_13 (inCompiler) == 2) {
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

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i17_ (GGS_ast & ioArgument_ioAST,
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i17_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_dump COMMA_SOURCE_FILE ("formula-dump.ggs", 18)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-dump.ggs", 19)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-dump.ggs", 20)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i17_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_dump COMMA_SOURCE_FILE ("formula-dump.ggs", 18)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-dump.ggs", 19)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-dump.ggs", 20)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i18_ (GGS_ast & ioArgument_ioAST,
                                                                               Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_domain COMMA_SOURCE_FILE ("domain.ggs", 41)) ;
  GGS_lstring var_domainName_1549 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 42)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("domain.ggs", 43)) ;
  GGS_domainDeclarationType var_domainDeclarationType_1596 ;
  switch (select_kerbdd_5F_syntax_14 (inCompiler)) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i18_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_domain COMMA_SOURCE_FILE ("domain.ggs", 41)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 42)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("domain.ggs", 43)) ;
  switch (select_kerbdd_5F_syntax_14 (inCompiler)) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i18_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_domain COMMA_SOURCE_FILE ("domain.ggs", 41)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 42)) ;
  inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("domain.ggs", 43)) ;
  switch (select_kerbdd_5F_syntax_14 (inCompiler)) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_recordFields_i19_ (GGS_domainFieldList & outArgument_outFormulaArgumentList,
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
    if (select_kerbdd_5F_syntax_15 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("domain.ggs", 68)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_recordFields_i19_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 63)) ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("domain.ggs", 64)) ;
    nt_type_parse (inCompiler) ;
    if (select_kerbdd_5F_syntax_15 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("domain.ggs", 68)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_recordFields_i19_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 63)) ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("domain.ggs", 64)) ;
    nt_type_indexing (inCompiler) ;
    if (select_kerbdd_5F_syntax_15 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("domain.ggs", 68)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_type_i20_ (GGS_bddType & outArgument_outType,
                                                                Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outType.drop () ; // Release 'out' argument
  switch (select_kerbdd_5F_syntax_16 (inCompiler)) {
  case 1: {
    GGS_lstring var_typeName_2438 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 76)) ;
    outArgument_outType = GGS_bddType::class_func_namedType (var_typeName_2438  COMMA_SOURCE_FILE ("domain.ggs", 77)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_bool COMMA_SOURCE_FILE ("domain.ggs", 79)) ;
    switch (select_kerbdd_5F_syntax_17 (inCompiler)) {
    case 1: {
      outArgument_outType = GGS_bddType::class_func_bool (SOURCE_FILE ("domain.ggs", 81)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("domain.ggs", 83)) ;
      GGS_luint var_bitCount_2582 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("domain.ggs", 84)) ;
      inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("domain.ggs", 85)) ;
      GalgasBool test_0 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_0) {
        test_0 = GGS_bool (ComparisonKind::equal, var_bitCount_2582.readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_0) {
          GenericArray <FixItDescription> fixItArray1 ;
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_type_i20_parse (Lexique_kerbdd_5F_lexique * inCompiler) {
  switch (select_kerbdd_5F_syntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 76)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_bool COMMA_SOURCE_FILE ("domain.ggs", 79)) ;
    switch (select_kerbdd_5F_syntax_17 (inCompiler)) {
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

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_type_i20_indexing (Lexique_kerbdd_5F_lexique * inCompiler) {
  switch (select_kerbdd_5F_syntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 76)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_kerbdd_5F_lexique::kToken_bool COMMA_SOURCE_FILE ("domain.ggs", 79)) ;
    switch (select_kerbdd_5F_syntax_17 (inCompiler)) {
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

//--------------------------------------------------------------------------------------------------

GGS_ast::GGS_ast (void) :
mProperty_mDomainList (),
mProperty_mFormulaList () {
}

//--------------------------------------------------------------------------------------------------

GGS_ast::GGS_ast (const GGS_ast & inSource) :
mProperty_mDomainList (inSource.mProperty_mDomainList),
mProperty_mFormulaList (inSource.mProperty_mFormulaList) {
}

//--------------------------------------------------------------------------------------------------

GGS_ast & GGS_ast::operator = (const GGS_ast & inSource) {
  mProperty_mDomainList = inSource.mProperty_mDomainList ;
  mProperty_mFormulaList = inSource.mProperty_mFormulaList ;
  return *this ;
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
//     @ast generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ast ("ast",
                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ast::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_setting_5F_andCacheMapSize::classDescriptor (void) const {
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
//     @setting_andCacheMapSize generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize ("setting_andCacheMapSize",
                                                                               & kTypeDescriptor_GALGAS_abstractFormula) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_setting_5F_andCacheMapSize::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_varInExpression::classDescriptor (void) const {
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
//     @varInExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInExpression ("varInExpression",
                                                                    & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varInExpression::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_varBitInExpression::classDescriptor (void) const {
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
//     @varBitInExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varBitInExpression ("varBitInExpression",
                                                                       & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varBitInExpression::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_formulaInExpression::classDescriptor (void) const {
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
//     @formulaInExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formulaInExpression ("formulaInExpression",
                                                                        & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formulaInExpression::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_comparisonWithConstantInExpression::classDescriptor (void) const {
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
//     @comparisonWithConstantInExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonWithConstantInExpression ("comparisonWithConstantInExpression",
                                                                                       & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_comparisonWithConstantInExpression::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_variableComparisonInExpression::classDescriptor (void) const {
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
//     @variableComparisonInExpression generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_variableComparisonInExpression ("variableComparisonInExpression",
                                                                                   & kTypeDescriptor_GALGAS_expression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_variableComparisonInExpression::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_dumpFormula::classDescriptor (void) const {
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
//     @dumpFormula generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dumpFormula ("dumpFormula",
                                                                & kTypeDescriptor_GALGAS_abstractFormula) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dumpFormula::staticTypeDescriptor (void) const {
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

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (const GGS__32_lstringlist_2E_element & inSource) :
mProperty_mValue_30_ (inSource.mProperty_mValue_30_),
mProperty_mValue_31_ (inSource.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element & GGS__32_lstringlist_2E_element::operator = (const GGS__32_lstringlist_2E_element & inSource) {
  mProperty_mValue_30_ = inSource.mProperty_mValue_30_ ;
  mProperty_mValue_31_ = inSource.mProperty_mValue_31_ ;
  return *this ;
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
//     @2lstringlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ("2lstringlist.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__32_lstringlist_2E_element::staticTypeDescriptor (void) const {
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

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap_2E_element::GGS_computedFormulaMap_2E_element (void) :
mProperty_lkey (),
mProperty_mVarList (),
mProperty_mBitCount (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap_2E_element::GGS_computedFormulaMap_2E_element (const GGS_computedFormulaMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mVarList (inSource.mProperty_mVarList),
mProperty_mBitCount (inSource.mProperty_mBitCount),
mProperty_mValue (inSource.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap_2E_element & GGS_computedFormulaMap_2E_element::operator = (const GGS_computedFormulaMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mVarList = inSource.mProperty_mVarList ;
  mProperty_mBitCount = inSource.mProperty_mBitCount ;
  mProperty_mValue = inSource.mProperty_mValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_computedFormulaMap_2E_element GGS_computedFormulaMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                           const GGS_varList & in_mVarList,
                                                                                           const GGS_uint & in_mBitCount,
                                                                                           const GGS_binaryset & in_mValue,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_computedFormulaMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mVarList = in_mVarList ;
  result.mProperty_mBitCount = in_mBitCount ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap_2E_element::GGS_computedFormulaMap_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_varList & inOperand1,
                                                                      const GGS_uint & inOperand2,
                                                                      const GGS_binaryset & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mVarList (inOperand1),
mProperty_mBitCount (inOperand2),
mProperty_mValue (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_computedFormulaMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mVarList.isValid () && mProperty_mBitCount.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mVarList.drop () ;
  mProperty_mBitCount.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @computedFormulaMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mVarList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @computedFormulaMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedFormulaMap_2E_element ("computedFormulaMap.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computedFormulaMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedFormulaMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedFormulaMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedFormulaMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap_2E_element GGS_computedFormulaMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_computedFormulaMap_2E_element result ;
  const GGS_computedFormulaMap_2E_element * p = (const GGS_computedFormulaMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedFormulaMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedFormulaMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @computedFormulaMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap_2E_element_3F_::GGS_computedFormulaMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap_2E_element_3F_::GGS_computedFormulaMap_2E_element_3F_ (const GGS_computedFormulaMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap_2E_element_3F_ GGS_computedFormulaMap_2E_element_3F_::init_nil (void) {
  GGS_computedFormulaMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_computedFormulaMap_2E_element_3F_::isValid (void) const {
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

bool GGS_computedFormulaMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_computedFormulaMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedFormulaMap_2E_element_3F_::description (String & ioString,
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
//     @computedFormulaMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedFormulaMap_2E_element_3F_ ("computedFormulaMap.element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computedFormulaMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedFormulaMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedFormulaMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedFormulaMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedFormulaMap_2E_element_3F_ GGS_computedFormulaMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_computedFormulaMap_2E_element_3F_ result ;
  const GGS_computedFormulaMap_2E_element_3F_ * p = (const GGS_computedFormulaMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedFormulaMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedFormulaMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression_2E_element::GGS_formulaParameterListInExpression_2E_element (void) :
mProperty_mParameterName (),
mProperty_mFieldNames () {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression_2E_element::GGS_formulaParameterListInExpression_2E_element (const GGS_formulaParameterListInExpression_2E_element & inSource) :
mProperty_mParameterName (inSource.mProperty_mParameterName),
mProperty_mFieldNames (inSource.mProperty_mFieldNames) {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression_2E_element & GGS_formulaParameterListInExpression_2E_element::operator = (const GGS_formulaParameterListInExpression_2E_element & inSource) {
  mProperty_mParameterName = inSource.mProperty_mParameterName ;
  mProperty_mFieldNames = inSource.mProperty_mFieldNames ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_formulaParameterListInExpression_2E_element GGS_formulaParameterListInExpression_2E_element::init_21__21_ (const GGS_lstring & in_mParameterName,
                                                                                                               const GGS_lstringlist & in_mFieldNames,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formulaParameterListInExpression_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterName = in_mParameterName ;
  result.mProperty_mFieldNames = in_mFieldNames ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression_2E_element::GGS_formulaParameterListInExpression_2E_element (const GGS_lstring & inOperand0,
                                                                                                  const GGS_lstringlist & inOperand1) :
mProperty_mParameterName (inOperand0),
mProperty_mFieldNames (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_formulaParameterListInExpression_2E_element::isValid (void) const {
  return mProperty_mParameterName.isValid () && mProperty_mFieldNames.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression_2E_element::drop (void) {
  mProperty_mParameterName.drop () ;
  mProperty_mFieldNames.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formulaParameterListInExpression_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @formulaParameterListInExpression.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mParameterName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFieldNames.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @formulaParameterListInExpression.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formulaParameterListInExpression_2E_element ("formulaParameterListInExpression.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formulaParameterListInExpression_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaParameterListInExpression_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_formulaParameterListInExpression_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_formulaParameterListInExpression_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_formulaParameterListInExpression_2E_element GGS_formulaParameterListInExpression_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_formulaParameterListInExpression_2E_element result ;
  const GGS_formulaParameterListInExpression_2E_element * p = (const GGS_formulaParameterListInExpression_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_formulaParameterListInExpression_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaParameterListInExpression.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_namedType::GGS_bddType_2E_namedType (void) :
mProperty_typeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_namedType::GGS_bddType_2E_namedType (const GGS_bddType_2E_namedType & inSource) :
mProperty_typeName (inSource.mProperty_typeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_namedType & GGS_bddType_2E_namedType::operator = (const GGS_bddType_2E_namedType & inSource) {
  mProperty_typeName = inSource.mProperty_typeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_bddType_2E_namedType GGS_bddType_2E_namedType::init_21_ (const GGS_lstring & in_typeName,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bddType_2E_namedType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeName = in_typeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bddType_2E_namedType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_namedType::GGS_bddType_2E_namedType (const GGS_lstring & inOperand0) :
mProperty_typeName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_bddType_2E_namedType::isValid (void) const {
  return mProperty_typeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bddType_2E_namedType::drop (void) {
  mProperty_typeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bddType_2E_namedType::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @bddType.namedType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_typeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @bddType.namedType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bddType_2E_namedType ("bddType.namedType",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bddType_2E_namedType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bddType_2E_namedType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bddType_2E_namedType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bddType_2E_namedType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_namedType GGS_bddType_2E_namedType::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_bddType_2E_namedType result ;
  const GGS_bddType_2E_namedType * p = (const GGS_bddType_2E_namedType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bddType_2E_namedType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bddType.namedType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @bddType_2E_namedType_3F_
//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_namedType_3F_::GGS_bddType_2E_namedType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_namedType_3F_::GGS_bddType_2E_namedType_3F_ (const GGS_bddType_2E_namedType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_namedType_3F_ GGS_bddType_2E_namedType_3F_::init_nil (void) {
  GGS_bddType_2E_namedType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bddType_2E_namedType_3F_::isValid (void) const {
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

bool GGS_bddType_2E_namedType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bddType_2E_namedType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_bddType_2E_namedType () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bddType_2E_namedType_3F_::description (String & ioString,
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
//     @bddType.namedType? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bddType_2E_namedType_3F_ ("bddType.namedType?",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bddType_2E_namedType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bddType_2E_namedType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bddType_2E_namedType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bddType_2E_namedType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_namedType_3F_ GGS_bddType_2E_namedType_3F_::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_bddType_2E_namedType_3F_ result ;
  const GGS_bddType_2E_namedType_3F_ * p = (const GGS_bddType_2E_namedType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bddType_2E_namedType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bddType.namedType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList_2E_element::GGS_domainFieldList_2E_element (void) :
mProperty_mVarName (),
mProperty_mType () {
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList_2E_element::GGS_domainFieldList_2E_element (const GGS_domainFieldList_2E_element & inSource) :
mProperty_mVarName (inSource.mProperty_mVarName),
mProperty_mType (inSource.mProperty_mType) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList_2E_element & GGS_domainFieldList_2E_element::operator = (const GGS_domainFieldList_2E_element & inSource) {
  mProperty_mVarName = inSource.mProperty_mVarName ;
  mProperty_mType = inSource.mProperty_mType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_domainFieldList_2E_element GGS_domainFieldList_2E_element::init_21__21_ (const GGS_lstring & in_mVarName,
                                                                             const GGS_bddType & in_mType,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_domainFieldList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mVarName = in_mVarName ;
  result.mProperty_mType = in_mType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList_2E_element::GGS_domainFieldList_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_bddType & inOperand1) :
mProperty_mVarName (inOperand0),
mProperty_mType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_domainFieldList_2E_element::isValid (void) const {
  return mProperty_mVarName.isValid () && mProperty_mType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList_2E_element::drop (void) {
  mProperty_mVarName.drop () ;
  mProperty_mType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainFieldList_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @domainFieldList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mVarName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @domainFieldList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_domainFieldList_2E_element ("domainFieldList.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_domainFieldList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainFieldList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_domainFieldList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_domainFieldList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainFieldList_2E_element GGS_domainFieldList_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_domainFieldList_2E_element result ;
  const GGS_domainFieldList_2E_element * p = (const GGS_domainFieldList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_domainFieldList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainFieldList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

