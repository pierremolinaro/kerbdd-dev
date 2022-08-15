#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@setting_nodeHashMapSize analyzeFormula'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_setting_5F_nodeHashMapSize::method_analyzeFormula (const GALGAS_string /* constinArgument_inSourceFilePath */,
                                                             const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                             GALGAS_computedFormulaMap & /* ioArgument_ioComputedFormulaMap */,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
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
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
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
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_varList var_varList_1859 ;
  GALGAS_uint var_bitCount_1873 ;
  GALGAS_binaryset var_result_1885 ;
  const GALGAS_dumpFormula temp_0 = this ;
  ioArgument_ioComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_1859, var_bitCount_1873, var_result_1885, inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 37)) ;
  GALGAS_uint_36__34_ var_valueCount_1911 = var_result_1885.getter_valueCount (var_bitCount_1873, inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 38)) ;
  const GALGAS_dumpFormula temp_1 = this ;
  GALGAS_string temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_valueCount_1911.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).getter_uint_36__34_ (inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_string ("s") ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_string::makeEmptyString () ;
  }
  inCompiler->printMessage (GALGAS_string ("Dump $").add_operation (temp_1.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (var_valueCount_1911.getter_string (SOURCE_FILE ("formula-dump.ggs", 39)), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("formula-dump.ggs", 39))  COMMA_SOURCE_FILE ("formula-dump.ggs", 39)) ;
  GALGAS_stringlist var_nameList_2089 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("formula-dump.ggs", 40)) ;
  GALGAS_uintlist var_bitCountList_2123 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("formula-dump.ggs", 41)) ;
  cEnumerator_varList enumerator_2156 (var_varList_1859, kENUMERATION_UP) ;
  while (enumerator_2156.hasCurrentObject ()) {
    var_nameList_2089.addAssign_operation (enumerator_2156.current_mVarName (HERE)  COMMA_SOURCE_FILE ("formula-dump.ggs", 43)) ;
    var_bitCountList_2123.addAssign_operation (enumerator_2156.current_mBitCount (HERE)  COMMA_SOURCE_FILE ("formula-dump.ggs", 44)) ;
    enumerator_2156.gotoNextObject () ;
  }
  inCompiler->printMessage (var_result_1885.getter_print (var_nameList_2089, var_bitCountList_2123 COMMA_SOURCE_FILE ("formula-dump.ggs", 46))  COMMA_SOURCE_FILE ("formula-dump.ggs", 46)) ;
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
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_varList var_varList_1867 ;
  GALGAS_binaryset var_result_1882 ;
  const GALGAS_graphvizFormula temp_0 = this ;
  GALGAS_uint joker_1869 ; // Joker input parameter
  ioArgument_ioComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_1867, joker_1869, var_result_1882, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 37)) ;
  const GALGAS_graphvizFormula temp_1 = this ;
  GALGAS_string var_filePath_1898 = constinArgument_inSourceFilePath.getter_stringByDeletingPathExtension (SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (temp_1.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 38)) ;
  const GALGAS_graphvizFormula temp_2 = this ;
  inCompiler->printMessage (GALGAS_string ("Graphviz $").add_operation (temp_2.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)).add_operation (var_filePath_1898, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39))  COMMA_SOURCE_FILE ("formula-graphviz.ggs", 39)) ;
  GALGAS_stringlist var_bitNameList_2084 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("formula-graphviz.ggs", 40)) ;
  cEnumerator_varList enumerator_2119 (var_varList_1867, kENUMERATION_DOWN) ;
  while (enumerator_2119.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (kIsEqual, enumerator_2119.current_mBitCount (HERE).objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("formula-graphviz.ggs", 42)).getter_uint (inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 42)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_bitNameList_2084.addAssign_operation (enumerator_2119.current_mVarName (HERE)  COMMA_SOURCE_FILE ("formula-graphviz.ggs", 43)) ;
      }
    }
    if (kBoolFalse == test_3) {
      cEnumerator_range enumerator_2232 (GALGAS_range (GALGAS_uint (uint32_t (0U)), enumerator_2119.current_mBitCount (HERE).substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 45))), kENUMERATION_UP) ;
      while (enumerator_2232.hasCurrentObject ()) {
        var_bitNameList_2084.addAssign_operation (enumerator_2119.current_mVarName (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46)).add_operation (enumerator_2232.current (HERE).getter_string (SOURCE_FILE ("formula-graphviz.ggs", 46)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46))  COMMA_SOURCE_FILE ("formula-graphviz.ggs", 46)) ;
        enumerator_2232.gotoNextObject () ;
      }
    }
    enumerator_2119.gotoNextObject () ;
  }
  GALGAS_string var_s_2310 = var_result_1882.getter_graphviz (var_bitNameList_2084 COMMA_SOURCE_FILE ("formula-graphviz.ggs", 50)) ;
  GALGAS_bool joker_2393 ; // Joker input parameter
  var_s_2310.method_writeToFileWhenDifferentContents (var_filePath_1898, joker_2393, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.ggs", 51)) ;
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
  GALGAS_uint var_idx_11489 ;
  GALGAS_uint var_bitCount_11503 ;
  GALGAS_recordDomainMap var_subdomainMap_11521 ;
  const GALGAS_varInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_11489, var_bitCount_11503, var_subdomainMap_11521, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 354)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_subdomainMap_11521.getter_count (SOURCE_FILE ("expression.ggs", 355)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 355)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 355)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_varInExpression temp_2 = this ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mVarName ().readProperty_location (), GALGAS_string ("variable is a record; use dot notation"), fixItArray3  COMMA_SOURCE_FILE ("expression.ggs", 356)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsNotEqual, var_bitCount_11503.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 357)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 357)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_varInExpression temp_5 = this ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mVarName ().readProperty_location (), GALGAS_string ("variable is not boolean; use {...} or dot notation"), fixItArray6  COMMA_SOURCE_FILE ("expression.ggs", 358)) ;
      }
    }
  }
  result_outResult = GALGAS_binaryset::constructor_binarySetWithBit (var_idx_11489, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 360)) ;
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
  GALGAS_uint var_idx_12192 ;
  GALGAS_uint var_bitCount_12206 ;
  GALGAS_recordDomainMap var_subdomainMap_12224 ;
  const GALGAS_varBitInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_12192, var_bitCount_12206, var_subdomainMap_12224, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 372)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsStrictSup, var_subdomainMap_12224.getter_count (SOURCE_FILE ("expression.ggs", 373)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 373)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 373)))).boolEnum () ;
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
      test_4 = GALGAS_bool (kIsInfOrEqual, var_bitCount_12206.objectCompare (temp_5.readProperty_mVarBit ().readProperty_uint ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_varBitInExpression temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mVarBit ().readProperty_location (), GALGAS_string ("bit index should be < ").add_operation (var_bitCount_12206.getter_string (SOURCE_FILE ("expression.ggs", 376)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 376)), fixItArray7  COMMA_SOURCE_FILE ("expression.ggs", 376)) ;
      }
    }
  }
  const GALGAS_varBitInExpression temp_8 = this ;
  result_outResult = GALGAS_binaryset::constructor_binarySetWithBit (var_idx_12192.add_operation (temp_8.readProperty_mVarBit ().readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 378)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 378)) ;
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
  GALGAS_binaryset var_left_12852 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 390)) ;
  const GALGAS_andExpression temp_1 = this ;
  GALGAS_binaryset var_right_12971 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 391)) ;
  result_outResult = var_left_12852.operator_and (var_right_12971 COMMA_SOURCE_FILE ("expression.ggs", 392)) ;
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
  GALGAS_binaryset var_left_13449 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 404)) ;
  const GALGAS_orExpression temp_1 = this ;
  GALGAS_binaryset var_right_13568 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 405)) ;
  result_outResult = var_left_13449.operator_or (var_right_13568 COMMA_SOURCE_FILE ("expression.ggs", 406)) ;
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
  GALGAS_binaryset var_left_14047 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 418)) ;
  const GALGAS_xorExpression temp_1 = this ;
  GALGAS_binaryset var_right_14166 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 419)) ;
  result_outResult = var_left_14047.operator_xor (var_right_14166 COMMA_SOURCE_FILE ("expression.ggs", 420)) ;
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
  GALGAS_binaryset var_left_14649 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 432)) ;
  const GALGAS_impliesExpression temp_1 = this ;
  GALGAS_binaryset var_right_14768 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 433)) ;
  result_outResult = var_left_14649.getter_implies (var_right_14768 COMMA_SOURCE_FILE ("expression.ggs", 434)) ;
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
  GALGAS_binaryset var_left_15258 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 446)) ;
  const GALGAS_equalExpression temp_1 = this ;
  GALGAS_binaryset var_right_15377 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 447)) ;
  result_outResult = var_left_15258.operator_xor (var_right_15377 COMMA_SOURCE_FILE ("expression.ggs", 448)).operator_tilde (SOURCE_FILE ("expression.ggs", 448)) ;
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
  GALGAS_binaryset var_left_15864 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 460)) ;
  const GALGAS_notEqualExpression temp_1 = this ;
  GALGAS_binaryset var_right_15983 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 461)) ;
  result_outResult = var_left_15864.operator_xor (var_right_15983 COMMA_SOURCE_FILE ("expression.ggs", 462)) ;
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
  GALGAS_varList var_varList_17820 ;
  GALGAS_uint var_totalBitCount_17846 ;
  GALGAS_binaryset var_formulaValue_17864 ;
  const GALGAS_formulaInExpression temp_0 = this ;
  constinArgument_inComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_17820, var_totalBitCount_17846, var_formulaValue_17864, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 511)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_formulaInExpression temp_2 = this ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mParameterList ().getter_length (SOURCE_FILE ("expression.ggs", 513)).objectCompare (var_varList_17820.getter_length (SOURCE_FILE ("expression.ggs", 513)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_formulaInExpression temp_3 = this ;
      const GALGAS_formulaInExpression temp_4 = this ;
      GALGAS_string temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_varList_17820.getter_length (SOURCE_FILE ("expression.ggs", 515)).objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 515)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_string::makeEmptyString () ;
      }
      const GALGAS_formulaInExpression temp_7 = this ;
      const GALGAS_formulaInExpression temp_8 = this ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, temp_8.readProperty_mParameterList ().getter_length (SOURCE_FILE ("expression.ggs", 517)).objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 517)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 517)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mFormulaName ().readProperty_location (), GALGAS_string ("the $").add_operation (temp_4.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (GALGAS_string (" names "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (var_varList_17820.getter_length (SOURCE_FILE ("expression.ggs", 515)).getter_string (SOURCE_FILE ("expression.ggs", 514)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 514)).add_operation (GALGAS_string (" variable"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (GALGAS_string (", but this call names "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 515)).add_operation (temp_7.readProperty_mParameterList ().getter_length (SOURCE_FILE ("expression.ggs", 517)).getter_string (SOURCE_FILE ("expression.ggs", 516)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 516)).add_operation (GALGAS_string (" variable"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 517)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 517)), fixItArray11  COMMA_SOURCE_FILE ("expression.ggs", 514)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_1) {
    GALGAS_uintlist var_transformationList_18309 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("expression.ggs", 520)) ;
    const GALGAS_formulaInExpression temp_12 = this ;
    cEnumerator_varList enumerator_18353 (var_varList_17820, kENUMERATION_DOWN) ;
    cEnumerator_formulaParameterListInExpression enumerator_18397 (temp_12.readProperty_mParameterList (), kENUMERATION_DOWN) ;
    while (enumerator_18353.hasCurrentObject () && enumerator_18397.hasCurrentObject ()) {
      GALGAS_uint var_parameterIndex_18487 ;
      GALGAS_uint var_parameterBitCount_18512 ;
      GALGAS_recordDomainMap var_subdomainMap_18543 ;
      constinArgument_inVarMap.method_searchKey (enumerator_18397.current_mParameterName (HERE), var_parameterIndex_18487, var_parameterBitCount_18512, var_subdomainMap_18543, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 522)) ;
      cEnumerator_lstringlist enumerator_18565 (enumerator_18397.current_mFieldNames (HERE), kENUMERATION_UP) ;
      while (enumerator_18565.hasCurrentObject ()) {
        GALGAS_uint var_fieldRelativeBitIndex_18656 ;
        GALGAS_recordDomainMap var_fieldSubdomainMap_18698 ;
        var_subdomainMap_18543.method_searchKey (enumerator_18565.current_mValue (HERE), var_fieldRelativeBitIndex_18656, var_parameterBitCount_18512, var_fieldSubdomainMap_18698, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 524)) ;
        var_parameterIndex_18487 = var_parameterIndex_18487.add_operation (var_fieldRelativeBitIndex_18656, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 525)) ;
        var_subdomainMap_18543 = var_fieldSubdomainMap_18698 ;
        enumerator_18565.gotoNextObject () ;
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsNotEqual, enumerator_18353.current_mBitCount (HERE).objectCompare (var_parameterBitCount_18512)).boolEnum () ;
        if (kBoolTrue == test_13) {
          GALGAS_string temp_14 ;
          const enumGalgasBool test_15 = GALGAS_bool (kIsStrictSup, var_parameterBitCount_18512.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 530)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)))).boolEnum () ;
          if (kBoolTrue == test_15) {
            temp_14 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_15) {
            temp_14 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, enumerator_18353.current_mBitCount (HERE).objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 532)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 532)))).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_17) {
            temp_16 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (enumerator_18397.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("this parameter is declared with a size of ").add_operation (var_parameterBitCount_18512.getter_string (SOURCE_FILE ("expression.ggs", 529)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 529)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (temp_14, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (GALGAS_string (", but corresponding formal argument '"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 530)).add_operation (enumerator_18353.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (GALGAS_string ("' is declared with a size of "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (enumerator_18353.current_mBitCount (HERE).getter_string (SOURCE_FILE ("expression.ggs", 531)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 531)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 532)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 532)), fixItArray18  COMMA_SOURCE_FILE ("expression.ggs", 529)) ;
        }
      }
      cEnumerator_range enumerator_19255 (GALGAS_range (GALGAS_uint (uint32_t (0U)), var_parameterBitCount_18512.substract_operation (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 534))), kENUMERATION_UP) ;
      while (enumerator_19255.hasCurrentObject ()) {
        var_transformationList_18309.addAssign_operation (var_parameterIndex_18487.add_operation (enumerator_19255.current (HERE), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 535))  COMMA_SOURCE_FILE ("expression.ggs", 535)) ;
        enumerator_19255.gotoNextObject () ;
      }
      enumerator_18353.gotoNextObject () ;
      enumerator_18397.gotoNextObject () ;
    }
    result_outResult = var_formulaValue_17864.getter_transformedBy (var_transformationList_18309 COMMA_SOURCE_FILE ("expression.ggs", 538)) ;
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
  GALGAS_varMap var_varMap_19757 = constinArgument_inVarMap ;
  GALGAS_uint var_totalBitCount_19794 = constinArgument_inTotalBitCount ;
  GALGAS_varList joker_19868 = GALGAS_varList::constructor_emptyList (SOURCE_FILE ("expression.ggs", 553)) ;
  const GALGAS_existInExpression temp_0 = this ;
  extensionMethod_analyze (temp_0.readProperty_mArgumentList (), constinArgument_inDomainMap, var_varMap_19757, joker_19868, var_totalBitCount_19794, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 553)) ;
  const GALGAS_existInExpression temp_1 = this ;
  GALGAS_binaryset var_r_19894 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_19757, var_totalBitCount_19794, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 554)) ;
  result_outResult = var_r_19894.getter_existOnBitIndexAndBeyond (constinArgument_inTotalBitCount COMMA_SOURCE_FILE ("expression.ggs", 555)) ;
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
  GALGAS_varMap var_varMap_20412 = constinArgument_inVarMap ;
  GALGAS_uint var_totalBitCount_20449 = constinArgument_inTotalBitCount ;
  GALGAS_varList joker_20523 = GALGAS_varList::constructor_emptyList (SOURCE_FILE ("expression.ggs", 569)) ;
  const GALGAS_forAllInExpression temp_0 = this ;
  extensionMethod_analyze (temp_0.readProperty_mArgumentList (), constinArgument_inDomainMap, var_varMap_20412, joker_20523, var_totalBitCount_20449, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 569)) ;
  const GALGAS_forAllInExpression temp_1 = this ;
  GALGAS_binaryset var_r_20549 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_20412, var_totalBitCount_20449, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 570)) ;
  result_outResult = var_r_20549.getter_forAllOnBitIndexAndBeyond (constinArgument_inTotalBitCount COMMA_SOURCE_FILE ("expression.ggs", 571)) ;
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
  GALGAS_uint var_idx_21132 ;
  GALGAS_uint var_bitCount_21148 ;
  GALGAS_recordDomainMap var_subDomainMap_21179 ;
  const GALGAS_comparisonWithConstantInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_21132, var_bitCount_21148, var_subDomainMap_21179, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 583)) ;
  const GALGAS_comparisonWithConstantInExpression temp_1 = this ;
  cEnumerator_lstringlist enumerator_21197 (temp_1.readProperty_mFieldNames (), kENUMERATION_UP) ;
  while (enumerator_21197.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex_21287 ;
    GALGAS_recordDomainMap var_fieldSubdomainMap_21320 ;
    var_subDomainMap_21179.method_searchKey (enumerator_21197.current_mValue (HERE), var_fieldRelativeBitIndex_21287, var_bitCount_21148, var_fieldSubdomainMap_21320, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 585)) ;
    var_idx_21132 = var_idx_21132.add_operation (var_fieldRelativeBitIndex_21287, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 586)) ;
    var_subDomainMap_21179 = var_fieldSubdomainMap_21320 ;
    enumerator_21197.gotoNextObject () ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsStrictSup, var_subDomainMap_21179.getter_count (SOURCE_FILE ("expression.ggs", 589)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 589)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 589)))).boolEnum () ;
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
      test_5 = GALGAS_bool (kIsStrictSup, temp_6.readProperty_mConstant ().readProperty_uint ().getter_significantBitCount (SOURCE_FILE ("expression.ggs", 591)).objectCompare (var_bitCount_21148)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_comparisonWithConstantInExpression temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mConstant ().readProperty_location (), GALGAS_string ("Constant too large (should be < 2**").add_operation (var_bitCount_21148.getter_string (SOURCE_FILE ("expression.ggs", 592)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 592)), fixItArray8  COMMA_SOURCE_FILE ("expression.ggs", 592)) ;
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
          result_outResult = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (var_idx_21132, var_bitCount_21148, temp_10.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 596)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 596)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_notEqual:
        {
          const GALGAS_comparisonWithConstantInExpression temp_11 = this ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithNotEqualToConstant (var_idx_21132, var_bitCount_21148, temp_11.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 598)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 598)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_lowerOrEqual:
        {
          const GALGAS_comparisonWithConstantInExpression temp_12 = this ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithLowerOrEqualToConstant (var_idx_21132, var_bitCount_21148, temp_12.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 600)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 600)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_lowerThan:
        {
          const GALGAS_comparisonWithConstantInExpression temp_13 = this ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictLowerThanConstant (var_idx_21132, var_bitCount_21148, temp_13.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 602)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 602)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_greaterOrEqual:
        {
          const GALGAS_comparisonWithConstantInExpression temp_14 = this ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithGreaterOrEqualToConstant (var_idx_21132, var_bitCount_21148, temp_14.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 604)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 604)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_greaterThan:
        {
          const GALGAS_comparisonWithConstantInExpression temp_15 = this ;
          result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictGreaterThanConstant (var_idx_21132, var_bitCount_21148, temp_15.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.ggs", 606)), inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 606)) ;
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
  GALGAS_uint var_leftIdx_22948 ;
  GALGAS_uint var_leftBitCount_22969 ;
  GALGAS_recordDomainMap var_leftSubDomainMap_23005 ;
  const GALGAS_variableComparisonInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mLeftVarName (), var_leftIdx_22948, var_leftBitCount_22969, var_leftSubDomainMap_23005, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 620)) ;
  const GALGAS_variableComparisonInExpression temp_1 = this ;
  cEnumerator_lstringlist enumerator_23023 (temp_1.readProperty_mLeftFieldNames (), kENUMERATION_UP) ;
  while (enumerator_23023.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex_23121 ;
    GALGAS_recordDomainMap var_fieldSubdomainMap_23158 ;
    var_leftSubDomainMap_23005.method_searchKey (enumerator_23023.current_mValue (HERE), var_fieldRelativeBitIndex_23121, var_leftBitCount_22969, var_fieldSubdomainMap_23158, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 622)) ;
    var_leftIdx_22948 = var_leftIdx_22948.add_operation (var_fieldRelativeBitIndex_23121, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 623)) ;
    var_leftSubDomainMap_23005 = var_fieldSubdomainMap_23158 ;
    enumerator_23023.gotoNextObject () ;
  }
  GALGAS_uint var_rightIdx_23310 ;
  GALGAS_uint var_rightBitCount_23331 ;
  GALGAS_recordDomainMap var_rightSubDomainMap_23367 ;
  const GALGAS_variableComparisonInExpression temp_2 = this ;
  constinArgument_inVarMap.method_searchKey (temp_2.readProperty_mRightVarName (), var_rightIdx_23310, var_rightBitCount_23331, var_rightSubDomainMap_23367, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 626)) ;
  const GALGAS_variableComparisonInExpression temp_3 = this ;
  cEnumerator_lstringlist enumerator_23385 (temp_3.readProperty_mRightFieldNames (), kENUMERATION_UP) ;
  while (enumerator_23385.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex_23485 ;
    GALGAS_recordDomainMap var_fieldSubdomainMap_23523 ;
    var_rightSubDomainMap_23367.method_searchKey (enumerator_23385.current_mValue (HERE), var_fieldRelativeBitIndex_23485, var_rightBitCount_23331, var_fieldSubdomainMap_23523, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 628)) ;
    var_rightIdx_23310 = var_rightIdx_23310.add_operation (var_fieldRelativeBitIndex_23485, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 629)) ;
    var_rightSubDomainMap_23367 = var_fieldSubdomainMap_23523 ;
    enumerator_23385.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsStrictSup, var_leftSubDomainMap_23005.getter_count (SOURCE_FILE ("expression.ggs", 632)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 632)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 632)))).boolEnum () ;
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
      test_7 = GALGAS_bool (kIsStrictSup, var_rightSubDomainMap_23367.getter_count (SOURCE_FILE ("expression.ggs", 634)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 634)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 634)))).boolEnum () ;
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
        test_10 = GALGAS_bool (kIsNotEqual, var_leftBitCount_22969.objectCompare (var_rightBitCount_23331)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_variableComparisonInExpression temp_11 = this ;
          const GALGAS_variableComparisonInExpression temp_12 = this ;
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_leftBitCount_22969.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 638)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 638)))).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string temp_15 ;
          const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, var_rightBitCount_23331.objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 640)).getter_uint (inCompiler COMMA_SOURCE_FILE ("expression.ggs", 640)))).boolEnum () ;
          if (kBoolTrue == test_16) {
            temp_15 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_16) {
            temp_15 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mRightVarName ().readProperty_location (), GALGAS_string ("'").add_operation (temp_12.readProperty_mLeftVarName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 637)).add_operation (GALGAS_string ("' variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 637)).add_operation (var_leftBitCount_22969.getter_string (SOURCE_FILE ("expression.ggs", 637)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 637)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 638)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 638)).add_operation (GALGAS_string (", but this variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 638)).add_operation (var_rightBitCount_23331.getter_string (SOURCE_FILE ("expression.ggs", 639)), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 639)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.ggs", 640)).add_operation (temp_15, inCompiler COMMA_SOURCE_FILE ("expression.ggs", 640)), fixItArray17  COMMA_SOURCE_FILE ("expression.ggs", 637)) ;
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
            result_outResult = GALGAS_binaryset::constructor_binarySetWithEqualComparison (var_leftIdx_22948, var_leftBitCount_22969, var_rightIdx_23310, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 645)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_notEqual:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithNotEqualComparison (var_leftIdx_22948, var_leftBitCount_22969, var_rightIdx_23310, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 647)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_lowerOrEqual:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithLowerOrEqualComparison (var_leftIdx_22948, var_leftBitCount_22969, var_rightIdx_23310, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 649)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_lowerThan:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictLowerComparison (var_leftIdx_22948, var_leftBitCount_22969, var_rightIdx_23310, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 651)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_greaterOrEqual:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithGreaterOrEqualComparison (var_leftIdx_22948, var_leftBitCount_22969, var_rightIdx_23310, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 653)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_greaterThan:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictGreaterComparison (var_leftIdx_22948, var_leftBitCount_22969, var_rightIdx_23310, inCompiler  COMMA_SOURCE_FILE ("expression.ggs", 655)) ;
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
  GALGAS_ast var_ast_828 ;
  var_ast_828.drop () ;
  cGrammar_kerbdd_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_ast_828  COMMA_SOURCE_FILE ("program.ggs", 17)) ;
  GALGAS_domainMap var_domainMap_920 ;
  extensionMethod_analyze (var_ast_828.readProperty_mDomainList (), var_domainMap_920, inCompiler COMMA_SOURCE_FILE ("program.ggs", 19)) ;
  GALGAS_computedFormulaMap var_computedFormulaMap_988 = GALGAS_computedFormulaMap::constructor_emptyMap (SOURCE_FILE ("program.ggs", 21)) ;
  cEnumerator_formulaList enumerator_1008 (var_ast_828.readProperty_mFormulaList (), kENUMERATION_UP) ;
  bool bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 22)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("program.ggs", 22)).getter_uint (inCompiler COMMA_SOURCE_FILE ("program.ggs", 22)))).isValidAndTrue () ;
  if (enumerator_1008.hasCurrentObject () && bool_0) {
    while (enumerator_1008.hasCurrentObject () && bool_0) {
      callExtensionMethod_analyzeFormula ((const cPtr_abstractFormula *) enumerator_1008.current_mFormula (HERE).ptr (), constinArgument_inSourceFile.readProperty_string (), var_domainMap_920, var_computedFormulaMap_988, inCompiler COMMA_SOURCE_FILE ("program.ggs", 23)) ;
      enumerator_1008.gotoNextObject () ;
      if (enumerator_1008.hasCurrentObject ()) {
        bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.ggs", 22)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("program.ggs", 22)).getter_uint (inCompiler COMMA_SOURCE_FILE ("program.ggs", 22)))).isValidAndTrue () ;
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

