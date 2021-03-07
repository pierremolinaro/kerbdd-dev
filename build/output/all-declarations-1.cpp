#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

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
  GALGAS_uint var_leftIdx_21064 ;
  GALGAS_uint var_leftBitCount_21085 ;
  GALGAS_recordDomainMap var_leftSubDomainMap_21121 ;
  const GALGAS_variableComparisonInExpression temp_0 = object ;
  constinArgument_inVarMap.method_searchKey (temp_0.getter_mLeftVarName (HERE), var_leftIdx_21064, var_leftBitCount_21085, var_leftSubDomainMap_21121, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 573)) ;
  const GALGAS_variableComparisonInExpression temp_1 = object ;
  cEnumerator_lstringlist enumerator_21164 (temp_1.getter_mLeftFieldNames (HERE), kENUMERATION_UP) ;
  while (enumerator_21164.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex_21237 ;
    GALGAS_recordDomainMap var_fieldSubdomainMap_21274 ;
    var_leftSubDomainMap_21121.method_searchKey (enumerator_21164.current_mValue (HERE), var_fieldRelativeBitIndex_21237, var_leftBitCount_21085, var_fieldSubdomainMap_21274, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 575)) ;
    var_leftIdx_21064 = var_leftIdx_21064.add_operation (var_fieldRelativeBitIndex_21237, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 576)) ;
    var_leftSubDomainMap_21121 = var_fieldSubdomainMap_21274 ;
    enumerator_21164.gotoNextObject () ;
  }
  GALGAS_uint var_rightIdx_21426 ;
  GALGAS_uint var_rightBitCount_21447 ;
  GALGAS_recordDomainMap var_rightSubDomainMap_21483 ;
  const GALGAS_variableComparisonInExpression temp_2 = object ;
  constinArgument_inVarMap.method_searchKey (temp_2.getter_mRightVarName (HERE), var_rightIdx_21426, var_rightBitCount_21447, var_rightSubDomainMap_21483, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 579)) ;
  const GALGAS_variableComparisonInExpression temp_3 = object ;
  cEnumerator_lstringlist enumerator_21527 (temp_3.getter_mRightFieldNames (HERE), kENUMERATION_UP) ;
  while (enumerator_21527.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex_21601 ;
    GALGAS_recordDomainMap var_fieldSubdomainMap_21639 ;
    var_rightSubDomainMap_21483.method_searchKey (enumerator_21527.current_mValue (HERE), var_fieldRelativeBitIndex_21601, var_rightBitCount_21447, var_fieldSubdomainMap_21639, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 581)) ;
    var_rightIdx_21426 = var_rightIdx_21426.add_operation (var_fieldRelativeBitIndex_21601, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 582)) ;
    var_rightSubDomainMap_21483 = var_fieldSubdomainMap_21639 ;
    enumerator_21527.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsStrictSup, var_leftSubDomainMap_21121.getter_count (SOURCE_FILE ("expression.galgas", 585)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_variableComparisonInExpression temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.getter_mLeftVarName (HERE).getter_location (SOURCE_FILE ("expression.galgas", 586)), GALGAS_string ("variable is a record; use dot notation"), fixItArray6  COMMA_SOURCE_FILE ("expression.galgas", 586)) ;
      result_outResult.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_4) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (kIsStrictSup, var_rightSubDomainMap_21483.getter_count (SOURCE_FILE ("expression.galgas", 587)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_7) {
        const GALGAS_variableComparisonInExpression temp_8 = object ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.getter_mRightVarName (HERE).getter_location (SOURCE_FILE ("expression.galgas", 588)), GALGAS_string ("variable is a record; use dot notation"), fixItArray9  COMMA_SOURCE_FILE ("expression.galgas", 588)) ;
        result_outResult.drop () ; // Release error dropped variable
      }
    }
    if (kBoolFalse == test_7) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsNotEqual, var_leftBitCount_21085.objectCompare (var_rightBitCount_21447)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_variableComparisonInExpression temp_11 = object ;
          const GALGAS_variableComparisonInExpression temp_12 = object ;
          GALGAS_string temp_13 ;
          const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, var_leftBitCount_21085.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_14) {
            temp_13 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_14) {
            temp_13 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string temp_15 ;
          const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, var_rightBitCount_21447.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_16) {
            temp_15 = GALGAS_string ("s") ;
          }else if (kBoolFalse == test_16) {
            temp_15 = GALGAS_string::makeEmptyString () ;
          }
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_11.getter_mRightVarName (HERE).getter_location (SOURCE_FILE ("expression.galgas", 590)), GALGAS_string ("'").add_operation (temp_12.getter_mLeftVarName (HERE).getter_string (SOURCE_FILE ("expression.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 590)).add_operation (GALGAS_string ("' variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 590)).add_operation (var_leftBitCount_21085.getter_string (SOURCE_FILE ("expression.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 590)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 591)).add_operation (temp_13, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 591)).add_operation (GALGAS_string (", but this variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 591)).add_operation (var_rightBitCount_21447.getter_string (SOURCE_FILE ("expression.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 592)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 593)).add_operation (temp_15, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 593)), fixItArray17  COMMA_SOURCE_FILE ("expression.galgas", 590)) ;
          result_outResult.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_10) {
        const GALGAS_variableComparisonInExpression temp_18 = object ;
        switch (temp_18.getter_mComparison (HERE).enumValue ()) {
        case GALGAS_comparison::kNotBuilt:
          break ;
        case GALGAS_comparison::kEnum_equal:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithEqualComparison (var_leftIdx_21064, var_leftBitCount_21085, var_rightIdx_21426, inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 598)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_notEqual:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithNotEqualComparison (var_leftIdx_21064, var_leftBitCount_21085, var_rightIdx_21426, inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 600)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_lowerOrEqual:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithLowerOrEqualComparison (var_leftIdx_21064, var_leftBitCount_21085, var_rightIdx_21426, inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 602)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_lowerThan:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictLowerComparison (var_leftIdx_21064, var_leftBitCount_21085, var_rightIdx_21426, inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 604)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_greaterOrEqual:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithGreaterOrEqualComparison (var_leftIdx_21064, var_leftBitCount_21085, var_rightIdx_21426, inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 606)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_greaterThan:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictGreaterComparison (var_leftIdx_21064, var_leftBitCount_21085, var_rightIdx_21426, inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 608)) ;
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
  GALGAS_ast var_ast_841 ;
  var_ast_841.drop () ;
  cGrammar_kerbdd_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_ast_841  COMMA_SOURCE_FILE ("program.galgas", 17)) ;
  GALGAS_domainMap var_domainMap_916 ;
  extensionMethod_analyze (var_ast_841.getter_mDomainList (HERE), var_domainMap_916, inCompiler COMMA_SOURCE_FILE ("program.galgas", 19)) ;
  GALGAS_computedFormulaMap var_computedFormulaMap_980 = GALGAS_computedFormulaMap::constructor_emptyMap (SOURCE_FILE ("program.galgas", 21)) ;
  cEnumerator_formulaList enumerator_1021 (var_ast_841.getter_mFormulaList (HERE), kENUMERATION_UP) ;
  bool bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 22)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
  if (enumerator_1021.hasCurrentObject () && bool_0) {
    while (enumerator_1021.hasCurrentObject () && bool_0) {
      callExtensionMethod_analyzeFormula ((const cPtr_abstractFormula *) enumerator_1021.current_mFormula (HERE).ptr (), constinArgument_inSourceFile.getter_string (HERE), var_domainMap_916, var_computedFormulaMap_980, inCompiler COMMA_SOURCE_FILE ("program.galgas", 23)) ;
      enumerator_1021.gotoNextObject () ;
      if (enumerator_1021.hasCurrentObject ()) {
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

