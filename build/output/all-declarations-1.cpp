#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element::GALGAS__32_lstringlist_2D_element (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element::~ GALGAS__32_lstringlist_2D_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS__32_lstringlist_2D_element GALGAS__32_lstringlist_2D_element::init_21__21_ (const GALGAS_lstring & in_mValue_30_,
                                                                                   const GALGAS_lstring & in_mValue_31_,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS__32_lstringlist_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue_30_ ;
  result.mProperty_mValue_31_ = in_mValue_31_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS__32_lstringlist_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
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
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS__32_lstringlist_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue0 ;
  result.mProperty_mValue_31_ = in_mValue1 ;
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
  ioString.appendCString ("<struct @2lstringlist-element:") ;
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

GALGAS_bddType_2D_namedType::GALGAS_bddType_2D_namedType (void) :
mProperty_typeName () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bddType_2D_namedType::~ GALGAS_bddType_2D_namedType (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_bddType_2D_namedType GALGAS_bddType_2D_namedType::init_21_ (const GALGAS_lstring & in_typeName,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bddType_2D_namedType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeName = in_typeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bddType_2D_namedType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bddType_2D_namedType::GALGAS_bddType_2D_namedType (const GALGAS_lstring & inOperand0) :
mProperty_typeName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bddType_2D_namedType GALGAS_bddType_2D_namedType::class_func_new (const GALGAS_lstring & in_typeName,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bddType_2D_namedType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeName = in_typeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_bddType_2D_namedType::isValid (void) const {
  return mProperty_typeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bddType_2D_namedType::drop (void) {
  mProperty_typeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bddType_2D_namedType::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @bddType-namedType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_typeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @bddType-namedType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bddType_2D_namedType ("bddType-namedType",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bddType_2D_namedType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bddType_2D_namedType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bddType_2D_namedType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bddType_2D_namedType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bddType_2D_namedType GALGAS_bddType_2D_namedType::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_bddType_2D_namedType result ;
  const GALGAS_bddType_2D_namedType * p = (const GALGAS_bddType_2D_namedType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bddType_2D_namedType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bddType-namedType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @bddType_2D_namedType_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_bddType_2D_namedType_3F_::GALGAS_bddType_2D_namedType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bddType_2D_namedType_3F_::GALGAS_bddType_2D_namedType_3F_ (const GALGAS_bddType_2D_namedType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_bddType_2D_namedType_3F_ GALGAS_bddType_2D_namedType_3F_::init_nil (void) {
  GALGAS_bddType_2D_namedType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_bddType_2D_namedType_3F_::isValid (void) const {
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

bool GALGAS_bddType_2D_namedType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bddType_2D_namedType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_bddType_2D_namedType () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_bddType_2D_namedType_3F_::description (String & ioString,
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
//     @bddType-namedType? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bddType_2D_namedType_3F_ ("bddType-namedType?",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bddType_2D_namedType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bddType_2D_namedType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bddType_2D_namedType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bddType_2D_namedType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bddType_2D_namedType_3F_ GALGAS_bddType_2D_namedType_3F_::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_bddType_2D_namedType_3F_ result ;
  const GALGAS_bddType_2D_namedType_3F_ * p = (const GALGAS_bddType_2D_namedType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_bddType_2D_namedType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bddType-namedType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_domainFieldList_2D_element GALGAS_domainFieldList_2D_element::init_21__21_ (const GALGAS_lstring & in_mVarName,
                                                                                   const GALGAS_bddType & in_mType,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_domainFieldList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mVarName = in_mVarName ;
  result.mProperty_mType = in_mType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainFieldList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
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
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_domainFieldList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mVarName = in_mVarName ;
  result.mProperty_mType = in_mType ;
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
  ioString.appendCString ("<struct @domainFieldList-element:") ;
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_domainDeclarationList_2D_element GALGAS_domainDeclarationList_2D_element::init_21__21_ (const GALGAS_lstring & in_mDomainName,
                                                                                               const GALGAS_domainDeclarationType & in_mType,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_domainDeclarationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDomainName = in_mDomainName ;
  result.mProperty_mType = in_mType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationList_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
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
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_domainDeclarationList_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDomainName = in_mDomainName ;
  result.mProperty_mType = in_mType ;
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
  ioString.appendCString ("<struct @domainDeclarationList-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDomainName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_recordDomainMap_2D_element GALGAS_recordDomainMap_2D_element::init_21__21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                           const GALGAS_uint & in_mIndex,
                                                                                           const GALGAS_uint & in_mBitCount,
                                                                                           const GALGAS_recordDomainMap & in_mSubDomain,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_recordDomainMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mBitCount = in_mBitCount ;
  result.mProperty_mSubDomain = in_mSubDomain ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_recordDomainMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
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
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_recordDomainMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mBitCount = in_mBitCount ;
  result.mProperty_mSubDomain = in_mSubDomain ;
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
  ioString.appendCString ("<struct @recordDomainMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSubDomain.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
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
//
//Optional @recordDomainMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap_2D_element_3F_::GALGAS_recordDomainMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap_2D_element_3F_::GALGAS_recordDomainMap_2D_element_3F_ (const GALGAS_recordDomainMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap_2D_element_3F_ GALGAS_recordDomainMap_2D_element_3F_::init_nil (void) {
  GALGAS_recordDomainMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_recordDomainMap_2D_element_3F_::isValid (void) const {
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

bool GALGAS_recordDomainMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_recordDomainMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_recordDomainMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_recordDomainMap_2D_element_3F_::description (String & ioString,
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
//     @recordDomainMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_recordDomainMap_2D_element_3F_ ("recordDomainMap-element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_recordDomainMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_recordDomainMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_recordDomainMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_recordDomainMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap_2D_element_3F_ GALGAS_recordDomainMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_recordDomainMap_2D_element_3F_ result ;
  const GALGAS_recordDomainMap_2D_element_3F_ * p = (const GALGAS_recordDomainMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_recordDomainMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("recordDomainMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_domainMap_2D_element GALGAS_domainMap_2D_element::init_21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                           const GALGAS_uint & in_mBitCount,
                                                                           const GALGAS_recordDomainMap & in_mRecordMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_domainMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mBitCount = in_mBitCount ;
  result.mProperty_mRecordMap = in_mRecordMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
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
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_domainMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mBitCount = in_mBitCount ;
  result.mProperty_mRecordMap = in_mRecordMap ;
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
  ioString.appendCString ("<struct @domainMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRecordMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
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
//
//Optional @domainMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_domainMap_2D_element_3F_::GALGAS_domainMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainMap_2D_element_3F_::GALGAS_domainMap_2D_element_3F_ (const GALGAS_domainMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainMap_2D_element_3F_ GALGAS_domainMap_2D_element_3F_::init_nil (void) {
  GALGAS_domainMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_domainMap_2D_element_3F_::isValid (void) const {
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

bool GALGAS_domainMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_domainMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_domainMap_2D_element_3F_::description (String & ioString,
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
//     @domainMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainMap_2D_element_3F_ ("domainMap-element?",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_domainMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_domainMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_domainMap_2D_element_3F_ GALGAS_domainMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_domainMap_2D_element_3F_ result ;
  const GALGAS_domainMap_2D_element_3F_ * p = (const GALGAS_domainMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_domainMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_varMap_2D_element GALGAS_varMap_2D_element::init_21__21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                         const GALGAS_uint & in_mIndex,
                                                                         const GALGAS_uint & in_mBitCount,
                                                                         const GALGAS_recordDomainMap & in_mRecordDomainMap,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_varMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mBitCount = in_mBitCount ;
  result.mProperty_mRecordDomainMap = in_mRecordDomainMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
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
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_varMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mBitCount = in_mBitCount ;
  result.mProperty_mRecordDomainMap = in_mRecordDomainMap ;
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
  ioString.appendCString ("<struct @varMap-element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRecordDomainMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
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
//
//Optional @varMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element_3F_::GALGAS_varMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element_3F_::GALGAS_varMap_2D_element_3F_ (const GALGAS_varMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element_3F_ GALGAS_varMap_2D_element_3F_::init_nil (void) {
  GALGAS_varMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_varMap_2D_element_3F_::isValid (void) const {
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

bool GALGAS_varMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_varMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_varMap_2D_element_3F_::description (String & ioString,
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
//     @varMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varMap_2D_element_3F_ ("varMap-element?",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element_3F_ GALGAS_varMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_varMap_2D_element_3F_ result ;
  const GALGAS_varMap_2D_element_3F_ * p = (const GALGAS_varMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_varMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_computedFormulaMap_2D_element GALGAS_computedFormulaMap_2D_element::init_21__21__21__21_ (const GALGAS_lstring & in_lkey,
                                                                                                 const GALGAS_varList & in_mVarList,
                                                                                                 const GALGAS_uint & in_mBitCount,
                                                                                                 const GALGAS_binaryset & in_mValue,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_computedFormulaMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mVarList = in_mVarList ;
  result.mProperty_mBitCount = in_mBitCount ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedFormulaMap_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
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
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_computedFormulaMap_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mVarList = in_mVarList ;
  result.mProperty_mBitCount = in_mBitCount ;
  result.mProperty_mValue = in_mValue ;
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
  ioString.appendCString ("<struct @computedFormulaMap-element:") ;
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
//
//Optional @computedFormulaMap_2D_element_3F_
//
//--------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap_2D_element_3F_::GALGAS_computedFormulaMap_2D_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap_2D_element_3F_::GALGAS_computedFormulaMap_2D_element_3F_ (const GALGAS_computedFormulaMap_2D_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap_2D_element_3F_ GALGAS_computedFormulaMap_2D_element_3F_::init_nil (void) {
  GALGAS_computedFormulaMap_2D_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_computedFormulaMap_2D_element_3F_::isValid (void) const {
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

bool GALGAS_computedFormulaMap_2D_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedFormulaMap_2D_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GALGAS_computedFormulaMap_2D_element () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedFormulaMap_2D_element_3F_::description (String & ioString,
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
//     @computedFormulaMap-element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedFormulaMap_2D_element_3F_ ("computedFormulaMap-element?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedFormulaMap_2D_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedFormulaMap_2D_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedFormulaMap_2D_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedFormulaMap_2D_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap_2D_element_3F_ GALGAS_computedFormulaMap_2D_element_3F_::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_computedFormulaMap_2D_element_3F_ result ;
  const GALGAS_computedFormulaMap_2D_element_3F_ * p = (const GALGAS_computedFormulaMap_2D_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_computedFormulaMap_2D_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedFormulaMap-element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_formulaParameterListInExpression_2D_element GALGAS_formulaParameterListInExpression_2D_element::init_21__21_ (const GALGAS_lstring & in_mParameterName,
                                                                                                                     const GALGAS_lstringlist & in_mFieldNames,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formulaParameterListInExpression_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterName = in_mParameterName ;
  result.mProperty_mFieldNames = in_mFieldNames ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formulaParameterListInExpression_2D_element::setInitializedProperties (Compiler * /* inCompiler */) {
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
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formulaParameterListInExpression_2D_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterName = in_mParameterName ;
  result.mProperty_mFieldNames = in_mFieldNames ;
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
  ioString.appendCString ("<struct @formulaParameterListInExpression-element:") ;
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

//--------------------------------------------------------------------------------------------------
// @setting_5F_nodeHashMapSize reference class
//--------------------------------------------------------------------------------------------------

cPtr_setting_5F_nodeHashMapSize::cPtr_setting_5F_nodeHashMapSize (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (inCompiler COMMA_THERE),
mProperty_mSetting () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_setting_5F_nodeHashMapSize::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFormula::printNonNullClassInstanceProperties () ;
    mProperty_mSetting.printNonNullClassInstanceProperties ("mSetting") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_setting_5F_nodeHashMapSize::objectCompare (const GALGAS_setting_5F_nodeHashMapSize & inOperand) const {
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

GALGAS_setting_5F_nodeHashMapSize::GALGAS_setting_5F_nodeHashMapSize (void) :
GALGAS_abstractFormula () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize GALGAS_setting_5F_nodeHashMapSize::
init_21_ (const GALGAS_luint & in_mSetting,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_setting_5F_nodeHashMapSize * object = nullptr ;
  macroMyNew (object, cPtr_setting_5F_nodeHashMapSize (inCompiler COMMA_THERE)) ;
  object->setting_5F_nodeHashMapSize_init_21_ (in_mSetting, inCompiler) ;
  const GALGAS_setting_5F_nodeHashMapSize result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_setting_5F_nodeHashMapSize::
setting_5F_nodeHashMapSize_init_21_ (const GALGAS_luint & in_mSetting,
                                     Compiler * /* inCompiler */) {
  mProperty_mSetting = in_mSetting ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize::GALGAS_setting_5F_nodeHashMapSize (const cPtr_setting_5F_nodeHashMapSize * inSourcePtr) :
GALGAS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_setting_5F_nodeHashMapSize) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize GALGAS_setting_5F_nodeHashMapSize::class_func_new (const GALGAS_luint & in_mSetting
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_setting_5F_nodeHashMapSize result ;
  macroMyNew (result.mObjectPtr, cPtr_setting_5F_nodeHashMapSize (in_mSetting COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_setting_5F_nodeHashMapSize::readProperty_mSetting (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_setting_5F_nodeHashMapSize * p = (cPtr_setting_5F_nodeHashMapSize *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setting_5F_nodeHashMapSize) ;
    return p->mProperty_mSetting ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_setting_5F_nodeHashMapSize::setProperty_mSetting (const GALGAS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_setting_5F_nodeHashMapSize * p = (cPtr_setting_5F_nodeHashMapSize *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setting_5F_nodeHashMapSize) ;
    p->mProperty_mSetting = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @setting_nodeHashMapSize class
//--------------------------------------------------------------------------------------------------

cPtr_setting_5F_nodeHashMapSize::cPtr_setting_5F_nodeHashMapSize (const GALGAS_luint & in_mSetting
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (THERE),
mProperty_mSetting () {
  mProperty_mSetting = in_mSetting ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_setting_5F_nodeHashMapSize::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize ;
}

void cPtr_setting_5F_nodeHashMapSize::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@setting_nodeHashMapSize:") ;
  mProperty_mSetting.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_setting_5F_nodeHashMapSize::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_setting_5F_nodeHashMapSize (mProperty_mSetting COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @setting_nodeHashMapSize generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize ("setting_nodeHashMapSize",
                                                                                  & kTypeDescriptor_GALGAS_abstractFormula) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_setting_5F_nodeHashMapSize::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_setting_5F_nodeHashMapSize::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setting_5F_nodeHashMapSize (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize GALGAS_setting_5F_nodeHashMapSize::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_setting_5F_nodeHashMapSize result ;
  const GALGAS_setting_5F_nodeHashMapSize * p = (const GALGAS_setting_5F_nodeHashMapSize *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_setting_5F_nodeHashMapSize *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setting_nodeHashMapSize", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentFormula analyzeFormula'
//
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentFormula::method_analyzeFormula (const GALGAS_string /* constinArgument_inSourceFilePath */,
                                                    const GALGAS_domainMap constinArgument_inDomainMap,
                                                    GALGAS_computedFormulaMap & ioArgument_ioComputedFormulaMap,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_totalBitCount_2961 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_varList temp_0 = GALGAS_varList::init (inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 78)) ;
  GALGAS_varList var_varList_2994 = temp_0 ;
  GALGAS_varMap temp_1 = GALGAS_varMap::init (inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 79)) ;
  GALGAS_varMap var_varMap_3021 = temp_1 ;
  const GALGAS_assignmentFormula temp_2 = this ;
  extensionMethod_analyze (temp_2.readProperty_mFormulaArgumentList (), constinArgument_inDomainMap, var_varMap_3021, var_varList_2994, var_totalBitCount_2961, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 80)) ;
  const GALGAS_assignmentFormula temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GALGAS_formulaKind::Enumeration::invalid:
    break ;
  case GALGAS_formulaKind::Enumeration::enum_assignment:
    {
      GALGAS_timer var_timer_3242 = GALGAS_timer::class_func_start (SOURCE_FILE ("formula-assignment.ggs", 85)) ;
      const GALGAS_assignmentFormula temp_4 = this ;
      GALGAS_binaryset var_result_3271 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_4.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_3021, var_totalBitCount_2961, ioArgument_ioComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 86)) ;
      {
      const GALGAS_assignmentFormula temp_5 = this ;
      ioArgument_ioComputedFormulaMap.setter_insertKey (temp_5.readProperty_mFormulaName (), var_varList_2994, var_totalBitCount_2961, var_result_3271, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 87)) ;
      }
      GALGAS_uint_36__34_ var_valueCount_3487 = var_result_3271.getter_valueCount (var_totalBitCount_2961, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 88)) ;
      GALGAS_uint_36__34_ var_nodeCount_3621 = var_result_3271.getter_nodeCount (SOURCE_FILE ("formula-assignment.ggs", 90)) ;
      {
      GALGAS_string temp_6 ;
      const enumGalgasBool test_7 = GALGAS_bool (ComparisonKind::greaterThan, var_valueCount_3487.objectCompare (GALGAS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        temp_6 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_7) {
        temp_6 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_8 ;
      const enumGalgasBool test_9 = GALGAS_bool (ComparisonKind::greaterThan, var_nodeCount_3621.objectCompare (GALGAS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_9) {
        temp_8 = GALGAS_string::makeEmptyString () ;
      }
      routine_println_3F_ (GALGAS_string (" ").add_operation (var_valueCount_3487.getter_string (SOURCE_FILE ("formula-assignment.ggs", 91)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 91)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 92)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 92)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 92)).add_operation (var_nodeCount_3621.getter_string (SOURCE_FILE ("formula-assignment.ggs", 93)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (GALGAS_string (" node"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (temp_8, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (var_timer_3242.getter_string (SOURCE_FILE ("formula-assignment.ggs", 94)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 94)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 94)), inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 91)) ;
      }
    }
    break ;
  case GALGAS_formulaKind::Enumeration::enum_fixedPoint:
    {
      GALGAS_binaryset extractedValue_3874_startValue_0 ;
      temp_3.readProperty_mKind ().getAssociatedValuesFor_fixedPoint (extractedValue_3874_startValue_0) ;
      GALGAS_timer var_timer_3942 = GALGAS_timer::class_func_start (SOURCE_FILE ("formula-assignment.ggs", 97)) ;
      GALGAS_binaryset var_result_3982 = extractedValue_3874_startValue_0 ;
      {
      const GALGAS_assignmentFormula temp_10 = this ;
      ioArgument_ioComputedFormulaMap.setter_insertKey (temp_10.readProperty_mFormulaName (), var_varList_2994, var_totalBitCount_2961, var_result_3982, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 99)) ;
      }
      GALGAS_bool var_iterate_4103 = GALGAS_bool (true) ;
      GALGAS_bigint var_iterationCount_4128 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 101)) ;
      if (GALGAS_uint::class_func_max (SOURCE_FILE ("formula-assignment.ggs", 102)).isValid ()) {
        uint32_t variant_4151 = GALGAS_uint::class_func_max (SOURCE_FILE ("formula-assignment.ggs", 102)).uintValue () ;
        bool loop_4151 = true ;
        while (loop_4151) {
          loop_4151 = var_iterate_4103.isValid () ;
          if (loop_4151) {
            loop_4151 = var_iterate_4103.boolValue () ;
          }
          if (loop_4151 && (0 == variant_4151)) {
            loop_4151 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("formula-assignment.ggs", 102)) ;
          }
          if (loop_4151) {
            variant_4151 -- ;
            var_iterationCount_4128.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 103)), inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 103)) ;
            const GALGAS_assignmentFormula temp_11 = this ;
            GALGAS_binaryset var_r_4221 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_11.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_3021, var_totalBitCount_2961, ioArgument_ioComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 104)) ;
            enumGalgasBool test_12 = kBoolTrue ;
            if (kBoolTrue == test_12) {
              test_12 = GALGAS_bool (ComparisonKind::equal, var_result_3982.objectCompare (var_r_4221)).boolEnum () ;
              if (kBoolTrue == test_12) {
                var_iterate_4103 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_12) {
              var_result_3982 = var_r_4221 ;
              {
              const GALGAS_assignmentFormula temp_13 = this ;
              ioArgument_ioComputedFormulaMap.setter_setMValueForKey (var_result_3982, temp_13.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 109)) ;
              }
            }
          }
        }
      }
      GALGAS_uint_36__34_ var_valueCount_4521 = var_result_3982.getter_valueCount (var_totalBitCount_2961, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 112)) ;
      GALGAS_uint_36__34_ var_nodeCount_4584 = var_result_3982.getter_nodeCount (SOURCE_FILE ("formula-assignment.ggs", 113)) ;
      {
      GALGAS_string temp_14 ;
      const enumGalgasBool test_15 = GALGAS_bool (ComparisonKind::greaterThan, var_iterationCount_4128.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 115)))).boolEnum () ;
      if (kBoolTrue == test_15) {
        temp_14 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_15) {
        temp_14 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_16 ;
      const enumGalgasBool test_17 = GALGAS_bool (ComparisonKind::greaterThan, var_valueCount_4521.objectCompare (GALGAS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (kBoolTrue == test_17) {
        temp_16 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_17) {
        temp_16 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_18 ;
      const enumGalgasBool test_19 = GALGAS_bool (ComparisonKind::greaterThan, var_nodeCount_4584.objectCompare (GALGAS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (kBoolTrue == test_19) {
        temp_18 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_19) {
        temp_18 = GALGAS_string::makeEmptyString () ;
      }
      routine_println_3F_ (GALGAS_string (" ").add_operation (var_iterationCount_4128.getter_string (SOURCE_FILE ("formula-assignment.ggs", 114)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 114)).add_operation (GALGAS_string (" iteration"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 115)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 115)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 115)).add_operation (var_valueCount_4521.getter_string (SOURCE_FILE ("formula-assignment.ggs", 116)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (var_nodeCount_4584.getter_string (SOURCE_FILE ("formula-assignment.ggs", 117)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (GALGAS_string (" node"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (var_timer_3942.getter_string (SOURCE_FILE ("formula-assignment.ggs", 118)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 118)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 118)), inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 114)) ;
      }
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setting_nodeHashMapSize analyzeFormula'
//
//--------------------------------------------------------------------------------------------------

void cPtr_setting_5F_nodeHashMapSize::method_analyzeFormula (const GALGAS_string /* constinArgument_inSourceFilePath */,
                                                             const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                             GALGAS_computedFormulaMap & /* ioArgument_ioComputedFormulaMap */,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_setting_5F_nodeHashMapSize temp_0 = this ;
  GALGAS_binaryset::class_method_setNodeTableSize (temp_0.readProperty_mSetting ().readProperty_uint () COMMA_SOURCE_FILE ("setting-map.ggs", 52)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setting_andCacheMapSize analyzeFormula'
//
//--------------------------------------------------------------------------------------------------

void cPtr_setting_5F_andCacheMapSize::method_analyzeFormula (const GALGAS_string /* constinArgument_inSourceFilePath */,
                                                             const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                             GALGAS_computedFormulaMap & /* ioArgument_ioComputedFormulaMap */,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_setting_5F_andCacheMapSize temp_0 = this ;
  GALGAS_binaryset::class_method_setAndTableSize (temp_0.readProperty_mSetting ().readProperty_uint () COMMA_SOURCE_FILE ("setting-map.ggs", 62)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dumpFormula analyzeFormula'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dumpFormula::method_analyzeFormula (const GALGAS_string /* constinArgument_inSourceFilePath */,
                                              const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                              GALGAS_computedFormulaMap & ioArgument_ioComputedFormulaMap,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_varList var_varList_1863 ;
  GALGAS_uint var_bitCount_1877 ;
  GALGAS_binaryset var_result_1892 ;
  const GALGAS_dumpFormula temp_0 = this ;
  ioArgument_ioComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_1863, var_bitCount_1877, var_result_1892, inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 37)) ;
  GALGAS_uint_36__34_ var_valueCount_1914 = var_result_1892.getter_valueCount (var_bitCount_1877, inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 38)) ;
  {
  const GALGAS_dumpFormula temp_1 = this ;
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::greaterThan, var_valueCount_1914.objectCompare (GALGAS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_string ("s") ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }
  routine_println_3F_ (GALGAS_string ("Dump $").add_operation (temp_1.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (var_valueCount_1914.getter_string (SOURCE_FILE ("formula-dump.ggs", 39)), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)), inCompiler  COMMA_SOURCE_FILE ("formula-dump.ggs", 39)) ;
  }
  GALGAS_stringlist temp_4 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 40)) ;
  GALGAS_stringlist var_nameList_2094 = temp_4 ;
  GALGAS_uintlist temp_5 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 41)) ;
  GALGAS_uintlist var_bitCountList_2124 = temp_5 ;
  cEnumerator_varList enumerator_2162 (var_varList_1863, EnumerationOrder::up) ;
  while (enumerator_2162.hasCurrentObject ()) {
    {
    var_nameList_2094.setter_append (enumerator_2162.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 43)) ;
    }
    {
    var_bitCountList_2124.setter_append (enumerator_2162.current_mBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 44)) ;
    }
    enumerator_2162.gotoNextObject () ;
  }
  {
  routine_println_3F_ (var_result_1892.getter_print (var_nameList_2094, var_bitCountList_2124 COMMA_SOURCE_FILE ("formula-dump.ggs", 46)), inCompiler  COMMA_SOURCE_FILE ("formula-dump.ggs", 46)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphvizFormula analyzeFormula'
//
//--------------------------------------------------------------------------------------------------

void cPtr_graphvizFormula::method_analyzeFormula (const GALGAS_string constinArgument_inSourceFilePath,
                                                  const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                  GALGAS_computedFormulaMap & ioArgument_ioComputedFormulaMap,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_varList var_varList_1871 ;
  GALGAS_binaryset var_result_1889 ;
  const GALGAS_graphvizFormula temp_0 = this ;
  GALGAS_uint joker_1880 ; // Joker input parameter
  ioArgument_ioComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_1871, joker_1880, var_result_1889, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 37)) ;
  const GALGAS_graphvizFormula temp_1 = this ;
  GALGAS_string var_filePath_1903 = constinArgument_inSourceFilePath.getter_stringByDeletingPathExtension (SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (temp_1.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)) ;
  {
  const GALGAS_graphvizFormula temp_2 = this ;
  routine_println_3F_ (GALGAS_string ("Graphviz $").add_operation (temp_2.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)).add_operation (var_filePath_1903, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)), inCompiler  COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)) ;
  }
  GALGAS_stringlist temp_3 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 40)) ;
  GALGAS_stringlist var_bitNameList_2082 = temp_3 ;
  cEnumerator_varList enumerator_2121 (var_varList_1871, EnumerationOrder::down) ;
  while (enumerator_2121.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (ComparisonKind::equal, enumerator_2121.current_mBitCount (HERE).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        var_bitNameList_2082.setter_append (enumerator_2121.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 43)) ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      cEnumerator_range enumerator_2241 (GALGAS_range (GALGAS_uint (uint32_t (0U)), enumerator_2121.current_mBitCount (HERE).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 45))), EnumerationOrder::up) ;
      while (enumerator_2241.hasCurrentObject ()) {
        {
        var_bitNameList_2082.setter_append (enumerator_2121.current_mVarName (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46)).add_operation (enumerator_2241.current (HERE).getter_string (SOURCE_FILE ("formula-graphviz.ggs", 46)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46)) ;
        }
        enumerator_2241.gotoNextObject () ;
      }
    }
    enumerator_2121.gotoNextObject () ;
  }
  GALGAS_string var_s_2334 = var_result_1889.getter_graphviz (var_bitNameList_2082 COMMA_SOURCE_FILE ("formula-graphviz.ggs", 50)) ;
  GALGAS_bool joker_2418 ; // Joker input parameter
  var_s_2334.method_writeToFileWhenDifferentContents (var_filePath_1903, joker_2418, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 51)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@varInExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_varInExpression::getter_computeExpression (const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                 const GALGAS_varMap constinArgument_inVarMap,
                                                                 const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                 const GALGAS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  GALGAS_uint var_idx_11548 ;
  GALGAS_uint var_bitCount_11558 ;
  GALGAS_recordDomainMap var_subdomainMap_11573 ;
  const GALGAS_varInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_11548, var_bitCount_11558, var_subdomainMap_11573, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 354)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::greaterThan, var_subdomainMap_11573.getter_count (SOURCE_FILE ("expression.ggs", 355)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_varInExpression temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mVarName ().readProperty_location (), GALGAS_string ("variable is a record; use dot notation"), fixItArray3  COMMA_SOURCE_FILE ("expression.ggs", 356)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (ComparisonKind::notEqual, var_bitCount_11558.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_varInExpression temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mVarName ().readProperty_location (), GALGAS_string ("variable is not boolean; use {...} or dot notation"), fixItArray6  COMMA_SOURCE_FILE ("expression.ggs", 358)) ;
      }
    }
  }
  result_outResult = GALGAS_binaryset::class_func_binarySetWithBit (var_idx_11548, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 360)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@varBitInExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_varBitInExpression::getter_computeExpression (const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                    const GALGAS_varMap constinArgument_inVarMap,
                                                                    const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                    const GALGAS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  GALGAS_uint var_idx_12257 ;
  GALGAS_uint var_bitCount_12267 ;
  GALGAS_recordDomainMap var_subdomainMap_12282 ;
  const GALGAS_varBitInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_12257, var_bitCount_12267, var_subdomainMap_12282, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 372)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::greaterThan, var_subdomainMap_12282.getter_count (SOURCE_FILE ("expression.ggs", 373)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_varBitInExpression temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mVarName ().readProperty_location (), GALGAS_string ("variable is a record; use dot notation"), fixItArray3  COMMA_SOURCE_FILE ("expression.ggs", 374)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      const GALGAS_varBitInExpression temp_5 = this ;
      test_4 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_bitCount_12267.objectCompare (temp_5.readProperty_mVarBit ().readProperty_uint ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_varBitInExpression temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mVarBit ().readProperty_location (), GALGAS_string ("bit index should be < ").add_operation (var_bitCount_12267.getter_string (SOURCE_FILE ("expression.ggs", 376)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 376)), fixItArray7  COMMA_SOURCE_FILE ("expression.ggs", 376)) ;
      }
    }
  }
  const GALGAS_varBitInExpression temp_8 = this ;
  result_outResult = GALGAS_binaryset::class_func_binarySetWithBit (var_idx_12257.add_operation (temp_8.readProperty_mVarBit ().readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 378)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 378)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@andExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_andExpression::getter_computeExpression (const GALGAS_domainMap constinArgument_inDomainMap,
                                                               const GALGAS_varMap constinArgument_inVarMap,
                                                               const GALGAS_uint constinArgument_inTotalBitCount,
                                                               const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  const GALGAS_andExpression temp_0 = this ;
  GALGAS_binaryset var_left_12921 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 390)) ;
  const GALGAS_andExpression temp_1 = this ;
  GALGAS_binaryset var_right_13041 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 391)) ;
  result_outResult = var_left_12921.operator_and (var_right_13041 COMMA_SOURCE_FILE ("expression.ggs", 392)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@orExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_orExpression::getter_computeExpression (const GALGAS_domainMap constinArgument_inDomainMap,
                                                              const GALGAS_varMap constinArgument_inVarMap,
                                                              const GALGAS_uint constinArgument_inTotalBitCount,
                                                              const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  const GALGAS_orExpression temp_0 = this ;
  GALGAS_binaryset var_left_13525 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 404)) ;
  const GALGAS_orExpression temp_1 = this ;
  GALGAS_binaryset var_right_13645 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 405)) ;
  result_outResult = var_left_13525.operator_or (var_right_13645 COMMA_SOURCE_FILE ("expression.ggs", 406)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@xorExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_xorExpression::getter_computeExpression (const GALGAS_domainMap constinArgument_inDomainMap,
                                                               const GALGAS_varMap constinArgument_inVarMap,
                                                               const GALGAS_uint constinArgument_inTotalBitCount,
                                                               const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  const GALGAS_xorExpression temp_0 = this ;
  GALGAS_binaryset var_left_14130 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 418)) ;
  const GALGAS_xorExpression temp_1 = this ;
  GALGAS_binaryset var_right_14250 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 419)) ;
  result_outResult = var_left_14130.operator_xor (var_right_14250 COMMA_SOURCE_FILE ("expression.ggs", 420)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@impliesExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_impliesExpression::getter_computeExpression (const GALGAS_domainMap constinArgument_inDomainMap,
                                                                   const GALGAS_varMap constinArgument_inVarMap,
                                                                   const GALGAS_uint constinArgument_inTotalBitCount,
                                                                   const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  const GALGAS_impliesExpression temp_0 = this ;
  GALGAS_binaryset var_left_14739 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 432)) ;
  const GALGAS_impliesExpression temp_1 = this ;
  GALGAS_binaryset var_right_14859 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 433)) ;
  result_outResult = var_left_14739.getter_implies (var_right_14859 COMMA_SOURCE_FILE ("expression.ggs", 434)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@equalExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_equalExpression::getter_computeExpression (const GALGAS_domainMap constinArgument_inDomainMap,
                                                                 const GALGAS_varMap constinArgument_inVarMap,
                                                                 const GALGAS_uint constinArgument_inTotalBitCount,
                                                                 const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  const GALGAS_equalExpression temp_0 = this ;
  GALGAS_binaryset var_left_15354 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 446)) ;
  const GALGAS_equalExpression temp_1 = this ;
  GALGAS_binaryset var_right_15474 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 447)) ;
  result_outResult = var_left_15354.operator_xor (var_right_15474 COMMA_SOURCE_FILE ("expression.ggs", 448)).operator_tilde (SOURCE_FILE ("expression.ggs", 448)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@notEqualExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_notEqualExpression::getter_computeExpression (const GALGAS_domainMap constinArgument_inDomainMap,
                                                                    const GALGAS_varMap constinArgument_inVarMap,
                                                                    const GALGAS_uint constinArgument_inTotalBitCount,
                                                                    const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  const GALGAS_notEqualExpression temp_0 = this ;
  GALGAS_binaryset var_left_15967 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 460)) ;
  const GALGAS_notEqualExpression temp_1 = this ;
  GALGAS_binaryset var_right_16087 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 461)) ;
  result_outResult = var_left_15967.operator_xor (var_right_16087 COMMA_SOURCE_FILE ("expression.ggs", 462)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@complementExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_complementExpression::getter_computeExpression (const GALGAS_domainMap constinArgument_inDomainMap,
                                                                      const GALGAS_varMap constinArgument_inVarMap,
                                                                      const GALGAS_uint constinArgument_inTotalBitCount,
                                                                      const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  const GALGAS_complementExpression temp_0 = this ;
  result_outResult = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 474)).operator_tilde (SOURCE_FILE ("expression.ggs", 474)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@trueExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_trueExpression::getter_computeExpression (const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                const GALGAS_varMap /* constinArgument_inVarMap */,
                                                                const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                const GALGAS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                Compiler */* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  result_outResult = GALGAS_binaryset::class_func_fullBinarySet (SOURCE_FILE ("expression.ggs", 486)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@falseExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_falseExpression::getter_computeExpression (const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                 const GALGAS_varMap /* constinArgument_inVarMap */,
                                                                 const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                 const GALGAS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                 Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  result_outResult = GALGAS_binaryset::class_func_emptyBinarySet (SOURCE_FILE ("expression.ggs", 498)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@formulaInExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_formulaInExpression::getter_computeExpression (const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                     const GALGAS_varMap constinArgument_inVarMap,
                                                                     const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                     const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  GALGAS_varList var_varList_17937 ;
  GALGAS_uint var_totalBitCount_17958 ;
  GALGAS_binaryset var_formulaValue_17978 ;
  const GALGAS_formulaInExpression temp_0 = this ;
  constinArgument_inComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_17937, var_totalBitCount_17958, var_formulaValue_17978, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 511)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_formulaInExpression temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::notEqual, temp_2.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression.ggs", 513)).objectCompare (var_varList_17937.getter_count (SOURCE_FILE ("expression.ggs", 513)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_formulaInExpression temp_3 = this ;
      const GALGAS_formulaInExpression temp_4 = this ;
      GALGAS_string temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::greaterThan, var_varList_17937.getter_count (SOURCE_FILE ("expression.ggs", 515)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_string::makeEmptyString () ;
      }
      const GALGAS_formulaInExpression temp_7 = this ;
      const GALGAS_formulaInExpression temp_8 = this ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = GALGAS_bool (ComparisonKind::greaterThan, temp_8.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression.ggs", 517)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mFormulaName ().readProperty_location (), GALGAS_string ("the $").add_operation (temp_4.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (GALGAS_string (" names "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (var_varList_17937.getter_count (SOURCE_FILE ("expression.ggs", 515)).getter_string (SOURCE_FILE ("expression.ggs", 514)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (GALGAS_string (" variable"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (GALGAS_string (", but this call names "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (temp_7.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression.ggs", 517)).getter_string (SOURCE_FILE ("expression.ggs", 516)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 516)).add_operation (GALGAS_string (" variable"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 517)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 517)), fixItArray11  COMMA_SOURCE_FILE ("expression.ggs", 514)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_uintlist temp_12 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 520)) ;
    GALGAS_uintlist var_transformationList_18423 = temp_12 ;
    const GALGAS_formulaInExpression temp_13 = this ;
    cEnumerator_varList enumerator_18473 (var_varList_17937, EnumerationOrder::down) ;
    cEnumerator_formulaParameterListInExpression enumerator_18519 (temp_13.readProperty_mParameterList (), EnumerationOrder::down) ;
    while (enumerator_18473.hasCurrentObject () && enumerator_18519.hasCurrentObject ()) {
      GALGAS_uint var_parameterIndex_18609 ;
      GALGAS_uint var_parameterBitCount_18632 ;
      GALGAS_recordDomainMap var_subdomainMap_18669 ;
      constinArgument_inVarMap.method_searchKey (enumerator_18519.current_mParameterName (HERE), var_parameterIndex_18609, var_parameterBitCount_18632, var_subdomainMap_18669, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 522)) ;
      cEnumerator_lstringlist enumerator_18694 (enumerator_18519.current_mFieldNames (HERE), EnumerationOrder::up) ;
      while (enumerator_18694.hasCurrentObject ()) {
        GALGAS_uint var_fieldRelativeBitIndex_18774 ;
        GALGAS_recordDomainMap var_fieldSubdomainMap_18822 ;
        var_subdomainMap_18669.method_searchKey (enumerator_18694.current_mValue (HERE), var_fieldRelativeBitIndex_18774, var_parameterBitCount_18632, var_fieldSubdomainMap_18822, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 524)) ;
        var_parameterIndex_18609 = var_parameterIndex_18609.add_operation (var_fieldRelativeBitIndex_18774, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 525)) ;
        var_subdomainMap_18669 = var_fieldSubdomainMap_18822 ;
        enumerator_18694.gotoNextObject () ;
      }
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = GALGAS_bool (ComparisonKind::notEqual, enumerator_18473.current_mBitCount (HERE).objectCompare (var_parameterBitCount_18632)).boolEnum () ;
        if (kBoolTrue == test_14) {
          GALGAS_string temp_15 ;
          const enumGalgasBool test_16 = GALGAS_bool (ComparisonKind::greaterThan, var_parameterBitCount_18632.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_16) {
            temp_15 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_16) {
            temp_15 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string temp_17 ;
          const enumGalgasBool test_18 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_18473.current_mBitCount (HERE).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_18) {
            temp_17 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_18) {
            temp_17 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (enumerator_18519.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("this parameter is declared with a size of ").add_operation (var_parameterBitCount_18632.getter_string (SOURCE_FILE ("expression.ggs", 529)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 529)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (temp_15, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (GALGAS_string (", but corresponding formal argument '"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (enumerator_18473.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (GALGAS_string ("' is declared with a size of "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (enumerator_18473.current_mBitCount (HERE).getter_string (SOURCE_FILE ("expression.ggs", 531)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 532)).add_operation (temp_17, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 532)), fixItArray19  COMMA_SOURCE_FILE ("expression.ggs", 529)) ;
        }
      }
      cEnumerator_range enumerator_19379 (GALGAS_range (GALGAS_uint (uint32_t (0U)), var_parameterBitCount_18632.substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 534))), EnumerationOrder::up) ;
      while (enumerator_19379.hasCurrentObject ()) {
        {
        var_transformationList_18423.setter_append (var_parameterIndex_18609.add_operation (enumerator_19379.current (HERE), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 535)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 535)) ;
        }
        enumerator_19379.gotoNextObject () ;
      }
      enumerator_18473.gotoNextObject () ;
      enumerator_18519.gotoNextObject () ;
    }
    result_outResult = var_formulaValue_17978.getter_transformedBy (var_transformationList_18423 COMMA_SOURCE_FILE ("expression.ggs", 538)) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@existInExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_existInExpression::getter_computeExpression (const GALGAS_domainMap constinArgument_inDomainMap,
                                                                   const GALGAS_varMap constinArgument_inVarMap,
                                                                   const GALGAS_uint constinArgument_inTotalBitCount,
                                                                   const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  GALGAS_varMap var_varMap_19900 = constinArgument_inVarMap ;
  GALGAS_uint var_totalBitCount_19930 = constinArgument_inTotalBitCount ;
  GALGAS_varList var_unusedVarList_19969 = GALGAS_varList::init (inCompiler COMMA_HERE) ;
  const GALGAS_existInExpression temp_0 = this ;
  extensionMethod_analyze (temp_0.readProperty_mArgumentList (), constinArgument_inDomainMap, var_varMap_19900, var_unusedVarList_19969, var_totalBitCount_19930, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 554)) ;
  const GALGAS_existInExpression temp_1 = this ;
  GALGAS_binaryset var_r_20091 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_19900, var_totalBitCount_19930, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 555)) ;
  result_outResult = var_r_20091.getter_existOnBitIndexAndBeyond (constinArgument_inTotalBitCount COMMA_SOURCE_FILE ("expression.ggs", 556)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@forAllInExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_forAllInExpression::getter_computeExpression (const GALGAS_domainMap constinArgument_inDomainMap,
                                                                    const GALGAS_varMap constinArgument_inVarMap,
                                                                    const GALGAS_uint constinArgument_inTotalBitCount,
                                                                    const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  GALGAS_varMap var_varMap_20609 = constinArgument_inVarMap ;
  GALGAS_uint var_totalBitCount_20639 = constinArgument_inTotalBitCount ;
  GALGAS_varList var_unusedVarList_20678 = GALGAS_varList::init (inCompiler COMMA_HERE) ;
  const GALGAS_forAllInExpression temp_0 = this ;
  extensionMethod_analyze (temp_0.readProperty_mArgumentList (), constinArgument_inDomainMap, var_varMap_20609, var_unusedVarList_20678, var_totalBitCount_20639, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 571)) ;
  const GALGAS_forAllInExpression temp_1 = this ;
  GALGAS_binaryset var_r_20800 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_20609, var_totalBitCount_20639, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 572)) ;
  result_outResult = var_r_20800.getter_forAllOnBitIndexAndBeyond (constinArgument_inTotalBitCount COMMA_SOURCE_FILE ("expression.ggs", 573)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@comparisonWithConstantInExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_comparisonWithConstantInExpression::getter_computeExpression (const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                                    const GALGAS_varMap constinArgument_inVarMap,
                                                                                    const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                                    const GALGAS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  GALGAS_uint var_idx_21386 ;
  GALGAS_uint var_bitCount_21398 ;
  GALGAS_recordDomainMap var_subDomainMap_21426 ;
  const GALGAS_comparisonWithConstantInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_21386, var_bitCount_21398, var_subDomainMap_21426, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 585)) ;
  const GALGAS_comparisonWithConstantInExpression temp_1 = this ;
  cEnumerator_lstringlist enumerator_21447 (temp_1.readProperty_mFieldNames (), EnumerationOrder::up) ;
  while (enumerator_21447.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex_21526 ;
    GALGAS_recordDomainMap var_fieldSubdomainMap_21565 ;
    var_subDomainMap_21426.method_searchKey (enumerator_21447.current_mValue (HERE), var_fieldRelativeBitIndex_21526, var_bitCount_21398, var_fieldSubdomainMap_21565, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 587)) ;
    var_idx_21386 = var_idx_21386.add_operation (var_fieldRelativeBitIndex_21526, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 588)) ;
    var_subDomainMap_21426 = var_fieldSubdomainMap_21565 ;
    enumerator_21447.gotoNextObject () ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::greaterThan, var_subDomainMap_21426.getter_count (SOURCE_FILE ("expression.ggs", 591)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_comparisonWithConstantInExpression temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mVarName ().readProperty_location (), GALGAS_string ("variable is a record; use dot notation"), fixItArray4  COMMA_SOURCE_FILE ("expression.ggs", 592)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_comparisonWithConstantInExpression temp_6 = this ;
      test_5 = GALGAS_bool (ComparisonKind::greaterThan, temp_6.readProperty_mConstant ().readProperty_uint ().getter_significantBitCount (SOURCE_FILE ("expression.ggs", 593)).objectCompare (var_bitCount_21398)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_comparisonWithConstantInExpression temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mConstant ().readProperty_location (), GALGAS_string ("Constant too large (should be < 2**").add_operation (var_bitCount_21398.getter_string (SOURCE_FILE ("expression.ggs", 594)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 594)), fixItArray8  COMMA_SOURCE_FILE ("expression.ggs", 594)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_comparisonWithConstantInExpression temp_9 = this ;
      switch (temp_9.readProperty_mComparison ().enumValue ()) {
      case GALGAS_comparison::Enumeration::invalid:
        break ;
      case GALGAS_comparison::Enumeration::enum_equal:
        {
          const GALGAS_comparisonWithConstantInExpression temp_10 = this ;
          result_outResult = GALGAS_binaryset::class_func_binarySetWithEqualToConstant (var_idx_21386, var_bitCount_21398, temp_10.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 598)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 598)) ;
        }
        break ;
      case GALGAS_comparison::Enumeration::enum_notEqual:
        {
          const GALGAS_comparisonWithConstantInExpression temp_11 = this ;
          result_outResult = GALGAS_binaryset::class_func_binarySetWithNotEqualToConstant (var_idx_21386, var_bitCount_21398, temp_11.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 600)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 600)) ;
        }
        break ;
      case GALGAS_comparison::Enumeration::enum_lowerOrEqual:
        {
          const GALGAS_comparisonWithConstantInExpression temp_12 = this ;
          result_outResult = GALGAS_binaryset::class_func_binarySetWithLowerOrEqualToConstant (var_idx_21386, var_bitCount_21398, temp_12.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 602)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 602)) ;
        }
        break ;
      case GALGAS_comparison::Enumeration::enum_lowerThan:
        {
          const GALGAS_comparisonWithConstantInExpression temp_13 = this ;
          result_outResult = GALGAS_binaryset::class_func_binarySetWithStrictLowerThanConstant (var_idx_21386, var_bitCount_21398, temp_13.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 604)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 604)) ;
        }
        break ;
      case GALGAS_comparison::Enumeration::enum_greaterOrEqual:
        {
          const GALGAS_comparisonWithConstantInExpression temp_14 = this ;
          result_outResult = GALGAS_binaryset::class_func_binarySetWithGreaterOrEqualToConstant (var_idx_21386, var_bitCount_21398, temp_14.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 606)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 606)) ;
        }
        break ;
      case GALGAS_comparison::Enumeration::enum_greaterThan:
        {
          const GALGAS_comparisonWithConstantInExpression temp_15 = this ;
          result_outResult = GALGAS_binaryset::class_func_binarySetWithStrictGreaterThanConstant (var_idx_21386, var_bitCount_21398, temp_15.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 608)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 608)) ;
        }
        break ;
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@variableComparisonInExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_variableComparisonInExpression::getter_computeExpression (const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                                const GALGAS_varMap constinArgument_inVarMap,
                                                                                const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                                const GALGAS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  GALGAS_uint var_leftIdx_23236 ;
  GALGAS_uint var_leftBitCount_23253 ;
  GALGAS_recordDomainMap var_leftSubDomainMap_23286 ;
  const GALGAS_variableComparisonInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mLeftVarName (), var_leftIdx_23236, var_leftBitCount_23253, var_leftSubDomainMap_23286, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 622)) ;
  const GALGAS_variableComparisonInExpression temp_1 = this ;
  cEnumerator_lstringlist enumerator_23311 (temp_1.readProperty_mLeftFieldNames (), EnumerationOrder::up) ;
  while (enumerator_23311.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex_23398 ;
    GALGAS_recordDomainMap var_fieldSubdomainMap_23441 ;
    var_leftSubDomainMap_23286.method_searchKey (enumerator_23311.current_mValue (HERE), var_fieldRelativeBitIndex_23398, var_leftBitCount_23253, var_fieldSubdomainMap_23441, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 624)) ;
    var_leftIdx_23236 = var_leftIdx_23236.add_operation (var_fieldRelativeBitIndex_23398, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 625)) ;
    var_leftSubDomainMap_23286 = var_fieldSubdomainMap_23441 ;
    enumerator_23311.gotoNextObject () ;
  }
  GALGAS_uint var_rightIdx_23603 ;
  GALGAS_uint var_rightBitCount_23620 ;
  GALGAS_recordDomainMap var_rightSubDomainMap_23653 ;
  const GALGAS_variableComparisonInExpression temp_2 = this ;
  constinArgument_inVarMap.method_searchKey (temp_2.readProperty_mRightVarName (), var_rightIdx_23603, var_rightBitCount_23620, var_rightSubDomainMap_23653, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 628)) ;
  const GALGAS_variableComparisonInExpression temp_3 = this ;
  cEnumerator_lstringlist enumerator_23679 (temp_3.readProperty_mRightFieldNames (), EnumerationOrder::up) ;
  while (enumerator_23679.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex_23768 ;
    GALGAS_recordDomainMap var_fieldSubdomainMap_23812 ;
    var_rightSubDomainMap_23653.method_searchKey (enumerator_23679.current_mValue (HERE), var_fieldRelativeBitIndex_23768, var_rightBitCount_23620, var_fieldSubdomainMap_23812, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 630)) ;
    var_rightIdx_23603 = var_rightIdx_23603.add_operation (var_fieldRelativeBitIndex_23768, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 631)) ;
    var_rightSubDomainMap_23653 = var_fieldSubdomainMap_23812 ;
    enumerator_23679.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::greaterThan, var_leftSubDomainMap_23286.getter_count (SOURCE_FILE ("expression.ggs", 634)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_variableComparisonInExpression temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mLeftVarName ().readProperty_location (), GALGAS_string ("variable is a record; use dot notation"), fixItArray6  COMMA_SOURCE_FILE ("expression.ggs", 635)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_4) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (ComparisonKind::greaterThan, var_rightSubDomainMap_23653.getter_count (SOURCE_FILE ("expression.ggs", 636)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        const GALGAS_variableComparisonInExpression temp_8 = this ;
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mRightVarName ().readProperty_location (), GALGAS_string ("variable is a record; use dot notation"), fixItArray9  COMMA_SOURCE_FILE ("expression.ggs", 637)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_7) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (ComparisonKind::notEqual, var_leftBitCount_23253.objectCompare (var_rightBitCount_23620)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_variableComparisonInExpression temp_11 = this ;
          const GALGAS_variableComparisonInExpression temp_12 = this ;
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (ComparisonKind::greaterThan, var_leftBitCount_23253.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string temp_15 ;
          const enumGalgasBool test_16 = GALGAS_bool (ComparisonKind::greaterThan, var_rightBitCount_23620.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_16) {
            temp_15 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_16) {
            temp_15 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mRightVarName ().readProperty_location (), GALGAS_string ("'").add_operation (temp_12.readProperty_mLeftVarName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 639)).add_operation (GALGAS_string ("' variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 639)).add_operation (var_leftBitCount_23253.getter_string (SOURCE_FILE ("expression.ggs", 639)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 639)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 640)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 640)).add_operation (GALGAS_string (", but this variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 640)).add_operation (var_rightBitCount_23620.getter_string (SOURCE_FILE ("expression.ggs", 641)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 641)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 642)).add_operation (temp_15, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 642)), fixItArray17  COMMA_SOURCE_FILE ("expression.ggs", 639)) ;
          result_outResult.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_10) {
        const GALGAS_variableComparisonInExpression temp_18 = this ;
        switch (temp_18.readProperty_mComparison ().enumValue ()) {
        case GALGAS_comparison::Enumeration::invalid:
          break ;
        case GALGAS_comparison::Enumeration::enum_equal:
          {
            result_outResult = GALGAS_binaryset::class_func_binarySetWithEqualComparison (var_leftIdx_23236, var_leftBitCount_23253, var_rightIdx_23603, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 647)) ;
          }
          break ;
        case GALGAS_comparison::Enumeration::enum_notEqual:
          {
            result_outResult = GALGAS_binaryset::class_func_binarySetWithNotEqualComparison (var_leftIdx_23236, var_leftBitCount_23253, var_rightIdx_23603, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 649)) ;
          }
          break ;
        case GALGAS_comparison::Enumeration::enum_lowerOrEqual:
          {
            result_outResult = GALGAS_binaryset::class_func_binarySetWithLowerOrEqualComparison (var_leftIdx_23236, var_leftBitCount_23253, var_rightIdx_23603, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 651)) ;
          }
          break ;
        case GALGAS_comparison::Enumeration::enum_lowerThan:
          {
            result_outResult = GALGAS_binaryset::class_func_binarySetWithStrictLowerComparison (var_leftIdx_23236, var_leftBitCount_23253, var_rightIdx_23603, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 653)) ;
          }
          break ;
        case GALGAS_comparison::Enumeration::enum_greaterOrEqual:
          {
            result_outResult = GALGAS_binaryset::class_func_binarySetWithGreaterOrEqualComparison (var_leftIdx_23236, var_leftBitCount_23253, var_rightIdx_23603, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 655)) ;
          }
          break ;
        case GALGAS_comparison::Enumeration::enum_greaterThan:
          {
            result_outResult = GALGAS_binaryset::class_func_binarySetWithStrictGreaterComparison (var_leftIdx_23236, var_leftBitCount_23253, var_rightIdx_23603, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 657)) ;
          }
          break ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "builtin-command-line-options.h"
