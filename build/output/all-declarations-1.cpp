#include "Compiler.h"
#include "C_galgas_io.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------
// @setting_5F_nodeHashMapSize reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_setting_5F_nodeHashMapSize::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFormula::printNonNullClassInstanceProperties () ;
    mProperty_mSetting.printNonNullClassInstanceProperties ("mSetting") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_setting_5F_nodeHashMapSize::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_setting_5F_nodeHashMapSize * p = (const cPtr_setting_5F_nodeHashMapSize *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_setting_5F_nodeHashMapSize) ;
  if (kOperandEqual == result) {
    result = mProperty_mSetting.objectCompare (p->mProperty_mSetting) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


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
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize::GALGAS_setting_5F_nodeHashMapSize (void) :
GALGAS_abstractFormula () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize::GALGAS_setting_5F_nodeHashMapSize (const cPtr_setting_5F_nodeHashMapSize * inSourcePtr) :
GALGAS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_setting_5F_nodeHashMapSize) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize GALGAS_setting_5F_nodeHashMapSize::class_func_new (const GALGAS_luint & inAttribute_mSetting
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_setting_5F_nodeHashMapSize result ;
  if (inAttribute_mSetting.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_setting_5F_nodeHashMapSize (inAttribute_mSetting COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_setting_5F_nodeHashMapSize::setter_setMSetting (GALGAS_luint inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_setting_5F_nodeHashMapSize * p = (cPtr_setting_5F_nodeHashMapSize *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setting_5F_nodeHashMapSize) ;
    p->mProperty_mSetting = inValue ;
  }
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
//Pointer class for @setting_nodeHashMapSize class
//--------------------------------------------------------------------------------------------------

cPtr_setting_5F_nodeHashMapSize::cPtr_setting_5F_nodeHashMapSize (const GALGAS_luint & in_mSetting
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (THERE),
mProperty_mSetting (in_mSetting) {
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
  GALGAS_uint var_totalBitCount_2960 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_varList var_varList_2993 = GALGAS_varList::class_func_emptyList (SOURCE_FILE ("formula-assignment.ggs", 78)) ;
  GALGAS_varMap var_varMap_3020 = GALGAS_varMap::class_func_emptyMap (SOURCE_FILE ("formula-assignment.ggs", 79)) ;
  const GALGAS_assignmentFormula temp_0 = this ;
  extensionMethod_analyze (temp_0.readProperty_mFormulaArgumentList (), constinArgument_inDomainMap, var_varMap_3020, var_varList_2993, var_totalBitCount_2960, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 80)) ;
  const GALGAS_assignmentFormula temp_1 = this ;
  switch (temp_1.readProperty_mKind ().enumValue ()) {
  case GALGAS_formulaKind::kNotBuilt:
    break ;
  case GALGAS_formulaKind::kEnum_assignment:
    {
      GALGAS_timer var_timer_3241 = GALGAS_timer::class_func_start (SOURCE_FILE ("formula-assignment.ggs", 85)) ;
      const GALGAS_assignmentFormula temp_2 = this ;
      GALGAS_binaryset var_result_3270 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_2.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_3020, var_totalBitCount_2960, ioArgument_ioComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 86)) ;
      {
      const GALGAS_assignmentFormula temp_3 = this ;
      ioArgument_ioComputedFormulaMap.setter_insertKey (temp_3.readProperty_mFormulaName (), var_varList_2993, var_totalBitCount_2960, var_result_3270, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 87)) ;
      }
      GALGAS_uint_36__34_ var_valueCount_3486 = var_result_3270.getter_valueCount (var_totalBitCount_2960, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 88)) ;
      GALGAS_uint_36__34_ var_nodeCount_3620 = var_result_3270.getter_nodeCount (SOURCE_FILE ("formula-assignment.ggs", 90)) ;
      {
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, var_valueCount_3486.objectCompare (GALGAS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_6 ;
      const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, var_nodeCount_3620.objectCompare (GALGAS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        temp_6 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_7) {
        temp_6 = GALGAS_string::makeEmptyString () ;
      }
      routine_println_3F_ (GALGAS_string (" ").add_operation (var_valueCount_3486.getter_string (SOURCE_FILE ("formula-assignment.ggs", 91)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 91)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 92)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 92)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 92)).add_operation (var_nodeCount_3620.getter_string (SOURCE_FILE ("formula-assignment.ggs", 93)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (GALGAS_string (" node"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 93)).add_operation (var_timer_3241.getter_string (SOURCE_FILE ("formula-assignment.ggs", 94)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 94)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 94)), inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 91)) ;
      }
    }
    break ;
  case GALGAS_formulaKind::kEnum_fixedPoint:
    {
      const cEnumAssociatedValues_formulaKind_fixedPoint * extractPtr_4894 = (const cEnumAssociatedValues_formulaKind_fixedPoint *) (temp_1.readProperty_mKind ().unsafePointer ()) ;
      const GALGAS_binaryset extractedValue_3873_startValue = extractPtr_4894->mAssociatedValue0 ;
      GALGAS_timer var_timer_3941 = GALGAS_timer::class_func_start (SOURCE_FILE ("formula-assignment.ggs", 97)) ;
      GALGAS_binaryset var_result_3981 = extractedValue_3873_startValue ;
      {
      const GALGAS_assignmentFormula temp_8 = this ;
      ioArgument_ioComputedFormulaMap.setter_insertKey (temp_8.readProperty_mFormulaName (), var_varList_2993, var_totalBitCount_2960, var_result_3981, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 99)) ;
      }
      GALGAS_bool var_iterate_4102 = GALGAS_bool (true) ;
      GALGAS_bigint var_iterationCount_4127 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 101)) ;
      if (GALGAS_uint::class_func_max (SOURCE_FILE ("formula-assignment.ggs", 102)).isValid ()) {
        uint32_t variant_4150 = GALGAS_uint::class_func_max (SOURCE_FILE ("formula-assignment.ggs", 102)).uintValue () ;
        bool loop_4150 = true ;
        while (loop_4150) {
          loop_4150 = var_iterate_4102.isValid () ;
          if (loop_4150) {
            loop_4150 = var_iterate_4102.boolValue () ;
          }
          if (loop_4150 && (0 == variant_4150)) {
            loop_4150 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("formula-assignment.ggs", 102)) ;
          }
          if (loop_4150) {
            variant_4150 -- ;
            var_iterationCount_4127.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 103)), inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 103)) ;
            const GALGAS_assignmentFormula temp_9 = this ;
            GALGAS_binaryset var_r_4220 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_9.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_3020, var_totalBitCount_2960, ioArgument_ioComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 104)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, var_result_3981.objectCompare (var_r_4220)).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_iterate_4102 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_10) {
              var_result_3981 = var_r_4220 ;
              {
              const GALGAS_assignmentFormula temp_11 = this ;
              ioArgument_ioComputedFormulaMap.setter_setMValueForKey (var_result_3981, temp_11.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 109)) ;
              }
            }
          }
        }
      }
      GALGAS_uint_36__34_ var_valueCount_4520 = var_result_3981.getter_valueCount (var_totalBitCount_2960, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 112)) ;
      GALGAS_uint_36__34_ var_nodeCount_4583 = var_result_3981.getter_nodeCount (SOURCE_FILE ("formula-assignment.ggs", 113)) ;
      {
      GALGAS_string temp_12 ;
      const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, var_iterationCount_4127.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 115)))).boolEnum () ;
      if (kBoolTrue == test_13) {
        temp_12 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_13) {
        temp_12 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_14 ;
      const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_valueCount_4520.objectCompare (GALGAS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (kBoolTrue == test_15) {
        temp_14 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_15) {
        temp_14 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_16 ;
      const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_nodeCount_4583.objectCompare (GALGAS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
      if (kBoolTrue == test_17) {
        temp_16 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_17) {
        temp_16 = GALGAS_string::makeEmptyString () ;
      }
      routine_println_3F_ (GALGAS_string (" ").add_operation (var_iterationCount_4127.getter_string (SOURCE_FILE ("formula-assignment.ggs", 114)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 114)).add_operation (GALGAS_string (" iteration"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 115)).add_operation (temp_12, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 115)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 115)).add_operation (var_valueCount_4520.getter_string (SOURCE_FILE ("formula-assignment.ggs", 116)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 116)).add_operation (var_nodeCount_4583.getter_string (SOURCE_FILE ("formula-assignment.ggs", 117)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (GALGAS_string (" node"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 117)).add_operation (var_timer_3941.getter_string (SOURCE_FILE ("formula-assignment.ggs", 118)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 118)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.ggs", 118)), inCompiler  COMMA_SOURCE_FILE ("formula-assignment.ggs", 114)) ;
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
  GALGAS_varList var_varList_1862 ;
  GALGAS_uint var_bitCount_1876 ;
  GALGAS_binaryset var_result_1891 ;
  const GALGAS_dumpFormula temp_0 = this ;
  ioArgument_ioComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_1862, var_bitCount_1876, var_result_1891, inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 37)) ;
  GALGAS_uint_36__34_ var_valueCount_1913 = var_result_1891.getter_valueCount (var_bitCount_1876, inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 38)) ;
  {
  const GALGAS_dumpFormula temp_1 = this ;
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_valueCount_1913.objectCompare (GALGAS_uint_36__34_ (uint64_t (1ULL)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_string ("s") ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }
  routine_println_3F_ (GALGAS_string ("Dump $").add_operation (temp_1.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (var_valueCount_1913.getter_string (SOURCE_FILE ("formula-dump.ggs", 39)), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)), inCompiler  COMMA_SOURCE_FILE ("formula-dump.ggs", 39)) ;
  }
  GALGAS_stringlist var_nameList_2093 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("formula-dump.ggs", 40)) ;
  GALGAS_uintlist var_bitCountList_2123 = GALGAS_uintlist::class_func_emptyList (SOURCE_FILE ("formula-dump.ggs", 41)) ;
  cEnumerator_varList enumerator_2161 (var_varList_1862, kENUMERATION_UP) ;
  while (enumerator_2161.hasCurrentObject ()) {
    {
    var_nameList_2093.setter_append (enumerator_2161.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 43)) ;
    }
    {
    var_bitCountList_2123.setter_append (enumerator_2161.current_mBitCount (HERE), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 44)) ;
    }
    enumerator_2161.gotoNextObject () ;
  }
  {
  routine_println_3F_ (var_result_1891.getter_print (var_nameList_2093, var_bitCountList_2123 COMMA_SOURCE_FILE ("formula-dump.ggs", 46)), inCompiler  COMMA_SOURCE_FILE ("formula-dump.ggs", 46)) ;
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
  GALGAS_varList var_varList_1870 ;
  GALGAS_binaryset var_result_1888 ;
  const GALGAS_graphvizFormula temp_0 = this ;
  GALGAS_uint joker_1879 ; // Joker input parameter
  ioArgument_ioComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_1870, joker_1879, var_result_1888, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 37)) ;
  const GALGAS_graphvizFormula temp_1 = this ;
  GALGAS_string var_filePath_1902 = constinArgument_inSourceFilePath.getter_stringByDeletingPathExtension (SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (temp_1.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)) ;
  {
  const GALGAS_graphvizFormula temp_2 = this ;
  routine_println_3F_ (GALGAS_string ("Graphviz $").add_operation (temp_2.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)).add_operation (var_filePath_1902, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)), inCompiler  COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)) ;
  }
  GALGAS_stringlist var_bitNameList_2081 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("formula-graphviz.ggs", 40)) ;
  cEnumerator_varList enumerator_2120 (var_varList_1870, kENUMERATION_DOWN) ;
  while (enumerator_2120.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, enumerator_2120.current_mBitCount (HERE).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        var_bitNameList_2081.setter_append (enumerator_2120.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 43)) ;
        }
      }
    }
    if (kBoolFalse == test_3) {
      cEnumerator_range enumerator_2240 (GALGAS_range (GALGAS_uint (uint32_t (0U)), enumerator_2120.current_mBitCount (HERE).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 45))), kENUMERATION_UP) ;
      while (enumerator_2240.hasCurrentObject ()) {
        {
        var_bitNameList_2081.setter_append (enumerator_2120.current_mVarName (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46)).add_operation (enumerator_2240.current (HERE).getter_string (SOURCE_FILE ("formula-graphviz.ggs", 46)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46)) ;
        }
        enumerator_2240.gotoNextObject () ;
      }
    }
    enumerator_2120.gotoNextObject () ;
  }
  GALGAS_string var_s_2333 = var_result_1888.getter_graphviz (var_bitNameList_2081 COMMA_SOURCE_FILE ("formula-graphviz.ggs", 50)) ;
  GALGAS_bool joker_2417 ; // Joker input parameter
  var_s_2333.method_writeToFileWhenDifferentContents (var_filePath_1902, joker_2417, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 51)) ;
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
  GALGAS_uint var_idx_11533 ;
  GALGAS_uint var_bitCount_11543 ;
  GALGAS_recordDomainMap var_subdomainMap_11558 ;
  const GALGAS_varInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_11533, var_bitCount_11543, var_subdomainMap_11558, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 354)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_subdomainMap_11558.getter_count (SOURCE_FILE ("expression.ggs", 355)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_varInExpression temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mVarName ().readProperty_location (), GALGAS_string ("variable is a record; use dot notation"), fixItArray3  COMMA_SOURCE_FILE ("expression.ggs", 356)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, var_bitCount_11543.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_varInExpression temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mVarName ().readProperty_location (), GALGAS_string ("variable is not boolean; use {...} or dot notation"), fixItArray6  COMMA_SOURCE_FILE ("expression.ggs", 358)) ;
      }
    }
  }
  result_outResult = GALGAS_binaryset::class_func_binarySetWithBit (var_idx_11533, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 360)) ;
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
  GALGAS_uint var_idx_12242 ;
  GALGAS_uint var_bitCount_12252 ;
  GALGAS_recordDomainMap var_subdomainMap_12267 ;
  const GALGAS_varBitInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_12242, var_bitCount_12252, var_subdomainMap_12267, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 372)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_subdomainMap_12267.getter_count (SOURCE_FILE ("expression.ggs", 373)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
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
      test_4 = GALGAS_bool (kIsInfOrEqual, var_bitCount_12252.objectCompare (temp_5.readProperty_mVarBit ().readProperty_uint ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_varBitInExpression temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mVarBit ().readProperty_location (), GALGAS_string ("bit index should be < ").add_operation (var_bitCount_12252.getter_string (SOURCE_FILE ("expression.ggs", 376)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 376)), fixItArray7  COMMA_SOURCE_FILE ("expression.ggs", 376)) ;
      }
    }
  }
  const GALGAS_varBitInExpression temp_8 = this ;
  result_outResult = GALGAS_binaryset::class_func_binarySetWithBit (var_idx_12242.add_operation (temp_8.readProperty_mVarBit ().readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 378)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 378)) ;
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
  GALGAS_binaryset var_left_12906 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 390)) ;
  const GALGAS_andExpression temp_1 = this ;
  GALGAS_binaryset var_right_13026 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 391)) ;
  result_outResult = var_left_12906.operator_and (var_right_13026 COMMA_SOURCE_FILE ("expression.ggs", 392)) ;
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
  GALGAS_binaryset var_left_13510 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 404)) ;
  const GALGAS_orExpression temp_1 = this ;
  GALGAS_binaryset var_right_13630 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 405)) ;
  result_outResult = var_left_13510.operator_or (var_right_13630 COMMA_SOURCE_FILE ("expression.ggs", 406)) ;
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
  GALGAS_binaryset var_left_14115 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 418)) ;
  const GALGAS_xorExpression temp_1 = this ;
  GALGAS_binaryset var_right_14235 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 419)) ;
  result_outResult = var_left_14115.operator_xor (var_right_14235 COMMA_SOURCE_FILE ("expression.ggs", 420)) ;
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
  GALGAS_binaryset var_left_14724 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 432)) ;
  const GALGAS_impliesExpression temp_1 = this ;
  GALGAS_binaryset var_right_14844 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 433)) ;
  result_outResult = var_left_14724.getter_implies (var_right_14844 COMMA_SOURCE_FILE ("expression.ggs", 434)) ;
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
  GALGAS_binaryset var_left_15339 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 446)) ;
  const GALGAS_equalExpression temp_1 = this ;
  GALGAS_binaryset var_right_15459 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 447)) ;
  result_outResult = var_left_15339.operator_xor (var_right_15459 COMMA_SOURCE_FILE ("expression.ggs", 448)).operator_tilde (SOURCE_FILE ("expression.ggs", 448)) ;
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
  GALGAS_binaryset var_left_15952 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 460)) ;
  const GALGAS_notEqualExpression temp_1 = this ;
  GALGAS_binaryset var_right_16072 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 461)) ;
  result_outResult = var_left_15952.operator_xor (var_right_16072 COMMA_SOURCE_FILE ("expression.ggs", 462)) ;
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
  GALGAS_varList var_varList_17922 ;
  GALGAS_uint var_totalBitCount_17943 ;
  GALGAS_binaryset var_formulaValue_17963 ;
  const GALGAS_formulaInExpression temp_0 = this ;
  constinArgument_inComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_17922, var_totalBitCount_17943, var_formulaValue_17963, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 511)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_formulaInExpression temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression.ggs", 513)).objectCompare (var_varList_17922.getter_count (SOURCE_FILE ("expression.ggs", 513)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_formulaInExpression temp_3 = this ;
      const GALGAS_formulaInExpression temp_4 = this ;
      GALGAS_string temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_varList_17922.getter_count (SOURCE_FILE ("expression.ggs", 515)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_string::makeEmptyString () ;
      }
      const GALGAS_formulaInExpression temp_7 = this ;
      const GALGAS_formulaInExpression temp_8 = this ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, temp_8.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression.ggs", 517)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mFormulaName ().readProperty_location (), GALGAS_string ("the $").add_operation (temp_4.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (GALGAS_string (" names "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (var_varList_17922.getter_count (SOURCE_FILE ("expression.ggs", 515)).getter_string (SOURCE_FILE ("expression.ggs", 514)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (GALGAS_string (" variable"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (GALGAS_string (", but this call names "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (temp_7.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression.ggs", 517)).getter_string (SOURCE_FILE ("expression.ggs", 516)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 516)).add_operation (GALGAS_string (" variable"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 517)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 517)), fixItArray11  COMMA_SOURCE_FILE ("expression.ggs", 514)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_uintlist var_transformationList_18414 = GALGAS_uintlist::class_func_emptyList (SOURCE_FILE ("expression.ggs", 520)) ;
    const GALGAS_formulaInExpression temp_12 = this ;
    cEnumerator_varList enumerator_18464 (var_varList_17922, kENUMERATION_DOWN) ;
    cEnumerator_formulaParameterListInExpression enumerator_18510 (temp_12.readProperty_mParameterList (), kENUMERATION_DOWN) ;
    while (enumerator_18464.hasCurrentObject () && enumerator_18510.hasCurrentObject ()) {
      GALGAS_uint var_parameterIndex_18600 ;
      GALGAS_uint var_parameterBitCount_18623 ;
      GALGAS_recordDomainMap var_subdomainMap_18660 ;
      constinArgument_inVarMap.method_searchKey (enumerator_18510.current_mParameterName (HERE), var_parameterIndex_18600, var_parameterBitCount_18623, var_subdomainMap_18660, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 522)) ;
      cEnumerator_lstringlist enumerator_18685 (enumerator_18510.current_mFieldNames (HERE), kENUMERATION_UP) ;
      while (enumerator_18685.hasCurrentObject ()) {
        GALGAS_uint var_fieldRelativeBitIndex_18765 ;
        GALGAS_recordDomainMap var_fieldSubdomainMap_18813 ;
        var_subdomainMap_18660.method_searchKey (enumerator_18685.current_mValue (HERE), var_fieldRelativeBitIndex_18765, var_parameterBitCount_18623, var_fieldSubdomainMap_18813, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 524)) ;
        var_parameterIndex_18600 = var_parameterIndex_18600.add_operation (var_fieldRelativeBitIndex_18765, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 525)) ;
        var_subdomainMap_18660 = var_fieldSubdomainMap_18813 ;
        enumerator_18685.gotoNextObject () ;
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsNotEqual, enumerator_18464.current_mBitCount (HERE).objectCompare (var_parameterBitCount_18623)).boolEnum () ;
        if (kBoolTrue == test_13) {
          GALGAS_string temp_14 ;
          const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_parameterBitCount_18623.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_15) {
            temp_14 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_15) {
            temp_14 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, enumerator_18464.current_mBitCount (HERE).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (enumerator_18510.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("this parameter is declared with a size of ").add_operation (var_parameterBitCount_18623.getter_string (SOURCE_FILE ("expression.ggs", 529)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 529)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (GALGAS_string (", but corresponding formal argument '"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (enumerator_18464.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (GALGAS_string ("' is declared with a size of "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (enumerator_18464.current_mBitCount (HERE).getter_string (SOURCE_FILE ("expression.ggs", 531)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 532)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 532)), fixItArray18  COMMA_SOURCE_FILE ("expression.ggs", 529)) ;
        }
      }
      cEnumerator_range enumerator_19370 (GALGAS_range (GALGAS_uint (uint32_t (0U)), var_parameterBitCount_18623.substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 534))), kENUMERATION_UP) ;
      while (enumerator_19370.hasCurrentObject ()) {
        {
        var_transformationList_18414.setter_append (var_parameterIndex_18600.add_operation (enumerator_19370.current (HERE), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 535)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 535)) ;
        }
        enumerator_19370.gotoNextObject () ;
      }
      enumerator_18464.gotoNextObject () ;
      enumerator_18510.gotoNextObject () ;
    }
    result_outResult = var_formulaValue_17963.getter_transformedBy (var_transformationList_18414 COMMA_SOURCE_FILE ("expression.ggs", 538)) ;
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
  GALGAS_varMap var_varMap_19891 = constinArgument_inVarMap ;
  GALGAS_uint var_totalBitCount_19921 = constinArgument_inTotalBitCount ;
  GALGAS_varList joker_20008 = GALGAS_varList::class_func_emptyList (SOURCE_FILE ("expression.ggs", 553)) ;
  const GALGAS_existInExpression temp_0 = this ;
  extensionMethod_analyze (temp_0.readProperty_mArgumentList (), constinArgument_inDomainMap, var_varMap_19891, joker_20008, var_totalBitCount_19921, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 553)) ;
  const GALGAS_existInExpression temp_1 = this ;
  GALGAS_binaryset var_r_20036 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_19891, var_totalBitCount_19921, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 554)) ;
  result_outResult = var_r_20036.getter_existOnBitIndexAndBeyond (constinArgument_inTotalBitCount COMMA_SOURCE_FILE ("expression.ggs", 555)) ;
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
  GALGAS_varMap var_varMap_20554 = constinArgument_inVarMap ;
  GALGAS_uint var_totalBitCount_20584 = constinArgument_inTotalBitCount ;
  GALGAS_varList joker_20671 = GALGAS_varList::class_func_emptyList (SOURCE_FILE ("expression.ggs", 569)) ;
  const GALGAS_forAllInExpression temp_0 = this ;
  extensionMethod_analyze (temp_0.readProperty_mArgumentList (), constinArgument_inDomainMap, var_varMap_20554, joker_20671, var_totalBitCount_20584, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 569)) ;
  const GALGAS_forAllInExpression temp_1 = this ;
  GALGAS_binaryset var_r_20699 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_20554, var_totalBitCount_20584, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 570)) ;
  result_outResult = var_r_20699.getter_forAllOnBitIndexAndBeyond (constinArgument_inTotalBitCount COMMA_SOURCE_FILE ("expression.ggs", 571)) ;
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
  GALGAS_uint var_idx_21285 ;
  GALGAS_uint var_bitCount_21297 ;
  GALGAS_recordDomainMap var_subDomainMap_21325 ;
  const GALGAS_comparisonWithConstantInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_21285, var_bitCount_21297, var_subDomainMap_21325, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 583)) ;
  const GALGAS_comparisonWithConstantInExpression temp_1 = this ;
  cEnumerator_lstringlist enumerator_21346 (temp_1.readProperty_mFieldNames (), kENUMERATION_UP) ;
  while (enumerator_21346.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex_21425 ;
    GALGAS_recordDomainMap var_fieldSubdomainMap_21464 ;
    var_subDomainMap_21325.method_searchKey (enumerator_21346.current_mValue (HERE), var_fieldRelativeBitIndex_21425, var_bitCount_21297, var_fieldSubdomainMap_21464, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 585)) ;
    var_idx_21285 = var_idx_21285.add_operation (var_fieldRelativeBitIndex_21425, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 586)) ;
    var_subDomainMap_21325 = var_fieldSubdomainMap_21464 ;
    enumerator_21346.gotoNextObject () ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictSup, var_subDomainMap_21325.getter_count (SOURCE_FILE ("expression.ggs", 589)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
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
      test_5 = GALGAS_bool (kIsStrictSup, temp_6.readProperty_mConstant ().readProperty_uint ().getter_significantBitCount (SOURCE_FILE ("expression.ggs", 591)).objectCompare (var_bitCount_21297)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_comparisonWithConstantInExpression temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mConstant ().readProperty_location (), GALGAS_string ("Constant too large (should be < 2**").add_operation (var_bitCount_21297.getter_string (SOURCE_FILE ("expression.ggs", 592)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 592)), fixItArray8  COMMA_SOURCE_FILE ("expression.ggs", 592)) ;
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
          result_outResult = GALGAS_binaryset::class_func_binarySetWithEqualToConstant (var_idx_21285, var_bitCount_21297, temp_10.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 596)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 596)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_notEqual:
        {
          const GALGAS_comparisonWithConstantInExpression temp_11 = this ;
          result_outResult = GALGAS_binaryset::class_func_binarySetWithNotEqualToConstant (var_idx_21285, var_bitCount_21297, temp_11.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 598)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 598)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_lowerOrEqual:
        {
          const GALGAS_comparisonWithConstantInExpression temp_12 = this ;
          result_outResult = GALGAS_binaryset::class_func_binarySetWithLowerOrEqualToConstant (var_idx_21285, var_bitCount_21297, temp_12.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 600)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 600)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_lowerThan:
        {
          const GALGAS_comparisonWithConstantInExpression temp_13 = this ;
          result_outResult = GALGAS_binaryset::class_func_binarySetWithStrictLowerThanConstant (var_idx_21285, var_bitCount_21297, temp_13.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 602)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 602)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_greaterOrEqual:
        {
          const GALGAS_comparisonWithConstantInExpression temp_14 = this ;
          result_outResult = GALGAS_binaryset::class_func_binarySetWithGreaterOrEqualToConstant (var_idx_21285, var_bitCount_21297, temp_14.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 604)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 604)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_greaterThan:
        {
          const GALGAS_comparisonWithConstantInExpression temp_15 = this ;
          result_outResult = GALGAS_binaryset::class_func_binarySetWithStrictGreaterThanConstant (var_idx_21285, var_bitCount_21297, temp_15.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 606)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 606)) ;
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
  GALGAS_uint var_leftIdx_23135 ;
  GALGAS_uint var_leftBitCount_23152 ;
  GALGAS_recordDomainMap var_leftSubDomainMap_23185 ;
  const GALGAS_variableComparisonInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mLeftVarName (), var_leftIdx_23135, var_leftBitCount_23152, var_leftSubDomainMap_23185, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 620)) ;
  const GALGAS_variableComparisonInExpression temp_1 = this ;
  cEnumerator_lstringlist enumerator_23210 (temp_1.readProperty_mLeftFieldNames (), kENUMERATION_UP) ;
  while (enumerator_23210.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex_23297 ;
    GALGAS_recordDomainMap var_fieldSubdomainMap_23340 ;
    var_leftSubDomainMap_23185.method_searchKey (enumerator_23210.current_mValue (HERE), var_fieldRelativeBitIndex_23297, var_leftBitCount_23152, var_fieldSubdomainMap_23340, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 622)) ;
    var_leftIdx_23135 = var_leftIdx_23135.add_operation (var_fieldRelativeBitIndex_23297, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 623)) ;
    var_leftSubDomainMap_23185 = var_fieldSubdomainMap_23340 ;
    enumerator_23210.gotoNextObject () ;
  }
  GALGAS_uint var_rightIdx_23502 ;
  GALGAS_uint var_rightBitCount_23519 ;
  GALGAS_recordDomainMap var_rightSubDomainMap_23552 ;
  const GALGAS_variableComparisonInExpression temp_2 = this ;
  constinArgument_inVarMap.method_searchKey (temp_2.readProperty_mRightVarName (), var_rightIdx_23502, var_rightBitCount_23519, var_rightSubDomainMap_23552, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 626)) ;
  const GALGAS_variableComparisonInExpression temp_3 = this ;
  cEnumerator_lstringlist enumerator_23578 (temp_3.readProperty_mRightFieldNames (), kENUMERATION_UP) ;
  while (enumerator_23578.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex_23667 ;
    GALGAS_recordDomainMap var_fieldSubdomainMap_23711 ;
    var_rightSubDomainMap_23552.method_searchKey (enumerator_23578.current_mValue (HERE), var_fieldRelativeBitIndex_23667, var_rightBitCount_23519, var_fieldSubdomainMap_23711, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 628)) ;
    var_rightIdx_23502 = var_rightIdx_23502.add_operation (var_fieldRelativeBitIndex_23667, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 629)) ;
    var_rightSubDomainMap_23552 = var_fieldSubdomainMap_23711 ;
    enumerator_23578.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsStrictSup, var_leftSubDomainMap_23185.getter_count (SOURCE_FILE ("expression.ggs", 632)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
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
      test_7 = GALGAS_bool (kIsStrictSup, var_rightSubDomainMap_23552.getter_count (SOURCE_FILE ("expression.ggs", 634)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
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
        test_10 = GALGAS_bool (kIsNotEqual, var_leftBitCount_23152.objectCompare (var_rightBitCount_23519)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_variableComparisonInExpression temp_11 = this ;
          const GALGAS_variableComparisonInExpression temp_12 = this ;
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_leftBitCount_23152.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string temp_15 ;
          const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, var_rightBitCount_23519.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
          if (kBoolTrue == test_16) {
            temp_15 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_16) {
            temp_15 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mRightVarName ().readProperty_location (), GALGAS_string ("'").add_operation (temp_12.readProperty_mLeftVarName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 637)).add_operation (GALGAS_string ("' variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 637)).add_operation (var_leftBitCount_23152.getter_string (SOURCE_FILE ("expression.ggs", 637)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 637)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 638)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 638)).add_operation (GALGAS_string (", but this variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 638)).add_operation (var_rightBitCount_23519.getter_string (SOURCE_FILE ("expression.ggs", 639)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 639)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 640)).add_operation (temp_15, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 640)), fixItArray17  COMMA_SOURCE_FILE ("expression.ggs", 637)) ;
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
            result_outResult = GALGAS_binaryset::class_func_binarySetWithEqualComparison (var_leftIdx_23135, var_leftBitCount_23152, var_rightIdx_23502, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 645)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_notEqual:
          {
            result_outResult = GALGAS_binaryset::class_func_binarySetWithNotEqualComparison (var_leftIdx_23135, var_leftBitCount_23152, var_rightIdx_23502, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 647)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_lowerOrEqual:
          {
            result_outResult = GALGAS_binaryset::class_func_binarySetWithLowerOrEqualComparison (var_leftIdx_23135, var_leftBitCount_23152, var_rightIdx_23502, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 649)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_lowerThan:
          {
            result_outResult = GALGAS_binaryset::class_func_binarySetWithStrictLowerComparison (var_leftIdx_23135, var_leftBitCount_23152, var_rightIdx_23502, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 651)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_greaterOrEqual:
          {
            result_outResult = GALGAS_binaryset::class_func_binarySetWithGreaterOrEqualComparison (var_leftIdx_23135, var_leftBitCount_23152, var_rightIdx_23502, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 653)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_greaterThan:
          {
            result_outResult = GALGAS_binaryset::class_func_binarySetWithStrictGreaterComparison (var_leftIdx_23135, var_leftBitCount_23152, var_rightIdx_23502, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 655)) ;
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
#include "F_Analyze_CLI_Options.h"
#include "C_builtin_CLI_Options.h"
#include "C_galgas_CLI_Options.h"
#include "F_verbose_output.h"
#include "cLexiqueIntrospection.h"
#include "F_DisplayException.h"

//--------------------------------------------------------------------------------------------------
//
//                      print_tool_help_message                                                  
//
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
  GALGAS_ast var_ast_837 ;
  var_ast_837.drop () ;
  cGrammar_kerbdd_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_ast_837  COMMA_SOURCE_FILE ("program.ggs", 17)) ;
  GALGAS_domainMap var_domainMap_923 ;
  extensionMethod_analyze (var_ast_837.readProperty_mDomainList (), var_domainMap_923, inCompiler COMMA_SOURCE_FILE ("program.ggs", 19)) ;
  GALGAS_computedFormulaMap var_computedFormulaMap_982 = GALGAS_computedFormulaMap::class_func_emptyMap (SOURCE_FILE ("program.ggs", 21)) ;
  cEnumerator_formulaList enumerator_1013 (var_ast_837.readProperty_mFormulaList (), kENUMERATION_UP) ;
  bool bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 22)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_1013.hasCurrentObject () && bool_0) {
    while (enumerator_1013.hasCurrentObject () && bool_0) {
      callExtensionMethod_analyzeFormula ((cPtr_abstractFormula *) enumerator_1013.current_mFormula (HERE).ptr (), constinArgument_inSourceFile.readProperty_string (), var_domainMap_923, var_computedFormulaMap_982, inCompiler COMMA_SOURCE_FILE ("program.ggs", 23)) ;
      enumerator_1013.gotoNextObject () ;
      if (enumerator_1013.hasCurrentObject ()) {
        bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 22)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
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
  F_Analyze_CLI_Options (inArgc, inArgv,
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

