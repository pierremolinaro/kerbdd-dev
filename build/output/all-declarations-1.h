#pragma once

//--------------------------------------------------------------------------------------------------

#include "all-predefined-types.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
//  GRAMMAR kerbdd_grammar
//--------------------------------------------------------------------------------------------------

class cGrammar_kerbdd_5F_grammar : public cParser_kerbdd_5F_syntax {
//------------------------------------- 'comparison' non terminal
//--- 'parse' label
  public: virtual void nt_comparison_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_comparison_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_comparison_ (GGS_expression & outArgument0,
                                       Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'expression' non terminal
//--- 'parse' label
  public: virtual void nt_expression_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_expression_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_expression_ (GGS_expression & outArgument0,
                                       Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'factor' non terminal
//--- 'parse' label
  public: virtual void nt_factor_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_factor_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_factor_ (GGS_expression & outArgument0,
                                   Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'recordFields' non terminal
//--- 'parse' label
  public: virtual void nt_recordFields_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_recordFields_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_recordFields_ (GGS_domainFieldList & outArgument0,
                                         Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'start_symbol' non terminal
//--- 'parse' label
  public: virtual void nt_start_5F_symbol_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_start_5F_symbol_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_start_5F_symbol_ (GGS_ast & outArgument0,
                                            Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- Start symbol
  public: static void _performSourceFileParsing_ (Compiler * inCompiler,
                                                  GGS_lstring inFileName,
                                                  GGS_ast & outArgument0
                                                  COMMA_LOCATION_ARGS) ;

  public: static void _performSourceStringParsing_ (Compiler * inCompiler,
                                                    GGS_string inSourceString,
                                                    GGS_string inNameString,
                                                    GGS_ast & outArgument0
                                                    COMMA_LOCATION_ARGS) ;

//--- Indexing
  public: static void performIndexing (Compiler * inCompiler,
                                       const String & inSourceFilePath) ;

//--- Only lexical analysis
  public: static void performOnlyLexicalAnalysis (Compiler * inCompiler,
                                                  const String & inSourceFilePath) ;

//--- Only syntax analysis
  public: static void performOnlySyntaxAnalysis (Compiler * inCompiler,
                                                 const String & inSourceFilePath) ;

//------------------------------------- 'term' non terminal
//--- 'parse' label
  public: virtual void nt_term_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_term_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_term_ (GGS_expression & outArgument0,
                                 Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'topLevelDeClaration' non terminal
//--- 'parse' label
  public: virtual void nt_topLevelDeClaration_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_topLevelDeClaration_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_topLevelDeClaration_ (GGS_ast & ioArgument0,
                                                Lexique_kerbdd_5F_lexique * inCompiler) ;

//------------------------------------- 'type' non terminal
//--- 'parse' label
  public: virtual void nt_type_parse (Lexique_kerbdd_5F_lexique * inCompiler) ;

//--- indexing
  public: virtual void nt_type_indexing (Lexique_kerbdd_5F_lexique * inCompiler) ;

//----------- '' label
  public: virtual void nt_type_ (GGS_bddType & outArgument0,
                                 Lexique_kerbdd_5F_lexique * inCompiler) ;

  public: virtual int32_t select_kerbdd_5F_syntax_0 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_1 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_2 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_3 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_4 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_5 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_6 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_7 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_8 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_9 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_10 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_11 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_12 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_13 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_14 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_15 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_16 (Lexique_kerbdd_5F_lexique *) ;

  public: virtual int32_t select_kerbdd_5F_syntax_17 (Lexique_kerbdd_5F_lexique *) ;
} ;

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//
//Routine 'println?'
//
//--------------------------------------------------------------------------------------------------

void routine_println_3F_ (const class GGS_string constinArgument0,
                          class Compiler * inCompiler
                          COMMA_LOCATION_ARGS) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'print?'
//
//--------------------------------------------------------------------------------------------------

void routine_print_3F_ (const class GGS_string constinArgument0,
                        class Compiler * inCompiler
                        COMMA_LOCATION_ARGS) ;


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