#include "C_galgas_CLI_Options.h"
#include "F_verbose_output.h"
#include "cLexiqueIntrospection.h"
#include "F_DisplayException.h"

//--------------------------------------------------------------------------------------------------
//                      print_tool_help_message                                                  
//--------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  gCout.appendCString ("Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n") ;
}

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "kerbdd",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a source text file with the .kerbdd extension",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "2.0.0" ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//--------------------------------------------------------------------------------------------------

static void routine_before (Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//--------------------------------------------------------------------------------------------------

static void routine_after (Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast var_ast_833 ;
  var_ast_833.drop () ;
  cGrammar_kerbdd_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_ast_833  COMMA_SOURCE_FILE ("program.ggs", 17)) ;
  GALGAS_domainMap var_domainMap_919 ;
  extensionMethod_analyze (var_ast_833.readProperty_mDomainList (), var_domainMap_919, inCompiler COMMA_SOURCE_FILE ("program.ggs", 19)) ;
  GALGAS_computedFormulaMap temp_0 = GALGAS_computedFormulaMap::init (inCompiler COMMA_SOURCE_FILE ("program.ggs", 21)) ;
  GALGAS_computedFormulaMap var_computedFormulaMap_978 = temp_0 ;
  cEnumerator_formulaList enumerator_1009 (var_ast_833.readProperty_mFormulaList (), EnumerationOrder::up) ;
  bool bool_1 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 22)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_1009.hasCurrentObject () && bool_1) {
    while (enumerator_1009.hasCurrentObject () && bool_1) {
      callExtensionMethod_analyzeFormula ((cPtr_abstractFormula *) enumerator_1009.current_mFormula (HERE).ptr (), constinArgument_inSourceFile.readProperty_string (), var_domainMap_919, var_computedFormulaMap_978, inCompiler COMMA_SOURCE_FILE ("program.ggs", 23)) ;
      enumerator_1009.gotoNextObject () ;
      if (enumerator_1009.hasCurrentObject ()) {
        bool_1 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 22)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//--------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <String> sourceFilesArray ;
  analyzeCommandLineOptions (inArgc, inArgv,
                             sourceFilesArray,
                             kSourceFileExtensions,
                             kSourceFileHelpMessages,
                             print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    gCout.appendString (executionModeOptionErrorMessage) ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    Compiler * commonCompiler = nullptr ;
    macroMyNew (commonCompiler, Compiler (nullptr COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonCompiler->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "kerbdd") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_kerbdd_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_kerbdd_5F_grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_kerbdd_5F_grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_kerbdd_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString ()) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonCompiler COMMA_HERE) ;
    //--- Emit JSON issue file ?
      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != "") {
        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;
      }
    //--- Display error and warnings count
      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        String message ;
        if (totalWarningCount () == 0) {
          message.appendCString ("No warning") ;
        }else if (totalWarningCount () == 1) {
          message.appendCString ("1 warning") ;
        }else{
          message.appendSigned (totalWarningCount ()) ;
          message.appendCString (" warnings") ;
        }
        message.appendCString (", ") ;
        if (totalErrorCount () == 0) {
          message.appendCString ("no error") ;
        }else if (totalErrorCount () == 1) {
          message.appendCString ("1 error") ;
        }else{
          message.appendSigned (totalErrorCount ()) ;
          message.appendCString (" errors") ;
        }
        message.appendCString (".\n") ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std::exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonCompiler) ;
  }
  return returnCode ;
}

