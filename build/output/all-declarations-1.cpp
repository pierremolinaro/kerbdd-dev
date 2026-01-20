#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

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

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList_2E_element::GGS_domainDeclarationList_2E_element (void) :
mProperty_mDomainName (),
mProperty_mType () {
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList_2E_element::GGS_domainDeclarationList_2E_element (const GGS_domainDeclarationList_2E_element & inSource) :
mProperty_mDomainName (inSource.mProperty_mDomainName),
mProperty_mType (inSource.mProperty_mType) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainDeclarationList_2E_element & GGS_domainDeclarationList_2E_element::operator = (const GGS_domainDeclarationList_2E_element & inSource) {
  mProperty_mDomainName = inSource.mProperty_mDomainName ;
  mProperty_mType = inSource.mProperty_mType ;
  return *this ;
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
//     @domainDeclarationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_domainDeclarationList_2E_element ("domainDeclarationList.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_domainDeclarationList_2E_element::staticTypeDescriptor (void) const {
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

GGS_recordDomainMap_2E_element::GGS_recordDomainMap_2E_element (const GGS_recordDomainMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIndex (inSource.mProperty_mIndex),
mProperty_mBitCount (inSource.mProperty_mBitCount),
mProperty_mSubDomain (inSource.mProperty_mSubDomain) {
}

//--------------------------------------------------------------------------------------------------

GGS_recordDomainMap_2E_element & GGS_recordDomainMap_2E_element::operator = (const GGS_recordDomainMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  mProperty_mBitCount = inSource.mProperty_mBitCount ;
  mProperty_mSubDomain = inSource.mProperty_mSubDomain ;
  return *this ;
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
//     @recordDomainMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_recordDomainMap_2E_element ("recordDomainMap.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_recordDomainMap_2E_element::staticTypeDescriptor (void) const {
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
//Optional @recordDomainMap_2E_element_3F_
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
//     @recordDomainMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_recordDomainMap_2E_element_3F_ ("recordDomainMap.element?",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_recordDomainMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_domainMap_2E_element::GGS_domainMap_2E_element (const GGS_domainMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mBitCount (inSource.mProperty_mBitCount),
mProperty_mRecordMap (inSource.mProperty_mRecordMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_domainMap_2E_element & GGS_domainMap_2E_element::operator = (const GGS_domainMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mBitCount = inSource.mProperty_mBitCount ;
  mProperty_mRecordMap = inSource.mProperty_mRecordMap ;
  return *this ;
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
//     @domainMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_domainMap_2E_element ("domainMap.element",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_domainMap_2E_element::staticTypeDescriptor (void) const {
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
//Optional @domainMap_2E_element_3F_
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
//     @domainMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_domainMap_2E_element_3F_ ("domainMap.element?",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_domainMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_varMap_2E_element::GGS_varMap_2E_element (const GGS_varMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIndex (inSource.mProperty_mIndex),
mProperty_mBitCount (inSource.mProperty_mBitCount),
mProperty_mRecordDomainMap (inSource.mProperty_mRecordDomainMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_varMap_2E_element & GGS_varMap_2E_element::operator = (const GGS_varMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  mProperty_mBitCount = inSource.mProperty_mBitCount ;
  mProperty_mRecordDomainMap = inSource.mProperty_mRecordDomainMap ;
  return *this ;
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
//     @varMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varMap_2E_element ("varMap.element",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varMap_2E_element::staticTypeDescriptor (void) const {
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
//Optional @varMap_2E_element_3F_
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
//     @varMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varMap_2E_element_3F_ ("varMap.element?",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varMap_2E_element_3F_::staticTypeDescriptor (void) const {
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
  "<expression>",// Index 2
  "<comparison>",// Index 3
  "<term>",// Index 4
  "<factor>",// Index 5
  "<recordFields>",// Index 6
  "<type>",// Index 7
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
  Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_SHIFT (2)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_SHIFT (3)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_SHIFT (4)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_SHIFT (5)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_SHIFT (6)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (21)
, BOTTOM_UP_END
// State S1 (index = 15)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (10)
, BOTTOM_UP_END
// State S2 (index = 18)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (11)
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
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (1)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_SHIFT (2)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_SHIFT (3)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_SHIFT (4)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_SHIFT (5)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_SHIFT (6)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (21)
, BOTTOM_UP_END
// State S9 (index = 51)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (0)
, BOTTOM_UP_END
// State S10 (index = 54)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (17)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (23)
, BOTTOM_UP_END
// State S11 (index = 59)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (20)
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
, Lexique_kerbdd_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (24)
, BOTTOM_UP_END
// State S16 (index = 74)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (22)
, BOTTOM_UP_END
// State S17 (index = 77)
, Lexique_kerbdd_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (25)
, BOTTOM_UP_END
// State S18 (index = 80)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (24)
, BOTTOM_UP_END
// State S19 (index = 83)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (26)
, BOTTOM_UP_END
// State S20 (index = 86)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (2)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (2)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_REDUCE (2)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_REDUCE (2)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_REDUCE (2)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_REDUCE (2)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (2)
, BOTTOM_UP_END
// State S21 (index = 101)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (3)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (3)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_REDUCE (3)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_REDUCE (3)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_REDUCE (3)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_REDUCE (3)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (3)
, BOTTOM_UP_END
// State S22 (index = 116)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (4)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (4)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_REDUCE (4)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_REDUCE (4)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_REDUCE (4)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_REDUCE (4)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (4)
, BOTTOM_UP_END
// State S23 (index = 131)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (17)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (17)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_REDUCE (17)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_REDUCE (17)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_REDUCE (17)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_REDUCE (17)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (17)
, BOTTOM_UP_END
// State S24 (index = 146)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (27)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (28)
, Lexique_kerbdd_5F_lexique::kToken_bool, BOTTOM_UP_SHIFT (29)
, BOTTOM_UP_END
// State S25 (index = 153)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (27)
, Lexique_kerbdd_5F_lexique::kToken_bool, BOTTOM_UP_SHIFT (29)
, BOTTOM_UP_END
// State S26 (index = 158)
, Lexique_kerbdd_5F_lexique::kToken__3A__3D_, BOTTOM_UP_SHIFT (34)
, Lexique_kerbdd_5F_lexique::kToken__2B__3D_, BOTTOM_UP_SHIFT (35)
, Lexique_kerbdd_5F_lexique::kToken__2D__3D_, BOTTOM_UP_SHIFT (36)
, BOTTOM_UP_END
// State S27 (index = 165)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (61)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (61)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (61)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (61)
, BOTTOM_UP_END
// State S28 (index = 174)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (17)
, BOTTOM_UP_END
// State S29 (index = 177)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (63)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (63)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (63)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (63)
, Lexique_kerbdd_5F_lexique::kToken__5B_, BOTTOM_UP_SHIFT (39)
, BOTTOM_UP_END
// State S30 (index = 188)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (57)
, BOTTOM_UP_END
// State S31 (index = 191)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (41)
, BOTTOM_UP_END
// State S32 (index = 194)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (20)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (20)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (20)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (20)
, BOTTOM_UP_END
// State S33 (index = 203)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (59)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (59)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (42)
, BOTTOM_UP_END
// State S34 (index = 210)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (25)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (25)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_REDUCE (25)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_REDUCE (25)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_REDUCE (25)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_REDUCE (25)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_REDUCE (25)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (25)
, BOTTOM_UP_END
// State S35 (index = 227)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (26)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (26)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_REDUCE (26)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_REDUCE (26)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_REDUCE (26)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_REDUCE (26)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_REDUCE (26)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (26)
, BOTTOM_UP_END
// State S36 (index = 244)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (27)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (27)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_REDUCE (27)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_REDUCE (27)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_REDUCE (27)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_REDUCE (27)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_REDUCE (27)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_REDUCE (27)
, BOTTOM_UP_END
// State S37 (index = 261)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (44)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (45)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (51)
, BOTTOM_UP_END
// State S38 (index = 278)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (56)
, BOTTOM_UP_END
// State S39 (index = 281)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (57)
, BOTTOM_UP_END
// State S40 (index = 284)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (62)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (62)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (62)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (62)
, BOTTOM_UP_END
// State S41 (index = 293)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (18)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (18)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_REDUCE (18)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_REDUCE (18)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_REDUCE (18)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_REDUCE (18)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (18)
, BOTTOM_UP_END
// State S42 (index = 308)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (58)
, BOTTOM_UP_END
// State S43 (index = 311)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (19)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (19)
, BOTTOM_UP_END
// State S44 (index = 316)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (59)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (37)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (37)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (37)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (37)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (37)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (37)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (37)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (37)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (60)
, BOTTOM_UP_END
// State S45 (index = 337)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (44)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (45)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (51)
, BOTTOM_UP_END
// State S46 (index = 354)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (44)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (45)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (51)
, BOTTOM_UP_END
// State S47 (index = 371)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (11)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (11)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (11)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (11)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (11)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (11)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (11)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (11)
, BOTTOM_UP_END
// State S48 (index = 388)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (12)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (12)
, BOTTOM_UP_END
// State S49 (index = 405)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (17)
, BOTTOM_UP_END
// State S50 (index = 408)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (17)
, BOTTOM_UP_END
// State S51 (index = 411)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (66)
, BOTTOM_UP_END
// State S52 (index = 414)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_SHIFT (67)
, BOTTOM_UP_END
// State S53 (index = 417)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (28)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (28)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_SHIFT (68)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_SHIFT (69)
, BOTTOM_UP_END
// State S54 (index = 426)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (31)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (31)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (31)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (31)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_SHIFT (71)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_SHIFT (72)
, BOTTOM_UP_END
// State S55 (index = 439)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_SHIFT (74)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_SHIFT (75)
, BOTTOM_UP_END
// State S56 (index = 456)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (58)
, BOTTOM_UP_END
// State S57 (index = 459)
, Lexique_kerbdd_5F_lexique::kToken__5D_, BOTTOM_UP_SHIFT (77)
, BOTTOM_UP_END
// State S58 (index = 462)
, Lexique_kerbdd_5F_lexique::kToken__3A_, BOTTOM_UP_SHIFT (78)
, BOTTOM_UP_END
// State S59 (index = 465)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (79)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (39)
, BOTTOM_UP_END
// State S60 (index = 470)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
// State S61 (index = 473)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (8)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (8)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (8)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (8)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (8)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (8)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (8)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (8)
, BOTTOM_UP_END
// State S62 (index = 490)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (82)
, BOTTOM_UP_END
// State S63 (index = 493)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (10)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (10)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (10)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (10)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (10)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (10)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (10)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (10)
, BOTTOM_UP_END
// State S64 (index = 510)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (83)
, BOTTOM_UP_END
// State S65 (index = 513)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (84)
, BOTTOM_UP_END
// State S66 (index = 516)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (45)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (45)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (85)
, Lexique_kerbdd_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (45)
, Lexique_kerbdd_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (45)
, Lexique_kerbdd_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (45)
, Lexique_kerbdd_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (45)
, BOTTOM_UP_END
// State S67 (index = 531)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (1)
, Lexique_kerbdd_5F_lexique::kToken_graphviz, BOTTOM_UP_REDUCE (1)
, Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, BOTTOM_UP_REDUCE (1)
, Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, BOTTOM_UP_REDUCE (1)
, Lexique_kerbdd_5F_lexique::kToken_dump, BOTTOM_UP_REDUCE (1)
, Lexique_kerbdd_5F_lexique::kToken_domain, BOTTOM_UP_REDUCE (1)
, Lexique_kerbdd_5F_lexique::kToken_, BOTTOM_UP_REDUCE (1)
, BOTTOM_UP_END
// State S68 (index = 546)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (44)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (45)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (51)
, BOTTOM_UP_END
// State S69 (index = 563)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (44)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (45)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (51)
, BOTTOM_UP_END
// State S70 (index = 580)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (5)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (5)
, BOTTOM_UP_END
// State S71 (index = 585)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (44)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (45)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (51)
, BOTTOM_UP_END
// State S72 (index = 602)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (44)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (45)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (51)
, BOTTOM_UP_END
// State S73 (index = 619)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (6)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (6)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (6)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (6)
, BOTTOM_UP_END
// State S74 (index = 628)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (44)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (45)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (51)
, BOTTOM_UP_END
// State S75 (index = 645)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (44)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (45)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (51)
, BOTTOM_UP_END
// State S76 (index = 662)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (7)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (7)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (7)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (7)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (7)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (7)
, BOTTOM_UP_END
// State S77 (index = 675)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (64)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (64)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (64)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (64)
, BOTTOM_UP_END
// State S78 (index = 684)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (27)
, Lexique_kerbdd_5F_lexique::kToken_bool, BOTTOM_UP_SHIFT (29)
, BOTTOM_UP_END
// State S79 (index = 689)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (43)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (94)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (43)
, BOTTOM_UP_END
// State S80 (index = 696)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (96)
, BOTTOM_UP_END
// State S81 (index = 699)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (38)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (38)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (38)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (38)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (38)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (38)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (38)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (38)
, BOTTOM_UP_END
// State S82 (index = 716)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (9)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (9)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (9)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (9)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (9)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (9)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (9)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (9)
, BOTTOM_UP_END
// State S83 (index = 733)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (44)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (45)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (51)
, BOTTOM_UP_END
// State S84 (index = 750)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (44)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_SHIFT (45)
, Lexique_kerbdd_5F_lexique::kToken__7E_, BOTTOM_UP_SHIFT (46)
, Lexique_kerbdd_5F_lexique::kToken_true, BOTTOM_UP_SHIFT (47)
, Lexique_kerbdd_5F_lexique::kToken_false, BOTTOM_UP_SHIFT (48)
, Lexique_kerbdd_5F_lexique::kToken__3F_, BOTTOM_UP_SHIFT (49)
, Lexique_kerbdd_5F_lexique::kToken__21_, BOTTOM_UP_SHIFT (50)
, Lexique_kerbdd_5F_lexique::kToken__7B_, BOTTOM_UP_SHIFT (51)
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
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (29)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (29)
, BOTTOM_UP_END
// State S88 (index = 788)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (30)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (30)
, BOTTOM_UP_END
// State S89 (index = 793)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (31)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (31)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (31)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (31)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_SHIFT (71)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_SHIFT (72)
, BOTTOM_UP_END
// State S90 (index = 806)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (31)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (31)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (31)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (31)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_SHIFT (71)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_SHIFT (72)
, BOTTOM_UP_END
// State S91 (index = 819)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_SHIFT (74)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_SHIFT (75)
, BOTTOM_UP_END
// State S92 (index = 836)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (34)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_SHIFT (74)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_SHIFT (75)
, BOTTOM_UP_END
// State S93 (index = 853)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (59)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (59)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (42)
, BOTTOM_UP_END
// State S94 (index = 860)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (112)
, BOTTOM_UP_END
// State S95 (index = 863)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (41)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (113)
, BOTTOM_UP_END
// State S96 (index = 868)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (13)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (13)
, BOTTOM_UP_END
// State S97 (index = 885)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (115)
, BOTTOM_UP_END
// State S98 (index = 888)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_SHIFT (116)
, BOTTOM_UP_END
// State S99 (index = 891)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (45)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (45)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (85)
, Lexique_kerbdd_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (45)
, Lexique_kerbdd_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (45)
, Lexique_kerbdd_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (45)
, Lexique_kerbdd_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (45)
, BOTTOM_UP_END
// State S100 (index = 906)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (47)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (47)
, BOTTOM_UP_END
// State S101 (index = 911)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (48)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (48)
, BOTTOM_UP_END
// State S102 (index = 916)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (49)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (49)
, BOTTOM_UP_END
// State S103 (index = 921)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (50)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (50)
, BOTTOM_UP_END
// State S104 (index = 926)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (51)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (51)
, BOTTOM_UP_END
// State S105 (index = 931)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_REDUCE (52)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_REDUCE (52)
, BOTTOM_UP_END
// State S106 (index = 936)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (118)
, Lexique_kerbdd_5F_lexique::kToken_integer, BOTTOM_UP_SHIFT (119)
, BOTTOM_UP_END
// State S107 (index = 941)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (32)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (32)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (32)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (32)
, BOTTOM_UP_END
// State S108 (index = 950)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (33)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (33)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (33)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (33)
, BOTTOM_UP_END
// State S109 (index = 959)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (35)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (35)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (35)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (35)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (35)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (35)
, BOTTOM_UP_END
// State S110 (index = 972)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (36)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (36)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (36)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (36)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (36)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (36)
, BOTTOM_UP_END
// State S111 (index = 985)
, Lexique_kerbdd_5F_lexique::kToken__28_, BOTTOM_UP_REDUCE (60)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (60)
, BOTTOM_UP_END
// State S112 (index = 990)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (43)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (94)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (43)
, BOTTOM_UP_END
// State S113 (index = 997)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (122)
, BOTTOM_UP_END
// State S114 (index = 1000)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (40)
, BOTTOM_UP_END
// State S115 (index = 1003)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (14)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (14)
, BOTTOM_UP_END
// State S116 (index = 1020)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (15)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (15)
, BOTTOM_UP_END
// State S117 (index = 1037)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_kerbdd_5F_lexique::kToken__3C__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_kerbdd_5F_lexique::kToken__3C_, BOTTOM_UP_REDUCE (46)
, Lexique_kerbdd_5F_lexique::kToken__3E__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_kerbdd_5F_lexique::kToken__3E_, BOTTOM_UP_REDUCE (46)
, BOTTOM_UP_END
// State S118 (index = 1050)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (123)
, Lexique_kerbdd_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (55)
, BOTTOM_UP_END
// State S119 (index = 1055)
, Lexique_kerbdd_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (53)
, BOTTOM_UP_END
// State S120 (index = 1058)
, Lexique_kerbdd_5F_lexique::kToken__7D_, BOTTOM_UP_SHIFT (125)
, BOTTOM_UP_END
// State S121 (index = 1061)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (44)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (44)
, BOTTOM_UP_END
// State S122 (index = 1066)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (43)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (94)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_REDUCE (43)
, BOTTOM_UP_END
// State S123 (index = 1073)
, Lexique_kerbdd_5F_lexique::kToken_identifier, BOTTOM_UP_SHIFT (127)
, BOTTOM_UP_END
// State S124 (index = 1076)
, Lexique_kerbdd_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (54)
, BOTTOM_UP_END
// State S125 (index = 1079)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__3B_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__3D_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__21__3D_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__7C_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__5E_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__26_, BOTTOM_UP_REDUCE (16)
, Lexique_kerbdd_5F_lexique::kToken__2D__3E_, BOTTOM_UP_REDUCE (16)
, BOTTOM_UP_END
// State S126 (index = 1096)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (41)
, Lexique_kerbdd_5F_lexique::kToken__2C_, BOTTOM_UP_SHIFT (113)
, BOTTOM_UP_END
// State S127 (index = 1101)
, Lexique_kerbdd_5F_lexique::kToken__2E_, BOTTOM_UP_SHIFT (123)
, Lexique_kerbdd_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (55)
, BOTTOM_UP_END
// State S128 (index = 1106)
, Lexique_kerbdd_5F_lexique::kToken__29_, BOTTOM_UP_REDUCE (42)
, BOTTOM_UP_END
// State S129 (index = 1109)
, Lexique_kerbdd_5F_lexique::kToken__7D_, BOTTOM_UP_REDUCE (56)
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
, 59  // S11
, 62  // S12
, 65  // S13
, 68  // S14
, 71  // S15
, 74  // S16
, 77  // S17
, 80  // S18
, 83  // S19
, 86  // S20
, 101  // S21
, 116  // S22
, 131  // S23
, 146  // S24
, 153  // S25
, 158  // S26
, 165  // S27
, 174  // S28
, 177  // S29
, 188  // S30
, 191  // S31
, 194  // S32
, 203  // S33
, 210  // S34
, 227  // S35
, 244  // S36
, 261  // S37
, 278  // S38
, 281  // S39
, 284  // S40
, 293  // S41
, 308  // S42
, 311  // S43
, 316  // S44
, 337  // S45
, 354  // S46
, 371  // S47
, 388  // S48
, 405  // S49
, 408  // S50
, 411  // S51
, 414  // S52
, 417  // S53
, 426  // S54
, 439  // S55
, 456  // S56
, 459  // S57
, 462  // S58
, 465  // S59
, 470  // S60
, 473  // S61
, 490  // S62
, 493  // S63
, 510  // S64
, 513  // S65
, 516  // S66
, 531  // S67
, 546  // S68
, 563  // S69
, 580  // S70
, 585  // S71
, 602  // S72
, 619  // S73
, 628  // S74
, 645  // S75
, 662  // S76
, 675  // S77
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

static const int32_t gSuccessorTable_kerbdd_grammar_10 [5] = {6, 18,
  9, 19, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_24 [7] = {7, 30,
  22, 31,
  24, 32, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_25 [5] = {7, 33,
  24, 32, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_26 [3] = {10, 37, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_28 [3] = {6, 38, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_29 [3] = {25, 40, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_33 [3] = {23, 43, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_37 [9] = {2, 52,
  3, 53,
  4, 54,
  5, 55, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_44 [3] = {14, 61, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_45 [9] = {2, 62,
  3, 53,
  4, 54,
  5, 55, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_46 [3] = {5, 63, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_49 [3] = {6, 64, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_50 [3] = {6, 65, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_53 [3] = {11, 70, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_54 [3] = {12, 73, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_55 [3] = {13, 76, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_59 [3] = {15, 80, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_66 [3] = {18, 86, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_68 [7] = {3, 87,
  4, 54,
  5, 55, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_69 [7] = {3, 88,
  4, 54,
  5, 55, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_71 [5] = {4, 89,
  5, 55, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_72 [5] = {4, 90,
  5, 55, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_74 [3] = {5, 91, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_75 [3] = {5, 92, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_78 [5] = {7, 93,
  24, 32, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_79 [3] = {17, 95, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_83 [9] = {2, 97,
  3, 53,
  4, 54,
  5, 55, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_84 [9] = {2, 98,
  3, 53,
  4, 54,
  5, 55, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_86 [3] = {19, 106, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_89 [3] = {12, 107, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_90 [3] = {12, 108, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_91 [3] = {13, 109, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_92 [3] = {13, 110, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_93 [3] = {23, 111, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_95 [3] = {16, 114, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_99 [3] = {18, 117, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_106 [3] = {20, 120, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_112 [3] = {17, 121, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_118 [3] = {21, 124, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_122 [3] = {17, 126, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_126 [3] = {16, 128, -1} ;

static const int32_t gSuccessorTable_kerbdd_grammar_127 [3] = {21, 129, -1} ;

static const int32_t * gSuccessorTable_kerbdd_grammar [130] = {
gSuccessorTable_kerbdd_grammar_0, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_kerbdd_grammar_8, nullptr, gSuccessorTable_kerbdd_grammar_10, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_kerbdd_grammar_24, gSuccessorTable_kerbdd_grammar_25, gSuccessorTable_kerbdd_grammar_26, nullptr, 
  gSuccessorTable_kerbdd_grammar_28, gSuccessorTable_kerbdd_grammar_29, nullptr, nullptr, 
  nullptr, gSuccessorTable_kerbdd_grammar_33, nullptr, nullptr, 
  nullptr, gSuccessorTable_kerbdd_grammar_37, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_kerbdd_grammar_44, gSuccessorTable_kerbdd_grammar_45, gSuccessorTable_kerbdd_grammar_46, nullptr, 
  nullptr, gSuccessorTable_kerbdd_grammar_49, gSuccessorTable_kerbdd_grammar_50, nullptr, 
  nullptr, gSuccessorTable_kerbdd_grammar_53, gSuccessorTable_kerbdd_grammar_54, gSuccessorTable_kerbdd_grammar_55, 
  nullptr, nullptr, nullptr, gSuccessorTable_kerbdd_grammar_59, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_kerbdd_grammar_66, nullptr, 
  gSuccessorTable_kerbdd_grammar_68, gSuccessorTable_kerbdd_grammar_69, nullptr, gSuccessorTable_kerbdd_grammar_71, 
  gSuccessorTable_kerbdd_grammar_72, nullptr, gSuccessorTable_kerbdd_grammar_74, gSuccessorTable_kerbdd_grammar_75, 
  nullptr, nullptr, gSuccessorTable_kerbdd_grammar_78, gSuccessorTable_kerbdd_grammar_79, 
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
  1, 7,
  1, 3,
  1, 3,
  1, 3,
  2, 2,
  3, 2,
  4, 2,
  5, 2,
  5, 3,
  5, 2,
  5, 1,
  5, 1,
  5, 4,
  5, 5,
  5, 5,
  5, 6,
  1, 3,
  1, 5,
  6, 4,
  7, 1,
  8, 0,
  8, 2,
  9, 0,
  9, 1,
  10, 1,
  10, 1,
  10, 1,
  11, 0,
  11, 2,
  11, 2,
  12, 0,
  12, 3,
  12, 3,
  13, 0,
  13, 3,
  13, 3,
  14, 0,
  14, 2,
  15, 0,
  15, 3,
  16, 0,
  16, 4,
  17, 0,
  17, 3,
  18, 0,
  18, 3,
  19, 1,
  19, 1,
  19, 1,
  19, 1,
  19, 1,
  19, 1,
  20, 1,
  20, 2,
  21, 0,
  21, 3,
  22, 1,
  22, 3,
  23, 0,
  23, 5,
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
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
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
        inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.appendString ("the '") ;
      message.appendString (filePath) ;
      message.appendString ("' file does not exist") ;
      const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
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
  case 2 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i2_parse(inLexique) ;
    break ;
  case 3 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i3_parse(inLexique) ;
    break ;
  case 4 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i4_parse(inLexique) ;
    break ;
  case 17 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i17_parse(inLexique) ;
    break ;
  case 18 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i18_parse(inLexique) ;
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
  case 2 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i2_indexing(inLexique) ;
    break ;
  case 3 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i3_indexing(inLexique) ;
    break ;
  case 4 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i4_indexing(inLexique) ;
    break ;
  case 17 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i17_indexing(inLexique) ;
    break ;
  case 18 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i18_indexing(inLexique) ;
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
  case 2 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i2_(parameter_1, inLexique) ;
    break ;
  case 3 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i3_(parameter_1, inLexique) ;
    break ;
  case 4 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i4_(parameter_1, inLexique) ;
    break ;
  case 17 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i17_(parameter_1, inLexique) ;
    break ;
  case 18 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i18_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                            'expression' non terminal implementation                              
//
//--------------------------------------------------------------------------------------------------

void cGrammar_kerbdd_5F_grammar::nt_expression_parse (Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 5) {
  rule_kerbdd_5F_syntax_expression_i5_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_expression_indexing (Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 5) {
  rule_kerbdd_5F_syntax_expression_i5_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_expression_ (GGS_expression &  parameter_1,
                                Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 5) {
  rule_kerbdd_5F_syntax_expression_i5_(parameter_1, inLexique) ;
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
  if (inLexique->nextProductionIndex () == 6) {
  rule_kerbdd_5F_syntax_comparison_i6_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_comparison_indexing (Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 6) {
  rule_kerbdd_5F_syntax_comparison_i6_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_comparison_ (GGS_expression &  parameter_1,
                                Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 6) {
  rule_kerbdd_5F_syntax_comparison_i6_(parameter_1, inLexique) ;
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
  if (inLexique->nextProductionIndex () == 7) {
  rule_kerbdd_5F_syntax_term_i7_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_term_indexing (Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 7) {
  rule_kerbdd_5F_syntax_term_i7_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_term_ (GGS_expression &  parameter_1,
                                Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 7) {
  rule_kerbdd_5F_syntax_term_i7_(parameter_1, inLexique) ;
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
  case 8 :
      rule_kerbdd_5F_syntax_factor_i8_parse(inLexique) ;
    break ;
  case 9 :
      rule_kerbdd_5F_syntax_factor_i9_parse(inLexique) ;
    break ;
  case 10 :
      rule_kerbdd_5F_syntax_factor_i10_parse(inLexique) ;
    break ;
  case 11 :
      rule_kerbdd_5F_syntax_factor_i11_parse(inLexique) ;
    break ;
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
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_factor_indexing (Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 8 :
      rule_kerbdd_5F_syntax_factor_i8_indexing(inLexique) ;
    break ;
  case 9 :
      rule_kerbdd_5F_syntax_factor_i9_indexing(inLexique) ;
    break ;
  case 10 :
      rule_kerbdd_5F_syntax_factor_i10_indexing(inLexique) ;
    break ;
  case 11 :
      rule_kerbdd_5F_syntax_factor_i11_indexing(inLexique) ;
    break ;
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
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_factor_ (GGS_expression &  parameter_1,
                                Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 8 :
      rule_kerbdd_5F_syntax_factor_i8_(parameter_1, inLexique) ;
    break ;
  case 9 :
      rule_kerbdd_5F_syntax_factor_i9_(parameter_1, inLexique) ;
    break ;
  case 10 :
      rule_kerbdd_5F_syntax_factor_i10_(parameter_1, inLexique) ;
    break ;
  case 11 :
      rule_kerbdd_5F_syntax_factor_i11_(parameter_1, inLexique) ;
    break ;
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
  if (inLexique->nextProductionIndex () == 19) {
  rule_kerbdd_5F_syntax_recordFields_i19_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_recordFields_indexing (Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 19) {
  rule_kerbdd_5F_syntax_recordFields_i19_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_recordFields_ (GGS_domainFieldList &  parameter_1,
                                Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 19) {
  rule_kerbdd_5F_syntax_recordFields_i19_(parameter_1, inLexique) ;
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
  if (inLexique->nextProductionIndex () == 20) {
  rule_kerbdd_5F_syntax_type_i20_parse(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_type_indexing (Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 20) {
  rule_kerbdd_5F_syntax_type_i20_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_type_ (GGS_bddType &  parameter_1,
                                Lexique_kerbdd_5F_lexique * inLexique) {
  if (inLexique->nextProductionIndex () == 20) {
  rule_kerbdd_5F_syntax_type_i20_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
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
// Productions numbers:  25 26 27
  return inLexique->nextProductionIndex () - 24 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_3' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_3 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  28 29 30
  return inLexique->nextProductionIndex () - 27 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_4' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_4 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  31 32 33
  return inLexique->nextProductionIndex () - 30 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_5' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_5 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  34 35 36
  return inLexique->nextProductionIndex () - 33 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_6' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_6 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  37 38
  return inLexique->nextProductionIndex () - 36 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_7' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_7 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  39 40
  return inLexique->nextProductionIndex () - 38 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_8' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_8 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  41 42
  return inLexique->nextProductionIndex () - 40 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_9' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_9 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  43 44
  return inLexique->nextProductionIndex () - 42 ;
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
// Productions numbers:  47 48 49 50 51 52
  return inLexique->nextProductionIndex () - 46 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_12' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_12 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  53 54
  return inLexique->nextProductionIndex () - 52 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_13' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_13 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  55 56
  return inLexique->nextProductionIndex () - 54 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_14' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_14 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  57 58
  return inLexique->nextProductionIndex () - 56 ;
}

//--------------------------------------------------------------------------------------------------
//
//                    'select_kerbdd_5F_syntax_15' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_15 (Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers:  59 60
  return inLexique->nextProductionIndex () - 58 ;
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

const GALGAS_TypeDescriptor * cPtr_setting_5F_nodeHashMapSize::classDescriptor (void) const {
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
//     @setting_nodeHashMapSize generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize ("setting_nodeHashMapSize",
                                                                               & kTypeDescriptor_GALGAS_abstractFormula) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_setting_5F_nodeHashMapSize::staticTypeDescriptor (void) const {
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
//Overriding extension method '@assignmentFormula analyzeFormula'
//--------------------------------------------------------------------------------------------------

void cPtr_assignmentFormula::method_analyzeFormula (const GGS_string /* constinArgument_inSourceFilePath */,
                                                    const GGS_domainMap constinArgument_inDomainMap,
                                                    GGS_computedFormulaMap & ioArgument_ioComputedFormulaMap,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_totalBitCount_2740 = GGS_uint (uint32_t (0U)) ;
  GGS_varList temp_0 = GGS_varList::init (inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 78)) ;
  GGS_varList var_varList_2773 = temp_0 ;
  GGS_varMap var_varMap_2800 = GGS_varMap::init (inCompiler COMMA_HERE) ;
  const GGS_assignmentFormula temp_1 = this ;
  extensionMethod_analyze (temp_1.readProperty_mFormulaArgumentList (), constinArgument_inDomainMap, var_varMap_2800, var_varList_2773, var_totalBitCount_2740, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 80)) ;
  const GGS_assignmentFormula temp_2 = this ;
  switch (temp_2.readProperty_mKind ().enumValue ()) {
  case GGS_formulaKind::Enumeration::invalid:
    break ;
  case GGS_formulaKind::Enumeration::enum_assignment:
    {
      GGS_timer var_timer_3023 = GGS_timer::class_func_start (SOURCE_FILE ("formula-assignment.ggs", 85)) ;
      const GGS_assignmentFormula temp_3 = this ;
      GGS_binaryset var_result_3052 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_3.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_2800, var_totalBitCount_2740, ioArgument_ioComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 86)) ;
      {
      const GGS_assignmentFormula temp_4 = this ;
      ioArgument_ioComputedFormulaMap.setter_insertKey (temp_4.readProperty_mFormulaName (), var_varList_2773, var_totalBitCount_2740, var_result_3052, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 87)) ;
      }
      GGS_uint_36__34_ var_valueCount_3268 = var_result_3052.getter_valueCount (var_totalBitCount_2740, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 88)) ;
      GGS_uint_36__34_ var_nodeCount_3403 = var_result_3052.getter_nodeCount (SOURCE_FILE ("formula-assignment.ggs", 90)) ;
      {
      GGS_string temp_5 ;
      const GalgasBool test_6 = GGS_bool (ComparisonKind::greaterThan, var_valueCount_3268.objectCompare (GGS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        temp_5 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_6) {
        temp_5 = GGS_string::makeEmptyString () ;
      }
      GGS_string temp_7 ;
      const GalgasBool test_8 = GGS_bool (ComparisonKind::greaterThan, var_nodeCount_3403.objectCompare (GGS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        temp_7 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_8) {
        temp_7 = GGS_string::makeEmptyString () ;
      }
      routine_println_3F_ (GGS_string (" ").add_operation (var_valueCount_3268.getter_string (SOURCE_FILE ("formula-assignment.ggs", 91)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 91)).add_operation (GGS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 92)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 92)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 92)).add_operation (var_nodeCount_3403.getter_string (SOURCE_FILE ("formula-assignment.ggs", 93)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (GGS_string (" node"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (var_timer_3023.getter_string (SOURCE_FILE ("formula-assignment.ggs", 94)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 94)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 94)), inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 91)) ;
      }
    }
    break ;
  case GGS_formulaKind::Enumeration::enum_fixedPoint:
    {
      GGS_binaryset extractedValue_3656_startValue_0 ;
      temp_2.readProperty_mKind ().getAssociatedValuesFor_fixedPoint (extractedValue_3656_startValue_0) ;
      GGS_timer var_timer_3725 = GGS_timer::class_func_start (SOURCE_FILE ("formula-assignment.ggs", 97)) ;
      GGS_binaryset var_result_3765 = extractedValue_3656_startValue_0 ;
      {
      const GGS_assignmentFormula temp_9 = this ;
      ioArgument_ioComputedFormulaMap.setter_insertKey (temp_9.readProperty_mFormulaName (), var_varList_2773, var_totalBitCount_2740, var_result_3765, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 99)) ;
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
            variant_3934 -= 1 ;
            var_iterationCount_3911.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 103)), inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 103)) ;
            const GGS_assignmentFormula temp_10 = this ;
            GGS_binaryset var_r_4004 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_10.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_2800, var_totalBitCount_2740, ioArgument_ioComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 104)) ;
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::equal, var_result_3765.objectCompare (var_r_4004)).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                var_iterate_3886 = GGS_bool (false) ;
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              var_result_3765 = var_r_4004 ;
              {
              const GGS_assignmentFormula temp_12 = this ;
              ioArgument_ioComputedFormulaMap.setter_setMValueForKey (var_result_3765, temp_12.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 109)) ;
              }
            }
          }
        }
      }
      GGS_uint_36__34_ var_valueCount_4304 = var_result_3765.getter_valueCount (var_totalBitCount_2740, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 112)) ;
      GGS_uint_36__34_ var_nodeCount_4367 = var_result_3765.getter_nodeCount (SOURCE_FILE ("formula-assignment.ggs", 113)) ;
      {
      GGS_string temp_13 ;
      const GalgasBool test_14 = GGS_bool (ComparisonKind::greaterThan, var_iterationCount_3911.objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 115)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        temp_13 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_14) {
        temp_13 = GGS_string::makeEmptyString () ;
      }
      GGS_string temp_15 ;
      const GalgasBool test_16 = GGS_bool (ComparisonKind::greaterThan, var_valueCount_4304.objectCompare (GGS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        temp_15 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_16) {
        temp_15 = GGS_string::makeEmptyString () ;
      }
      GGS_string temp_17 ;
      const GalgasBool test_18 = GGS_bool (ComparisonKind::greaterThan, var_nodeCount_4367.objectCompare (GGS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        temp_17 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_18) {
        temp_17 = GGS_string::makeEmptyString () ;
      }
      routine_println_3F_ (GGS_string (" ").add_operation (var_iterationCount_3911.getter_string (SOURCE_FILE ("formula-assignment.ggs", 114)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 114)).add_operation (GGS_string (" iteration"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 115)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 115)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 115)).add_operation (var_valueCount_4304.getter_string (SOURCE_FILE ("formula-assignment.ggs", 116)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (GGS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (temp_15, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (var_nodeCount_4367.getter_string (SOURCE_FILE ("formula-assignment.ggs", 117)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (GGS_string (" node"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (temp_17, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (var_timer_3725.getter_string (SOURCE_FILE ("formula-assignment.ggs", 118)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 118)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 118)), inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 114)) ;
      }
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@graphvizFormula analyzeFormula'
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
  GGS_string var_filePath_1725 = constinArgument_inSourceFilePath.getter_deletingPathExtension (SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (temp_1.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)) ;
  {
  const GGS_graphvizFormula temp_2 = this ;
  routine_println_3F_ (GGS_string ("Graphviz $").add_operation (temp_2.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)).add_operation (var_filePath_1725, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)), inCompiler  COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)) ;
  }
  GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 40)) ;
  GGS_stringlist var_bitNameList_1896 = temp_3 ;
  DownEnumerator_varList enumerator_1935 (var_varList_1693) ;
  while (enumerator_1935.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::equal, enumerator_1935.current_mBitCount (HERE).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        {
        var_bitNameList_1896.setter_append (enumerator_1935.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 43)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      UpEnumerator_range enumerator_2055 (GGS_range (GGS_uint (uint32_t (0U)), enumerator_1935.current_mBitCount (HERE).substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 45)))) ;
      while (enumerator_2055.hasCurrentObject ()) {
        {
        var_bitNameList_1896.setter_append (enumerator_1935.current_mVarName (HERE).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46)).add_operation (enumerator_2055.current (HERE).getter_string (SOURCE_FILE ("formula-graphviz.ggs", 46)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46)) ;
        }
        enumerator_2055.gotoNextObject () ;
      }
    }
    enumerator_1935.gotoNextObject () ;
  }
  GGS_string var_s_2148 = var_result_1711.getter_graphviz (var_bitNameList_1896 COMMA_SOURCE_FILE ("formula-graphviz.ggs", 50)) ;
  GGS_bool joker_2232 ; // Joker input parameter
  var_s_2148.method_writeToFileWhenDifferentContents (var_filePath_1725, joker_2232, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 51)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@setting_nodeHashMapSize analyzeFormula'
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
//Overriding extension method '@setting_andCacheMapSize analyzeFormula'
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
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_subdomainMap_10671.getter_count (SOURCE_FILE ("expression.ggs", 355)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_varInExpression temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mVarName ().readProperty_location (), GGS_string ("variable is a record; use dot notation"), fixItArray3  COMMA_SOURCE_FILE ("expression.ggs", 356)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, var_bitCount_10656.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_varInExpression temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
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
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_subdomainMap_11358.getter_count (SOURCE_FILE ("expression.ggs", 373)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_varBitInExpression temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mVarName ().readProperty_location (), GGS_string ("variable is a record; use dot notation"), fixItArray3  COMMA_SOURCE_FILE ("expression.ggs", 374)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_varBitInExpression temp_5 = this ;
      test_4 = GGS_bool (ComparisonKind::lowerOrEqual, var_bitCount_11343.objectCompare (temp_5.readProperty_mVarBit ().readProperty_uint ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_varBitInExpression temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
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
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_formulaInExpression temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression.ggs", 513)).objectCompare (var_varList_16794.getter_count (SOURCE_FILE ("expression.ggs", 513)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_formulaInExpression temp_3 = this ;
      const GGS_formulaInExpression temp_4 = this ;
      GGS_string temp_5 ;
      const GalgasBool test_6 = GGS_bool (ComparisonKind::greaterThan, var_varList_16794.getter_count (SOURCE_FILE ("expression.ggs", 515)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        temp_5 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_6) {
        temp_5 = GGS_string::makeEmptyString () ;
      }
      const GGS_formulaInExpression temp_7 = this ;
      const GGS_formulaInExpression temp_8 = this ;
      GGS_string temp_9 ;
      const GalgasBool test_10 = GGS_bool (ComparisonKind::greaterThan, temp_8.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression.ggs", 517)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        temp_9 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_10) {
        temp_9 = GGS_string::makeEmptyString () ;
      }
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mFormulaName ().readProperty_location (), GGS_string ("the $").add_operation (temp_4.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (GGS_string (" names "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (var_varList_16794.getter_count (SOURCE_FILE ("expression.ggs", 515)).getter_string (SOURCE_FILE ("expression.ggs", 514)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (GGS_string (" variable"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (GGS_string (", but this call names "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (temp_7.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression.ggs", 517)).getter_string (SOURCE_FILE ("expression.ggs", 516)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 516)).add_operation (GGS_string (" variable"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 517)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 517)), fixItArray11  COMMA_SOURCE_FILE ("expression.ggs", 514)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_uintlist temp_12 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 520)) ;
    GGS_uintlist var_transformationList_17281 = temp_12 ;
    const GGS_formulaInExpression temp_13 = this ;
    DownEnumerator_varList enumerator_17331 (var_varList_16794) ;
    DownEnumerator_formulaParameterListInExpression enumerator_17377 (temp_13.readProperty_mParameterList ()) ;
    while (enumerator_17331.hasCurrentObject () && enumerator_17377.hasCurrentObject ()) {
      GGS_uint var_parameterIndex_17467 ;
      GGS_uint var_parameterBitCount_17490 ;
      GGS_recordDomainMap var_subdomainMap_17527 ;
      constinArgument_inVarMap.method_searchKey (enumerator_17377.current_mParameterName (HERE), var_parameterIndex_17467, var_parameterBitCount_17490, var_subdomainMap_17527, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 522)) ;
      UpEnumerator_lstringlist enumerator_17552 (enumerator_17377.current_mFieldNames (HERE)) ;
      while (enumerator_17552.hasCurrentObject ()) {
        GGS_uint var_fieldRelativeBitIndex_17632 ;
        GGS_recordDomainMap var_fieldSubdomainMap_17680 ;
        var_subdomainMap_17527.method_searchKey (enumerator_17552.current_mValue (HERE), var_fieldRelativeBitIndex_17632, var_parameterBitCount_17490, var_fieldSubdomainMap_17680, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 524)) ;
        var_parameterIndex_17467 = var_parameterIndex_17467.add_operation (var_fieldRelativeBitIndex_17632, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 525)) ;
        var_subdomainMap_17527 = var_fieldSubdomainMap_17680 ;
        enumerator_17552.gotoNextObject () ;
      }
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = GGS_bool (ComparisonKind::notEqual, enumerator_17331.current_mBitCount (HERE).objectCompare (var_parameterBitCount_17490)).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          GGS_string temp_15 ;
          const GalgasBool test_16 = GGS_bool (ComparisonKind::greaterThan, var_parameterBitCount_17490.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            temp_15 = GGS_string ("s") ;
          }else if (GalgasBool::boolFalse == test_16) {
            temp_15 = GGS_string::makeEmptyString () ;
          }
          GGS_string temp_17 ;
          const GalgasBool test_18 = GGS_bool (ComparisonKind::greaterThan, enumerator_17331.current_mBitCount (HERE).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_18) {
            temp_17 = GGS_string ("s") ;
          }else if (GalgasBool::boolFalse == test_18) {
            temp_17 = GGS_string::makeEmptyString () ;
          }
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (enumerator_17377.current_mParameterName (HERE).readProperty_location (), GGS_string ("this parameter is declared with a size of ").add_operation (var_parameterBitCount_17490.getter_string (SOURCE_FILE ("expression.ggs", 529)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 529)).add_operation (GGS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (temp_15, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (GGS_string (", but corresponding formal argument '"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (enumerator_17331.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (GGS_string ("' is declared with a size of "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (enumerator_17331.current_mBitCount (HERE).getter_string (SOURCE_FILE ("expression.ggs", 531)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (GGS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 532)).add_operation (temp_17, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 532)), fixItArray19  COMMA_SOURCE_FILE ("expression.ggs", 529)) ;
        }
      }
      UpEnumerator_range enumerator_18237 (GGS_range (GGS_uint (uint32_t (0U)), var_parameterBitCount_17490.substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 534)))) ;
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
  UpEnumerator_lstringlist enumerator_20239 (temp_1.readProperty_mFieldNames ()) ;
  while (enumerator_20239.hasCurrentObject ()) {
    GGS_uint var_fieldRelativeBitIndex_20318 ;
    GGS_recordDomainMap var_fieldSubdomainMap_20357 ;
    var_subDomainMap_20218.method_searchKey (enumerator_20239.current_mValue (HERE), var_fieldRelativeBitIndex_20318, var_bitCount_20190, var_fieldSubdomainMap_20357, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 587)) ;
    var_idx_20178 = var_idx_20178.add_operation (var_fieldRelativeBitIndex_20318, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 588)) ;
    var_subDomainMap_20218 = var_fieldSubdomainMap_20357 ;
    enumerator_20239.gotoNextObject () ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_subDomainMap_20218.getter_count (SOURCE_FILE ("expression.ggs", 591)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_comparisonWithConstantInExpression temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mVarName ().readProperty_location (), GGS_string ("variable is a record; use dot notation"), fixItArray4  COMMA_SOURCE_FILE ("expression.ggs", 592)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_comparisonWithConstantInExpression temp_6 = this ;
      test_5 = GGS_bool (ComparisonKind::greaterThan, temp_6.readProperty_mConstant ().readProperty_uint ().getter_significantBitCount (SOURCE_FILE ("expression.ggs", 593)).objectCompare (var_bitCount_20190)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_comparisonWithConstantInExpression temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mConstant ().readProperty_location (), GGS_string ("Constant too large (should be < 2**").add_operation (var_bitCount_20190.getter_string (SOURCE_FILE ("expression.ggs", 594)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 594)), fixItArray8  COMMA_SOURCE_FILE ("expression.ggs", 594)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_5) {
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
  UpEnumerator_lstringlist enumerator_22081 (temp_1.readProperty_mLeftFieldNames ()) ;
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
  UpEnumerator_lstringlist enumerator_22449 (temp_3.readProperty_mRightFieldNames ()) ;
  while (enumerator_22449.hasCurrentObject ()) {
    GGS_uint var_fieldRelativeBitIndex_22538 ;
    GGS_recordDomainMap var_fieldSubdomainMap_22582 ;
    var_rightSubDomainMap_22423.method_searchKey (enumerator_22449.current_mValue (HERE), var_fieldRelativeBitIndex_22538, var_rightBitCount_22390, var_fieldSubdomainMap_22582, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 630)) ;
    var_rightIdx_22373 = var_rightIdx_22373.add_operation (var_fieldRelativeBitIndex_22538, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 631)) ;
    var_rightSubDomainMap_22423 = var_fieldSubdomainMap_22582 ;
    enumerator_22449.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::greaterThan, var_leftSubDomainMap_22056.getter_count (SOURCE_FILE ("expression.ggs", 634)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_variableComparisonInExpression temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mLeftVarName ().readProperty_location (), GGS_string ("variable is a record; use dot notation"), fixItArray6  COMMA_SOURCE_FILE ("expression.ggs", 635)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::greaterThan, var_rightSubDomainMap_22423.getter_count (SOURCE_FILE ("expression.ggs", 636)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        const GGS_variableComparisonInExpression temp_8 = this ;
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mRightVarName ().readProperty_location (), GGS_string ("variable is a record; use dot notation"), fixItArray9  COMMA_SOURCE_FILE ("expression.ggs", 637)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_7) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = GGS_bool (ComparisonKind::notEqual, var_leftBitCount_22023.objectCompare (var_rightBitCount_22390)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_variableComparisonInExpression temp_11 = this ;
          const GGS_variableComparisonInExpression temp_12 = this ;
          GGS_string temp_13 ;
          const GalgasBool test_14 = GGS_bool (ComparisonKind::greaterThan, var_leftBitCount_22023.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_14) {
            temp_13 = GGS_string ("s") ;
          }else if (GalgasBool::boolFalse == test_14) {
            temp_13 = GGS_string::makeEmptyString () ;
          }
          GGS_string temp_15 ;
          const GalgasBool test_16 = GGS_bool (ComparisonKind::greaterThan, var_rightBitCount_22390.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            temp_15 = GGS_string ("s") ;
          }else if (GalgasBool::boolFalse == test_16) {
            temp_15 = GGS_string::makeEmptyString () ;
          }
          GenericArray <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mRightVarName ().readProperty_location (), GGS_string ("'").add_operation (temp_12.readProperty_mLeftVarName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 639)).add_operation (GGS_string ("' variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 639)).add_operation (var_leftBitCount_22023.getter_string (SOURCE_FILE ("expression.ggs", 639)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 639)).add_operation (GGS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 640)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 640)).add_operation (GGS_string (", but this variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 640)).add_operation (var_rightBitCount_22390.getter_string (SOURCE_FILE ("expression.ggs", 641)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 641)).add_operation (GGS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 642)).add_operation (temp_15, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 642)), fixItArray17  COMMA_SOURCE_FILE ("expression.ggs", 639)) ;
          result_outResult.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_10) {
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


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@dumpFormula analyzeFormula'
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
  const GalgasBool test_3 = GGS_bool (ComparisonKind::greaterThan, var_valueCount_1736.objectCompare (GGS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = GGS_string ("s") ;
  }else if (GalgasBool::boolFalse == test_3) {
    temp_2 = GGS_string::makeEmptyString () ;
  }
  routine_println_3F_ (GGS_string ("Dump $").add_operation (temp_1.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (var_valueCount_1736.getter_string (SOURCE_FILE ("formula-dump.ggs", 39)), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GGS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)), inCompiler  COMMA_SOURCE_FILE ("formula-dump.ggs", 39)) ;
  }
  GGS_stringlist temp_4 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 40)) ;
  GGS_stringlist var_nameList_1916 = temp_4 ;
  GGS_uintlist temp_5 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 41)) ;
  GGS_uintlist var_bitCountList_1946 = temp_5 ;
  UpEnumerator_varList enumerator_1984 (var_varList_1685) ;
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

#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "builtin-command-line-options.h"
#include "C_galgas_CLI_Options.h"
#include "F_verbose_output.h"
#include "LexiqueIntrospection.h"
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
  GGS_computedFormulaMap var_computedFormulaMap_916 = GGS_computedFormulaMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_formulaList enumerator_947 (var_ast_769.readProperty_mFormulaList ()) ;
  bool bool_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 22)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_947.hasCurrentObject () && bool_0) {
    while (enumerator_947.hasCurrentObject () && bool_0) {
      callExtensionMethod_analyzeFormula ((cPtr_abstractFormula *) enumerator_947.current_mFormula (HERE).ptr (), constinArgument_inSourceFile.readProperty_string (), var_domainMap_856, var_computedFormulaMap_916, inCompiler COMMA_SOURCE_FILE ("program.ggs", 23)) ;
      enumerator_947.gotoNextObject () ;
      if (enumerator_947.hasCurrentObject ()) {
        bool_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 22)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
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
  GenericUniqueArray <String> sourceFilesArray ;
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
      LexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
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

