#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

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
  GALGAS_uint var_totalBitCount_2946 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_varList var_varList_2973 = GALGAS_varList::constructor_emptyList (SOURCE_FILE ("formula-assignment.ggs", 78)) ;
  GALGAS_varMap var_varMap_2999 = GALGAS_varMap::constructor_emptyMap (SOURCE_FILE ("formula-assignment.ggs", 79)) ;
  const GALGAS_assignmentFormula temp_0 = this ;
  extensionMethod_analyze (temp_0.readProperty_mFormulaArgumentList (), constinArgument_inDomainMap, var_varMap_2999, var_varList_2973, var_totalBitCount_2946, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 80)) ;
  const GALGAS_assignmentFormula temp_1 = this ;
  switch (temp_1.readProperty_mKind ().enumValue ()) {
  case GALGAS_formulaKind::kNotBuilt:
    break ;
  case GALGAS_formulaKind::kEnum_assignment:
    {
      const GALGAS_assignmentFormula temp_2 = this ;
      inCompiler->printMessage (temp_2.readProperty_mFormulaName ().readProperty_string ().add_operation (GALGAS_string ("..."), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 84))  COMMA_SOURCE_FILE ("formula-assignment.ggs", 84)) ;
      GALGAS_timer var_timer_3213 = GALGAS_timer::constructor_start (SOURCE_FILE ("formula-assignment.ggs", 85)) ;
      const GALGAS_assignmentFormula temp_3 = this ;
      GALGAS_binaryset var_result_3243 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_3.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_2999, var_totalBitCount_2946, ioArgument_ioComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 86)) ;
      {
      const GALGAS_assignmentFormula temp_4 = this ;
      ioArgument_ioComputedFormulaMap.setter_insertKey (temp_4.readProperty_mFormulaName (), var_varList_2973, var_totalBitCount_2946, var_result_3243, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 87)) ;
      }
      GALGAS_uint_36__34_ var_valueCount_3457 = var_result_3243.getter_valueCount (var_totalBitCount_2946, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 88)) ;
      GALGAS_uint_36__34_ var_nodeCount_3591 = var_result_3243.getter_nodeCount (SOURCE_FILE ("formula-assignment.ggs", 90)) ;
      GALGAS_string temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_valueCount_3457.objectCompare (GALGAS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_7 ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_nodeCount_3591.objectCompare (GALGAS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (kBoolTrue == test_8) {
        temp_7 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_8) {
        temp_7 = GALGAS_string::makeEmptyString () ;
      }
      inCompiler->printMessage (GALGAS_string (" ").add_operation (var_valueCount_3457.getter_string (SOURCE_FILE ("formula-assignment.ggs", 91)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 91)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 92)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 92)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 92)).add_operation (var_nodeCount_3591.getter_string (SOURCE_FILE ("formula-assignment.ggs", 93)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (GALGAS_string (" node"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (var_timer_3213.getter_string (SOURCE_FILE ("formula-assignment.ggs", 94)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 94)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 94))  COMMA_SOURCE_FILE ("formula-assignment.ggs", 91)) ;
    }
    break ;
  case GALGAS_formulaKind::kEnum_fixedPoint:
    {
      const cEnumAssociatedValues_formulaKind_fixedPoint * extractPtr_4919 = (const cEnumAssociatedValues_formulaKind_fixedPoint *) (temp_1.readProperty_mKind ().unsafePointer ()) ;
      const GALGAS_binaryset extractedValue_3844_startValue = extractPtr_4919->mAssociatedValue0 ;
      const GALGAS_assignmentFormula temp_9 = this ;
      inCompiler->printMessage (temp_9.readProperty_mFormulaName ().readProperty_string ().add_operation (GALGAS_string ("..."), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 96))  COMMA_SOURCE_FILE ("formula-assignment.ggs", 96)) ;
      GALGAS_timer var_timer_3906 = GALGAS_timer::constructor_start (SOURCE_FILE ("formula-assignment.ggs", 97)) ;
      GALGAS_binaryset var_result_3947 = extractedValue_3844_startValue ;
      {
      const GALGAS_assignmentFormula temp_10 = this ;
      ioArgument_ioComputedFormulaMap.setter_insertKey (temp_10.readProperty_mFormulaName (), var_varList_2973, var_totalBitCount_2946, var_result_3947, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 99)) ;
      }
      GALGAS_bool var_iterate_4066 = GALGAS_bool (true) ;
      GALGAS_bigint var_iterationCount_4098 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 101)) ;
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("formula-assignment.ggs", 102)).isValid ()) {
        uint32_t variant_4111 = GALGAS_uint::constructor_max (SOURCE_FILE ("formula-assignment.ggs", 102)).uintValue () ;
        bool loop_4111 = true ;
        while (loop_4111) {
          loop_4111 = var_iterate_4066.isValid () ;
          if (loop_4111) {
            loop_4111 = var_iterate_4066.boolValue () ;
          }
          if (loop_4111 && (0 == variant_4111)) {
            loop_4111 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("formula-assignment.ggs", 102)) ;
          }
          if (loop_4111) {
            variant_4111 -- ;
            var_iterationCount_4098.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 103)), inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 103)) ;
            const GALGAS_assignmentFormula temp_11 = this ;
            GALGAS_binaryset var_r_4178 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_11.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_2999, var_totalBitCount_2946, ioArgument_ioComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 104)) ;
            enumGalgasBool test_12 = kBoolTrue ;
            if (kBoolTrue == test_12) {
              test_12 = GALGAS_bool (kIsEqual, var_result_3947.objectCompare (var_r_4178)).boolEnum () ;
              if (kBoolTrue == test_12) {
                var_iterate_4066 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_12) {
              var_result_3947 = var_r_4178 ;
              {
              const GALGAS_assignmentFormula temp_13 = this ;
              ioArgument_ioComputedFormulaMap.setter_setMValueForKey (var_result_3947, temp_13.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 109)) ;
              }
            }
          }
        }
      }
      GALGAS_uint_36__34_ var_valueCount_4483 = var_result_3947.getter_valueCount (var_totalBitCount_2946, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 112)) ;
      GALGAS_uint_36__34_ var_nodeCount_4617 = var_result_3947.getter_nodeCount (SOURCE_FILE ("formula-assignment.ggs", 114)) ;
      GALGAS_string temp_14 ;
      const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_iterationCount_4098.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)))).boolEnum () ;
      if (kBoolTrue == test_15) {
        temp_14 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_15) {
        temp_14 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_16 ;
      const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_valueCount_4483.objectCompare (GALGAS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (kBoolTrue == test_17) {
        temp_16 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_17) {
        temp_16 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_18 ;
      const enumGalgasBool test_19 = GALGAS_bool (kIsStrictSup, var_nodeCount_4617.objectCompare (GALGAS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (kBoolTrue == test_19) {
        temp_18 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_19) {
        temp_18 = GALGAS_string::makeEmptyString () ;
      }
      inCompiler->printMessage (GALGAS_string (" ").add_operation (var_iterationCount_4098.getter_string (SOURCE_FILE ("formula-assignment.ggs", 115)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 115)).add_operation (GALGAS_string (" iteration"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (var_valueCount_4483.getter_string (SOURCE_FILE ("formula-assignment.ggs", 117)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (var_nodeCount_4617.getter_string (SOURCE_FILE ("formula-assignment.ggs", 118)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 118)).add_operation (GALGAS_string (" node"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 118)).add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 118)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 118)).add_operation (var_timer_3906.getter_string (SOURCE_FILE ("formula-assignment.ggs", 119)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 119)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 119))  COMMA_SOURCE_FILE ("formula-assignment.ggs", 115)) ;
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
  GALGAS_varList var_varList_1858 ;
  GALGAS_uint var_bitCount_1872 ;
  GALGAS_binaryset var_result_1884 ;
  const GALGAS_dumpFormula temp_0 = this ;
  ioArgument_ioComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_1858, var_bitCount_1872, var_result_1884, inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 37)) ;
  GALGAS_uint_36__34_ var_valueCount_1910 = var_result_1884.getter_valueCount (var_bitCount_1872, inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 38)) ;
  const GALGAS_dumpFormula temp_1 = this ;
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_valueCount_1910.objectCompare (GALGAS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_string ("s") ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }
  inCompiler->printMessage (GALGAS_string ("Dump $").add_operation (temp_1.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (var_valueCount_1910.getter_string (SOURCE_FILE ("formula-dump.ggs", 39)), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39))  COMMA_SOURCE_FILE ("formula-dump.ggs", 39)) ;
  GALGAS_stringlist var_nameList_2088 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("formula-dump.ggs", 40)) ;
  GALGAS_uintlist var_bitCountList_2122 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("formula-dump.ggs", 41)) ;
  cEnumerator_varList enumerator_2155 (var_varList_1858, kENUMERATION_UP) ;
  while (enumerator_2155.hasCurrentObject ()) {
    var_nameList_2088.addAssign_operation (enumerator_2155.current_mVarName (HERE)  COMMA_SOURCE_FILE ("formula-dump.ggs", 43)) ;
    var_bitCountList_2122.addAssign_operation (enumerator_2155.current_mBitCount (HERE)  COMMA_SOURCE_FILE ("formula-dump.ggs", 44)) ;
    enumerator_2155.gotoNextObject () ;
  }
  inCompiler->printMessage (var_result_1884.getter_print (var_nameList_2088, var_bitCountList_2122 COMMA_SOURCE_FILE ("formula-dump.ggs", 46))  COMMA_SOURCE_FILE ("formula-dump.ggs", 46)) ;
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
  GALGAS_varList var_varList_1866 ;
  GALGAS_binaryset var_result_1881 ;
  const GALGAS_graphvizFormula temp_0 = this ;
  GALGAS_uint joker_1868 ; // Joker input parameter
  ioArgument_ioComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_1866, joker_1868, var_result_1881, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 37)) ;
  const GALGAS_graphvizFormula temp_1 = this ;
  GALGAS_string var_filePath_1897 = constinArgument_inSourceFilePath.getter_stringByDeletingPathExtension (SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (temp_1.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)) ;
  const GALGAS_graphvizFormula temp_2 = this ;
  inCompiler->printMessage (GALGAS_string ("Graphviz $").add_operation (temp_2.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)).add_operation (var_filePath_1897, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39))  COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)) ;
  GALGAS_stringlist var_bitNameList_2083 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("formula-graphviz.ggs", 40)) ;
  cEnumerator_varList enumerator_2118 (var_varList_1866, kENUMERATION_DOWN) ;
  while (enumerator_2118.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, enumerator_2118.current_mBitCount (HERE).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_bitNameList_2083.addAssign_operation (enumerator_2118.current_mVarName (HERE)  COMMA_SOURCE_FILE ("formula-graphviz.ggs", 43)) ;
      }
    }
    if (kBoolFalse == test_3) {
      cEnumerator_range enumerator_2231 (GALGAS_range (GALGAS_uint (uint32_t (0U)), enumerator_2118.current_mBitCount (HERE).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 45))), kENUMERATION_UP) ;
      while (enumerator_2231.hasCurrentObject ()) {
        var_bitNameList_2083.addAssign_operation (enumerator_2118.current_mVarName (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46)).add_operation (enumerator_2231.current (HERE).getter_string (SOURCE_FILE ("formula-graphviz.ggs", 46)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46))  COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46)) ;
        enumerator_2231.gotoNextObject () ;
      }
    }
    enumerator_2118.gotoNextObject () ;
  }
  GALGAS_string var_s_2309 = var_result_1881.getter_graphviz (var_bitNameList_2083 COMMA_SOURCE_FILE ("formula-graphviz.ggs", 50)) ;
  GALGAS_bool joker_2392 ; // Joker input parameter
  var_s_2309.method_writeToFileWhenDifferentContents (var_filePath_1897, joker_2392, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 51)) ;
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
  GALGAS_uint var_idx_11487 ;
  GALGAS_uint var_bitCount_11501 ;
  GALGAS_recordDomainMap var_subdomainMap_11519 ;
  const GALGAS_varInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_11487, var_bitCount_11501, var_subdomainMap_11519, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 354)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_subdomainMap_11519.getter_count (SOURCE_FILE ("expression.ggs", 355)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_varInExpression temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mVarName ().readProperty_location (), GALGAS_string ("variable is a record; use dot notation"), fixItArray3  COMMA_SOURCE_FILE ("expression.ggs", 356)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, var_bitCount_11501.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_varInExpression temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mVarName ().readProperty_location (), GALGAS_string ("variable is not boolean; use {...} or dot notation"), fixItArray6  COMMA_SOURCE_FILE ("expression.ggs", 358)) ;
      }
    }
  }
  result_outResult = GALGAS_binaryset::constructor_binarySetWithBit (var_idx_11487, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 360)) ;
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
  GALGAS_uint var_idx_12189 ;
  GALGAS_uint var_bitCount_12203 ;
  GALGAS_recordDomainMap var_subdomainMap_12221 ;
  const GALGAS_varBitInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_12189, var_bitCount_12203, var_subdomainMap_12221, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 372)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_subdomainMap_12221.getter_count (SOURCE_FILE ("expression.ggs", 373)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
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
      test_4 = GALGAS_bool (kIsInfOrEqual, var_bitCount_12203.objectCompare (temp_5.readProperty_mVarBit ().readProperty_uint ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_varBitInExpression temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mVarBit ().readProperty_location (), GALGAS_string ("bit index should be < ").add_operation (var_bitCount_12203.getter_string (SOURCE_FILE ("expression.ggs", 376)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 376)), fixItArray7  COMMA_SOURCE_FILE ("expression.ggs", 376)) ;
      }
    }
  }
  const GALGAS_varBitInExpression temp_8 = this ;
  result_outResult = GALGAS_binaryset::constructor_binarySetWithBit (var_idx_12189.add_operation (temp_8.readProperty_mVarBit ().readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 378)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 378)) ;
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
  GALGAS_binaryset var_left_12848 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 390)) ;
  const GALGAS_andExpression temp_1 = this ;
  GALGAS_binaryset var_right_12967 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 391)) ;
  result_outResult = var_left_12848.operator_and (var_right_12967 COMMA_SOURCE_FILE ("expression.ggs", 392)) ;
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
  GALGAS_binaryset var_left_13444 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 404)) ;
  const GALGAS_orExpression temp_1 = this ;
  GALGAS_binaryset var_right_13563 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 405)) ;
  result_outResult = var_left_13444.operator_or (var_right_13563 COMMA_SOURCE_FILE ("expression.ggs", 406)) ;
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
  GALGAS_binaryset var_left_14041 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 418)) ;
  const GALGAS_xorExpression temp_1 = this ;
  GALGAS_binaryset var_right_14160 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 419)) ;
  result_outResult = var_left_14041.operator_xor (var_right_14160 COMMA_SOURCE_FILE ("expression.ggs", 420)) ;
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
  GALGAS_binaryset var_left_14642 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 432)) ;
  const GALGAS_impliesExpression temp_1 = this ;
  GALGAS_binaryset var_right_14761 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 433)) ;
  result_outResult = var_left_14642.getter_implies (var_right_14761 COMMA_SOURCE_FILE ("expression.ggs", 434)) ;
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
  GALGAS_binaryset var_left_15250 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 446)) ;
  const GALGAS_equalExpression temp_1 = this ;
  GALGAS_binaryset var_right_15369 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 447)) ;
  result_outResult = var_left_15250.operator_xor (var_right_15369 COMMA_SOURCE_FILE ("expression.ggs", 448)).operator_tilde (SOURCE_FILE ("expression.ggs", 448)) ;
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
  GALGAS_binaryset var_left_15855 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 460)) ;
  const GALGAS_notEqualExpression temp_1 = this ;
  GALGAS_binaryset var_right_15974 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 461)) ;
  result_outResult = var_left_15855.operator_xor (var_right_15974 COMMA_SOURCE_FILE ("expression.ggs", 462)) ;
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
  GALGAS_varList var_varList_17807 ;
  GALGAS_uint var_totalBitCount_17833 ;
  GALGAS_binaryset var_formulaValue_17851 ;
  const GALGAS_formulaInExpression temp_0 = this ;
  constinArgument_inComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_17807, var_totalBitCount_17833, var_formulaValue_17851, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 511)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_formulaInExpression temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mParameterList ().getter_length (SOURCE_FILE ("expression.ggs", 513)).objectCompare (var_varList_17807.getter_length (SOURCE_FILE ("expression.ggs", 513)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_formulaInExpression temp_3 = this ;
      const GALGAS_formulaInExpression temp_4 = this ;
      GALGAS_string temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_varList_17807.getter_length (SOURCE_FILE ("expression.ggs", 515)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
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
      inCompiler->emitSemanticError (temp_3.readProperty_mFormulaName ().readProperty_location (), GALGAS_string ("the $").add_operation (temp_4.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (GALGAS_string (" names "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (var_varList_17807.getter_length (SOURCE_FILE ("expression.ggs", 515)).getter_string (SOURCE_FILE ("expression.ggs", 514)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (GALGAS_string (" variable"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (GALGAS_string (", but this call names "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (temp_7.readProperty_mParameterList ().getter_length (SOURCE_FILE ("expression.ggs", 517)).getter_string (SOURCE_FILE ("expression.ggs", 516)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 516)).add_operation (GALGAS_string (" variable"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 517)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 517)), fixItArray11  COMMA_SOURCE_FILE ("expression.ggs", 514)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_uintlist var_transformationList_18300 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("expression.ggs", 520)) ;
    const GALGAS_formulaInExpression temp_12 = this ;
    cEnumerator_varList enumerator_18344 (var_varList_17807, kENUMERATION_DOWN) ;
    cEnumerator_formulaParameterListInExpression enumerator_18388 (temp_12.readProperty_mParameterList (), kENUMERATION_DOWN) ;
    while (enumerator_18344.hasCurrentObject () && enumerator_18388.hasCurrentObject ()) {
      GALGAS_uint var_parameterIndex_18478 ;
      GALGAS_uint var_parameterBitCount_18503 ;
      GALGAS_recordDomainMap var_subdomainMap_18534 ;
      constinArgument_inVarMap.method_searchKey (enumerator_18388.current_mParameterName (HERE), var_parameterIndex_18478, var_parameterBitCount_18503, var_subdomainMap_18534, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 522)) ;
      cEnumerator_lstringlist enumerator_18556 (enumerator_18388.current_mFieldNames (HERE), kENUMERATION_UP) ;
      while (enumerator_18556.hasCurrentObject ()) {
        GALGAS_uint var_fieldRelativeBitIndex_18647 ;
        GALGAS_recordDomainMap var_fieldSubdomainMap_18689 ;
        var_subdomainMap_18534.method_searchKey (enumerator_18556.current_mValue (HERE), var_fieldRelativeBitIndex_18647, var_parameterBitCount_18503, var_fieldSubdomainMap_18689, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 524)) ;
        var_parameterIndex_18478 = var_parameterIndex_18478.add_operation (var_fieldRelativeBitIndex_18647, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 525)) ;
        var_subdomainMap_18534 = var_fieldSubdomainMap_18689 ;
        enumerator_18556.gotoNextObject () ;
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsNotEqual, enumerator_18344.current_mBitCount (HERE).objectCompare (var_parameterBitCount_18503)).boolEnum () ;
        if (kBoolTrue == test_13) {
          GALGAS_string temp_14 ;
          const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_parameterBitCount_18503.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_15) {
            temp_14 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_15) {
            temp_14 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, enumerator_18344.current_mBitCount (HERE).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (enumerator_18388.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("this parameter is declared with a size of ").add_operation (var_parameterBitCount_18503.getter_string (SOURCE_FILE ("expression.ggs", 529)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 529)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (GALGAS_string (", but corresponding formal argument '"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (enumerator_18344.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (GALGAS_string ("' is declared with a size of "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (enumerator_18344.current_mBitCount (HERE).getter_string (SOURCE_FILE ("expression.ggs", 531)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 532)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 532)), fixItArray18  COMMA_SOURCE_FILE ("expression.ggs", 529)) ;
        }
      }
      cEnumerator_range enumerator_19246 (GALGAS_range (GALGAS_uint (uint32_t (0U)), var_parameterBitCount_18503.substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 534))), kENUMERATION_UP) ;
      while (enumerator_19246.hasCurrentObject ()) {
        var_transformationList_18300.addAssign_operation (var_parameterIndex_18478.add_operation (enumerator_19246.current (HERE), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 535))  COMMA_SOURCE_FILE ("expression.ggs", 535)) ;
        enumerator_19246.gotoNextObject () ;
      }
      enumerator_18344.gotoNextObject () ;
      enumerator_18388.gotoNextObject () ;
    }
    result_outResult = var_formulaValue_17851.getter_transformedBy (var_transformationList_18300 COMMA_SOURCE_FILE ("expression.ggs", 538)) ;
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
  GALGAS_varMap var_varMap_19747 = constinArgument_inVarMap ;
  GALGAS_uint var_totalBitCount_19784 = constinArgument_inTotalBitCount ;
  GALGAS_varList joker_19858 = GALGAS_varList::constructor_emptyList (SOURCE_FILE ("expression.ggs", 553)) ;
  const GALGAS_existInExpression temp_0 = this ;
  extensionMethod_analyze (temp_0.readProperty_mArgumentList (), constinArgument_inDomainMap, var_varMap_19747, joker_19858, var_totalBitCount_19784, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 553)) ;
  const GALGAS_existInExpression temp_1 = this ;
  GALGAS_binaryset var_r_19884 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_19747, var_totalBitCount_19784, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 554)) ;
  result_outResult = var_r_19884.getter_existOnBitIndexAndBeyond (constinArgument_inTotalBitCount COMMA_SOURCE_FILE ("expression.ggs", 555)) ;
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
  GALGAS_varMap var_varMap_20401 = constinArgument_inVarMap ;
  GALGAS_uint var_totalBitCount_20438 = constinArgument_inTotalBitCount ;
  GALGAS_varList joker_20512 = GALGAS_varList::constructor_emptyList (SOURCE_FILE ("expression.ggs", 569)) ;
  const GALGAS_forAllInExpression temp_0 = this ;
  extensionMethod_analyze (temp_0.readProperty_mArgumentList (), constinArgument_inDomainMap, var_varMap_20401, joker_20512, var_totalBitCount_20438, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 569)) ;
  const GALGAS_forAllInExpression temp_1 = this ;
  GALGAS_binaryset var_r_20538 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_20401, var_totalBitCount_20438, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 570)) ;
  result_outResult = var_r_20538.getter_forAllOnBitIndexAndBeyond (constinArgument_inTotalBitCount COMMA_SOURCE_FILE ("expression.ggs", 571)) ;
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
  GALGAS_uint var_idx_21120 ;
  GALGAS_uint var_bitCount_21136 ;
  GALGAS_recordDomainMap var_subDomainMap_21167 ;
  const GALGAS_comparisonWithConstantInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_21120, var_bitCount_21136, var_subDomainMap_21167, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 583)) ;
  const GALGAS_comparisonWithConstantInExpression temp_1 = this ;
  cEnumerator_lstringlist enumerator_21185 (temp_1.readProperty_mFieldNames (), kENUMERATION_UP) ;
  while (enumerator_21185.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex_21275 ;
    GALGAS_recordDomainMap var_fieldSubdomainMap_21308 ;
    var_subDomainMap_21167.method_searchKey (enumerator_21185.current_mValue (HERE), var_fieldRelativeBitIndex_21275, var_bitCount_21136, var_fieldSubdomainMap_21308, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 585)) ;
    var_idx_21120 = var_idx_21120.add_operation (var_fieldRelativeBitIndex_21275, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 586)) ;
    var_subDomainMap_21167 = var_fieldSubdomainMap_21308 ;
    enumerator_21185.gotoNextObject () ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictSup, var_subDomainMap_21167.getter_count (SOURCE_FILE ("expression.ggs", 589)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
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
      test_5 = GALGAS_bool (kIsStrictSup, temp_6.readProperty_mConstant ().readProperty_uint ().getter_significantBitCount (SOURCE_FILE ("expression.ggs", 591)).objectCompare (var_bitCount_21136)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_comparisonWithConstantInExpression temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mConstant ().readProperty_location (), GALGAS_string ("Constant too large (should be < 2**").add_operation (var_bitCount_21136.getter_string (SOURCE_FILE ("expression.ggs", 592)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 592)), fixItArray8  COMMA_SOURCE_FILE ("expression.ggs", 592)) ;
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
          result_outResult = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (var_idx_21120, var_bitCount_21136, temp_10.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 596)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 596)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_notEqual:
        {
          const GALGAS_comparisonWithConstantInExpression temp_11 = this ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithNotEqualToConstant (var_idx_21120, var_bitCount_21136, temp_11.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 598)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 598)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_lowerOrEqual:
        {
          const GALGAS_comparisonWithConstantInExpression temp_12 = this ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithLowerOrEqualToConstant (var_idx_21120, var_bitCount_21136, temp_12.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 600)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 600)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_lowerThan:
        {
          const GALGAS_comparisonWithConstantInExpression temp_13 = this ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictLowerThanConstant (var_idx_21120, var_bitCount_21136, temp_13.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 602)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 602)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_greaterOrEqual:
        {
          const GALGAS_comparisonWithConstantInExpression temp_14 = this ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithGreaterOrEqualToConstant (var_idx_21120, var_bitCount_21136, temp_14.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 604)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 604)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_greaterThan:
        {
          const GALGAS_comparisonWithConstantInExpression temp_15 = this ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictGreaterThanConstant (var_idx_21120, var_bitCount_21136, temp_15.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 606)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 606)) ;
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
  GALGAS_uint var_leftIdx_22943 ;
  GALGAS_uint var_leftBitCount_22964 ;
  GALGAS_recordDomainMap var_leftSubDomainMap_23000 ;
  const GALGAS_variableComparisonInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mLeftVarName (), var_leftIdx_22943, var_leftBitCount_22964, var_leftSubDomainMap_23000, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 620)) ;
  const GALGAS_variableComparisonInExpression temp_1 = this ;
  cEnumerator_lstringlist enumerator_23018 (temp_1.readProperty_mLeftFieldNames (), kENUMERATION_UP) ;
  while (enumerator_23018.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex_23116 ;
    GALGAS_recordDomainMap var_fieldSubdomainMap_23153 ;
    var_leftSubDomainMap_23000.method_searchKey (enumerator_23018.current_mValue (HERE), var_fieldRelativeBitIndex_23116, var_leftBitCount_22964, var_fieldSubdomainMap_23153, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 622)) ;
    var_leftIdx_22943 = var_leftIdx_22943.add_operation (var_fieldRelativeBitIndex_23116, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 623)) ;
    var_leftSubDomainMap_23000 = var_fieldSubdomainMap_23153 ;
    enumerator_23018.gotoNextObject () ;
  }
  GALGAS_uint var_rightIdx_23305 ;
  GALGAS_uint var_rightBitCount_23326 ;
  GALGAS_recordDomainMap var_rightSubDomainMap_23362 ;
  const GALGAS_variableComparisonInExpression temp_2 = this ;
  constinArgument_inVarMap.method_searchKey (temp_2.readProperty_mRightVarName (), var_rightIdx_23305, var_rightBitCount_23326, var_rightSubDomainMap_23362, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 626)) ;
  const GALGAS_variableComparisonInExpression temp_3 = this ;
  cEnumerator_lstringlist enumerator_23380 (temp_3.readProperty_mRightFieldNames (), kENUMERATION_UP) ;
  while (enumerator_23380.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex_23480 ;
    GALGAS_recordDomainMap var_fieldSubdomainMap_23518 ;
    var_rightSubDomainMap_23362.method_searchKey (enumerator_23380.current_mValue (HERE), var_fieldRelativeBitIndex_23480, var_rightBitCount_23326, var_fieldSubdomainMap_23518, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 628)) ;
    var_rightIdx_23305 = var_rightIdx_23305.add_operation (var_fieldRelativeBitIndex_23480, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 629)) ;
    var_rightSubDomainMap_23362 = var_fieldSubdomainMap_23518 ;
    enumerator_23380.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsStrictSup, var_leftSubDomainMap_23000.getter_count (SOURCE_FILE ("expression.ggs", 632)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
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
      test_7 = GALGAS_bool (kIsStrictSup, var_rightSubDomainMap_23362.getter_count (SOURCE_FILE ("expression.ggs", 634)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
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
        test_10 = GALGAS_bool (kIsNotEqual, var_leftBitCount_22964.objectCompare (var_rightBitCount_23326)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_variableComparisonInExpression temp_11 = this ;
          const GALGAS_variableComparisonInExpression temp_12 = this ;
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_leftBitCount_22964.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string temp_15 ;
          const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, var_rightBitCount_23326.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_16) {
            temp_15 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_16) {
            temp_15 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mRightVarName ().readProperty_location (), GALGAS_string ("'").add_operation (temp_12.readProperty_mLeftVarName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 637)).add_operation (GALGAS_string ("' variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 637)).add_operation (var_leftBitCount_22964.getter_string (SOURCE_FILE ("expression.ggs", 637)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 637)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 638)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 638)).add_operation (GALGAS_string (", but this variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 638)).add_operation (var_rightBitCount_23326.getter_string (SOURCE_FILE ("expression.ggs", 639)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 639)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 640)).add_operation (temp_15, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 640)), fixItArray17  COMMA_SOURCE_FILE ("expression.ggs", 637)) ;
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
            result_outResult = GALGAS_binaryset::constructor_binarySetWithEqualComparison (var_leftIdx_22943, var_leftBitCount_22964, var_rightIdx_23305, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 645)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_notEqual:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithNotEqualComparison (var_leftIdx_22943, var_leftBitCount_22964, var_rightIdx_23305, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 647)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_lowerOrEqual:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithLowerOrEqualComparison (var_leftIdx_22943, var_leftBitCount_22964, var_rightIdx_23305, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 649)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_lowerThan:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictLowerComparison (var_leftIdx_22943, var_leftBitCount_22964, var_rightIdx_23305, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 651)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_greaterOrEqual:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithGreaterOrEqualComparison (var_leftIdx_22943, var_leftBitCount_22964, var_rightIdx_23305, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 653)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_greaterThan:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictGreaterComparison (var_leftIdx_22943, var_leftBitCount_22964, var_rightIdx_23305, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 655)) ;
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
  GALGAS_ast var_ast_827 ;
  var_ast_827.drop () ;
  cGrammar_kerbdd_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_ast_827  COMMA_SOURCE_FILE ("program.ggs", 17)) ;
  GALGAS_domainMap var_domainMap_919 ;
  extensionMethod_analyze (var_ast_827.readProperty_mDomainList (), var_domainMap_919, inCompiler COMMA_SOURCE_FILE ("program.ggs", 19)) ;
  GALGAS_computedFormulaMap var_computedFormulaMap_987 = GALGAS_computedFormulaMap::constructor_emptyMap (SOURCE_FILE ("program.ggs", 21)) ;
  cEnumerator_formulaList enumerator_1007 (var_ast_827.readProperty_mFormulaList (), kENUMERATION_UP) ;
  bool bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 22)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_1007.hasCurrentObject () && bool_0) {
    while (enumerator_1007.hasCurrentObject () && bool_0) {
      callExtensionMethod_analyzeFormula ((cPtr_abstractFormula *) enumerator_1007.current_mFormula (HERE).ptr (), constinArgument_inSourceFile.readProperty_string (), var_domainMap_919, var_computedFormulaMap_987, inCompiler COMMA_SOURCE_FILE ("program.ggs", 23)) ;
      enumerator_1007.gotoNextObject () ;
      if (enumerator_1007.hasCurrentObject ()) {
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

