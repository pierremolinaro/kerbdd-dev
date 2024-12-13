#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_namedType::GGS_bddType_2E_namedType (void) :
mProperty_typeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_bddType_2E_namedType::~ GGS_bddType_2E_namedType (void) {
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

GGS_bddType_2E_namedType GGS_bddType_2E_namedType::class_func_new (const GGS_lstring & in_typeName,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bddType_2E_namedType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeName = in_typeName ;
  return result ;
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
//
//     @bddType.namedType generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bddType_2E_namedType ("bddType.namedType",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bddType_2E_namedType::staticTypeDescriptor (void) const {
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
//
//Optional @bddType_2E_namedType_3F_
//
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
//
//     @bddType.namedType? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bddType_2E_namedType_3F_ ("bddType.namedType?",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bddType_2E_namedType_3F_::staticTypeDescriptor (void) const {
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

GGS_domainFieldList_2E_element::~ GGS_domainFieldList_2E_element (void) {
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

GGS_domainFieldList_2E_element GGS_domainFieldList_2E_element::class_func_new (const GGS_lstring & in_mVarName,
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
//
//     @domainFieldList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainFieldList_2E_element ("domainFieldList.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_domainFieldList_2E_element::staticTypeDescriptor (void) const {
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

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList_2E_element::GGS_domainDeclarationList_2E_element (void) :
mProperty_mDomainName (),
mProperty_mType () {
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList_2E_element::~ GGS_domainDeclarationList_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_domainDeclarationList_2E_element GGS_domainDeclarationList_2E_element::init_21__21_ (const GGS_lstring & in_mDomainName,
                                                                                         const GGS_domainDeclarationType & in_mType,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_domainDeclarationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDomainName = in_mDomainName ;
  result.mProperty_mType = in_mType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList_2E_element::GGS_domainDeclarationList_2E_element (const GGS_lstring & inOperand0,
                                                                            const GGS_domainDeclarationType & inOperand1) :
mProperty_mDomainName (inOperand0),
mProperty_mType (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList_2E_element GGS_domainDeclarationList_2E_element::class_func_new (const GGS_lstring & in_mDomainName,
                                                                                           const GGS_domainDeclarationType & in_mType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_domainDeclarationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDomainName = in_mDomainName ;
  result.mProperty_mType = in_mType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_domainDeclarationList_2E_element::isValid (void) const {
  return mProperty_mDomainName.isValid () && mProperty_mType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList_2E_element::drop (void) {
  mProperty_mDomainName.drop () ;
  mProperty_mType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainDeclarationList_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @domainDeclarationList.element:") ;
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
//     @domainDeclarationList.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainDeclarationList_2E_element ("domainDeclarationList.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_domainDeclarationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainDeclarationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_domainDeclarationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_domainDeclarationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList_2E_element GGS_domainDeclarationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_domainDeclarationList_2E_element result ;
  const GGS_domainDeclarationList_2E_element * p = (const GGS_domainDeclarationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_domainDeclarationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainDeclarationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap_2E_element::GGS_recordDomainMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mBitCount (),
mProperty_mSubDomain () {
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap_2E_element::~ GGS_recordDomainMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_recordDomainMap_2E_element GGS_recordDomainMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                     const GGS_uint & in_mIndex,
                                                                                     const GGS_uint & in_mBitCount,
                                                                                     const GGS_recordDomainMap & in_mSubDomain,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_recordDomainMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mBitCount = in_mBitCount ;
  result.mProperty_mSubDomain = in_mSubDomain ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap_2E_element::GGS_recordDomainMap_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_uint & inOperand1,
                                                                const GGS_uint & inOperand2,
                                                                const GGS_recordDomainMap & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mBitCount (inOperand2),
mProperty_mSubDomain (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap_2E_element GGS_recordDomainMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                               const GGS_uint & in_mIndex,
                                                                               const GGS_uint & in_mBitCount,
                                                                               const GGS_recordDomainMap & in_mSubDomain,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_recordDomainMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mBitCount = in_mBitCount ;
  result.mProperty_mSubDomain = in_mSubDomain ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_recordDomainMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mBitCount.isValid () && mProperty_mSubDomain.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mBitCount.drop () ;
  mProperty_mSubDomain.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @recordDomainMap.element:") ;
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
//     @recordDomainMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_recordDomainMap_2E_element ("recordDomainMap.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_recordDomainMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_recordDomainMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_recordDomainMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_recordDomainMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap_2E_element GGS_recordDomainMap_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_recordDomainMap_2E_element result ;
  const GGS_recordDomainMap_2E_element * p = (const GGS_recordDomainMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_recordDomainMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("recordDomainMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @recordDomainMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap_2E_element_3F_::GGS_recordDomainMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap_2E_element_3F_::GGS_recordDomainMap_2E_element_3F_ (const GGS_recordDomainMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap_2E_element_3F_ GGS_recordDomainMap_2E_element_3F_::init_nil (void) {
  GGS_recordDomainMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_recordDomainMap_2E_element_3F_::isValid (void) const {
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

bool GGS_recordDomainMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_recordDomainMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_recordDomainMap_2E_element_3F_::description (String & ioString,
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
//     @recordDomainMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_recordDomainMap_2E_element_3F_ ("recordDomainMap.element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_recordDomainMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_recordDomainMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_recordDomainMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_recordDomainMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap_2E_element_3F_ GGS_recordDomainMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_recordDomainMap_2E_element_3F_ result ;
  const GGS_recordDomainMap_2E_element_3F_ * p = (const GGS_recordDomainMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_recordDomainMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("recordDomainMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap_2E_element::GGS_domainMap_2E_element (void) :
mProperty_lkey (),
mProperty_mBitCount (),
mProperty_mRecordMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap_2E_element::~ GGS_domainMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_domainMap_2E_element GGS_domainMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                     const GGS_uint & in_mBitCount,
                                                                     const GGS_recordDomainMap & in_mRecordMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_domainMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mBitCount = in_mBitCount ;
  result.mProperty_mRecordMap = in_mRecordMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap_2E_element::GGS_domainMap_2E_element (const GGS_lstring & inOperand0,
                                                    const GGS_uint & inOperand1,
                                                    const GGS_recordDomainMap & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mBitCount (inOperand1),
mProperty_mRecordMap (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap_2E_element GGS_domainMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                   const GGS_uint & in_mBitCount,
                                                                   const GGS_recordDomainMap & in_mRecordMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_domainMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mBitCount = in_mBitCount ;
  result.mProperty_mRecordMap = in_mRecordMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_domainMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBitCount.isValid () && mProperty_mRecordMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mBitCount.drop () ;
  mProperty_mRecordMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainMap_2E_element::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @domainMap.element:") ;
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
//     @domainMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainMap_2E_element ("domainMap.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_domainMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_domainMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_domainMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap_2E_element GGS_domainMap_2E_element::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_domainMap_2E_element result ;
  const GGS_domainMap_2E_element * p = (const GGS_domainMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_domainMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @domainMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_domainMap_2E_element_3F_::GGS_domainMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap_2E_element_3F_::GGS_domainMap_2E_element_3F_ (const GGS_domainMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_domainMap_2E_element_3F_ GGS_domainMap_2E_element_3F_::init_nil (void) {
  GGS_domainMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_domainMap_2E_element_3F_::isValid (void) const {
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

bool GGS_domainMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_domainMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_domainMap_2E_element_3F_::description (String & ioString,
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
//     @domainMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_domainMap_2E_element_3F_ ("domainMap.element?",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_domainMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_domainMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_domainMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap_2E_element_3F_ GGS_domainMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_domainMap_2E_element_3F_ result ;
  const GGS_domainMap_2E_element_3F_ * p = (const GGS_domainMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_domainMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varMap_2E_element::GGS_varMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mBitCount (),
mProperty_mRecordDomainMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_varMap_2E_element::~ GGS_varMap_2E_element (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_varMap_2E_element GGS_varMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                   const GGS_uint & in_mIndex,
                                                                   const GGS_uint & in_mBitCount,
                                                                   const GGS_recordDomainMap & in_mRecordDomainMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_varMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mBitCount = in_mBitCount ;
  result.mProperty_mRecordDomainMap = in_mRecordDomainMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_varMap_2E_element::GGS_varMap_2E_element (const GGS_lstring & inOperand0,
                                              const GGS_uint & inOperand1,
                                              const GGS_uint & inOperand2,
                                              const GGS_recordDomainMap & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mBitCount (inOperand2),
mProperty_mRecordDomainMap (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_varMap_2E_element GGS_varMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                             const GGS_uint & in_mIndex,
                                                             const GGS_uint & in_mBitCount,
                                                             const GGS_recordDomainMap & in_mRecordDomainMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_varMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mBitCount = in_mBitCount ;
  result.mProperty_mRecordDomainMap = in_mRecordDomainMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_varMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mBitCount.isValid () && mProperty_mRecordDomainMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mBitCount.drop () ;
  mProperty_mRecordDomainMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varMap_2E_element::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @varMap.element:") ;
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
//     @varMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varMap_2E_element ("varMap.element",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_varMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varMap_2E_element GGS_varMap_2E_element::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_varMap_2E_element result ;
  const GGS_varMap_2E_element * p = (const GGS_varMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @varMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_varMap_2E_element_3F_::GGS_varMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_varMap_2E_element_3F_::GGS_varMap_2E_element_3F_ (const GGS_varMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_varMap_2E_element_3F_ GGS_varMap_2E_element_3F_::init_nil (void) {
  GGS_varMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_varMap_2E_element_3F_::isValid (void) const {
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

bool GGS_varMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_varMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_varMap_2E_element_3F_::description (String & ioString,
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
//     @varMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_varMap_2E_element_3F_ ("varMap.element?",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_varMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varMap_2E_element_3F_ GGS_varMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_varMap_2E_element_3F_ result ;
  const GGS_varMap_2E_element_3F_ * p = (const GGS_varMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_computedFormulaMap_2E_element::~ GGS_computedFormulaMap_2E_element (void) {
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

GGS_computedFormulaMap_2E_element GGS_computedFormulaMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
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
//
//     @computedFormulaMap.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedFormulaMap_2E_element ("computedFormulaMap.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_computedFormulaMap_2E_element::staticTypeDescriptor (void) const {
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
//
//Optional @computedFormulaMap_2E_element_3F_
//
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
//
//     @computedFormulaMap.element? generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedFormulaMap_2E_element_3F_ ("computedFormulaMap.element?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_computedFormulaMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_formulaParameterListInExpression_2E_element::~ GGS_formulaParameterListInExpression_2E_element (void) {
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

GGS_formulaParameterListInExpression_2E_element GGS_formulaParameterListInExpression_2E_element::class_func_new (const GGS_lstring & in_mParameterName,
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
//
//     @formulaParameterListInExpression.element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formulaParameterListInExpression_2E_element ("formulaParameterListInExpression.element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_formulaParameterListInExpression_2E_element::staticTypeDescriptor (void) const {
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
// @setting_5F_nodeHashMapSize reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_setting_5F_nodeHashMapSize::objectCompare (const GGS_setting_5F_nodeHashMapSize & inOperand) const {
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

GGS_setting_5F_nodeHashMapSize::GGS_setting_5F_nodeHashMapSize (void) :
GGS_abstractFormula () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_setting_5F_nodeHashMapSize GGS_setting_5F_nodeHashMapSize::
init_21_ (const GGS_luint & in_mSetting,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_setting_5F_nodeHashMapSize * object = nullptr ;
  macroMyNew (object, cPtr_setting_5F_nodeHashMapSize (inCompiler COMMA_THERE)) ;
  object->setting_5F_nodeHashMapSize_init_21_ (in_mSetting, inCompiler) ;
  const GGS_setting_5F_nodeHashMapSize result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_setting_5F_nodeHashMapSize::
setting_5F_nodeHashMapSize_init_21_ (const GGS_luint & in_mSetting,
                                     Compiler * /* inCompiler */) {
  mProperty_mSetting = in_mSetting ;
}

//--------------------------------------------------------------------------------------------------

GGS_setting_5F_nodeHashMapSize::GGS_setting_5F_nodeHashMapSize (const cPtr_setting_5F_nodeHashMapSize * inSourcePtr) :
GGS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_setting_5F_nodeHashMapSize) ;
}
//--------------------------------------------------------------------------------------------------

GGS_setting_5F_nodeHashMapSize GGS_setting_5F_nodeHashMapSize::class_func_new (const GGS_luint & in_mSetting,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  GGS_setting_5F_nodeHashMapSize result ;
  macroMyNew (result.mObjectPtr, cPtr_setting_5F_nodeHashMapSize (in_mSetting,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_setting_5F_nodeHashMapSize::readProperty_mSetting (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_setting_5F_nodeHashMapSize * p = (cPtr_setting_5F_nodeHashMapSize *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setting_5F_nodeHashMapSize) ;
    return p->mProperty_mSetting ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_setting_5F_nodeHashMapSize::setProperty_mSetting (const GGS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_setting_5F_nodeHashMapSize * p = (cPtr_setting_5F_nodeHashMapSize *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setting_5F_nodeHashMapSize) ;
    p->mProperty_mSetting = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @setting_nodeHashMapSize class
//--------------------------------------------------------------------------------------------------

cPtr_setting_5F_nodeHashMapSize::cPtr_setting_5F_nodeHashMapSize (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (inCompiler COMMA_THERE),
mProperty_mSetting () {
}

//--------------------------------------------------------------------------------------------------

cPtr_setting_5F_nodeHashMapSize::cPtr_setting_5F_nodeHashMapSize (const GGS_luint & in_mSetting,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (inCompiler COMMA_THERE),
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

acPtr_class * cPtr_setting_5F_nodeHashMapSize::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_setting_5F_nodeHashMapSize (mProperty_mSetting, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_setting_5F_nodeHashMapSize::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFormula::printNonNullClassInstanceProperties () ;
    mProperty_mSetting.printNonNullClassInstanceProperties ("mSetting") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//
//     @setting_nodeHashMapSize generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize ("setting_nodeHashMapSize",
                                                                                  & kTypeDescriptor_GALGAS_abstractFormula) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_setting_5F_nodeHashMapSize::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_setting_5F_nodeHashMapSize::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_setting_5F_nodeHashMapSize (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setting_5F_nodeHashMapSize GGS_setting_5F_nodeHashMapSize::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_setting_5F_nodeHashMapSize result ;
  const GGS_setting_5F_nodeHashMapSize * p = (const GGS_setting_5F_nodeHashMapSize *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_setting_5F_nodeHashMapSize *> (p)) {
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

void cPtr_assignmentFormula::method_analyzeFormula (const GGS_string /* constinArgument_inSourceFilePath */,
                                                    const GGS_domainMap constinArgument_inDomainMap,
                                                    GGS_computedFormulaMap & ioArgument_ioComputedFormulaMap,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_totalBitCount_2740 = GGS_uint (uint32_t (0U)) ;
  GGS_varList temp_0 = GGS_varList::init (inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 78)) ;
  GGS_varList var_varList_2773 = temp_0 ;
  GGS_varMap temp_1 = GGS_varMap::init (inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 79)) ;
  GGS_varMap var_varMap_2800 = temp_1 ;
  const GGS_assignmentFormula temp_2 = this ;
  extensionMethod_analyze (temp_2.readProperty_mFormulaArgumentList (), constinArgument_inDomainMap, var_varMap_2800, var_varList_2773, var_totalBitCount_2740, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 80)) ;
  const GGS_assignmentFormula temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GGS_formulaKind::Enumeration::invalid:
    break ;
  case GGS_formulaKind::Enumeration::enum_assignment:
    {
      GGS_timer var_timer_3023 = GGS_timer::class_func_start (SOURCE_FILE ("formula-assignment.ggs", 85)) ;
      const GGS_assignmentFormula temp_4 = this ;
      GGS_binaryset var_result_3052 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_4.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_2800, var_totalBitCount_2740, ioArgument_ioComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 86)) ;
      {
      const GGS_assignmentFormula temp_5 = this ;
      ioArgument_ioComputedFormulaMap.setter_insertKey (temp_5.readProperty_mFormulaName (), var_varList_2773, var_totalBitCount_2740, var_result_3052, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 87)) ;
      }
      GGS_uint_36__34_ var_valueCount_3268 = var_result_3052.getter_valueCount (var_totalBitCount_2740, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 88)) ;
      GGS_uint_36__34_ var_nodeCount_3403 = var_result_3052.getter_nodeCount (SOURCE_FILE ("formula-assignment.ggs", 90)) ;
      {
      GGS_string temp_6 ;
      const enumGalgasBool test_7 = GGS_bool (ComparisonKind::greaterThan, var_valueCount_3268.objectCompare (GGS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        temp_6 = GGS_string ("s") ;
      }else if (kBoolFalse == test_7) {
        temp_6 = GGS_string::makeEmptyString () ;
      }
      GGS_string temp_8 ;
      const enumGalgasBool test_9 = GGS_bool (ComparisonKind::greaterThan, var_nodeCount_3403.objectCompare (GGS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = GGS_string ("s") ;
      }else if (kBoolFalse == test_9) {
        temp_8 = GGS_string::makeEmptyString () ;
      }
      routine_println_3F_ (GGS_string (" ").add_operation (var_valueCount_3268.getter_string (SOURCE_FILE ("formula-assignment.ggs", 91)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 91)).add_operation (GGS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 92)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 92)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 92)).add_operation (var_nodeCount_3403.getter_string (SOURCE_FILE ("formula-assignment.ggs", 93)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (GGS_string (" node"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (temp_8, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (var_timer_3023.getter_string (SOURCE_FILE ("formula-assignment.ggs", 94)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 94)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 94)), inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 91)) ;
      }
    }
    break ;
  case GGS_formulaKind::Enumeration::enum_fixedPoint:
    {
      GGS_binaryset extractedValue_3656_startValue_0 ;
      temp_3.readProperty_mKind ().getAssociatedValuesFor_fixedPoint (extractedValue_3656_startValue_0) ;
      GGS_timer var_timer_3725 = GGS_timer::class_func_start (SOURCE_FILE ("formula-assignment.ggs", 97)) ;
      GGS_binaryset var_result_3765 = extractedValue_3656_startValue_0 ;
      {
      const GGS_assignmentFormula temp_10 = this ;
      ioArgument_ioComputedFormulaMap.setter_insertKey (temp_10.readProperty_mFormulaName (), var_varList_2773, var_totalBitCount_2740, var_result_3765, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 99)) ;
      }
      GGS_bool var_iterate_3886 = GGS_bool (true) ;
      GGS_bigint var_iterationCount_3911 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 101)) ;
      if (GGS_uint::class_func_max (SOURCE_FILE ("formula-assignment.ggs", 102)).isValid ()) {
        uint32_t variant_3934 = GGS_uint::class_func_max (SOURCE_FILE ("formula-assignment.ggs", 102)).uintValue () ;
        bool loop_3934 = true ;
        while (loop_3934) {
          loop_3934 = var_iterate_3886.isValid () ;
          if (loop_3934) {
            loop_3934 = var_iterate_3886.boolValue () ;
          }
          if (loop_3934 && (0 == variant_3934)) {
            loop_3934 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("formula-assignment.ggs", 102)) ;
          }
          if (loop_3934) {
            variant_3934 -- ;
            var_iterationCount_3911.plusAssign_operation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 103)), inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 103)) ;
            const GGS_assignmentFormula temp_11 = this ;
            GGS_binaryset var_r_4004 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_11.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_2800, var_totalBitCount_2740, ioArgument_ioComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 104)) ;
            enumGalgasBool test_12 = kBoolTrue ;
            if (kBoolTrue == test_12) {
              test_12 = GGS_bool (ComparisonKind::equal, var_result_3765.objectCompare (var_r_4004)).boolEnum () ;
              if (kBoolTrue == test_12) {
                var_iterate_3886 = GGS_bool (false) ;
              }
            }
            if (kBoolFalse == test_12) {
              var_result_3765 = var_r_4004 ;
              {
              const GGS_assignmentFormula temp_13 = this ;
              ioArgument_ioComputedFormulaMap.setter_setMValueForKey (var_result_3765, temp_13.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 109)) ;
              }
            }
          }
        }
      }
      GGS_uint_36__34_ var_valueCount_4304 = var_result_3765.getter_valueCount (var_totalBitCount_2740, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 112)) ;
      GGS_uint_36__34_ var_nodeCount_4367 = var_result_3765.getter_nodeCount (SOURCE_FILE ("formula-assignment.ggs", 113)) ;
      {
      GGS_string temp_14 ;
      const enumGalgasBool test_15 = GGS_bool (ComparisonKind::greaterThan, var_iterationCount_3911.objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 115)))).boolEnum () ;
      if (kBoolTrue == test_15) {
        temp_14 = GGS_string ("s") ;
      }else if (kBoolFalse == test_15) {
        temp_14 = GGS_string::makeEmptyString () ;
      }
      GGS_string temp_16 ;
      const enumGalgasBool test_17 = GGS_bool (ComparisonKind::greaterThan, var_valueCount_4304.objectCompare (GGS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (kBoolTrue == test_17) {
        temp_16 = GGS_string ("s") ;
      }else if (kBoolFalse == test_17) {
        temp_16 = GGS_string::makeEmptyString () ;
      }
      GGS_string temp_18 ;
      const enumGalgasBool test_19 = GGS_bool (ComparisonKind::greaterThan, var_nodeCount_4367.objectCompare (GGS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (kBoolTrue == test_19) {
        temp_18 = GGS_string ("s") ;
      }else if (kBoolFalse == test_19) {
        temp_18 = GGS_string::makeEmptyString () ;
      }
      routine_println_3F_ (GGS_string (" ").add_operation (var_iterationCount_3911.getter_string (SOURCE_FILE ("formula-assignment.ggs", 114)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 114)).add_operation (GGS_string (" iteration"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 115)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 115)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 115)).add_operation (var_valueCount_4304.getter_string (SOURCE_FILE ("formula-assignment.ggs", 116)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (GGS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (var_nodeCount_4367.getter_string (SOURCE_FILE ("formula-assignment.ggs", 117)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (GGS_string (" node"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (var_timer_3725.getter_string (SOURCE_FILE ("formula-assignment.ggs", 118)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 118)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 118)), inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 114)) ;
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

void cPtr_setting_5F_nodeHashMapSize::method_analyzeFormula (const GGS_string /* constinArgument_inSourceFilePath */,
                                                             const GGS_domainMap /* constinArgument_inDomainMap */,
                                                             GGS_computedFormulaMap & /* ioArgument_ioComputedFormulaMap */,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_setting_5F_nodeHashMapSize temp_0 = this ;
  GGS_binaryset::class_method_setNodeTableSize (temp_0.readProperty_mSetting ().readProperty_uint () COMMA_SOURCE_FILE ("setting-map.ggs", 52)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setting_andCacheMapSize analyzeFormula'
//
//--------------------------------------------------------------------------------------------------

void cPtr_setting_5F_andCacheMapSize::method_analyzeFormula (const GGS_string /* constinArgument_inSourceFilePath */,
                                                             const GGS_domainMap /* constinArgument_inDomainMap */,
                                                             GGS_computedFormulaMap & /* ioArgument_ioComputedFormulaMap */,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_setting_5F_andCacheMapSize temp_0 = this ;
  GGS_binaryset::class_method_setAndTableSize (temp_0.readProperty_mSetting ().readProperty_uint () COMMA_SOURCE_FILE ("setting-map.ggs", 62)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dumpFormula analyzeFormula'
//
//--------------------------------------------------------------------------------------------------

void cPtr_dumpFormula::method_analyzeFormula (const GGS_string /* constinArgument_inSourceFilePath */,
                                              const GGS_domainMap /* constinArgument_inDomainMap */,
                                              GGS_computedFormulaMap & ioArgument_ioComputedFormulaMap,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_varList var_varList_1685 ;
  GGS_uint var_bitCount_1699 ;
  GGS_binaryset var_result_1714 ;
  const GGS_dumpFormula temp_0 = this ;
  ioArgument_ioComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_1685, var_bitCount_1699, var_result_1714, inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 37)) ;
  GGS_uint_36__34_ var_valueCount_1736 = var_result_1714.getter_valueCount (var_bitCount_1699, inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 38)) ;
  {
  const GGS_dumpFormula temp_1 = this ;
  GGS_string temp_2 ;
  const enumGalgasBool test_3 = GGS_bool (ComparisonKind::greaterThan, var_valueCount_1736.objectCompare (GGS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GGS_string ("s") ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GGS_string::makeEmptyString () ;
  }
  routine_println_3F_ (GGS_string ("Dump $").add_operation (temp_1.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (var_valueCount_1736.getter_string (SOURCE_FILE ("formula-dump.ggs", 39)), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GGS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)), inCompiler  COMMA_SOURCE_FILE ("formula-dump.ggs", 39)) ;
  }
  GGS_stringlist temp_4 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 40)) ;
  GGS_stringlist var_nameList_1916 = temp_4 ;
  GGS_uintlist temp_5 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 41)) ;
  GGS_uintlist var_bitCountList_1946 = temp_5 ;
  cEnumerator_varList enumerator_1984 (var_varList_1685, EnumerationOrder::up) ;
  while (enumerator_1984.hasCurrentObject ()) {
    {
    var_nameList_1916.setter_append (enumerator_1984.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 43)) ;
    }
    {
    var_bitCountList_1946.setter_append (enumerator_1984.current_mBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 44)) ;
    }
    enumerator_1984.gotoNextObject () ;
  }
  {
  routine_println_3F_ (var_result_1714.getter_print (var_nameList_1916, var_bitCountList_1946 COMMA_SOURCE_FILE ("formula-dump.ggs", 46)), inCompiler  COMMA_SOURCE_FILE ("formula-dump.ggs", 46)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphvizFormula analyzeFormula'
//
//--------------------------------------------------------------------------------------------------

void cPtr_graphvizFormula::method_analyzeFormula (const GGS_string constinArgument_inSourceFilePath,
                                                  const GGS_domainMap /* constinArgument_inDomainMap */,
                                                  GGS_computedFormulaMap & ioArgument_ioComputedFormulaMap,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_varList var_varList_1693 ;
  GGS_binaryset var_result_1711 ;
  const GGS_graphvizFormula temp_0 = this ;
  GGS_uint joker_1702 ; // Joker input parameter
  ioArgument_ioComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_1693, joker_1702, var_result_1711, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 37)) ;
  const GGS_graphvizFormula temp_1 = this ;
  GGS_string var_filePath_1725 = constinArgument_inSourceFilePath.getter_stringByDeletingPathExtension (SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (temp_1.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)) ;
  {
  const GGS_graphvizFormula temp_2 = this ;
  routine_println_3F_ (GGS_string ("Graphviz $").add_operation (temp_2.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)).add_operation (var_filePath_1725, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)), inCompiler  COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)) ;
  }
  GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 40)) ;
  GGS_stringlist var_bitNameList_1904 = temp_3 ;
  cEnumerator_varList enumerator_1943 (var_varList_1693, EnumerationOrder::down) ;
  while (enumerator_1943.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::equal, enumerator_1943.current_mBitCount (HERE).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        var_bitNameList_1904.setter_append (enumerator_1943.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 43)) ;
        }
      }
    }
    if (kBoolFalse == test_4) {
      cEnumerator_range enumerator_2063 (GGS_range (GGS_uint (uint32_t (0U)), enumerator_1943.current_mBitCount (HERE).substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 45))), EnumerationOrder::up) ;
      while (enumerator_2063.hasCurrentObject ()) {
        {
        var_bitNameList_1904.setter_append (enumerator_1943.current_mVarName (HERE).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46)).add_operation (enumerator_2063.current (HERE).getter_string (SOURCE_FILE ("formula-graphviz.ggs", 46)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46)) ;
        }
        enumerator_2063.gotoNextObject () ;
      }
    }
    enumerator_1943.gotoNextObject () ;
  }
  GGS_string var_s_2156 = var_result_1711.getter_graphviz (var_bitNameList_1904 COMMA_SOURCE_FILE ("formula-graphviz.ggs", 50)) ;
  GGS_bool joker_2240 ; // Joker input parameter
  var_s_2156.method_writeToFileWhenDifferentContents (var_filePath_1725, joker_2240, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 51)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@varInExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_varInExpression::getter_computeExpression (const GGS_domainMap /* constinArgument_inDomainMap */,
                                                              const GGS_varMap constinArgument_inVarMap,
                                                              const GGS_uint /* constinArgument_inTotalBitCount */,
                                                              const GGS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  GGS_uint var_idx_10646 ;
  GGS_uint var_bitCount_10656 ;
  GGS_recordDomainMap var_subdomainMap_10671 ;
  const GGS_varInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_10646, var_bitCount_10656, var_subdomainMap_10671, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 354)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_subdomainMap_10671.getter_count (SOURCE_FILE ("expression.ggs", 355)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_varInExpression temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mVarName ().readProperty_location (), GGS_string ("variable is a record; use dot notation"), fixItArray3  COMMA_SOURCE_FILE ("expression.ggs", 356)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, var_bitCount_10656.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GGS_varInExpression temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mVarName ().readProperty_location (), GGS_string ("variable is not boolean; use {...} or dot notation"), fixItArray6  COMMA_SOURCE_FILE ("expression.ggs", 358)) ;
      }
    }
  }
  result_outResult = GGS_binaryset::class_func_binarySetWithBit (var_idx_10646, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 360)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@varBitInExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_varBitInExpression::getter_computeExpression (const GGS_domainMap /* constinArgument_inDomainMap */,
                                                                 const GGS_varMap constinArgument_inVarMap,
                                                                 const GGS_uint /* constinArgument_inTotalBitCount */,
                                                                 const GGS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  GGS_uint var_idx_11333 ;
  GGS_uint var_bitCount_11343 ;
  GGS_recordDomainMap var_subdomainMap_11358 ;
  const GGS_varBitInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_11333, var_bitCount_11343, var_subdomainMap_11358, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 372)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_subdomainMap_11358.getter_count (SOURCE_FILE ("expression.ggs", 373)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_varBitInExpression temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mVarName ().readProperty_location (), GGS_string ("variable is a record; use dot notation"), fixItArray3  COMMA_SOURCE_FILE ("expression.ggs", 374)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      const GGS_varBitInExpression temp_5 = this ;
      test_4 = GGS_bool (ComparisonKind::lowerOrEqual, var_bitCount_11343.objectCompare (temp_5.readProperty_mVarBit ().readProperty_uint ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GGS_varBitInExpression temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mVarBit ().readProperty_location (), GGS_string ("bit index should be < ").add_operation (var_bitCount_11343.getter_string (SOURCE_FILE ("expression.ggs", 376)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 376)), fixItArray7  COMMA_SOURCE_FILE ("expression.ggs", 376)) ;
      }
    }
  }
  const GGS_varBitInExpression temp_8 = this ;
  result_outResult = GGS_binaryset::class_func_binarySetWithBit (var_idx_11333.add_operation (temp_8.readProperty_mVarBit ().readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 378)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 378)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@andExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_andExpression::getter_computeExpression (const GGS_domainMap constinArgument_inDomainMap,
                                                            const GGS_varMap constinArgument_inVarMap,
                                                            const GGS_uint constinArgument_inTotalBitCount,
                                                            const GGS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  const GGS_andExpression temp_0 = this ;
  GGS_binaryset var_left_11975 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 390)) ;
  const GGS_andExpression temp_1 = this ;
  GGS_binaryset var_right_12095 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 391)) ;
  result_outResult = var_left_11975.operator_and (var_right_12095 COMMA_SOURCE_FILE ("expression.ggs", 392)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@orExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_orExpression::getter_computeExpression (const GGS_domainMap constinArgument_inDomainMap,
                                                           const GGS_varMap constinArgument_inVarMap,
                                                           const GGS_uint constinArgument_inTotalBitCount,
                                                           const GGS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  const GGS_orExpression temp_0 = this ;
  GGS_binaryset var_left_12557 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 404)) ;
  const GGS_orExpression temp_1 = this ;
  GGS_binaryset var_right_12677 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 405)) ;
  result_outResult = var_left_12557.operator_or (var_right_12677 COMMA_SOURCE_FILE ("expression.ggs", 406)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@xorExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_xorExpression::getter_computeExpression (const GGS_domainMap constinArgument_inDomainMap,
                                                            const GGS_varMap constinArgument_inVarMap,
                                                            const GGS_uint constinArgument_inTotalBitCount,
                                                            const GGS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  const GGS_xorExpression temp_0 = this ;
  GGS_binaryset var_left_13140 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 418)) ;
  const GGS_xorExpression temp_1 = this ;
  GGS_binaryset var_right_13260 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 419)) ;
  result_outResult = var_left_13140.operator_xor (var_right_13260 COMMA_SOURCE_FILE ("expression.ggs", 420)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@impliesExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_impliesExpression::getter_computeExpression (const GGS_domainMap constinArgument_inDomainMap,
                                                                const GGS_varMap constinArgument_inVarMap,
                                                                const GGS_uint constinArgument_inTotalBitCount,
                                                                const GGS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  const GGS_impliesExpression temp_0 = this ;
  GGS_binaryset var_left_13727 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 432)) ;
  const GGS_impliesExpression temp_1 = this ;
  GGS_binaryset var_right_13847 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 433)) ;
  result_outResult = var_left_13727.getter_implies (var_right_13847 COMMA_SOURCE_FILE ("expression.ggs", 434)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@equalExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_equalExpression::getter_computeExpression (const GGS_domainMap constinArgument_inDomainMap,
                                                              const GGS_varMap constinArgument_inVarMap,
                                                              const GGS_uint constinArgument_inTotalBitCount,
                                                              const GGS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  const GGS_equalExpression temp_0 = this ;
  GGS_binaryset var_left_14320 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 446)) ;
  const GGS_equalExpression temp_1 = this ;
  GGS_binaryset var_right_14440 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 447)) ;
  result_outResult = var_left_14320.operator_xor (var_right_14440 COMMA_SOURCE_FILE ("expression.ggs", 448)).operator_tilde (SOURCE_FILE ("expression.ggs", 448)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@notEqualExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_notEqualExpression::getter_computeExpression (const GGS_domainMap constinArgument_inDomainMap,
                                                                 const GGS_varMap constinArgument_inVarMap,
                                                                 const GGS_uint constinArgument_inTotalBitCount,
                                                                 const GGS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  const GGS_notEqualExpression temp_0 = this ;
  GGS_binaryset var_left_14911 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 460)) ;
  const GGS_notEqualExpression temp_1 = this ;
  GGS_binaryset var_right_15031 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 461)) ;
  result_outResult = var_left_14911.operator_xor (var_right_15031 COMMA_SOURCE_FILE ("expression.ggs", 462)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@complementExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_complementExpression::getter_computeExpression (const GGS_domainMap constinArgument_inDomainMap,
                                                                   const GGS_varMap constinArgument_inVarMap,
                                                                   const GGS_uint constinArgument_inTotalBitCount,
                                                                   const GGS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  const GGS_complementExpression temp_0 = this ;
  result_outResult = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 474)).operator_tilde (SOURCE_FILE ("expression.ggs", 474)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@trueExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_trueExpression::getter_computeExpression (const GGS_domainMap /* constinArgument_inDomainMap */,
                                                             const GGS_varMap /* constinArgument_inVarMap */,
                                                             const GGS_uint /* constinArgument_inTotalBitCount */,
                                                             const GGS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                             Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  result_outResult = GGS_binaryset::class_func_fullBinarySet (SOURCE_FILE ("expression.ggs", 486)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@falseExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_falseExpression::getter_computeExpression (const GGS_domainMap /* constinArgument_inDomainMap */,
                                                              const GGS_varMap /* constinArgument_inVarMap */,
                                                              const GGS_uint /* constinArgument_inTotalBitCount */,
                                                              const GGS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                              Compiler */* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  result_outResult = GGS_binaryset::class_func_emptyBinarySet (SOURCE_FILE ("expression.ggs", 498)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@formulaInExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_formulaInExpression::getter_computeExpression (const GGS_domainMap /* constinArgument_inDomainMap */,
                                                                  const GGS_varMap constinArgument_inVarMap,
                                                                  const GGS_uint /* constinArgument_inTotalBitCount */,
                                                                  const GGS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  GGS_varList var_varList_16794 ;
  GGS_uint var_totalBitCount_16815 ;
  GGS_binaryset var_formulaValue_16835 ;
  const GGS_formulaInExpression temp_0 = this ;
  constinArgument_inComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_16794, var_totalBitCount_16815, var_formulaValue_16835, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 511)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GGS_formulaInExpression temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression.ggs", 513)).objectCompare (var_varList_16794.getter_count (SOURCE_FILE ("expression.ggs", 513)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GGS_formulaInExpression temp_3 = this ;
      const GGS_formulaInExpression temp_4 = this ;
      GGS_string temp_5 ;
      const enumGalgasBool test_6 = GGS_bool (ComparisonKind::greaterThan, var_varList_16794.getter_count (SOURCE_FILE ("expression.ggs", 515)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GGS_string ("s") ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GGS_string::makeEmptyString () ;
      }
      const GGS_formulaInExpression temp_7 = this ;
      const GGS_formulaInExpression temp_8 = this ;
      GGS_string temp_9 ;
      const enumGalgasBool test_10 = GGS_bool (ComparisonKind::greaterThan, temp_8.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression.ggs", 517)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GGS_string ("s") ;
      }else if (kBoolFalse == test_10) {
        temp_9 = GGS_string::makeEmptyString () ;
      }
      TC_Array <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mFormulaName ().readProperty_location (), GGS_string ("the $").add_operation (temp_4.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (GGS_string (" names "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (var_varList_16794.getter_count (SOURCE_FILE ("expression.ggs", 515)).getter_string (SOURCE_FILE ("expression.ggs", 514)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (GGS_string (" variable"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (GGS_string (", but this call names "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (temp_7.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression.ggs", 517)).getter_string (SOURCE_FILE ("expression.ggs", 516)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 516)).add_operation (GGS_string (" variable"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 517)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 517)), fixItArray11  COMMA_SOURCE_FILE ("expression.ggs", 514)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GGS_uintlist temp_12 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 520)) ;
    GGS_uintlist var_transformationList_17281 = temp_12 ;
    const GGS_formulaInExpression temp_13 = this ;
    cEnumerator_varList enumerator_17331 (var_varList_16794, EnumerationOrder::down) ;
    cEnumerator_formulaParameterListInExpression enumerator_17377 (temp_13.readProperty_mParameterList (), EnumerationOrder::down) ;
    while (enumerator_17331.hasCurrentObject () && enumerator_17377.hasCurrentObject ()) {
      GGS_uint var_parameterIndex_17467 ;
      GGS_uint var_parameterBitCount_17490 ;
      GGS_recordDomainMap var_subdomainMap_17527 ;
      constinArgument_inVarMap.method_searchKey (enumerator_17377.current_mParameterName (HERE), var_parameterIndex_17467, var_parameterBitCount_17490, var_subdomainMap_17527, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 522)) ;
      cEnumerator_lstringlist enumerator_17552 (enumerator_17377.current_mFieldNames (HERE), EnumerationOrder::up) ;
      while (enumerator_17552.hasCurrentObject ()) {
        GGS_uint var_fieldRelativeBitIndex_17632 ;
        GGS_recordDomainMap var_fieldSubdomainMap_17680 ;
        var_subdomainMap_17527.method_searchKey (enumerator_17552.current_mValue (HERE), var_fieldRelativeBitIndex_17632, var_parameterBitCount_17490, var_fieldSubdomainMap_17680, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 524)) ;
        var_parameterIndex_17467 = var_parameterIndex_17467.add_operation (var_fieldRelativeBitIndex_17632, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 525)) ;
        var_subdomainMap_17527 = var_fieldSubdomainMap_17680 ;
        enumerator_17552.gotoNextObject () ;
      }
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = GGS_bool (ComparisonKind::notEqual, enumerator_17331.current_mBitCount (HERE).objectCompare (var_parameterBitCount_17490)).boolEnum () ;
        if (kBoolTrue == test_14) {
          GGS_string temp_15 ;
          const enumGalgasBool test_16 = GGS_bool (ComparisonKind::greaterThan, var_parameterBitCount_17490.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_16) {
            temp_15 = GGS_string ("s") ;
          }else if (kBoolFalse == test_16) {
            temp_15 = GGS_string::makeEmptyString () ;
          }
          GGS_string temp_17 ;
          const enumGalgasBool test_18 = GGS_bool (ComparisonKind::greaterThan, enumerator_17331.current_mBitCount (HERE).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_18) {
            temp_17 = GGS_string ("s") ;
          }else if (kBoolFalse == test_18) {
            temp_17 = GGS_string::makeEmptyString () ;
          }
          TC_Array <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (enumerator_17377.current_mParameterName (HERE).readProperty_location (), GGS_string ("this parameter is declared with a size of ").add_operation (var_parameterBitCount_17490.getter_string (SOURCE_FILE ("expression.ggs", 529)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 529)).add_operation (GGS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (temp_15, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (GGS_string (", but corresponding formal argument '"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (enumerator_17331.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (GGS_string ("' is declared with a size of "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (enumerator_17331.current_mBitCount (HERE).getter_string (SOURCE_FILE ("expression.ggs", 531)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (GGS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 532)).add_operation (temp_17, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 532)), fixItArray19  COMMA_SOURCE_FILE ("expression.ggs", 529)) ;
        }
      }
      cEnumerator_range enumerator_18237 (GGS_range (GGS_uint (uint32_t (0U)), var_parameterBitCount_17490.substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 534))), EnumerationOrder::up) ;
      while (enumerator_18237.hasCurrentObject ()) {
        {
        var_transformationList_17281.setter_append (var_parameterIndex_17467.add_operation (enumerator_18237.current (HERE), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 535)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 535)) ;
        }
        enumerator_18237.gotoNextObject () ;
      }
      enumerator_17331.gotoNextObject () ;
      enumerator_17377.gotoNextObject () ;
    }
    result_outResult = var_formulaValue_16835.getter_transformedBy (var_transformationList_17281 COMMA_SOURCE_FILE ("expression.ggs", 538)) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@existInExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_existInExpression::getter_computeExpression (const GGS_domainMap constinArgument_inDomainMap,
                                                                const GGS_varMap constinArgument_inVarMap,
                                                                const GGS_uint constinArgument_inTotalBitCount,
                                                                const GGS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  GGS_varMap var_varMap_18736 = constinArgument_inVarMap ;
  GGS_uint var_totalBitCount_18766 = constinArgument_inTotalBitCount ;
  GGS_varList var_unusedVarList_18805 = GGS_varList::init (inCompiler COMMA_HERE) ;
  const GGS_existInExpression temp_0 = this ;
  extensionMethod_analyze (temp_0.readProperty_mArgumentList (), constinArgument_inDomainMap, var_varMap_18736, var_unusedVarList_18805, var_totalBitCount_18766, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 554)) ;
  const GGS_existInExpression temp_1 = this ;
  GGS_binaryset var_r_18927 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_18736, var_totalBitCount_18766, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 555)) ;
  result_outResult = var_r_18927.getter_existOnBitIndexAndBeyond (constinArgument_inTotalBitCount COMMA_SOURCE_FILE ("expression.ggs", 556)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@forAllInExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_forAllInExpression::getter_computeExpression (const GGS_domainMap constinArgument_inDomainMap,
                                                                 const GGS_varMap constinArgument_inVarMap,
                                                                 const GGS_uint constinArgument_inTotalBitCount,
                                                                 const GGS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  GGS_varMap var_varMap_19423 = constinArgument_inVarMap ;
  GGS_uint var_totalBitCount_19453 = constinArgument_inTotalBitCount ;
  GGS_varList var_unusedVarList_19492 = GGS_varList::init (inCompiler COMMA_HERE) ;
  const GGS_forAllInExpression temp_0 = this ;
  extensionMethod_analyze (temp_0.readProperty_mArgumentList (), constinArgument_inDomainMap, var_varMap_19423, var_unusedVarList_19492, var_totalBitCount_19453, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 571)) ;
  const GGS_forAllInExpression temp_1 = this ;
  GGS_binaryset var_r_19614 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_19423, var_totalBitCount_19453, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 572)) ;
  result_outResult = var_r_19614.getter_forAllOnBitIndexAndBeyond (constinArgument_inTotalBitCount COMMA_SOURCE_FILE ("expression.ggs", 573)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@comparisonWithConstantInExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_comparisonWithConstantInExpression::getter_computeExpression (const GGS_domainMap /* constinArgument_inDomainMap */,
                                                                                 const GGS_varMap constinArgument_inVarMap,
                                                                                 const GGS_uint /* constinArgument_inTotalBitCount */,
                                                                                 const GGS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  GGS_uint var_idx_20178 ;
  GGS_uint var_bitCount_20190 ;
  GGS_recordDomainMap var_subDomainMap_20218 ;
  const GGS_comparisonWithConstantInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_20178, var_bitCount_20190, var_subDomainMap_20218, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 585)) ;
  const GGS_comparisonWithConstantInExpression temp_1 = this ;
  cEnumerator_lstringlist enumerator_20239 (temp_1.readProperty_mFieldNames (), EnumerationOrder::up) ;
  while (enumerator_20239.hasCurrentObject ()) {
    GGS_uint var_fieldRelativeBitIndex_20318 ;
    GGS_recordDomainMap var_fieldSubdomainMap_20357 ;
    var_subDomainMap_20218.method_searchKey (enumerator_20239.current_mValue (HERE), var_fieldRelativeBitIndex_20318, var_bitCount_20190, var_fieldSubdomainMap_20357, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 587)) ;
    var_idx_20178 = var_idx_20178.add_operation (var_fieldRelativeBitIndex_20318, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 588)) ;
    var_subDomainMap_20218 = var_fieldSubdomainMap_20357 ;
    enumerator_20239.gotoNextObject () ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_subDomainMap_20218.getter_count (SOURCE_FILE ("expression.ggs", 591)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_comparisonWithConstantInExpression temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mVarName ().readProperty_location (), GGS_string ("variable is a record; use dot notation"), fixItArray4  COMMA_SOURCE_FILE ("expression.ggs", 592)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GGS_comparisonWithConstantInExpression temp_6 = this ;
      test_5 = GGS_bool (ComparisonKind::greaterThan, temp_6.readProperty_mConstant ().readProperty_uint ().getter_significantBitCount (SOURCE_FILE ("expression.ggs", 593)).objectCompare (var_bitCount_20190)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GGS_comparisonWithConstantInExpression temp_7 = this ;
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mConstant ().readProperty_location (), GGS_string ("Constant too large (should be < 2**").add_operation (var_bitCount_20190.getter_string (SOURCE_FILE ("expression.ggs", 594)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 594)), fixItArray8  COMMA_SOURCE_FILE ("expression.ggs", 594)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GGS_comparisonWithConstantInExpression temp_9 = this ;
      switch (temp_9.readProperty_mComparison ().enumValue ()) {
      case GGS_comparison::Enumeration::invalid:
        break ;
      case GGS_comparison::Enumeration::enum_equal:
        {
          const GGS_comparisonWithConstantInExpression temp_10 = this ;
          result_outResult = GGS_binaryset::class_func_binarySetWithEqualToConstant (var_idx_20178, var_bitCount_20190, temp_10.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 598)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 598)) ;
        }
        break ;
      case GGS_comparison::Enumeration::enum_notEqual:
        {
          const GGS_comparisonWithConstantInExpression temp_11 = this ;
          result_outResult = GGS_binaryset::class_func_binarySetWithNotEqualToConstant (var_idx_20178, var_bitCount_20190, temp_11.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 600)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 600)) ;
        }
        break ;
      case GGS_comparison::Enumeration::enum_lowerOrEqual:
        {
          const GGS_comparisonWithConstantInExpression temp_12 = this ;
          result_outResult = GGS_binaryset::class_func_binarySetWithLowerOrEqualToConstant (var_idx_20178, var_bitCount_20190, temp_12.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 602)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 602)) ;
        }
        break ;
      case GGS_comparison::Enumeration::enum_lowerThan:
        {
          const GGS_comparisonWithConstantInExpression temp_13 = this ;
          result_outResult = GGS_binaryset::class_func_binarySetWithStrictLowerThanConstant (var_idx_20178, var_bitCount_20190, temp_13.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 604)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 604)) ;
        }
        break ;
      case GGS_comparison::Enumeration::enum_greaterOrEqual:
        {
          const GGS_comparisonWithConstantInExpression temp_14 = this ;
          result_outResult = GGS_binaryset::class_func_binarySetWithGreaterOrEqualToConstant (var_idx_20178, var_bitCount_20190, temp_14.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 606)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 606)) ;
        }
        break ;
      case GGS_comparison::Enumeration::enum_greaterThan:
        {
          const GGS_comparisonWithConstantInExpression temp_15 = this ;
          result_outResult = GGS_binaryset::class_func_binarySetWithStrictGreaterThanConstant (var_idx_20178, var_bitCount_20190, temp_15.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 608)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 608)) ;
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

GGS_binaryset cPtr_variableComparisonInExpression::getter_computeExpression (const GGS_domainMap /* constinArgument_inDomainMap */,
                                                                             const GGS_varMap constinArgument_inVarMap,
                                                                             const GGS_uint /* constinArgument_inTotalBitCount */,
                                                                             const GGS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  GGS_uint var_leftIdx_22006 ;
  GGS_uint var_leftBitCount_22023 ;
  GGS_recordDomainMap var_leftSubDomainMap_22056 ;
  const GGS_variableComparisonInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mLeftVarName (), var_leftIdx_22006, var_leftBitCount_22023, var_leftSubDomainMap_22056, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 622)) ;
  const GGS_variableComparisonInExpression temp_1 = this ;
  cEnumerator_lstringlist enumerator_22081 (temp_1.readProperty_mLeftFieldNames (), EnumerationOrder::up) ;
  while (enumerator_22081.hasCurrentObject ()) {
    GGS_uint var_fieldRelativeBitIndex_22168 ;
    GGS_recordDomainMap var_fieldSubdomainMap_22211 ;
    var_leftSubDomainMap_22056.method_searchKey (enumerator_22081.current_mValue (HERE), var_fieldRelativeBitIndex_22168, var_leftBitCount_22023, var_fieldSubdomainMap_22211, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 624)) ;
    var_leftIdx_22006 = var_leftIdx_22006.add_operation (var_fieldRelativeBitIndex_22168, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 625)) ;
    var_leftSubDomainMap_22056 = var_fieldSubdomainMap_22211 ;
    enumerator_22081.gotoNextObject () ;
  }
  GGS_uint var_rightIdx_22373 ;
  GGS_uint var_rightBitCount_22390 ;
  GGS_recordDomainMap var_rightSubDomainMap_22423 ;
  const GGS_variableComparisonInExpression temp_2 = this ;
  constinArgument_inVarMap.method_searchKey (temp_2.readProperty_mRightVarName (), var_rightIdx_22373, var_rightBitCount_22390, var_rightSubDomainMap_22423, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 628)) ;
  const GGS_variableComparisonInExpression temp_3 = this ;
  cEnumerator_lstringlist enumerator_22449 (temp_3.readProperty_mRightFieldNames (), EnumerationOrder::up) ;
  while (enumerator_22449.hasCurrentObject ()) {
    GGS_uint var_fieldRelativeBitIndex_22538 ;
    GGS_recordDomainMap var_fieldSubdomainMap_22582 ;
    var_rightSubDomainMap_22423.method_searchKey (enumerator_22449.current_mValue (HERE), var_fieldRelativeBitIndex_22538, var_rightBitCount_22390, var_fieldSubdomainMap_22582, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 630)) ;
    var_rightIdx_22373 = var_rightIdx_22373.add_operation (var_fieldRelativeBitIndex_22538, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 631)) ;
    var_rightSubDomainMap_22423 = var_fieldSubdomainMap_22582 ;
    enumerator_22449.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::greaterThan, var_leftSubDomainMap_22056.getter_count (SOURCE_FILE ("expression.ggs", 634)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GGS_variableComparisonInExpression temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mLeftVarName ().readProperty_location (), GGS_string ("variable is a record; use dot notation"), fixItArray6  COMMA_SOURCE_FILE ("expression.ggs", 635)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_4) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::greaterThan, var_rightSubDomainMap_22423.getter_count (SOURCE_FILE ("expression.ggs", 636)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        const GGS_variableComparisonInExpression temp_8 = this ;
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mRightVarName ().readProperty_location (), GGS_string ("variable is a record; use dot notation"), fixItArray9  COMMA_SOURCE_FILE ("expression.ggs", 637)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_7) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GGS_bool (ComparisonKind::notEqual, var_leftBitCount_22023.objectCompare (var_rightBitCount_22390)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GGS_variableComparisonInExpression temp_11 = this ;
          const GGS_variableComparisonInExpression temp_12 = this ;
          GGS_string temp_13 ;
          const enumGalgasBool test_14 = GGS_bool (ComparisonKind::greaterThan, var_leftBitCount_22023.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = GGS_string ("s") ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GGS_string::makeEmptyString () ;
          }
          GGS_string temp_15 ;
          const enumGalgasBool test_16 = GGS_bool (ComparisonKind::greaterThan, var_rightBitCount_22390.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_16) {
            temp_15 = GGS_string ("s") ;
          }else if (kBoolFalse == test_16) {
            temp_15 = GGS_string::makeEmptyString () ;
          }
          TC_Array <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mRightVarName ().readProperty_location (), GGS_string ("'").add_operation (temp_12.readProperty_mLeftVarName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 639)).add_operation (GGS_string ("' variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 639)).add_operation (var_leftBitCount_22023.getter_string (SOURCE_FILE ("expression.ggs", 639)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 639)).add_operation (GGS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 640)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 640)).add_operation (GGS_string (", but this variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 640)).add_operation (var_rightBitCount_22390.getter_string (SOURCE_FILE ("expression.ggs", 641)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 641)).add_operation (GGS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 642)).add_operation (temp_15, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 642)), fixItArray17  COMMA_SOURCE_FILE ("expression.ggs", 639)) ;
          result_outResult.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_10) {
        const GGS_variableComparisonInExpression temp_18 = this ;
        switch (temp_18.readProperty_mComparison ().enumValue ()) {
        case GGS_comparison::Enumeration::invalid:
          break ;
        case GGS_comparison::Enumeration::enum_equal:
          {
            result_outResult = GGS_binaryset::class_func_binarySetWithEqualComparison (var_leftIdx_22006, var_leftBitCount_22023, var_rightIdx_22373, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 647)) ;
          }
          break ;
        case GGS_comparison::Enumeration::enum_notEqual:
          {
            result_outResult = GGS_binaryset::class_func_binarySetWithNotEqualComparison (var_leftIdx_22006, var_leftBitCount_22023, var_rightIdx_22373, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 649)) ;
          }
          break ;
        case GGS_comparison::Enumeration::enum_lowerOrEqual:
          {
            result_outResult = GGS_binaryset::class_func_binarySetWithLowerOrEqualComparison (var_leftIdx_22006, var_leftBitCount_22023, var_rightIdx_22373, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 651)) ;
          }
          break ;
        case GGS_comparison::Enumeration::enum_lowerThan:
          {
            result_outResult = GGS_binaryset::class_func_binarySetWithStrictLowerComparison (var_leftIdx_22006, var_leftBitCount_22023, var_rightIdx_22373, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 653)) ;
          }
          break ;
        case GGS_comparison::Enumeration::enum_greaterOrEqual:
          {
            result_outResult = GGS_binaryset::class_func_binarySetWithGreaterOrEqualComparison (var_leftIdx_22006, var_leftBitCount_22023, var_rightIdx_22373, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 655)) ;
          }
          break ;
        case GGS_comparison::Enumeration::enum_greaterThan:
          {
            result_outResult = GGS_binaryset::class_func_binarySetWithStrictGreaterComparison (var_leftIdx_22006, var_leftBitCount_22023, var_rightIdx_22373, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 657)) ;
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

