#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-0.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     L E X I Q U E                                                                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"

//---------------------------------------------------------------------------------------------------------------------*

cTokenFor_kerbdd_5F_lexique::cTokenFor_kerbdd_5F_lexique (void) :
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value () {
}

//---------------------------------------------------------------------------------------------------------------------*

C_Lexique_kerbdd_5F_lexique::C_Lexique_kerbdd_5F_lexique (C_Compiler * inCallerCompiler,
                                                          const C_String & inDependencyFileExtension,
                                                          const C_String & inDependencyFilePath,
                                                          const C_String & inSourceFileName
                                                          COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inDependencyFileExtension, inDependencyFilePath, inSourceFileName COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

C_Lexique_kerbdd_5F_lexique::C_Lexique_kerbdd_5F_lexique (C_Compiler * inCallerCompiler,
                                                          const C_String & inSourceString,
                                                          const C_String & inStringForError
                                                          COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*
//                 I N D E X I N G    D I R E C T O R Y                                                                *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_kerbdd_5F_lexique::indexingDirectory (void) const {
  return "" ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                        Lexical error message list                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

static const char * gLexicalMessage_kerbdd_5F_lexique_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_kerbdd_5F_lexique_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_kerbdd_5F_lexique_internalError = "internal error" ;

//---------------------------------------------------------------------------------------------------------------------*
//          Syntax error messages, for every terminal symbol                                                           *
//---------------------------------------------------------------------------------------------------------------------*

//--- Syntax error message for terminal '$identifier$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique_identifier = "an identifier" ;

//--- Syntax error message for terminal '$integer$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique_integer = "a 32-bit unsigned decimal number" ;

//--- Syntax error message for terminal '$literal_string$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique_literal_5F_string = "a character string constant \"...\"" ;

//--- Syntax error message for terminal '$comment$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique_comment = "a comment" ;

//--- Syntax error message for terminal '$nodeHashMapSize$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique_nodeHashMapSize = "the 'nodeHashMapSize' keyword" ;

//--- Syntax error message for terminal '$andCacheMapSize$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique_andCacheMapSize = "the 'andCacheMapSize' keyword" ;

//--- Syntax error message for terminal '$domain$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique_domain = "the 'domain' keyword" ;

//--- Syntax error message for terminal '$bool$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique_bool = "the 'bool' keyword" ;

//--- Syntax error message for terminal '$true$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique_true = "the 'true' keyword" ;

//--- Syntax error message for terminal '$false$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique_false = "the 'false' keyword" ;

//--- Syntax error message for terminal '$display$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique_display = "the 'display' keyword" ;

//--- Syntax error message for terminal '$include$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique_include = "the 'include' keyword" ;

//--- Syntax error message for terminal '$graphviz$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique_graphviz = "the 'graphviz' keyword" ;

//--- Syntax error message for terminal '$dump$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique_dump = "the 'dump' keyword" ;

//--- Syntax error message for terminal '$($' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__28_ = "the '(' delimitor" ;

//--- Syntax error message for terminal '$)$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__29_ = "the ')' delimitor" ;

//--- Syntax error message for terminal '$[$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__5B_ = "the '[' delimitor" ;

//--- Syntax error message for terminal '$]$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__5D_ = "the ']' delimitor" ;

//--- Syntax error message for terminal '${$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__7B_ = "the '{' delimitor" ;

//--- Syntax error message for terminal '$}$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__7D_ = "the '}' delimitor" ;

//--- Syntax error message for terminal '$:=$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__3A__3D_ = "the ':=' delimitor" ;

//--- Syntax error message for terminal '$:$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__3A_ = "the ':' delimitor" ;

//--- Syntax error message for terminal '$.$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__2E_ = "the '.' delimitor" ;

//--- Syntax error message for terminal '$..$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__2E__2E_ = "the '..' delimitor" ;

//--- Syntax error message for terminal '$+=$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__2B__3D_ = "the '+=' delimitor" ;

//--- Syntax error message for terminal '$-=$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__2D__3D_ = "the '-=' delimitor" ;

//--- Syntax error message for terminal '$->$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__2D__3E_ = "the '->' delimitor" ;

//--- Syntax error message for terminal '$&$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__26_ = "the '&' delimitor" ;

//--- Syntax error message for terminal '$|$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__7C_ = "the '|' delimitor" ;

//--- Syntax error message for terminal '$^$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__5E_ = "the '^' delimitor" ;

//--- Syntax error message for terminal '$~$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__7E_ = "the '~' delimitor" ;

//--- Syntax error message for terminal '$,$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__2C_ = "the ',' delimitor" ;

//--- Syntax error message for terminal '$?$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__3F_ = "the '\?' delimitor" ;

//--- Syntax error message for terminal '$!$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__21_ = "the '!' delimitor" ;

//--- Syntax error message for terminal '$;$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__3B_ = "the ';' delimitor" ;

//--- Syntax error message for terminal '$=$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__3D_ = "the '=' delimitor" ;

//--- Syntax error message for terminal '$!=$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__21__3D_ = "the '!=' delimitor" ;

//--- Syntax error message for terminal '$<$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__3C_ = "the '<' delimitor" ;

//--- Syntax error message for terminal '$<=$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__3C__3D_ = "the '<=' delimitor" ;

//--- Syntax error message for terminal '$>$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__3E_ = "the '>' delimitor" ;

//--- Syntax error message for terminal '$>=$' :
static const char * gSyntaxErrorMessage_kerbdd_5F_lexique__3E__3D_ = "the '>=' delimitor" ;

//---------------------------------------------------------------------------------------------------------------------*
//                getMessageForTerminal                                                                                *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_kerbdd_5F_lexique::getMessageForTerminal (const int16_t inTerminalIndex) const {
  static const char * syntaxErrorMessageArray [42] = {kEndOfSourceLexicalErrorMessage,
    gSyntaxErrorMessage_kerbdd_5F_lexique_identifier,
    gSyntaxErrorMessage_kerbdd_5F_lexique_integer,
    gSyntaxErrorMessage_kerbdd_5F_lexique_literal_5F_string,
    gSyntaxErrorMessage_kerbdd_5F_lexique_comment,
    gSyntaxErrorMessage_kerbdd_5F_lexique_nodeHashMapSize,
    gSyntaxErrorMessage_kerbdd_5F_lexique_andCacheMapSize,
    gSyntaxErrorMessage_kerbdd_5F_lexique_domain,
    gSyntaxErrorMessage_kerbdd_5F_lexique_bool,
    gSyntaxErrorMessage_kerbdd_5F_lexique_true,
    gSyntaxErrorMessage_kerbdd_5F_lexique_false,
    gSyntaxErrorMessage_kerbdd_5F_lexique_display,
    gSyntaxErrorMessage_kerbdd_5F_lexique_include,
    gSyntaxErrorMessage_kerbdd_5F_lexique_graphviz,
    gSyntaxErrorMessage_kerbdd_5F_lexique_dump,
    gSyntaxErrorMessage_kerbdd_5F_lexique__28_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__29_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__5B_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__5D_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__7B_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__7D_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__3A__3D_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__3A_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__2E_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__2E__2E_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__2B__3D_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__2D__3D_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__2D__3E_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__26_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__7C_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__5E_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__7E_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__2C_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__3F_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__21_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__3B_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__3D_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__21__3D_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__3C_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__3C__3D_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__3E_,
    gSyntaxErrorMessage_kerbdd_5F_lexique__3E__3D_} ;
  return syntaxErrorMessageArray [inTerminalIndex] ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                      U N I C O D E    S T R I N G S                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

//--- Unicode string for '$_21_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__21_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__3D_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__21__3D_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_28_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__28_ [] = {
  TO_UNICODE ('('),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_29_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__29_ [] = {
  TO_UNICODE (')'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__3D_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__2B__3D_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2C_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__2C_ [] = {
  TO_UNICODE (','),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3D_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__2D__3D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3E_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__2D__3E_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E__2E_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__2E__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__3A_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A__3D_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__3A__3D_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3B_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__3B_ [] = {
  TO_UNICODE (';'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__3C_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3C__3D_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__3C__3D_ [] = {
  TO_UNICODE ('<'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3D_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__3E__3D_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3F_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__3F_ [] = {
  TO_UNICODE ('\?'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5B_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__5B_ [] = {
  TO_UNICODE ('['),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5D_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__5D_ [] = {
  TO_UNICODE (']'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5E_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__5E_ [] = {
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$andCacheMapSize$'
static const utf32 kUnicodeString_kerbdd_5F_lexique_andCacheMapSize [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('C'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('M'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('S'),
  TO_UNICODE ('i'),
  TO_UNICODE ('z'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bool$'
static const utf32 kUnicodeString_kerbdd_5F_lexique_bool [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$display$'
static const utf32 kUnicodeString_kerbdd_5F_lexique_display [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$domain$'
static const utf32 kUnicodeString_kerbdd_5F_lexique_domain [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$dump$'
static const utf32 kUnicodeString_kerbdd_5F_lexique_dump [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$false$'
static const utf32 kUnicodeString_kerbdd_5F_lexique_false [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$graphviz$'
static const utf32 kUnicodeString_kerbdd_5F_lexique_graphviz [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('h'),
  TO_UNICODE ('v'),
  TO_UNICODE ('i'),
  TO_UNICODE ('z'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$include$'
static const utf32 kUnicodeString_kerbdd_5F_lexique_include [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$nodeHashMapSize$'
static const utf32 kUnicodeString_kerbdd_5F_lexique_nodeHashMapSize [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('H'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('h'),
  TO_UNICODE ('M'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('S'),
  TO_UNICODE ('i'),
  TO_UNICODE ('z'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$true$'
static const utf32 kUnicodeString_kerbdd_5F_lexique_true [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7B_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__7B_ [] = {
  TO_UNICODE ('{'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7D_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__7D_ [] = {
  TO_UNICODE ('}'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7E_$'
static const utf32 kUnicodeString_kerbdd_5F_lexique__7E_ [] = {
  TO_UNICODE ('~'),
  TO_UNICODE (0)
} ;

//---------------------------------------------------------------------------------------------------------------------*
//             Key words table 'delimitorsList'                            *
//---------------------------------------------------------------------------------------------------------------------*

static const int32_t ktable_size_kerbdd_5F_lexique_delimitorsList = 27 ;

static const C_unicode_lexique_table_entry ktable_for_kerbdd_5F_lexique_delimitorsList [ktable_size_kerbdd_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__21_, 1, C_Lexique_kerbdd_5F_lexique::kToken__21_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__26_, 1, C_Lexique_kerbdd_5F_lexique::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__28_, 1, C_Lexique_kerbdd_5F_lexique::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__29_, 1, C_Lexique_kerbdd_5F_lexique::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__2C_, 1, C_Lexique_kerbdd_5F_lexique::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__2E_, 1, C_Lexique_kerbdd_5F_lexique::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3A_, 1, C_Lexique_kerbdd_5F_lexique::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3B_, 1, C_Lexique_kerbdd_5F_lexique::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3C_, 1, C_Lexique_kerbdd_5F_lexique::kToken__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3D_, 1, C_Lexique_kerbdd_5F_lexique::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3E_, 1, C_Lexique_kerbdd_5F_lexique::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3F_, 1, C_Lexique_kerbdd_5F_lexique::kToken__3F_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__5B_, 1, C_Lexique_kerbdd_5F_lexique::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__5D_, 1, C_Lexique_kerbdd_5F_lexique::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__5E_, 1, C_Lexique_kerbdd_5F_lexique::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__7B_, 1, C_Lexique_kerbdd_5F_lexique::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__7C_, 1, C_Lexique_kerbdd_5F_lexique::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__7D_, 1, C_Lexique_kerbdd_5F_lexique::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__7E_, 1, C_Lexique_kerbdd_5F_lexique::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__21__3D_, 2, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__2B__3D_, 2, C_Lexique_kerbdd_5F_lexique::kToken__2B__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__2D__3D_, 2, C_Lexique_kerbdd_5F_lexique::kToken__2D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__2D__3E_, 2, C_Lexique_kerbdd_5F_lexique::kToken__2D__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__2E__2E_, 2, C_Lexique_kerbdd_5F_lexique::kToken__2E__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3A__3D_, 2, C_Lexique_kerbdd_5F_lexique::kToken__3A__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3C__3D_, 2, C_Lexique_kerbdd_5F_lexique::kToken__3C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique__3E__3D_, 2, C_Lexique_kerbdd_5F_lexique::kToken__3E__3D_)
} ;

int16_t C_Lexique_kerbdd_5F_lexique::search_into_delimitorsList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_kerbdd_5F_lexique_delimitorsList, ktable_size_kerbdd_5F_lexique_delimitorsList) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//             Key words table 'keyWordList'                            *
//---------------------------------------------------------------------------------------------------------------------*

static const int32_t ktable_size_kerbdd_5F_lexique_keyWordList = 10 ;

static const C_unicode_lexique_table_entry ktable_for_kerbdd_5F_lexique_keyWordList [ktable_size_kerbdd_5F_lexique_keyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_bool, 4, C_Lexique_kerbdd_5F_lexique::kToken_bool),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_dump, 4, C_Lexique_kerbdd_5F_lexique::kToken_dump),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_true, 4, C_Lexique_kerbdd_5F_lexique::kToken_true),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_false, 5, C_Lexique_kerbdd_5F_lexique::kToken_false),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_domain, 6, C_Lexique_kerbdd_5F_lexique::kToken_domain),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_display, 7, C_Lexique_kerbdd_5F_lexique::kToken_display),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_include, 7, C_Lexique_kerbdd_5F_lexique::kToken_include),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_graphviz, 8, C_Lexique_kerbdd_5F_lexique::kToken_graphviz),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_andCacheMapSize, 15, C_Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize),
  C_unicode_lexique_table_entry (kUnicodeString_kerbdd_5F_lexique_nodeHashMapSize, 15, C_Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize)
} ;

int16_t C_Lexique_kerbdd_5F_lexique::search_into_keyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_kerbdd_5F_lexique_keyWordList, ktable_size_kerbdd_5F_lexique_keyWordList) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                          getCurrentTokenString                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_kerbdd_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_kerbdd_5F_lexique * ptr = (const cTokenFor_kerbdd_5F_lexique *) inTokenPtr ;
  C_String s ;
  if (ptr == NULL) {
    s.appendCString("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString("$$") ;
      break ;
    case kToken_identifier:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("identifier") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_integer:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("integer") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken_literal_5F_string:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("literal_string") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("comment") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_nodeHashMapSize:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("nodeHashMapSize") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_andCacheMapSize:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("andCacheMapSize") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_domain:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("domain") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bool:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bool") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_true:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("true") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_false:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("false") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_display:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("display") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_include:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("include") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_graphviz:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("graphviz") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_dump:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("dump") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__28_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("(") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__29_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (")") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("[") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("]") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("{") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("}") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (":=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (":") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (".") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E__2E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("..") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("+=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("-=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("->") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("&") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("|") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("^") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("~") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (",") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3F_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\?") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3B_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (";") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("!=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E__3D_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString (">=") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Template Delimiters                                                                       *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                           Template Replacements                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//            Terminal Symbols as end of script in template mark                                                       *
//---------------------------------------------------------------------------------------------------------------------*



//---------------------------------------------------------------------------------------------------------------------*
//               P A R S E    L E X I C A L    T O K E N                                                               *
//---------------------------------------------------------------------------------------------------------------------*

bool C_Lexique_kerbdd_5F_lexique::parseLexicalToken (void) {
  cTokenFor_kerbdd_5F_lexique token ;
  mLoop = true ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    token.mLexicalAttribute_tokenString.setLengthToZero () ;
    token.mLexicalAttribute_uint_33__32_value = 0 ;
    mTokenStartLocation = mCurrentLocation ;
    try{
      if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (token.mTokenCode == -1) {
          token.mTokenCode = search_into_keyWordList (token.mLexicalAttribute_tokenString) ;
        }
        if (token.mTokenCode == -1) {
          token.mTokenCode = kToken_identifier ;
        }
        enterToken (token) ;
      }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        ::scanner_routine_convertDecimalStringIntoUInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_kerbdd_5F_lexique_decimalNumberTooLarge, gLexicalMessage_kerbdd_5F_lexique_internalError) ;
        token.mTokenCode = kToken_integer ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
        do {
          if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
          token.mTokenCode = kToken_literal_5F_string ;
          enterToken (token) ;
        }else{
          lexicalError (gLexicalMessage_kerbdd_5F_lexique_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3E__3D_, 2, true)) {
        token.mTokenCode = kToken__3E__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3C__3D_, 2, true)) {
        token.mTokenCode = kToken__3C__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3A__3D_, 2, true)) {
        token.mTokenCode = kToken__3A__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__2E__2E_, 2, true)) {
        token.mTokenCode = kToken__2E__2E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__2D__3E_, 2, true)) {
        token.mTokenCode = kToken__2D__3E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__2D__3D_, 2, true)) {
        token.mTokenCode = kToken__2D__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__2B__3D_, 2, true)) {
        token.mTokenCode = kToken__2B__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__21__3D_, 2, true)) {
        token.mTokenCode = kToken__21__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__7E_, 1, true)) {
        token.mTokenCode = kToken__7E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__7D_, 1, true)) {
        token.mTokenCode = kToken__7D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__7C_, 1, true)) {
        token.mTokenCode = kToken__7C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__7B_, 1, true)) {
        token.mTokenCode = kToken__7B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__5E_, 1, true)) {
        token.mTokenCode = kToken__5E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__5D_, 1, true)) {
        token.mTokenCode = kToken__5D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__5B_, 1, true)) {
        token.mTokenCode = kToken__5B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3F_, 1, true)) {
        token.mTokenCode = kToken__3F_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3E_, 1, true)) {
        token.mTokenCode = kToken__3E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3D_, 1, true)) {
        token.mTokenCode = kToken__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3C_, 1, true)) {
        token.mTokenCode = kToken__3C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3B_, 1, true)) {
        token.mTokenCode = kToken__3B_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__3A_, 1, true)) {
        token.mTokenCode = kToken__3A_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__2E_, 1, true)) {
        token.mTokenCode = kToken__2E_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__2C_, 1, true)) {
        token.mTokenCode = kToken__2C_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__29_, 1, true)) {
        token.mTokenCode = kToken__29_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__28_, 1, true)) {
        token.mTokenCode = kToken__28_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__26_, 1, true)) {
        token.mTokenCode = kToken__26_ ;
        enterToken (token) ;
      }else if (testForInputUTF32String (kUnicodeString_kerbdd_5F_lexique__21_, 1, true)) {
        token.mTokenCode = kToken__21_ ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('#'))) {
        do {
          if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
          }else{
            mLoop = false ;
          }
        }while (mLoop) ;
        mLoop = true ;
        enterDroppedTerminal (kToken_comment) ;
      }else if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE (' '))) {
      }else if (testForInputUTF32Char (TO_UNICODE ('\0'))) { // End of source text ? 
        token.mTokenCode = kToken_ ; // Empty string code
      }else{ // Unknown input character
        unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
      }
    }catch (const C_lexicalErrorException &) {
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }
  if ((UNICODE_VALUE (mCurrentChar) == '\0') && (token.mTemplateStringBeforeToken.length () > 0)) {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         E N T E R    T O K E N                                                                      *
//---------------------------------------------------------------------------------------------------------------------*

void C_Lexique_kerbdd_5F_lexique::enterToken (const cTokenFor_kerbdd_5F_lexique & inToken) {
  cTokenFor_kerbdd_5F_lexique * ptr = NULL ;
  macroMyNew (ptr, cTokenFor_kerbdd_5F_lexique ()) ;
  ptr->mTokenCode = inToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = inToken.mTemplateStringBeforeToken ;
  ptr->mLexicalAttribute_tokenString = inToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = inToken.mLexicalAttribute_uint_33__32_value ;
  enterTokenFromPointer (ptr) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//               A T T R I B U T E   A C C E S S                                                                       *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_kerbdd_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_kerbdd_5F_lexique * ptr = (cTokenFor_kerbdd_5F_lexique *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_tokenString ;
}

//---------------------------------------------------------------------------------------------------------------------*

uint32_t C_Lexique_kerbdd_5F_lexique::attributeValue_uint_33__32_value (void) const {
  cTokenFor_kerbdd_5F_lexique * ptr = (cTokenFor_kerbdd_5F_lexique *) mCurrentTokenPtr ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//---------------------------------------------------------------------------------------------------------------------*
//         A S S I G N    F R O M    A T T R I B U T E                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring C_Lexique_kerbdd_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_kerbdd_5F_lexique * ptr = (cTokenFor_kerbdd_5F_lexique *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_kerbdd_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint C_Lexique_kerbdd_5F_lexique::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_kerbdd_5F_lexique * ptr = (cTokenFor_kerbdd_5F_lexique *) mCurrentTokenPtr ;
  macroValidSharedObject (ptr, cTokenFor_kerbdd_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         I N T R O S P E C T I O N                                                                   *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist C_Lexique_kerbdd_5F_lexique::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("integer") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("literal_string") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("nodeHashMapSize") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("andCacheMapSize") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("domain") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bool") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("true") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("false") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("display") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("include") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("graphviz") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("dump") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("(") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (")") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("..") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("+=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("-=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("->") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("&") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("|") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("^") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("~") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (">=") COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

uint32_t C_Lexique_kerbdd_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [42] = {0,
    0 /* kerbdd_lexique_1_identifier */,
    2 /* kerbdd_lexique_1_integer */,
    3 /* kerbdd_lexique_1_literal_5F_string */,
    5 /* kerbdd_lexique_1_comment */,
    1 /* kerbdd_lexique_1_nodeHashMapSize */,
    1 /* kerbdd_lexique_1_andCacheMapSize */,
    1 /* kerbdd_lexique_1_domain */,
    1 /* kerbdd_lexique_1_bool */,
    1 /* kerbdd_lexique_1_true */,
    1 /* kerbdd_lexique_1_false */,
    1 /* kerbdd_lexique_1_display */,
    1 /* kerbdd_lexique_1_include */,
    1 /* kerbdd_lexique_1_graphviz */,
    1 /* kerbdd_lexique_1_dump */,
    4 /* kerbdd_lexique_1__28_ */,
    4 /* kerbdd_lexique_1__29_ */,
    4 /* kerbdd_lexique_1__5B_ */,
    4 /* kerbdd_lexique_1__5D_ */,
    4 /* kerbdd_lexique_1__7B_ */,
    4 /* kerbdd_lexique_1__7D_ */,
    4 /* kerbdd_lexique_1__3A__3D_ */,
    4 /* kerbdd_lexique_1__3A_ */,
    4 /* kerbdd_lexique_1__2E_ */,
    4 /* kerbdd_lexique_1__2E__2E_ */,
    4 /* kerbdd_lexique_1__2B__3D_ */,
    4 /* kerbdd_lexique_1__2D__3D_ */,
    4 /* kerbdd_lexique_1__2D__3E_ */,
    4 /* kerbdd_lexique_1__26_ */,
    4 /* kerbdd_lexique_1__7C_ */,
    4 /* kerbdd_lexique_1__5E_ */,
    4 /* kerbdd_lexique_1__7E_ */,
    4 /* kerbdd_lexique_1__2C_ */,
    4 /* kerbdd_lexique_1__3F_ */,
    4 /* kerbdd_lexique_1__21_ */,
    4 /* kerbdd_lexique_1__3B_ */,
    4 /* kerbdd_lexique_1__3D_ */,
    4 /* kerbdd_lexique_1__21__3D_ */,
    4 /* kerbdd_lexique_1__3C_ */,
    4 /* kerbdd_lexique_1__3C__3D_ */,
    4 /* kerbdd_lexique_1__3E_ */,
    4 /* kerbdd_lexique_1__3E__3D_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                                            *
//---------------------------------------------------------------------------------------------------------------------*

C_String C_Lexique_kerbdd_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  C_String result ;
  if (inStyleIndex < 6) {
    static const char * kStyleArray [6] = {
      "",
      "keywordsStyle",
      "integerStyle",
      "stringStyle",
      "delimitersStyle",
      "commentStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@domainFieldList' list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_domainFieldList : public cCollectionElement {
  public : GALGAS_domainFieldList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_domainFieldList (const GALGAS_lstring & in_mVarName,
                                               const GALGAS_bddType & in_mType
                                               COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_domainFieldList::cCollectionElement_domainFieldList (const GALGAS_lstring & in_mVarName,
                                                                        const GALGAS_bddType & in_mType
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mVarName, in_mType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_domainFieldList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_domainFieldList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_domainFieldList (mObject.mAttribute_mVarName, mObject.mAttribute_mType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_domainFieldList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVarName" ":" ;
  mObject.mAttribute_mVarName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mAttribute_mType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_domainFieldList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_domainFieldList * operand = (cCollectionElement_domainFieldList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_domainFieldList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList::GALGAS_domainFieldList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList::GALGAS_domainFieldList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList GALGAS_domainFieldList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_domainFieldList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList GALGAS_domainFieldList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_bddType & inOperand1
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_domainFieldList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_domainFieldList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainFieldList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_lstring & in_mVarName,
                                                        const GALGAS_bddType & in_mType
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_domainFieldList * p = NULL ;
  macroMyNew (p, cCollectionElement_domainFieldList (in_mVarName,
                                                     in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainFieldList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_bddType & inOperand1
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_domainFieldList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainFieldList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                   const GALGAS_bddType inOperand1,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_domainFieldList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainFieldList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                   GALGAS_bddType & outOperand1,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
      outOperand0 = p->mObject.mAttribute_mVarName ;
      outOperand1 = p->mObject.mAttribute_mType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainFieldList::setter_popFirst (GALGAS_lstring & outOperand0,
                                              GALGAS_bddType & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    outOperand0 = p->mObject.mAttribute_mVarName ;
    outOperand1 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainFieldList::setter_popLast (GALGAS_lstring & outOperand0,
                                             GALGAS_bddType & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    outOperand0 = p->mObject.mAttribute_mVarName ;
    outOperand1 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainFieldList::method_first (GALGAS_lstring & outOperand0,
                                           GALGAS_bddType & outOperand1,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    outOperand0 = p->mObject.mAttribute_mVarName ;
    outOperand1 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainFieldList::method_last (GALGAS_lstring & outOperand0,
                                          GALGAS_bddType & outOperand1,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    outOperand0 = p->mObject.mAttribute_mVarName ;
    outOperand1 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList GALGAS_domainFieldList::add_operation (const GALGAS_domainFieldList & inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_domainFieldList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList GALGAS_domainFieldList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_domainFieldList result = GALGAS_domainFieldList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList GALGAS_domainFieldList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_domainFieldList result = GALGAS_domainFieldList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList GALGAS_domainFieldList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_domainFieldList result = GALGAS_domainFieldList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainFieldList::plusAssign_operation (const GALGAS_domainFieldList inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_domainFieldList::getter_mVarNameAtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    result = p->mObject.mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bddType GALGAS_domainFieldList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) attributes.ptr () ;
  GALGAS_bddType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    result = p->mObject.mAttribute_mType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_domainFieldList::cEnumerator_domainFieldList (const GALGAS_domainFieldList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList_2D_element cEnumerator_domainFieldList::current (LOCATION_ARGS) const {
  const cCollectionElement_domainFieldList * p = (const cCollectionElement_domainFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_domainFieldList::current_mVarName (LOCATION_ARGS) const {
  const cCollectionElement_domainFieldList * p = (const cCollectionElement_domainFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
  return p->mObject.mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bddType cEnumerator_domainFieldList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_domainFieldList * p = (const cCollectionElement_domainFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
  return p->mObject.mAttribute_mType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @domainFieldList type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_domainFieldList ("domainFieldList",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_domainFieldList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainFieldList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_domainFieldList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainFieldList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList GALGAS_domainFieldList::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_domainFieldList result ;
  const GALGAS_domainFieldList * p = (const GALGAS_domainFieldList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_domainFieldList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainFieldList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@domainDeclarationList' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_domainDeclarationList : public cCollectionElement {
  public : GALGAS_domainDeclarationList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_domainDeclarationList (const GALGAS_lstring & in_mDomainName,
                                                     const GALGAS_domainDeclarationType & in_mType
                                                     COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_domainDeclarationList::cCollectionElement_domainDeclarationList (const GALGAS_lstring & in_mDomainName,
                                                                                    const GALGAS_domainDeclarationType & in_mType
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDomainName, in_mType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_domainDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_domainDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_domainDeclarationList (mObject.mAttribute_mDomainName, mObject.mAttribute_mType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_domainDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDomainName" ":" ;
  mObject.mAttribute_mDomainName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mAttribute_mType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_domainDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_domainDeclarationList * operand = (cCollectionElement_domainDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_domainDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationList::GALGAS_domainDeclarationList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationList::GALGAS_domainDeclarationList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationList GALGAS_domainDeclarationList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_domainDeclarationList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationList GALGAS_domainDeclarationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_domainDeclarationType & inOperand1
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_domainDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_domainDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mDomainName,
                                                              const GALGAS_domainDeclarationType & in_mType
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_domainDeclarationList * p = NULL ;
  macroMyNew (p, cCollectionElement_domainDeclarationList (in_mDomainName,
                                                           in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainDeclarationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_domainDeclarationType & inOperand1
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_domainDeclarationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainDeclarationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_domainDeclarationType inOperand1,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_domainDeclarationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainDeclarationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_domainDeclarationType & outOperand1,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
      outOperand0 = p->mObject.mAttribute_mDomainName ;
      outOperand1 = p->mObject.mAttribute_mType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainDeclarationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_domainDeclarationType & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    outOperand0 = p->mObject.mAttribute_mDomainName ;
    outOperand1 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainDeclarationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_domainDeclarationType & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    outOperand0 = p->mObject.mAttribute_mDomainName ;
    outOperand1 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainDeclarationList::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_domainDeclarationType & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    outOperand0 = p->mObject.mAttribute_mDomainName ;
    outOperand1 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainDeclarationList::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_domainDeclarationType & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    outOperand0 = p->mObject.mAttribute_mDomainName ;
    outOperand1 = p->mObject.mAttribute_mType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationList GALGAS_domainDeclarationList::add_operation (const GALGAS_domainDeclarationList & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_domainDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationList GALGAS_domainDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_domainDeclarationList result = GALGAS_domainDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationList GALGAS_domainDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_domainDeclarationList result = GALGAS_domainDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationList GALGAS_domainDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_domainDeclarationList result = GALGAS_domainDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainDeclarationList::plusAssign_operation (const GALGAS_domainDeclarationList inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_domainDeclarationList::getter_mDomainNameAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    result = p->mObject.mAttribute_mDomainName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationType GALGAS_domainDeclarationList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) attributes.ptr () ;
  GALGAS_domainDeclarationType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    result = p->mObject.mAttribute_mType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_domainDeclarationList::cEnumerator_domainDeclarationList (const GALGAS_domainDeclarationList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationList_2D_element cEnumerator_domainDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_domainDeclarationList * p = (const cCollectionElement_domainDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_domainDeclarationList::current_mDomainName (LOCATION_ARGS) const {
  const cCollectionElement_domainDeclarationList * p = (const cCollectionElement_domainDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
  return p->mObject.mAttribute_mDomainName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationType cEnumerator_domainDeclarationList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_domainDeclarationList * p = (const cCollectionElement_domainDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
  return p->mObject.mAttribute_mType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @domainDeclarationList type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_domainDeclarationList ("domainDeclarationList",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_domainDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_domainDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainDeclarationList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationList GALGAS_domainDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_domainDeclarationList result ;
  const GALGAS_domainDeclarationList * p = (const GALGAS_domainDeclarationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_domainDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_recordDomainMap::cMapElement_recordDomainMap (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & in_mIndex,
                                                          const GALGAS_uint & in_mBitCount,
                                                          const GALGAS_recordDomainMap & in_mSubDomain
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mIndex (in_mIndex),
mAttribute_mBitCount (in_mBitCount),
mAttribute_mSubDomain (in_mSubDomain) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_recordDomainMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () && mAttribute_mBitCount.isValid () && mAttribute_mSubDomain.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_recordDomainMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_recordDomainMap (mAttribute_lkey, mAttribute_mIndex, mAttribute_mBitCount, mAttribute_mSubDomain COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_recordDomainMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mAttribute_mIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitCount" ":" ;
  mAttribute_mBitCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSubDomain" ":" ;
  mAttribute_mSubDomain.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_recordDomainMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_recordDomainMap * operand = (cMapElement_recordDomainMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIndex.objectCompare (operand->mAttribute_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitCount.objectCompare (operand->mAttribute_mBitCount) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSubDomain.objectCompare (operand->mAttribute_mSubDomain) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap::GALGAS_recordDomainMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap::GALGAS_recordDomainMap (const GALGAS_recordDomainMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap & GALGAS_recordDomainMap::operator = (const GALGAS_recordDomainMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap GALGAS_recordDomainMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_recordDomainMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap GALGAS_recordDomainMap::constructor_mapWithMapToOverride (const GALGAS_recordDomainMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_recordDomainMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap GALGAS_recordDomainMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_recordDomainMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_recordDomainMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                  const GALGAS_uint & inArgument0,
                                                  const GALGAS_uint & inArgument1,
                                                  const GALGAS_recordDomainMap & inArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_recordDomainMap * p = NULL ;
  macroMyNew (p, cMapElement_recordDomainMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@recordDomainMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_recordDomainMap::setter_insertKey (GALGAS_lstring inKey,
                                               GALGAS_uint inArgument0,
                                               GALGAS_uint inArgument1,
                                               GALGAS_recordDomainMap inArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cMapElement_recordDomainMap * p = NULL ;
  macroMyNew (p, cMapElement_recordDomainMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' field is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_recordDomainMap_searchKey = "there is no '%K' field" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_recordDomainMap::method_searchKey (GALGAS_lstring inKey,
                                               GALGAS_uint & outArgument0,
                                               GALGAS_uint & outArgument1,
                                               GALGAS_recordDomainMap & outArgument2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_recordDomainMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    outArgument0 = p->mAttribute_mIndex ;
    outArgument1 = p->mAttribute_mBitCount ;
    outArgument2 = p->mAttribute_mSubDomain ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_recordDomainMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    result = p->mAttribute_mIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_recordDomainMap::getter_mBitCountForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    result = p->mAttribute_mBitCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap GALGAS_recordDomainMap::getter_mSubDomainForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) attributes ;
  GALGAS_recordDomainMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    result = p->mAttribute_mSubDomain ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_recordDomainMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_recordDomainMap * p = (cMapElement_recordDomainMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    p->mAttribute_mIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_recordDomainMap::setter_setMBitCountForKey (GALGAS_uint inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_recordDomainMap * p = (cMapElement_recordDomainMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    p->mAttribute_mBitCount = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_recordDomainMap::setter_setMSubDomainForKey (GALGAS_recordDomainMap inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_recordDomainMap * p = (cMapElement_recordDomainMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    p->mAttribute_mSubDomain = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_recordDomainMap * GALGAS_recordDomainMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_recordDomainMap * result = (cMapElement_recordDomainMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_recordDomainMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_recordDomainMap::cEnumerator_recordDomainMap (const GALGAS_recordDomainMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap_2D_element cEnumerator_recordDomainMap::current (LOCATION_ARGS) const {
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_recordDomainMap) ;
  return GALGAS_recordDomainMap_2D_element (p->mAttribute_lkey, p->mAttribute_mIndex, p->mAttribute_mBitCount, p->mAttribute_mSubDomain) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_recordDomainMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_recordDomainMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_recordDomainMap) ;
  return p->mAttribute_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_recordDomainMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_recordDomainMap) ;
  return p->mAttribute_mBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap cEnumerator_recordDomainMap::current_mSubDomain (LOCATION_ARGS) const {
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_recordDomainMap) ;
  return p->mAttribute_mSubDomain ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @recordDomainMap type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_recordDomainMap ("recordDomainMap",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_recordDomainMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_recordDomainMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_recordDomainMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_recordDomainMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap GALGAS_recordDomainMap::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_recordDomainMap result ;
  const GALGAS_recordDomainMap * p = (const GALGAS_recordDomainMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_recordDomainMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("recordDomainMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_domainMap::cMapElement_domainMap (const GALGAS_lstring & inKey,
                                              const GALGAS_uint & in_mBitCount,
                                              const GALGAS_recordDomainMap & in_mRecordMap
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mBitCount (in_mBitCount),
mAttribute_mRecordMap (in_mRecordMap) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_domainMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mBitCount.isValid () && mAttribute_mRecordMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_domainMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_domainMap (mAttribute_lkey, mAttribute_mBitCount, mAttribute_mRecordMap COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_domainMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitCount" ":" ;
  mAttribute_mBitCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRecordMap" ":" ;
  mAttribute_mRecordMap.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_domainMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_domainMap * operand = (cMapElement_domainMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mBitCount.objectCompare (operand->mAttribute_mBitCount) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRecordMap.objectCompare (operand->mAttribute_mRecordMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainMap::GALGAS_domainMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainMap::GALGAS_domainMap (const GALGAS_domainMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainMap & GALGAS_domainMap::operator = (const GALGAS_domainMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainMap GALGAS_domainMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_domainMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainMap GALGAS_domainMap::constructor_mapWithMapToOverride (const GALGAS_domainMap & inMapToOverride
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_domainMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainMap GALGAS_domainMap::getter_overriddenMap (C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_domainMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainMap::addAssign_operation (const GALGAS_lstring & inKey,
                                            const GALGAS_uint & inArgument0,
                                            const GALGAS_recordDomainMap & inArgument1,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cMapElement_domainMap * p = NULL ;
  macroMyNew (p, cMapElement_domainMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@domainMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainMap::setter_insertKey (GALGAS_lstring inKey,
                                         GALGAS_uint inArgument0,
                                         GALGAS_recordDomainMap inArgument1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_domainMap * p = NULL ;
  macroMyNew (p, cMapElement_domainMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' domain is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_domainMap_searchKey = "there is no '%K' domain" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainMap::method_searchKey (GALGAS_lstring inKey,
                                         GALGAS_uint & outArgument0,
                                         GALGAS_recordDomainMap & outArgument1,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) performSearch (inKey,
                                                                                     inCompiler,
                                                                                     kSearchErrorMessage_domainMap_searchKey
                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_domainMap) ;
    outArgument0 = p->mAttribute_mBitCount ;
    outArgument1 = p->mAttribute_mRecordMap ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_domainMap::getter_mBitCountForKey (const GALGAS_string & inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_domainMap) ;
    result = p->mAttribute_mBitCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap GALGAS_domainMap::getter_mRecordMapForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) attributes ;
  GALGAS_recordDomainMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_domainMap) ;
    result = p->mAttribute_mRecordMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainMap::setter_setMBitCountForKey (GALGAS_uint inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_domainMap * p = (cMapElement_domainMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_domainMap) ;
    p->mAttribute_mBitCount = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainMap::setter_setMRecordMapForKey (GALGAS_recordDomainMap inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_domainMap * p = (cMapElement_domainMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_domainMap) ;
    p->mAttribute_mRecordMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_domainMap * GALGAS_domainMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_domainMap * result = (cMapElement_domainMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_domainMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_domainMap::cEnumerator_domainMap (const GALGAS_domainMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainMap_2D_element cEnumerator_domainMap::current (LOCATION_ARGS) const {
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_domainMap) ;
  return GALGAS_domainMap_2D_element (p->mAttribute_lkey, p->mAttribute_mBitCount, p->mAttribute_mRecordMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_domainMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_domainMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_domainMap) ;
  return p->mAttribute_mBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap cEnumerator_domainMap::current_mRecordMap (LOCATION_ARGS) const {
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_domainMap) ;
  return p->mAttribute_mRecordMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   @domainMap type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_domainMap ("domainMap",
                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_domainMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_domainMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainMap GALGAS_domainMap::extractObject (const GALGAS_object & inObject,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_domainMap result ;
  const GALGAS_domainMap * p = (const GALGAS_domainMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_domainMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Class for element of '@varList' list                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_varList : public cCollectionElement {
  public : GALGAS_varList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_varList (const GALGAS_string & in_mVarName,
                                       const GALGAS_uint & in_mBitIndex,
                                       const GALGAS_uint & in_mBitCount
                                       COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_varList::cCollectionElement_varList (const GALGAS_string & in_mVarName,
                                                        const GALGAS_uint & in_mBitIndex,
                                                        const GALGAS_uint & in_mBitCount
                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mVarName, in_mBitIndex, in_mBitCount) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_varList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_varList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_varList (mObject.mAttribute_mVarName, mObject.mAttribute_mBitIndex, mObject.mAttribute_mBitCount COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_varList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVarName" ":" ;
  mObject.mAttribute_mVarName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitIndex" ":" ;
  mObject.mAttribute_mBitIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitCount" ":" ;
  mObject.mAttribute_mBitCount.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_varList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_varList * operand = (cCollectionElement_varList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_varList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList::GALGAS_varList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList::GALGAS_varList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList GALGAS_varList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_varList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList GALGAS_varList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                          const GALGAS_uint & inOperand1,
                                                          const GALGAS_uint & inOperand2
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_varList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_varList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                const GALGAS_string & in_mVarName,
                                                const GALGAS_uint & in_mBitIndex,
                                                const GALGAS_uint & in_mBitCount
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_varList * p = NULL ;
  macroMyNew (p, cCollectionElement_varList (in_mVarName,
                                             in_mBitIndex,
                                             in_mBitCount COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varList::addAssign_operation (const GALGAS_string & inOperand0,
                                          const GALGAS_uint & inOperand1,
                                          const GALGAS_uint & inOperand2
                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_varList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                           const GALGAS_uint inOperand1,
                                           const GALGAS_uint inOperand2,
                                           const GALGAS_uint inInsertionIndex,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_varList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                           GALGAS_uint & outOperand1,
                                           GALGAS_uint & outOperand2,
                                           const GALGAS_uint inRemoveIndex,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_varList) ;
      outOperand0 = p->mObject.mAttribute_mVarName ;
      outOperand1 = p->mObject.mAttribute_mBitIndex ;
      outOperand2 = p->mObject.mAttribute_mBitCount ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varList::setter_popFirst (GALGAS_string & outOperand0,
                                      GALGAS_uint & outOperand1,
                                      GALGAS_uint & outOperand2,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_varList) ;
    outOperand0 = p->mObject.mAttribute_mVarName ;
    outOperand1 = p->mObject.mAttribute_mBitIndex ;
    outOperand2 = p->mObject.mAttribute_mBitCount ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varList::setter_popLast (GALGAS_string & outOperand0,
                                     GALGAS_uint & outOperand1,
                                     GALGAS_uint & outOperand2,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_varList) ;
    outOperand0 = p->mObject.mAttribute_mVarName ;
    outOperand1 = p->mObject.mAttribute_mBitIndex ;
    outOperand2 = p->mObject.mAttribute_mBitCount ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varList::method_first (GALGAS_string & outOperand0,
                                   GALGAS_uint & outOperand1,
                                   GALGAS_uint & outOperand2,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_varList) ;
    outOperand0 = p->mObject.mAttribute_mVarName ;
    outOperand1 = p->mObject.mAttribute_mBitIndex ;
    outOperand2 = p->mObject.mAttribute_mBitCount ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varList::method_last (GALGAS_string & outOperand0,
                                  GALGAS_uint & outOperand1,
                                  GALGAS_uint & outOperand2,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_varList) ;
    outOperand0 = p->mObject.mAttribute_mVarName ;
    outOperand1 = p->mObject.mAttribute_mBitIndex ;
    outOperand2 = p->mObject.mAttribute_mBitCount ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList GALGAS_varList::add_operation (const GALGAS_varList & inOperand,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_varList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList GALGAS_varList::getter_subListWithRange (const GALGAS_range & inRange,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_varList result = GALGAS_varList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList GALGAS_varList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_varList result = GALGAS_varList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList GALGAS_varList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_varList result = GALGAS_varList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varList::plusAssign_operation (const GALGAS_varList inOperand,
                                           C_Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_varList::getter_mVarNameAtIndex (const GALGAS_uint & inIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    result = p->mObject.mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_varList::getter_mBitIndexAtIndex (const GALGAS_uint & inIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    result = p->mObject.mAttribute_mBitIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_varList::getter_mBitCountAtIndex (const GALGAS_uint & inIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    result = p->mObject.mAttribute_mBitCount ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_varList::cEnumerator_varList (const GALGAS_varList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList_2D_element cEnumerator_varList::current (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_varList::current_mVarName (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_varList::current_mBitIndex (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mAttribute_mBitIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_varList::current_mBitCount (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mAttribute_mBitCount ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @varList type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varList ("varList",
                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList GALGAS_varList::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_varList result ;
  const GALGAS_varList * p = (const GALGAS_varList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_varMap::cMapElement_varMap (const GALGAS_lstring & inKey,
                                        const GALGAS_uint & in_mIndex,
                                        const GALGAS_uint & in_mBitCount,
                                        const GALGAS_recordDomainMap & in_mRecordDomainMap
                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mIndex (in_mIndex),
mAttribute_mBitCount (in_mBitCount),
mAttribute_mRecordDomainMap (in_mRecordDomainMap) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_varMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () && mAttribute_mBitCount.isValid () && mAttribute_mRecordDomainMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_varMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_varMap (mAttribute_lkey, mAttribute_mIndex, mAttribute_mBitCount, mAttribute_mRecordDomainMap COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_varMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mAttribute_mIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitCount" ":" ;
  mAttribute_mBitCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRecordDomainMap" ":" ;
  mAttribute_mRecordDomainMap.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_varMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_varMap * operand = (cMapElement_varMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIndex.objectCompare (operand->mAttribute_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitCount.objectCompare (operand->mAttribute_mBitCount) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRecordDomainMap.objectCompare (operand->mAttribute_mRecordDomainMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap::GALGAS_varMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap::GALGAS_varMap (const GALGAS_varMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap & GALGAS_varMap::operator = (const GALGAS_varMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap GALGAS_varMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_varMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap GALGAS_varMap::constructor_mapWithMapToOverride (const GALGAS_varMap & inMapToOverride
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_varMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap GALGAS_varMap::getter_overriddenMap (C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_varMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varMap::addAssign_operation (const GALGAS_lstring & inKey,
                                         const GALGAS_uint & inArgument0,
                                         const GALGAS_uint & inArgument1,
                                         const GALGAS_recordDomainMap & inArgument2,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  cMapElement_varMap * p = NULL ;
  macroMyNew (p, cMapElement_varMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@varMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varMap::setter_insertKey (GALGAS_lstring inKey,
                                      GALGAS_uint inArgument0,
                                      GALGAS_uint inArgument1,
                                      GALGAS_recordDomainMap inArgument2,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cMapElement_varMap * p = NULL ;
  macroMyNew (p, cMapElement_varMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' variable is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_varMap_searchKey = "there is no '%K' variable" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varMap::method_searchKey (GALGAS_lstring inKey,
                                      GALGAS_uint & outArgument0,
                                      GALGAS_uint & outArgument1,
                                      GALGAS_recordDomainMap & outArgument2,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) performSearch (inKey,
                                                                               inCompiler,
                                                                               kSearchErrorMessage_varMap_searchKey
                                                                               COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_varMap) ;
    outArgument0 = p->mAttribute_mIndex ;
    outArgument1 = p->mAttribute_mBitCount ;
    outArgument2 = p->mAttribute_mRecordDomainMap ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_varMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_varMap * p = (const cMapElement_varMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    result = p->mAttribute_mIndex ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_varMap::getter_mBitCountForKey (const GALGAS_string & inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_varMap * p = (const cMapElement_varMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    result = p->mAttribute_mBitCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap GALGAS_varMap::getter_mRecordDomainMapForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_varMap * p = (const cMapElement_varMap *) attributes ;
  GALGAS_recordDomainMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    result = p->mAttribute_mRecordDomainMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                            GALGAS_string inKey,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_varMap * p = (cMapElement_varMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    p->mAttribute_mIndex = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varMap::setter_setMBitCountForKey (GALGAS_uint inAttributeValue,
                                               GALGAS_string inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_varMap * p = (cMapElement_varMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    p->mAttribute_mBitCount = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varMap::setter_setMRecordDomainMapForKey (GALGAS_recordDomainMap inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_varMap * p = (cMapElement_varMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    p->mAttribute_mRecordDomainMap = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_varMap * GALGAS_varMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                       const GALGAS_string & inKey
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_varMap * result = (cMapElement_varMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_varMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_varMap::cEnumerator_varMap (const GALGAS_varMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap_2D_element cEnumerator_varMap::current (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return GALGAS_varMap_2D_element (p->mAttribute_lkey, p->mAttribute_mIndex, p->mAttribute_mBitCount, p->mAttribute_mRecordDomainMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_varMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_varMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mAttribute_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_varMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mAttribute_mBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap cEnumerator_varMap::current_mRecordDomainMap (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mAttribute_mRecordDomainMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @varMap type                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varMap ("varMap",
                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap GALGAS_varMap::extractObject (const GALGAS_object & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_varMap result ;
  const GALGAS_varMap * p = (const GALGAS_varMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_computedFormulaMap::cMapElement_computedFormulaMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_varList & in_mVarList,
                                                                const GALGAS_uint & in_mBitCount,
                                                                const GALGAS_binaryset & in_mValue
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mVarList (in_mVarList),
mAttribute_mBitCount (in_mBitCount),
mAttribute_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_computedFormulaMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mVarList.isValid () && mAttribute_mBitCount.isValid () && mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_computedFormulaMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_computedFormulaMap (mAttribute_lkey, mAttribute_mVarList, mAttribute_mBitCount, mAttribute_mValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_computedFormulaMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVarList" ":" ;
  mAttribute_mVarList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitCount" ":" ;
  mAttribute_mBitCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mAttribute_mValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_computedFormulaMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_computedFormulaMap * operand = (cMapElement_computedFormulaMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mVarList.objectCompare (operand->mAttribute_mVarList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBitCount.objectCompare (operand->mAttribute_mBitCount) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mValue.objectCompare (operand->mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_computedFormulaMap::GALGAS_computedFormulaMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_computedFormulaMap::GALGAS_computedFormulaMap (const GALGAS_computedFormulaMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_computedFormulaMap & GALGAS_computedFormulaMap::operator = (const GALGAS_computedFormulaMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_computedFormulaMap GALGAS_computedFormulaMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_computedFormulaMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_computedFormulaMap GALGAS_computedFormulaMap::constructor_mapWithMapToOverride (const GALGAS_computedFormulaMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_computedFormulaMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_computedFormulaMap GALGAS_computedFormulaMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_computedFormulaMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_computedFormulaMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_varList & inArgument0,
                                                     const GALGAS_uint & inArgument1,
                                                     const GALGAS_binaryset & inArgument2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_computedFormulaMap * p = NULL ;
  macroMyNew (p, cMapElement_computedFormulaMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@computedFormulaMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_computedFormulaMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_varList inArgument0,
                                                  GALGAS_uint inArgument1,
                                                  GALGAS_binaryset inArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_computedFormulaMap * p = NULL ;
  macroMyNew (p, cMapElement_computedFormulaMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' formula is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_computedFormulaMap_searchKey = "there is no '%K' formula" ;

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_computedFormulaMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_varList & outArgument0,
                                                  GALGAS_uint & outArgument1,
                                                  GALGAS_binaryset & outArgument2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_computedFormulaMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    outArgument0 = p->mAttribute_mVarList ;
    outArgument1 = p->mAttribute_mBitCount ;
    outArgument2 = p->mAttribute_mValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList GALGAS_computedFormulaMap::getter_mVarListForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) attributes ;
  GALGAS_varList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    result = p->mAttribute_mVarList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_computedFormulaMap::getter_mBitCountForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    result = p->mAttribute_mBitCount ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binaryset GALGAS_computedFormulaMap::getter_mValueForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) attributes ;
  GALGAS_binaryset result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    result = p->mAttribute_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_computedFormulaMap::setter_setMVarListForKey (GALGAS_varList inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_computedFormulaMap * p = (cMapElement_computedFormulaMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    p->mAttribute_mVarList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_computedFormulaMap::setter_setMBitCountForKey (GALGAS_uint inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_computedFormulaMap * p = (cMapElement_computedFormulaMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    p->mAttribute_mBitCount = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_computedFormulaMap::setter_setMValueForKey (GALGAS_binaryset inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_computedFormulaMap * p = (cMapElement_computedFormulaMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    p->mAttribute_mValue = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_computedFormulaMap * GALGAS_computedFormulaMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_computedFormulaMap * result = (cMapElement_computedFormulaMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_computedFormulaMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_computedFormulaMap::cEnumerator_computedFormulaMap (const GALGAS_computedFormulaMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_computedFormulaMap_2D_element cEnumerator_computedFormulaMap::current (LOCATION_ARGS) const {
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
  return GALGAS_computedFormulaMap_2D_element (p->mAttribute_lkey, p->mAttribute_mVarList, p->mAttribute_mBitCount, p->mAttribute_mValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_computedFormulaMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList cEnumerator_computedFormulaMap::current_mVarList (LOCATION_ARGS) const {
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
  return p->mAttribute_mVarList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cEnumerator_computedFormulaMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
  return p->mAttribute_mBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binaryset cEnumerator_computedFormulaMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
  return p->mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @computedFormulaMap type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_computedFormulaMap ("computedFormulaMap",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_computedFormulaMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedFormulaMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_computedFormulaMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedFormulaMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_computedFormulaMap GALGAS_computedFormulaMap::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_computedFormulaMap result ;
  const GALGAS_computedFormulaMap * p = (const GALGAS_computedFormulaMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_computedFormulaMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedFormulaMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Class for element of '@formulaParameterListInExpression' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_formulaParameterListInExpression : public cCollectionElement {
  public : GALGAS_formulaParameterListInExpression_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_formulaParameterListInExpression (const GALGAS_lstring & in_mParameterName,
                                                                const GALGAS_lstringlist & in_mFieldNames
                                                                COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_formulaParameterListInExpression::cCollectionElement_formulaParameterListInExpression (const GALGAS_lstring & in_mParameterName,
                                                                                                          const GALGAS_lstringlist & in_mFieldNames
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mParameterName, in_mFieldNames) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_formulaParameterListInExpression::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_formulaParameterListInExpression::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_formulaParameterListInExpression (mObject.mAttribute_mParameterName, mObject.mAttribute_mFieldNames COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_formulaParameterListInExpression::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterName" ":" ;
  mObject.mAttribute_mParameterName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldNames" ":" ;
  mObject.mAttribute_mFieldNames.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_formulaParameterListInExpression::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formulaParameterListInExpression * operand = (cCollectionElement_formulaParameterListInExpression *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formulaParameterListInExpression) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaParameterListInExpression::GALGAS_formulaParameterListInExpression (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaParameterListInExpression::GALGAS_formulaParameterListInExpression (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaParameterListInExpression GALGAS_formulaParameterListInExpression::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_formulaParameterListInExpression result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaParameterListInExpression GALGAS_formulaParameterListInExpression::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstringlist & inOperand1
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_formulaParameterListInExpression result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_formulaParameterListInExpression::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaParameterListInExpression::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lstring & in_mParameterName,
                                                                         const GALGAS_lstringlist & in_mFieldNames
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_formulaParameterListInExpression * p = NULL ;
  macroMyNew (p, cCollectionElement_formulaParameterListInExpression (in_mParameterName,
                                                                      in_mFieldNames COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaParameterListInExpression::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_lstringlist & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_formulaParameterListInExpression (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaParameterListInExpression::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                    const GALGAS_lstringlist inOperand1,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_formulaParameterListInExpression (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaParameterListInExpression::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                    GALGAS_lstringlist & outOperand1,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
      outOperand0 = p->mObject.mAttribute_mParameterName ;
      outOperand1 = p->mObject.mAttribute_mFieldNames ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaParameterListInExpression::setter_popFirst (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstringlist & outOperand1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    outOperand0 = p->mObject.mAttribute_mParameterName ;
    outOperand1 = p->mObject.mAttribute_mFieldNames ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaParameterListInExpression::setter_popLast (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstringlist & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    outOperand0 = p->mObject.mAttribute_mParameterName ;
    outOperand1 = p->mObject.mAttribute_mFieldNames ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaParameterListInExpression::method_first (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstringlist & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    outOperand0 = p->mObject.mAttribute_mParameterName ;
    outOperand1 = p->mObject.mAttribute_mFieldNames ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaParameterListInExpression::method_last (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstringlist & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    outOperand0 = p->mObject.mAttribute_mParameterName ;
    outOperand1 = p->mObject.mAttribute_mFieldNames ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaParameterListInExpression GALGAS_formulaParameterListInExpression::add_operation (const GALGAS_formulaParameterListInExpression & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formulaParameterListInExpression result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaParameterListInExpression GALGAS_formulaParameterListInExpression::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formulaParameterListInExpression result = GALGAS_formulaParameterListInExpression::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaParameterListInExpression GALGAS_formulaParameterListInExpression::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formulaParameterListInExpression result = GALGAS_formulaParameterListInExpression::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaParameterListInExpression GALGAS_formulaParameterListInExpression::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_formulaParameterListInExpression result = GALGAS_formulaParameterListInExpression::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaParameterListInExpression::plusAssign_operation (const GALGAS_formulaParameterListInExpression inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formulaParameterListInExpression::getter_mParameterNameAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    result = p->mObject.mAttribute_mParameterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_formulaParameterListInExpression::getter_mFieldNamesAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    result = p->mObject.mAttribute_mFieldNames ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_formulaParameterListInExpression::cEnumerator_formulaParameterListInExpression (const GALGAS_formulaParameterListInExpression & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaParameterListInExpression_2D_element cEnumerator_formulaParameterListInExpression::current (LOCATION_ARGS) const {
  const cCollectionElement_formulaParameterListInExpression * p = (const cCollectionElement_formulaParameterListInExpression *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_formulaParameterListInExpression::current_mParameterName (LOCATION_ARGS) const {
  const cCollectionElement_formulaParameterListInExpression * p = (const cCollectionElement_formulaParameterListInExpression *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
  return p->mObject.mAttribute_mParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_formulaParameterListInExpression::current_mFieldNames (LOCATION_ARGS) const {
  const cCollectionElement_formulaParameterListInExpression * p = (const cCollectionElement_formulaParameterListInExpression *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
  return p->mObject.mAttribute_mFieldNames ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @formulaParameterListInExpression type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formulaParameterListInExpression ("formulaParameterListInExpression",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formulaParameterListInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaParameterListInExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formulaParameterListInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formulaParameterListInExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaParameterListInExpression GALGAS_formulaParameterListInExpression::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_formulaParameterListInExpression result ;
  const GALGAS_formulaParameterListInExpression * p = (const GALGAS_formulaParameterListInExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formulaParameterListInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaParameterListInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparison::GALGAS_comparison (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparison GALGAS_comparison::constructor_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparison GALGAS_comparison::constructor_notEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_notEqual ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparison GALGAS_comparison::constructor_lowerOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_lowerOrEqual ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparison GALGAS_comparison::constructor_lowerThan (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_lowerThan ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparison GALGAS_comparison::constructor_greaterOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_greaterOrEqual ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparison GALGAS_comparison::constructor_greaterThan (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_greaterThan ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_comparison [7] = {
  "(not built)",
  "equal",
  "notEqual",
  "lowerOrEqual",
  "lowerThan",
  "greaterOrEqual",
  "greaterThan"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_comparison::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_comparison::getter_isNotEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_notEqual == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_comparison::getter_isLowerOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lowerOrEqual == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_comparison::getter_isLowerThan (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lowerThan == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_comparison::getter_isGreaterOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greaterOrEqual == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_comparison::getter_isGreaterThan (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greaterThan == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_comparison::description (C_String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString << "<enum @comparison: " << gEnumNameArrayFor_comparison [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_comparison::objectCompare (const GALGAS_comparison & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @comparison type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparison ("comparison",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_comparison::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparison ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_comparison::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparison (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparison GALGAS_comparison::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_comparison result ;
  const GALGAS_comparison * p = (const GALGAS_comparison *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparison *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparison", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_start_5F_symbol_i0_ (GALGAS_ast & outArgument_outAST,
                                                                          C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outAST.drop () ; // Release 'out' argument
  outArgument_outAST = GALGAS_ast::constructor_default (SOURCE_FILE ("grammar.galgas", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_0 (inCompiler)) {
    case 2: {
      nt_topLevelDeClaration_ (outArgument_outAST, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_0 (inCompiler)) {
    case 2: {
      nt_topLevelDeClaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i1_ (GALGAS_ast & ioArgument_ioAST,
                                                                              C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_domain) COMMA_SOURCE_FILE ("domain.galgas", 41)) ;
  GALGAS_lstring var_domainName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("domain.galgas", 42)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("domain.galgas", 43)) ;
  GALGAS_domainDeclarationType var_domainDeclarationType ;
  switch (select_kerbdd_5F_syntax_1 (inCompiler)) {
  case 1: {
    GALGAS_bddType var_type ;
    nt_type_ (var_type, inCompiler) ;
    var_domainDeclarationType = GALGAS_domainDeclarationType::constructor_type (var_type  COMMA_SOURCE_FILE ("domain.galgas", 47)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("domain.galgas", 49)) ;
    GALGAS_domainFieldList var_fieldList ;
    nt_recordFields_ (var_fieldList, inCompiler) ;
    var_domainDeclarationType = GALGAS_domainDeclarationType::constructor_record (var_fieldList  COMMA_SOURCE_FILE ("domain.galgas", 51)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("domain.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("domain.galgas", 54)) ;
  ioArgument_ioAST.mAttribute_mDomainList.addAssign_operation (var_domainName, var_domainDeclarationType  COMMA_SOURCE_FILE ("domain.galgas", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i1_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_domain) COMMA_SOURCE_FILE ("domain.galgas", 41)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("domain.galgas", 42)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("domain.galgas", 43)) ;
  switch (select_kerbdd_5F_syntax_1 (inCompiler)) {
  case 1: {
    nt_type_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("domain.galgas", 49)) ;
    nt_recordFields_parse (inCompiler) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("domain.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("domain.galgas", 54)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_recordFields_i2_ (GALGAS_domainFieldList & outArgument_outFormulaArgumentList,
                                                                       C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outFormulaArgumentList.drop () ; // Release 'out' argument
  outArgument_outFormulaArgumentList = GALGAS_domainFieldList::constructor_emptyList (SOURCE_FILE ("domain.galgas", 61)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_varName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("domain.galgas", 63)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("domain.galgas", 64)) ;
    GALGAS_bddType var_type ;
    nt_type_ (var_type, inCompiler) ;
    outArgument_outFormulaArgumentList.addAssign_operation (var_varName, var_type  COMMA_SOURCE_FILE ("domain.galgas", 66)) ;
    switch (select_kerbdd_5F_syntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("domain.galgas", 68)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_recordFields_i2_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("domain.galgas", 63)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3A_) COMMA_SOURCE_FILE ("domain.galgas", 64)) ;
    nt_type_parse (inCompiler) ;
    switch (select_kerbdd_5F_syntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("domain.galgas", 68)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_type_i3_ (GALGAS_bddType & outArgument_outType,
                                                               C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outType.drop () ; // Release 'out' argument
  switch (select_kerbdd_5F_syntax_3 (inCompiler)) {
  case 1: {
    GALGAS_lstring var_typeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("domain.galgas", 76)) ;
    outArgument_outType = GALGAS_bddType::constructor_namedType (var_typeName  COMMA_SOURCE_FILE ("domain.galgas", 77)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_bool) COMMA_SOURCE_FILE ("domain.galgas", 79)) ;
    switch (select_kerbdd_5F_syntax_4 (inCompiler)) {
    case 1: {
      outArgument_outType = GALGAS_bddType::constructor_bool (SOURCE_FILE ("domain.galgas", 81)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("domain.galgas", 83)) ;
      GALGAS_luint var_bitCount = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("domain.galgas", 84)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("domain.galgas", 85)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_bitCount.mAttribute_uint.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_location location_1 (var_bitCount.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_1, GALGAS_string ("size should be > 0")  COMMA_SOURCE_FILE ("domain.galgas", 87)) ;
      }
      outArgument_outType = GALGAS_bddType::constructor_boolArray (var_bitCount.mAttribute_uint  COMMA_SOURCE_FILE ("domain.galgas", 89)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_type_i3_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  switch (select_kerbdd_5F_syntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("domain.galgas", 76)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_bool) COMMA_SOURCE_FILE ("domain.galgas", 79)) ;
    switch (select_kerbdd_5F_syntax_4 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__5B_) COMMA_SOURCE_FILE ("domain.galgas", 83)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("domain.galgas", 84)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__5D_) COMMA_SOURCE_FILE ("domain.galgas", 85)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i4_ (GALGAS_ast & ioArgument_ioAST,
                                                                              C_Lexique_kerbdd_5F_lexique * inCompiler) {
  GALGAS_lstring var_formulaName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("formula-assignment.galgas", 28)) ;
  GALGAS_domainFieldList var_domainFieldList ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("formula-assignment.galgas", 30)) ;
  switch (select_kerbdd_5F_syntax_5 (inCompiler)) {
  case 1: {
    var_domainFieldList = GALGAS_domainFieldList::constructor_emptyList (SOURCE_FILE ("formula-assignment.galgas", 32)) ;
  } break ;
  case 2: {
    nt_recordFields_ (var_domainFieldList, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("formula-assignment.galgas", 36)) ;
  GALGAS_formulaKind var_kind ;
  switch (select_kerbdd_5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3A__3D_) COMMA_SOURCE_FILE ("formula-assignment.galgas", 39)) ;
    var_kind = GALGAS_formulaKind::constructor_assignment (SOURCE_FILE ("formula-assignment.galgas", 40)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__2B__3D_) COMMA_SOURCE_FILE ("formula-assignment.galgas", 42)) ;
    var_kind = GALGAS_formulaKind::constructor_fixedPoint (GALGAS_binaryset::constructor_emptyBinarySet (SOURCE_FILE ("formula-assignment.galgas", 43))  COMMA_SOURCE_FILE ("formula-assignment.galgas", 43)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__2D__3D_) COMMA_SOURCE_FILE ("formula-assignment.galgas", 45)) ;
    var_kind = GALGAS_formulaKind::constructor_fixedPoint (GALGAS_binaryset::constructor_fullBinarySet (SOURCE_FILE ("formula-assignment.galgas", 46))  COMMA_SOURCE_FILE ("formula-assignment.galgas", 46)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_expression var_expression ;
  nt_expression_ (var_expression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("formula-assignment.galgas", 49)) ;
  ioArgument_ioAST.mAttribute_mFormulaList.addAssign_operation (GALGAS_assignmentFormula::constructor_new (var_formulaName, var_domainFieldList, var_kind, var_expression  COMMA_SOURCE_FILE ("formula-assignment.galgas", 50))  COMMA_SOURCE_FILE ("formula-assignment.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i4_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("formula-assignment.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("formula-assignment.galgas", 30)) ;
  switch (select_kerbdd_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_recordFields_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("formula-assignment.galgas", 36)) ;
  switch (select_kerbdd_5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3A__3D_) COMMA_SOURCE_FILE ("formula-assignment.galgas", 39)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__2B__3D_) COMMA_SOURCE_FILE ("formula-assignment.galgas", 42)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__2D__3D_) COMMA_SOURCE_FILE ("formula-assignment.galgas", 45)) ;
  } break ;
  default:
    break ;
  }
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("formula-assignment.galgas", 49)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i5_ (GALGAS_ast & ioArgument_ioAST,
                                                                              C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize) COMMA_SOURCE_FILE ("setting-map.galgas", 18)) ;
  GALGAS_luint var_setting = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("setting-map.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("setting-map.galgas", 20)) ;
  ioArgument_ioAST.mAttribute_mFormulaList.addAssign_operation (GALGAS_setting_5F_nodeHashMapSize::constructor_new (var_setting  COMMA_SOURCE_FILE ("setting-map.galgas", 21))  COMMA_SOURCE_FILE ("setting-map.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i5_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize) COMMA_SOURCE_FILE ("setting-map.galgas", 18)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("setting-map.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("setting-map.galgas", 20)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i6_ (GALGAS_ast & ioArgument_ioAST,
                                                                              C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize) COMMA_SOURCE_FILE ("setting-map.galgas", 27)) ;
  GALGAS_luint var_setting = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("setting-map.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("setting-map.galgas", 29)) ;
  ioArgument_ioAST.mAttribute_mFormulaList.addAssign_operation (GALGAS_setting_5F_andCacheMapSize::constructor_new (var_setting  COMMA_SOURCE_FILE ("setting-map.galgas", 30))  COMMA_SOURCE_FILE ("setting-map.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i6_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize) COMMA_SOURCE_FILE ("setting-map.galgas", 27)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("setting-map.galgas", 28)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("setting-map.galgas", 29)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i7_ (GALGAS_ast & ioArgument_ioAST,
                                                                              C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_dump) COMMA_SOURCE_FILE ("formula-dump.galgas", 18)) ;
  GALGAS_lstring var_formulaName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("formula-dump.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("formula-dump.galgas", 20)) ;
  ioArgument_ioAST.mAttribute_mFormulaList.addAssign_operation (GALGAS_dumpFormula::constructor_new (var_formulaName  COMMA_SOURCE_FILE ("formula-dump.galgas", 21))  COMMA_SOURCE_FILE ("formula-dump.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i7_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_dump) COMMA_SOURCE_FILE ("formula-dump.galgas", 18)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("formula-dump.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("formula-dump.galgas", 20)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i8_ (GALGAS_ast & ioArgument_ioAST,
                                                                              C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_graphviz) COMMA_SOURCE_FILE ("formula-graphviz.galgas", 18)) ;
  GALGAS_lstring var_formulaName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("formula-graphviz.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("formula-graphviz.galgas", 20)) ;
  ioArgument_ioAST.mAttribute_mFormulaList.addAssign_operation (GALGAS_graphvizFormula::constructor_new (var_formulaName  COMMA_SOURCE_FILE ("formula-graphviz.galgas", 21))  COMMA_SOURCE_FILE ("formula-graphviz.galgas", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i8_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_graphviz) COMMA_SOURCE_FILE ("formula-graphviz.galgas", 18)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("formula-graphviz.galgas", 19)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3B_) COMMA_SOURCE_FILE ("formula-graphviz.galgas", 20)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_expression_i9_ (GALGAS_expression & outArgument_outExpression,
                                                                     C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_comparison_ (outArgument_outExpression, inCompiler) ;
  switch (select_kerbdd_5F_syntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("expression.galgas", 102)) ;
    GALGAS_expression var_rightExpression ;
    nt_comparison_ (var_rightExpression, inCompiler) ;
    outArgument_outExpression = GALGAS_equalExpression::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("expression.galgas", 104)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__21__3D_) COMMA_SOURCE_FILE ("expression.galgas", 106)) ;
    GALGAS_expression var_rightExpression ;
    nt_comparison_ (var_rightExpression, inCompiler) ;
    outArgument_outExpression = GALGAS_notEqualExpression::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("expression.galgas", 108)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_expression_i9_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  nt_comparison_parse (inCompiler) ;
  switch (select_kerbdd_5F_syntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("expression.galgas", 102)) ;
    nt_comparison_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__21__3D_) COMMA_SOURCE_FILE ("expression.galgas", 106)) ;
    nt_comparison_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_comparison_i10_ (GALGAS_expression & outArgument_outExpression,
                                                                      C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__7C_) COMMA_SOURCE_FILE ("expression.galgas", 118)) ;
      GALGAS_expression var_rightExpression ;
      nt_term_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_orExpression::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("expression.galgas", 120)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__5E_) COMMA_SOURCE_FILE ("expression.galgas", 122)) ;
      GALGAS_expression var_rightExpression ;
      nt_term_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_xorExpression::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("expression.galgas", 124)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_comparison_i10_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  nt_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_8 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__7C_) COMMA_SOURCE_FILE ("expression.galgas", 118)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__5E_) COMMA_SOURCE_FILE ("expression.galgas", 122)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_term_i11_ (GALGAS_expression & outArgument_outExpression,
                                                                C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__26_) COMMA_SOURCE_FILE ("expression.galgas", 134)) ;
      GALGAS_expression var_rightExpression ;
      nt_factor_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_andExpression::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("expression.galgas", 136)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("expression.galgas", 138)) ;
      GALGAS_expression var_rightExpression ;
      nt_factor_ (var_rightExpression, inCompiler) ;
      outArgument_outExpression = GALGAS_impliesExpression::constructor_new (outArgument_outExpression, var_rightExpression  COMMA_SOURCE_FILE ("expression.galgas", 140)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_term_i11_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  nt_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_9 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__26_) COMMA_SOURCE_FILE ("expression.galgas", 134)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__2D__3E_) COMMA_SOURCE_FILE ("expression.galgas", 138)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i12_ (GALGAS_expression & outArgument_outExpression,
                                                                  C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_varName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression.galgas", 147)) ;
  switch (select_kerbdd_5F_syntax_10 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_varInExpression::constructor_new (var_varName  COMMA_SOURCE_FILE ("expression.galgas", 149)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("expression.galgas", 151)) ;
    GALGAS_luint var_varBit = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("expression.galgas", 152)) ;
    outArgument_outExpression = GALGAS_varBitInExpression::constructor_new (var_varName, var_varBit  COMMA_SOURCE_FILE ("expression.galgas", 153)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i12_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression.galgas", 147)) ;
  switch (select_kerbdd_5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("expression.galgas", 151)) ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("expression.galgas", 152)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i13_ (GALGAS_expression & outArgument_outExpression,
                                                                  C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression.galgas", 160)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression.galgas", 162)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i13_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression.galgas", 160)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression.galgas", 162)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i14_ (GALGAS_expression & outArgument_outExpression,
                                                                  C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__7E_) COMMA_SOURCE_FILE ("expression.galgas", 168)) ;
  GALGAS_expression var_expression ;
  nt_factor_ (var_expression, inCompiler) ;
  outArgument_outExpression = GALGAS_complementExpression::constructor_new (var_expression  COMMA_SOURCE_FILE ("expression.galgas", 170)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i14_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__7E_) COMMA_SOURCE_FILE ("expression.galgas", 168)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i15_ (GALGAS_expression & outArgument_outExpression,
                                                                  C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_true) COMMA_SOURCE_FILE ("expression.galgas", 176)) ;
  outArgument_outExpression = GALGAS_trueExpression::constructor_new (SOURCE_FILE ("expression.galgas", 177)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i15_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_true) COMMA_SOURCE_FILE ("expression.galgas", 176)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i16_ (GALGAS_expression & outArgument_outExpression,
                                                                  C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_false) COMMA_SOURCE_FILE ("expression.galgas", 183)) ;
  outArgument_outExpression = GALGAS_falseExpression::constructor_new (SOURCE_FILE ("expression.galgas", 184)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i16_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_false) COMMA_SOURCE_FILE ("expression.galgas", 183)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i17_ (GALGAS_expression & outArgument_outExpression,
                                                                  C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_formulaName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression.galgas", 190)) ;
  GALGAS_formulaParameterListInExpression var_parameterList = GALGAS_formulaParameterListInExpression::constructor_emptyList (SOURCE_FILE ("expression.galgas", 191)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression.galgas", 192)) ;
  switch (select_kerbdd_5F_syntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_parameterName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression.galgas", 196)) ;
      GALGAS_lstringlist var_fieldNames = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("expression.galgas", 197)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_kerbdd_5F_syntax_13 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("expression.galgas", 200)) ;
          GALGAS_lstring var_fieldName = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression.galgas", 201)) ;
          var_fieldNames.addAssign_operation (var_fieldName  COMMA_SOURCE_FILE ("expression.galgas", 202)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      var_parameterList.addAssign_operation (var_parameterName, var_fieldNames  COMMA_SOURCE_FILE ("expression.galgas", 204)) ;
      switch (select_kerbdd_5F_syntax_12 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("expression.galgas", 206)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression.galgas", 209)) ;
  outArgument_outExpression = GALGAS_formulaInExpression::constructor_new (var_formulaName, var_parameterList  COMMA_SOURCE_FILE ("expression.galgas", 210)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i17_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression.galgas", 190)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression.galgas", 192)) ;
  switch (select_kerbdd_5F_syntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression.galgas", 196)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_kerbdd_5F_syntax_13 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("expression.galgas", 200)) ;
          inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression.galgas", 201)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      switch (select_kerbdd_5F_syntax_12 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__2C_) COMMA_SOURCE_FILE ("expression.galgas", 206)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression.galgas", 209)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i18_ (GALGAS_expression & outArgument_outExpression,
                                                                  C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3F_) COMMA_SOURCE_FILE ("expression.galgas", 216)) ;
  GALGAS_domainFieldList var_domainFieldList ;
  nt_recordFields_ (var_domainFieldList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression.galgas", 218)) ;
  GALGAS_expression var_expression ;
  nt_expression_ (var_expression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression.galgas", 220)) ;
  outArgument_outExpression = GALGAS_existInExpression::constructor_new (var_domainFieldList, var_expression  COMMA_SOURCE_FILE ("expression.galgas", 221)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i18_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3F_) COMMA_SOURCE_FILE ("expression.galgas", 216)) ;
  nt_recordFields_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression.galgas", 218)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression.galgas", 220)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i19_ (GALGAS_expression & outArgument_outExpression,
                                                                  C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__21_) COMMA_SOURCE_FILE ("expression.galgas", 227)) ;
  GALGAS_domainFieldList var_domainFieldList ;
  nt_recordFields_ (var_domainFieldList, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression.galgas", 229)) ;
  GALGAS_expression var_expression ;
  nt_expression_ (var_expression, inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression.galgas", 231)) ;
  outArgument_outExpression = GALGAS_forAllInExpression::constructor_new (var_domainFieldList, var_expression  COMMA_SOURCE_FILE ("expression.galgas", 232)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i19_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__21_) COMMA_SOURCE_FILE ("expression.galgas", 227)) ;
  nt_recordFields_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__28_) COMMA_SOURCE_FILE ("expression.galgas", 229)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__29_) COMMA_SOURCE_FILE ("expression.galgas", 231)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i20_ (GALGAS_expression & outArgument_outExpression,
                                                                  C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("expression.galgas", 237)) ;
  GALGAS_lstring var_varName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression.galgas", 238)) ;
  GALGAS_lstringlist var_leftFieldNames = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("expression.galgas", 239)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("expression.galgas", 242)) ;
      GALGAS_lstring var_fieldName = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression.galgas", 243)) ;
      var_leftFieldNames.addAssign_operation (var_fieldName  COMMA_SOURCE_FILE ("expression.galgas", 244)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_comparison var_comparison ;
  switch (select_kerbdd_5F_syntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("expression.galgas", 248)) ;
    var_comparison = GALGAS_comparison::constructor_equal (SOURCE_FILE ("expression.galgas", 249)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__21__3D_) COMMA_SOURCE_FILE ("expression.galgas", 251)) ;
    var_comparison = GALGAS_comparison::constructor_notEqual (SOURCE_FILE ("expression.galgas", 252)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3C__3D_) COMMA_SOURCE_FILE ("expression.galgas", 254)) ;
    var_comparison = GALGAS_comparison::constructor_lowerOrEqual (SOURCE_FILE ("expression.galgas", 255)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3C_) COMMA_SOURCE_FILE ("expression.galgas", 257)) ;
    var_comparison = GALGAS_comparison::constructor_lowerThan (SOURCE_FILE ("expression.galgas", 258)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3E__3D_) COMMA_SOURCE_FILE ("expression.galgas", 260)) ;
    var_comparison = GALGAS_comparison::constructor_greaterOrEqual (SOURCE_FILE ("expression.galgas", 261)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3E_) COMMA_SOURCE_FILE ("expression.galgas", 263)) ;
    var_comparison = GALGAS_comparison::constructor_greaterThan (SOURCE_FILE ("expression.galgas", 264)) ;
  } break ;
  default:
    break ;
  }
  switch (select_kerbdd_5F_syntax_16 (inCompiler)) {
  case 1: {
    GALGAS_luint var_constant = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("expression.galgas", 267)) ;
    outArgument_outExpression = GALGAS_comparisonWithConstantInExpression::constructor_new (var_varName, var_leftFieldNames, var_comparison, var_constant  COMMA_SOURCE_FILE ("expression.galgas", 268)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_rightVarName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression.galgas", 270)) ;
    GALGAS_lstringlist var_rightFieldNames = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("expression.galgas", 271)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_kerbdd_5F_syntax_17 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("expression.galgas", 274)) ;
        GALGAS_lstring var_fieldName = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression.galgas", 275)) ;
        var_rightFieldNames.addAssign_operation (var_fieldName  COMMA_SOURCE_FILE ("expression.galgas", 276)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    outArgument_outExpression = GALGAS_variableComparisonInExpression::constructor_new (var_varName, var_leftFieldNames, var_comparison, var_rightVarName, var_rightFieldNames  COMMA_SOURCE_FILE ("expression.galgas", 278)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("expression.galgas", 280)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i20_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__7B_) COMMA_SOURCE_FILE ("expression.galgas", 237)) ;
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression.galgas", 238)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("expression.galgas", 242)) ;
      inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression.galgas", 243)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_kerbdd_5F_syntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3D_) COMMA_SOURCE_FILE ("expression.galgas", 248)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__21__3D_) COMMA_SOURCE_FILE ("expression.galgas", 251)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3C__3D_) COMMA_SOURCE_FILE ("expression.galgas", 254)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3C_) COMMA_SOURCE_FILE ("expression.galgas", 257)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3E__3D_) COMMA_SOURCE_FILE ("expression.galgas", 260)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__3E_) COMMA_SOURCE_FILE ("expression.galgas", 263)) ;
  } break ;
  default:
    break ;
  }
  switch (select_kerbdd_5F_syntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_integer) COMMA_SOURCE_FILE ("expression.galgas", 267)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression.galgas", 270)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_kerbdd_5F_syntax_17 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__2E_) COMMA_SOURCE_FILE ("expression.galgas", 274)) ;
        inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken_identifier) COMMA_SOURCE_FILE ("expression.galgas", 275)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_kerbdd_5F_lexique::kToken__7D_) COMMA_SOURCE_FILE ("expression.galgas", 280)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Class for element of '@formulaList' list                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_formulaList : public cCollectionElement {
  public : GALGAS_formulaList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_formulaList (const GALGAS_abstractFormula & in_mFormula
                                           COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public : virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public : virtual cCollectionElement * copy (void) ;

//--- Description
  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement_formulaList::cCollectionElement_formulaList (const GALGAS_abstractFormula & in_mFormula
                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormula) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_formulaList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_formulaList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_formulaList (mObject.mAttribute_mFormula COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_formulaList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormula" ":" ;
  mObject.mAttribute_mFormula.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_formulaList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formulaList * operand = (cCollectionElement_formulaList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formulaList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaList::GALGAS_formulaList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaList::GALGAS_formulaList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaList GALGAS_formulaList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_formulaList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaList GALGAS_formulaList::constructor_listWithValue (const GALGAS_abstractFormula & inOperand0
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_formulaList result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_formulaList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                    const GALGAS_abstractFormula & in_mFormula
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_formulaList * p = NULL ;
  macroMyNew (p, cCollectionElement_formulaList (in_mFormula COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaList::addAssign_operation (const GALGAS_abstractFormula & inOperand0
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_formulaList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaList::setter_insertAtIndex (const GALGAS_abstractFormula inOperand0,
                                               const GALGAS_uint inInsertionIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_formulaList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaList::setter_removeAtIndex (GALGAS_abstractFormula & outOperand0,
                                               const GALGAS_uint inRemoveIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_formulaList * p = (cCollectionElement_formulaList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_formulaList) ;
      outOperand0 = p->mObject.mAttribute_mFormula ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaList::setter_popFirst (GALGAS_abstractFormula & outOperand0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaList * p = (cCollectionElement_formulaList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formulaList) ;
    outOperand0 = p->mObject.mAttribute_mFormula ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaList::setter_popLast (GALGAS_abstractFormula & outOperand0,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaList * p = (cCollectionElement_formulaList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formulaList) ;
    outOperand0 = p->mObject.mAttribute_mFormula ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaList::method_first (GALGAS_abstractFormula & outOperand0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaList * p = (cCollectionElement_formulaList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formulaList) ;
    outOperand0 = p->mObject.mAttribute_mFormula ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaList::method_last (GALGAS_abstractFormula & outOperand0,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaList * p = (cCollectionElement_formulaList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formulaList) ;
    outOperand0 = p->mObject.mAttribute_mFormula ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaList GALGAS_formulaList::add_operation (const GALGAS_formulaList & inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formulaList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaList GALGAS_formulaList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formulaList result = GALGAS_formulaList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaList GALGAS_formulaList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formulaList result = GALGAS_formulaList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaList GALGAS_formulaList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_formulaList result = GALGAS_formulaList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaList::plusAssign_operation (const GALGAS_formulaList inOperand,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractFormula GALGAS_formulaList::getter_mFormulaAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaList * p = (cCollectionElement_formulaList *) attributes.ptr () ;
  GALGAS_abstractFormula result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formulaList) ;
    result = p->mObject.mAttribute_mFormula ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_formulaList::cEnumerator_formulaList (const GALGAS_formulaList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaList_2D_element cEnumerator_formulaList::current (LOCATION_ARGS) const {
  const cCollectionElement_formulaList * p = (const cCollectionElement_formulaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formulaList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractFormula cEnumerator_formulaList::current_mFormula (LOCATION_ARGS) const {
  const cCollectionElement_formulaList * p = (const cCollectionElement_formulaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formulaList) ;
  return p->mObject.mAttribute_mFormula ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @formulaList type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formulaList ("formulaList",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formulaList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formulaList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formulaList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaList GALGAS_formulaList::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formulaList result ;
  const GALGAS_formulaList * p = (const GALGAS_formulaList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formulaList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_formulaKind_fixedPoint::cEnumAssociatedValues_formulaKind_fixedPoint (const GALGAS_binaryset & inAssociatedValue0
                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_formulaKind_fixedPoint::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_formulaKind_fixedPoint::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_formulaKind_fixedPoint * ptr = dynamic_cast<const cEnumAssociatedValues_formulaKind_fixedPoint *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaKind::GALGAS_formulaKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaKind GALGAS_formulaKind::constructor_assignment (UNUSED_LOCATION_ARGS) {
  GALGAS_formulaKind result ;
  result.mEnum = kEnum_assignment ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaKind GALGAS_formulaKind::constructor_fixedPoint (const GALGAS_binaryset & inAssociatedValue0
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_formulaKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_fixedPoint ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_formulaKind_fixedPoint (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaKind::method_fixedPoint (GALGAS_binaryset & outAssociatedValue0,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fixedPoint) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @formulaKind fixedPoint invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_formulaKind_fixedPoint * ptr = (const cEnumAssociatedValues_formulaKind_fixedPoint *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_formulaKind [3] = {
  "(not built)",
  "assignment",
  "fixedPoint"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_formulaKind::getter_isAssignment (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_assignment == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_formulaKind::getter_isFixedPoint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixedPoint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaKind::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "<enum @formulaKind: " << gEnumNameArrayFor_formulaKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_formulaKind::objectCompare (const GALGAS_formulaKind & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @formulaKind type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formulaKind ("formulaKind",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formulaKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formulaKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formulaKind (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaKind GALGAS_formulaKind::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formulaKind result ;
  const GALGAS_formulaKind * p = (const GALGAS_formulaKind *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formulaKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       N O N    T E R M I N A L    N A M E S                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const char * gNonTerminalNames_kerbdd_grammar [27] = {
  "<start_symbol>",// Index 0
  "<topLevelDeClaration>",// Index 1
  "<recordFields>",// Index 2
  "<type>",// Index 3
  "<expression>",// Index 4
  "<comparison>",// Index 5
  "<term>",// Index 6
  "<factor>",// Index 7
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                S L R    A N A L Y Z E R    A C T I O N    T A B L E                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

// Action tables handle shift and reduce actions ;
//  - a shift action is (terminal_symbol, SHIFT (n)) : if shifts to state n ;
//  - the accept action is (terminal_symbol, ACCEPT) ;
//  - a reduce action is (terminal_symbol, REDUCE (n)) ; if reduces to state n.

#define SHIFT(a) ((a) + 2)
#define REDUCE(a) (-(a) - 1)
#define ACCEPT (1)
#define END (-1)

static const int16_t gActionTable_kerbdd_grammar [] = {
// State S0 (index = 0)
  C_Lexique_kerbdd_5F_lexique::kToken_domain, SHIFT (1)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (2)
, C_Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, SHIFT (3)
, C_Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, SHIFT (4)
, C_Lexique_kerbdd_5F_lexique::kToken_dump, SHIFT (5)
, C_Lexique_kerbdd_5F_lexique::kToken_graphviz, SHIFT (6)
, C_Lexique_kerbdd_5F_lexique::kToken_, REDUCE (21)
, END
// State S1 (index = 15)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (10)
, END
// State S2 (index = 18)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, SHIFT (11)
, END
// State S3 (index = 21)
, C_Lexique_kerbdd_5F_lexique::kToken_integer, SHIFT (12)
, END
// State S4 (index = 24)
, C_Lexique_kerbdd_5F_lexique::kToken_integer, SHIFT (13)
, END
// State S5 (index = 27)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (14)
, END
// State S6 (index = 30)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (15)
, END
// State S7 (index = 33)
, C_Lexique_kerbdd_5F_lexique::kToken_, ACCEPT
, END
// State S8 (index = 36)
, C_Lexique_kerbdd_5F_lexique::kToken_domain, SHIFT (1)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (2)
, C_Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, SHIFT (3)
, C_Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, SHIFT (4)
, C_Lexique_kerbdd_5F_lexique::kToken_dump, SHIFT (5)
, C_Lexique_kerbdd_5F_lexique::kToken_graphviz, SHIFT (6)
, C_Lexique_kerbdd_5F_lexique::kToken_, REDUCE (21)
, END
// State S9 (index = 51)
, C_Lexique_kerbdd_5F_lexique::kToken_, REDUCE (0)
, END
// State S10 (index = 54)
, C_Lexique_kerbdd_5F_lexique::kToken__3A_, SHIFT (17)
, END
// State S11 (index = 57)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (18)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (31)
, END
// State S12 (index = 62)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, SHIFT (21)
, END
// State S13 (index = 65)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, SHIFT (22)
, END
// State S14 (index = 68)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, SHIFT (23)
, END
// State S15 (index = 71)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, SHIFT (24)
, END
// State S16 (index = 74)
, C_Lexique_kerbdd_5F_lexique::kToken_, REDUCE (22)
, END
// State S17 (index = 77)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (25)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, SHIFT (26)
, C_Lexique_kerbdd_5F_lexique::kToken_bool, SHIFT (27)
, END
// State S18 (index = 84)
, C_Lexique_kerbdd_5F_lexique::kToken__3A_, SHIFT (31)
, END
// State S19 (index = 87)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (32)
, END
// State S20 (index = 90)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, SHIFT (32)
, END
// State S21 (index = 93)
, C_Lexique_kerbdd_5F_lexique::kToken_domain, REDUCE (5)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, REDUCE (5)
, C_Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, REDUCE (5)
, C_Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, REDUCE (5)
, C_Lexique_kerbdd_5F_lexique::kToken_dump, REDUCE (5)
, C_Lexique_kerbdd_5F_lexique::kToken_graphviz, REDUCE (5)
, C_Lexique_kerbdd_5F_lexique::kToken_, REDUCE (5)
, END
// State S22 (index = 108)
, C_Lexique_kerbdd_5F_lexique::kToken_domain, REDUCE (6)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, REDUCE (6)
, C_Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, REDUCE (6)
, C_Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, REDUCE (6)
, C_Lexique_kerbdd_5F_lexique::kToken_dump, REDUCE (6)
, C_Lexique_kerbdd_5F_lexique::kToken_graphviz, REDUCE (6)
, C_Lexique_kerbdd_5F_lexique::kToken_, REDUCE (6)
, END
// State S23 (index = 123)
, C_Lexique_kerbdd_5F_lexique::kToken_domain, REDUCE (7)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, REDUCE (7)
, C_Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, REDUCE (7)
, C_Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, REDUCE (7)
, C_Lexique_kerbdd_5F_lexique::kToken_dump, REDUCE (7)
, C_Lexique_kerbdd_5F_lexique::kToken_graphviz, REDUCE (7)
, C_Lexique_kerbdd_5F_lexique::kToken_, REDUCE (7)
, END
// State S24 (index = 138)
, C_Lexique_kerbdd_5F_lexique::kToken_domain, REDUCE (8)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, REDUCE (8)
, C_Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, REDUCE (8)
, C_Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, REDUCE (8)
, C_Lexique_kerbdd_5F_lexique::kToken_dump, REDUCE (8)
, C_Lexique_kerbdd_5F_lexique::kToken_graphviz, REDUCE (8)
, C_Lexique_kerbdd_5F_lexique::kToken_, REDUCE (8)
, END
// State S25 (index = 153)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, REDUCE (27)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (27)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (27)
, C_Lexique_kerbdd_5F_lexique::kToken__2C_, REDUCE (27)
, END
// State S26 (index = 162)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (18)
, END
// State S27 (index = 165)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, REDUCE (29)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (29)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (29)
, C_Lexique_kerbdd_5F_lexique::kToken__2C_, REDUCE (29)
, C_Lexique_kerbdd_5F_lexique::kToken__5B_, SHIFT (34)
, END
// State S28 (index = 176)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (23)
, END
// State S29 (index = 179)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, SHIFT (36)
, END
// State S30 (index = 182)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, REDUCE (3)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (3)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (3)
, C_Lexique_kerbdd_5F_lexique::kToken__2C_, REDUCE (3)
, END
// State S31 (index = 191)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (25)
, C_Lexique_kerbdd_5F_lexique::kToken_bool, SHIFT (27)
, END
// State S32 (index = 196)
, C_Lexique_kerbdd_5F_lexique::kToken__3A__3D_, SHIFT (38)
, C_Lexique_kerbdd_5F_lexique::kToken__2B__3D_, SHIFT (39)
, C_Lexique_kerbdd_5F_lexique::kToken__2D__3D_, SHIFT (40)
, END
// State S33 (index = 203)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, SHIFT (42)
, END
// State S34 (index = 206)
, C_Lexique_kerbdd_5F_lexique::kToken_integer, SHIFT (43)
, END
// State S35 (index = 209)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, REDUCE (28)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (28)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (28)
, C_Lexique_kerbdd_5F_lexique::kToken__2C_, REDUCE (28)
, END
// State S36 (index = 218)
, C_Lexique_kerbdd_5F_lexique::kToken_domain, REDUCE (1)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, REDUCE (1)
, C_Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, REDUCE (1)
, C_Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, REDUCE (1)
, C_Lexique_kerbdd_5F_lexique::kToken_dump, REDUCE (1)
, C_Lexique_kerbdd_5F_lexique::kToken_graphviz, REDUCE (1)
, C_Lexique_kerbdd_5F_lexique::kToken_, REDUCE (1)
, END
// State S37 (index = 233)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, REDUCE (25)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (25)
, C_Lexique_kerbdd_5F_lexique::kToken__2C_, SHIFT (44)
, END
// State S38 (index = 240)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, REDUCE (33)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, REDUCE (33)
, C_Lexique_kerbdd_5F_lexique::kToken__7E_, REDUCE (33)
, C_Lexique_kerbdd_5F_lexique::kToken_true, REDUCE (33)
, C_Lexique_kerbdd_5F_lexique::kToken_false, REDUCE (33)
, C_Lexique_kerbdd_5F_lexique::kToken__3F_, REDUCE (33)
, C_Lexique_kerbdd_5F_lexique::kToken__21_, REDUCE (33)
, C_Lexique_kerbdd_5F_lexique::kToken__7B_, REDUCE (33)
, END
// State S39 (index = 257)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, REDUCE (34)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, REDUCE (34)
, C_Lexique_kerbdd_5F_lexique::kToken__7E_, REDUCE (34)
, C_Lexique_kerbdd_5F_lexique::kToken_true, REDUCE (34)
, C_Lexique_kerbdd_5F_lexique::kToken_false, REDUCE (34)
, C_Lexique_kerbdd_5F_lexique::kToken__3F_, REDUCE (34)
, C_Lexique_kerbdd_5F_lexique::kToken__21_, REDUCE (34)
, C_Lexique_kerbdd_5F_lexique::kToken__7B_, REDUCE (34)
, END
// State S40 (index = 274)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, REDUCE (35)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, REDUCE (35)
, C_Lexique_kerbdd_5F_lexique::kToken__7E_, REDUCE (35)
, C_Lexique_kerbdd_5F_lexique::kToken_true, REDUCE (35)
, C_Lexique_kerbdd_5F_lexique::kToken_false, REDUCE (35)
, C_Lexique_kerbdd_5F_lexique::kToken__3F_, REDUCE (35)
, C_Lexique_kerbdd_5F_lexique::kToken__21_, REDUCE (35)
, C_Lexique_kerbdd_5F_lexique::kToken__7B_, REDUCE (35)
, END
// State S41 (index = 291)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (46)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, SHIFT (47)
, C_Lexique_kerbdd_5F_lexique::kToken__7E_, SHIFT (48)
, C_Lexique_kerbdd_5F_lexique::kToken_true, SHIFT (49)
, C_Lexique_kerbdd_5F_lexique::kToken_false, SHIFT (50)
, C_Lexique_kerbdd_5F_lexique::kToken__3F_, SHIFT (51)
, C_Lexique_kerbdd_5F_lexique::kToken__21_, SHIFT (52)
, C_Lexique_kerbdd_5F_lexique::kToken__7B_, SHIFT (53)
, END
// State S42 (index = 308)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (24)
, END
// State S43 (index = 311)
, C_Lexique_kerbdd_5F_lexique::kToken__5D_, SHIFT (58)
, END
// State S44 (index = 314)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (59)
, END
// State S45 (index = 317)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, REDUCE (2)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (2)
, END
// State S46 (index = 322)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, SHIFT (60)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (45)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (45)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (45)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (45)
, C_Lexique_kerbdd_5F_lexique::kToken__7C_, REDUCE (45)
, C_Lexique_kerbdd_5F_lexique::kToken__5E_, REDUCE (45)
, C_Lexique_kerbdd_5F_lexique::kToken__26_, REDUCE (45)
, C_Lexique_kerbdd_5F_lexique::kToken__2D__3E_, REDUCE (45)
, C_Lexique_kerbdd_5F_lexique::kToken__2E_, SHIFT (61)
, END
// State S47 (index = 343)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (46)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, SHIFT (47)
, C_Lexique_kerbdd_5F_lexique::kToken__7E_, SHIFT (48)
, C_Lexique_kerbdd_5F_lexique::kToken_true, SHIFT (49)
, C_Lexique_kerbdd_5F_lexique::kToken_false, SHIFT (50)
, C_Lexique_kerbdd_5F_lexique::kToken__3F_, SHIFT (51)
, C_Lexique_kerbdd_5F_lexique::kToken__21_, SHIFT (52)
, C_Lexique_kerbdd_5F_lexique::kToken__7B_, SHIFT (53)
, END
// State S48 (index = 360)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (46)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, SHIFT (47)
, C_Lexique_kerbdd_5F_lexique::kToken__7E_, SHIFT (48)
, C_Lexique_kerbdd_5F_lexique::kToken_true, SHIFT (49)
, C_Lexique_kerbdd_5F_lexique::kToken_false, SHIFT (50)
, C_Lexique_kerbdd_5F_lexique::kToken__3F_, SHIFT (51)
, C_Lexique_kerbdd_5F_lexique::kToken__21_, SHIFT (52)
, C_Lexique_kerbdd_5F_lexique::kToken__7B_, SHIFT (53)
, END
// State S49 (index = 377)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (15)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (15)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (15)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (15)
, C_Lexique_kerbdd_5F_lexique::kToken__7C_, REDUCE (15)
, C_Lexique_kerbdd_5F_lexique::kToken__5E_, REDUCE (15)
, C_Lexique_kerbdd_5F_lexique::kToken__26_, REDUCE (15)
, C_Lexique_kerbdd_5F_lexique::kToken__2D__3E_, REDUCE (15)
, END
// State S50 (index = 394)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (16)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (16)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (16)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (16)
, C_Lexique_kerbdd_5F_lexique::kToken__7C_, REDUCE (16)
, C_Lexique_kerbdd_5F_lexique::kToken__5E_, REDUCE (16)
, C_Lexique_kerbdd_5F_lexique::kToken__26_, REDUCE (16)
, C_Lexique_kerbdd_5F_lexique::kToken__2D__3E_, REDUCE (16)
, END
// State S51 (index = 411)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (18)
, END
// State S52 (index = 414)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (18)
, END
// State S53 (index = 417)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (67)
, END
// State S54 (index = 420)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, SHIFT (68)
, END
// State S55 (index = 423)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (36)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (36)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, SHIFT (69)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, SHIFT (70)
, END
// State S56 (index = 432)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (39)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (39)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (39)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (39)
, C_Lexique_kerbdd_5F_lexique::kToken__7C_, SHIFT (72)
, C_Lexique_kerbdd_5F_lexique::kToken__5E_, SHIFT (73)
, END
// State S57 (index = 445)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (42)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (42)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (42)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (42)
, C_Lexique_kerbdd_5F_lexique::kToken__7C_, REDUCE (42)
, C_Lexique_kerbdd_5F_lexique::kToken__5E_, REDUCE (42)
, C_Lexique_kerbdd_5F_lexique::kToken__26_, SHIFT (75)
, C_Lexique_kerbdd_5F_lexique::kToken__2D__3E_, SHIFT (76)
, END
// State S58 (index = 462)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, REDUCE (30)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (30)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (30)
, C_Lexique_kerbdd_5F_lexique::kToken__2C_, REDUCE (30)
, END
// State S59 (index = 471)
, C_Lexique_kerbdd_5F_lexique::kToken__3A_, SHIFT (78)
, END
// State S60 (index = 474)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (79)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (47)
, END
// State S61 (index = 479)
, C_Lexique_kerbdd_5F_lexique::kToken_integer, SHIFT (81)
, END
// State S62 (index = 482)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (12)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (12)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (12)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (12)
, C_Lexique_kerbdd_5F_lexique::kToken__7C_, REDUCE (12)
, C_Lexique_kerbdd_5F_lexique::kToken__5E_, REDUCE (12)
, C_Lexique_kerbdd_5F_lexique::kToken__26_, REDUCE (12)
, C_Lexique_kerbdd_5F_lexique::kToken__2D__3E_, REDUCE (12)
, END
// State S63 (index = 499)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, SHIFT (82)
, END
// State S64 (index = 502)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (14)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (14)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (14)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (14)
, C_Lexique_kerbdd_5F_lexique::kToken__7C_, REDUCE (14)
, C_Lexique_kerbdd_5F_lexique::kToken__5E_, REDUCE (14)
, C_Lexique_kerbdd_5F_lexique::kToken__26_, REDUCE (14)
, C_Lexique_kerbdd_5F_lexique::kToken__2D__3E_, REDUCE (14)
, END
// State S65 (index = 519)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, SHIFT (83)
, END
// State S66 (index = 522)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, SHIFT (84)
, END
// State S67 (index = 525)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (53)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (53)
, C_Lexique_kerbdd_5F_lexique::kToken__2E_, SHIFT (85)
, C_Lexique_kerbdd_5F_lexique::kToken__3C__3D_, REDUCE (53)
, C_Lexique_kerbdd_5F_lexique::kToken__3C_, REDUCE (53)
, C_Lexique_kerbdd_5F_lexique::kToken__3E__3D_, REDUCE (53)
, C_Lexique_kerbdd_5F_lexique::kToken__3E_, REDUCE (53)
, END
// State S68 (index = 540)
, C_Lexique_kerbdd_5F_lexique::kToken_domain, REDUCE (4)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, REDUCE (4)
, C_Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize, REDUCE (4)
, C_Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize, REDUCE (4)
, C_Lexique_kerbdd_5F_lexique::kToken_dump, REDUCE (4)
, C_Lexique_kerbdd_5F_lexique::kToken_graphviz, REDUCE (4)
, C_Lexique_kerbdd_5F_lexique::kToken_, REDUCE (4)
, END
// State S69 (index = 555)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (46)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, SHIFT (47)
, C_Lexique_kerbdd_5F_lexique::kToken__7E_, SHIFT (48)
, C_Lexique_kerbdd_5F_lexique::kToken_true, SHIFT (49)
, C_Lexique_kerbdd_5F_lexique::kToken_false, SHIFT (50)
, C_Lexique_kerbdd_5F_lexique::kToken__3F_, SHIFT (51)
, C_Lexique_kerbdd_5F_lexique::kToken__21_, SHIFT (52)
, C_Lexique_kerbdd_5F_lexique::kToken__7B_, SHIFT (53)
, END
// State S70 (index = 572)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (46)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, SHIFT (47)
, C_Lexique_kerbdd_5F_lexique::kToken__7E_, SHIFT (48)
, C_Lexique_kerbdd_5F_lexique::kToken_true, SHIFT (49)
, C_Lexique_kerbdd_5F_lexique::kToken_false, SHIFT (50)
, C_Lexique_kerbdd_5F_lexique::kToken__3F_, SHIFT (51)
, C_Lexique_kerbdd_5F_lexique::kToken__21_, SHIFT (52)
, C_Lexique_kerbdd_5F_lexique::kToken__7B_, SHIFT (53)
, END
// State S71 (index = 589)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (9)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (9)
, END
// State S72 (index = 594)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (46)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, SHIFT (47)
, C_Lexique_kerbdd_5F_lexique::kToken__7E_, SHIFT (48)
, C_Lexique_kerbdd_5F_lexique::kToken_true, SHIFT (49)
, C_Lexique_kerbdd_5F_lexique::kToken_false, SHIFT (50)
, C_Lexique_kerbdd_5F_lexique::kToken__3F_, SHIFT (51)
, C_Lexique_kerbdd_5F_lexique::kToken__21_, SHIFT (52)
, C_Lexique_kerbdd_5F_lexique::kToken__7B_, SHIFT (53)
, END
// State S73 (index = 611)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (46)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, SHIFT (47)
, C_Lexique_kerbdd_5F_lexique::kToken__7E_, SHIFT (48)
, C_Lexique_kerbdd_5F_lexique::kToken_true, SHIFT (49)
, C_Lexique_kerbdd_5F_lexique::kToken_false, SHIFT (50)
, C_Lexique_kerbdd_5F_lexique::kToken__3F_, SHIFT (51)
, C_Lexique_kerbdd_5F_lexique::kToken__21_, SHIFT (52)
, C_Lexique_kerbdd_5F_lexique::kToken__7B_, SHIFT (53)
, END
// State S74 (index = 628)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (10)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (10)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (10)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (10)
, END
// State S75 (index = 637)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (46)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, SHIFT (47)
, C_Lexique_kerbdd_5F_lexique::kToken__7E_, SHIFT (48)
, C_Lexique_kerbdd_5F_lexique::kToken_true, SHIFT (49)
, C_Lexique_kerbdd_5F_lexique::kToken_false, SHIFT (50)
, C_Lexique_kerbdd_5F_lexique::kToken__3F_, SHIFT (51)
, C_Lexique_kerbdd_5F_lexique::kToken__21_, SHIFT (52)
, C_Lexique_kerbdd_5F_lexique::kToken__7B_, SHIFT (53)
, END
// State S76 (index = 654)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (46)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, SHIFT (47)
, C_Lexique_kerbdd_5F_lexique::kToken__7E_, SHIFT (48)
, C_Lexique_kerbdd_5F_lexique::kToken_true, SHIFT (49)
, C_Lexique_kerbdd_5F_lexique::kToken_false, SHIFT (50)
, C_Lexique_kerbdd_5F_lexique::kToken__3F_, SHIFT (51)
, C_Lexique_kerbdd_5F_lexique::kToken__21_, SHIFT (52)
, C_Lexique_kerbdd_5F_lexique::kToken__7B_, SHIFT (53)
, END
// State S77 (index = 671)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (11)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (11)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (11)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (11)
, C_Lexique_kerbdd_5F_lexique::kToken__7C_, REDUCE (11)
, C_Lexique_kerbdd_5F_lexique::kToken__5E_, REDUCE (11)
, END
// State S78 (index = 684)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (25)
, C_Lexique_kerbdd_5F_lexique::kToken_bool, SHIFT (27)
, END
// State S79 (index = 689)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (51)
, C_Lexique_kerbdd_5F_lexique::kToken__2C_, REDUCE (51)
, C_Lexique_kerbdd_5F_lexique::kToken__2E_, SHIFT (94)
, END
// State S80 (index = 696)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, SHIFT (96)
, END
// State S81 (index = 699)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (46)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (46)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (46)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (46)
, C_Lexique_kerbdd_5F_lexique::kToken__7C_, REDUCE (46)
, C_Lexique_kerbdd_5F_lexique::kToken__5E_, REDUCE (46)
, C_Lexique_kerbdd_5F_lexique::kToken__26_, REDUCE (46)
, C_Lexique_kerbdd_5F_lexique::kToken__2D__3E_, REDUCE (46)
, END
// State S82 (index = 716)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (13)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (13)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (13)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (13)
, C_Lexique_kerbdd_5F_lexique::kToken__7C_, REDUCE (13)
, C_Lexique_kerbdd_5F_lexique::kToken__5E_, REDUCE (13)
, C_Lexique_kerbdd_5F_lexique::kToken__26_, REDUCE (13)
, C_Lexique_kerbdd_5F_lexique::kToken__2D__3E_, REDUCE (13)
, END
// State S83 (index = 733)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (46)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, SHIFT (47)
, C_Lexique_kerbdd_5F_lexique::kToken__7E_, SHIFT (48)
, C_Lexique_kerbdd_5F_lexique::kToken_true, SHIFT (49)
, C_Lexique_kerbdd_5F_lexique::kToken_false, SHIFT (50)
, C_Lexique_kerbdd_5F_lexique::kToken__3F_, SHIFT (51)
, C_Lexique_kerbdd_5F_lexique::kToken__21_, SHIFT (52)
, C_Lexique_kerbdd_5F_lexique::kToken__7B_, SHIFT (53)
, END
// State S84 (index = 750)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (46)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, SHIFT (47)
, C_Lexique_kerbdd_5F_lexique::kToken__7E_, SHIFT (48)
, C_Lexique_kerbdd_5F_lexique::kToken_true, SHIFT (49)
, C_Lexique_kerbdd_5F_lexique::kToken_false, SHIFT (50)
, C_Lexique_kerbdd_5F_lexique::kToken__3F_, SHIFT (51)
, C_Lexique_kerbdd_5F_lexique::kToken__21_, SHIFT (52)
, C_Lexique_kerbdd_5F_lexique::kToken__7B_, SHIFT (53)
, END
// State S85 (index = 767)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (99)
, END
// State S86 (index = 770)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, SHIFT (100)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, SHIFT (101)
, C_Lexique_kerbdd_5F_lexique::kToken__3C__3D_, SHIFT (102)
, C_Lexique_kerbdd_5F_lexique::kToken__3C_, SHIFT (103)
, C_Lexique_kerbdd_5F_lexique::kToken__3E__3D_, SHIFT (104)
, C_Lexique_kerbdd_5F_lexique::kToken__3E_, SHIFT (105)
, END
// State S87 (index = 783)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (37)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (37)
, END
// State S88 (index = 788)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (38)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (38)
, END
// State S89 (index = 793)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (39)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (39)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (39)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (39)
, C_Lexique_kerbdd_5F_lexique::kToken__7C_, SHIFT (72)
, C_Lexique_kerbdd_5F_lexique::kToken__5E_, SHIFT (73)
, END
// State S90 (index = 806)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (39)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (39)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (39)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (39)
, C_Lexique_kerbdd_5F_lexique::kToken__7C_, SHIFT (72)
, C_Lexique_kerbdd_5F_lexique::kToken__5E_, SHIFT (73)
, END
// State S91 (index = 819)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (42)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (42)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (42)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (42)
, C_Lexique_kerbdd_5F_lexique::kToken__7C_, REDUCE (42)
, C_Lexique_kerbdd_5F_lexique::kToken__5E_, REDUCE (42)
, C_Lexique_kerbdd_5F_lexique::kToken__26_, SHIFT (75)
, C_Lexique_kerbdd_5F_lexique::kToken__2D__3E_, SHIFT (76)
, END
// State S92 (index = 836)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (42)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (42)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (42)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (42)
, C_Lexique_kerbdd_5F_lexique::kToken__7C_, REDUCE (42)
, C_Lexique_kerbdd_5F_lexique::kToken__5E_, REDUCE (42)
, C_Lexique_kerbdd_5F_lexique::kToken__26_, SHIFT (75)
, C_Lexique_kerbdd_5F_lexique::kToken__2D__3E_, SHIFT (76)
, END
// State S93 (index = 853)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, REDUCE (25)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (25)
, C_Lexique_kerbdd_5F_lexique::kToken__2C_, SHIFT (44)
, END
// State S94 (index = 860)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (112)
, END
// State S95 (index = 863)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (49)
, C_Lexique_kerbdd_5F_lexique::kToken__2C_, SHIFT (113)
, END
// State S96 (index = 868)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (17)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (17)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (17)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (17)
, C_Lexique_kerbdd_5F_lexique::kToken__7C_, REDUCE (17)
, C_Lexique_kerbdd_5F_lexique::kToken__5E_, REDUCE (17)
, C_Lexique_kerbdd_5F_lexique::kToken__26_, REDUCE (17)
, C_Lexique_kerbdd_5F_lexique::kToken__2D__3E_, REDUCE (17)
, END
// State S97 (index = 885)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, SHIFT (115)
, END
// State S98 (index = 888)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, SHIFT (116)
, END
// State S99 (index = 891)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (53)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (53)
, C_Lexique_kerbdd_5F_lexique::kToken__2E_, SHIFT (85)
, C_Lexique_kerbdd_5F_lexique::kToken__3C__3D_, REDUCE (53)
, C_Lexique_kerbdd_5F_lexique::kToken__3C_, REDUCE (53)
, C_Lexique_kerbdd_5F_lexique::kToken__3E__3D_, REDUCE (53)
, C_Lexique_kerbdd_5F_lexique::kToken__3E_, REDUCE (53)
, END
// State S100 (index = 906)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, REDUCE (55)
, C_Lexique_kerbdd_5F_lexique::kToken_integer, REDUCE (55)
, END
// State S101 (index = 911)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, REDUCE (56)
, C_Lexique_kerbdd_5F_lexique::kToken_integer, REDUCE (56)
, END
// State S102 (index = 916)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, REDUCE (57)
, C_Lexique_kerbdd_5F_lexique::kToken_integer, REDUCE (57)
, END
// State S103 (index = 921)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, REDUCE (58)
, C_Lexique_kerbdd_5F_lexique::kToken_integer, REDUCE (58)
, END
// State S104 (index = 926)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, REDUCE (59)
, C_Lexique_kerbdd_5F_lexique::kToken_integer, REDUCE (59)
, END
// State S105 (index = 931)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, REDUCE (60)
, C_Lexique_kerbdd_5F_lexique::kToken_integer, REDUCE (60)
, END
// State S106 (index = 936)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (118)
, C_Lexique_kerbdd_5F_lexique::kToken_integer, SHIFT (119)
, END
// State S107 (index = 941)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (40)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (40)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (40)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (40)
, END
// State S108 (index = 950)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (41)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (41)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (41)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (41)
, END
// State S109 (index = 959)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (43)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (43)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (43)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (43)
, C_Lexique_kerbdd_5F_lexique::kToken__7C_, REDUCE (43)
, C_Lexique_kerbdd_5F_lexique::kToken__5E_, REDUCE (43)
, END
// State S110 (index = 972)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (44)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (44)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (44)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (44)
, C_Lexique_kerbdd_5F_lexique::kToken__7C_, REDUCE (44)
, C_Lexique_kerbdd_5F_lexique::kToken__5E_, REDUCE (44)
, END
// State S111 (index = 985)
, C_Lexique_kerbdd_5F_lexique::kToken__28_, REDUCE (26)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (26)
, END
// State S112 (index = 990)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (51)
, C_Lexique_kerbdd_5F_lexique::kToken__2C_, REDUCE (51)
, C_Lexique_kerbdd_5F_lexique::kToken__2E_, SHIFT (94)
, END
// State S113 (index = 997)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (122)
, END
// State S114 (index = 1000)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (48)
, END
// State S115 (index = 1003)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (18)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (18)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (18)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (18)
, C_Lexique_kerbdd_5F_lexique::kToken__7C_, REDUCE (18)
, C_Lexique_kerbdd_5F_lexique::kToken__5E_, REDUCE (18)
, C_Lexique_kerbdd_5F_lexique::kToken__26_, REDUCE (18)
, C_Lexique_kerbdd_5F_lexique::kToken__2D__3E_, REDUCE (18)
, END
// State S116 (index = 1020)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (19)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (19)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (19)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (19)
, C_Lexique_kerbdd_5F_lexique::kToken__7C_, REDUCE (19)
, C_Lexique_kerbdd_5F_lexique::kToken__5E_, REDUCE (19)
, C_Lexique_kerbdd_5F_lexique::kToken__26_, REDUCE (19)
, C_Lexique_kerbdd_5F_lexique::kToken__2D__3E_, REDUCE (19)
, END
// State S117 (index = 1037)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (54)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (54)
, C_Lexique_kerbdd_5F_lexique::kToken__3C__3D_, REDUCE (54)
, C_Lexique_kerbdd_5F_lexique::kToken__3C_, REDUCE (54)
, C_Lexique_kerbdd_5F_lexique::kToken__3E__3D_, REDUCE (54)
, C_Lexique_kerbdd_5F_lexique::kToken__3E_, REDUCE (54)
, END
// State S118 (index = 1050)
, C_Lexique_kerbdd_5F_lexique::kToken__2E_, SHIFT (123)
, C_Lexique_kerbdd_5F_lexique::kToken__7D_, REDUCE (63)
, END
// State S119 (index = 1055)
, C_Lexique_kerbdd_5F_lexique::kToken__7D_, REDUCE (61)
, END
// State S120 (index = 1058)
, C_Lexique_kerbdd_5F_lexique::kToken__7D_, SHIFT (125)
, END
// State S121 (index = 1061)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (52)
, C_Lexique_kerbdd_5F_lexique::kToken__2C_, REDUCE (52)
, END
// State S122 (index = 1066)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (51)
, C_Lexique_kerbdd_5F_lexique::kToken__2C_, REDUCE (51)
, C_Lexique_kerbdd_5F_lexique::kToken__2E_, SHIFT (94)
, END
// State S123 (index = 1073)
, C_Lexique_kerbdd_5F_lexique::kToken_identifier, SHIFT (127)
, END
// State S124 (index = 1076)
, C_Lexique_kerbdd_5F_lexique::kToken__7D_, REDUCE (62)
, END
// State S125 (index = 1079)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (20)
, C_Lexique_kerbdd_5F_lexique::kToken__3B_, REDUCE (20)
, C_Lexique_kerbdd_5F_lexique::kToken__3D_, REDUCE (20)
, C_Lexique_kerbdd_5F_lexique::kToken__21__3D_, REDUCE (20)
, C_Lexique_kerbdd_5F_lexique::kToken__7C_, REDUCE (20)
, C_Lexique_kerbdd_5F_lexique::kToken__5E_, REDUCE (20)
, C_Lexique_kerbdd_5F_lexique::kToken__26_, REDUCE (20)
, C_Lexique_kerbdd_5F_lexique::kToken__2D__3E_, REDUCE (20)
, END
// State S126 (index = 1096)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (49)
, C_Lexique_kerbdd_5F_lexique::kToken__2C_, SHIFT (113)
, END
// State S127 (index = 1101)
, C_Lexique_kerbdd_5F_lexique::kToken__2E_, SHIFT (123)
, C_Lexique_kerbdd_5F_lexique::kToken__7D_, REDUCE (63)
, END
// State S128 (index = 1106)
, C_Lexique_kerbdd_5F_lexique::kToken__29_, REDUCE (50)
, END
// State S129 (index = 1109)
, C_Lexique_kerbdd_5F_lexique::kToken__7D_, REDUCE (64)
, END} ;

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
, 57  // S11
, 62  // S12
, 65  // S13
, 68  // S14
, 71  // S15
, 74  // S16
, 77  // S17
, 84  // S18
, 87  // S19
, 90  // S20
, 93  // S21
, 108  // S22
, 123  // S23
, 138  // S24
, 153  // S25
, 162  // S26
, 165  // S27
, 176  // S28
, 179  // S29
, 182  // S30
, 191  // S31
, 196  // S32
, 203  // S33
, 206  // S34
, 209  // S35
, 218  // S36
, 233  // S37
, 240  // S38
, 257  // S39
, 274  // S40
, 291  // S41
, 308  // S42
, 311  // S43
, 314  // S44
, 317  // S45
, 322  // S46
, 343  // S47
, 360  // S48
, 377  // S49
, 394  // S50
, 411  // S51
, 414  // S52
, 417  // S53
, 420  // S54
, 423  // S55
, 432  // S56
, 445  // S57
, 462  // S58
, 471  // S59
, 474  // S60
, 479  // S61
, 482  // S62
, 499  // S63
, 502  // S64
, 519  // S65
, 522  // S66
, 525  // S67
, 540  // S68
, 555  // S69
, 572  // S70
, 589  // S71
, 594  // S72
, 611  // S73
, 628  // S74
, 637  // S75
, 654  // S76
, 671  // S77
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            SLR states successors table                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int16_t gSuccessorTable_kerbdd_grammar_0 [7] = {0, 7,
  1, 8,
  8, 9, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_8 [5] = {1, 8,
  8, 16, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_11 [5] = {2, 19,
  13, 20, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_17 [7] = {3, 28,
  9, 29,
  11, 30, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_26 [3] = {2, 33, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_27 [3] = {12, 35, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_31 [5] = {3, 37,
  11, 30, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_32 [3] = {14, 41, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_37 [3] = {10, 45, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_41 [9] = {4, 54,
  5, 55,
  6, 56,
  7, 57, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_46 [3] = {18, 62, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_47 [9] = {4, 63,
  5, 55,
  6, 56,
  7, 57, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_48 [3] = {7, 64, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_51 [3] = {2, 65, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_52 [3] = {2, 66, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_55 [3] = {15, 71, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_56 [3] = {16, 74, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_57 [3] = {17, 77, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_60 [3] = {19, 80, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_67 [3] = {22, 86, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_69 [7] = {5, 87,
  6, 56,
  7, 57, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_70 [7] = {5, 88,
  6, 56,
  7, 57, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_72 [5] = {6, 89,
  7, 57, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_73 [5] = {6, 90,
  7, 57, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_75 [3] = {7, 91, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_76 [3] = {7, 92, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_78 [5] = {3, 93,
  11, 30, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_79 [3] = {21, 95, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_83 [9] = {4, 97,
  5, 55,
  6, 56,
  7, 57, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_84 [9] = {4, 98,
  5, 55,
  6, 56,
  7, 57, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_86 [3] = {23, 106, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_89 [3] = {16, 107, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_90 [3] = {16, 108, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_91 [3] = {17, 109, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_92 [3] = {17, 110, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_93 [3] = {10, 111, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_95 [3] = {20, 114, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_99 [3] = {22, 117, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_106 [3] = {24, 120, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_112 [3] = {21, 121, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_118 [3] = {25, 124, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_122 [3] = {21, 126, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_126 [3] = {20, 128, -1} ;

static const int16_t gSuccessorTable_kerbdd_grammar_127 [3] = {25, 129, -1} ;

static const int16_t * gSuccessorTable_kerbdd_grammar [130] = {
gSuccessorTable_kerbdd_grammar_0, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_kerbdd_grammar_8, NULL, NULL, gSuccessorTable_kerbdd_grammar_11, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_kerbdd_grammar_17, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_kerbdd_grammar_26, gSuccessorTable_kerbdd_grammar_27, 
  NULL, NULL, NULL, gSuccessorTable_kerbdd_grammar_31, 
  gSuccessorTable_kerbdd_grammar_32, NULL, NULL, NULL, 
  NULL, gSuccessorTable_kerbdd_grammar_37, NULL, NULL, 
  NULL, gSuccessorTable_kerbdd_grammar_41, NULL, NULL, 
  NULL, NULL, gSuccessorTable_kerbdd_grammar_46, gSuccessorTable_kerbdd_grammar_47, 
  gSuccessorTable_kerbdd_grammar_48, NULL, NULL, gSuccessorTable_kerbdd_grammar_51, 
  gSuccessorTable_kerbdd_grammar_52, NULL, NULL, gSuccessorTable_kerbdd_grammar_55, 
  gSuccessorTable_kerbdd_grammar_56, gSuccessorTable_kerbdd_grammar_57, NULL, NULL, 
  gSuccessorTable_kerbdd_grammar_60, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_kerbdd_grammar_67, 
  NULL, gSuccessorTable_kerbdd_grammar_69, gSuccessorTable_kerbdd_grammar_70, NULL, 
  gSuccessorTable_kerbdd_grammar_72, gSuccessorTable_kerbdd_grammar_73, NULL, gSuccessorTable_kerbdd_grammar_75, 
  gSuccessorTable_kerbdd_grammar_76, NULL, gSuccessorTable_kerbdd_grammar_78, gSuccessorTable_kerbdd_grammar_79, 
  NULL, NULL, NULL, gSuccessorTable_kerbdd_grammar_83, 
  gSuccessorTable_kerbdd_grammar_84, NULL, gSuccessorTable_kerbdd_grammar_86, NULL, 
  NULL, gSuccessorTable_kerbdd_grammar_89, gSuccessorTable_kerbdd_grammar_90, gSuccessorTable_kerbdd_grammar_91, 
  gSuccessorTable_kerbdd_grammar_92, gSuccessorTable_kerbdd_grammar_93, NULL, gSuccessorTable_kerbdd_grammar_95, 
  NULL, NULL, NULL, gSuccessorTable_kerbdd_grammar_99, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_kerbdd_grammar_106, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_kerbdd_grammar_112, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_kerbdd_grammar_118, NULL, 
  NULL, NULL, gSuccessorTable_kerbdd_grammar_122, NULL, 
  NULL, NULL, gSuccessorTable_kerbdd_grammar_126, gSuccessorTable_kerbdd_grammar_127, 
  NULL, NULL} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Production rules infos (left non terminal, size of right string)                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionsTable_kerbdd_grammar [66 * 2] = {
  0, 1,
  1, 5,
  2, 4,
  3, 1,
  1, 7,
  1, 3,
  1, 3,
  1, 3,
  1, 3,
  4, 2,
  5, 2,
  6, 2,
  7, 2,
  7, 3,
  7, 2,
  7, 1,
  7, 1,
  7, 4,
  7, 5,
  7, 5,
  7, 6,
  8, 0,
  8, 2,
  9, 1,
  9, 3,
  10, 0,
  10, 5,
  11, 1,
  11, 2,
  12, 0,
  12, 3,
  13, 0,
  13, 1,
  14, 1,
  14, 1,
  14, 1,
  15, 0,
  15, 2,
  15, 2,
  16, 0,
  16, 3,
  16, 3,
  17, 0,
  17, 3,
  17, 3,
  18, 0,
  18, 2,
  19, 0,
  19, 3,
  20, 0,
  20, 4,
  21, 0,
  21, 3,
  22, 0,
  22, 3,
  23, 1,
  23, 1,
  23, 1,
  23, 1,
  23, 1,
  23, 1,
  24, 1,
  24, 2,
  25, 0,
  25, 3,
  26, 1
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     'start_symbol' non terminal implementation                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_kerbdd_5F_grammar::nt_start_5F_symbol_parse (C_Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_kerbdd_5F_syntax_start_5F_symbol_i0_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_start_5F_symbol_ (GALGAS_ast &  parameter_1,
                                C_Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_kerbdd_5F_syntax_start_5F_symbol_i0_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_kerbdd_5F_grammar::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_kerbdd_5F_grammar::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_kerbdd_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_kerbdd_5F_lexique (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_kerbdd_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_kerbdd_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_kerbdd_5F_lexique (inCompiler, "", "", inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performBottomUpParsing (gActionTable_kerbdd_grammar, gNonTerminalNames_kerbdd_grammar,
                                     gActionTableIndex_kerbdd_grammar, gSuccessorTable_kerbdd_grammar,
                                     gProductionsTable_kerbdd_grammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Grammar start symbol implementation                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_kerbdd_5F_grammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_ast &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
      C_Lexique_kerbdd_5F_lexique * scanner = NULL ;
      macroMyNew (scanner, C_Lexique_kerbdd_5F_lexique (inCompiler, "", "", filePath COMMA_HERE)) ;
      if (scanner->sourceText () != NULL) {
        const bool ok = scanner->performBottomUpParsing (gActionTable_kerbdd_grammar, gNonTerminalNames_kerbdd_grammar,
                                                         gActionTableIndex_kerbdd_grammar, gSuccessorTable_kerbdd_grammar,
                                                         gProductionsTable_kerbdd_grammar) ;
        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
          cGrammar_kerbdd_5F_grammar grammar ;
          grammar.nt_start_5F_symbol_ (parameter_1, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_kerbdd_5F_grammar::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_ast &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_kerbdd_5F_lexique * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_kerbdd_5F_lexique (inCompiler, sourceString, nameString COMMA_HERE)) ;
    if (scanner->sourceText () != NULL) {
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 'topLevelDeClaration' non terminal implementation                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_kerbdd_5F_grammar::nt_topLevelDeClaration_parse (C_Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i1_parse(inLexique) ;
    break ;
  case 4 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i4_parse(inLexique) ;
    break ;
  case 5 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i5_parse(inLexique) ;
    break ;
  case 6 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i6_parse(inLexique) ;
    break ;
  case 7 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i7_parse(inLexique) ;
    break ;
  case 8 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i8_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_topLevelDeClaration_ (GALGAS_ast &  parameter_1,
                                C_Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i1_(parameter_1, inLexique) ;
    break ;
  case 4 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i4_(parameter_1, inLexique) ;
    break ;
  case 5 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i5_(parameter_1, inLexique) ;
    break ;
  case 6 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i6_(parameter_1, inLexique) ;
    break ;
  case 7 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i7_(parameter_1, inLexique) ;
    break ;
  case 8 :
      rule_kerbdd_5F_syntax_topLevelDeClaration_i8_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     'recordFields' non terminal implementation                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_kerbdd_5F_grammar::nt_recordFields_parse (C_Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_kerbdd_5F_syntax_recordFields_i2_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_recordFields_ (GALGAS_domainFieldList &  parameter_1,
                                C_Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_kerbdd_5F_syntax_recordFields_i2_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         'type' non terminal implementation                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_kerbdd_5F_grammar::nt_type_parse (C_Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_kerbdd_5F_syntax_type_i3_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_type_ (GALGAS_bddType &  parameter_1,
                                C_Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_kerbdd_5F_syntax_type_i3_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      'expression' non terminal implementation                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_kerbdd_5F_grammar::nt_expression_parse (C_Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_kerbdd_5F_syntax_expression_i9_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_expression_ (GALGAS_expression &  parameter_1,
                                C_Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_kerbdd_5F_syntax_expression_i9_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      'comparison' non terminal implementation                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_kerbdd_5F_grammar::nt_comparison_parse (C_Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 10 :
      rule_kerbdd_5F_syntax_comparison_i10_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_comparison_ (GALGAS_expression &  parameter_1,
                                C_Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 10 :
      rule_kerbdd_5F_syntax_comparison_i10_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         'term' non terminal implementation                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_kerbdd_5F_grammar::nt_term_parse (C_Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 11 :
      rule_kerbdd_5F_syntax_term_i11_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_term_ (GALGAS_expression &  parameter_1,
                                C_Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 11 :
      rule_kerbdd_5F_syntax_term_i11_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        'factor' non terminal implementation                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_kerbdd_5F_grammar::nt_factor_parse (C_Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
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
  case 17 :
      rule_kerbdd_5F_syntax_factor_i17_parse(inLexique) ;
    break ;
  case 18 :
      rule_kerbdd_5F_syntax_factor_i18_parse(inLexique) ;
    break ;
  case 19 :
      rule_kerbdd_5F_syntax_factor_i19_parse(inLexique) ;
    break ;
  case 20 :
      rule_kerbdd_5F_syntax_factor_i20_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_kerbdd_5F_grammar::nt_factor_ (GALGAS_expression &  parameter_1,
                                C_Lexique_kerbdd_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
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
  case 17 :
      rule_kerbdd_5F_syntax_factor_i17_(parameter_1, inLexique) ;
    break ;
  case 18 :
      rule_kerbdd_5F_syntax_factor_i18_(parameter_1, inLexique) ;
    break ;
  case 19 :
      rule_kerbdd_5F_syntax_factor_i19_(parameter_1, inLexique) ;
    break ;
  case 20 :
      rule_kerbdd_5F_syntax_factor_i20_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'select_kerbdd_5F_syntax_0' non terminal implementation                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_0 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 21 22
  return inLexique->nextProductionIndex () - 20 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'select_kerbdd_5F_syntax_1' non terminal implementation                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_1 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 23 24
  return inLexique->nextProductionIndex () - 22 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'select_kerbdd_5F_syntax_2' non terminal implementation                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_2 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 25 26
  return inLexique->nextProductionIndex () - 24 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'select_kerbdd_5F_syntax_3' non terminal implementation                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_3 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 27 28
  return inLexique->nextProductionIndex () - 26 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'select_kerbdd_5F_syntax_4' non terminal implementation                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_4 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 29 30
  return inLexique->nextProductionIndex () - 28 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'select_kerbdd_5F_syntax_5' non terminal implementation                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_5 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 31 32
  return inLexique->nextProductionIndex () - 30 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'select_kerbdd_5F_syntax_6' non terminal implementation                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_6 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 33 34 35
  return inLexique->nextProductionIndex () - 32 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'select_kerbdd_5F_syntax_7' non terminal implementation                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_7 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 36 37 38
  return inLexique->nextProductionIndex () - 35 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'select_kerbdd_5F_syntax_8' non terminal implementation                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_8 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 39 40 41
  return inLexique->nextProductionIndex () - 38 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'select_kerbdd_5F_syntax_9' non terminal implementation                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_9 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 42 43 44
  return inLexique->nextProductionIndex () - 41 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'select_kerbdd_5F_syntax_10' non terminal implementation                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_10 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 45 46
  return inLexique->nextProductionIndex () - 44 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'select_kerbdd_5F_syntax_11' non terminal implementation                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_11 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 47 48
  return inLexique->nextProductionIndex () - 46 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'select_kerbdd_5F_syntax_12' non terminal implementation                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_12 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 49 50
  return inLexique->nextProductionIndex () - 48 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'select_kerbdd_5F_syntax_13' non terminal implementation                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_13 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 51 52
  return inLexique->nextProductionIndex () - 50 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'select_kerbdd_5F_syntax_14' non terminal implementation                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_14 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 53 54
  return inLexique->nextProductionIndex () - 52 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'select_kerbdd_5F_syntax_15' non terminal implementation                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_15 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 55 56 57 58 59 60
  return inLexique->nextProductionIndex () - 54 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'select_kerbdd_5F_syntax_16' non terminal implementation                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_16 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 61 62
  return inLexique->nextProductionIndex () - 60 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              'select_kerbdd_5F_syntax_17' non terminal implementation                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_17 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 63 64
  return inLexique->nextProductionIndex () - 62 ;
}

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_bddType_boolArray::cEnumAssociatedValues_bddType_boolArray (const GALGAS_uint & inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_bddType_boolArray::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_bddType_boolArray::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_bddType_boolArray * ptr = dynamic_cast<const cEnumAssociatedValues_bddType_boolArray *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_bddType_namedType::cEnumAssociatedValues_bddType_namedType (const GALGAS_lstring & inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_bddType_namedType::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_bddType_namedType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_bddType_namedType * ptr = dynamic_cast<const cEnumAssociatedValues_bddType_namedType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bddType::GALGAS_bddType (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bddType GALGAS_bddType::constructor_bool (UNUSED_LOCATION_ARGS) {
  GALGAS_bddType result ;
  result.mEnum = kEnum_bool ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bddType GALGAS_bddType::constructor_boolArray (const GALGAS_uint & inAssociatedValue0
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bddType result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_boolArray ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_bddType_boolArray (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bddType GALGAS_bddType::constructor_namedType (const GALGAS_lstring & inAssociatedValue0
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_bddType result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_namedType ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_bddType_namedType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bddType::method_boolArray (GALGAS_uint & outAssociatedValue0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_boolArray) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @bddType boolArray invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_bddType_boolArray * ptr = (const cEnumAssociatedValues_bddType_boolArray *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bddType::method_namedType (GALGAS_lstring & outAssociatedValue0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_namedType) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @bddType namedType invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_bddType_namedType * ptr = (const cEnumAssociatedValues_bddType_namedType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_bddType [4] = {
  "(not built)",
  "bool",
  "boolArray",
  "namedType"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_bddType::getter_isBool (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bool == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_bddType::getter_isBoolArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolArray == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_bddType::getter_isNamedType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_namedType == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bddType::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "<enum @bddType: " << gEnumNameArrayFor_bddType [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bddType::objectCompare (const GALGAS_bddType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                    @bddType type                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bddType ("bddType",
                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bddType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bddType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bddType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bddType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bddType GALGAS_bddType::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_bddType result ;
  const GALGAS_bddType * p = (const GALGAS_bddType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bddType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bddType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_domainDeclarationType_type::cEnumAssociatedValues_domainDeclarationType_type (const GALGAS_bddType & inAssociatedValue0
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_domainDeclarationType_type::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_domainDeclarationType_type::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_domainDeclarationType_type * ptr = dynamic_cast<const cEnumAssociatedValues_domainDeclarationType_type *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_domainDeclarationType_record::cEnumAssociatedValues_domainDeclarationType_record (const GALGAS_domainFieldList & inAssociatedValue0
                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_domainDeclarationType_record::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_domainDeclarationType_record::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_domainDeclarationType_record * ptr = dynamic_cast<const cEnumAssociatedValues_domainDeclarationType_record *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationType::GALGAS_domainDeclarationType (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationType GALGAS_domainDeclarationType::constructor_type (const GALGAS_bddType & inAssociatedValue0
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_domainDeclarationType result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_type ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_domainDeclarationType_type (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationType GALGAS_domainDeclarationType::constructor_record (const GALGAS_domainFieldList & inAssociatedValue0
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_domainDeclarationType result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_record ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_domainDeclarationType_record (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainDeclarationType::method_type (GALGAS_bddType & outAssociatedValue0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_type) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @domainDeclarationType type invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_domainDeclarationType_type * ptr = (const cEnumAssociatedValues_domainDeclarationType_type *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainDeclarationType::method_record (GALGAS_domainFieldList & outAssociatedValue0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_record) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @domainDeclarationType record invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_domainDeclarationType_record * ptr = (const cEnumAssociatedValues_domainDeclarationType_record *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_domainDeclarationType [3] = {
  "(not built)",
  "type",
  "record"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_domainDeclarationType::getter_isType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_type == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_domainDeclarationType::getter_isRecord (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_record == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainDeclarationType::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<enum @domainDeclarationType: " << gEnumNameArrayFor_domainDeclarationType [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_domainDeclarationType::objectCompare (const GALGAS_domainDeclarationType & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @domainDeclarationType type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_domainDeclarationType ("domainDeclarationType",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_domainDeclarationType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainDeclarationType ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_domainDeclarationType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainDeclarationType (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationType GALGAS_domainDeclarationType::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_domainDeclarationType result ;
  const GALGAS_domainDeclarationType * p = (const GALGAS_domainDeclarationType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_domainDeclarationType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainDeclarationType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Bool options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               UInt options                                                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String options                                                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              String List options                                                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractFormula::objectCompare (const GALGAS_abstractFormula & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractFormula::GALGAS_abstractFormula (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractFormula::GALGAS_abstractFormula (const cPtr_abstractFormula * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractFormula) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @abstractFormula class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractFormula::cPtr_abstractFormula (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @abstractFormula type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractFormula ("abstractFormula",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractFormula::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractFormula ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractFormula::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractFormula (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractFormula GALGAS_abstractFormula::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractFormula result ;
  const GALGAS_abstractFormula * p = (const GALGAS_abstractFormula *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractFormula *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractFormula", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_assignmentFormula::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assignmentFormula * p = (const cPtr_assignmentFormula *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignmentFormula) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFormulaName.objectCompare (p->mAttribute_mFormulaName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFormulaArgumentList.objectCompare (p->mAttribute_mFormulaArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_assignmentFormula::objectCompare (const GALGAS_assignmentFormula & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentFormula::GALGAS_assignmentFormula (void) :
GALGAS_abstractFormula () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentFormula::GALGAS_assignmentFormula (const cPtr_assignmentFormula * inSourcePtr) :
GALGAS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentFormula) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentFormula GALGAS_assignmentFormula::constructor_new (const GALGAS_lstring & inAttribute_mFormulaName,
                                                                    const GALGAS_domainFieldList & inAttribute_mFormulaArgumentList,
                                                                    const GALGAS_formulaKind & inAttribute_mKind,
                                                                    const GALGAS_expression & inAttribute_mExpression
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_assignmentFormula result ;
  if (inAttribute_mFormulaName.isValid () && inAttribute_mFormulaArgumentList.isValid () && inAttribute_mKind.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_assignmentFormula (inAttribute_mFormulaName, inAttribute_mFormulaArgumentList, inAttribute_mKind, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_assignmentFormula::getter_mFormulaName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentFormula * p = (const cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    result = p->mAttribute_mFormulaName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_assignmentFormula::getter_mFormulaName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormulaName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList GALGAS_assignmentFormula::getter_mFormulaArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_domainFieldList result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentFormula * p = (const cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    result = p->mAttribute_mFormulaArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList cPtr_assignmentFormula::getter_mFormulaArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormulaArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaKind GALGAS_assignmentFormula::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_formulaKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentFormula * p = (const cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaKind cPtr_assignmentFormula::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression GALGAS_assignmentFormula::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_assignmentFormula * p = (const cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression cPtr_assignmentFormula::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @assignmentFormula class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_assignmentFormula::cPtr_assignmentFormula (const GALGAS_lstring & in_mFormulaName,
                                                const GALGAS_domainFieldList & in_mFormulaArgumentList,
                                                const GALGAS_formulaKind & in_mKind,
                                                const GALGAS_expression & in_mExpression
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (THERE),
mAttribute_mFormulaName (in_mFormulaName),
mAttribute_mFormulaArgumentList (in_mFormulaArgumentList),
mAttribute_mKind (in_mKind),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_assignmentFormula::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentFormula ;
}

void cPtr_assignmentFormula::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@assignmentFormula:" ;
  mAttribute_mFormulaName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFormulaArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_assignmentFormula::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assignmentFormula (mAttribute_mFormulaName, mAttribute_mFormulaArgumentList, mAttribute_mKind, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @assignmentFormula type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentFormula ("assignmentFormula",
                                          & kTypeDescriptor_GALGAS_abstractFormula) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_assignmentFormula::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentFormula ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_assignmentFormula::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentFormula (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_assignmentFormula GALGAS_assignmentFormula::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_assignmentFormula result ;
  const GALGAS_assignmentFormula * p = (const GALGAS_assignmentFormula *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentFormula *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentFormula", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_dumpFormula::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dumpFormula * p = (const cPtr_dumpFormula *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dumpFormula) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFormulaName.objectCompare (p->mAttribute_mFormulaName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_dumpFormula::objectCompare (const GALGAS_dumpFormula & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dumpFormula::GALGAS_dumpFormula (void) :
GALGAS_abstractFormula () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dumpFormula GALGAS_dumpFormula::constructor_default (LOCATION_ARGS) {
  return GALGAS_dumpFormula::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dumpFormula::GALGAS_dumpFormula (const cPtr_dumpFormula * inSourcePtr) :
GALGAS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dumpFormula) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dumpFormula GALGAS_dumpFormula::constructor_new (const GALGAS_lstring & inAttribute_mFormulaName
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_dumpFormula result ;
  if (inAttribute_mFormulaName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dumpFormula (inAttribute_mFormulaName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_dumpFormula::getter_mFormulaName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_dumpFormula * p = (const cPtr_dumpFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dumpFormula) ;
    result = p->mAttribute_mFormulaName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_dumpFormula::getter_mFormulaName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormulaName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @dumpFormula class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_dumpFormula::cPtr_dumpFormula (const GALGAS_lstring & in_mFormulaName
                                    COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (THERE),
mAttribute_mFormulaName (in_mFormulaName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_dumpFormula::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dumpFormula ;
}

void cPtr_dumpFormula::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "[@dumpFormula:" ;
  mAttribute_mFormulaName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_dumpFormula::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dumpFormula (mAttribute_mFormulaName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @dumpFormula type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dumpFormula ("dumpFormula",
                                    & kTypeDescriptor_GALGAS_abstractFormula) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_dumpFormula::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dumpFormula ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_dumpFormula::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dumpFormula (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dumpFormula GALGAS_dumpFormula::extractObject (const GALGAS_object & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dumpFormula result ;
  const GALGAS_dumpFormula * p = (const GALGAS_dumpFormula *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dumpFormula *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dumpFormula", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_graphvizFormula::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_graphvizFormula * p = (const cPtr_graphvizFormula *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_graphvizFormula) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFormulaName.objectCompare (p->mAttribute_mFormulaName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_graphvizFormula::objectCompare (const GALGAS_graphvizFormula & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphvizFormula::GALGAS_graphvizFormula (void) :
GALGAS_abstractFormula () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphvizFormula GALGAS_graphvizFormula::constructor_default (LOCATION_ARGS) {
  return GALGAS_graphvizFormula::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphvizFormula::GALGAS_graphvizFormula (const cPtr_graphvizFormula * inSourcePtr) :
GALGAS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_graphvizFormula) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphvizFormula GALGAS_graphvizFormula::constructor_new (const GALGAS_lstring & inAttribute_mFormulaName
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_graphvizFormula result ;
  if (inAttribute_mFormulaName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_graphvizFormula (inAttribute_mFormulaName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_graphvizFormula::getter_mFormulaName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_graphvizFormula * p = (const cPtr_graphvizFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphvizFormula) ;
    result = p->mAttribute_mFormulaName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_graphvizFormula::getter_mFormulaName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormulaName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @graphvizFormula class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_graphvizFormula::cPtr_graphvizFormula (const GALGAS_lstring & in_mFormulaName
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (THERE),
mAttribute_mFormulaName (in_mFormulaName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_graphvizFormula::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphvizFormula ;
}

void cPtr_graphvizFormula::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@graphvizFormula:" ;
  mAttribute_mFormulaName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_graphvizFormula::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_graphvizFormula (mAttribute_mFormulaName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @graphvizFormula type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphvizFormula ("graphvizFormula",
                                        & kTypeDescriptor_GALGAS_abstractFormula) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_graphvizFormula::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphvizFormula ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_graphvizFormula::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphvizFormula (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphvizFormula GALGAS_graphvizFormula::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_graphvizFormula result ;
  const GALGAS_graphvizFormula * p = (const GALGAS_graphvizFormula *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_graphvizFormula *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphvizFormula", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_setting_5F_andCacheMapSize::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_setting_5F_andCacheMapSize * p = (const cPtr_setting_5F_andCacheMapSize *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_setting_5F_andCacheMapSize) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSetting.objectCompare (p->mAttribute_mSetting) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_setting_5F_andCacheMapSize::objectCompare (const GALGAS_setting_5F_andCacheMapSize & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setting_5F_andCacheMapSize::GALGAS_setting_5F_andCacheMapSize (void) :
GALGAS_abstractFormula () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setting_5F_andCacheMapSize GALGAS_setting_5F_andCacheMapSize::constructor_default (LOCATION_ARGS) {
  return GALGAS_setting_5F_andCacheMapSize::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setting_5F_andCacheMapSize::GALGAS_setting_5F_andCacheMapSize (const cPtr_setting_5F_andCacheMapSize * inSourcePtr) :
GALGAS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_setting_5F_andCacheMapSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setting_5F_andCacheMapSize GALGAS_setting_5F_andCacheMapSize::constructor_new (const GALGAS_luint & inAttribute_mSetting
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_setting_5F_andCacheMapSize result ;
  if (inAttribute_mSetting.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_setting_5F_andCacheMapSize (inAttribute_mSetting COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_setting_5F_andCacheMapSize::getter_mSetting (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_setting_5F_andCacheMapSize * p = (const cPtr_setting_5F_andCacheMapSize *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setting_5F_andCacheMapSize) ;
    result = p->mAttribute_mSetting ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_setting_5F_andCacheMapSize::getter_mSetting (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSetting ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @setting_andCacheMapSize class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_setting_5F_andCacheMapSize::cPtr_setting_5F_andCacheMapSize (const GALGAS_luint & in_mSetting
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (THERE),
mAttribute_mSetting (in_mSetting) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_setting_5F_andCacheMapSize::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize ;
}

void cPtr_setting_5F_andCacheMapSize::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@setting_andCacheMapSize:" ;
  mAttribute_mSetting.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_setting_5F_andCacheMapSize::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_setting_5F_andCacheMapSize (mAttribute_mSetting COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @setting_andCacheMapSize type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize ("setting_andCacheMapSize",
                                                   & kTypeDescriptor_GALGAS_abstractFormula) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_setting_5F_andCacheMapSize::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_setting_5F_andCacheMapSize::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setting_5F_andCacheMapSize (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setting_5F_andCacheMapSize GALGAS_setting_5F_andCacheMapSize::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_setting_5F_andCacheMapSize result ;
  const GALGAS_setting_5F_andCacheMapSize * p = (const GALGAS_setting_5F_andCacheMapSize *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_setting_5F_andCacheMapSize *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setting_andCacheMapSize", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_setting_5F_nodeHashMapSize::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_setting_5F_nodeHashMapSize * p = (const cPtr_setting_5F_nodeHashMapSize *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_setting_5F_nodeHashMapSize) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSetting.objectCompare (p->mAttribute_mSetting) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_setting_5F_nodeHashMapSize::objectCompare (const GALGAS_setting_5F_nodeHashMapSize & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setting_5F_nodeHashMapSize::GALGAS_setting_5F_nodeHashMapSize (void) :
GALGAS_abstractFormula () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setting_5F_nodeHashMapSize GALGAS_setting_5F_nodeHashMapSize::constructor_default (LOCATION_ARGS) {
  return GALGAS_setting_5F_nodeHashMapSize::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setting_5F_nodeHashMapSize::GALGAS_setting_5F_nodeHashMapSize (const cPtr_setting_5F_nodeHashMapSize * inSourcePtr) :
GALGAS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_setting_5F_nodeHashMapSize) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_setting_5F_nodeHashMapSize GALGAS_setting_5F_nodeHashMapSize::constructor_new (const GALGAS_luint & inAttribute_mSetting
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_setting_5F_nodeHashMapSize result ;
  if (inAttribute_mSetting.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_setting_5F_nodeHashMapSize (inAttribute_mSetting COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_setting_5F_nodeHashMapSize::getter_mSetting (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_setting_5F_nodeHashMapSize * p = (const cPtr_setting_5F_nodeHashMapSize *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setting_5F_nodeHashMapSize) ;
    result = p->mAttribute_mSetting ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_setting_5F_nodeHashMapSize::getter_mSetting (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSetting ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @setting_nodeHashMapSize class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_setting_5F_nodeHashMapSize::cPtr_setting_5F_nodeHashMapSize (const GALGAS_luint & in_mSetting
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (THERE),
mAttribute_mSetting (in_mSetting) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_setting_5F_nodeHashMapSize::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize ;
}

void cPtr_setting_5F_nodeHashMapSize::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@setting_nodeHashMapSize:" ;
  mAttribute_mSetting.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_setting_5F_nodeHashMapSize::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_setting_5F_nodeHashMapSize (mAttribute_mSetting COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @setting_nodeHashMapSize type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize ("setting_nodeHashMapSize",
                                                   & kTypeDescriptor_GALGAS_abstractFormula) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_setting_5F_nodeHashMapSize::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_setting_5F_nodeHashMapSize::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setting_5F_nodeHashMapSize (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_expression::objectCompare (const GALGAS_expression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression::GALGAS_expression (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression::GALGAS_expression (const cPtr_expression * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expression) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                         Pointer class for @expression class                                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_expression::cPtr_expression (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @expression type                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expression ("expression",
                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_expression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_expression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression GALGAS_expression::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_expression result ;
  const GALGAS_expression * p = (const GALGAS_expression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_andExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_andExpression * p = (const cPtr_andExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_andExpression::objectCompare (const GALGAS_andExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_andExpression::GALGAS_andExpression (void) :
GALGAS_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_andExpression::GALGAS_andExpression (const cPtr_andExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_andExpression GALGAS_andExpression::constructor_new (const GALGAS_expression & inAttribute_mLeftExpression,
                                                            const GALGAS_expression & inAttribute_mRightExpression
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_andExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression GALGAS_andExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_andExpression * p = (const cPtr_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpression) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression cPtr_andExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression GALGAS_andExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_andExpression * p = (const cPtr_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpression) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression cPtr_andExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @andExpression class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_andExpression::cPtr_andExpression (const GALGAS_expression & in_mLeftExpression,
                                        const GALGAS_expression & in_mRightExpression
                                        COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_andExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpression ;
}

void cPtr_andExpression::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@andExpression:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_andExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andExpression (mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @andExpression type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andExpression ("andExpression",
                                      & kTypeDescriptor_GALGAS_expression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_andExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_andExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_andExpression GALGAS_andExpression::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_andExpression result ;
  const GALGAS_andExpression * p = (const GALGAS_andExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_comparisonWithConstantInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_comparisonWithConstantInExpression * p = (const cPtr_comparisonWithConstantInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFieldNames.objectCompare (p->mAttribute_mFieldNames) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mComparison.objectCompare (p->mAttribute_mComparison) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mConstant.objectCompare (p->mAttribute_mConstant) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_comparisonWithConstantInExpression::objectCompare (const GALGAS_comparisonWithConstantInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparisonWithConstantInExpression::GALGAS_comparisonWithConstantInExpression (void) :
GALGAS_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparisonWithConstantInExpression::GALGAS_comparisonWithConstantInExpression (const cPtr_comparisonWithConstantInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonWithConstantInExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparisonWithConstantInExpression GALGAS_comparisonWithConstantInExpression::constructor_new (const GALGAS_lstring & inAttribute_mVarName,
                                                                                                      const GALGAS_lstringlist & inAttribute_mFieldNames,
                                                                                                      const GALGAS_comparison & inAttribute_mComparison,
                                                                                                      const GALGAS_luint & inAttribute_mConstant
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_comparisonWithConstantInExpression result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mFieldNames.isValid () && inAttribute_mComparison.isValid () && inAttribute_mConstant.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_comparisonWithConstantInExpression (inAttribute_mVarName, inAttribute_mFieldNames, inAttribute_mComparison, inAttribute_mConstant COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_comparisonWithConstantInExpression::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonWithConstantInExpression * p = (const cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_comparisonWithConstantInExpression::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_comparisonWithConstantInExpression::getter_mFieldNames (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonWithConstantInExpression * p = (const cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    result = p->mAttribute_mFieldNames ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_comparisonWithConstantInExpression::getter_mFieldNames (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldNames ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparison GALGAS_comparisonWithConstantInExpression::getter_mComparison (UNUSED_LOCATION_ARGS) const {
  GALGAS_comparison result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonWithConstantInExpression * p = (const cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    result = p->mAttribute_mComparison ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparison cPtr_comparisonWithConstantInExpression::getter_mComparison (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mComparison ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_comparisonWithConstantInExpression::getter_mConstant (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonWithConstantInExpression * p = (const cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    result = p->mAttribute_mConstant ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_comparisonWithConstantInExpression::getter_mConstant (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstant ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @comparisonWithConstantInExpression class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_comparisonWithConstantInExpression::cPtr_comparisonWithConstantInExpression (const GALGAS_lstring & in_mVarName,
                                                                                  const GALGAS_lstringlist & in_mFieldNames,
                                                                                  const GALGAS_comparison & in_mComparison,
                                                                                  const GALGAS_luint & in_mConstant
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mAttribute_mVarName (in_mVarName),
mAttribute_mFieldNames (in_mFieldNames),
mAttribute_mComparison (in_mComparison),
mAttribute_mConstant (in_mConstant) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_comparisonWithConstantInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonWithConstantInExpression ;
}

void cPtr_comparisonWithConstantInExpression::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@comparisonWithConstantInExpression:" ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFieldNames.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mComparison.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mConstant.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_comparisonWithConstantInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_comparisonWithConstantInExpression (mAttribute_mVarName, mAttribute_mFieldNames, mAttribute_mComparison, mAttribute_mConstant COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @comparisonWithConstantInExpression type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonWithConstantInExpression ("comparisonWithConstantInExpression",
                                                           & kTypeDescriptor_GALGAS_expression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_comparisonWithConstantInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonWithConstantInExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_comparisonWithConstantInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonWithConstantInExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparisonWithConstantInExpression GALGAS_comparisonWithConstantInExpression::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_comparisonWithConstantInExpression result ;
  const GALGAS_comparisonWithConstantInExpression * p = (const GALGAS_comparisonWithConstantInExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparisonWithConstantInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonWithConstantInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_complementExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_complementExpression * p = (const cPtr_complementExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_complementExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_complementExpression::objectCompare (const GALGAS_complementExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complementExpression::GALGAS_complementExpression (void) :
GALGAS_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complementExpression::GALGAS_complementExpression (const cPtr_complementExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_complementExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complementExpression GALGAS_complementExpression::constructor_new (const GALGAS_expression & inAttribute_mExpression
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_complementExpression result ;
  if (inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_complementExpression (inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression GALGAS_complementExpression::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_complementExpression * p = (const cPtr_complementExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_complementExpression) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression cPtr_complementExpression::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @complementExpression class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_complementExpression::cPtr_complementExpression (const GALGAS_expression & in_mExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_complementExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complementExpression ;
}

void cPtr_complementExpression::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@complementExpression:" ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_complementExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_complementExpression (mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @complementExpression type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_complementExpression ("complementExpression",
                                             & kTypeDescriptor_GALGAS_expression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_complementExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complementExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_complementExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_complementExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_complementExpression GALGAS_complementExpression::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_complementExpression result ;
  const GALGAS_complementExpression * p = (const GALGAS_complementExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_complementExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("complementExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_equalExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_equalExpression * p = (const cPtr_equalExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_equalExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_equalExpression::objectCompare (const GALGAS_equalExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_equalExpression::GALGAS_equalExpression (void) :
GALGAS_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_equalExpression::GALGAS_equalExpression (const cPtr_equalExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_equalExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_equalExpression GALGAS_equalExpression::constructor_new (const GALGAS_expression & inAttribute_mLeftExpression,
                                                                const GALGAS_expression & inAttribute_mRightExpression
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_equalExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_equalExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression GALGAS_equalExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_equalExpression * p = (const cPtr_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_equalExpression) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression cPtr_equalExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression GALGAS_equalExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_equalExpression * p = (const cPtr_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_equalExpression) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression cPtr_equalExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @equalExpression class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_equalExpression::cPtr_equalExpression (const GALGAS_expression & in_mLeftExpression,
                                            const GALGAS_expression & in_mRightExpression
                                            COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_equalExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equalExpression ;
}

void cPtr_equalExpression::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@equalExpression:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_equalExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_equalExpression (mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @equalExpression type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_equalExpression ("equalExpression",
                                        & kTypeDescriptor_GALGAS_expression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_equalExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equalExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_equalExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_equalExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_equalExpression GALGAS_equalExpression::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_equalExpression result ;
  const GALGAS_equalExpression * p = (const GALGAS_equalExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_equalExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("equalExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_existInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_existInExpression * p = (const cPtr_existInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_existInExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mArgumentList.objectCompare (p->mAttribute_mArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_existInExpression::objectCompare (const GALGAS_existInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_existInExpression::GALGAS_existInExpression (void) :
GALGAS_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_existInExpression::GALGAS_existInExpression (const cPtr_existInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_existInExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_existInExpression GALGAS_existInExpression::constructor_new (const GALGAS_domainFieldList & inAttribute_mArgumentList,
                                                                    const GALGAS_expression & inAttribute_mExpression
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_existInExpression result ;
  if (inAttribute_mArgumentList.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_existInExpression (inAttribute_mArgumentList, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList GALGAS_existInExpression::getter_mArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_domainFieldList result ;
  if (NULL != mObjectPtr) {
    const cPtr_existInExpression * p = (const cPtr_existInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_existInExpression) ;
    result = p->mAttribute_mArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList cPtr_existInExpression::getter_mArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression GALGAS_existInExpression::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_existInExpression * p = (const cPtr_existInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_existInExpression) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression cPtr_existInExpression::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @existInExpression class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_existInExpression::cPtr_existInExpression (const GALGAS_domainFieldList & in_mArgumentList,
                                                const GALGAS_expression & in_mExpression
                                                COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mAttribute_mArgumentList (in_mArgumentList),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_existInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_existInExpression ;
}

void cPtr_existInExpression::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@existInExpression:" ;
  mAttribute_mArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_existInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_existInExpression (mAttribute_mArgumentList, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @existInExpression type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_existInExpression ("existInExpression",
                                          & kTypeDescriptor_GALGAS_expression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_existInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_existInExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_existInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_existInExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_existInExpression GALGAS_existInExpression::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_existInExpression result ;
  const GALGAS_existInExpression * p = (const GALGAS_existInExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_existInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("existInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_falseExpression::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_falseExpression::objectCompare (const GALGAS_falseExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_falseExpression::GALGAS_falseExpression (void) :
GALGAS_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_falseExpression GALGAS_falseExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_falseExpression::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_falseExpression::GALGAS_falseExpression (const cPtr_falseExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_falseExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_falseExpression GALGAS_falseExpression::constructor_new (LOCATION_ARGS) {
  GALGAS_falseExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_falseExpression (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @falseExpression class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_falseExpression::cPtr_falseExpression (LOCATION_ARGS) :
cPtr_expression (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_falseExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpression ;
}

void cPtr_falseExpression::description (C_String & ioString,
                                        const int32_t /* inIndentation */) const {
  ioString << "[@falseExpression]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_falseExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_falseExpression (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @falseExpression type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_falseExpression ("falseExpression",
                                        & kTypeDescriptor_GALGAS_expression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_falseExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_falseExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_falseExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_falseExpression GALGAS_falseExpression::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_falseExpression result ;
  const GALGAS_falseExpression * p = (const GALGAS_falseExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_falseExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("falseExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_forAllInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forAllInExpression * p = (const cPtr_forAllInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forAllInExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mArgumentList.objectCompare (p->mAttribute_mArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_forAllInExpression::objectCompare (const GALGAS_forAllInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forAllInExpression::GALGAS_forAllInExpression (void) :
GALGAS_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forAllInExpression::GALGAS_forAllInExpression (const cPtr_forAllInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forAllInExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forAllInExpression GALGAS_forAllInExpression::constructor_new (const GALGAS_domainFieldList & inAttribute_mArgumentList,
                                                                      const GALGAS_expression & inAttribute_mExpression
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_forAllInExpression result ;
  if (inAttribute_mArgumentList.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forAllInExpression (inAttribute_mArgumentList, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList GALGAS_forAllInExpression::getter_mArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_domainFieldList result ;
  if (NULL != mObjectPtr) {
    const cPtr_forAllInExpression * p = (const cPtr_forAllInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forAllInExpression) ;
    result = p->mAttribute_mArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList cPtr_forAllInExpression::getter_mArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression GALGAS_forAllInExpression::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_forAllInExpression * p = (const cPtr_forAllInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forAllInExpression) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression cPtr_forAllInExpression::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @forAllInExpression class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_forAllInExpression::cPtr_forAllInExpression (const GALGAS_domainFieldList & in_mArgumentList,
                                                  const GALGAS_expression & in_mExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mAttribute_mArgumentList (in_mArgumentList),
mAttribute_mExpression (in_mExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_forAllInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forAllInExpression ;
}

void cPtr_forAllInExpression::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@forAllInExpression:" ;
  mAttribute_mArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_forAllInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forAllInExpression (mAttribute_mArgumentList, mAttribute_mExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @forAllInExpression type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forAllInExpression ("forAllInExpression",
                                           & kTypeDescriptor_GALGAS_expression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forAllInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forAllInExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forAllInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forAllInExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forAllInExpression GALGAS_forAllInExpression::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_forAllInExpression result ;
  const GALGAS_forAllInExpression * p = (const GALGAS_forAllInExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forAllInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forAllInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_formulaInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_formulaInExpression * p = (const cPtr_formulaInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_formulaInExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFormulaName.objectCompare (p->mAttribute_mFormulaName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mParameterList.objectCompare (p->mAttribute_mParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_formulaInExpression::objectCompare (const GALGAS_formulaInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaInExpression::GALGAS_formulaInExpression (void) :
GALGAS_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaInExpression GALGAS_formulaInExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_formulaInExpression::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_formulaParameterListInExpression::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaInExpression::GALGAS_formulaInExpression (const cPtr_formulaInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_formulaInExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaInExpression GALGAS_formulaInExpression::constructor_new (const GALGAS_lstring & inAttribute_mFormulaName,
                                                                        const GALGAS_formulaParameterListInExpression & inAttribute_mParameterList
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_formulaInExpression result ;
  if (inAttribute_mFormulaName.isValid () && inAttribute_mParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_formulaInExpression (inAttribute_mFormulaName, inAttribute_mParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formulaInExpression::getter_mFormulaName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_formulaInExpression * p = (const cPtr_formulaInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_formulaInExpression) ;
    result = p->mAttribute_mFormulaName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_formulaInExpression::getter_mFormulaName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormulaName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaParameterListInExpression GALGAS_formulaInExpression::getter_mParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formulaParameterListInExpression result ;
  if (NULL != mObjectPtr) {
    const cPtr_formulaInExpression * p = (const cPtr_formulaInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_formulaInExpression) ;
    result = p->mAttribute_mParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaParameterListInExpression cPtr_formulaInExpression::getter_mParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @formulaInExpression class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_formulaInExpression::cPtr_formulaInExpression (const GALGAS_lstring & in_mFormulaName,
                                                    const GALGAS_formulaParameterListInExpression & in_mParameterList
                                                    COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mAttribute_mFormulaName (in_mFormulaName),
mAttribute_mParameterList (in_mParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_formulaInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaInExpression ;
}

void cPtr_formulaInExpression::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@formulaInExpression:" ;
  mAttribute_mFormulaName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_formulaInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_formulaInExpression (mAttribute_mFormulaName, mAttribute_mParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @formulaInExpression type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formulaInExpression ("formulaInExpression",
                                            & kTypeDescriptor_GALGAS_expression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formulaInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaInExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formulaInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formulaInExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaInExpression GALGAS_formulaInExpression::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formulaInExpression result ;
  const GALGAS_formulaInExpression * p = (const GALGAS_formulaInExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formulaInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_impliesExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_impliesExpression * p = (const cPtr_impliesExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_impliesExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_impliesExpression::objectCompare (const GALGAS_impliesExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impliesExpression::GALGAS_impliesExpression (void) :
GALGAS_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impliesExpression::GALGAS_impliesExpression (const cPtr_impliesExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_impliesExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impliesExpression GALGAS_impliesExpression::constructor_new (const GALGAS_expression & inAttribute_mLeftExpression,
                                                                    const GALGAS_expression & inAttribute_mRightExpression
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_impliesExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_impliesExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression GALGAS_impliesExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_impliesExpression * p = (const cPtr_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impliesExpression) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression cPtr_impliesExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression GALGAS_impliesExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_impliesExpression * p = (const cPtr_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impliesExpression) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression cPtr_impliesExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @impliesExpression class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_impliesExpression::cPtr_impliesExpression (const GALGAS_expression & in_mLeftExpression,
                                                const GALGAS_expression & in_mRightExpression
                                                COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_impliesExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impliesExpression ;
}

void cPtr_impliesExpression::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@impliesExpression:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_impliesExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_impliesExpression (mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @impliesExpression type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_impliesExpression ("impliesExpression",
                                          & kTypeDescriptor_GALGAS_expression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_impliesExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impliesExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_impliesExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_impliesExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_impliesExpression GALGAS_impliesExpression::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_impliesExpression result ;
  const GALGAS_impliesExpression * p = (const GALGAS_impliesExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_impliesExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("impliesExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_notEqualExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_notEqualExpression * p = (const cPtr_notEqualExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_notEqualExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_notEqualExpression::objectCompare (const GALGAS_notEqualExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_notEqualExpression::GALGAS_notEqualExpression (void) :
GALGAS_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_notEqualExpression::GALGAS_notEqualExpression (const cPtr_notEqualExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_notEqualExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_notEqualExpression GALGAS_notEqualExpression::constructor_new (const GALGAS_expression & inAttribute_mLeftExpression,
                                                                      const GALGAS_expression & inAttribute_mRightExpression
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_notEqualExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_notEqualExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression GALGAS_notEqualExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_notEqualExpression * p = (const cPtr_notEqualExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notEqualExpression) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression cPtr_notEqualExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression GALGAS_notEqualExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_notEqualExpression * p = (const cPtr_notEqualExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notEqualExpression) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression cPtr_notEqualExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @notEqualExpression class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_notEqualExpression::cPtr_notEqualExpression (const GALGAS_expression & in_mLeftExpression,
                                                  const GALGAS_expression & in_mRightExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_notEqualExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notEqualExpression ;
}

void cPtr_notEqualExpression::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@notEqualExpression:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_notEqualExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_notEqualExpression (mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @notEqualExpression type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_notEqualExpression ("notEqualExpression",
                                           & kTypeDescriptor_GALGAS_expression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_notEqualExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notEqualExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_notEqualExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_notEqualExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_notEqualExpression GALGAS_notEqualExpression::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_notEqualExpression result ;
  const GALGAS_notEqualExpression * p = (const GALGAS_notEqualExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_notEqualExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("notEqualExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_orExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_orExpression * p = (const cPtr_orExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_orExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_orExpression::objectCompare (const GALGAS_orExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orExpression::GALGAS_orExpression (void) :
GALGAS_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orExpression::GALGAS_orExpression (const cPtr_orExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orExpression GALGAS_orExpression::constructor_new (const GALGAS_expression & inAttribute_mLeftExpression,
                                                          const GALGAS_expression & inAttribute_mRightExpression
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_orExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression GALGAS_orExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_orExpression * p = (const cPtr_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpression) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression cPtr_orExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression GALGAS_orExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_orExpression * p = (const cPtr_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpression) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression cPtr_orExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @orExpression class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_orExpression::cPtr_orExpression (const GALGAS_expression & in_mLeftExpression,
                                      const GALGAS_expression & in_mRightExpression
                                      COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_orExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpression ;
}

void cPtr_orExpression::description (C_String & ioString,
                                     const int32_t inIndentation) const {
  ioString << "[@orExpression:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_orExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orExpression (mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @orExpression type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orExpression ("orExpression",
                                     & kTypeDescriptor_GALGAS_expression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_orExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_orExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_orExpression GALGAS_orExpression::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_orExpression result ;
  const GALGAS_orExpression * p = (const GALGAS_orExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_trueExpression::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_trueExpression::objectCompare (const GALGAS_trueExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_trueExpression::GALGAS_trueExpression (void) :
GALGAS_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_trueExpression GALGAS_trueExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_trueExpression::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_trueExpression::GALGAS_trueExpression (const cPtr_trueExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_trueExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_trueExpression GALGAS_trueExpression::constructor_new (LOCATION_ARGS) {
  GALGAS_trueExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_trueExpression (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @trueExpression class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_trueExpression::cPtr_trueExpression (LOCATION_ARGS) :
cPtr_expression (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_trueExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpression ;
}

void cPtr_trueExpression::description (C_String & ioString,
                                       const int32_t /* inIndentation */) const {
  ioString << "[@trueExpression]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_trueExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_trueExpression (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @trueExpression type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_trueExpression ("trueExpression",
                                       & kTypeDescriptor_GALGAS_expression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_trueExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_trueExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_trueExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_trueExpression GALGAS_trueExpression::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_trueExpression result ;
  const GALGAS_trueExpression * p = (const GALGAS_trueExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_trueExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("trueExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_varBitInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varBitInExpression * p = (const cPtr_varBitInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varBitInExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mVarBit.objectCompare (p->mAttribute_mVarBit) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_varBitInExpression::objectCompare (const GALGAS_varBitInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varBitInExpression::GALGAS_varBitInExpression (void) :
GALGAS_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varBitInExpression GALGAS_varBitInExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_varBitInExpression::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_luint::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varBitInExpression::GALGAS_varBitInExpression (const cPtr_varBitInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varBitInExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varBitInExpression GALGAS_varBitInExpression::constructor_new (const GALGAS_lstring & inAttribute_mVarName,
                                                                      const GALGAS_luint & inAttribute_mVarBit
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_varBitInExpression result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mVarBit.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varBitInExpression (inAttribute_mVarName, inAttribute_mVarBit COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varBitInExpression::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varBitInExpression * p = (const cPtr_varBitInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varBitInExpression) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varBitInExpression::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint GALGAS_varBitInExpression::getter_mVarBit (UNUSED_LOCATION_ARGS) const {
  GALGAS_luint result ;
  if (NULL != mObjectPtr) {
    const cPtr_varBitInExpression * p = (const cPtr_varBitInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varBitInExpression) ;
    result = p->mAttribute_mVarBit ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_luint cPtr_varBitInExpression::getter_mVarBit (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarBit ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @varBitInExpression class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_varBitInExpression::cPtr_varBitInExpression (const GALGAS_lstring & in_mVarName,
                                                  const GALGAS_luint & in_mVarBit
                                                  COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mAttribute_mVarName (in_mVarName),
mAttribute_mVarBit (in_mVarBit) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_varBitInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varBitInExpression ;
}

void cPtr_varBitInExpression::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@varBitInExpression:" ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mVarBit.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_varBitInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varBitInExpression (mAttribute_mVarName, mAttribute_mVarBit COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @varBitInExpression type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varBitInExpression ("varBitInExpression",
                                           & kTypeDescriptor_GALGAS_expression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varBitInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varBitInExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varBitInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varBitInExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varBitInExpression GALGAS_varBitInExpression::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_varBitInExpression result ;
  const GALGAS_varBitInExpression * p = (const GALGAS_varBitInExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varBitInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varBitInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_varInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varInExpression * p = (const cPtr_varInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_varInExpression::objectCompare (const GALGAS_varInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpression::GALGAS_varInExpression (void) :
GALGAS_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpression GALGAS_varInExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_varInExpression::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpression::GALGAS_varInExpression (const cPtr_varInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpression GALGAS_varInExpression::constructor_new (const GALGAS_lstring & inAttribute_mVarName
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_varInExpression result ;
  if (inAttribute_mVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varInExpression (inAttribute_mVarName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varInExpression::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_varInExpression * p = (const cPtr_varInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpression) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_varInExpression::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @varInExpression class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_varInExpression::cPtr_varInExpression (const GALGAS_lstring & in_mVarName
                                            COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mAttribute_mVarName (in_mVarName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_varInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpression ;
}

void cPtr_varInExpression::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@varInExpression:" ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_varInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varInExpression (mAttribute_mVarName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @varInExpression type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInExpression ("varInExpression",
                                        & kTypeDescriptor_GALGAS_expression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varInExpression GALGAS_varInExpression::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_varInExpression result ;
  const GALGAS_varInExpression * p = (const GALGAS_varInExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_variableComparisonInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_variableComparisonInExpression * p = (const cPtr_variableComparisonInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftVarName.objectCompare (p->mAttribute_mLeftVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLeftFieldNames.objectCompare (p->mAttribute_mLeftFieldNames) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mComparison.objectCompare (p->mAttribute_mComparison) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightVarName.objectCompare (p->mAttribute_mRightVarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightFieldNames.objectCompare (p->mAttribute_mRightFieldNames) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_variableComparisonInExpression::objectCompare (const GALGAS_variableComparisonInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableComparisonInExpression::GALGAS_variableComparisonInExpression (void) :
GALGAS_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableComparisonInExpression::GALGAS_variableComparisonInExpression (const cPtr_variableComparisonInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_variableComparisonInExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableComparisonInExpression GALGAS_variableComparisonInExpression::constructor_new (const GALGAS_lstring & inAttribute_mLeftVarName,
                                                                                              const GALGAS_lstringlist & inAttribute_mLeftFieldNames,
                                                                                              const GALGAS_comparison & inAttribute_mComparison,
                                                                                              const GALGAS_lstring & inAttribute_mRightVarName,
                                                                                              const GALGAS_lstringlist & inAttribute_mRightFieldNames
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_variableComparisonInExpression result ;
  if (inAttribute_mLeftVarName.isValid () && inAttribute_mLeftFieldNames.isValid () && inAttribute_mComparison.isValid () && inAttribute_mRightVarName.isValid () && inAttribute_mRightFieldNames.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_variableComparisonInExpression (inAttribute_mLeftVarName, inAttribute_mLeftFieldNames, inAttribute_mComparison, inAttribute_mRightVarName, inAttribute_mRightFieldNames COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_variableComparisonInExpression::getter_mLeftVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_variableComparisonInExpression * p = (const cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    result = p->mAttribute_mLeftVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_variableComparisonInExpression::getter_mLeftVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_variableComparisonInExpression::getter_mLeftFieldNames (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_variableComparisonInExpression * p = (const cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    result = p->mAttribute_mLeftFieldNames ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_variableComparisonInExpression::getter_mLeftFieldNames (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftFieldNames ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparison GALGAS_variableComparisonInExpression::getter_mComparison (UNUSED_LOCATION_ARGS) const {
  GALGAS_comparison result ;
  if (NULL != mObjectPtr) {
    const cPtr_variableComparisonInExpression * p = (const cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    result = p->mAttribute_mComparison ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_comparison cPtr_variableComparisonInExpression::getter_mComparison (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mComparison ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_variableComparisonInExpression::getter_mRightVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_variableComparisonInExpression * p = (const cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    result = p->mAttribute_mRightVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_variableComparisonInExpression::getter_mRightVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_variableComparisonInExpression::getter_mRightFieldNames (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_variableComparisonInExpression * p = (const cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    result = p->mAttribute_mRightFieldNames ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_variableComparisonInExpression::getter_mRightFieldNames (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightFieldNames ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @variableComparisonInExpression class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_variableComparisonInExpression::cPtr_variableComparisonInExpression (const GALGAS_lstring & in_mLeftVarName,
                                                                          const GALGAS_lstringlist & in_mLeftFieldNames,
                                                                          const GALGAS_comparison & in_mComparison,
                                                                          const GALGAS_lstring & in_mRightVarName,
                                                                          const GALGAS_lstringlist & in_mRightFieldNames
                                                                          COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mAttribute_mLeftVarName (in_mLeftVarName),
mAttribute_mLeftFieldNames (in_mLeftFieldNames),
mAttribute_mComparison (in_mComparison),
mAttribute_mRightVarName (in_mRightVarName),
mAttribute_mRightFieldNames (in_mRightFieldNames) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_variableComparisonInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableComparisonInExpression ;
}

void cPtr_variableComparisonInExpression::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@variableComparisonInExpression:" ;
  mAttribute_mLeftVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLeftFieldNames.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mComparison.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightFieldNames.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_variableComparisonInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_variableComparisonInExpression (mAttribute_mLeftVarName, mAttribute_mLeftFieldNames, mAttribute_mComparison, mAttribute_mRightVarName, mAttribute_mRightFieldNames COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @variableComparisonInExpression type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_variableComparisonInExpression ("variableComparisonInExpression",
                                                       & kTypeDescriptor_GALGAS_expression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_variableComparisonInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableComparisonInExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_variableComparisonInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_variableComparisonInExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_variableComparisonInExpression GALGAS_variableComparisonInExpression::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_variableComparisonInExpression result ;
  const GALGAS_variableComparisonInExpression * p = (const GALGAS_variableComparisonInExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_variableComparisonInExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("variableComparisonInExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_xorExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_xorExpression * p = (const cPtr_xorExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_xorExpression) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftExpression.objectCompare (p->mAttribute_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightExpression.objectCompare (p->mAttribute_mRightExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_xorExpression::objectCompare (const GALGAS_xorExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;
    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;
    if (mySlot < operandSlot) {
      result = kFirstOperandLowerThanSecond ;
    }else if (mySlot > operandSlot) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_xorExpression::GALGAS_xorExpression (void) :
GALGAS_expression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_xorExpression::GALGAS_xorExpression (const cPtr_xorExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_xorExpression GALGAS_xorExpression::constructor_new (const GALGAS_expression & inAttribute_mLeftExpression,
                                                            const GALGAS_expression & inAttribute_mRightExpression
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_xorExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xorExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression GALGAS_xorExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorExpression * p = (const cPtr_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpression) ;
    result = p->mAttribute_mLeftExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression cPtr_xorExpression::getter_mLeftExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression GALGAS_xorExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorExpression * p = (const cPtr_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpression) ;
    result = p->mAttribute_mRightExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_expression cPtr_xorExpression::getter_mRightExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @xorExpression class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_xorExpression::cPtr_xorExpression (const GALGAS_expression & in_mLeftExpression,
                                        const GALGAS_expression & in_mRightExpression
                                        COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mAttribute_mLeftExpression (in_mLeftExpression),
mAttribute_mRightExpression (in_mRightExpression) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_xorExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpression ;
}

void cPtr_xorExpression::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@xorExpression:" ;
  mAttribute_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_xorExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_xorExpression (mAttribute_mLeftExpression, mAttribute_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @xorExpression type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xorExpression ("xorExpression",
                                      & kTypeDescriptor_GALGAS_expression) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_xorExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_xorExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorExpression (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_xorExpression GALGAS_xorExpression::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_xorExpression result ;
  const GALGAS_xorExpression * p = (const GALGAS_xorExpression *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xorExpression *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorExpression", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

#include "project_header.h"
#include "command_line_interface/F_mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "galgas2/F_verbose_output.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      print_tool_help_message                                                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void print_tool_help_message (void) {
  co << "Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n" ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileExtensions [] = {
  "kerbdd",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

static const char * kSourceFileHelpMessages [] = {
  "a source text file with the .kerbdd extension",
  NULL
} ;    

//---------------------------------------------------------------------------------------------------------------------*

const char * projectVersionString (void) {
  return "2.0.0" ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  Routine 'before'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_before (C_Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                   Routine 'after'                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_after (C_Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               Routine 'programRule_0'                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast var_ast ;
  var_ast.drop () ;
  cGrammar_kerbdd_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_ast  COMMA_SOURCE_FILE ("program.galgas", 17)) ;
  GALGAS_domainMap var_domainMap ;
  categoryMethod_analyze (var_ast.mAttribute_mDomainList, var_domainMap, inCompiler COMMA_SOURCE_FILE ("program.galgas", 19)) ;
  GALGAS_computedFormulaMap var_computedFormulaMap = GALGAS_computedFormulaMap::constructor_emptyMap (SOURCE_FILE ("program.galgas", 21)) ;
  cEnumerator_formulaList enumerator_1021 (var_ast.mAttribute_mFormulaList, kEnumeration_up) ;
  bool bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 22)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
  if (enumerator_1021.hasCurrentObject () && bool_0) {
    while (enumerator_1021.hasCurrentObject () && bool_0) {
      callCategoryMethod_analyzeFormula ((const cPtr_abstractFormula *) enumerator_1021.current_mFormula (HERE).ptr (), constinArgument_inSourceFile.mAttribute_string, var_domainMap, var_computedFormulaMap, inCompiler COMMA_SOURCE_FILE ("program.galgas", 23)) ;
      enumerator_1021.gotoNextObject () ;
      if (enumerator_1021.hasCurrentObject ()) {
        bool_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("program.galgas", 22)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      M A I N    F O R    L I B P M                                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
    C_Compiler * commonLexique = NULL ;
    macroMyNew (commonLexique, C_Compiler (NULL, "", "" COMMA_HERE)) ;
    try{
      routine_before (commonLexique COMMA_HERE) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        if (gOption_galgas_5F_builtin_5F_options_trace.mValue) {
          enableTraceWithPath (sourceFilesArray (i COMMA_HERE)) ;
        }
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonLexique->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "kerbdd") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonLexique COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_kerbdd_5F_grammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_kerbdd_5F_grammar::performOnlySyntaxAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_kerbdd_5F_grammar::performIndexing (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_kerbdd_5F_grammar::performOnlyLexicalAnalysis (commonLexique, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
        closeTrace () ;
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
      routine_after (commonLexique COMMA_HERE) ;
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
    macroDetachSharedObject (commonLexique) ;
  }
  return returnCode ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category method '@domainDeclarationList analyze'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_analyze (const GALGAS_domainDeclarationList inObject,
                             GALGAS_domainMap & outArgument_outDomainMap,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDomainMap.drop () ; // Release 'out' argument
  outArgument_outDomainMap = GALGAS_domainMap::constructor_emptyMap (SOURCE_FILE ("domain.galgas", 122)) ;
  const GALGAS_domainDeclarationList temp_0 = inObject ;
  cEnumerator_domainDeclarationList enumerator_4171 (temp_0, kEnumeration_up) ;
  bool bool_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("domain.galgas", 123)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
  if (enumerator_4171.hasCurrentObject () && bool_1) {
    while (enumerator_4171.hasCurrentObject () && bool_1) {
      switch (enumerator_4171.current_mType (HERE).enumValue ()) {
      case GALGAS_domainDeclarationType::kNotBuilt:
        break ;
      case GALGAS_domainDeclarationType::kEnum_type:
        {
          const cEnumAssociatedValues_domainDeclarationType_type * extractPtr_4612 = (const cEnumAssociatedValues_domainDeclarationType_type *) (enumerator_4171.current_mType (HERE).unsafePointer ()) ;
          const GALGAS_bddType extractedValue_type = extractPtr_4612->mAssociatedValue0 ;
          switch (extractedValue_type.enumValue ()) {
          case GALGAS_bddType::kNotBuilt:
            break ;
          case GALGAS_bddType::kEnum_bool:
            {
              {
              outArgument_outDomainMap.setter_insertKey (enumerator_4171.current_mDomainName (HERE), GALGAS_uint ((uint32_t) 1U), GALGAS_recordDomainMap::constructor_emptyMap (SOURCE_FILE ("domain.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("domain.galgas", 128)) ;
              }
            }
            break ;
          case GALGAS_bddType::kEnum_boolArray:
            {
              const cEnumAssociatedValues_bddType_boolArray * extractPtr_4431 = (const cEnumAssociatedValues_bddType_boolArray *) (extractedValue_type.unsafePointer ()) ;
              const GALGAS_uint extractedValue_size = extractPtr_4431->mAssociatedValue0 ;
              {
              outArgument_outDomainMap.setter_insertKey (enumerator_4171.current_mDomainName (HERE), extractedValue_size, GALGAS_recordDomainMap::constructor_emptyMap (SOURCE_FILE ("domain.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("domain.galgas", 130)) ;
              }
            }
            break ;
          case GALGAS_bddType::kEnum_namedType:
            {
              const cEnumAssociatedValues_bddType_namedType * extractPtr_4602 = (const cEnumAssociatedValues_bddType_namedType *) (extractedValue_type.unsafePointer ()) ;
              const GALGAS_lstring extractedValue_typeName = extractPtr_4602->mAssociatedValue0 ;
              GALGAS_uint var_size ;
              GALGAS_recordDomainMap var_subdomain ;
              outArgument_outDomainMap.method_searchKey (extractedValue_typeName, var_size, var_subdomain, inCompiler COMMA_SOURCE_FILE ("domain.galgas", 132)) ;
              {
              outArgument_outDomainMap.setter_insertKey (enumerator_4171.current_mDomainName (HERE), var_size, var_subdomain, inCompiler COMMA_SOURCE_FILE ("domain.galgas", 133)) ;
              }
            }
            break ;
          }
        }
        break ;
      case GALGAS_domainDeclarationType::kEnum_record:
        {
          const cEnumAssociatedValues_domainDeclarationType_record * extractPtr_5365 = (const cEnumAssociatedValues_domainDeclarationType_record *) (enumerator_4171.current_mType (HERE).unsafePointer ()) ;
          const GALGAS_domainFieldList extractedValue_fieldList = extractPtr_5365->mAssociatedValue0 ;
          GALGAS_uint var_bitIndex = GALGAS_uint ((uint32_t) 0U) ;
          GALGAS_recordDomainMap var_recordMap = GALGAS_recordDomainMap::constructor_emptyMap (SOURCE_FILE ("domain.galgas", 137)) ;
          cEnumerator_domainFieldList enumerator_4767 (extractedValue_fieldList, kEnumeration_down) ;
          bool bool_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("domain.galgas", 138)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
          if (enumerator_4767.hasCurrentObject () && bool_2) {
            while (enumerator_4767.hasCurrentObject () && bool_2) {
              switch (enumerator_4767.current_mType (HERE).enumValue ()) {
              case GALGAS_bddType::kNotBuilt:
                break ;
              case GALGAS_bddType::kEnum_bool:
                {
                  {
                  var_recordMap.setter_insertKey (enumerator_4767.current_mVarName (HERE), var_bitIndex, GALGAS_uint ((uint32_t) 1U), GALGAS_recordDomainMap::constructor_emptyMap (SOURCE_FILE ("domain.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("domain.galgas", 141)) ;
                  }
                  var_bitIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("domain.galgas", 142)) ;
                }
                break ;
              case GALGAS_bddType::kEnum_boolArray:
                {
                  const cEnumAssociatedValues_bddType_boolArray * extractPtr_5062 = (const cEnumAssociatedValues_bddType_boolArray *) (enumerator_4767.current_mType (HERE).unsafePointer ()) ;
                  const GALGAS_uint extractedValue_size = extractPtr_5062->mAssociatedValue0 ;
                  {
                  var_recordMap.setter_insertKey (enumerator_4767.current_mVarName (HERE), var_bitIndex, extractedValue_size, GALGAS_recordDomainMap::constructor_emptyMap (SOURCE_FILE ("domain.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("domain.galgas", 144)) ;
                  }
                  var_bitIndex = var_bitIndex.add_operation (extractedValue_size, inCompiler COMMA_SOURCE_FILE ("domain.galgas", 145)) ;
                }
                break ;
              case GALGAS_bddType::kEnum_namedType:
                {
                  const cEnumAssociatedValues_bddType_namedType * extractPtr_5283 = (const cEnumAssociatedValues_bddType_namedType *) (enumerator_4767.current_mType (HERE).unsafePointer ()) ;
                  const GALGAS_lstring extractedValue_typeName = extractPtr_5283->mAssociatedValue0 ;
                  GALGAS_uint var_size ;
                  GALGAS_recordDomainMap var_subdomain ;
                  outArgument_outDomainMap.method_searchKey (extractedValue_typeName, var_size, var_subdomain, inCompiler COMMA_SOURCE_FILE ("domain.galgas", 147)) ;
                  {
                  var_recordMap.setter_insertKey (enumerator_4767.current_mVarName (HERE), var_bitIndex, var_size, var_subdomain, inCompiler COMMA_SOURCE_FILE ("domain.galgas", 148)) ;
                  }
                  var_bitIndex = var_bitIndex.add_operation (var_size, inCompiler COMMA_SOURCE_FILE ("domain.galgas", 149)) ;
                }
                break ;
              }
              enumerator_4767.gotoNextObject () ;
              if (enumerator_4767.hasCurrentObject ()) {
                bool_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("domain.galgas", 138)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
              }
            }
          }
          {
          outArgument_outDomainMap.setter_insertKey (enumerator_4171.current_mDomainName (HERE), var_bitIndex, var_recordMap, inCompiler COMMA_SOURCE_FILE ("domain.galgas", 152)) ;
          }
        }
        break ;
      }
      enumerator_4171.gotoNextObject () ;
      if (enumerator_4171.hasCurrentObject ()) {
        bool_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("domain.galgas", 123)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValidAndTrue () ;
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Category method '@domainFieldList analyze'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_analyze (const GALGAS_domainFieldList inObject,
                             const GALGAS_domainMap constinArgument_inDomainMap,
                             GALGAS_varMap & ioArgument_ioVarMap,
                             GALGAS_varList & ioArgument_ioVarList,
                             GALGAS_uint & ioArgument_ioTotalBitCount,
                             C_Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_domainFieldList temp_0 = inObject ;
  cEnumerator_domainFieldList enumerator_6481 (temp_0, kEnumeration_down) ;
  while (enumerator_6481.hasCurrentObject ()) {
    switch (enumerator_6481.current_mType (HERE).enumValue ()) {
    case GALGAS_bddType::kNotBuilt:
      break ;
    case GALGAS_bddType::kEnum_bool:
      {
        {
        ioArgument_ioVarMap.setter_insertKey (enumerator_6481.current_mVarName (HERE), ioArgument_ioTotalBitCount, GALGAS_uint ((uint32_t) 1U), GALGAS_recordDomainMap::constructor_emptyMap (SOURCE_FILE ("domain.galgas", 189)), inCompiler COMMA_SOURCE_FILE ("domain.galgas", 189)) ;
        }
        {
        ioArgument_ioVarList.setter_insertAtIndex (enumerator_6481.current_mVarName (HERE).mAttribute_string, ioArgument_ioTotalBitCount, GALGAS_uint ((uint32_t) 1U), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("domain.galgas", 190)) ;
        }
        ioArgument_ioTotalBitCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("domain.galgas", 191)) ;
      }
      break ;
    case GALGAS_bddType::kEnum_boolArray:
      {
        const cEnumAssociatedValues_bddType_boolArray * extractPtr_6882 = (const cEnumAssociatedValues_bddType_boolArray *) (enumerator_6481.current_mType (HERE).unsafePointer ()) ;
        const GALGAS_uint extractedValue_size = extractPtr_6882->mAssociatedValue0 ;
        {
        ioArgument_ioVarMap.setter_insertKey (enumerator_6481.current_mVarName (HERE), ioArgument_ioTotalBitCount, extractedValue_size, GALGAS_recordDomainMap::constructor_emptyMap (SOURCE_FILE ("domain.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("domain.galgas", 193)) ;
        }
        {
        ioArgument_ioVarList.setter_insertAtIndex (enumerator_6481.current_mVarName (HERE).mAttribute_string, ioArgument_ioTotalBitCount, extractedValue_size, GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("domain.galgas", 194)) ;
        }
        ioArgument_ioTotalBitCount = ioArgument_ioTotalBitCount.add_operation (extractedValue_size, inCompiler COMMA_SOURCE_FILE ("domain.galgas", 195)) ;
      }
      break ;
    case GALGAS_bddType::kEnum_namedType:
      {
        const cEnumAssociatedValues_bddType_namedType * extractPtr_7183 = (const cEnumAssociatedValues_bddType_namedType *) (enumerator_6481.current_mType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_typeName = extractPtr_7183->mAssociatedValue0 ;
        GALGAS_uint var_size ;
        GALGAS_recordDomainMap var_subDomainMap ;
        constinArgument_inDomainMap.method_searchKey (extractedValue_typeName, var_size, var_subDomainMap, inCompiler COMMA_SOURCE_FILE ("domain.galgas", 197)) ;
        {
        ioArgument_ioVarMap.setter_insertKey (enumerator_6481.current_mVarName (HERE), ioArgument_ioTotalBitCount, var_size, var_subDomainMap, inCompiler COMMA_SOURCE_FILE ("domain.galgas", 198)) ;
        }
        {
        ioArgument_ioVarList.setter_insertAtIndex (enumerator_6481.current_mVarName (HERE).mAttribute_string, ioArgument_ioTotalBitCount, var_size, GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("domain.galgas", 199)) ;
        }
        ioArgument_ioTotalBitCount = ioArgument_ioTotalBitCount.add_operation (var_size, inCompiler COMMA_SOURCE_FILE ("domain.galgas", 200)) ;
      }
      break ;
    }
    enumerator_6481.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Abstract category getter '@expression computeExpression'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryGetterSignature_expression_computeExpression> gCategoryGetterTable_expression_computeExpression ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryGetter_computeExpression (const int32_t inClassIndex,
                                            categoryGetterSignature_expression_computeExpression inGetter) {
  gCategoryGetterTable_expression_computeExpression.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryGetter_expression_computeExpression (void) {
  gCategoryGetterTable_expression_computeExpression.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_expression_computeExpression (NULL,
                                                         freeCategoryGetter_expression_computeExpression) ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binaryset callCategoryGetter_computeExpression (const cPtr_expression * inObject,
                                                       const GALGAS_domainMap & in_inDomainMap,
                                                       const GALGAS_varMap & in_inVarMap,
                                                       const GALGAS_uint & in_inTotalBitCount,
                                                       const GALGAS_computedFormulaMap & in_inComputedFormulaMap,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_binaryset result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_expression) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryGetterSignature_expression_computeExpression f = NULL ;
    if (classIndex < gCategoryGetterTable_expression_computeExpression.count ()) {
      f = gCategoryGetterTable_expression_computeExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryGetterTable_expression_computeExpression.count ()) {
           f = gCategoryGetterTable_expression_computeExpression (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryGetterTable_expression_computeExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inDomainMap, in_inVarMap, in_inTotalBitCount, in_inComputedFormulaMap, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast::GALGAS_ast (void) :
mAttribute_mDomainList (),
mAttribute_mFormulaList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast::~ GALGAS_ast (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast::GALGAS_ast (const GALGAS_domainDeclarationList & inOperand0,
                        const GALGAS_formulaList & inOperand1) :
mAttribute_mDomainList (inOperand0),
mAttribute_mFormulaList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast GALGAS_ast::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ast (GALGAS_domainDeclarationList::constructor_emptyList (HERE),
                     GALGAS_formulaList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast GALGAS_ast::constructor_new (const GALGAS_domainDeclarationList & inOperand0,
                                        const GALGAS_formulaList & inOperand1 
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ast (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ast::objectCompare (const GALGAS_ast & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDomainList.objectCompare (inOperand.mAttribute_mDomainList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFormulaList.objectCompare (inOperand.mAttribute_mFormulaList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ast::isValid (void) const {
  return mAttribute_mDomainList.isValid () && mAttribute_mFormulaList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ast::drop (void) {
  mAttribute_mDomainList.drop () ;
  mAttribute_mFormulaList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ast::description (C_String & ioString,
                              const int32_t inIndentation) const {
  ioString << "<struct @ast:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDomainList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFormulaList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationList GALGAS_ast::getter_mDomainList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDomainList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaList GALGAS_ast::getter_mFormulaList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormulaList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                      @ast type                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ast ("ast",
                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ast::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ast ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ast::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ast (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ast GALGAS_ast::extractObject (const GALGAS_object & inObject,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GALGAS_ast result ;
  const GALGAS_ast * p = (const GALGAS_ast *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ast *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ast", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Abstract category method '@abstractFormula analyzeFormula'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_abstractFormula_analyzeFormula> gCategoryMethodTable_abstractFormula_analyzeFormula ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_analyzeFormula (const int32_t inClassIndex,
                                         categoryMethodSignature_abstractFormula_analyzeFormula inMethod) {
  gCategoryMethodTable_abstractFormula_analyzeFormula.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_abstractFormula_analyzeFormula (void) {
  gCategoryMethodTable_abstractFormula_analyzeFormula.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractFormula_analyzeFormula (NULL,
                                                           freeCategoryMethod_abstractFormula_analyzeFormula) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_analyzeFormula (const cPtr_abstractFormula * inObject,
                                        const GALGAS_string constin_inSourceFilePath,
                                        const GALGAS_domainMap constin_inDomainMap,
                                        GALGAS_computedFormulaMap & io_ioComputedFormulaMap,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractFormula) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_abstractFormula_analyzeFormula f = NULL ;
    if (classIndex < gCategoryMethodTable_abstractFormula_analyzeFormula.count ()) {
      f = gCategoryMethodTable_abstractFormula_analyzeFormula (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_abstractFormula_analyzeFormula.count ()) {
           f = gCategoryMethodTable_abstractFormula_analyzeFormula (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_abstractFormula_analyzeFormula.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSourceFilePath, constin_inDomainMap, io_ioComputedFormulaMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList_2D_element::GALGAS_varList_2D_element (void) :
mAttribute_mVarName (),
mAttribute_mBitIndex (),
mAttribute_mBitCount () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList_2D_element::~ GALGAS_varList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList_2D_element::GALGAS_varList_2D_element (const GALGAS_string & inOperand0,
                                                      const GALGAS_uint & inOperand1,
                                                      const GALGAS_uint & inOperand2) :
mAttribute_mVarName (inOperand0),
mAttribute_mBitIndex (inOperand1),
mAttribute_mBitCount (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList_2D_element GALGAS_varList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_varList_2D_element (GALGAS_string::constructor_default (HERE),
                                    GALGAS_uint::constructor_default (HERE),
                                    GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList_2D_element GALGAS_varList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                      const GALGAS_uint & inOperand1,
                                                                      const GALGAS_uint & inOperand2 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_varList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_varList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_varList_2D_element::objectCompare (const GALGAS_varList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mVarName.objectCompare (inOperand.mAttribute_mVarName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBitIndex.objectCompare (inOperand.mAttribute_mBitIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBitCount.objectCompare (inOperand.mAttribute_mBitCount) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_varList_2D_element::isValid (void) const {
  return mAttribute_mVarName.isValid () && mAttribute_mBitIndex.isValid () && mAttribute_mBitCount.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varList_2D_element::drop (void) {
  mAttribute_mVarName.drop () ;
  mAttribute_mBitIndex.drop () ;
  mAttribute_mBitCount.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varList_2D_element::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @varList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mVarName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBitIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBitCount.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_varList_2D_element::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_varList_2D_element::getter_mBitIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_varList_2D_element::getter_mBitCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitCount ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @varList-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varList_2D_element ("varList-element",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList_2D_element GALGAS_varList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_varList_2D_element result ;
  const GALGAS_varList_2D_element * p = (const GALGAS_varList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaList_2D_element::GALGAS_formulaList_2D_element (void) :
mAttribute_mFormula () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaList_2D_element::~ GALGAS_formulaList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaList_2D_element::GALGAS_formulaList_2D_element (const GALGAS_abstractFormula & inOperand0) :
mAttribute_mFormula (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaList_2D_element GALGAS_formulaList_2D_element::constructor_new (const GALGAS_abstractFormula & inOperand0 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formulaList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_formulaList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_formulaList_2D_element::objectCompare (const GALGAS_formulaList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFormula.objectCompare (inOperand.mAttribute_mFormula) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_formulaList_2D_element::isValid (void) const {
  return mAttribute_mFormula.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaList_2D_element::drop (void) {
  mAttribute_mFormula.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaList_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @formulaList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFormula.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractFormula GALGAS_formulaList_2D_element::getter_mFormula (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormula ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @formulaList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formulaList_2D_element ("formulaList-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formulaList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formulaList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formulaList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaList_2D_element GALGAS_formulaList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_formulaList_2D_element result ;
  const GALGAS_formulaList_2D_element * p = (const GALGAS_formulaList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formulaList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap_2D_element::GALGAS_recordDomainMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIndex (),
mAttribute_mBitCount (),
mAttribute_mSubDomain () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap_2D_element::~ GALGAS_recordDomainMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap_2D_element::GALGAS_recordDomainMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1,
                                                                      const GALGAS_uint & inOperand2,
                                                                      const GALGAS_recordDomainMap & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mIndex (inOperand1),
mAttribute_mBitCount (inOperand2),
mAttribute_mSubDomain (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap_2D_element GALGAS_recordDomainMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_recordDomainMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE),
                                            GALGAS_recordDomainMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap_2D_element GALGAS_recordDomainMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_uint & inOperand1,
                                                                                      const GALGAS_uint & inOperand2,
                                                                                      const GALGAS_recordDomainMap & inOperand3 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_recordDomainMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_recordDomainMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_recordDomainMap_2D_element::objectCompare (const GALGAS_recordDomainMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndex.objectCompare (inOperand.mAttribute_mIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBitCount.objectCompare (inOperand.mAttribute_mBitCount) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSubDomain.objectCompare (inOperand.mAttribute_mSubDomain) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_recordDomainMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () && mAttribute_mBitCount.isValid () && mAttribute_mSubDomain.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_recordDomainMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIndex.drop () ;
  mAttribute_mBitCount.drop () ;
  mAttribute_mSubDomain.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_recordDomainMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @recordDomainMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBitCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSubDomain.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_recordDomainMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_recordDomainMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_recordDomainMap_2D_element::getter_mBitCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap GALGAS_recordDomainMap_2D_element::getter_mSubDomain (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSubDomain ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @recordDomainMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_recordDomainMap_2D_element ("recordDomainMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_recordDomainMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_recordDomainMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_recordDomainMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_recordDomainMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap_2D_element GALGAS_recordDomainMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_recordDomainMap_2D_element result ;
  const GALGAS_recordDomainMap_2D_element * p = (const GALGAS_recordDomainMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_recordDomainMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("recordDomainMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainMap_2D_element::GALGAS_domainMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mBitCount (),
mAttribute_mRecordMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainMap_2D_element::~ GALGAS_domainMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainMap_2D_element::GALGAS_domainMap_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_uint & inOperand1,
                                                          const GALGAS_recordDomainMap & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mBitCount (inOperand1),
mAttribute_mRecordMap (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainMap_2D_element GALGAS_domainMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_domainMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                      GALGAS_uint::constructor_default (HERE),
                                      GALGAS_recordDomainMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainMap_2D_element GALGAS_domainMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_uint & inOperand1,
                                                                          const GALGAS_recordDomainMap & inOperand2 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_domainMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_domainMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_domainMap_2D_element::objectCompare (const GALGAS_domainMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBitCount.objectCompare (inOperand.mAttribute_mBitCount) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRecordMap.objectCompare (inOperand.mAttribute_mRecordMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_domainMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mBitCount.isValid () && mAttribute_mRecordMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mBitCount.drop () ;
  mAttribute_mRecordMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainMap_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @domainMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBitCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRecordMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_domainMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_domainMap_2D_element::getter_mBitCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap GALGAS_domainMap_2D_element::getter_mRecordMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRecordMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @domainMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_domainMap_2D_element ("domainMap-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_domainMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_domainMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainMap_2D_element GALGAS_domainMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_domainMap_2D_element result ;
  const GALGAS_domainMap_2D_element * p = (const GALGAS_domainMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_domainMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap_2D_element::GALGAS_varMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIndex (),
mAttribute_mBitCount (),
mAttribute_mRecordDomainMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap_2D_element::~ GALGAS_varMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap_2D_element::GALGAS_varMap_2D_element (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_uint & inOperand1,
                                                    const GALGAS_uint & inOperand2,
                                                    const GALGAS_recordDomainMap & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mIndex (inOperand1),
mAttribute_mBitCount (inOperand2),
mAttribute_mRecordDomainMap (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap_2D_element GALGAS_varMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_varMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                   GALGAS_uint::constructor_default (HERE),
                                   GALGAS_uint::constructor_default (HERE),
                                   GALGAS_recordDomainMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varMap_2D_element GALGAS_varMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_uint & inOperand1,
                                                                    const GALGAS_uint & inOperand2,
                                                                    const GALGAS_recordDomainMap & inOperand3 
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_varMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_varMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_varMap_2D_element::objectCompare (const GALGAS_varMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIndex.objectCompare (inOperand.mAttribute_mIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBitCount.objectCompare (inOperand.mAttribute_mBitCount) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRecordDomainMap.objectCompare (inOperand.mAttribute_mRecordDomainMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_varMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIndex.isValid () && mAttribute_mBitCount.isValid () && mAttribute_mRecordDomainMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIndex.drop () ;
  mAttribute_mBitCount.drop () ;
  mAttribute_mRecordDomainMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_varMap_2D_element::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<struct @varMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBitCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRecordDomainMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_varMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_varMap_2D_element::getter_mIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_varMap_2D_element::getter_mBitCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_recordDomainMap GALGAS_varMap_2D_element::getter_mRecordDomainMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRecordDomainMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @varMap-element type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varMap_2D_element ("varMap-element",
                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_varMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_varMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_computedFormulaMap_2D_element::GALGAS_computedFormulaMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mVarList (),
mAttribute_mBitCount (),
mAttribute_mValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_computedFormulaMap_2D_element::~ GALGAS_computedFormulaMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_computedFormulaMap_2D_element::GALGAS_computedFormulaMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_varList & inOperand1,
                                                                            const GALGAS_uint & inOperand2,
                                                                            const GALGAS_binaryset & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mVarList (inOperand1),
mAttribute_mBitCount (inOperand2),
mAttribute_mValue (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_computedFormulaMap_2D_element GALGAS_computedFormulaMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_computedFormulaMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_varList::constructor_emptyList (HERE),
                                               GALGAS_uint::constructor_default (HERE),
                                               GALGAS_binaryset::constructor_emptyBinarySet (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_computedFormulaMap_2D_element GALGAS_computedFormulaMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_varList & inOperand1,
                                                                                            const GALGAS_uint & inOperand2,
                                                                                            const GALGAS_binaryset & inOperand3 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_computedFormulaMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_computedFormulaMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_computedFormulaMap_2D_element::objectCompare (const GALGAS_computedFormulaMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mVarList.objectCompare (inOperand.mAttribute_mVarList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBitCount.objectCompare (inOperand.mAttribute_mBitCount) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValue.objectCompare (inOperand.mAttribute_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_computedFormulaMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mVarList.isValid () && mAttribute_mBitCount.isValid () && mAttribute_mValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_computedFormulaMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mVarList.drop () ;
  mAttribute_mBitCount.drop () ;
  mAttribute_mValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_computedFormulaMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @computedFormulaMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mVarList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBitCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_computedFormulaMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_varList GALGAS_computedFormulaMap_2D_element::getter_mVarList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_computedFormulaMap_2D_element::getter_mBitCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBitCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binaryset GALGAS_computedFormulaMap_2D_element::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @computedFormulaMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_computedFormulaMap_2D_element ("computedFormulaMap-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_computedFormulaMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedFormulaMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_computedFormulaMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedFormulaMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaParameterListInExpression_2D_element::GALGAS_formulaParameterListInExpression_2D_element (void) :
mAttribute_mParameterName (),
mAttribute_mFieldNames () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaParameterListInExpression_2D_element::~ GALGAS_formulaParameterListInExpression_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaParameterListInExpression_2D_element::GALGAS_formulaParameterListInExpression_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstringlist & inOperand1) :
mAttribute_mParameterName (inOperand0),
mAttribute_mFieldNames (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaParameterListInExpression_2D_element GALGAS_formulaParameterListInExpression_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_formulaParameterListInExpression_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formulaParameterListInExpression_2D_element GALGAS_formulaParameterListInExpression_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_lstringlist & inOperand1 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formulaParameterListInExpression_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_formulaParameterListInExpression_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_formulaParameterListInExpression_2D_element::objectCompare (const GALGAS_formulaParameterListInExpression_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mParameterName.objectCompare (inOperand.mAttribute_mParameterName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFieldNames.objectCompare (inOperand.mAttribute_mFieldNames) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_formulaParameterListInExpression_2D_element::isValid (void) const {
  return mAttribute_mParameterName.isValid () && mAttribute_mFieldNames.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaParameterListInExpression_2D_element::drop (void) {
  mAttribute_mParameterName.drop () ;
  mAttribute_mFieldNames.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_formulaParameterListInExpression_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @formulaParameterListInExpression-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mParameterName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFieldNames.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_formulaParameterListInExpression_2D_element::getter_mParameterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mParameterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_formulaParameterListInExpression_2D_element::getter_mFieldNames (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldNames ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @formulaParameterListInExpression-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formulaParameterListInExpression_2D_element ("formulaParameterListInExpression-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_formulaParameterListInExpression_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaParameterListInExpression_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_formulaParameterListInExpression_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formulaParameterListInExpression_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList_2D_element::GALGAS_domainFieldList_2D_element (void) :
mAttribute_mVarName (),
mAttribute_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList_2D_element::~ GALGAS_domainFieldList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList_2D_element::GALGAS_domainFieldList_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_bddType & inOperand1) :
mAttribute_mVarName (inOperand0),
mAttribute_mType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList_2D_element GALGAS_domainFieldList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_bddType & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_domainFieldList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_domainFieldList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_domainFieldList_2D_element::objectCompare (const GALGAS_domainFieldList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mVarName.objectCompare (inOperand.mAttribute_mVarName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_domainFieldList_2D_element::isValid (void) const {
  return mAttribute_mVarName.isValid () && mAttribute_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainFieldList_2D_element::drop (void) {
  mAttribute_mVarName.drop () ;
  mAttribute_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainFieldList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @domainFieldList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mVarName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_domainFieldList_2D_element::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bddType GALGAS_domainFieldList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @domainFieldList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_domainFieldList_2D_element ("domainFieldList-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_domainFieldList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainFieldList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_domainFieldList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainFieldList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainFieldList_2D_element GALGAS_domainFieldList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_domainFieldList_2D_element result ;
  const GALGAS_domainFieldList_2D_element * p = (const GALGAS_domainFieldList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_domainFieldList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainFieldList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationList_2D_element::GALGAS_domainDeclarationList_2D_element (void) :
mAttribute_mDomainName (),
mAttribute_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationList_2D_element::~ GALGAS_domainDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationList_2D_element::GALGAS_domainDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_domainDeclarationType & inOperand1) :
mAttribute_mDomainName (inOperand0),
mAttribute_mType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationList_2D_element GALGAS_domainDeclarationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_domainDeclarationType & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_domainDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_domainDeclarationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_domainDeclarationList_2D_element::objectCompare (const GALGAS_domainDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDomainName.objectCompare (inOperand.mAttribute_mDomainName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_domainDeclarationList_2D_element::isValid (void) const {
  return mAttribute_mDomainName.isValid () && mAttribute_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainDeclarationList_2D_element::drop (void) {
  mAttribute_mDomainName.drop () ;
  mAttribute_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_domainDeclarationList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @domainDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDomainName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_domainDeclarationList_2D_element::getter_mDomainName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDomainName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationType GALGAS_domainDeclarationList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @domainDeclarationList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_domainDeclarationList_2D_element ("domainDeclarationList-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_domainDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_domainDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_domainDeclarationList_2D_element GALGAS_domainDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_domainDeclarationList_2D_element result ;
  const GALGAS_domainDeclarationList_2D_element * p = (const GALGAS_domainDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_domainDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("domainDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@assignmentFormula analyzeFormula'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assignmentFormula_analyzeFormula (const cPtr_abstractFormula * inObject,
                                                             const GALGAS_string /* constinArgument_inSourceFilePath */,
                                                             const GALGAS_domainMap constinArgument_inDomainMap,
                                                             GALGAS_computedFormulaMap & ioArgument_ioComputedFormulaMap,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentFormula * object = (const cPtr_assignmentFormula *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentFormula) ;
  GALGAS_uint var_totalBitCount = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_varList var_varList = GALGAS_varList::constructor_emptyList (SOURCE_FILE ("formula-assignment.galgas", 78)) ;
  GALGAS_varMap var_varMap = GALGAS_varMap::constructor_emptyMap (SOURCE_FILE ("formula-assignment.galgas", 79)) ;
  categoryMethod_analyze (object->mAttribute_mFormulaArgumentList, constinArgument_inDomainMap, var_varMap, var_varList, var_totalBitCount, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 80)) ;
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_formulaKind::kNotBuilt:
    break ;
  case GALGAS_formulaKind::kEnum_assignment:
    {
      inCompiler->printMessage (object->mAttribute_mFormulaName.mAttribute_string.add_operation (GALGAS_string ("..."), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 84))  COMMA_SOURCE_FILE ("formula-assignment.galgas", 84)) ;
      GALGAS_timer var_timer = GALGAS_timer::constructor_start (SOURCE_FILE ("formula-assignment.galgas", 85)) ;
      GALGAS_binaryset var_result = callCategoryGetter_computeExpression ((const cPtr_expression *) object->mAttribute_mExpression.ptr (), constinArgument_inDomainMap, var_varMap, var_totalBitCount, ioArgument_ioComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 86)) ;
      {
      ioArgument_ioComputedFormulaMap.setter_insertKey (object->mAttribute_mFormulaName, var_varList, var_totalBitCount, var_result, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 87)) ;
      }
      GALGAS_uint_36__34_ var_valueCount = var_result.getter_valueCount (var_totalBitCount, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 88)) ;
      GALGAS_uint_36__34_ var_nodeCount = var_result.getter_nodeCount (SOURCE_FILE ("formula-assignment.galgas", 90)) ;
      GALGAS_string temp_0 ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_valueCount.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
      if (kBoolTrue == test_1) {
        temp_0 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_1) {
        temp_0 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_2 ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_nodeCount.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
      if (kBoolTrue == test_3) {
        temp_2 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_3) {
        temp_2 = GALGAS_string::makeEmptyString () ;
      }
      inCompiler->printMessage (GALGAS_string (" ").add_operation (var_valueCount.getter_string (SOURCE_FILE ("formula-assignment.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 91)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 92)).add_operation (var_valueCount.getter_string (SOURCE_FILE ("formula-assignment.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 92)).add_operation (GALGAS_string (") value"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 92)).add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 92)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 92)).add_operation (var_nodeCount.getter_string (SOURCE_FILE ("formula-assignment.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 93)).add_operation (GALGAS_string (" node"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 93)).add_operation (temp_2, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 93)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 93)).add_operation (var_timer.getter_string (SOURCE_FILE ("formula-assignment.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 94)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 94))  COMMA_SOURCE_FILE ("formula-assignment.galgas", 91)) ;
    }
    break ;
  case GALGAS_formulaKind::kEnum_fixedPoint:
    {
      const cEnumAssociatedValues_formulaKind_fixedPoint * extractPtr_4806 = (const cEnumAssociatedValues_formulaKind_fixedPoint *) (object->mAttribute_mKind.unsafePointer ()) ;
      const GALGAS_binaryset extractedValue_startValue = extractPtr_4806->mAssociatedValue0 ;
      inCompiler->printMessage (object->mAttribute_mFormulaName.mAttribute_string.add_operation (GALGAS_string ("..."), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 96))  COMMA_SOURCE_FILE ("formula-assignment.galgas", 96)) ;
      GALGAS_timer var_timer = GALGAS_timer::constructor_start (SOURCE_FILE ("formula-assignment.galgas", 97)) ;
      GALGAS_binaryset var_result = extractedValue_startValue ;
      {
      ioArgument_ioComputedFormulaMap.setter_insertKey (object->mAttribute_mFormulaName, var_varList, var_totalBitCount, var_result, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 99)) ;
      }
      GALGAS_bool var_iterate = GALGAS_bool (true) ;
      GALGAS_uint var_iterationCount = GALGAS_uint ((uint32_t) 0U) ;
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("formula-assignment.galgas", 102)).isValid ()) {
        uint32_t variant_3988 = GALGAS_uint::constructor_max (SOURCE_FILE ("formula-assignment.galgas", 102)).uintValue () ;
        bool loop_3988 = true ;
        while (loop_3988) {
          loop_3988 = var_iterate.isValid () ;
          if (loop_3988) {
            loop_3988 = var_iterate.boolValue () ;
          }
          if (loop_3988 && (0 == variant_3988)) {
            loop_3988 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("formula-assignment.galgas", 102)) ;
          }
          if (loop_3988) {
            variant_3988 -- ;
            var_iterationCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("formula-assignment.galgas", 103)) ;
            GALGAS_binaryset var_r = callCategoryGetter_computeExpression ((const cPtr_expression *) object->mAttribute_mExpression.ptr (), constinArgument_inDomainMap, var_varMap, var_totalBitCount, ioArgument_ioComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 104)) ;
            const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_result.objectCompare (var_r)).boolEnum () ;
            if (kBoolTrue == test_4) {
              var_iterate = GALGAS_bool (false) ;
            }else if (kBoolFalse == test_4) {
              var_result = var_r ;
              {
              ioArgument_ioComputedFormulaMap.setter_setMValueForKey (var_result, object->mAttribute_mFormulaName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 109)) ;
              }
            }
          }
        }
      }
      GALGAS_uint_36__34_ var_valueCount = var_result.getter_valueCount (var_totalBitCount, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 112)) ;
      GALGAS_uint_36__34_ var_nodeCount = var_result.getter_nodeCount (SOURCE_FILE ("formula-assignment.galgas", 114)) ;
      GALGAS_string temp_5 ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_iterationCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_7 ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_valueCount.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
      if (kBoolTrue == test_8) {
        temp_7 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_8) {
        temp_7 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, var_nodeCount.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string ("s") ;
      }else if (kBoolFalse == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }
      inCompiler->printMessage (GALGAS_string (" ").add_operation (var_iterationCount.getter_string (SOURCE_FILE ("formula-assignment.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 115)).add_operation (GALGAS_string (" iteration"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 116)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 116)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 116)).add_operation (var_valueCount.getter_string (SOURCE_FILE ("formula-assignment.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 117)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 117)).add_operation (var_valueCount.getter_string (SOURCE_FILE ("formula-assignment.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 117)).add_operation (GALGAS_string (") value"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 117)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 117)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 117)).add_operation (var_nodeCount.getter_string (SOURCE_FILE ("formula-assignment.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 118)).add_operation (GALGAS_string (" node"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 118)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 118)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 118)).add_operation (var_timer.getter_string (SOURCE_FILE ("formula-assignment.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 119)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("formula-assignment.galgas", 119))  COMMA_SOURCE_FILE ("formula-assignment.galgas", 115)) ;
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assignmentFormula_analyzeFormula (void) {
  enterCategoryMethod_analyzeFormula (kTypeDescriptor_GALGAS_assignmentFormula.mSlotID,
                                      categoryMethod_assignmentFormula_analyzeFormula) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentFormula_analyzeFormula (defineCategoryMethod_assignmentFormula_analyzeFormula, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@setting_nodeHashMapSize analyzeFormula'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_setting_5F_nodeHashMapSize_analyzeFormula (const cPtr_abstractFormula * inObject,
                                                                      const GALGAS_string /* constinArgument_inSourceFilePath */,
                                                                      const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                      GALGAS_computedFormulaMap & /* ioArgument_ioComputedFormulaMap */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setting_5F_nodeHashMapSize * object = (const cPtr_setting_5F_nodeHashMapSize *) inObject ;
  macroValidSharedObject (object, cPtr_setting_5F_nodeHashMapSize) ;
  {
  GALGAS_binaryset::class_method_setNodeTableSize (object->mAttribute_mSetting.mAttribute_uint COMMA_SOURCE_FILE ("setting-map.galgas", 46)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_setting_5F_nodeHashMapSize_analyzeFormula (void) {
  enterCategoryMethod_analyzeFormula (kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize.mSlotID,
                                      categoryMethod_setting_5F_nodeHashMapSize_analyzeFormula) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_setting_5F_nodeHashMapSize_analyzeFormula (defineCategoryMethod_setting_5F_nodeHashMapSize_analyzeFormula, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@setting_andCacheMapSize analyzeFormula'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_setting_5F_andCacheMapSize_analyzeFormula (const cPtr_abstractFormula * inObject,
                                                                      const GALGAS_string /* constinArgument_inSourceFilePath */,
                                                                      const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                                      GALGAS_computedFormulaMap & /* ioArgument_ioComputedFormulaMap */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setting_5F_andCacheMapSize * object = (const cPtr_setting_5F_andCacheMapSize *) inObject ;
  macroValidSharedObject (object, cPtr_setting_5F_andCacheMapSize) ;
  {
  GALGAS_binaryset::class_method_setAndTableSize (object->mAttribute_mSetting.mAttribute_uint COMMA_SOURCE_FILE ("setting-map.galgas", 56)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_setting_5F_andCacheMapSize_analyzeFormula (void) {
  enterCategoryMethod_analyzeFormula (kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize.mSlotID,
                                      categoryMethod_setting_5F_andCacheMapSize_analyzeFormula) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_setting_5F_andCacheMapSize_analyzeFormula (defineCategoryMethod_setting_5F_andCacheMapSize_analyzeFormula, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category method '@dumpFormula analyzeFormula'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_dumpFormula_analyzeFormula (const cPtr_abstractFormula * inObject,
                                                       const GALGAS_string /* constinArgument_inSourceFilePath */,
                                                       const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                       GALGAS_computedFormulaMap & ioArgument_ioComputedFormulaMap,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dumpFormula * object = (const cPtr_dumpFormula *) inObject ;
  macroValidSharedObject (object, cPtr_dumpFormula) ;
  GALGAS_varList var_varList ;
  GALGAS_uint var_bitCount ;
  GALGAS_binaryset var_result ;
  ioArgument_ioComputedFormulaMap.method_searchKey (object->mAttribute_mFormulaName, var_varList, var_bitCount, var_result, inCompiler COMMA_SOURCE_FILE ("formula-dump.galgas", 37)) ;
  GALGAS_uint_36__34_ var_valueCount = var_result.getter_valueCount (var_bitCount, inCompiler COMMA_SOURCE_FILE ("formula-dump.galgas", 38)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_valueCount.objectCompare (GALGAS_uint_36__34_ ((uint64_t) 1ULL))).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("s") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }
  inCompiler->printMessage (GALGAS_string ("Dump $").add_operation (object->mAttribute_mFormulaName.getter_string (SOURCE_FILE ("formula-dump.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("formula-dump.galgas", 39)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("formula-dump.galgas", 39)).add_operation (var_valueCount.getter_string (SOURCE_FILE ("formula-dump.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("formula-dump.galgas", 39)).add_operation (GALGAS_string (" value"), inCompiler COMMA_SOURCE_FILE ("formula-dump.galgas", 39)).add_operation (temp_0, inCompiler COMMA_SOURCE_FILE ("formula-dump.galgas", 39)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("formula-dump.galgas", 39))  COMMA_SOURCE_FILE ("formula-dump.galgas", 39)) ;
  GALGAS_stringlist var_nameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("formula-dump.galgas", 40)) ;
  GALGAS_uintlist var_bitCountList = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("formula-dump.galgas", 41)) ;
  cEnumerator_varList enumerator_2114 (var_varList, kEnumeration_up) ;
  while (enumerator_2114.hasCurrentObject ()) {
    var_nameList.addAssign_operation (enumerator_2114.current_mVarName (HERE)  COMMA_SOURCE_FILE ("formula-dump.galgas", 43)) ;
    var_bitCountList.addAssign_operation (enumerator_2114.current_mBitCount (HERE)  COMMA_SOURCE_FILE ("formula-dump.galgas", 44)) ;
    enumerator_2114.gotoNextObject () ;
  }
  inCompiler->printMessage (var_result.getter_print (var_nameList, var_bitCountList COMMA_SOURCE_FILE ("formula-dump.galgas", 46))  COMMA_SOURCE_FILE ("formula-dump.galgas", 46)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_dumpFormula_analyzeFormula (void) {
  enterCategoryMethod_analyzeFormula (kTypeDescriptor_GALGAS_dumpFormula.mSlotID,
                                      categoryMethod_dumpFormula_analyzeFormula) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dumpFormula_analyzeFormula (defineCategoryMethod_dumpFormula_analyzeFormula, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@graphvizFormula analyzeFormula'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_graphvizFormula_analyzeFormula (const cPtr_abstractFormula * inObject,
                                                           const GALGAS_string constinArgument_inSourceFilePath,
                                                           const GALGAS_domainMap /* constinArgument_inDomainMap */,
                                                           GALGAS_computedFormulaMap & ioArgument_ioComputedFormulaMap,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphvizFormula * object = (const cPtr_graphvizFormula *) inObject ;
  macroValidSharedObject (object, cPtr_graphvizFormula) ;
  GALGAS_varList var_varList ;
  GALGAS_binaryset var_result ;
  GALGAS_uint joker_1847 ; // Joker input parameter
  ioArgument_ioComputedFormulaMap.method_searchKey (object->mAttribute_mFormulaName, var_varList, joker_1847, var_result, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 37)) ;
  GALGAS_string var_filePath = constinArgument_inSourceFilePath.getter_stringByDeletingPathExtension (SOURCE_FILE ("formula-graphviz.galgas", 38)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 38)).add_operation (object->mAttribute_mFormulaName.getter_string (SOURCE_FILE ("formula-graphviz.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 38)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 38)) ;
  inCompiler->printMessage (GALGAS_string ("Graphviz $").add_operation (object->mAttribute_mFormulaName.getter_string (SOURCE_FILE ("formula-graphviz.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 39)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 39)).add_operation (var_filePath, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 39)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 39))  COMMA_SOURCE_FILE ("formula-graphviz.galgas", 39)) ;
  GALGAS_stringlist var_bitNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("formula-graphviz.galgas", 40)) ;
  cEnumerator_varList enumerator_2075 (var_varList, kEnumeration_down) ;
  while (enumerator_2075.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_2075.current_mBitCount (HERE).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_bitNameList.addAssign_operation (enumerator_2075.current_mVarName (HERE)  COMMA_SOURCE_FILE ("formula-graphviz.galgas", 43)) ;
    }else if (kBoolFalse == test_0) {
      cEnumerator_range enumerator_2176 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), enumerator_2075.current_mBitCount (HERE).substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 45))), kEnumeration_up) ;
      while (enumerator_2176.hasCurrentObject ()) {
        var_bitNameList.addAssign_operation (enumerator_2075.current_mVarName (HERE).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 46)).add_operation (enumerator_2176.current (HERE).getter_string (SOURCE_FILE ("formula-graphviz.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 46))  COMMA_SOURCE_FILE ("formula-graphviz.galgas", 46)) ;
        enumerator_2176.gotoNextObject () ;
      }
    }
    enumerator_2075.gotoNextObject () ;
  }
  GALGAS_string var_s = var_result.getter_graphviz (var_bitNameList COMMA_SOURCE_FILE ("formula-graphviz.galgas", 50)) ;
  GALGAS_bool joker_2337 ; // Joker input parameter
  var_s.method_writeToFileWhenDifferentContents (var_filePath, joker_2337, inCompiler COMMA_SOURCE_FILE ("formula-graphviz.galgas", 51)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_graphvizFormula_analyzeFormula (void) {
  enterCategoryMethod_analyzeFormula (kTypeDescriptor_GALGAS_graphvizFormula.mSlotID,
                                      categoryMethod_graphvizFormula_analyzeFormula) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphvizFormula_analyzeFormula (defineCategoryMethod_graphvizFormula_analyzeFormula, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category getter '@varInExpression computeExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_binaryset extensionGetter_varInExpression_computeExpression (const cPtr_expression * inObject,
                                                                           const GALGAS_domainMap & /* constinArgument_inDomainMap */,
                                                                           const GALGAS_varMap & constinArgument_inVarMap,
                                                                           const GALGAS_uint & /* constinArgument_inTotalBitCount */,
                                                                           const GALGAS_computedFormulaMap & /* constinArgument_inComputedFormulaMap */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_varInExpression * object = (const cPtr_varInExpression *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpression) ;
  GALGAS_uint var_idx ;
  GALGAS_uint var_bitCount ;
  GALGAS_recordDomainMap var_subdomainMap ;
  constinArgument_inVarMap.method_searchKey (object->mAttribute_mVarName, var_idx, var_bitCount, var_subdomainMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 307)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_subdomainMap.getter_count (SOURCE_FILE ("expression.galgas", 308)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("variable is a record; use dot notation")  COMMA_SOURCE_FILE ("expression.galgas", 309)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_bitCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("variable is not boolean; use {...} or dot notation")  COMMA_SOURCE_FILE ("expression.galgas", 311)) ;
    }
  }
  result_outResult = GALGAS_binaryset::constructor_binarySetWithBit (var_idx, inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 313)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_varInExpression_computeExpression (void) {
  enterCategoryGetter_computeExpression (kTypeDescriptor_GALGAS_varInExpression.mSlotID,
                                         extensionGetter_varInExpression_computeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_varInExpression_computeExpression (defineCategoryGetter_varInExpression_computeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category getter '@varBitInExpression computeExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_binaryset extensionGetter_varBitInExpression_computeExpression (const cPtr_expression * inObject,
                                                                              const GALGAS_domainMap & /* constinArgument_inDomainMap */,
                                                                              const GALGAS_varMap & constinArgument_inVarMap,
                                                                              const GALGAS_uint & /* constinArgument_inTotalBitCount */,
                                                                              const GALGAS_computedFormulaMap & /* constinArgument_inComputedFormulaMap */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_varBitInExpression * object = (const cPtr_varBitInExpression *) inObject ;
  macroValidSharedObject (object, cPtr_varBitInExpression) ;
  GALGAS_uint var_idx ;
  GALGAS_uint var_bitCount ;
  GALGAS_recordDomainMap var_subdomainMap ;
  constinArgument_inVarMap.method_searchKey (object->mAttribute_mVarName, var_idx, var_bitCount, var_subdomainMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 325)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_subdomainMap.getter_count (SOURCE_FILE ("expression.galgas", 326)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("variable is a record; use dot notation")  COMMA_SOURCE_FILE ("expression.galgas", 327)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsInfOrEqual, var_bitCount.objectCompare (object->mAttribute_mVarBit.mAttribute_uint)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mVarBit.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("bit index should be < ").add_operation (var_bitCount.getter_string (SOURCE_FILE ("expression.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 329))  COMMA_SOURCE_FILE ("expression.galgas", 329)) ;
    }
  }
  result_outResult = GALGAS_binaryset::constructor_binarySetWithBit (var_idx.add_operation (object->mAttribute_mVarBit.mAttribute_uint, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 331)), inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 331)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_varBitInExpression_computeExpression (void) {
  enterCategoryGetter_computeExpression (kTypeDescriptor_GALGAS_varBitInExpression.mSlotID,
                                         extensionGetter_varBitInExpression_computeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_varBitInExpression_computeExpression (defineCategoryGetter_varBitInExpression_computeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category getter '@andExpression computeExpression'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_binaryset extensionGetter_andExpression_computeExpression (const cPtr_expression * inObject,
                                                                         const GALGAS_domainMap & constinArgument_inDomainMap,
                                                                         const GALGAS_varMap & constinArgument_inVarMap,
                                                                         const GALGAS_uint & constinArgument_inTotalBitCount,
                                                                         const GALGAS_computedFormulaMap & constinArgument_inComputedFormulaMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_andExpression * object = (const cPtr_andExpression *) inObject ;
  macroValidSharedObject (object, cPtr_andExpression) ;
  GALGAS_binaryset var_left = callCategoryGetter_computeExpression ((const cPtr_expression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 343)) ;
  GALGAS_binaryset var_right = callCategoryGetter_computeExpression ((const cPtr_expression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 344)) ;
  result_outResult = var_left.operator_and (var_right COMMA_SOURCE_FILE ("expression.galgas", 345)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_andExpression_computeExpression (void) {
  enterCategoryGetter_computeExpression (kTypeDescriptor_GALGAS_andExpression.mSlotID,
                                         extensionGetter_andExpression_computeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_andExpression_computeExpression (defineCategoryGetter_andExpression_computeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category getter '@orExpression computeExpression'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_binaryset extensionGetter_orExpression_computeExpression (const cPtr_expression * inObject,
                                                                        const GALGAS_domainMap & constinArgument_inDomainMap,
                                                                        const GALGAS_varMap & constinArgument_inVarMap,
                                                                        const GALGAS_uint & constinArgument_inTotalBitCount,
                                                                        const GALGAS_computedFormulaMap & constinArgument_inComputedFormulaMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_orExpression * object = (const cPtr_orExpression *) inObject ;
  macroValidSharedObject (object, cPtr_orExpression) ;
  GALGAS_binaryset var_left = callCategoryGetter_computeExpression ((const cPtr_expression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 357)) ;
  GALGAS_binaryset var_right = callCategoryGetter_computeExpression ((const cPtr_expression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 358)) ;
  result_outResult = var_left.operator_or (var_right COMMA_SOURCE_FILE ("expression.galgas", 359)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_orExpression_computeExpression (void) {
  enterCategoryGetter_computeExpression (kTypeDescriptor_GALGAS_orExpression.mSlotID,
                                         extensionGetter_orExpression_computeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_orExpression_computeExpression (defineCategoryGetter_orExpression_computeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category getter '@xorExpression computeExpression'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_binaryset extensionGetter_xorExpression_computeExpression (const cPtr_expression * inObject,
                                                                         const GALGAS_domainMap & constinArgument_inDomainMap,
                                                                         const GALGAS_varMap & constinArgument_inVarMap,
                                                                         const GALGAS_uint & constinArgument_inTotalBitCount,
                                                                         const GALGAS_computedFormulaMap & constinArgument_inComputedFormulaMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_xorExpression * object = (const cPtr_xorExpression *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpression) ;
  GALGAS_binaryset var_left = callCategoryGetter_computeExpression ((const cPtr_expression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 371)) ;
  GALGAS_binaryset var_right = callCategoryGetter_computeExpression ((const cPtr_expression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 372)) ;
  result_outResult = var_left.operator_xor (var_right COMMA_SOURCE_FILE ("expression.galgas", 373)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_xorExpression_computeExpression (void) {
  enterCategoryGetter_computeExpression (kTypeDescriptor_GALGAS_xorExpression.mSlotID,
                                         extensionGetter_xorExpression_computeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_xorExpression_computeExpression (defineCategoryGetter_xorExpression_computeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category getter '@impliesExpression computeExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_binaryset extensionGetter_impliesExpression_computeExpression (const cPtr_expression * inObject,
                                                                             const GALGAS_domainMap & constinArgument_inDomainMap,
                                                                             const GALGAS_varMap & constinArgument_inVarMap,
                                                                             const GALGAS_uint & constinArgument_inTotalBitCount,
                                                                             const GALGAS_computedFormulaMap & constinArgument_inComputedFormulaMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_impliesExpression * object = (const cPtr_impliesExpression *) inObject ;
  macroValidSharedObject (object, cPtr_impliesExpression) ;
  GALGAS_binaryset var_left = callCategoryGetter_computeExpression ((const cPtr_expression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 385)) ;
  GALGAS_binaryset var_right = callCategoryGetter_computeExpression ((const cPtr_expression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 386)) ;
  result_outResult = var_left.getter_implies (var_right COMMA_SOURCE_FILE ("expression.galgas", 387)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_impliesExpression_computeExpression (void) {
  enterCategoryGetter_computeExpression (kTypeDescriptor_GALGAS_impliesExpression.mSlotID,
                                         extensionGetter_impliesExpression_computeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_impliesExpression_computeExpression (defineCategoryGetter_impliesExpression_computeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category getter '@equalExpression computeExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_binaryset extensionGetter_equalExpression_computeExpression (const cPtr_expression * inObject,
                                                                           const GALGAS_domainMap & constinArgument_inDomainMap,
                                                                           const GALGAS_varMap & constinArgument_inVarMap,
                                                                           const GALGAS_uint & constinArgument_inTotalBitCount,
                                                                           const GALGAS_computedFormulaMap & constinArgument_inComputedFormulaMap,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_equalExpression * object = (const cPtr_equalExpression *) inObject ;
  macroValidSharedObject (object, cPtr_equalExpression) ;
  GALGAS_binaryset var_left = callCategoryGetter_computeExpression ((const cPtr_expression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 399)) ;
  GALGAS_binaryset var_right = callCategoryGetter_computeExpression ((const cPtr_expression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 400)) ;
  result_outResult = var_left.operator_xor (var_right COMMA_SOURCE_FILE ("expression.galgas", 401)).operator_tilde (SOURCE_FILE ("expression.galgas", 401)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_equalExpression_computeExpression (void) {
  enterCategoryGetter_computeExpression (kTypeDescriptor_GALGAS_equalExpression.mSlotID,
                                         extensionGetter_equalExpression_computeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_equalExpression_computeExpression (defineCategoryGetter_equalExpression_computeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category getter '@notEqualExpression computeExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_binaryset extensionGetter_notEqualExpression_computeExpression (const cPtr_expression * inObject,
                                                                              const GALGAS_domainMap & constinArgument_inDomainMap,
                                                                              const GALGAS_varMap & constinArgument_inVarMap,
                                                                              const GALGAS_uint & constinArgument_inTotalBitCount,
                                                                              const GALGAS_computedFormulaMap & constinArgument_inComputedFormulaMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_notEqualExpression * object = (const cPtr_notEqualExpression *) inObject ;
  macroValidSharedObject (object, cPtr_notEqualExpression) ;
  GALGAS_binaryset var_left = callCategoryGetter_computeExpression ((const cPtr_expression *) object->mAttribute_mLeftExpression.ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 413)) ;
  GALGAS_binaryset var_right = callCategoryGetter_computeExpression ((const cPtr_expression *) object->mAttribute_mRightExpression.ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 414)) ;
  result_outResult = var_left.operator_xor (var_right COMMA_SOURCE_FILE ("expression.galgas", 415)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_notEqualExpression_computeExpression (void) {
  enterCategoryGetter_computeExpression (kTypeDescriptor_GALGAS_notEqualExpression.mSlotID,
                                         extensionGetter_notEqualExpression_computeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_notEqualExpression_computeExpression (defineCategoryGetter_notEqualExpression_computeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category getter '@complementExpression computeExpression'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_binaryset extensionGetter_complementExpression_computeExpression (const cPtr_expression * inObject,
                                                                                const GALGAS_domainMap & constinArgument_inDomainMap,
                                                                                const GALGAS_varMap & constinArgument_inVarMap,
                                                                                const GALGAS_uint & constinArgument_inTotalBitCount,
                                                                                const GALGAS_computedFormulaMap & constinArgument_inComputedFormulaMap,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_complementExpression * object = (const cPtr_complementExpression *) inObject ;
  macroValidSharedObject (object, cPtr_complementExpression) ;
  result_outResult = callCategoryGetter_computeExpression ((const cPtr_expression *) object->mAttribute_mExpression.ptr (), constinArgument_inDomainMap, constinArgument_inVarMap, constinArgument_inTotalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 427)).operator_tilde (SOURCE_FILE ("expression.galgas", 427)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_complementExpression_computeExpression (void) {
  enterCategoryGetter_computeExpression (kTypeDescriptor_GALGAS_complementExpression.mSlotID,
                                         extensionGetter_complementExpression_computeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_complementExpression_computeExpression (defineCategoryGetter_complementExpression_computeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category getter '@trueExpression computeExpression'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_binaryset extensionGetter_trueExpression_computeExpression (const cPtr_expression * /* inObject */,
                                                                          const GALGAS_domainMap & /* constinArgument_inDomainMap */,
                                                                          const GALGAS_varMap & /* constinArgument_inVarMap */,
                                                                          const GALGAS_uint & /* constinArgument_inTotalBitCount */,
                                                                          const GALGAS_computedFormulaMap & /* constinArgument_inComputedFormulaMap */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  result_outResult = GALGAS_binaryset::constructor_fullBinarySet (SOURCE_FILE ("expression.galgas", 439)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_trueExpression_computeExpression (void) {
  enterCategoryGetter_computeExpression (kTypeDescriptor_GALGAS_trueExpression.mSlotID,
                                         extensionGetter_trueExpression_computeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_trueExpression_computeExpression (defineCategoryGetter_trueExpression_computeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category getter '@falseExpression computeExpression'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_binaryset extensionGetter_falseExpression_computeExpression (const cPtr_expression * /* inObject */,
                                                                           const GALGAS_domainMap & /* constinArgument_inDomainMap */,
                                                                           const GALGAS_varMap & /* constinArgument_inVarMap */,
                                                                           const GALGAS_uint & /* constinArgument_inTotalBitCount */,
                                                                           const GALGAS_computedFormulaMap & /* constinArgument_inComputedFormulaMap */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  result_outResult = GALGAS_binaryset::constructor_emptyBinarySet (SOURCE_FILE ("expression.galgas", 451)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_falseExpression_computeExpression (void) {
  enterCategoryGetter_computeExpression (kTypeDescriptor_GALGAS_falseExpression.mSlotID,
                                         extensionGetter_falseExpression_computeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_falseExpression_computeExpression (defineCategoryGetter_falseExpression_computeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category getter '@formulaInExpression computeExpression'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_binaryset extensionGetter_formulaInExpression_computeExpression (const cPtr_expression * inObject,
                                                                               const GALGAS_domainMap & /* constinArgument_inDomainMap */,
                                                                               const GALGAS_varMap & constinArgument_inVarMap,
                                                                               const GALGAS_uint & /* constinArgument_inTotalBitCount */,
                                                                               const GALGAS_computedFormulaMap & constinArgument_inComputedFormulaMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_formulaInExpression * object = (const cPtr_formulaInExpression *) inObject ;
  macroValidSharedObject (object, cPtr_formulaInExpression) ;
  GALGAS_varList var_varList ;
  GALGAS_uint var_totalBitCount ;
  GALGAS_binaryset var_formulaValue ;
  constinArgument_inComputedFormulaMap.method_searchKey (object->mAttribute_mFormulaName, var_varList, var_totalBitCount, var_formulaValue, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 464)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mParameterList.getter_length (SOURCE_FILE ("expression.galgas", 466)).objectCompare (var_varList.getter_length (SOURCE_FILE ("expression.galgas", 466)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_varList.getter_length (SOURCE_FILE ("expression.galgas", 468)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, object->mAttribute_mParameterList.getter_length (SOURCE_FILE ("expression.galgas", 470)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_4) {
      temp_3 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_location location_5 (object->mAttribute_mFormulaName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_5, GALGAS_string ("the $").add_operation (object->mAttribute_mFormulaName.getter_string (SOURCE_FILE ("expression.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 467)).add_operation (GALGAS_string (" names "), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 467)).add_operation (var_varList.getter_length (SOURCE_FILE ("expression.galgas", 468)).getter_string (SOURCE_FILE ("expression.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 467)).add_operation (GALGAS_string (" variable"), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 468)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 468)).add_operation (GALGAS_string (", but this call names "), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 468)).add_operation (object->mAttribute_mParameterList.getter_length (SOURCE_FILE ("expression.galgas", 470)).getter_string (SOURCE_FILE ("expression.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 469)).add_operation (GALGAS_string (" variable"), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 470)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 470))  COMMA_SOURCE_FILE ("expression.galgas", 467)) ;
    result_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    GALGAS_uintlist var_transformationList = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("expression.galgas", 473)) ;
    cEnumerator_varList enumerator_16380 (var_varList, kEnumeration_down) ;
    cEnumerator_formulaParameterListInExpression enumerator_16431 (object->mAttribute_mParameterList, kEnumeration_down) ;
    while (enumerator_16380.hasCurrentObject () && enumerator_16431.hasCurrentObject ()) {
      GALGAS_uint var_parameterIndex ;
      GALGAS_uint var_parameterBitCount ;
      GALGAS_recordDomainMap var_subdomainMap ;
      constinArgument_inVarMap.method_searchKey (enumerator_16431.current_mParameterName (HERE), var_parameterIndex, var_parameterBitCount, var_subdomainMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 475)) ;
      cEnumerator_lstringlist enumerator_16593 (enumerator_16431.current_mFieldNames (HERE), kEnumeration_up) ;
      while (enumerator_16593.hasCurrentObject ()) {
        GALGAS_uint var_fieldRelativeBitIndex ;
        GALGAS_recordDomainMap var_fieldSubdomainMap ;
        var_subdomainMap.method_searchKey (enumerator_16593.current_mValue (HERE), var_fieldRelativeBitIndex, var_parameterBitCount, var_fieldSubdomainMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 477)) ;
        var_parameterIndex = var_parameterIndex.add_operation (var_fieldRelativeBitIndex, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 478)) ;
        var_subdomainMap = var_fieldSubdomainMap ;
        enumerator_16593.gotoNextObject () ;
      }
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_16380.current_mBitCount (HERE).objectCompare (var_parameterBitCount)).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string temp_7 ;
        const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_parameterBitCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_8) {
          temp_7 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_8) {
          temp_7 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string temp_9 ;
        const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, enumerator_16380.current_mBitCount (HERE).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_10) {
          temp_9 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_10) {
          temp_9 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_11 (enumerator_16431.current_mParameterName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_11, GALGAS_string ("this parameter is declared with a size of ").add_operation (var_parameterBitCount.getter_string (SOURCE_FILE ("expression.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 482)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 483)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 483)).add_operation (GALGAS_string (", but corresponding formal argument '"), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 483)).add_operation (enumerator_16380.current_mVarName (HERE), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 484)).add_operation (GALGAS_string ("' is declared with a size of "), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 484)).add_operation (enumerator_16380.current_mBitCount (HERE).getter_string (SOURCE_FILE ("expression.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 484)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 485)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 485))  COMMA_SOURCE_FILE ("expression.galgas", 482)) ;
      }
      cEnumerator_range enumerator_17265 (GALGAS_range (GALGAS_uint ((uint32_t) 0U), var_parameterBitCount.substract_operation (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 487))), kEnumeration_up) ;
      while (enumerator_17265.hasCurrentObject ()) {
        var_transformationList.addAssign_operation (var_parameterIndex.add_operation (enumerator_17265.current (HERE), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 488))  COMMA_SOURCE_FILE ("expression.galgas", 488)) ;
        enumerator_17265.gotoNextObject () ;
      }
      enumerator_16380.gotoNextObject () ;
      enumerator_16431.gotoNextObject () ;
    }
    result_outResult = var_formulaValue.getter_transformedBy (var_transformationList COMMA_SOURCE_FILE ("expression.galgas", 491)) ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_formulaInExpression_computeExpression (void) {
  enterCategoryGetter_computeExpression (kTypeDescriptor_GALGAS_formulaInExpression.mSlotID,
                                         extensionGetter_formulaInExpression_computeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_formulaInExpression_computeExpression (defineCategoryGetter_formulaInExpression_computeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category getter '@existInExpression computeExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_binaryset extensionGetter_existInExpression_computeExpression (const cPtr_expression * inObject,
                                                                             const GALGAS_domainMap & constinArgument_inDomainMap,
                                                                             const GALGAS_varMap & constinArgument_inVarMap,
                                                                             const GALGAS_uint & constinArgument_inTotalBitCount,
                                                                             const GALGAS_computedFormulaMap & constinArgument_inComputedFormulaMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_existInExpression * object = (const cPtr_existInExpression *) inObject ;
  macroValidSharedObject (object, cPtr_existInExpression) ;
  GALGAS_varMap var_varMap = constinArgument_inVarMap ;
  GALGAS_uint var_totalBitCount = constinArgument_inTotalBitCount ;
  GALGAS_varList joker_17863 = GALGAS_varList::constructor_emptyList (SOURCE_FILE ("expression.galgas", 506)) ;
  categoryMethod_analyze (object->mAttribute_mArgumentList, constinArgument_inDomainMap, var_varMap, joker_17863, var_totalBitCount, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 506)) ;
  GALGAS_binaryset var_r = callCategoryGetter_computeExpression ((const cPtr_expression *) object->mAttribute_mExpression.ptr (), constinArgument_inDomainMap, var_varMap, var_totalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 507)) ;
  result_outResult = var_r.getter_existOnBitIndexAndBeyond (constinArgument_inTotalBitCount COMMA_SOURCE_FILE ("expression.galgas", 508)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_existInExpression_computeExpression (void) {
  enterCategoryGetter_computeExpression (kTypeDescriptor_GALGAS_existInExpression.mSlotID,
                                         extensionGetter_existInExpression_computeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_existInExpression_computeExpression (defineCategoryGetter_existInExpression_computeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category getter '@forAllInExpression computeExpression'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_binaryset extensionGetter_forAllInExpression_computeExpression (const cPtr_expression * inObject,
                                                                              const GALGAS_domainMap & constinArgument_inDomainMap,
                                                                              const GALGAS_varMap & constinArgument_inVarMap,
                                                                              const GALGAS_uint & constinArgument_inTotalBitCount,
                                                                              const GALGAS_computedFormulaMap & constinArgument_inComputedFormulaMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_forAllInExpression * object = (const cPtr_forAllInExpression *) inObject ;
  macroValidSharedObject (object, cPtr_forAllInExpression) ;
  GALGAS_varMap var_varMap = constinArgument_inVarMap ;
  GALGAS_uint var_totalBitCount = constinArgument_inTotalBitCount ;
  GALGAS_varList joker_18498 = GALGAS_varList::constructor_emptyList (SOURCE_FILE ("expression.galgas", 522)) ;
  categoryMethod_analyze (object->mAttribute_mArgumentList, constinArgument_inDomainMap, var_varMap, joker_18498, var_totalBitCount, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 522)) ;
  GALGAS_binaryset var_r = callCategoryGetter_computeExpression ((const cPtr_expression *) object->mAttribute_mExpression.ptr (), constinArgument_inDomainMap, var_varMap, var_totalBitCount, constinArgument_inComputedFormulaMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 523)) ;
  result_outResult = var_r.getter_forAllOnBitIndexAndBeyond (constinArgument_inTotalBitCount COMMA_SOURCE_FILE ("expression.galgas", 524)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_forAllInExpression_computeExpression (void) {
  enterCategoryGetter_computeExpression (kTypeDescriptor_GALGAS_forAllInExpression.mSlotID,
                                         extensionGetter_forAllInExpression_computeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_forAllInExpression_computeExpression (defineCategoryGetter_forAllInExpression_computeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category getter '@comparisonWithConstantInExpression computeExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_binaryset extensionGetter_comparisonWithConstantInExpression_computeExpression (const cPtr_expression * inObject,
                                                                                              const GALGAS_domainMap & /* constinArgument_inDomainMap */,
                                                                                              const GALGAS_varMap & constinArgument_inVarMap,
                                                                                              const GALGAS_uint & /* constinArgument_inTotalBitCount */,
                                                                                              const GALGAS_computedFormulaMap & /* constinArgument_inComputedFormulaMap */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_comparisonWithConstantInExpression * object = (const cPtr_comparisonWithConstantInExpression *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonWithConstantInExpression) ;
  GALGAS_uint var_idx ;
  GALGAS_uint var_bitCount ;
  GALGAS_recordDomainMap var_subDomainMap ;
  constinArgument_inVarMap.method_searchKey (object->mAttribute_mVarName, var_idx, var_bitCount, var_subDomainMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 536)) ;
  cEnumerator_lstringlist enumerator_19176 (object->mAttribute_mFieldNames, kEnumeration_up) ;
  while (enumerator_19176.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex ;
    GALGAS_recordDomainMap var_fieldSubdomainMap ;
    var_subDomainMap.method_searchKey (enumerator_19176.current_mValue (HERE), var_fieldRelativeBitIndex, var_bitCount, var_fieldSubdomainMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 538)) ;
    var_idx = var_idx.add_operation (var_fieldRelativeBitIndex, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 539)) ;
    var_subDomainMap = var_fieldSubdomainMap ;
    enumerator_19176.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_subDomainMap.getter_count (SOURCE_FILE ("expression.galgas", 542)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("variable is a record; use dot notation")  COMMA_SOURCE_FILE ("expression.galgas", 543)) ;
    result_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, object->mAttribute_mConstant.mAttribute_uint.getter_significantBitCount (SOURCE_FILE ("expression.galgas", 544)).objectCompare (var_bitCount)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mConstant.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("Constant too large (should be < 2**").add_operation (var_bitCount.getter_string (SOURCE_FILE ("expression.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 545))  COMMA_SOURCE_FILE ("expression.galgas", 545)) ;
      result_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      switch (object->mAttribute_mComparison.enumValue ()) {
      case GALGAS_comparison::kNotBuilt:
        break ;
      case GALGAS_comparison::kEnum_equal:
        {
          result_outResult = GALGAS_binaryset::constructor_binarySetWithEqualToConstant (var_idx, var_bitCount, object->mAttribute_mConstant.mAttribute_uint.getter_uint_36__34_ (SOURCE_FILE ("expression.galgas", 549)), inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 549)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_notEqual:
        {
          result_outResult = GALGAS_binaryset::constructor_binarySetWithNotEqualToConstant (var_idx, var_bitCount, object->mAttribute_mConstant.mAttribute_uint.getter_uint_36__34_ (SOURCE_FILE ("expression.galgas", 551)), inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 551)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_lowerOrEqual:
        {
          result_outResult = GALGAS_binaryset::constructor_binarySetWithLowerOrEqualToConstant (var_idx, var_bitCount, object->mAttribute_mConstant.mAttribute_uint.getter_uint_36__34_ (SOURCE_FILE ("expression.galgas", 553)), inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 553)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_lowerThan:
        {
          result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictLowerThanConstant (var_idx, var_bitCount, object->mAttribute_mConstant.mAttribute_uint.getter_uint_36__34_ (SOURCE_FILE ("expression.galgas", 555)), inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 555)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_greaterOrEqual:
        {
          result_outResult = GALGAS_binaryset::constructor_binarySetWithGreaterOrEqualToConstant (var_idx, var_bitCount, object->mAttribute_mConstant.mAttribute_uint.getter_uint_36__34_ (SOURCE_FILE ("expression.galgas", 557)), inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 557)) ;
        }
        break ;
      case GALGAS_comparison::kEnum_greaterThan:
        {
          result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictGreaterThanConstant (var_idx, var_bitCount, object->mAttribute_mConstant.mAttribute_uint.getter_uint_36__34_ (SOURCE_FILE ("expression.galgas", 559)), inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 559)) ;
        }
        break ;
      }
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_comparisonWithConstantInExpression_computeExpression (void) {
  enterCategoryGetter_computeExpression (kTypeDescriptor_GALGAS_comparisonWithConstantInExpression.mSlotID,
                                         extensionGetter_comparisonWithConstantInExpression_computeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_comparisonWithConstantInExpression_computeExpression (defineCategoryGetter_comparisonWithConstantInExpression_computeExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category getter '@variableComparisonInExpression computeExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_binaryset extensionGetter_variableComparisonInExpression_computeExpression (const cPtr_expression * inObject,
                                                                                          const GALGAS_domainMap & /* constinArgument_inDomainMap */,
                                                                                          const GALGAS_varMap & constinArgument_inVarMap,
                                                                                          const GALGAS_uint & /* constinArgument_inTotalBitCount */,
                                                                                          const GALGAS_computedFormulaMap & /* constinArgument_inComputedFormulaMap */,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_binaryset result_outResult ; // Returned variable
  const cPtr_variableComparisonInExpression * object = (const cPtr_variableComparisonInExpression *) inObject ;
  macroValidSharedObject (object, cPtr_variableComparisonInExpression) ;
  GALGAS_uint var_leftIdx ;
  GALGAS_uint var_leftBitCount ;
  GALGAS_recordDomainMap var_leftSubDomainMap ;
  constinArgument_inVarMap.method_searchKey (object->mAttribute_mLeftVarName, var_leftIdx, var_leftBitCount, var_leftSubDomainMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 573)) ;
  cEnumerator_lstringlist enumerator_20944 (object->mAttribute_mLeftFieldNames, kEnumeration_up) ;
  while (enumerator_20944.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex ;
    GALGAS_recordDomainMap var_fieldSubdomainMap ;
    var_leftSubDomainMap.method_searchKey (enumerator_20944.current_mValue (HERE), var_fieldRelativeBitIndex, var_leftBitCount, var_fieldSubdomainMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 575)) ;
    var_leftIdx = var_leftIdx.add_operation (var_fieldRelativeBitIndex, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 576)) ;
    var_leftSubDomainMap = var_fieldSubdomainMap ;
    enumerator_20944.gotoNextObject () ;
  }
  GALGAS_uint var_rightIdx ;
  GALGAS_uint var_rightBitCount ;
  GALGAS_recordDomainMap var_rightSubDomainMap ;
  constinArgument_inVarMap.method_searchKey (object->mAttribute_mRightVarName, var_rightIdx, var_rightBitCount, var_rightSubDomainMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 579)) ;
  cEnumerator_lstringlist enumerator_21297 (object->mAttribute_mRightFieldNames, kEnumeration_up) ;
  while (enumerator_21297.hasCurrentObject ()) {
    GALGAS_uint var_fieldRelativeBitIndex ;
    GALGAS_recordDomainMap var_fieldSubdomainMap ;
    var_rightSubDomainMap.method_searchKey (enumerator_21297.current_mValue (HERE), var_fieldRelativeBitIndex, var_rightBitCount, var_fieldSubdomainMap, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 581)) ;
    var_rightIdx = var_rightIdx.add_operation (var_fieldRelativeBitIndex, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 582)) ;
    var_rightSubDomainMap = var_fieldSubdomainMap ;
    enumerator_21297.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_leftSubDomainMap.getter_count (SOURCE_FILE ("expression.galgas", 585)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mLeftVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
    inCompiler->emitSemanticError (location_1, GALGAS_string ("variable is a record; use dot notation")  COMMA_SOURCE_FILE ("expression.galgas", 586)) ;
    result_outResult.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_rightSubDomainMap.getter_count (SOURCE_FILE ("expression.galgas", 587)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mRightVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("variable is a record; use dot notation")  COMMA_SOURCE_FILE ("expression.galgas", 588)) ;
      result_outResult.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_leftBitCount.objectCompare (var_rightBitCount)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, var_leftBitCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string temp_7 ;
        const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_rightBitCount.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_8) {
          temp_7 = GALGAS_string ("s") ;
        }else if (kBoolFalse == test_8) {
          temp_7 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_9 (object->mAttribute_mRightVarName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_9, GALGAS_string ("'").add_operation (object->mAttribute_mLeftVarName.getter_string (SOURCE_FILE ("expression.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 590)).add_operation (GALGAS_string ("' variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 590)).add_operation (var_leftBitCount.getter_string (SOURCE_FILE ("expression.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 590)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 591)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 591)).add_operation (GALGAS_string (", but this variable uses "), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 591)).add_operation (var_rightBitCount.getter_string (SOURCE_FILE ("expression.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 592)).add_operation (GALGAS_string (" bit"), inCompiler COMMA_SOURCE_FILE ("expression.galgas", 593)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("expression.galgas", 593))  COMMA_SOURCE_FILE ("expression.galgas", 590)) ;
        result_outResult.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_4) {
        switch (object->mAttribute_mComparison.enumValue ()) {
        case GALGAS_comparison::kNotBuilt:
          break ;
        case GALGAS_comparison::kEnum_equal:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithEqualComparison (var_leftIdx, var_leftBitCount, var_rightIdx, inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 598)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_notEqual:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithNotEqualComparison (var_leftIdx, var_leftBitCount, var_rightIdx, inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 600)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_lowerOrEqual:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithLowerOrEqualComparison (var_leftIdx, var_leftBitCount, var_rightIdx, inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 602)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_lowerThan:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictLowerComparison (var_leftIdx, var_leftBitCount, var_rightIdx, inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 604)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_greaterOrEqual:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithGreaterOrEqualComparison (var_leftIdx, var_leftBitCount, var_rightIdx, inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 606)) ;
          }
          break ;
        case GALGAS_comparison::kEnum_greaterThan:
          {
            result_outResult = GALGAS_binaryset::constructor_binarySetWithStrictGreaterComparison (var_leftIdx, var_leftBitCount, var_rightIdx, inCompiler  COMMA_SOURCE_FILE ("expression.galgas", 608)) ;
          }
          break ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryGetter_variableComparisonInExpression_computeExpression (void) {
  enterCategoryGetter_computeExpression (kTypeDescriptor_GALGAS_variableComparisonInExpression.mSlotID,
                                         extensionGetter_variableComparisonInExpression_computeExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_variableComparisonInExpression_computeExpression (defineCategoryGetter_variableComparisonInExpression_computeExpression, NULL) ;
