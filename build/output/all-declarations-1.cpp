#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element::GALGAS_varMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mBitCount (),
mProperty_mRecordDomainMap () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element::~ GALGAS_varMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element::GALGAS_varMap_2D_element (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_uint & inOperand1,
                                                    const GALGAS_uint & inOperand2,
                                                    const GALGAS_recordDomainMap & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mBitCount (inOperand2),
mProperty_mRecordDomainMap (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element GALGAS_varMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_varMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                   GALGAS_uint::constructor_default (HERE),
                                   GALGAS_uint::constructor_default (HERE),
                                   GALGAS_recordDomainMap::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element GALGAS_varMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                    const GALGAS_uint & in_mIndex,
                                                                    const GALGAS_uint & in_mBitCount,
                                                                    const GALGAS_recordDomainMap & in_mRecordDomainMap 
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_varMap_2D_element result ;
  if (in_lkey.isValid () && in_mIndex.isValid () && in_mBitCount.isValid () && in_mRecordDomainMap.isValid ()) {
    result = GALGAS_varMap_2D_element (in_lkey, in_mIndex, in_mBitCount, in_mRecordDomainMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_varMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mBitCount.isValid () && mProperty_mRecordDomainMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mBitCount.drop () ;
  mProperty_mRecordDomainMap.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varMap_2D_element::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<struct @varMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRecordDomainMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @varMap-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varMap_2D_element ("varMap-element",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element GALGAS_varMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_varMap_2D_element result ;
  const GALGAS_varMap_2D_element * p = (const GALGAS_varMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap_2D_element::GALGAS_computedFormulaMap_2D_element (void) :
mProperty_lkey (),
mProperty_mVarList (),
mProperty_mBitCount (),
mProperty_mValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap_2D_element::~ GALGAS_computedFormulaMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap_2D_element::GALGAS_computedFormulaMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_varList & inOperand1,
                                                                            const GALGAS_uint & inOperand2,
                                                                            const GALGAS_binaryset & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mVarList (inOperand1),
mProperty_mBitCount (inOperand2),
mProperty_mValue (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap_2D_element GALGAS_computedFormulaMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_computedFormulaMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_varList::constructor_emptyList (HERE),
                                               GALGAS_uint::constructor_default (HERE),
                                               GALGAS_binaryset::constructor_emptyBinarySet (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap_2D_element GALGAS_computedFormulaMap_2D_element::constructor_new (const GALGAS_lstring & in_lkey,
                                                                                            const GALGAS_varList & in_mVarList,
                                                                                            const GALGAS_uint & in_mBitCount,
                                                                                            const GALGAS_binaryset & in_mValue 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_computedFormulaMap_2D_element result ;
  if (in_lkey.isValid () && in_mVarList.isValid () && in_mBitCount.isValid () && in_mValue.isValid ()) {
    result = GALGAS_computedFormulaMap_2D_element (in_lkey, in_mVarList, in_mBitCount, in_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_computedFormulaMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mVarList.isValid () && mProperty_mBitCount.isValid () && mProperty_mValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedFormulaMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mVarList.drop () ;
  mProperty_mBitCount.drop () ;
  mProperty_mValue.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedFormulaMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @computedFormulaMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mVarList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @computedFormulaMap-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_computedFormulaMap_2D_element ("computedFormulaMap-element",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedFormulaMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedFormulaMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedFormulaMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedFormulaMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap_2D_element GALGAS_computedFormulaMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_computedFormulaMap_2D_element result ;
  const GALGAS_computedFormulaMap_2D_element * p = (const GALGAS_computedFormulaMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_computedFormulaMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedFormulaMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression_2D_element::GALGAS_formulaParameterListInExpression_2D_element (void) :
mProperty_mParameterName (),
mProperty_mFieldNames () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression_2D_element::~ GALGAS_formulaParameterListInExpression_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression_2D_element::GALGAS_formulaParameterListInExpression_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstringlist & inOperand1) :
mProperty_mParameterName (inOperand0),
mProperty_mFieldNames (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression_2D_element GALGAS_formulaParameterListInExpression_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_formulaParameterListInExpression_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression_2D_element GALGAS_formulaParameterListInExpression_2D_element::constructor_new (const GALGAS_lstring & in_mParameterName,
                                                                                                                        const GALGAS_lstringlist & in_mFieldNames 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formulaParameterListInExpression_2D_element result ;
  if (in_mParameterName.isValid () && in_mFieldNames.isValid ()) {
    result = GALGAS_formulaParameterListInExpression_2D_element (in_mParameterName, in_mFieldNames) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_formulaParameterListInExpression_2D_element::isValid (void) const {
  return mProperty_mParameterName.isValid () && mProperty_mFieldNames.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaParameterListInExpression_2D_element::drop (void) {
  mProperty_mParameterName.drop () ;
  mProperty_mFieldNames.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaParameterListInExpression_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @formulaParameterListInExpression-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mParameterName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFieldNames.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//     @formulaParameterListInExpression-element generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formulaParameterListInExpression_2D_element ("formulaParameterListInExpression-element",
                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formulaParameterListInExpression_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaParameterListInExpression_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formulaParameterListInExpression_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formulaParameterListInExpression_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression_2D_element GALGAS_formulaParameterListInExpression_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formulaParameterListInExpression_2D_element result ;
  const GALGAS_formulaParameterListInExpression_2D_element * p = (const GALGAS_formulaParameterListInExpression_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formulaParameterListInExpression_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaParameterListInExpression-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @setting_5F_nodeHashMapSize reference class
//----------------------------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_setting_5F_nodeHashMapSize::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFormula::printNonNullClassInstanceProperties () ;
    mProperty_mSetting.printNonNullClassInstanceProperties ("mSetting") ;
  }
#endif

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_setting_5F_nodeHashMapSize::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_setting_5F_nodeHashMapSize * p = (const cPtr_setting_5F_nodeHashMapSize *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_setting_5F_nodeHashMapSize) ;
  if (kOperandEqual == result) {
    result = mProperty_mSetting.objectCompare (p->mProperty_mSetting) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_setting_5F_nodeHashMapSize::objectCompare (const GALGAS_setting_5F_nodeHashMapSize & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ; // mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize::GALGAS_setting_5F_nodeHashMapSize (void) :
GALGAS_abstractFormula () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize GALGAS_setting_5F_nodeHashMapSize::constructor_default (LOCATION_ARGS) {
  return GALGAS_setting_5F_nodeHashMapSize::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize::GALGAS_setting_5F_nodeHashMapSize (const cPtr_setting_5F_nodeHashMapSize * inSourcePtr) :
GALGAS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_setting_5F_nodeHashMapSize) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize GALGAS_setting_5F_nodeHashMapSize::constructor_new (const GALGAS_luint & inAttribute_mSetting
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_setting_5F_nodeHashMapSize result ;
  if (inAttribute_mSetting.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_setting_5F_nodeHashMapSize (inAttribute_mSetting COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_setting_5F_nodeHashMapSize::setter_setMSetting (GALGAS_luint inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_setting_5F_nodeHashMapSize * p = (cPtr_setting_5F_nodeHashMapSize *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setting_5F_nodeHashMapSize) ;
    p->mProperty_mSetting = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_setting_5F_nodeHashMapSize::readProperty_mSetting (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_setting_5F_nodeHashMapSize * p = (cPtr_setting_5F_nodeHashMapSize *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setting_5F_nodeHashMapSize) ;
    return p->mProperty_mSetting ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @setting_nodeHashMapSize class
//----------------------------------------------------------------------------------------------------------------------

cPtr_setting_5F_nodeHashMapSize::cPtr_setting_5F_nodeHashMapSize (const GALGAS_luint & in_mSetting
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (THERE),
mProperty_mSetting (in_mSetting) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_setting_5F_nodeHashMapSize::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize ;
}

void cPtr_setting_5F_nodeHashMapSize::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@setting_nodeHashMapSize:" ;
  mProperty_mSetting.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_setting_5F_nodeHashMapSize::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_setting_5F_nodeHashMapSize (mProperty_mSetting COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//     @setting_nodeHashMapSize generic code implementation
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize ("setting_nodeHashMapSize",
                                                   & kTypeDescriptor_GALGAS_abstractFormula) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_setting_5F_nodeHashMapSize::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_setting_5F_nodeHashMapSize::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setting_5F_nodeHashMapSize (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize GALGAS_setting_5F_nodeHashMapSize::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_setting_5F_nodeHashMapSize result ;
  const GALGAS_setting_5F_nodeHashMapSize * p = (const GALGAS_setting_5F_nodeHashMapSize *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_setting_5F_nodeHashMapSize *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setting_nodeHashMapSize", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//----------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@assignmentFormula analyzeFormula'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_assignmentFormula::method_analyzeFormula (const GALGAS_string /* constinArgument_inSourceFilePath */,
                                                    const GALGAS_domainMap constinArgument_inDomainMap,
                                                    GALGAS_computedFormulaMap & ioArgument_ioComputedFormulaMap,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_totalBitCount_2951 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_varList var_varList_2978 = GALGAS_varList::constructor_emptyList (SOURCE_FILE ("formula-assignment.ggs", 78)) ;
  GALGAS_varMap var_varMap_3004 = GALGAS_varMap::constructor_emptyMap (SOURCE_FILE ("formula-assignment.ggs", 79)) ;
  const GALGAS_assignmentFormula temp_0 = this ;
  extensionMethod_analyze (temp_0.readProperty_mFormulaArgumentList (), constinArgument_inDomainMap, var_varMap_3004, var_varList_2978, var_totalBitCount_2951, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 80)) ;
  const GALGAS_assignmentFormula temp_1 = this ;
  switch (temp_1.readProperty_mKind ().enumValue ()) {
  case GALGAS_formulaKind::kNotBuilt:
    break ;
  case GALGAS_formulaKind::kEnum_assignment:
    {
      GALGAS_timer var_timer_3222 = GALGAS_timer::constructor_start (SOURCE_FILE ("formula-assignment.ggs", 85)) ;
      const GALGAS_assignmentFormula temp_2 = this ;
      GALGAS_binaryset var_result_3252 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_2.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_3004, var_totalBitCount_2951, ioArgument_ioComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 86)) ;
      {
      const GALGAS_assignmentFormula temp_3 = this ;
      ioArgument_ioComputedFormulaMap.setter_insertKey (temp_3.readProperty_mFormulaName (), var_varList_2978, var_totalBitCount_2951, var_result_3252, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 87)) ;
      }
      GALGAS_uint_36__34_ var_valueCount_3472 = var_result_3252.getter_valueCount (var_totalBitCount_2951, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 88)) ;
      GALGAS_uint_36__34_ var_nodeCount_3605 = var_result_3252.getter_nodeCount (SOURCE_FILE ("formula-assignment.ggs", 90)) ;
      {
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_valueCount_3472.objectCompare (GALGAS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_6 ;
      const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, var_nodeCount_3605.objectCompare (GALGAS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        temp_6 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_7) {
        temp_6 = GALGAS_string::makeEmptyString () ;
      }
      routine_print (GALGAS_string (" ").add_operation (var_valueCount_3472.getter_string (SOURCE_FILE ("formula-assignment.ggs", 91)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 91)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 92)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 92)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 92)).add_operation (var_nodeCount_3605.getter_string (SOURCE_FILE ("formula-assignment.ggs", 93)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (GALGAS_string (" node"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (var_timer_3222.getter_string (SOURCE_FILE ("formula-assignment.ggs", 94)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 94)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 94)), inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 91)) ;
      }
    }
    break ;
  case GALGAS_formulaKind::kEnum_fixedPoint:
    {
      const cEnumAssociatedValues_formulaKind_fixedPoint * extractPtr_4938 = (const cEnumAssociatedValues_formulaKind_fixedPoint *) (temp_1.readProperty_mKind ().unsafePointer ()) ;
      const GALGAS_binaryset extractedValue_3857_startValue = extractPtr_4938->mAssociatedValue0 ;
      GALGAS_timer var_timer_3920 = GALGAS_timer::constructor_start (SOURCE_FILE ("formula-assignment.ggs", 97)) ;
      GALGAS_binaryset var_result_3961 = extractedValue_3857_startValue ;
      {
      const GALGAS_assignmentFormula temp_8 = this ;
      ioArgument_ioComputedFormulaMap.setter_insertKey (temp_8.readProperty_mFormulaName (), var_varList_2978, var_totalBitCount_2951, var_result_3961, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 99)) ;
      }
      GALGAS_bool var_iterate_4083 = GALGAS_bool (true) ;
      GALGAS_bigint var_iterationCount_4115 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 101)) ;
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("formula-assignment.ggs", 102)).isValid ()) {
        uint32_t variant_4128 = GALGAS_uint::constructor_max (SOURCE_FILE ("formula-assignment.ggs", 102)).uintValue () ;
        bool loop_4128 = true ;
        while (loop_4128) {
          loop_4128 = var_iterate_4083.isValid () ;
          if (loop_4128) {
            loop_4128 = var_iterate_4083.boolValue () ;
          }
          if (loop_4128 && (0 == variant_4128)) {
            loop_4128 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("formula-assignment.ggs", 102)) ;
          }
          if (loop_4128) {
            variant_4128 -- ;
            var_iterationCount_4115.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 103)), inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 103)) ;
            const GALGAS_assignmentFormula temp_9 = this ;
            GALGAS_binaryset var_r_4195 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_9.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_3004, var_totalBitCount_2951, ioArgument_ioComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 104)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, var_result_3961.objectCompare (var_r_4195)).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_iterate_4083 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_10) {
              var_result_3961 = var_r_4195 ;
              {
              const GALGAS_assignmentFormula temp_11 = this ;
              ioArgument_ioComputedFormulaMap.setter_setMValueForKey (var_result_3961, temp_11.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 109)) ;
              }
            }
          }
        }
      }
      GALGAS_uint_36__34_ var_valueCount_4504 = var_result_3961.getter_valueCount (var_totalBitCount_2951, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 112)) ;
      GALGAS_uint_36__34_ var_nodeCount_4637 = var_result_3961.getter_nodeCount (SOURCE_FILE ("formula-assignment.ggs", 114)) ;
      {
      GALGAS_string temp_12 ;
      const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, var_iterationCount_4115.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)))).boolEnum () ;
      if (kBoolTrue == test_13) {
        temp_12 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_13) {
        temp_12 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_14 ;
      const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_valueCount_4504.objectCompare (GALGAS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (kBoolTrue == test_15) {
        temp_14 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_15) {
        temp_14 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_16 ;
      const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_nodeCount_4637.objectCompare (GALGAS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (kBoolTrue == test_17) {
        temp_16 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_17) {
        temp_16 = GALGAS_string::makeEmptyString () ;
      }
      routine_print (GALGAS_string (" ").add_operation (var_iterationCount_4115.getter_string (SOURCE_FILE ("formula-assignment.ggs", 115)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 115)).add_operation (GALGAS_string (" iteration"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (temp_12, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (var_valueCount_4504.getter_string (SOURCE_FILE ("formula-assignment.ggs", 117)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (var_nodeCount_4637.getter_string (SOURCE_FILE ("formula-assignment.ggs", 118)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 118)).add_operation (GALGAS_string (" node"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 118)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 118)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 118)).add_operation (var_timer_3920.getter_string (SOURCE_FILE ("formula-assignment.ggs", 119)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 119)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 119)), inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 115)) ;
      }
    }
    break ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setting_nodeHashMapSize analyzeFormula'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_setting_5F_nodeHashMapSize::method_analyzeFormula (const GALGAS_string /* constinArgument_inSourceFilePath */,
                                                             const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                             GALGAS_computedFormulaMap & /* ioArgument_ioComputedFormulaMap */,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_setting_5F_nodeHashMapSize temp_0 = this ;
  GALGAS_binaryset::class_method_setNodeTableSize (temp_0.readProperty_mSetting ().readProperty_uint () COMMA_SOURCE_FILE ("setting-map.ggs", 52)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setting_andCacheMapSize analyzeFormula'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_setting_5F_andCacheMapSize::method_analyzeFormula (const GALGAS_string /* constinArgument_inSourceFilePath */,
                                                             const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                             GALGAS_computedFormulaMap & /* ioArgument_ioComputedFormulaMap */,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_setting_5F_andCacheMapSize temp_0 = this ;
  GALGAS_binaryset::class_method_setAndTableSize (temp_0.readProperty_mSetting ().readProperty_uint () COMMA_SOURCE_FILE ("setting-map.ggs", 62)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dumpFormula analyzeFormula'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_dumpFormula::method_analyzeFormula (const GALGAS_string /* constinArgument_inSourceFilePath */,
                                              const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                              GALGAS_computedFormulaMap & ioArgument_ioComputedFormulaMap,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_varList var_varList_1861 ;
  GALGAS_uint var_bitCount_1876 ;
  GALGAS_binaryset var_result_1889 ;
  const GALGAS_dumpFormula temp_0 = this ;
  ioArgument_ioComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_1861, var_bitCount_1876, var_result_1889, inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 37)) ;
  GALGAS_uint_36__34_ var_valueCount_1915 = var_result_1889.getter_valueCount (var_bitCount_1876, inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 38)) ;
  {
  const GALGAS_dumpFormula temp_1 = this ;
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_valueCount_1915.objectCompare (GALGAS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_string ("s") ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }
  routine_print (GALGAS_string ("Dump $").add_operation (temp_1.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (var_valueCount_1915.getter_string (SOURCE_FILE ("formula-dump.ggs", 39)), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)), inCompiler  COMMA_SOURCE_FILE ("formula-dump.ggs", 39)) ;
  }
  GALGAS_stringlist var_nameList_2091 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("formula-dump.ggs", 40)) ;
  GALGAS_uintlist var_bitCountList_2125 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("formula-dump.ggs", 41)) ;
  cEnumerator_varList enumerator_2158 (var_varList_1861, kENUMERATION_UP) ;
  while (enumerator_2158.hasCurrentObject ()) {
    var_nameList_2091.addAssign_operation (enumerator_2158.current_mVarName (HERE)  COMMA_SOURCE_FILE ("formula-dump.ggs", 43)) ;
    var_bitCountList_2125.addAssign_operation (enumerator_2158.current_mBitCount (HERE)  COMMA_SOURCE_FILE ("formula-dump.ggs", 44)) ;
    enumerator_2158.gotoNextObject () ;
  }
  {
  routine_print (var_result_1889.getter_print (var_nameList_2091, var_bitCountList_2125 COMMA_SOURCE_FILE ("formula-dump.ggs", 46)), inCompiler  COMMA_SOURCE_FILE ("formula-dump.ggs", 46)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphvizFormula analyzeFormula'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_graphvizFormula::method_analyzeFormula (const GALGAS_string constinArgument_inSourceFilePath,
                                                  const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                  GALGAS_computedFormulaMap & ioArgument_ioComputedFormulaMap,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_varList var_varList_1869 ;
  GALGAS_binaryset var_result_1886 ;
  const GALGAS_graphvizFormula temp_0 = this ;
  GALGAS_uint joker_1872 ; // Joker input parameter
  ioArgument_ioComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_1869, joker_1872, var_result_1886, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 37)) ;
  const GALGAS_graphvizFormula temp_1 = this ;
  GALGAS_string var_filePath_1902 = constinArgument_inSourceFilePath.getter_stringByDeletingPathExtension (SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (temp_1.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)) ;
  {
  const GALGAS_graphvizFormula temp_2 = this ;
  routine_print (GALGAS_string ("Graphviz $").add_operation (temp_2.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)).add_operation (var_filePath_1902, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)), inCompiler  COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)) ;
  }
  GALGAS_stringlist var_bitNameList_2082 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("formula-graphviz.ggs", 40)) ;
  cEnumerator_varList enumerator_2117 (var_varList_1869, kENUMERATION_DOWN) ;
  while (enumerator_2117.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, enumerator_2117.current_mBitCount (HERE).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_bitNameList_2082.addAssign_operation (enumerator_2117.current_mVarName (HERE)  COMMA_SOURCE_FILE ("formula-graphviz.ggs", 43)) ;
      }
    }
    if (kBoolFalse == test_3) {
      cEnumerator_range enumerator_2230 (GALGAS_range (GALGAS_uint (uint32_t (0U)), enumerator_2117.current_mBitCount (HERE).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 45))), kENUMERATION_UP) ;
      while (enumerator_2230.hasCurrentObject ()) {
        var_bitNameList_2082.addAssign_operation (enumerator_2117.current_mVarName (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46)).add_operation (enumerator_2230.current (HERE).getter_string (SOURCE_FILE ("formula-graphviz.ggs", 46)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46))  COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46)) ;
        enumerator_2230.gotoNextObject () ;
      }
    }
    enumerator_2117.gotoNextObject () ;
  }
  GALGAS_string var_s_2308 = var_result_1886.getter_graphviz (var_bitNameList_2082 COMMA_SOURCE_FILE ("formula-graphviz.ggs", 50)) ;
  GALGAS_bool joker_2392 ; // Joker input parameter
  var_s_2308.method_writeToFileWhenDifferentContents (var_filePath_1902, joker_2392, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 51)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@varInExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_varInExpression::getter_computeExpression (const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                 const GALGAS_varMap constinArgument_inVarMap,
                                                                 const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                 const GALGAS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  GALGAS_uint var_idx_11507 ;
  GALGAS_uint var_bitCount_11522 ;
  GALGAS_recordDomainMap var_subdomainMap_11541 ;
  const GALGAS_varInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_11507, var_bitCount_11522, var_subdomainMap_11541, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 354)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_subdomainMap_11541.getter_count (SOURCE_FILE ("expression.ggs", 355)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_varInExpression temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mVarName ().readProperty_location (), GALGAS_string ("variable is a record; use dot notation"), fixItArray3  COMMA_SOURCE_FILE ("expression.ggs", 356)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, var_bitCount_11522.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_varInExpression temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mVarName ().readProperty_location (), GALGAS_string ("variable is not boolean; use {...} or dot notation"), fixItArray6  COMMA_SOURCE_FILE ("expression.ggs", 358)) ;
      }
    }
  }
  result_outResult = GALGAS_binaryset::constructor_binarySetWithBit (var_idx_11507, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 360)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@varBitInExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_varBitInExpression::getter_computeExpression (const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                    const GALGAS_varMap constinArgument_inVarMap,
                                                                    const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                    const GALGAS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  GALGAS_uint var_idx_12216 ;
  GALGAS_uint var_bitCount_12231 ;
  GALGAS_recordDomainMap var_subdomainMap_12250 ;
  const GALGAS_varBitInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_12216, var_bitCount_12231, var_subdomainMap_12250, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 372)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_subdomainMap_12250.getter_count (SOURCE_FILE ("expression.ggs", 373)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_varBitInExpression temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mVarName ().readProperty_location (), GALGAS_string ("variable is a record; use dot notation"), fixItArray3  COMMA_SOURCE_FILE ("expression.ggs", 374)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      const GALGAS_varBitInExpression temp_5 = this ;
      test_4 = GALGAS_bool (kIsInfOrEqual, var_bitCount_12231.objectCompare (temp_5.readProperty_mVarBit ().readProperty_uint ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_varBitInExpression temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mVarBit ().readProperty_location (), GALGAS_string ("bit index should be < ").add_operation (var_bitCount_12231.getter_string (SOURCE_FILE ("expression.ggs", 376)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 376)), fixItArray7  COMMA_SOURCE_FILE ("expression.ggs", 376)) ;
      }
    }
  }
  const GALGAS_varBitInExpression temp_8 = this ;
  result_outResult = GALGAS_binaryset::constructor_binarySetWithBit (var_idx_12216.add_operation (temp_8.readProperty_mVarBit ().readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 378)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 378)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@andExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_andExpression::getter_computeExpression (const GALGAS_domainMap constinArgument_inDomainMap,
                                                               const GALGAS_varMap constinArgument_inVarMap,
                                                               const GALGAS_uint constinArgument_inTotalBitCount,
                                                               const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  const GALGAS_andExpression temp_0 = this ;
  GALGAS_binaryset var_left_12881 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 390)) ;
  const GALGAS_andExpression temp_1 = this ;
  GALGAS_binaryset var_right_13002 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 391)) ;
  result_outResult = var_left_12881.operator_and (var_right_13002 COMMA_SOURCE_FILE ("expression.ggs", 392)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@orExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_orExpression::getter_computeExpression (const GALGAS_domainMap constinArgument_inDomainMap,
                                                              const GALGAS_varMap constinArgument_inVarMap,
                                                              const GALGAS_uint constinArgument_inTotalBitCount,
                                                              const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  const GALGAS_orExpression temp_0 = this ;
  GALGAS_binaryset var_left_13485 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 404)) ;
  const GALGAS_orExpression temp_1 = this ;
  GALGAS_binaryset var_right_13606 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 405)) ;
  result_outResult = var_left_13485.operator_or (var_right_13606 COMMA_SOURCE_FILE ("expression.ggs", 406)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@xorExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_xorExpression::getter_computeExpression (const GALGAS_domainMap constinArgument_inDomainMap,
                                                               const GALGAS_varMap constinArgument_inVarMap,
                                                               const GALGAS_uint constinArgument_inTotalBitCount,
                                                               const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  const GALGAS_xorExpression temp_0 = this ;
  GALGAS_binaryset var_left_14090 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 418)) ;
  const GALGAS_xorExpression temp_1 = this ;
  GALGAS_binaryset var_right_14211 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 419)) ;
  result_outResult = var_left_14090.operator_xor (var_right_14211 COMMA_SOURCE_FILE ("expression.ggs", 420)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@impliesExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_impliesExpression::getter_computeExpression (const GALGAS_domainMap constinArgument_inDomainMap,
                                                                   const GALGAS_varMap constinArgument_inVarMap,
                                                                   const GALGAS_uint constinArgument_inTotalBitCount,
                                                                   const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  const GALGAS_impliesExpression temp_0 = this ;
  GALGAS_binaryset var_left_14699 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 432)) ;
  const GALGAS_impliesExpression temp_1 = this ;
  GALGAS_binaryset var_right_14820 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 433)) ;
  result_outResult = var_left_14699.getter_implies (var_right_14820 COMMA_SOURCE_FILE ("expression.ggs", 434)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@equalExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_equalExpression::getter_computeExpression (const GALGAS_domainMap constinArgument_inDomainMap,
                                                                 const GALGAS_varMap constinArgument_inVarMap,
                                                                 const GALGAS_uint constinArgument_inTotalBitCount,
                                                                 const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  const GALGAS_equalExpression temp_0 = this ;
  GALGAS_binaryset var_left_15314 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 446)) ;
  const GALGAS_equalExpression temp_1 = this ;
  GALGAS_binaryset var_right_15435 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 447)) ;
  result_outResult = var_left_15314.operator_xor (var_right_15435 COMMA_SOURCE_FILE ("expression.ggs", 448)).operator_tilde (SOURCE_FILE ("expression.ggs", 448)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@notEqualExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_notEqualExpression::getter_computeExpression (const GALGAS_domainMap constinArgument_inDomainMap,
                                                                    const GALGAS_varMap constinArgument_inVarMap,
                                                                    const GALGAS_uint constinArgument_inTotalBitCount,
                                                                    const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  const GALGAS_notEqualExpression temp_0 = this ;
  GALGAS_binaryset var_left_15927 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 460)) ;
  const GALGAS_notEqualExpression temp_1 = this ;
  GALGAS_binaryset var_right_16048 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 461)) ;
  result_outResult = var_left_15927.operator_xor (var_right_16048 COMMA_SOURCE_FILE ("expression.ggs", 462)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@complementExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_complementExpression::getter_computeExpression (const GALGAS_domainMap constinArgument_inDomainMap,
                                                                      const GALGAS_varMap constinArgument_inVarMap,
                                                                      const GALGAS_uint constinArgument_inTotalBitCount,
                                                                      const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  const GALGAS_complementExpression temp_0 = this ;
  result_outResult = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 474)).operator_tilde (SOURCE_FILE ("expression.ggs", 474)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@trueExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_trueExpression::getter_computeExpression (const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                const GALGAS_varMap /* constinArgument_inVarMap */,
                                                                const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                const GALGAS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                C_Compiler */* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  result_outResult = GALGAS_binaryset::constructor_fullBinarySet (SOURCE_FILE ("expression.ggs", 486)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@falseExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_falseExpression::getter_computeExpression (const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                 const GALGAS_varMap /* constinArgument_inVarMap */,
                                                                 const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                 const GALGAS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                 C_Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  result_outResult = GALGAS_binaryset::constructor_emptyBinarySet (SOURCE_FILE ("expression.ggs", 498)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@formulaInExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_formulaInExpression::getter_computeExpression (const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                     const GALGAS_varMap constinArgument_inVarMap,
                                                                     const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                     const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  GALGAS_varList var_varList_17900 ;
  GALGAS_uint var_totalBitCount_17927 ;
  GALGAS_binaryset var_formulaValue_17946 ;
  const GALGAS_formulaInExpression temp_0 = this ;
  constinArgument_inComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_17900, var_totalBitCount_17927, var_formulaValue_17946, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 511)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_formulaInExpression temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mParameterList ().getter_length (SOURCE_FILE ("expression.ggs", 513)).objectCompare (var_varList_17900.getter_length (SOURCE_FILE ("expression.ggs", 513)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_formulaInExpression temp_3 = this ;
      const GALGAS_formulaInExpression temp_4 = this ;
      GALGAS_string temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_varList_17900.getter_length (SOURCE_FILE ("expression.ggs", 515)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_string::makeEmptyString () ;
      }
      const GALGAS_formulaInExpression temp_7 = this ;
      const GALGAS_formulaInExpression temp_8 = this ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, temp_8.readProperty_mParameterList ().getter_length (SOURCE_FILE ("expression.ggs", 517)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mFormulaName ().readProperty_location (), GALGAS_string ("the $").add_operation (temp_4.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (GALGAS_string (" names "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (var_varList_17900.getter_length (SOURCE_FILE ("expression.ggs", 515)).getter_string (SOURCE_FILE ("expression.ggs", 514)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (GALGAS_string (" variable"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (GALGAS_string (", but this call names "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (temp_7.readProperty_mParameterList ().getter_length (SOURCE_FILE ("expression.ggs", 517)).getter_string (SOURCE_FILE ("expression.ggs", 516)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 516)).add_operation (GALGAS_string (" variable"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 517)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 517)), fixItArray11  COMMA_SOURCE_FILE ("expression.ggs", 514)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_uintlist var_transformationList_18403 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("expression.ggs", 520)) ;
    const GALGAS_formulaInExpression temp_12 = this ;
    cEnumerator_varList enumerator_18447 (var_varList_17900, kENUMERATION_DOWN) ;
    cEnumerator_formulaParameterListInExpression enumerator_18491 (temp_12.readProperty_mParameterList (), kENUMERATION_DOWN) ;
    while (enumerator_18447.hasCurrentObject () && enumerator_18491.hasCurrentObject ()) {
      GALGAS_uint var_parameterIndex_18582 ;
      GALGAS_uint var_parameterBitCount_18608 ;
      GALGAS_recordDomainMap var_subdomainMap_18640 ;
      constinArgument_inVarMap.method_searchKey (enumerator_18491.current_mParameterName (HERE), var_parameterIndex_18582, var_parameterBitCount_18608, var_subdomainMap_18640, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 522)) ;
      cEnumerator_lstringlist enumerator_18662 (enumerator_18491.current_mFieldNames (HERE), kENUMERATION_UP) ;
      while (enumerator_18662.hasCurrentObject ()) {
        GALGAS_uint var_fieldRelativeBitIndex_18754 ;
        GALGAS_recordDomainMap var_fieldSubdomainMap_18798 ;
        var_subdomainMap_18640.method_searchKey (enumerator_18662.current_mValue (HERE), var_fieldRelativeBitIndex_18754, var_parameterBitCount_18608, var_fieldSubdomainMap_18798, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 524)) ;
        var_parameterIndex_18582 = var_parameterIndex_18582.add_operation (var_fieldRelativeBitIndex_18754, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 525)) ;
        var_subdomainMap_18640 = var_fieldSubdomainMap_18798 ;
        enumerator_18662.gotoNextObject () ;
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsNotEqual, enumerator_18447.current_mBitCount (HERE).objectCompare (var_parameterBitCount_18608)).boolEnum () ;
        if (kBoolTrue == test_13) {
          GALGAS_string temp_14 ;
          const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_parameterBitCount_18608.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_15) {
            temp_14 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_15) {
            temp_14 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, enumerator_18447.current_mBitCount (HERE).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (enumerator_18491.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("this parameter is declared with a size of ").add_operation (var_parameterBitCount_18608.getter_string (SOURCE_FILE ("expression.ggs", 529)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 529)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (GALGAS_string (", but corresponding formal argument '"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (enumerator_18447.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (GALGAS_string ("' is declared with a size of "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (enumerator_18447.current_mBitCount (HERE).getter_string (SOURCE_FILE ("expression.ggs", 531)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 532)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 532)), fixItArray18  COMMA_SOURCE_FILE ("expression.ggs", 529)) ;
        }
      }
      cEnumerator_range enumerator_19355 (GALGAS_range (GALGAS_uint (uint32_t (0U)), var_parameterBitCount_18608.substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 534))), kENUMERATION_UP) ;
      while (enumerator_19355.hasCurrentObject ()) {
        var_transformationList_18403.addAssign_operation (var_parameterIndex_18582.add_operation (enumerator_19355.current (HERE), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 535))  COMMA_SOURCE_FILE ("expression.ggs", 535)) ;
        enumerator_19355.gotoNextObject () ;
      }
      enumerator_18447.gotoNextObject () ;
      enumerator_18491.gotoNextObject () ;
    }
    result_outResult = var_formulaValue_17946.getter_transformedBy (var_transformationList_18403 COMMA_SOURCE_FILE ("expression.ggs", 538)) ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@existInExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_existInExpression::getter_computeExpression (const GALGAS_domainMap constinArgument_inDomainMap,
                                                                   const GALGAS_varMap constinArgument_inVarMap,
                                                                   const GALGAS_uint constinArgument_inTotalBitCount,
                                                                   const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  GALGAS_varMap var_varMap_19858 = constinArgument_inVarMap ;
  GALGAS_uint var_totalBitCount_19895 = constinArgument_inTotalBitCount ;
  GALGAS_varList joker_19971 = GALGAS_varList::constructor_emptyList (SOURCE_FILE ("expression.ggs", 553)) ;
  const GALGAS_existInExpression temp_0 = this ;
  extensionMethod_analyze (temp_0.readProperty_mArgumentList (), constinArgument_inDomainMap, var_varMap_19858, joker_19971, var_totalBitCount_19895, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 553)) ;
  const GALGAS_existInExpression temp_1 = this ;
  GALGAS_binaryset var_r_19998 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_19858, var_totalBitCount_19895, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 554)) ;
  result_outResult = var_r_19998.getter_existOnBitIndexAndBeyond (constinArgument_inTotalBitCount COMMA_SOURCE_FILE ("expression.ggs", 555)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@forAllInExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_forAllInExpression::getter_computeExpression (const GALGAS_domainMap constinArgument_inDomainMap,
                                                                    const GALGAS_varMap constinArgument_inVarMap,
                                                                    const GALGAS_uint constinArgument_inTotalBitCount,
                                                                    const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  GALGAS_varMap var_varMap_20521 = constinArgument_inVarMap ;
  GALGAS_uint var_totalBitCount_20558 = constinArgument_inTotalBitCount ;
  GALGAS_varList joker_20634 = GALGAS_varList::constructor_emptyList (SOURCE_FILE ("expression.ggs", 569)) ;
  const GALGAS_forAllInExpression temp_0 = this ;
  extensionMethod_analyze (temp_0.readProperty_mArgumentList (), constinArgument_inDomainMap, var_varMap_20521, joker_20634, var_totalBitCount_20558, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 569)) ;
  const GALGAS_forAllInExpression temp_1 = this ;
  GALGAS_binaryset var_r_20661 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_20521, var_totalBitCount_20558, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 570)) ;
  result_outResult = var_r_20661.getter_forAllOnBitIndexAndBeyond (constinArgument_inTotalBitCount COMMA_SOURCE_FILE ("expression.ggs", 571)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@comparisonWithConstantInExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_comparisonWithConstantInExpression::getter_computeExpression (const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                                    const GALGAS_varMap constinArgument_inVarMap,
                                                                                    const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                                    const GALGAS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  GALGAS_uint var_idx_21249 ;
  GALGAS_uint var_bitCount_21266 ;
  GALGAS_recordDomainMap var_subDomainMap_21298 ;
  const GALGAS_comparisonWithConstantInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_21249, var_bitCount_21266, var_subDomainMap_21298, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 583)) ;
  const GALGAS_comparisonWithConstantInExpression temp_1 = this ;
  cEnumerator_lstringlist enumerator_21316 (temp_1.readProperty_mFieldNames (), kENUMERATION_UP) ;
  while (enumerator_21316.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex_21407 ;
    GALGAS_recordDomainMap var_fieldSubdomainMap_21442 ;
    var_subDomainMap_21298.method_searchKey (enumerator_21316.current_mValue (HERE), var_fieldRelativeBitIndex_21407, var_bitCount_21266, var_fieldSubdomainMap_21442, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 585)) ;
    var_idx_21249 = var_idx_21249.add_operation (var_fieldRelativeBitIndex_21407, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 586)) ;
    var_subDomainMap_21298 = var_fieldSubdomainMap_21442 ;
    enumerator_21316.gotoNextObject () ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictSup, var_subDomainMap_21298.getter_count (SOURCE_FILE ("expression.ggs", 589)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_comparisonWithConstantInExpression temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mVarName ().readProperty_location (), GALGAS_string ("variable is a record; use dot notation"), fixItArray4  COMMA_SOURCE_FILE ("expression.ggs", 590)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_comparisonWithConstantInExpression temp_6 = this ;
      test_5 = GALGAS_bool (kIsStrictSup, temp_6.readProperty_mConstant ().readProperty_uint ().getter_significantBitCount (SOURCE_FILE ("expression.ggs", 591)).objectCompare (var_bitCount_21266)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_comparisonWithConstantInExpression temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mConstant ().readProperty_location (), GALGAS_string ("Constant too large (should be < 2**").add_operation (var_bitCount_21266.getter_string (SOURCE_FILE ("expression.ggs", 592)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 592)), fixItArray8  COMMA_SOURCE_FILE ("expression.ggs", 592)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_comparisonWithConstantInExpression temp_9 = this ;
      switch (temp_9.readProperty_mComparison ().enumValue ()) {
      case GALGAS_comparison::kNotBuilt:
        break ;
      case GALGAS_comparison::kEnum_equal:
        {
          const GALGAS_comparisonWithConstantInExpression temp_10 = this ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (var_idx_21249, var_bitCount_21266, temp_10.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 596)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 596)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_notEqual:
        {
          const GALGAS_comparisonWithConstantInExpression temp_11 = this ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithNotEqualToConstant (var_idx_21249, var_bitCount_21266, temp_11.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 598)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 598)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_lowerOrEqual:
        {
          const GALGAS_comparisonWithConstantInExpression temp_12 = this ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithLowerOrEqualToConstant (var_idx_21249, var_bitCount_21266, temp_12.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 600)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 600)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_lowerThan:
        {
          const GALGAS_comparisonWithConstantInExpression temp_13 = this ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictLowerThanConstant (var_idx_21249, var_bitCount_21266, temp_13.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 602)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 602)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_greaterOrEqual:
        {
          const GALGAS_comparisonWithConstantInExpression temp_14 = this ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithGreaterOrEqualToConstant (var_idx_21249, var_bitCount_21266, temp_14.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 604)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 604)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_greaterThan:
        {
          const GALGAS_comparisonWithConstantInExpression temp_15 = this ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictGreaterThanConstant (var_idx_21249, var_bitCount_21266, temp_15.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 606)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 606)) ;
        }
        break ;
      }
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@variableComparisonInExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset cPtr_variableComparisonInExpression::getter_computeExpression (const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                                const GALGAS_varMap constinArgument_inVarMap,
                                                                                const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                                const GALGAS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_binaryset result_outResult ; // Returned variable
  GALGAS_uint var_leftIdx_23103 ;
  GALGAS_uint var_leftBitCount_23125 ;
  GALGAS_recordDomainMap var_leftSubDomainMap_23162 ;
  const GALGAS_variableComparisonInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mLeftVarName (), var_leftIdx_23103, var_leftBitCount_23125, var_leftSubDomainMap_23162, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 620)) ;
  const GALGAS_variableComparisonInExpression temp_1 = this ;
  cEnumerator_lstringlist enumerator_23180 (temp_1.readProperty_mLeftFieldNames (), kENUMERATION_UP) ;
  while (enumerator_23180.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex_23279 ;
    GALGAS_recordDomainMap var_fieldSubdomainMap_23318 ;
    var_leftSubDomainMap_23162.method_searchKey (enumerator_23180.current_mValue (HERE), var_fieldRelativeBitIndex_23279, var_leftBitCount_23125, var_fieldSubdomainMap_23318, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 622)) ;
    var_leftIdx_23103 = var_leftIdx_23103.add_operation (var_fieldRelativeBitIndex_23279, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 623)) ;
    var_leftSubDomainMap_23162 = var_fieldSubdomainMap_23318 ;
    enumerator_23180.gotoNextObject () ;
  }
  GALGAS_uint var_rightIdx_23471 ;
  GALGAS_uint var_rightBitCount_23493 ;
  GALGAS_recordDomainMap var_rightSubDomainMap_23530 ;
  const GALGAS_variableComparisonInExpression temp_2 = this ;
  constinArgument_inVarMap.method_searchKey (temp_2.readProperty_mRightVarName (), var_rightIdx_23471, var_rightBitCount_23493, var_rightSubDomainMap_23530, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 626)) ;
  const GALGAS_variableComparisonInExpression temp_3 = this ;
  cEnumerator_lstringlist enumerator_23548 (temp_3.readProperty_mRightFieldNames (), kENUMERATION_UP) ;
  while (enumerator_23548.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex_23649 ;
    GALGAS_recordDomainMap var_fieldSubdomainMap_23689 ;
    var_rightSubDomainMap_23530.method_searchKey (enumerator_23548.current_mValue (HERE), var_fieldRelativeBitIndex_23649, var_rightBitCount_23493, var_fieldSubdomainMap_23689, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 628)) ;
    var_rightIdx_23471 = var_rightIdx_23471.add_operation (var_fieldRelativeBitIndex_23649, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 629)) ;
    var_rightSubDomainMap_23530 = var_fieldSubdomainMap_23689 ;
    enumerator_23548.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsStrictSup, var_leftSubDomainMap_23162.getter_count (SOURCE_FILE ("expression.ggs", 632)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_variableComparisonInExpression temp_5 = this ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mLeftVarName ().readProperty_location (), GALGAS_string ("variable is a record; use dot notation"), fixItArray6  COMMA_SOURCE_FILE ("expression.ggs", 633)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_4) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (kIsStrictSup, var_rightSubDomainMap_23530.getter_count (SOURCE_FILE ("expression.ggs", 634)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        const GALGAS_variableComparisonInExpression temp_8 = this ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mRightVarName ().readProperty_location (), GALGAS_string ("variable is a record; use dot notation"), fixItArray9  COMMA_SOURCE_FILE ("expression.ggs", 635)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_7) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsNotEqual, var_leftBitCount_23125.objectCompare (var_rightBitCount_23493)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_variableComparisonInExpression temp_11 = this ;
          const GALGAS_variableComparisonInExpression temp_12 = this ;
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_leftBitCount_23125.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string temp_15 ;
          const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, var_rightBitCount_23493.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_16) {
            temp_15 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_16) {
            temp_15 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mRightVarName ().readProperty_location (), GALGAS_string ("'").add_operation (temp_12.readProperty_mLeftVarName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 637)).add_operation (GALGAS_string ("' variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 637)).add_operation (var_leftBitCount_23125.getter_string (SOURCE_FILE ("expression.ggs", 637)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 637)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 638)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 638)).add_operation (GALGAS_string (", but this variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 638)).add_operation (var_rightBitCount_23493.getter_string (SOURCE_FILE ("expression.ggs", 639)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 639)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 640)).add_operation (temp_15, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 640)), fixItArray17  COMMA_SOURCE_FILE ("expression.ggs", 637)) ;
          result_outResult.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_10) {
        const GALGAS_variableComparisonInExpression temp_18 = this ;
        switch (temp_18.readProperty_mComparison ().enumValue ()) {
        case GALGAS_comparison::kNotBuilt:
          break ;
        case GALGAS_comparison::kEnum_equal:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithEqualComparison (var_leftIdx_23103, var_leftBitCount_23125, var_rightIdx_23471, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 645)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_notEqual:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithNotEqualComparison (var_leftIdx_23103, var_leftBitCount_23125, var_rightIdx_23471, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 647)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_lowerOrEqual:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithLowerOrEqualComparison (var_leftIdx_23103, var_leftBitCount_23125, var_rightIdx_23471, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 649)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_lowerThan:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictLowerComparison (var_leftIdx_23103, var_leftBitCount_23125, var_rightIdx_23471, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 651)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_greaterOrEqual:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithGreaterOrEqualComparison (var_leftIdx_23103, var_leftBitCount_23125, var_rightIdx_23471, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 653)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_greaterThan:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictGreaterComparison (var_leftIdx_23103, var_leftBitCount_23125, var_rightIdx_23471, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 655)) ;
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
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/F_verbose_output.h"
#include "galgas2/cLexiqueIntrospection.h"
#include "command_line_interface/C_builtin_CLI_Options.h"

//----------------------------------------------------------------------------------------------------------------------
//
//                      print_tool_help_message                                                  
//
//----------------------------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "kerbdd",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a source text file with the .kerbdd extension",
  NULL
} ;    

