#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

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

static void extensionMethod_assignmentFormula_analyzeFormula (const cPtr_abstractFormula * inObject,
                                                              const GALGAS_string /* constinArgument_inSourceFilePath */,
                                                              const GALGAS_domainMap constinArgument_inDomainMap,
                                                              GALGAS_computedFormulaMap & ioArgument_ioComputedFormulaMap,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentFormula * object = (const cPtr_assignmentFormula *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentFormula) ;
  GALGAS_uint var_totalBitCount_2940 = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_varList var_varList_2967 = GALGAS_varList::constructor_emptyList (SOURCE_FILE ("formula-assignment.galgas", 78)) ;
  GALGAS_varMap var_varMap_2993 = GALGAS_varMap::constructor_emptyMap (SOURCE_FILE ("formula-assignment.galgas", 79)) ;
  const GALGAS_assignmentFormula temp_0 = object ;
  extensionMethod_analyze (temp_0.readProperty_mFormulaArgumentList (), constinArgument_inDomainMap, var_varMap_2993, var_varList_2967, var_totalBitCount_2940, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 80)) ;
  const GALGAS_assignmentFormula temp_1 = object ;
  switch (temp_1.readProperty_mKind ().enumValue ()) {
  case GALGAS_formulaKind::kNotBuilt:
    break ;
  case GALGAS_formulaKind::kEnum_assignment:
    {
      const GALGAS_assignmentFormula temp_2 = object ;
      inCompiler->printMessage (temp_2.readProperty_mFormulaName ().readProperty_string ().add_operation (GALGAS_string ("..."), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 84))  COMMA_SOURCE_FILE ("formula-assignment.galgas", 84)) ;
      GALGAS_timer var_timer_3207 = GALGAS_timer::constructor_start (SOURCE_FILE ("formula-assignment.galgas", 85)) ;
      const GALGAS_assignmentFormula temp_3 = object ;
      GALGAS_binaryset var_result_3237 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_3.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_2993, var_totalBitCount_2940, ioArgument_ioComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 86)) ;
      {
      const GALGAS_assignmentFormula temp_4 = object ;
      ioArgument_ioComputedFormulaMap.setter_insertKey (temp_4.readProperty_mFormulaName (), var_varList_2967, var_totalBitCount_2940, var_result_3237, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 87)) ;
      }
      GALGAS_uint_36__34_ var_valueCount_3451 = var_result_3237.getter_valueCount (var_totalBitCount_2940, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 88)) ;
      GALGAS_uint_36__34_ var_nodeCount_3585 = var_result_3237.getter_nodeCount (SOURCE_FILE ("formula-assignment.galgas", 90)) ;
      GALGAS_string temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_valueCount_3451.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_7 ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_nodeCount_3585.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
      if (kBoolTrue == test_8) {
        temp_7 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_8) {
        temp_7 = GALGAS_string::makeEmptyString () ;
      }
      inCompiler->printMessage (GALGAS_string (" ").add_operation (var_valueCount_3451.getter_string (SOURCE_FILE ("formula-assignment.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 91)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 92)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 92)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 92)).add_operation (var_nodeCount_3585.getter_string (SOURCE_FILE ("formula-assignment.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 93)).add_operation (GALGAS_string (" node"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 93)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 93)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 93)).add_operation (var_timer_3207.getter_string (SOURCE_FILE ("formula-assignment.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 94)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 94))  COMMA_SOURCE_FILE ("formula-assignment.galgas", 91)) ;
    }
    break ;
  case GALGAS_formulaKind::kEnum_fixedPoint:
    {
      const cEnumAssociatedValues_formulaKind_fixedPoint * extractPtr_4915 = (const cEnumAssociatedValues_formulaKind_fixedPoint *) (temp_1.readProperty_mKind ().unsafePointer ()) ;
      const GALGAS_binaryset extractedValue_3840_startValue = extractPtr_4915->mAssociatedValue0 ;
      const GALGAS_assignmentFormula temp_9 = object ;
      inCompiler->printMessage (temp_9.readProperty_mFormulaName ().readProperty_string ().add_operation (GALGAS_string ("..."), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 96))  COMMA_SOURCE_FILE ("formula-assignment.galgas", 96)) ;
      GALGAS_timer var_timer_3902 = GALGAS_timer::constructor_start (SOURCE_FILE ("formula-assignment.galgas", 97)) ;
      GALGAS_binaryset var_result_3943 = extractedValue_3840_startValue ;
      {
      const GALGAS_assignmentFormula temp_10 = object ;
      ioArgument_ioComputedFormulaMap.setter_insertKey (temp_10.readProperty_mFormulaName (), var_varList_2967, var_totalBitCount_2940, var_result_3943, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 99)) ;
      }
      GALGAS_bool var_iterate_4062 = GALGAS_bool (true) ;
      GALGAS_uint var_iterationCount_4094 = GALGAS_uint ((uint32_t) 0U) ;
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("formula-assignment.galgas", 102)).isValid ()) {
        uint32_t variant_4107 = GALGAS_uint::constructor_max (SOURCE_FILE ("formula-assignment.galgas", 102)).uintValue () ;
        bool loop_4107 = true ;
        while (loop_4107) {
          loop_4107 = var_iterate_4062.isValid () ;
          if (loop_4107) {
            loop_4107 = var_iterate_4062.boolValue () ;
          }
          if (loop_4107 && (0 == variant_4107)) {
            loop_4107 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("formula-assignment.galgas", 102)) ;
          }
          if (loop_4107) {
            variant_4107 -- ;
            var_iterationCount_4094.increment_operation (inCompiler  COMMA_SOURCE_FILE ("formula-assignment.galgas", 103)) ;
            const GALGAS_assignmentFormula temp_11 = object ;
            GALGAS_binaryset var_r_4172 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_11.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_2993, var_totalBitCount_2940, ioArgument_ioComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 104)) ;
            enumGalgasBool test_12 = kBoolTrue ;
            if (kBoolTrue == test_12) {
              test_12 = GALGAS_bool (kIsEqual, var_result_3943.objectCompare (var_r_4172)).boolEnum () ;
              if (kBoolTrue == test_12) {
                var_iterate_4062 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_12) {
              var_result_3943 = var_r_4172 ;
              {
              const GALGAS_assignmentFormula temp_13 = object ;
              ioArgument_ioComputedFormulaMap.setter_setMValueForKey (var_result_3943, temp_13.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 109)) ;
              }
            }
          }
        }
      }
      GALGAS_uint_36__34_ var_valueCount_4477 = var_result_3943.getter_valueCount (var_totalBitCount_2940, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 112)) ;
      GALGAS_uint_36__34_ var_nodeCount_4611 = var_result_3943.getter_nodeCount (SOURCE_FILE ("formula-assignment.galgas", 114)) ;
      GALGAS_string temp_14 ;
      const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_iterationCount_4094.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_15) {
        temp_14 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_15) {
        temp_14 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_16 ;
      const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_valueCount_4477.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
      if (kBoolTrue == test_17) {
        temp_16 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_17) {
        temp_16 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_18 ;
      const enumGalgasBool test_19 = GALGAS_bool (kIsStrictSup, var_nodeCount_4611.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
      if (kBoolTrue == test_19) {
        temp_18 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_19) {
        temp_18 = GALGAS_string::makeEmptyString () ;
      }
      inCompiler->printMessage (GALGAS_string (" ").add_operation (var_iterationCount_4094.getter_string (SOURCE_FILE ("formula-assignment.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 115)).add_operation (GALGAS_string (" iteration"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 116)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 116)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 116)).add_operation (var_valueCount_4477.getter_string (SOURCE_FILE ("formula-assignment.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 117)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 117)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 117)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 117)).add_operation (var_nodeCount_4611.getter_string (SOURCE_FILE ("formula-assignment.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 118)).add_operation (GALGAS_string (" node"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 118)).add_operation (temp_18, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 118)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 118)).add_operation (var_timer_3902.getter_string (SOURCE_FILE ("formula-assignment.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 119)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 119))  COMMA_SOURCE_FILE ("formula-assignment.galgas", 115)) ;
    }
    break ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_assignmentFormula_analyzeFormula (void) {
  enterExtensionMethod_analyzeFormula (kTypeDescriptor_GALGAS_assignmentFormula.mSlotID,
                                       extensionMethod_assignmentFormula_analyzeFormula) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_assignmentFormula_analyzeFormula (defineExtensionMethod_assignmentFormula_analyzeFormula, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setting_nodeHashMapSize analyzeFormula'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_setting_5F_nodeHashMapSize_analyzeFormula (const cPtr_abstractFormula * inObject,
                                                                       const GALGAS_string /* constinArgument_inSourceFilePath */,
                                                                       const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                       GALGAS_computedFormulaMap & /* ioArgument_ioComputedFormulaMap */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setting_5F_nodeHashMapSize * object = (const cPtr_setting_5F_nodeHashMapSize *) inObject ;
  macroValidSharedObject (object, cPtr_setting_5F_nodeHashMapSize) ;
  {
  const GALGAS_setting_5F_nodeHashMapSize temp_0 = object ;
  GALGAS_binaryset::class_method_setNodeTableSize (temp_0.readProperty_mSetting ().readProperty_uint () COMMA_SOURCE_FILE ("setting-map.galgas", 52)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_setting_5F_nodeHashMapSize_analyzeFormula (void) {
  enterExtensionMethod_analyzeFormula (kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize.mSlotID,
                                       extensionMethod_setting_5F_nodeHashMapSize_analyzeFormula) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_setting_5F_nodeHashMapSize_analyzeFormula (defineExtensionMethod_setting_5F_nodeHashMapSize_analyzeFormula, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setting_andCacheMapSize analyzeFormula'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_setting_5F_andCacheMapSize_analyzeFormula (const cPtr_abstractFormula * inObject,
                                                                       const GALGAS_string /* constinArgument_inSourceFilePath */,
                                                                       const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                       GALGAS_computedFormulaMap & /* ioArgument_ioComputedFormulaMap */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setting_5F_andCacheMapSize * object = (const cPtr_setting_5F_andCacheMapSize *) inObject ;
  macroValidSharedObject (object, cPtr_setting_5F_andCacheMapSize) ;
  {
  const GALGAS_setting_5F_andCacheMapSize temp_0 = object ;
  GALGAS_binaryset::class_method_setAndTableSize (temp_0.readProperty_mSetting ().readProperty_uint () COMMA_SOURCE_FILE ("setting-map.galgas", 62)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_setting_5F_andCacheMapSize_analyzeFormula (void) {
  enterExtensionMethod_analyzeFormula (kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize.mSlotID,
                                       extensionMethod_setting_5F_andCacheMapSize_analyzeFormula) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_setting_5F_andCacheMapSize_analyzeFormula (defineExtensionMethod_setting_5F_andCacheMapSize_analyzeFormula, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dumpFormula analyzeFormula'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dumpFormula_analyzeFormula (const cPtr_abstractFormula * inObject,
                                                        const GALGAS_string /* constinArgument_inSourceFilePath */,
                                                        const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                        GALGAS_computedFormulaMap & ioArgument_ioComputedFormulaMap,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dumpFormula * object = (const cPtr_dumpFormula *) inObject ;
  macroValidSharedObject (object, cPtr_dumpFormula) ;
  GALGAS_varList var_varList_1856 ;
  GALGAS_uint var_bitCount_1870 ;
  GALGAS_binaryset var_result_1882 ;
  const GALGAS_dumpFormula temp_0 = object ;
  ioArgument_ioComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_1856, var_bitCount_1870, var_result_1882, inCompiler COMMA_SOURCE_FILE ("formula-dump.galgas", 37)) ;
  GALGAS_uint_36__34_ var_valueCount_1908 = var_result_1882.getter_valueCount (var_bitCount_1870, inCompiler COMMA_SOURCE_FILE ("formula-dump.galgas", 38)) ;
  const GALGAS_dumpFormula temp_1 = object ;
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_valueCount_1908.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_string ("s") ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }
  inCompiler->printMessage (GALGAS_string ("Dump $").add_operation (temp_1.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-dump.galgas", 39)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-dump.galgas", 39)).add_operation (var_valueCount_1908.getter_string (SOURCE_FILE ("formula-dump.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("formula-dump.galgas", 39)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-dump.galgas", 39)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("formula-dump.galgas", 39)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("formula-dump.galgas", 39))  COMMA_SOURCE_FILE ("formula-dump.galgas", 39)) ;
  GALGAS_stringlist var_nameList_2087 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("formula-dump.galgas", 40)) ;
  GALGAS_uintlist var_bitCountList_2121 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("formula-dump.galgas", 41)) ;
  cEnumerator_varList enumerator_2154 (var_varList_1856, kENUMERATION_UP) ;
  while (enumerator_2154.hasCurrentObject ()) {
    var_nameList_2087.addAssign_operation (enumerator_2154.current_mVarName (HERE)  COMMA_SOURCE_FILE ("formula-dump.galgas", 43)) ;
    var_bitCountList_2121.addAssign_operation (enumerator_2154.current_mBitCount (HERE)  COMMA_SOURCE_FILE ("formula-dump.galgas", 44)) ;
    enumerator_2154.gotoNextObject () ;
  }
  inCompiler->printMessage (var_result_1882.getter_print (var_nameList_2087, var_bitCountList_2121 COMMA_SOURCE_FILE ("formula-dump.galgas", 46))  COMMA_SOURCE_FILE ("formula-dump.galgas", 46)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dumpFormula_analyzeFormula (void) {
  enterExtensionMethod_analyzeFormula (kTypeDescriptor_GALGAS_dumpFormula.mSlotID,
                                       extensionMethod_dumpFormula_analyzeFormula) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dumpFormula_analyzeFormula (defineExtensionMethod_dumpFormula_analyzeFormula, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphvizFormula analyzeFormula'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphvizFormula_analyzeFormula (const cPtr_abstractFormula * inObject,
                                                            const GALGAS_string constinArgument_inSourceFilePath,
                                                            const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                            GALGAS_computedFormulaMap & ioArgument_ioComputedFormulaMap,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphvizFormula * object = (const cPtr_graphvizFormula *) inObject ;
  macroValidSharedObject (object, cPtr_graphvizFormula) ;
  GALGAS_varList var_varList_1864 ;
  GALGAS_binaryset var_result_1879 ;
  const GALGAS_graphvizFormula temp_0 = object ;
  GALGAS_uint joker_1866 ; // Joker input parameter
  ioArgument_ioComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_1864, joker_1866, var_result_1879, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 37)) ;
  const GALGAS_graphvizFormula temp_1 = object ;
  GALGAS_string var_filePath_1895 = constinArgument_inSourceFilePath.getter_stringByDeletingPathExtension (SOURCE_FILE ("formula-graphviz.galgas", 38)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 38)).add_operation (temp_1.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 38)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 38)) ;
  const GALGAS_graphvizFormula temp_2 = object ;
  inCompiler->printMessage (GALGAS_string ("Graphviz $").add_operation (temp_2.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 39)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 39)).add_operation (var_filePath_1895, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 39)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 39))  COMMA_SOURCE_FILE ("formula-graphviz.galgas", 39)) ;
  GALGAS_stringlist var_bitNameList_2081 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("formula-graphviz.galgas", 40)) ;
  cEnumerator_varList enumerator_2116 (var_varList_1864, kENUMERATION_DOWN) ;
  while (enumerator_2116.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, enumerator_2116.current_mBitCount (HERE).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_bitNameList_2081.addAssign_operation (enumerator_2116.current_mVarName (HERE)  COMMA_SOURCE_FILE ("formula-graphviz.galgas", 43)) ;
      }
    }
    if (kBoolFalse == test_3) {
      cEnumerator_range enumerator_2229 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), enumerator_2116.current_mBitCount (HERE).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 45))), kENUMERATION_UP) ;
      while (enumerator_2229.hasCurrentObject ()) {
        var_bitNameList_2081.addAssign_operation (enumerator_2116.current_mVarName (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 46)).add_operation (enumerator_2229.current (HERE).getter_string (SOURCE_FILE ("formula-graphviz.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 46))  COMMA_SOURCE_FILE ("formula-graphviz.galgas", 46)) ;
        enumerator_2229.gotoNextObject () ;
      }
    }
    enumerator_2116.gotoNextObject () ;
  }
  GALGAS_string var_s_2307 = var_result_1879.getter_graphviz (var_bitNameList_2081 COMMA_SOURCE_FILE ("formula-graphviz.galgas", 50)) ;
  GALGAS_bool joker_2390 ; // Joker input parameter
  var_s_2307.method_writeToFileWhenDifferentContents (var_filePath_1895, joker_2390, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 51)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphvizFormula_analyzeFormula (void) {
  enterExtensionMethod_analyzeFormula (kTypeDescriptor_GALGAS_graphvizFormula.mSlotID,
                                       extensionMethod_graphvizFormula_analyzeFormula) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphvizFormula_analyzeFormula (defineExtensionMethod_graphvizFormula_analyzeFormula, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@varInExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_binaryset extensionGetter_varInExpression_computeExpression (const cPtr_expression * inObject,
                                                                           const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                           const GALGAS_varMap constinArgument_inVarMap,
                                                                           const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                           const GALGAS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_varInExpression * object = (const cPtr_varInExpression *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpression) ;
  GALGAS_uint var_idx_11462 ;
  GALGAS_uint var_bitCount_11476 ;
  GALGAS_recordDomainMap var_subdomainMap_11494 ;
  const GALGAS_varInExpression temp_0 = object ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_11462, var_bitCount_11476, var_subdomainMap_11494, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 354)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_subdomainMap_11494.getter_count (SOURCE_FILE ("expression.galgas", 355)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_varInExpression temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mVarName ().readProperty_location (), GALGAS_string ("variable is a record; use dot notation"), fixItArray3  COMMA_SOURCE_FILE ("expression.galgas", 356)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, var_bitCount_11476.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_varInExpression temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mVarName ().readProperty_location (), GALGAS_string ("variable is not boolean; use {...} or dot notation"), fixItArray6  COMMA_SOURCE_FILE ("expression.galgas", 358)) ;
      }
    }
  }
  result_outResult = GALGAS_binaryset::constructor_binarySetWithBit (var_idx_11462, inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 360)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_varInExpression_computeExpression (void) {
  enterExtensionGetter_computeExpression (kTypeDescriptor_GALGAS_varInExpression.mSlotID,
                                          extensionGetter_varInExpression_computeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_varInExpression_computeExpression (defineExtensionGetter_varInExpression_computeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@varBitInExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_binaryset extensionGetter_varBitInExpression_computeExpression (const cPtr_expression * inObject,
                                                                              const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                              const GALGAS_varMap constinArgument_inVarMap,
                                                                              const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                              const GALGAS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_varBitInExpression * object = (const cPtr_varBitInExpression *) inObject ;
  macroValidSharedObject (object, cPtr_varBitInExpression) ;
  GALGAS_uint var_idx_12163 ;
  GALGAS_uint var_bitCount_12177 ;
  GALGAS_recordDomainMap var_subdomainMap_12195 ;
  const GALGAS_varBitInExpression temp_0 = object ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_12163, var_bitCount_12177, var_subdomainMap_12195, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 372)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_subdomainMap_12195.getter_count (SOURCE_FILE ("expression.galgas", 373)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_varBitInExpression temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mVarName ().readProperty_location (), GALGAS_string ("variable is a record; use dot notation"), fixItArray3  COMMA_SOURCE_FILE ("expression.galgas", 374)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      const GALGAS_varBitInExpression temp_5 = object ;
      test_4 = GALGAS_bool (kIsInfOrEqual, var_bitCount_12177.objectCompare (temp_5.readProperty_mVarBit ().readProperty_uint ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_varBitInExpression temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mVarBit ().readProperty_location (), GALGAS_string ("bit index should be < ").add_operation (var_bitCount_12177.getter_string (SOURCE_FILE ("expression.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 376)), fixItArray7  COMMA_SOURCE_FILE ("expression.galgas", 376)) ;
      }
    }
  }
  const GALGAS_varBitInExpression temp_8 = object ;
  result_outResult = GALGAS_binaryset::constructor_binarySetWithBit (var_idx_12163.add_operation (temp_8.readProperty_mVarBit ().readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 378)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_varBitInExpression_computeExpression (void) {
  enterExtensionGetter_computeExpression (kTypeDescriptor_GALGAS_varBitInExpression.mSlotID,
                                          extensionGetter_varBitInExpression_computeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_varBitInExpression_computeExpression (defineExtensionGetter_varBitInExpression_computeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@andExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_binaryset extensionGetter_andExpression_computeExpression (const cPtr_expression * inObject,
                                                                         const GALGAS_domainMap constinArgument_inDomainMap,
                                                                         const GALGAS_varMap constinArgument_inVarMap,
                                                                         const GALGAS_uint constinArgument_inTotalBitCount,
                                                                         const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_andExpression * object = (const cPtr_andExpression *) inObject ;
  macroValidSharedObject (object, cPtr_andExpression) ;
  const GALGAS_andExpression temp_0 = object ;
  GALGAS_binaryset var_left_12821 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 390)) ;
  const GALGAS_andExpression temp_1 = object ;
  GALGAS_binaryset var_right_12940 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 391)) ;
  result_outResult = var_left_12821.operator_and (var_right_12940 COMMA_SOURCE_FILE ("expression.galgas", 392)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_andExpression_computeExpression (void) {
  enterExtensionGetter_computeExpression (kTypeDescriptor_GALGAS_andExpression.mSlotID,
                                          extensionGetter_andExpression_computeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_andExpression_computeExpression (defineExtensionGetter_andExpression_computeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@orExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_binaryset extensionGetter_orExpression_computeExpression (const cPtr_expression * inObject,
                                                                        const GALGAS_domainMap constinArgument_inDomainMap,
                                                                        const GALGAS_varMap constinArgument_inVarMap,
                                                                        const GALGAS_uint constinArgument_inTotalBitCount,
                                                                        const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_orExpression * object = (const cPtr_orExpression *) inObject ;
  macroValidSharedObject (object, cPtr_orExpression) ;
  const GALGAS_orExpression temp_0 = object ;
  GALGAS_binaryset var_left_13416 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 404)) ;
  const GALGAS_orExpression temp_1 = object ;
  GALGAS_binaryset var_right_13535 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 405)) ;
  result_outResult = var_left_13416.operator_or (var_right_13535 COMMA_SOURCE_FILE ("expression.galgas", 406)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_orExpression_computeExpression (void) {
  enterExtensionGetter_computeExpression (kTypeDescriptor_GALGAS_orExpression.mSlotID,
                                          extensionGetter_orExpression_computeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_orExpression_computeExpression (defineExtensionGetter_orExpression_computeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@xorExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_binaryset extensionGetter_xorExpression_computeExpression (const cPtr_expression * inObject,
                                                                         const GALGAS_domainMap constinArgument_inDomainMap,
                                                                         const GALGAS_varMap constinArgument_inVarMap,
                                                                         const GALGAS_uint constinArgument_inTotalBitCount,
                                                                         const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_xorExpression * object = (const cPtr_xorExpression *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpression) ;
  const GALGAS_xorExpression temp_0 = object ;
  GALGAS_binaryset var_left_14012 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 418)) ;
  const GALGAS_xorExpression temp_1 = object ;
  GALGAS_binaryset var_right_14131 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 419)) ;
  result_outResult = var_left_14012.operator_xor (var_right_14131 COMMA_SOURCE_FILE ("expression.galgas", 420)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_xorExpression_computeExpression (void) {
  enterExtensionGetter_computeExpression (kTypeDescriptor_GALGAS_xorExpression.mSlotID,
                                          extensionGetter_xorExpression_computeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_xorExpression_computeExpression (defineExtensionGetter_xorExpression_computeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@impliesExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_binaryset extensionGetter_impliesExpression_computeExpression (const cPtr_expression * inObject,
                                                                             const GALGAS_domainMap constinArgument_inDomainMap,
                                                                             const GALGAS_varMap constinArgument_inVarMap,
                                                                             const GALGAS_uint constinArgument_inTotalBitCount,
                                                                             const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_impliesExpression * object = (const cPtr_impliesExpression *) inObject ;
  macroValidSharedObject (object, cPtr_impliesExpression) ;
  const GALGAS_impliesExpression temp_0 = object ;
  GALGAS_binaryset var_left_14612 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 432)) ;
  const GALGAS_impliesExpression temp_1 = object ;
  GALGAS_binaryset var_right_14731 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 433)) ;
  result_outResult = var_left_14612.getter_implies (var_right_14731 COMMA_SOURCE_FILE ("expression.galgas", 434)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_impliesExpression_computeExpression (void) {
  enterExtensionGetter_computeExpression (kTypeDescriptor_GALGAS_impliesExpression.mSlotID,
                                          extensionGetter_impliesExpression_computeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_impliesExpression_computeExpression (defineExtensionGetter_impliesExpression_computeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@equalExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_binaryset extensionGetter_equalExpression_computeExpression (const cPtr_expression * inObject,
                                                                           const GALGAS_domainMap constinArgument_inDomainMap,
                                                                           const GALGAS_varMap constinArgument_inVarMap,
                                                                           const GALGAS_uint constinArgument_inTotalBitCount,
                                                                           const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_equalExpression * object = (const cPtr_equalExpression *) inObject ;
  macroValidSharedObject (object, cPtr_equalExpression) ;
  const GALGAS_equalExpression temp_0 = object ;
  GALGAS_binaryset var_left_15219 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 446)) ;
  const GALGAS_equalExpression temp_1 = object ;
  GALGAS_binaryset var_right_15338 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 447)) ;
  result_outResult = var_left_15219.operator_xor (var_right_15338 COMMA_SOURCE_FILE ("expression.galgas", 448)).operator_tilde (SOURCE_FILE ("expression.galgas", 448)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_equalExpression_computeExpression (void) {
  enterExtensionGetter_computeExpression (kTypeDescriptor_GALGAS_equalExpression.mSlotID,
                                          extensionGetter_equalExpression_computeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_equalExpression_computeExpression (defineExtensionGetter_equalExpression_computeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@notEqualExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_binaryset extensionGetter_notEqualExpression_computeExpression (const cPtr_expression * inObject,
                                                                              const GALGAS_domainMap constinArgument_inDomainMap,
                                                                              const GALGAS_varMap constinArgument_inVarMap,
                                                                              const GALGAS_uint constinArgument_inTotalBitCount,
                                                                              const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_notEqualExpression * object = (const cPtr_notEqualExpression *) inObject ;
  macroValidSharedObject (object, cPtr_notEqualExpression) ;
  const GALGAS_notEqualExpression temp_0 = object ;
  GALGAS_binaryset var_left_15823 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 460)) ;
  const GALGAS_notEqualExpression temp_1 = object ;
  GALGAS_binaryset var_right_15942 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 461)) ;
  result_outResult = var_left_15823.operator_xor (var_right_15942 COMMA_SOURCE_FILE ("expression.galgas", 462)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_notEqualExpression_computeExpression (void) {
  enterExtensionGetter_computeExpression (kTypeDescriptor_GALGAS_notEqualExpression.mSlotID,
                                          extensionGetter_notEqualExpression_computeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_notEqualExpression_computeExpression (defineExtensionGetter_notEqualExpression_computeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@complementExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_binaryset extensionGetter_complementExpression_computeExpression (const cPtr_expression * inObject,
                                                                                const GALGAS_domainMap constinArgument_inDomainMap,
                                                                                const GALGAS_varMap constinArgument_inVarMap,
                                                                                const GALGAS_uint constinArgument_inTotalBitCount,
                                                                                const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_complementExpression * object = (const cPtr_complementExpression *) inObject ;
  macroValidSharedObject (object, cPtr_complementExpression) ;
  const GALGAS_complementExpression temp_0 = object ;
  result_outResult = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 474)).operator_tilde (SOURCE_FILE ("expression.galgas", 474)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_complementExpression_computeExpression (void) {
  enterExtensionGetter_computeExpression (kTypeDescriptor_GALGAS_complementExpression.mSlotID,
                                          extensionGetter_complementExpression_computeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_complementExpression_computeExpression (defineExtensionGetter_complementExpression_computeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@trueExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_binaryset extensionGetter_trueExpression_computeExpression (const cPtr_expression * /* inObject */,
                                                                          const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                          const GALGAS_varMap /* constinArgument_inVarMap */,
                                                                          const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                          const GALGAS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  result_outResult = GALGAS_binaryset::constructor_fullBinarySet (SOURCE_FILE ("expression.galgas", 486)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_trueExpression_computeExpression (void) {
  enterExtensionGetter_computeExpression (kTypeDescriptor_GALGAS_trueExpression.mSlotID,
                                          extensionGetter_trueExpression_computeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_trueExpression_computeExpression (defineExtensionGetter_trueExpression_computeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@falseExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_binaryset extensionGetter_falseExpression_computeExpression (const cPtr_expression * /* inObject */,
                                                                           const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                           const GALGAS_varMap /* constinArgument_inVarMap */,
                                                                           const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                           const GALGAS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  result_outResult = GALGAS_binaryset::constructor_emptyBinarySet (SOURCE_FILE ("expression.galgas", 498)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_falseExpression_computeExpression (void) {
  enterExtensionGetter_computeExpression (kTypeDescriptor_GALGAS_falseExpression.mSlotID,
                                          extensionGetter_falseExpression_computeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_falseExpression_computeExpression (defineExtensionGetter_falseExpression_computeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@formulaInExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_binaryset extensionGetter_formulaInExpression_computeExpression (const cPtr_expression * inObject,
                                                                               const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                               const GALGAS_varMap constinArgument_inVarMap,
                                                                               const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                               const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_formulaInExpression * object = (const cPtr_formulaInExpression *) inObject ;
  macroValidSharedObject (object, cPtr_formulaInExpression) ;
  GALGAS_varList var_varList_17771 ;
  GALGAS_uint var_totalBitCount_17797 ;
  GALGAS_binaryset var_formulaValue_17815 ;
  const GALGAS_formulaInExpression temp_0 = object ;
  constinArgument_inComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_17771, var_totalBitCount_17797, var_formulaValue_17815, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 511)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_formulaInExpression temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mParameterList ().getter_length (SOURCE_FILE ("expression.galgas", 513)).objectCompare (var_varList_17771.getter_length (SOURCE_FILE ("expression.galgas", 513)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_formulaInExpression temp_3 = object ;
      const GALGAS_formulaInExpression temp_4 = object ;
      GALGAS_string temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_varList_17771.getter_length (SOURCE_FILE ("expression.galgas", 515)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_string::makeEmptyString () ;
      }
      const GALGAS_formulaInExpression temp_7 = object ;
      const GALGAS_formulaInExpression temp_8 = object ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, temp_8.readProperty_mParameterList ().getter_length (SOURCE_FILE ("expression.galgas", 517)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mFormulaName ().readProperty_location (), GALGAS_string ("the $").add_operation (temp_4.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 514)).add_operation (GALGAS_string (" names "), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 514)).add_operation (var_varList_17771.getter_length (SOURCE_FILE ("expression.galgas", 515)).getter_string (SOURCE_FILE ("expression.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 514)).add_operation (GALGAS_string (" variable"), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 515)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 515)).add_operation (GALGAS_string (", but this call names "), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 515)).add_operation (temp_7.readProperty_mParameterList ().getter_length (SOURCE_FILE ("expression.galgas", 517)).getter_string (SOURCE_FILE ("expression.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 516)).add_operation (GALGAS_string (" variable"), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 517)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 517)), fixItArray11  COMMA_SOURCE_FILE ("expression.galgas", 514)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_uintlist var_transformationList_18260 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("expression.galgas", 520)) ;
    const GALGAS_formulaInExpression temp_12 = object ;
    cEnumerator_varList enumerator_18304 (var_varList_17771, kENUMERATION_DOWN) ;
    cEnumerator_formulaParameterListInExpression enumerator_18348 (temp_12.readProperty_mParameterList (), kENUMERATION_DOWN) ;
    while (enumerator_18304.hasCurrentObject () && enumerator_18348.hasCurrentObject ()) {
      GALGAS_uint var_parameterIndex_18438 ;
      GALGAS_uint var_parameterBitCount_18463 ;
      GALGAS_recordDomainMap var_subdomainMap_18494 ;
      constinArgument_inVarMap.method_searchKey (enumerator_18348.current_mParameterName (HERE), var_parameterIndex_18438, var_parameterBitCount_18463, var_subdomainMap_18494, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 522)) ;
      cEnumerator_lstringlist enumerator_18516 (enumerator_18348.current_mFieldNames (HERE), kENUMERATION_UP) ;
      while (enumerator_18516.hasCurrentObject ()) {
        GALGAS_uint var_fieldRelativeBitIndex_18607 ;
        GALGAS_recordDomainMap var_fieldSubdomainMap_18649 ;
        var_subdomainMap_18494.method_searchKey (enumerator_18516.current_mValue (HERE), var_fieldRelativeBitIndex_18607, var_parameterBitCount_18463, var_fieldSubdomainMap_18649, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 524)) ;
        var_parameterIndex_18438 = var_parameterIndex_18438.add_operation (var_fieldRelativeBitIndex_18607, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 525)) ;
        var_subdomainMap_18494 = var_fieldSubdomainMap_18649 ;
        enumerator_18516.gotoNextObject () ;
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsNotEqual, enumerator_18304.current_mBitCount (HERE).objectCompare (var_parameterBitCount_18463)).boolEnum () ;
        if (kBoolTrue == test_13) {
          GALGAS_string temp_14 ;
          const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_parameterBitCount_18463.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_15) {
            temp_14 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_15) {
            temp_14 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, enumerator_18304.current_mBitCount (HERE).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (enumerator_18348.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("this parameter is declared with a size of ").add_operation (var_parameterBitCount_18463.getter_string (SOURCE_FILE ("expression.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 529)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 530)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 530)).add_operation (GALGAS_string (", but corresponding formal argument '"), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 530)).add_operation (enumerator_18304.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 531)).add_operation (GALGAS_string ("' is declared with a size of "), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 531)).add_operation (enumerator_18304.current_mBitCount (HERE).getter_string (SOURCE_FILE ("expression.galgas", 531)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 531)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 532)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 532)), fixItArray18  COMMA_SOURCE_FILE ("expression.galgas", 529)) ;
        }
      }
      cEnumerator_range enumerator_19206 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), var_parameterBitCount_18463.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 534))), kENUMERATION_UP) ;
      while (enumerator_19206.hasCurrentObject ()) {
        var_transformationList_18260.addAssign_operation (var_parameterIndex_18438.add_operation (enumerator_19206.current (HERE), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 535))  COMMA_SOURCE_FILE ("expression.galgas", 535)) ;
        enumerator_19206.gotoNextObject () ;
      }
      enumerator_18304.gotoNextObject () ;
      enumerator_18348.gotoNextObject () ;
    }
    result_outResult = var_formulaValue_17815.getter_transformedBy (var_transformationList_18260 COMMA_SOURCE_FILE ("expression.galgas", 538)) ;
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_formulaInExpression_computeExpression (void) {
  enterExtensionGetter_computeExpression (kTypeDescriptor_GALGAS_formulaInExpression.mSlotID,
                                          extensionGetter_formulaInExpression_computeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_formulaInExpression_computeExpression (defineExtensionGetter_formulaInExpression_computeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@existInExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_binaryset extensionGetter_existInExpression_computeExpression (const cPtr_expression * inObject,
                                                                             const GALGAS_domainMap constinArgument_inDomainMap,
                                                                             const GALGAS_varMap constinArgument_inVarMap,
                                                                             const GALGAS_uint constinArgument_inTotalBitCount,
                                                                             const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_existInExpression * object = (const cPtr_existInExpression *) inObject ;
  macroValidSharedObject (object, cPtr_existInExpression) ;
  GALGAS_varMap var_varMap_19706 = constinArgument_inVarMap ;
  GALGAS_uint var_totalBitCount_19743 = constinArgument_inTotalBitCount ;
  GALGAS_varList joker_19817 = GALGAS_varList::constructor_emptyList (SOURCE_FILE ("expression.galgas", 553)) ;
  const GALGAS_existInExpression temp_0 = object ;
  extensionMethod_analyze (temp_0.readProperty_mArgumentList (), constinArgument_inDomainMap, var_varMap_19706, joker_19817, var_totalBitCount_19743, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 553)) ;
  const GALGAS_existInExpression temp_1 = object ;
  GALGAS_binaryset var_r_19843 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_19706, var_totalBitCount_19743, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 554)) ;
  result_outResult = var_r_19843.getter_existOnBitIndexAndBeyond (constinArgument_inTotalBitCount COMMA_SOURCE_FILE ("expression.galgas", 555)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_existInExpression_computeExpression (void) {
  enterExtensionGetter_computeExpression (kTypeDescriptor_GALGAS_existInExpression.mSlotID,
                                          extensionGetter_existInExpression_computeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_existInExpression_computeExpression (defineExtensionGetter_existInExpression_computeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@forAllInExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_binaryset extensionGetter_forAllInExpression_computeExpression (const cPtr_expression * inObject,
                                                                              const GALGAS_domainMap constinArgument_inDomainMap,
                                                                              const GALGAS_varMap constinArgument_inVarMap,
                                                                              const GALGAS_uint constinArgument_inTotalBitCount,
                                                                              const GALGAS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_forAllInExpression * object = (const cPtr_forAllInExpression *) inObject ;
  macroValidSharedObject (object, cPtr_forAllInExpression) ;
  GALGAS_varMap var_varMap_20359 = constinArgument_inVarMap ;
  GALGAS_uint var_totalBitCount_20396 = constinArgument_inTotalBitCount ;
  GALGAS_varList joker_20470 = GALGAS_varList::constructor_emptyList (SOURCE_FILE ("expression.galgas", 569)) ;
  const GALGAS_forAllInExpression temp_0 = object ;
  extensionMethod_analyze (temp_0.readProperty_mArgumentList (), constinArgument_inDomainMap, var_varMap_20359, joker_20470, var_totalBitCount_20396, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 569)) ;
  const GALGAS_forAllInExpression temp_1 = object ;
  GALGAS_binaryset var_r_20496 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_20359, var_totalBitCount_20396, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 570)) ;
  result_outResult = var_r_20496.getter_forAllOnBitIndexAndBeyond (constinArgument_inTotalBitCount COMMA_SOURCE_FILE ("expression.galgas", 571)) ;
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_forAllInExpression_computeExpression (void) {
  enterExtensionGetter_computeExpression (kTypeDescriptor_GALGAS_forAllInExpression.mSlotID,
                                          extensionGetter_forAllInExpression_computeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_forAllInExpression_computeExpression (defineExtensionGetter_forAllInExpression_computeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@comparisonWithConstantInExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_binaryset extensionGetter_comparisonWithConstantInExpression_computeExpression (const cPtr_expression * inObject,
                                                                                              const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                                              const GALGAS_varMap constinArgument_inVarMap,
                                                                                              const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                                              const GALGAS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_comparisonWithConstantInExpression * object = (const cPtr_comparisonWithConstantInExpression *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonWithConstantInExpression) ;
  GALGAS_uint var_idx_21077 ;
  GALGAS_uint var_bitCount_21093 ;
  GALGAS_recordDomainMap var_subDomainMap_21124 ;
  const GALGAS_comparisonWithConstantInExpression temp_0 = object ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_21077, var_bitCount_21093, var_subDomainMap_21124, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 583)) ;
  const GALGAS_comparisonWithConstantInExpression temp_1 = object ;
  cEnumerator_lstringlist enumerator_21142 (temp_1.readProperty_mFieldNames (), kENUMERATION_UP) ;
  while (enumerator_21142.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex_21232 ;
    GALGAS_recordDomainMap var_fieldSubdomainMap_21265 ;
    var_subDomainMap_21124.method_searchKey (enumerator_21142.current_mValue (HERE), var_fieldRelativeBitIndex_21232, var_bitCount_21093, var_fieldSubdomainMap_21265, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 585)) ;
    var_idx_21077 = var_idx_21077.add_operation (var_fieldRelativeBitIndex_21232, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 586)) ;
    var_subDomainMap_21124 = var_fieldSubdomainMap_21265 ;
    enumerator_21142.gotoNextObject () ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictSup, var_subDomainMap_21124.getter_count (SOURCE_FILE ("expression.galgas", 589)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_comparisonWithConstantInExpression temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mVarName ().readProperty_location (), GALGAS_string ("variable is a record; use dot notation"), fixItArray4  COMMA_SOURCE_FILE ("expression.galgas", 590)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_comparisonWithConstantInExpression temp_6 = object ;
      test_5 = GALGAS_bool (kIsStrictSup, temp_6.readProperty_mConstant ().readProperty_uint ().getter_significantBitCount (SOURCE_FILE ("expression.galgas", 591)).objectCompare (var_bitCount_21093)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_comparisonWithConstantInExpression temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mConstant ().readProperty_location (), GALGAS_string ("Constant too large (should be < 2**").add_operation (var_bitCount_21093.getter_string (SOURCE_FILE ("expression.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 592)), fixItArray8  COMMA_SOURCE_FILE ("expression.galgas", 592)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_comparisonWithConstantInExpression temp_9 = object ;
      switch (temp_9.readProperty_mComparison ().enumValue ()) {
      case GALGAS_comparison::kNotBuilt:
        break ;
      case GALGAS_comparison::kEnum_equal:
        {
          const GALGAS_comparisonWithConstantInExpression temp_10 = object ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (var_idx_21077, var_bitCount_21093, temp_10.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.galgas", 596)), inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 596)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_notEqual:
        {
          const GALGAS_comparisonWithConstantInExpression temp_11 = object ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithNotEqualToConstant (var_idx_21077, var_bitCount_21093, temp_11.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.galgas", 598)), inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 598)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_lowerOrEqual:
        {
          const GALGAS_comparisonWithConstantInExpression temp_12 = object ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithLowerOrEqualToConstant (var_idx_21077, var_bitCount_21093, temp_12.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.galgas", 600)), inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 600)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_lowerThan:
        {
          const GALGAS_comparisonWithConstantInExpression temp_13 = object ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictLowerThanConstant (var_idx_21077, var_bitCount_21093, temp_13.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.galgas", 602)), inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 602)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_greaterOrEqual:
        {
          const GALGAS_comparisonWithConstantInExpression temp_14 = object ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithGreaterOrEqualToConstant (var_idx_21077, var_bitCount_21093, temp_14.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.galgas", 604)), inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 604)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_greaterThan:
        {
          const GALGAS_comparisonWithConstantInExpression temp_15 = object ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictGreaterThanConstant (var_idx_21077, var_bitCount_21093, temp_15.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.galgas", 606)), inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 606)) ;
        }
        break ;
      }
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_comparisonWithConstantInExpression_computeExpression (void) {
  enterExtensionGetter_computeExpression (kTypeDescriptor_GALGAS_comparisonWithConstantInExpression.mSlotID,
                                          extensionGetter_comparisonWithConstantInExpression_computeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_comparisonWithConstantInExpression_computeExpression (defineExtensionGetter_comparisonWithConstantInExpression_computeExpression, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@variableComparisonInExpression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_binaryset extensionGetter_variableComparisonInExpression_computeExpression (const cPtr_expression * inObject,
                                                                                          const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                                          const GALGAS_varMap constinArgument_inVarMap,
                                                                                          const GALGAS_uint /* constinArgument_inTotalBitCount */,
                                                                                          const GALGAS_computedFormulaMap /* constinArgument_inComputedFormulaMap */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_variableComparisonInExpression * object = (const cPtr_variableComparisonInExpression *) inObject ;
  macroValidSharedObject (object, cPtr_variableComparisonInExpression) ;
  GALGAS_uint var_leftIdx_22891 ;
  GALGAS_uint var_leftBitCount_22912 ;
  GALGAS_recordDomainMap var_leftSubDomainMap_22948 ;
  const GALGAS_variableComparisonInExpression temp_0 = object ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mLeftVarName (), var_leftIdx_22891, var_leftBitCount_22912, var_leftSubDomainMap_22948, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 620)) ;
  const GALGAS_variableComparisonInExpression temp_1 = object ;
  cEnumerator_lstringlist enumerator_22966 (temp_1.readProperty_mLeftFieldNames (), kENUMERATION_UP) ;
  while (enumerator_22966.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex_23064 ;
    GALGAS_recordDomainMap var_fieldSubdomainMap_23101 ;
    var_leftSubDomainMap_22948.method_searchKey (enumerator_22966.current_mValue (HERE), var_fieldRelativeBitIndex_23064, var_leftBitCount_22912, var_fieldSubdomainMap_23101, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 622)) ;
    var_leftIdx_22891 = var_leftIdx_22891.add_operation (var_fieldRelativeBitIndex_23064, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 623)) ;
    var_leftSubDomainMap_22948 = var_fieldSubdomainMap_23101 ;
    enumerator_22966.gotoNextObject () ;
  }
  GALGAS_uint var_rightIdx_23253 ;
  GALGAS_uint var_rightBitCount_23274 ;
  GALGAS_recordDomainMap var_rightSubDomainMap_23310 ;
  const GALGAS_variableComparisonInExpression temp_2 = object ;
  constinArgument_inVarMap.method_searchKey (temp_2.readProperty_mRightVarName (), var_rightIdx_23253, var_rightBitCount_23274, var_rightSubDomainMap_23310, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 626)) ;
  const GALGAS_variableComparisonInExpression temp_3 = object ;
  cEnumerator_lstringlist enumerator_23328 (temp_3.readProperty_mRightFieldNames (), kENUMERATION_UP) ;
  while (enumerator_23328.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex_23428 ;
    GALGAS_recordDomainMap var_fieldSubdomainMap_23466 ;
    var_rightSubDomainMap_23310.method_searchKey (enumerator_23328.current_mValue (HERE), var_fieldRelativeBitIndex_23428, var_rightBitCount_23274, var_fieldSubdomainMap_23466, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 628)) ;
    var_rightIdx_23253 = var_rightIdx_23253.add_operation (var_fieldRelativeBitIndex_23428, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 629)) ;
    var_rightSubDomainMap_23310 = var_fieldSubdomainMap_23466 ;
    enumerator_23328.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsStrictSup, var_leftSubDomainMap_22948.getter_count (SOURCE_FILE ("expression.galgas", 632)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_variableComparisonInExpression temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mLeftVarName ().readProperty_location (), GALGAS_string ("variable is a record; use dot notation"), fixItArray6  COMMA_SOURCE_FILE ("expression.galgas", 633)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_4) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (kIsStrictSup, var_rightSubDomainMap_23310.getter_count (SOURCE_FILE ("expression.galgas", 634)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_7) {
        const GALGAS_variableComparisonInExpression temp_8 = object ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mRightVarName ().readProperty_location (), GALGAS_string ("variable is a record; use dot notation"), fixItArray9  COMMA_SOURCE_FILE ("expression.galgas", 635)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_7) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsNotEqual, var_leftBitCount_22912.objectCompare (var_rightBitCount_23274)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_variableComparisonInExpression temp_11 = object ;
          const GALGAS_variableComparisonInExpression temp_12 = object ;
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_leftBitCount_22912.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string temp_15 ;
          const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, var_rightBitCount_23274.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_16) {
            temp_15 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_16) {
            temp_15 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mRightVarName ().readProperty_location (), GALGAS_string ("'").add_operation (temp_12.readProperty_mLeftVarName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 637)).add_operation (GALGAS_string ("' variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 637)).add_operation (var_leftBitCount_22912.getter_string (SOURCE_FILE ("expression.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 637)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 638)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 638)).add_operation (GALGAS_string (", but this variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 638)).add_operation (var_rightBitCount_23274.getter_string (SOURCE_FILE ("expression.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 639)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 640)).add_operation (temp_15, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 640)), fixItArray17  COMMA_SOURCE_FILE ("expression.galgas", 637)) ;
          result_outResult.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_10) {
        const GALGAS_variableComparisonInExpression temp_18 = object ;
        switch (temp_18.readProperty_mComparison ().enumValue ()) {
        case GALGAS_comparison::kNotBuilt:
          break ;
        case GALGAS_comparison::kEnum_equal:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithEqualComparison (var_leftIdx_22891, var_leftBitCount_22912, var_rightIdx_23253, inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 645)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_notEqual:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithNotEqualComparison (var_leftIdx_22891, var_leftBitCount_22912, var_rightIdx_23253, inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 647)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_lowerOrEqual:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithLowerOrEqualComparison (var_leftIdx_22891, var_leftBitCount_22912, var_rightIdx_23253, inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 649)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_lowerThan:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictLowerComparison (var_leftIdx_22891, var_leftBitCount_22912, var_rightIdx_23253, inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 651)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_greaterOrEqual:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithGreaterOrEqualComparison (var_leftIdx_22891, var_leftBitCount_22912, var_rightIdx_23253, inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 653)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_greaterThan:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictGreaterComparison (var_leftIdx_22891, var_leftBitCount_22912, var_rightIdx_23253, inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 655)) ;
          }
          break ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_variableComparisonInExpression_computeExpression (void) {
  enterExtensionGetter_computeExpression (kTypeDescriptor_GALGAS_variableComparisonInExpression.mSlotID,
                                          extensionGetter_variableComparisonInExpression_computeExpression) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_variableComparisonInExpression_computeExpression (defineExtensionGetter_variableComparisonInExpression_computeExpression, NULL) ;

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
  GALGAS_ast var_ast_826 ;
  var_ast_826.drop () ;
  cGrammar_kerbdd_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_ast_826  COMMA_SOURCE_FILE ("program.galgas", 17)) ;
  GALGAS_domainMap var_domainMap_918 ;
  extensionMethod_analyze (var_ast_826.readProperty_mDomainList (), var_domainMap_918, inCompiler COMMA_SOURCE_FILE ("program.galgas", 19)) ;
  GALGAS_computedFormulaMap var_computedFormulaMap_986 = GALGAS_computedFormulaMap::constructor_emptyMap (SOURCE_FILE ("program.galgas", 21)) ;
  cEnumerator_formulaList enumerator_1006 (var_ast_826.readProperty_mFormulaList (), kENUMERATION_UP) ;
  bool bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 22)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
  if (enumerator_1006.hasCurrentObject () && bool_0) {
    while (enumerator_1006.hasCurrentObject () && bool_0) {
      callExtensionMethod_analyzeFormula ((const cPtr_abstractFormula *) enumerator_1006.current_mFormula (HERE).ptr (), constinArgument_inSourceFile.readProperty_string (), var_domainMap_918, var_computedFormulaMap_986, inCompiler COMMA_SOURCE_FILE ("program.galgas", 23)) ;
      enumerator_1006.gotoNextObject () ;
      if (enumerator_1006.hasCurrentObject ()) {
        bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 22)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
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
    }catch (const ::std:: exception & e) {
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

