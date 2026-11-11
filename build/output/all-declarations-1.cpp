#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@andExpression computeExpression'
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
  GGS_binaryset var_left_11892 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 390)) ;
  const GGS_andExpression temp_1 = this ;
  GGS_binaryset var_right_12008 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 391)) ;
  result_outResult = var_left_11892.operator_and (var_right_12008 COMMA_SOURCE_FILE ("expression.galgas4", 392)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@orExpression computeExpression'
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
  GGS_binaryset var_left_12466 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 404)) ;
  const GGS_orExpression temp_1 = this ;
  GGS_binaryset var_right_12582 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 405)) ;
  result_outResult = var_left_12466.operator_or (var_right_12582 COMMA_SOURCE_FILE ("expression.galgas4", 406)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@xorExpression computeExpression'
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
  GGS_binaryset var_left_13041 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 418)) ;
  const GGS_xorExpression temp_1 = this ;
  GGS_binaryset var_right_13157 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 419)) ;
  result_outResult = var_left_13041.operator_xor (var_right_13157 COMMA_SOURCE_FILE ("expression.galgas4", 420)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@impliesExpression computeExpression'
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
  GGS_binaryset var_left_13620 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 432)) ;
  const GGS_impliesExpression temp_1 = this ;
  GGS_binaryset var_right_13736 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 433)) ;
  result_outResult = var_left_13620.getter_implies (var_right_13736 COMMA_SOURCE_FILE ("expression.galgas4", 434)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@equalExpression computeExpression'
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
  GGS_binaryset var_left_14205 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 446)) ;
  const GGS_equalExpression temp_1 = this ;
  GGS_binaryset var_right_14321 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 447)) ;
  result_outResult = var_left_14205.operator_xor (var_right_14321 COMMA_SOURCE_FILE ("expression.galgas4", 448)).operator_tilde (SOURCE_FILE ("expression.galgas4", 448)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@notEqualExpression computeExpression'
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
  GGS_binaryset var_left_14788 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 460)) ;
  const GGS_notEqualExpression temp_1 = this ;
  GGS_binaryset var_right_14904 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 461)) ;
  result_outResult = var_left_14788.operator_xor (var_right_14904 COMMA_SOURCE_FILE ("expression.galgas4", 462)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@complementExpression computeExpression'
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
  result_outResult = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 474)).operator_tilde (SOURCE_FILE ("expression.galgas4", 474)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@trueExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_trueExpression::getter_computeExpression (const GGS_domainMap /* constinArgument__5F_inDomainMap */,
                                                             const GGS_varMap /* constinArgument__5F_inVarMap */,
                                                             const GGS_uint /* constinArgument__5F_inTotalBitCount */,
                                                             const GGS_computedFormulaMap /* constinArgument__5F_inComputedFormulaMap */,
                                                             Compiler */* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  result_outResult = GGS_binaryset::class_func_fullBinarySet (SOURCE_FILE ("expression.galgas4", 486)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@falseExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_falseExpression::getter_computeExpression (const GGS_domainMap /* constinArgument__5F_inDomainMap */,
                                                              const GGS_varMap /* constinArgument__5F_inVarMap */,
                                                              const GGS_uint /* constinArgument__5F_inTotalBitCount */,
                                                              const GGS_computedFormulaMap /* constinArgument__5F_inComputedFormulaMap */,
                                                              Compiler */* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  result_outResult = GGS_binaryset::class_func_emptyBinarySet (SOURCE_FILE ("expression.galgas4", 498)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@formulaInExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_formulaInExpression::getter_computeExpression (const GGS_domainMap /* constinArgument__5F_inDomainMap */,
                                                                  const GGS_varMap constinArgument_inVarMap,
                                                                  const GGS_uint /* constinArgument__5F_inTotalBitCount */,
                                                                  const GGS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  GGS_varList var_varList_16598 ;
  GGS_uint var__5F_totalBitCount_16612 ;
  GGS_binaryset var_formulaValue_16633 ;
  const GGS_formulaInExpression temp_0 = this ;
  constinArgument_inComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_16598, var__5F_totalBitCount_16612, var_formulaValue_16633, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 511)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_formulaInExpression temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression.galgas4", 513)).objectCompare (var_varList_16598.getter_count (SOURCE_FILE ("expression.galgas4", 513)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_formulaInExpression temp_3 = this ;
      const GGS_formulaInExpression temp_4 = this ;
      GGS_string temp_5 ;
      const GalgasBool test_6 = GGS_bool (ComparisonKind::greaterThan, var_varList_16598.getter_count (SOURCE_FILE ("expression.galgas4", 515)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        temp_5 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_6) {
        temp_5 = GGS_string::makeEmptyString () ;
      }
      const GGS_formulaInExpression temp_7 = this ;
      const GGS_formulaInExpression temp_8 = this ;
      GGS_string temp_9 ;
      const GalgasBool test_10 = GGS_bool (ComparisonKind::greaterThan, temp_8.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression.galgas4", 517)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        temp_9 = GGS_string ("s") ;
      }else if (GalgasBool::boolFalse == test_10) {
        temp_9 = GGS_string::makeEmptyString () ;
      }
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mFormulaName ().readProperty_location (), GGS_string ("the $").add_operation (temp_4.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 514)).add_operation (GGS_string (" names "), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 514)).add_operation (var_varList_16598.getter_count (SOURCE_FILE ("expression.galgas4", 515)).getter_string (SOURCE_FILE ("expression.galgas4", 514)), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 514)).add_operation (GGS_string (" variable"), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 515)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 515)).add_operation (GGS_string (", but this call names "), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 515)).add_operation (temp_7.readProperty_mParameterList ().getter_count (SOURCE_FILE ("expression.galgas4", 517)).getter_string (SOURCE_FILE ("expression.galgas4", 516)), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 516)).add_operation (GGS_string (" variable"), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 517)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 517)), fixItArray11  COMMA_SOURCE_FILE ("expression.galgas4", 514)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS__5B_uint_5D_ temp_12 = GGS__5B_uint_5D_::init (inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 520)) ;
    GGS__5B_uint_5D_ var_transformationList_17059 = temp_12 ;
    const GGS_formulaInExpression temp_13 = this ;
    DownEnumerator_varList enumerator_17103 (var_varList_16598) ;
    DownEnumerator_formulaParameterListInExpression enumerator_17129 (temp_13.readProperty_mParameterList ()) ;
    while (enumerator_17103.hasCurrentObject () && enumerator_17129.hasCurrentObject ()) {
      GGS_uint var_parameterIndex_17203 ;
      GGS_uint var_parameterBitCount_17226 ;
      GGS_recordDomainMap var_subdomainMap_17263 ;
      constinArgument_inVarMap.method_searchKey (enumerator_17129.current (HERE).readProperty_mParameterName (), var_parameterIndex_17203, var_parameterBitCount_17226, var_subdomainMap_17263, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 522)) ;
      UpEnumerator__5B_lstring_5D_ enumerator_17307 (enumerator_17129.current (HERE).readProperty_mFieldNames ()) ;
      while (enumerator_17307.hasCurrentObject ()) {
        GGS_uint var_fieldRelativeBitIndex_17370 ;
        GGS_recordDomainMap var_fieldSubdomainMap_17418 ;
        var_subdomainMap_17263.method_searchKey (enumerator_17307.current (HERE), var_fieldRelativeBitIndex_17370, var_parameterBitCount_17226, var_fieldSubdomainMap_17418, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 524)) ;
        var_parameterIndex_17203 = var_parameterIndex_17203.add_operation (var_fieldRelativeBitIndex_17370, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 525)) ;
        var_subdomainMap_17263 = var_fieldSubdomainMap_17418 ;
        enumerator_17307.gotoNextObject () ;
      }
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = GGS_bool (ComparisonKind::notEqual, enumerator_17103.current (HERE).readProperty_mBitCount ().objectCompare (var_parameterBitCount_17226)).boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          GGS_string temp_15 ;
          const GalgasBool test_16 = GGS_bool (ComparisonKind::greaterThan, var_parameterBitCount_17226.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            temp_15 = GGS_string ("s") ;
          }else if (GalgasBool::boolFalse == test_16) {
            temp_15 = GGS_string::makeEmptyString () ;
          }
          GGS_string temp_17 ;
          const GalgasBool test_18 = GGS_bool (ComparisonKind::greaterThan, enumerator_17103.current (HERE).readProperty_mBitCount ().objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_18) {
            temp_17 = GGS_string ("s") ;
          }else if (GalgasBool::boolFalse == test_18) {
            temp_17 = GGS_string::makeEmptyString () ;
          }
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (enumerator_17129.current (HERE).readProperty_mParameterName ().readProperty_location (), GGS_string ("this parameter is declared with a size of ").add_operation (var_parameterBitCount_17226.getter_string (SOURCE_FILE ("expression.galgas4", 529)), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 529)).add_operation (GGS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 530)).add_operation (temp_15, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 530)).add_operation (GGS_string (", but corresponding formal argument '"), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 530)).add_operation (enumerator_17103.current (HERE).readProperty_mVarName (), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 531)).add_operation (GGS_string ("' is declared with a size of "), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 531)).add_operation (enumerator_17103.current (HERE).readProperty_mBitCount ().getter_string (SOURCE_FILE ("expression.galgas4", 531)), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 531)).add_operation (GGS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 532)).add_operation (temp_17, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 532)), fixItArray19  COMMA_SOURCE_FILE ("expression.galgas4", 529)) ;
        }
      }
      UpEnumerator_range enumerator_18006 (GGS_range (GGS_uint (uint32_t (0U)), var_parameterBitCount_17226.substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 535)))) ;
      while (enumerator_18006.hasCurrentObject ()) {
        {
        var_transformationList_17059.setter_append (var_parameterIndex_17203.add_operation (enumerator_18006.current (HERE), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 536)), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 536)) ;
        }
        enumerator_18006.gotoNextObject () ;
      }
      enumerator_17103.gotoNextObject () ;
      enumerator_17129.gotoNextObject () ;
    }
    result_outResult = var_formulaValue_16633.getter_transformedBy (var_transformationList_17059 COMMA_SOURCE_FILE ("expression.galgas4", 539)) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@existInExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_existInExpression::getter_computeExpression (const GGS_domainMap constinArgument_inDomainMap,
                                                                const GGS_varMap constinArgument_inVarMap,
                                                                const GGS_uint constinArgument_inTotalBitCount,
                                                                const GGS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  GGS_varMap var_varMap_18505 = constinArgument_inVarMap ;
  GGS_uint var_totalBitCount_18535 = constinArgument_inTotalBitCount ;
  GGS_varList var_unusedVarList_18574 = GGS_varList::init (inCompiler COMMA_HERE) ;
  const GGS_existInExpression temp_0 = this ;
  extensionMethod_analyze (temp_0.readProperty_mArgumentList (), constinArgument_inDomainMap, var_varMap_18505, var_unusedVarList_18574, var_totalBitCount_18535, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 555)) ;
  const GGS_existInExpression temp_1 = this ;
  GGS_binaryset var_r_18695 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_18505, var_totalBitCount_18535, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 556)) ;
  result_outResult = var_r_18695.getter_existOnBitIndexAndBeyond (constinArgument_inTotalBitCount COMMA_SOURCE_FILE ("expression.galgas4", 557)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@forAllInExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_forAllInExpression::getter_computeExpression (const GGS_domainMap constinArgument_inDomainMap,
                                                                 const GGS_varMap constinArgument_inVarMap,
                                                                 const GGS_uint constinArgument_inTotalBitCount,
                                                                 const GGS_computedFormulaMap constinArgument_inComputedFormulaMap,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  GGS_varMap var_varMap_19186 = constinArgument_inVarMap ;
  GGS_uint var_totalBitCount_19216 = constinArgument_inTotalBitCount ;
  GGS_varList var_unusedVarList_19255 = GGS_varList::init (inCompiler COMMA_HERE) ;
  const GGS_forAllInExpression temp_0 = this ;
  extensionMethod_analyze (temp_0.readProperty_mArgumentList (), constinArgument_inDomainMap, var_varMap_19186, var_unusedVarList_19255, var_totalBitCount_19216, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 572)) ;
  const GGS_forAllInExpression temp_1 = this ;
  GGS_binaryset var_r_19376 = callExtensionGetter_computeExpression ((const cPtr_expression *) temp_1.readProperty_mExpression ().ptr (), constinArgument_inDomainMap, var_varMap_19186, var_totalBitCount_19216, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 573)) ;
  result_outResult = var_r_19376.getter_forAllOnBitIndexAndBeyond (constinArgument_inTotalBitCount COMMA_SOURCE_FILE ("expression.galgas4", 574)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@comparisonWithConstantInExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_comparisonWithConstantInExpression::getter_computeExpression (const GGS_domainMap /* constinArgument__5F_inDomainMap */,
                                                                                 const GGS_varMap constinArgument_inVarMap,
                                                                                 const GGS_uint /* constinArgument__5F_inTotalBitCount */,
                                                                                 const GGS_computedFormulaMap /* constinArgument__5F_inComputedFormulaMap */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  GGS_uint var_idx_19917 ;
  GGS_uint var_bitCount_19929 ;
  GGS_recordDomainMap var_subDomainMap_19957 ;
  const GGS_comparisonWithConstantInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mVarName (), var_idx_19917, var_bitCount_19929, var_subDomainMap_19957, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 586)) ;
  const GGS_comparisonWithConstantInExpression temp_1 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_19995 (temp_1.readProperty_mFieldNames ()) ;
  while (enumerator_19995.hasCurrentObject ()) {
    GGS_uint var_fieldRelativeBitIndex_20054 ;
    GGS_recordDomainMap var_fieldSubdomainMap_20093 ;
    var_subDomainMap_19957.method_searchKey (enumerator_19995.current (HERE), var_fieldRelativeBitIndex_20054, var_bitCount_19929, var_fieldSubdomainMap_20093, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 588)) ;
    var_idx_19917 = var_idx_19917.add_operation (var_fieldRelativeBitIndex_20054, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 589)) ;
    var_subDomainMap_19957 = var_fieldSubdomainMap_20093 ;
    enumerator_19995.gotoNextObject () ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_subDomainMap_19957.getter_count (SOURCE_FILE ("expression.galgas4", 592)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_comparisonWithConstantInExpression temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mVarName ().readProperty_location (), GGS_string ("variable is a record; use dot notation"), fixItArray4  COMMA_SOURCE_FILE ("expression.galgas4", 593)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_comparisonWithConstantInExpression temp_6 = this ;
      test_5 = GGS_bool (ComparisonKind::greaterThan, temp_6.readProperty_mConstant ().readProperty_uint ().getter_significantBitCount (SOURCE_FILE ("expression.galgas4", 594)).objectCompare (var_bitCount_19929)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_comparisonWithConstantInExpression temp_7 = this ;
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mConstant ().readProperty_location (), GGS_string ("Constant too large (should be < 2**").add_operation (var_bitCount_19929.getter_string (SOURCE_FILE ("expression.galgas4", 595)), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 595)), fixItArray8  COMMA_SOURCE_FILE ("expression.galgas4", 595)) ;
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
          result_outResult = GGS_binaryset::class_func_binarySetWithEqualToConstant (var_idx_19917, var_bitCount_19929, temp_10.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.galgas4", 599)), inCompiler  COMMA_SOURCE_FILE ("expression.galgas4", 599)) ;
        }
        break ;
      case GGS_comparison::Enumeration::enum_notEqual:
        {
          const GGS_comparisonWithConstantInExpression temp_11 = this ;
          result_outResult = GGS_binaryset::class_func_binarySetWithNotEqualToConstant (var_idx_19917, var_bitCount_19929, temp_11.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.galgas4", 601)), inCompiler  COMMA_SOURCE_FILE ("expression.galgas4", 601)) ;
        }
        break ;
      case GGS_comparison::Enumeration::enum_lowerOrEqual:
        {
          const GGS_comparisonWithConstantInExpression temp_12 = this ;
          result_outResult = GGS_binaryset::class_func_binarySetWithLowerOrEqualToConstant (var_idx_19917, var_bitCount_19929, temp_12.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.galgas4", 603)), inCompiler  COMMA_SOURCE_FILE ("expression.galgas4", 603)) ;
        }
        break ;
      case GGS_comparison::Enumeration::enum_lowerThan:
        {
          const GGS_comparisonWithConstantInExpression temp_13 = this ;
          result_outResult = GGS_binaryset::class_func_binarySetWithStrictLowerThanConstant (var_idx_19917, var_bitCount_19929, temp_13.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.galgas4", 605)), inCompiler  COMMA_SOURCE_FILE ("expression.galgas4", 605)) ;
        }
        break ;
      case GGS_comparison::Enumeration::enum_greaterOrEqual:
        {
          const GGS_comparisonWithConstantInExpression temp_14 = this ;
          result_outResult = GGS_binaryset::class_func_binarySetWithGreaterOrEqualToConstant (var_idx_19917, var_bitCount_19929, temp_14.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.galgas4", 607)), inCompiler  COMMA_SOURCE_FILE ("expression.galgas4", 607)) ;
        }
        break ;
      case GGS_comparison::Enumeration::enum_greaterThan:
        {
          const GGS_comparisonWithConstantInExpression temp_15 = this ;
          result_outResult = GGS_binaryset::class_func_binarySetWithStrictGreaterThanConstant (var_idx_19917, var_bitCount_19929, temp_15.readProperty_mConstant ().readProperty_uint ().getter_uint_36__34_ (SOURCE_FILE ("expression.galgas4", 609)), inCompiler  COMMA_SOURCE_FILE ("expression.galgas4", 609)) ;
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
//Overriding extension func '@variableComparisonInExpression computeExpression'
//
//--------------------------------------------------------------------------------------------------

GGS_binaryset cPtr_variableComparisonInExpression::getter_computeExpression (const GGS_domainMap /* constinArgument__5F_inDomainMap */,
                                                                             const GGS_varMap constinArgument_inVarMap,
                                                                             const GGS_uint /* constinArgument__5F_inTotalBitCount */,
                                                                             const GGS_computedFormulaMap /* constinArgument__5F_inComputedFormulaMap */,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_binaryset result_outResult ; // Returned variable
  GGS_uint var_leftIdx_21681 ;
  GGS_uint var_leftBitCount_21698 ;
  GGS_recordDomainMap var_leftSubDomainMap_21731 ;
  const GGS_variableComparisonInExpression temp_0 = this ;
  constinArgument_inVarMap.method_searchKey (temp_0.readProperty_mLeftVarName (), var_leftIdx_21681, var_leftBitCount_21698, var_leftSubDomainMap_21731, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 623)) ;
  const GGS_variableComparisonInExpression temp_1 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_21773 (temp_1.readProperty_mLeftFieldNames ()) ;
  while (enumerator_21773.hasCurrentObject ()) {
    GGS_uint var_fieldRelativeBitIndex_21840 ;
    GGS_recordDomainMap var_fieldSubdomainMap_21883 ;
    var_leftSubDomainMap_21731.method_searchKey (enumerator_21773.current (HERE), var_fieldRelativeBitIndex_21840, var_leftBitCount_21698, var_fieldSubdomainMap_21883, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 625)) ;
    var_leftIdx_21681 = var_leftIdx_21681.add_operation (var_fieldRelativeBitIndex_21840, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 626)) ;
    var_leftSubDomainMap_21731 = var_fieldSubdomainMap_21883 ;
    enumerator_21773.gotoNextObject () ;
  }
  GGS_uint var_rightIdx_22044 ;
  GGS_uint var_rightBitCount_22061 ;
  GGS_recordDomainMap var_rightSubDomainMap_22094 ;
  const GGS_variableComparisonInExpression temp_2 = this ;
  constinArgument_inVarMap.method_searchKey (temp_2.readProperty_mRightVarName (), var_rightIdx_22044, var_rightBitCount_22061, var_rightSubDomainMap_22094, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 629)) ;
  const GGS_variableComparisonInExpression temp_3 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_22137 (temp_3.readProperty_mRightFieldNames ()) ;
  while (enumerator_22137.hasCurrentObject ()) {
    GGS_uint var_fieldRelativeBitIndex_22206 ;
    GGS_recordDomainMap var_fieldSubdomainMap_22250 ;
    var_rightSubDomainMap_22094.method_searchKey (enumerator_22137.current (HERE), var_fieldRelativeBitIndex_22206, var_rightBitCount_22061, var_fieldSubdomainMap_22250, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 631)) ;
    var_rightIdx_22044 = var_rightIdx_22044.add_operation (var_fieldRelativeBitIndex_22206, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 632)) ;
    var_rightSubDomainMap_22094 = var_fieldSubdomainMap_22250 ;
    enumerator_22137.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::greaterThan, var_leftSubDomainMap_21731.getter_count (SOURCE_FILE ("expression.galgas4", 635)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_variableComparisonInExpression temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mLeftVarName ().readProperty_location (), GGS_string ("variable is a record; use dot notation"), fixItArray6  COMMA_SOURCE_FILE ("expression.galgas4", 636)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::greaterThan, var_rightSubDomainMap_22094.getter_count (SOURCE_FILE ("expression.galgas4", 637)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        const GGS_variableComparisonInExpression temp_8 = this ;
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mRightVarName ().readProperty_location (), GGS_string ("variable is a record; use dot notation"), fixItArray9  COMMA_SOURCE_FILE ("expression.galgas4", 638)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_7) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = GGS_bool (ComparisonKind::notEqual, var_leftBitCount_21698.objectCompare (var_rightBitCount_22061)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_variableComparisonInExpression temp_11 = this ;
          const GGS_variableComparisonInExpression temp_12 = this ;
          GGS_string temp_13 ;
          const GalgasBool test_14 = GGS_bool (ComparisonKind::greaterThan, var_leftBitCount_21698.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_14) {
            temp_13 = GGS_string ("s") ;
          }else if (GalgasBool::boolFalse == test_14) {
            temp_13 = GGS_string::makeEmptyString () ;
          }
          GGS_string temp_15 ;
          const GalgasBool test_16 = GGS_bool (ComparisonKind::greaterThan, var_rightBitCount_22061.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            temp_15 = GGS_string ("s") ;
          }else if (GalgasBool::boolFalse == test_16) {
            temp_15 = GGS_string::makeEmptyString () ;
          }
          GenericArray <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mRightVarName ().readProperty_location (), GGS_string ("'").add_operation (temp_12.readProperty_mLeftVarName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 640)).add_operation (GGS_string ("' variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 640)).add_operation (var_leftBitCount_21698.getter_string (SOURCE_FILE ("expression.galgas4", 640)), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 640)).add_operation (GGS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 641)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 641)).add_operation (GGS_string (", but this variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 641)).add_operation (var_rightBitCount_22061.getter_string (SOURCE_FILE ("expression.galgas4", 642)), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 642)).add_operation (GGS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 643)).add_operation (temp_15, inCompiler COMMA_SOURCE_FILE ("expression.galgas4", 643)), fixItArray17  COMMA_SOURCE_FILE ("expression.galgas4", 640)) ;
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
            result_outResult = GGS_binaryset::class_func_binarySetWithEqualComparison (var_leftIdx_21681, var_leftBitCount_21698, var_rightIdx_22044, inCompiler  COMMA_SOURCE_FILE ("expression.galgas4", 648)) ;
          }
          break ;
        case GGS_comparison::Enumeration::enum_notEqual:
          {
            result_outResult = GGS_binaryset::class_func_binarySetWithNotEqualComparison (var_leftIdx_21681, var_leftBitCount_21698, var_rightIdx_22044, inCompiler  COMMA_SOURCE_FILE ("expression.galgas4", 650)) ;
          }
          break ;
        case GGS_comparison::Enumeration::enum_lowerOrEqual:
          {
            result_outResult = GGS_binaryset::class_func_binarySetWithLowerOrEqualComparison (var_leftIdx_21681, var_leftBitCount_21698, var_rightIdx_22044, inCompiler  COMMA_SOURCE_FILE ("expression.galgas4", 652)) ;
          }
          break ;
        case GGS_comparison::Enumeration::enum_lowerThan:
          {
            result_outResult = GGS_binaryset::class_func_binarySetWithStrictLowerComparison (var_leftIdx_21681, var_leftBitCount_21698, var_rightIdx_22044, inCompiler  COMMA_SOURCE_FILE ("expression.galgas4", 654)) ;
          }
          break ;
        case GGS_comparison::Enumeration::enum_greaterOrEqual:
          {
            result_outResult = GGS_binaryset::class_func_binarySetWithGreaterOrEqualComparison (var_leftIdx_21681, var_leftBitCount_21698, var_rightIdx_22044, inCompiler  COMMA_SOURCE_FILE ("expression.galgas4", 656)) ;
          }
          break ;
        case GGS_comparison::Enumeration::enum_greaterThan:
          {
            result_outResult = GGS_binaryset::class_func_binarySetWithStrictGreaterComparison (var_leftIdx_21681, var_leftBitCount_21698, var_rightIdx_22044, inCompiler  COMMA_SOURCE_FILE ("expression.galgas4", 658)) ;
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
//Overriding extension proc '@graphvizFormula analyzeFormula'
//--------------------------------------------------------------------------------------------------

void cPtr_graphvizFormula::method_analyzeFormula (const GGS_string constinArgument_inSourceFilePath,
                                                  const GGS_domainMap /* constinArgument__5F_inDomainMap */,
                                                  GGS_computedFormulaMap & ioArgument_ioComputedFormulaMap,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_varList var_varList_1683 ;
  GGS_binaryset var_result_1701 ;
  const GGS_graphvizFormula temp_0 = this ;
  GGS_uint joker_1692 ; // Joker input parameter
  ioArgument_ioComputedFormulaMap.method_searchKey (temp_0.readProperty_mFormulaName (), var_varList_1683, joker_1692, var_result_1701, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas4", 37)) ;
  const GGS_graphvizFormula temp_1 = this ;
  GGS_string var_filePath_1715 = constinArgument_inSourceFilePath.getter_deletingPathExtension (SOURCE_FILE ("formula-graphviz.galgas4", 38)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas4", 38)).add_operation (temp_1.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas4", 38)).add_operation (GGS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas4", 38)) ;
  {
  const GGS_graphvizFormula temp_2 = this ;
  routine_println_3F_ (GGS_string ("Graphviz $").add_operation (temp_2.readProperty_mFormulaName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas4", 39)).add_operation (GGS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas4", 39)).add_operation (var_filePath_1715, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas4", 39)), inCompiler  COMMA_SOURCE_FILE ("formula-graphviz.galgas4", 39)) ;
  }
  GGS__5B_string_5D_ temp_3 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas4", 40)) ;
  GGS__5B_string_5D_ var_bitNameList_1881 = temp_3 ;
  DownEnumerator_varList enumerator_1920 (var_varList_1683) ;
  while (enumerator_1920.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::equal, enumerator_1920.current_mBitCount (HERE).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        var_bitNameList_1881.plusPlusAssignOperation (enumerator_1920.current_mVarName (HERE)  COMMA_SOURCE_FILE ("formula-graphviz.galgas4", 43)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      UpEnumerator_range enumerator_2033 (GGS_range (GGS_uint (uint32_t (0U)), enumerator_1920.current_mBitCount (HERE).substract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas4", 45)))) ;
      while (enumerator_2033.hasCurrentObject ()) {
        var_bitNameList_1881.plusPlusAssignOperation (enumerator_1920.current_mVarName (HERE).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas4", 46)).add_operation (enumerator_2033.current (HERE).getter_string (SOURCE_FILE ("formula-graphviz.galgas4", 46)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas4", 46))  COMMA_SOURCE_FILE ("formula-graphviz.galgas4", 46)) ;
        enumerator_2033.gotoNextObject () ;
      }
    }
    enumerator_1920.gotoNextObject () ;
  }
  GGS_string var_s_2119 = var_result_1701.getter_graphviz (var_bitNameList_1881 COMMA_SOURCE_FILE ("formula-graphviz.galgas4", 50)) ;
  GGS_bool joker_2201 ; // Joker input parameter
  var_s_2119.method_writeToFileWhenDifferentContents (var_filePath_1715, joker_2201, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas4", 51)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@setting_nodeHashMapSize analyzeFormula'
//--------------------------------------------------------------------------------------------------

void cPtr_setting_5F_nodeHashMapSize::method_analyzeFormula (const GGS_string /* constinArgument__5F_inSourceFilePath */,
                                                             const GGS_domainMap /* constinArgument__5F_inDomainMap */,
                                                             GGS_computedFormulaMap & /* ioArgument__5F_ioComputedFormulaMap */,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_setting_5F_nodeHashMapSize temp_0 = this ;
  GGS_binaryset::class_method_setNodeTableSize (temp_0.readProperty_mSetting ().readProperty_uint () COMMA_SOURCE_FILE ("setting-map.galgas4", 52)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@setting_andCacheMapSize analyzeFormula'
//--------------------------------------------------------------------------------------------------

void cPtr_setting_5F_andCacheMapSize::method_analyzeFormula (const GGS_string /* constinArgument__5F_inSourceFilePath */,
                                                             const GGS_domainMap /* constinArgument__5F_inDomainMap */,
                                                             GGS_computedFormulaMap & /* ioArgument__5F_ioComputedFormulaMap */,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_setting_5F_andCacheMapSize temp_0 = this ;
  GGS_binaryset::class_method_setAndTableSize (temp_0.readProperty_mSetting ().readProperty_uint () COMMA_SOURCE_FILE ("setting-map.galgas4", 62)) ;
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
  GGS_ast var_ast_767 ;
  var_ast_767.drop () ;
  cGrammar_kerbdd_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_ast_767  COMMA_SOURCE_FILE ("program.galgas4", 17)) ;
  GGS_domainMap var_domainMap_854 ;
  extensionMethod_analyze (var_ast_767.readProperty_mDomainList (), var_domainMap_854, inCompiler COMMA_SOURCE_FILE ("program.galgas4", 19)) ;
  GGS_computedFormulaMap var_computedFormulaMap_914 = GGS_computedFormulaMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_formulaList enumerator_959 (var_ast_767.readProperty_mFormulaList ()) ;
  bool bool_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas4", 22)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_959.hasCurrentObject () && bool_0) {
    while (enumerator_959.hasCurrentObject () && bool_0) {
      callExtensionMethod_analyzeFormula ((cPtr_abstractFormula *) enumerator_959.current (HERE).readProperty_mFormula ().ptr (), constinArgument_inSourceFile.readProperty_string (), var_domainMap_854, var_computedFormulaMap_914, inCompiler COMMA_SOURCE_FILE ("program.galgas4", 23)) ;
      enumerator_959.gotoNextObject () ;
      if (enumerator_959.hasCurrentObject ()) {
        bool_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.galgas4", 22)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
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