//----------------------------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "2.0.0" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_before (C_Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//----------------------------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast var_ast_829 ;
  var_ast_829.drop () ;
  cGrammar_kerbdd_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_ast_829  COMMA_SOURCE_FILE ("program.ggs", 17)) ;
  GALGAS_domainMap var_domainMap_921 ;
  extensionMethod_analyze (var_ast_829.readProperty_mDomainList (), var_domainMap_921, inCompiler COMMA_SOURCE_FILE ("program.ggs", 19)) ;
  GALGAS_computedFormulaMap var_computedFormulaMap_989 = GALGAS_computedFormulaMap::constructor_emptyMap (SOURCE_FILE ("program.ggs", 21)) ;
  cEnumerator_formulaList enumerator_1009 (var_ast_829.readProperty_mFormulaList (), kENUMERATION_UP) ;
  bool bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 22)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_1009.hasCurrentObject () && bool_0) {
    while (enumerator_1009.hasCurrentObject () && bool_0) {
      callExtensionMethod_analyzeFormula ((cPtr_abstractFormula *) enumerator_1009.current_mFormula (HERE).ptr (), constinArgument_inSourceFile.readProperty_string (), var_domainMap_921, var_computedFormulaMap_989, inCompiler COMMA_SOURCE_FILE ("program.ggs", 23)) ;
      enumerator_1009.gotoNextObject () ;
      if (enumerator_1009.hasCurrentObject ()) {
        bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 22)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//----------------------------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <C_String> sourceFilesArray ;
  F_Analyze_CLI_Options (inArgc, inArgv,
                         sourceFilesArray,
                         kSourceFileExtensions,
                         kSourceFileHelpMessages,
                         print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  C_String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    co << executionModeOptionErrorMessage ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    C_Compiler * commonCompiler = NULL ;
    macroMyNew (commonCompiler, C_Compiler (NULL COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
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
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
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
        C_String message ;
        if (totalWarningCount () == 0) {
          message << "No warning" ;
        }else if (totalWarningCount () == 1) {
          message << "1 warning" ;
        }else{
          message << cStringWithSigned (totalWarningCount ()) << " warnings" ;
        }
        message << ", " ;
        if (totalErrorCount () == 0) {
          message << "no error" ;
        }else if (totalErrorCount () == 1) {
          message << "1 error" ;
        }else{
          message << cStringWithSigned (totalErrorCount ()) << " errors" ;
        }
        message << ".\n" ;
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