static void routine_programRule_5F__30_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ast var_ast_769 ;
  var_ast_769.drop () ;
  cGrammar_kerbdd_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_ast_769  COMMA_SOURCE_FILE ("program.ggs", 17)) ;
  GGS_domainMap var_domainMap_856 ;
  extensionMethod_analyze (var_ast_769.readProperty_mDomainList (), var_domainMap_856, inCompiler COMMA_SOURCE_FILE ("program.ggs", 19)) ;
  GGS_computedFormulaMap temp_0 = GGS_computedFormulaMap::init (inCompiler COMMA_SOURCE_FILE ("program.ggs", 21)) ;
  GGS_computedFormulaMap var_computedFormulaMap_916 = temp_0 ;
  cEnumerator_formulaList enumerator_947 (var_ast_769.readProperty_mFormulaList (), EnumerationOrder::up) ;
  bool bool_1 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 22)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_947.hasCurrentObject () && bool_1) {
    while (enumerator_947.hasCurrentObject () && bool_1) {
      callExtensionMethod_analyzeFormula ((cPtr_abstractFormula *) enumerator_947.current_mFormula (HERE).ptr (), constinArgument_inSourceFile.readProperty_string (), var_domainMap_856, var_computedFormulaMap_916, inCompiler COMMA_SOURCE_FILE ("program.ggs", 23)) ;
      enumerator_947.gotoNextObject () ;
      if (enumerator_947.hasCurrentObject ()) {
        bool_1 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 22)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
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
        const GGS_string sfp = GGS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GGS_location location = commonCompiler->here () ;
        const GGS_lstring sourceFilePath (sfp, location) ;
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

