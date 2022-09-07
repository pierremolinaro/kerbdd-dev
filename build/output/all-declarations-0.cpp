#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//----------------------------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//----------------------------------------------------------------------------------------------------------------------

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//----------------------------------------------------------------------------------------------------------------------

cTokenFor_kerbdd_5F_lexique::cTokenFor_kerbdd_5F_lexique (void) :
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value () {
}

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_kerbdd_5F_lexique::C_Lexique_kerbdd_5F_lexique (C_Compiler * inCallerCompiler,
                                                          const C_String & inSourceFileName
                                                          COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_kerbdd_5F_lexique::C_Lexique_kerbdd_5F_lexique (C_Compiler * inCallerCompiler,
                                                          const C_String & inSourceString,
                                                          const C_String & inStringForError
                                                          COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------
//                 I N D E X I N G    D I R E C T O R Y                                          
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_kerbdd_5F_lexique::indexingDirectory (void) const {
  return "" ;
}

//----------------------------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//----------------------------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_kerbdd_5F_lexique_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_kerbdd_5F_lexique_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_kerbdd_5F_lexique_internalError = "internal error" ;

//----------------------------------------------------------------------------------------------------------------------
//          Syntax error messages, for every terminal symbol                                     
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_kerbdd_5F_lexique::getMessageForTerminal (const int16_t inTerminalIndex) const {
  C_String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 42)) {
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
        gSyntaxErrorMessage_kerbdd_5F_lexique__3E__3D_
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'delimitorsList'      
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'keyWordList'      
//----------------------------------------------------------------------------------------------------------------------

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


//----------------------------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//----------------------------------------------------------------------------------------------------------------------

void C_Lexique_kerbdd_5F_lexique::internalParseLexicalToken (cTokenFor_kerbdd_5F_lexique & token) {
  bool loop = true ;
  token.mLexicalAttribute_tokenString.setLengthToZero () ;
  token.mLexicalAttribute_uint_33__32_value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
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
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      ::scanner_routine_convertDecimalStringIntoUInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_kerbdd_5F_lexique_decimalNumberTooLarge, gLexicalMessage_kerbdd_5F_lexique_internalError) ;
      token.mTokenCode = kToken_integer ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
      do {
        if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE (65533))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
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
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      enterDroppedTerminal (kToken_comment) ;
    }else if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE (' '))) {
    }else if (testForInputUTF32Char (TO_UNICODE ('\0'))) { // End of source text ? 
      token.mTokenCode = kToken_ ; // Empty string code
    }else{ // Unknown input character
      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }catch (const C_lexicalErrorException &) {
    token.mTokenCode = -1 ; // No token
    advance () ; // ... go throught unknown character
  }
}

//----------------------------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//----------------------------------------------------------------------------------------------------------------------

bool C_Lexique_kerbdd_5F_lexique::parseLexicalToken (void) {
  cTokenFor_kerbdd_5F_lexique token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (UNICODE_VALUE (mCurrentChar) == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//----------------------------------------------------------------------------------------------------------------------

void C_Lexique_kerbdd_5F_lexique::enterToken (cTokenFor_kerbdd_5F_lexique & ioToken) {
  cTokenFor_kerbdd_5F_lexique * ptr = NULL ;
  macroMyNew (ptr, cTokenFor_kerbdd_5F_lexique ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  // ptr->mIsOptional = ioToken.mIsOptional ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = ioToken.mLexicalAttribute_uint_33__32_value ;
  enterTokenFromPointer (ptr) ;
}

//----------------------------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_kerbdd_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_kerbdd_5F_lexique * ptr = (cTokenFor_kerbdd_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//----------------------------------------------------------------------------------------------------------------------

uint32_t C_Lexique_kerbdd_5F_lexique::attributeValue_uint_33__32_value (void) const {
  cTokenFor_kerbdd_5F_lexique * ptr = (cTokenFor_kerbdd_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//----------------------------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_kerbdd_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_kerbdd_5F_lexique * ptr = (cTokenFor_kerbdd_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_kerbdd_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint C_Lexique_kerbdd_5F_lexique::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_kerbdd_5F_lexique * ptr = (cTokenFor_kerbdd_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_kerbdd_5F_lexique) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordLists_kerbdd_5F_lexique (TC_UniqueArray <C_String> & ioList) {
  ioList.appendObject ("kerbdd_lexique:delimitorsList") ;
  ioList.appendObject ("kerbdd_lexique:keyWordList") ;
}

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_kerbdd_5F_lexique (const C_String & inIdentifier,
                                                        bool & ioFound,
                                                        TC_UniqueArray <C_String> & ioList) {
  if (inIdentifier == "kerbdd_lexique:delimitorsList") {
    ioFound = true ;
    ioList.appendObject ("!") ;
    ioList.appendObject ("&") ;
    ioList.appendObject ("(") ;
    ioList.appendObject (")") ;
    ioList.appendObject (",") ;
    ioList.appendObject (".") ;
    ioList.appendObject (":") ;
    ioList.appendObject (";") ;
    ioList.appendObject ("<") ;
    ioList.appendObject ("=") ;
    ioList.appendObject (">") ;
    ioList.appendObject ("\?") ;
    ioList.appendObject ("[") ;
    ioList.appendObject ("]") ;
    ioList.appendObject ("^") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("|") ;
    ioList.appendObject ("}") ;
    ioList.appendObject ("~") ;
    ioList.appendObject ("!=") ;
    ioList.appendObject ("+=") ;
    ioList.appendObject ("-=") ;
    ioList.appendObject ("->") ;
    ioList.appendObject ("..") ;
    ioList.appendObject (":=") ;
    ioList.appendObject ("<=") ;
    ioList.appendObject (">=") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "kerbdd_lexique:keyWordList") {
    ioFound = true ;
    ioList.appendObject ("bool") ;
    ioList.appendObject ("dump") ;
    ioList.appendObject ("true") ;
    ioList.appendObject ("false") ;
    ioList.appendObject ("domain") ;
    ioList.appendObject ("display") ;
    ioList.appendObject ("include") ;
    ioList.appendObject ("graphviz") ;
    ioList.appendObject ("andCacheMapSize") ;
    ioList.appendObject ("nodeHashMapSize") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static cLexiqueIntrospection lexiqueIntrospection_kerbdd_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_kerbdd_5F_lexique, getKeywordsForIdentifier_kerbdd_5F_lexique) ;

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_bddType_boolArray::cEnumAssociatedValues_bddType_boolArray (const GALGAS_uint inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_bddType_boolArray::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_bddType_boolArray::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_bddType_boolArray * ptr = dynamic_cast<const cEnumAssociatedValues_bddType_boolArray *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_bddType_namedType::cEnumAssociatedValues_bddType_namedType (const GALGAS_lstring inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_bddType_namedType::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_bddType_namedType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_bddType_namedType * ptr = dynamic_cast<const cEnumAssociatedValues_bddType_namedType *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bddType::GALGAS_bddType (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bddType GALGAS_bddType::constructor_bool (UNUSED_LOCATION_ARGS) {
  GALGAS_bddType result ;
  result.mEnum = kEnum_bool ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_bddType::optional_bool () const {
  const bool ok = mEnum == kEnum_bool ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_bddType::optional_boolArray (GALGAS_uint & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_boolArray ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_bddType_boolArray *) unsafePointer () ;
    // const cEnumAssociatedValues_bddType_boolArray * ptr = (const cEnumAssociatedValues_bddType_boolArray *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_bddType::optional_namedType (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_namedType ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_bddType_namedType *) unsafePointer () ;
    // const cEnumAssociatedValues_bddType_namedType * ptr = (const cEnumAssociatedValues_bddType_namedType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_bddType [4] = {
  "(not built)",
  "bool",
  "boolArray",
  "namedType"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_bddType::getter_isBool (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_bool == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_bddType::getter_isBoolArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolArray == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_bddType::getter_isNamedType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_namedType == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bddType::description (C_String & ioString,
                                  const int32_t inIndentation) const {
  ioString << "<enum @bddType: " << gEnumNameArrayFor_bddType [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@bddType type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bddType ("bddType",
                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bddType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bddType ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bddType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bddType (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@domainFieldList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_domainFieldList : public cCollectionElement {
  public: GALGAS_domainFieldList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_domainFieldList (const GALGAS_lstring & in_mVarName,
                                              const GALGAS_bddType & in_mType
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_domainFieldList (const GALGAS_domainFieldList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_domainFieldList::cCollectionElement_domainFieldList (const GALGAS_lstring & in_mVarName,
                                                                        const GALGAS_bddType & in_mType
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mVarName, in_mType) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_domainFieldList::cCollectionElement_domainFieldList (const GALGAS_domainFieldList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mVarName, inElement.mProperty_mType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_domainFieldList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_domainFieldList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_domainFieldList (mObject.mProperty_mVarName, mObject.mProperty_mType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_domainFieldList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVarName" ":" ;
  mObject.mProperty_mVarName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_domainFieldList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_domainFieldList * operand = (cCollectionElement_domainFieldList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_domainFieldList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainFieldList::GALGAS_domainFieldList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainFieldList::GALGAS_domainFieldList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainFieldList GALGAS_domainFieldList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_domainFieldList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainFieldList GALGAS_domainFieldList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_bddType & inOperand1
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_domainFieldList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_domainFieldList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_domainFieldList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainFieldList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_bddType & inOperand1
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_domainFieldList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainFieldList::setter_append (GALGAS_domainFieldList_2D_element inElement,
                                            C_Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_domainFieldList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainFieldList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                   const GALGAS_bddType inOperand1,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_domainFieldList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainFieldList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                   GALGAS_bddType & outOperand1,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
        outOperand0 = p->mObject.mProperty_mVarName ;
        outOperand1 = p->mObject.mProperty_mType ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mVarName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mVarName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mVarName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mVarName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainFieldList GALGAS_domainFieldList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_domainFieldList result = GALGAS_domainFieldList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainFieldList GALGAS_domainFieldList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_domainFieldList result = GALGAS_domainFieldList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainFieldList GALGAS_domainFieldList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_domainFieldList result = GALGAS_domainFieldList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainFieldList::plusAssign_operation (const GALGAS_domainFieldList inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainFieldList::setter_setMVarNameAtIndex (GALGAS_lstring inOperand,
                                                        GALGAS_uint inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mVarName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_domainFieldList::getter_mVarNameAtIndex (const GALGAS_uint & inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    result = p->mObject.mProperty_mVarName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainFieldList::setter_setMTypeAtIndex (GALGAS_bddType inOperand,
                                                     GALGAS_uint inIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bddType GALGAS_domainFieldList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_domainFieldList * p = (cCollectionElement_domainFieldList *) attributes.ptr () ;
  GALGAS_bddType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_domainFieldList::cEnumerator_domainFieldList (const GALGAS_domainFieldList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainFieldList_2D_element cEnumerator_domainFieldList::current (LOCATION_ARGS) const {
  const cCollectionElement_domainFieldList * p = (const cCollectionElement_domainFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_domainFieldList::current_mVarName (LOCATION_ARGS) const {
  const cCollectionElement_domainFieldList * p = (const cCollectionElement_domainFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
  return p->mObject.mProperty_mVarName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bddType cEnumerator_domainFieldList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_domainFieldList * p = (const cCollectionElement_domainFieldList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainFieldList) ;
  return p->mObject.mProperty_mType ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@domainFieldList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_domainFieldList ("domainFieldList",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_domainFieldList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainFieldList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_domainFieldList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainFieldList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_domainDeclarationType_type::cEnumAssociatedValues_domainDeclarationType_type (const GALGAS_bddType inAssociatedValue0
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_domainDeclarationType_type::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_domainDeclarationType_type::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_domainDeclarationType_type * ptr = dynamic_cast<const cEnumAssociatedValues_domainDeclarationType_type *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_domainDeclarationType_record::cEnumAssociatedValues_domainDeclarationType_record (const GALGAS_domainFieldList inAssociatedValue0
                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_domainDeclarationType_record::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_domainDeclarationType_record::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_domainDeclarationType_record * ptr = dynamic_cast<const cEnumAssociatedValues_domainDeclarationType_record *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationType::GALGAS_domainDeclarationType (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_domainDeclarationType::optional_type (GALGAS_bddType & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_type ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_domainDeclarationType_type *) unsafePointer () ;
    // const cEnumAssociatedValues_domainDeclarationType_type * ptr = (const cEnumAssociatedValues_domainDeclarationType_type *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_domainDeclarationType::optional_record (GALGAS_domainFieldList & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_record ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_domainDeclarationType_record *) unsafePointer () ;
    // const cEnumAssociatedValues_domainDeclarationType_record * ptr = (const cEnumAssociatedValues_domainDeclarationType_record *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_domainDeclarationType [3] = {
  "(not built)",
  "type",
  "record"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_domainDeclarationType::getter_isType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_type == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_domainDeclarationType::getter_isRecord (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_record == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationType::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<enum @domainDeclarationType: " << gEnumNameArrayFor_domainDeclarationType [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@domainDeclarationType type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_domainDeclarationType ("domainDeclarationType",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_domainDeclarationType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainDeclarationType ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_domainDeclarationType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainDeclarationType (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@domainDeclarationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_domainDeclarationList : public cCollectionElement {
  public: GALGAS_domainDeclarationList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_domainDeclarationList (const GALGAS_lstring & in_mDomainName,
                                                    const GALGAS_domainDeclarationType & in_mType
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_domainDeclarationList (const GALGAS_domainDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_domainDeclarationList::cCollectionElement_domainDeclarationList (const GALGAS_lstring & in_mDomainName,
                                                                                    const GALGAS_domainDeclarationType & in_mType
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDomainName, in_mType) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_domainDeclarationList::cCollectionElement_domainDeclarationList (const GALGAS_domainDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDomainName, inElement.mProperty_mType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_domainDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_domainDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_domainDeclarationList (mObject.mProperty_mDomainName, mObject.mProperty_mType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_domainDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDomainName" ":" ;
  mObject.mProperty_mDomainName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_domainDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_domainDeclarationList * operand = (cCollectionElement_domainDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_domainDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList::GALGAS_domainDeclarationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList::GALGAS_domainDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList GALGAS_domainDeclarationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_domainDeclarationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList GALGAS_domainDeclarationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_domainDeclarationType & inOperand1
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_domainDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_domainDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_domainDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_domainDeclarationType & inOperand1
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_domainDeclarationList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationList::setter_append (GALGAS_domainDeclarationList_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_domainDeclarationList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_domainDeclarationType inOperand1,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_domainDeclarationList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_domainDeclarationType & outOperand1,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
        outOperand0 = p->mObject.mProperty_mDomainName ;
        outOperand1 = p->mObject.mProperty_mType ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mDomainName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mDomainName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mDomainName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mDomainName ;
    outOperand1 = p->mObject.mProperty_mType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList GALGAS_domainDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_domainDeclarationList result = GALGAS_domainDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList GALGAS_domainDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_domainDeclarationList result = GALGAS_domainDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList GALGAS_domainDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_domainDeclarationList result = GALGAS_domainDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationList::plusAssign_operation (const GALGAS_domainDeclarationList inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationList::setter_setMDomainNameAtIndex (GALGAS_lstring inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDomainName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_domainDeclarationList::getter_mDomainNameAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    result = p->mObject.mProperty_mDomainName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationList::setter_setMTypeAtIndex (GALGAS_domainDeclarationType inOperand,
                                                           GALGAS_uint inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationType GALGAS_domainDeclarationList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_domainDeclarationList * p = (cCollectionElement_domainDeclarationList *) attributes.ptr () ;
  GALGAS_domainDeclarationType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_domainDeclarationList::cEnumerator_domainDeclarationList (const GALGAS_domainDeclarationList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList_2D_element cEnumerator_domainDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_domainDeclarationList * p = (const cCollectionElement_domainDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_domainDeclarationList::current_mDomainName (LOCATION_ARGS) const {
  const cCollectionElement_domainDeclarationList * p = (const cCollectionElement_domainDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
  return p->mObject.mProperty_mDomainName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationType cEnumerator_domainDeclarationList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_domainDeclarationList * p = (const cCollectionElement_domainDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_domainDeclarationList) ;
  return p->mObject.mProperty_mType ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@domainDeclarationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_domainDeclarationList ("domainDeclarationList",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_domainDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_domainDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainDeclarationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_recordDomainMap::cMapElement_recordDomainMap (const GALGAS_lstring & inKey,
                                                          const GALGAS_uint & in_mIndex,
                                                          const GALGAS_uint & in_mBitCount,
                                                          const GALGAS_recordDomainMap & in_mSubDomain
                                                          COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex),
mProperty_mBitCount (in_mBitCount),
mProperty_mSubDomain (in_mSubDomain) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_recordDomainMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mBitCount.isValid () && mProperty_mSubDomain.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_recordDomainMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_recordDomainMap (mProperty_lkey, mProperty_mIndex, mProperty_mBitCount, mProperty_mSubDomain COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_recordDomainMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mProperty_mIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitCount" ":" ;
  mProperty_mBitCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSubDomain" ":" ;
  mProperty_mSubDomain.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_recordDomainMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_recordDomainMap * operand = (cMapElement_recordDomainMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitCount.objectCompare (operand->mProperty_mBitCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSubDomain.objectCompare (operand->mProperty_mSubDomain) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap::GALGAS_recordDomainMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap::GALGAS_recordDomainMap (const GALGAS_recordDomainMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap & GALGAS_recordDomainMap::operator = (const GALGAS_recordDomainMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap GALGAS_recordDomainMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_recordDomainMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap GALGAS_recordDomainMap::constructor_mapWithMapToOverride (const GALGAS_recordDomainMap & inMapToOverride
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_recordDomainMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap GALGAS_recordDomainMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GALGAS_recordDomainMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_recordDomainMap_searchKey = "there is no '%K' field" ;

//----------------------------------------------------------------------------------------------------------------------

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
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mBitCount ;
    outArgument2 = p->mProperty_mSubDomain ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_recordDomainMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_recordDomainMap::getter_mBitCountForKey (const GALGAS_string & inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    result = p->mProperty_mBitCount ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap GALGAS_recordDomainMap::getter_mSubDomainForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) attributes ;
  GALGAS_recordDomainMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    result = p->mProperty_mSubDomain ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_recordDomainMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                                     GALGAS_string inKey,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_recordDomainMap * p = (cMapElement_recordDomainMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_recordDomainMap::setter_setMBitCountForKey (GALGAS_uint inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_recordDomainMap * p = (cMapElement_recordDomainMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    p->mProperty_mBitCount = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_recordDomainMap::setter_setMSubDomainForKey (GALGAS_recordDomainMap inAttributeValue,
                                                         GALGAS_string inKey,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_recordDomainMap * p = (cMapElement_recordDomainMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    p->mProperty_mSubDomain = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_recordDomainMap * GALGAS_recordDomainMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & inKey
                                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_recordDomainMap * result = (cMapElement_recordDomainMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_recordDomainMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_recordDomainMap::cEnumerator_recordDomainMap (const GALGAS_recordDomainMap & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap_2D_element cEnumerator_recordDomainMap::current (LOCATION_ARGS) const {
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_recordDomainMap) ;
  return GALGAS_recordDomainMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mBitCount, p->mProperty_mSubDomain) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_recordDomainMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_recordDomainMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_recordDomainMap) ;
  return p->mProperty_mIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_recordDomainMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_recordDomainMap) ;
  return p->mProperty_mBitCount ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap cEnumerator_recordDomainMap::current_mSubDomain (LOCATION_ARGS) const {
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_recordDomainMap) ;
  return p->mProperty_mSubDomain ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_recordDomainMap::optional_searchKey (const GALGAS_string & inKey,
                                                 GALGAS_uint & outArgument0,
                                                 GALGAS_uint & outArgument1,
                                                 GALGAS_recordDomainMap & outArgument2) const {
  const cMapElement_recordDomainMap * p = (const cMapElement_recordDomainMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_recordDomainMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mBitCount ;
    outArgument2 = p->mProperty_mSubDomain ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@recordDomainMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_recordDomainMap ("recordDomainMap",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_recordDomainMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_recordDomainMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_recordDomainMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_recordDomainMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_domainMap::cMapElement_domainMap (const GALGAS_lstring & inKey,
                                              const GALGAS_uint & in_mBitCount,
                                              const GALGAS_recordDomainMap & in_mRecordMap
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mBitCount (in_mBitCount),
mProperty_mRecordMap (in_mRecordMap) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_domainMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBitCount.isValid () && mProperty_mRecordMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_domainMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_domainMap (mProperty_lkey, mProperty_mBitCount, mProperty_mRecordMap COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_domainMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitCount" ":" ;
  mProperty_mBitCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRecordMap" ":" ;
  mProperty_mRecordMap.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_domainMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_domainMap * operand = (cMapElement_domainMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mBitCount.objectCompare (operand->mProperty_mBitCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRecordMap.objectCompare (operand->mProperty_mRecordMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainMap::GALGAS_domainMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainMap::GALGAS_domainMap (const GALGAS_domainMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainMap & GALGAS_domainMap::operator = (const GALGAS_domainMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainMap GALGAS_domainMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_domainMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainMap GALGAS_domainMap::constructor_mapWithMapToOverride (const GALGAS_domainMap & inMapToOverride
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_domainMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainMap GALGAS_domainMap::getter_overriddenMap (C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_domainMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_domainMap_searchKey = "there is no '%K' domain" ;

//----------------------------------------------------------------------------------------------------------------------

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
    outArgument0 = p->mProperty_mBitCount ;
    outArgument1 = p->mProperty_mRecordMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_domainMap::getter_mBitCountForKey (const GALGAS_string & inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_domainMap) ;
    result = p->mProperty_mBitCount ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap GALGAS_domainMap::getter_mRecordMapForKey (const GALGAS_string & inKey,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) attributes ;
  GALGAS_recordDomainMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_domainMap) ;
    result = p->mProperty_mRecordMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainMap::setter_setMBitCountForKey (GALGAS_uint inAttributeValue,
                                                  GALGAS_string inKey,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_domainMap * p = (cMapElement_domainMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_domainMap) ;
    p->mProperty_mBitCount = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainMap::setter_setMRecordMapForKey (GALGAS_recordDomainMap inAttributeValue,
                                                   GALGAS_string inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_domainMap * p = (cMapElement_domainMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_domainMap) ;
    p->mProperty_mRecordMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_domainMap * GALGAS_domainMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_domainMap * result = (cMapElement_domainMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_domainMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_domainMap::cEnumerator_domainMap (const GALGAS_domainMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainMap_2D_element cEnumerator_domainMap::current (LOCATION_ARGS) const {
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_domainMap) ;
  return GALGAS_domainMap_2D_element (p->mProperty_lkey, p->mProperty_mBitCount, p->mProperty_mRecordMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_domainMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_domainMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_domainMap) ;
  return p->mProperty_mBitCount ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap cEnumerator_domainMap::current_mRecordMap (LOCATION_ARGS) const {
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_domainMap) ;
  return p->mProperty_mRecordMap ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_domainMap::optional_searchKey (const GALGAS_string & inKey,
                                           GALGAS_uint & outArgument0,
                                           GALGAS_recordDomainMap & outArgument1) const {
  const cMapElement_domainMap * p = (const cMapElement_domainMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_domainMap) ;
    outArgument0 = p->mProperty_mBitCount ;
    outArgument1 = p->mProperty_mRecordMap ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@domainMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_domainMap ("domainMap",
                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_domainMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_domainMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@domainDeclarationList analyze'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_analyze (const GALGAS_domainDeclarationList inObject,
                              GALGAS_domainMap & outArgument_outDomainMap,
                              C_Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDomainMap.drop () ; // Release 'out' argument
  outArgument_outDomainMap = GALGAS_domainMap::constructor_emptyMap (SOURCE_FILE ("domain.ggs", 122)) ;
  const GALGAS_domainDeclarationList temp_0 = inObject ;
  cEnumerator_domainDeclarationList enumerator_4285 (temp_0, kENUMERATION_UP) ;
  bool bool_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("domain.ggs", 123)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_4285.hasCurrentObject () && bool_1) {
    while (enumerator_4285.hasCurrentObject () && bool_1) {
      switch (enumerator_4285.current_mType (HERE).enumValue ()) {
      case GALGAS_domainDeclarationType::kNotBuilt:
        break ;
      case GALGAS_domainDeclarationType::kEnum_type:
        {
          const cEnumAssociatedValues_domainDeclarationType_type * extractPtr_4735 = (const cEnumAssociatedValues_domainDeclarationType_type *) (enumerator_4285.current_mType (HERE).unsafePointer ()) ;
          const GALGAS_bddType extractedValue_4380_type = extractPtr_4735->mAssociatedValue0 ;
          switch (extractedValue_4380_type.enumValue ()) {
          case GALGAS_bddType::kNotBuilt:
            break ;
          case GALGAS_bddType::kEnum_bool:
            {
              {
              outArgument_outDomainMap.setter_insertKey (enumerator_4285.current_mDomainName (HERE), GALGAS_uint (uint32_t (1U)), GALGAS_recordDomainMap::constructor_emptyMap (SOURCE_FILE ("domain.ggs", 128)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 128)) ;
              }
            }
            break ;
          case GALGAS_bddType::kEnum_boolArray:
            {
              const cEnumAssociatedValues_bddType_boolArray * extractPtr_4554 = (const cEnumAssociatedValues_bddType_boolArray *) (extractedValue_4380_type.unsafePointer ()) ;
              const GALGAS_uint extractedValue_4500_size = extractPtr_4554->mAssociatedValue0 ;
              {
              outArgument_outDomainMap.setter_insertKey (enumerator_4285.current_mDomainName (HERE), extractedValue_4500_size, GALGAS_recordDomainMap::constructor_emptyMap (SOURCE_FILE ("domain.ggs", 130)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 130)) ;
              }
            }
            break ;
          case GALGAS_bddType::kEnum_namedType:
            {
              const cEnumAssociatedValues_bddType_namedType * extractPtr_4725 = (const cEnumAssociatedValues_bddType_namedType *) (extractedValue_4380_type.unsafePointer ()) ;
              const GALGAS_lstring extractedValue_4594_typeName = extractPtr_4725->mAssociatedValue0 ;
              GALGAS_uint var_size_4649 ;
              GALGAS_recordDomainMap var_subdomain_4664 ;
              outArgument_outDomainMap.method_searchKey (extractedValue_4594_typeName, var_size_4649, var_subdomain_4664, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 132)) ;
              {
              outArgument_outDomainMap.setter_insertKey (enumerator_4285.current_mDomainName (HERE), var_size_4649, var_subdomain_4664, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 133)) ;
              }
            }
            break ;
          }
        }
        break ;
      case GALGAS_domainDeclarationType::kEnum_record:
        {
          const cEnumAssociatedValues_domainDeclarationType_record * extractPtr_5494 = (const cEnumAssociatedValues_domainDeclarationType_record *) (enumerator_4285.current_mType (HERE).unsafePointer ()) ;
          const GALGAS_domainFieldList extractedValue_4779_fieldList = extractPtr_5494->mAssociatedValue0 ;
          GALGAS_bigint var_bitIndex_4801 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("domain.ggs", 136)) ;
          GALGAS_recordDomainMap var_recordMap_4842 = GALGAS_recordDomainMap::constructor_emptyMap (SOURCE_FILE ("domain.ggs", 137)) ;
          cEnumerator_domainFieldList enumerator_4880 (extractedValue_4779_fieldList, kENUMERATION_DOWN) ;
          bool bool_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("domain.ggs", 138)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
          if (enumerator_4880.hasCurrentObject () && bool_2) {
            while (enumerator_4880.hasCurrentObject () && bool_2) {
              switch (enumerator_4880.current_mType (HERE).enumValue ()) {
              case GALGAS_bddType::kNotBuilt:
                break ;
              case GALGAS_bddType::kEnum_bool:
                {
                  {
                  var_recordMap_4842.setter_insertKey (enumerator_4880.current_mVarName (HERE), var_bitIndex_4801.getter_uint (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 141)), GALGAS_uint (uint32_t (1U)), GALGAS_recordDomainMap::constructor_emptyMap (SOURCE_FILE ("domain.ggs", 141)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 141)) ;
                  }
                  var_bitIndex_4801.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("domain.ggs", 142)), inCompiler  COMMA_SOURCE_FILE ("domain.ggs", 142)) ;
                }
                break ;
              case GALGAS_bddType::kEnum_boolArray:
                {
                  const cEnumAssociatedValues_bddType_boolArray * extractPtr_5191 = (const cEnumAssociatedValues_bddType_boolArray *) (enumerator_4880.current_mType (HERE).unsafePointer ()) ;
                  const GALGAS_uint extractedValue_5091_size = extractPtr_5191->mAssociatedValue0 ;
                  {
                  var_recordMap_4842.setter_insertKey (enumerator_4880.current_mVarName (HERE), var_bitIndex_4801.getter_uint (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 144)), extractedValue_5091_size, GALGAS_recordDomainMap::constructor_emptyMap (SOURCE_FILE ("domain.ggs", 144)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 144)) ;
                  }
                  var_bitIndex_4801 = var_bitIndex_4801.add_operation (extractedValue_5091_size.getter_bigint (SOURCE_FILE ("domain.ggs", 145)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 145)) ;
                }
                break ;
              case GALGAS_bddType::kEnum_namedType:
                {
                  const cEnumAssociatedValues_bddType_namedType * extractPtr_5412 = (const cEnumAssociatedValues_bddType_namedType *) (enumerator_4880.current_mType (HERE).unsafePointer ()) ;
                  const GALGAS_lstring extractedValue_5233_typeName = extractPtr_5412->mAssociatedValue0 ;
                  GALGAS_uint var_size_5290 ;
                  GALGAS_recordDomainMap var_subdomain_5305 ;
                  outArgument_outDomainMap.method_searchKey (extractedValue_5233_typeName, var_size_5290, var_subdomain_5305, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 147)) ;
                  {
                  var_recordMap_4842.setter_insertKey (enumerator_4880.current_mVarName (HERE), var_bitIndex_4801.getter_uint (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 148)), var_size_5290, var_subdomain_5305, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 148)) ;
                  }
                  var_bitIndex_4801 = var_bitIndex_4801.add_operation (var_size_5290.getter_bigint (SOURCE_FILE ("domain.ggs", 149)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 149)) ;
                }
                break ;
              }
              enumerator_4880.gotoNextObject () ;
              if (enumerator_4880.hasCurrentObject ()) {
                bool_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("domain.ggs", 138)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
              }
            }
          }
          {
          outArgument_outDomainMap.setter_insertKey (enumerator_4285.current_mDomainName (HERE), var_bitIndex_4801.getter_uint (inCompiler COMMA_SOURCE_FILE ("domain.ggs", 152)), var_recordMap_4842, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 152)) ;
          }
        }
        break ;
      }
      enumerator_4285.gotoNextObject () ;
      if (enumerator_4285.hasCurrentObject ()) {
        bool_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("domain.ggs", 123)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@varList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_varList : public cCollectionElement {
  public: GALGAS_varList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_varList (const GALGAS_string & in_mVarName,
                                      const GALGAS_uint & in_mBitIndex,
                                      const GALGAS_uint & in_mBitCount
                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_varList (const GALGAS_varList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_varList::cCollectionElement_varList (const GALGAS_string & in_mVarName,
                                                        const GALGAS_uint & in_mBitIndex,
                                                        const GALGAS_uint & in_mBitCount
                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mVarName, in_mBitIndex, in_mBitCount) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_varList::cCollectionElement_varList (const GALGAS_varList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mVarName, inElement.mProperty_mBitIndex, inElement.mProperty_mBitCount) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_varList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_varList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_varList (mObject.mProperty_mVarName, mObject.mProperty_mBitIndex, mObject.mProperty_mBitCount COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_varList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVarName" ":" ;
  mObject.mProperty_mVarName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitIndex" ":" ;
  mObject.mProperty_mBitIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitCount" ":" ;
  mObject.mProperty_mBitCount.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_varList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_varList * operand = (cCollectionElement_varList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_varList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList::GALGAS_varList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList::GALGAS_varList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList GALGAS_varList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_varList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList GALGAS_varList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                          const GALGAS_uint & inOperand1,
                                                          const GALGAS_uint & inOperand2
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_varList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_varList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_varList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList::addAssign_operation (const GALGAS_string & inOperand0,
                                          const GALGAS_uint & inOperand1,
                                          const GALGAS_uint & inOperand2
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_varList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList::setter_append (GALGAS_varList_2D_element inElement,
                                    C_Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_varList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                           const GALGAS_uint inOperand1,
                                           const GALGAS_uint inOperand2,
                                           const GALGAS_uint inInsertionIndex,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_varList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                           GALGAS_uint & outOperand1,
                                           GALGAS_uint & outOperand2,
                                           const GALGAS_uint inRemoveIndex,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_varList) ;
        outOperand0 = p->mObject.mProperty_mVarName ;
        outOperand1 = p->mObject.mProperty_mBitIndex ;
        outOperand2 = p->mObject.mProperty_mBitCount ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mVarName ;
    outOperand1 = p->mObject.mProperty_mBitIndex ;
    outOperand2 = p->mObject.mProperty_mBitCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mVarName ;
    outOperand1 = p->mObject.mProperty_mBitIndex ;
    outOperand2 = p->mObject.mProperty_mBitCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mVarName ;
    outOperand1 = p->mObject.mProperty_mBitIndex ;
    outOperand2 = p->mObject.mProperty_mBitCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mVarName ;
    outOperand1 = p->mObject.mProperty_mBitIndex ;
    outOperand2 = p->mObject.mProperty_mBitCount ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList GALGAS_varList::getter_subListWithRange (const GALGAS_range & inRange,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_varList result = GALGAS_varList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList GALGAS_varList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_varList result = GALGAS_varList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList GALGAS_varList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_varList result = GALGAS_varList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList::plusAssign_operation (const GALGAS_varList inOperand,
                                           C_Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList::setter_setMVarNameAtIndex (GALGAS_string inOperand,
                                                GALGAS_uint inIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_varList * p = (cCollectionElement_varList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mVarName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_varList::getter_mVarNameAtIndex (const GALGAS_uint & inIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    result = p->mObject.mProperty_mVarName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList::setter_setMBitIndexAtIndex (GALGAS_uint inOperand,
                                                 GALGAS_uint inIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_varList * p = (cCollectionElement_varList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBitIndex = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_varList::getter_mBitIndexAtIndex (const GALGAS_uint & inIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    result = p->mObject.mProperty_mBitIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList::setter_setMBitCountAtIndex (GALGAS_uint inOperand,
                                                 GALGAS_uint inIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_varList * p = (cCollectionElement_varList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBitCount = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_varList::getter_mBitCountAtIndex (const GALGAS_uint & inIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_varList * p = (cCollectionElement_varList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_varList) ;
    result = p->mObject.mProperty_mBitCount ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_varList::cEnumerator_varList (const GALGAS_varList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList_2D_element cEnumerator_varList::current (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_varList::current_mVarName (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mVarName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_varList::current_mBitIndex (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mBitIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_varList::current_mBitCount (LOCATION_ARGS) const {
  const cCollectionElement_varList * p = (const cCollectionElement_varList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_varList) ;
  return p->mObject.mProperty_mBitCount ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@varList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varList ("varList",
                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_varMap::cMapElement_varMap (const GALGAS_lstring & inKey,
                                        const GALGAS_uint & in_mIndex,
                                        const GALGAS_uint & in_mBitCount,
                                        const GALGAS_recordDomainMap & in_mRecordDomainMap
                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mIndex (in_mIndex),
mProperty_mBitCount (in_mBitCount),
mProperty_mRecordDomainMap (in_mRecordDomainMap) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_varMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mBitCount.isValid () && mProperty_mRecordDomainMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_varMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_varMap (mProperty_lkey, mProperty_mIndex, mProperty_mBitCount, mProperty_mRecordDomainMap COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_varMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mProperty_mIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitCount" ":" ;
  mProperty_mBitCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRecordDomainMap" ":" ;
  mProperty_mRecordDomainMap.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_varMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_varMap * operand = (cMapElement_varMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mIndex.objectCompare (operand->mProperty_mIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitCount.objectCompare (operand->mProperty_mBitCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRecordDomainMap.objectCompare (operand->mProperty_mRecordDomainMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap::GALGAS_varMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap::GALGAS_varMap (const GALGAS_varMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap & GALGAS_varMap::operator = (const GALGAS_varMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap GALGAS_varMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_varMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap GALGAS_varMap::constructor_mapWithMapToOverride (const GALGAS_varMap & inMapToOverride
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_varMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap GALGAS_varMap::getter_overriddenMap (C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_varMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_varMap_searchKey = "there is no '%K' variable" ;

//----------------------------------------------------------------------------------------------------------------------

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
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mBitCount ;
    outArgument2 = p->mProperty_mRecordDomainMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_varMap::getter_mIndexForKey (const GALGAS_string & inKey,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_varMap * p = (const cMapElement_varMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    result = p->mProperty_mIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_varMap::getter_mBitCountForKey (const GALGAS_string & inKey,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_varMap * p = (const cMapElement_varMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    result = p->mProperty_mBitCount ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap GALGAS_varMap::getter_mRecordDomainMapForKey (const GALGAS_string & inKey,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_varMap * p = (const cMapElement_varMap *) attributes ;
  GALGAS_recordDomainMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    result = p->mProperty_mRecordDomainMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varMap::setter_setMIndexForKey (GALGAS_uint inAttributeValue,
                                            GALGAS_string inKey,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_varMap * p = (cMapElement_varMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    p->mProperty_mIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varMap::setter_setMBitCountForKey (GALGAS_uint inAttributeValue,
                                               GALGAS_string inKey,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_varMap * p = (cMapElement_varMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    p->mProperty_mBitCount = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varMap::setter_setMRecordDomainMapForKey (GALGAS_recordDomainMap inAttributeValue,
                                                      GALGAS_string inKey,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_varMap * p = (cMapElement_varMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    p->mProperty_mRecordDomainMap = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_varMap * GALGAS_varMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                       const GALGAS_string & inKey
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_varMap * result = (cMapElement_varMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_varMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_varMap::cEnumerator_varMap (const GALGAS_varMap & inEnumeratedObject,
                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varMap_2D_element cEnumerator_varMap::current (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return GALGAS_varMap_2D_element (p->mProperty_lkey, p->mProperty_mIndex, p->mProperty_mBitCount, p->mProperty_mRecordDomainMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_varMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_varMap::current_mIndex (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_varMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mBitCount ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap cEnumerator_varMap::current_mRecordDomainMap (LOCATION_ARGS) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_varMap) ;
  return p->mProperty_mRecordDomainMap ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_varMap::optional_searchKey (const GALGAS_string & inKey,
                                        GALGAS_uint & outArgument0,
                                        GALGAS_uint & outArgument1,
                                        GALGAS_recordDomainMap & outArgument2) const {
  const cMapElement_varMap * p = (const cMapElement_varMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_varMap) ;
    outArgument0 = p->mProperty_mIndex ;
    outArgument1 = p->mProperty_mBitCount ;
    outArgument2 = p->mProperty_mRecordDomainMap ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@varMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varMap ("varMap",
                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@domainFieldList analyze'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_analyze (const GALGAS_domainFieldList inObject,
                              const GALGAS_domainMap constinArgument_inDomainMap,
                              GALGAS_varMap & ioArgument_ioVarMap,
                              GALGAS_varList & ioArgument_ioVarList,
                              GALGAS_uint & ioArgument_ioTotalBitCount,
                              C_Compiler * inCompiler
                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_domainFieldList temp_0 = inObject ;
  cEnumerator_domainFieldList enumerator_6668 (temp_0, kENUMERATION_DOWN) ;
  while (enumerator_6668.hasCurrentObject ()) {
    switch (enumerator_6668.current_mType (HERE).enumValue ()) {
    case GALGAS_bddType::kNotBuilt:
      break ;
    case GALGAS_bddType::kEnum_bool:
      {
        {
        ioArgument_ioVarMap.setter_insertKey (enumerator_6668.current_mVarName (HERE), ioArgument_ioTotalBitCount, GALGAS_uint (uint32_t (1U)), GALGAS_recordDomainMap::constructor_emptyMap (SOURCE_FILE ("domain.ggs", 189)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 189)) ;
        }
        {
        ioArgument_ioVarList.setter_insertAtIndex (enumerator_6668.current_mVarName (HERE).readProperty_string (), ioArgument_ioTotalBitCount, GALGAS_uint (uint32_t (1U)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 190)) ;
        }
        ioArgument_ioTotalBitCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("domain.ggs", 191)) ;
      }
      break ;
    case GALGAS_bddType::kEnum_boolArray:
      {
        const cEnumAssociatedValues_bddType_boolArray * extractPtr_7080 = (const cEnumAssociatedValues_bddType_boolArray *) (enumerator_6668.current_mType (HERE).unsafePointer ()) ;
        const GALGAS_uint extractedValue_6897_size = extractPtr_7080->mAssociatedValue0 ;
        {
        ioArgument_ioVarMap.setter_insertKey (enumerator_6668.current_mVarName (HERE), ioArgument_ioTotalBitCount, extractedValue_6897_size, GALGAS_recordDomainMap::constructor_emptyMap (SOURCE_FILE ("domain.ggs", 193)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 193)) ;
        }
        {
        ioArgument_ioVarList.setter_insertAtIndex (enumerator_6668.current_mVarName (HERE).readProperty_string (), ioArgument_ioTotalBitCount, extractedValue_6897_size, GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 194)) ;
        }
        ioArgument_ioTotalBitCount = ioArgument_ioTotalBitCount.add_operation (extractedValue_6897_size, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 195)) ;
      }
      break ;
    case GALGAS_bddType::kEnum_namedType:
      {
        const cEnumAssociatedValues_bddType_namedType * extractPtr_7381 = (const cEnumAssociatedValues_bddType_namedType *) (enumerator_6668.current_mType (HERE).unsafePointer ()) ;
        const GALGAS_lstring extractedValue_7118_typeName = extractPtr_7381->mAssociatedValue0 ;
        GALGAS_uint var_size_7170 ;
        GALGAS_recordDomainMap var_subDomainMap_7188 ;
        constinArgument_inDomainMap.method_searchKey (extractedValue_7118_typeName, var_size_7170, var_subDomainMap_7188, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 197)) ;
        {
        ioArgument_ioVarMap.setter_insertKey (enumerator_6668.current_mVarName (HERE), ioArgument_ioTotalBitCount, var_size_7170, var_subDomainMap_7188, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 198)) ;
        }
        {
        ioArgument_ioVarList.setter_insertAtIndex (enumerator_6668.current_mVarName (HERE).readProperty_string (), ioArgument_ioTotalBitCount, var_size_7170, GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("domain.ggs", 199)) ;
        }
        ioArgument_ioTotalBitCount = ioArgument_ioTotalBitCount.add_operation (var_size_7170, inCompiler COMMA_SOURCE_FILE ("domain.ggs", 200)) ;
      }
      break ;
    }
    enumerator_6668.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_formulaKind_fixedPoint::cEnumAssociatedValues_formulaKind_fixedPoint (const GALGAS_binaryset inAssociatedValue0
                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_formulaKind_fixedPoint::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_formulaKind_fixedPoint::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_formulaKind_fixedPoint * ptr = dynamic_cast<const cEnumAssociatedValues_formulaKind_fixedPoint *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaKind::GALGAS_formulaKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaKind GALGAS_formulaKind::constructor_assignment (UNUSED_LOCATION_ARGS) {
  GALGAS_formulaKind result ;
  result.mEnum = kEnum_assignment ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_formulaKind::optional_assignment () const {
  const bool ok = mEnum == kEnum_assignment ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_formulaKind::optional_fixedPoint (GALGAS_binaryset & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_fixedPoint ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_formulaKind_fixedPoint *) unsafePointer () ;
    // const cEnumAssociatedValues_formulaKind_fixedPoint * ptr = (const cEnumAssociatedValues_formulaKind_fixedPoint *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_formulaKind [3] = {
  "(not built)",
  "assignment",
  "fixedPoint"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formulaKind::getter_isAssignment (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_assignment == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formulaKind::getter_isFixedPoint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixedPoint == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaKind::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "<enum @formulaKind: " << gEnumNameArrayFor_formulaKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@formulaKind type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formulaKind ("formulaKind",
                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formulaKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaKind ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formulaKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formulaKind (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @abstractFormula reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractFormula::objectCompare (const GALGAS_abstractFormula & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFormula::GALGAS_abstractFormula (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFormula::GALGAS_abstractFormula (const cPtr_abstractFormula * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractFormula) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractFormula class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractFormula::cPtr_abstractFormula (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractFormula type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractFormula ("abstractFormula",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractFormula::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractFormula ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractFormula::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractFormula (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @expression reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_expression::objectCompare (const GALGAS_expression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression::GALGAS_expression (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression::GALGAS_expression (const cPtr_expression * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expression) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @expression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_expression::cPtr_expression (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@expression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expression ("expression",
                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_expression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_expression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractFormula_2D_weak::objectCompare (const GALGAS_abstractFormula_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFormula_2D_weak::GALGAS_abstractFormula_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFormula_2D_weak & GALGAS_abstractFormula_2D_weak::operator = (const GALGAS_abstractFormula & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFormula_2D_weak::GALGAS_abstractFormula_2D_weak (const GALGAS_abstractFormula & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFormula_2D_weak GALGAS_abstractFormula_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractFormula_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFormula GALGAS_abstractFormula_2D_weak::bang_abstractFormula_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractFormula result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractFormula) ;
      result = GALGAS_abstractFormula ((cPtr_abstractFormula *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractFormula-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractFormula_2D_weak ("abstractFormula-weak",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractFormula_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractFormula_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractFormula_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractFormula_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFormula_2D_weak GALGAS_abstractFormula_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractFormula_2D_weak result ;
  const GALGAS_abstractFormula_2D_weak * p = (const GALGAS_abstractFormula_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractFormula_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractFormula-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_computedFormulaMap::cMapElement_computedFormulaMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_varList & in_mVarList,
                                                                const GALGAS_uint & in_mBitCount,
                                                                const GALGAS_binaryset & in_mValue
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mVarList (in_mVarList),
mProperty_mBitCount (in_mBitCount),
mProperty_mValue (in_mValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_computedFormulaMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mVarList.isValid () && mProperty_mBitCount.isValid () && mProperty_mValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_computedFormulaMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_computedFormulaMap (mProperty_lkey, mProperty_mVarList, mProperty_mBitCount, mProperty_mValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_computedFormulaMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mVarList" ":" ;
  mProperty_mVarList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBitCount" ":" ;
  mProperty_mBitCount.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mValue" ":" ;
  mProperty_mValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_computedFormulaMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_computedFormulaMap * operand = (cMapElement_computedFormulaMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarList.objectCompare (operand->mProperty_mVarList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBitCount.objectCompare (operand->mProperty_mBitCount) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (operand->mProperty_mValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap::GALGAS_computedFormulaMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap::GALGAS_computedFormulaMap (const GALGAS_computedFormulaMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap & GALGAS_computedFormulaMap::operator = (const GALGAS_computedFormulaMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap GALGAS_computedFormulaMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_computedFormulaMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap GALGAS_computedFormulaMap::constructor_mapWithMapToOverride (const GALGAS_computedFormulaMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_computedFormulaMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap GALGAS_computedFormulaMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_computedFormulaMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_computedFormulaMap_searchKey = "there is no '%K' formula" ;

//----------------------------------------------------------------------------------------------------------------------

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
    outArgument0 = p->mProperty_mVarList ;
    outArgument1 = p->mProperty_mBitCount ;
    outArgument2 = p->mProperty_mValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList GALGAS_computedFormulaMap::getter_mVarListForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) attributes ;
  GALGAS_varList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    result = p->mProperty_mVarList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_computedFormulaMap::getter_mBitCountForKey (const GALGAS_string & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    result = p->mProperty_mBitCount ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset GALGAS_computedFormulaMap::getter_mValueForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) attributes ;
  GALGAS_binaryset result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedFormulaMap::setter_setMVarListForKey (GALGAS_varList inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_computedFormulaMap * p = (cMapElement_computedFormulaMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    p->mProperty_mVarList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedFormulaMap::setter_setMBitCountForKey (GALGAS_uint inAttributeValue,
                                                           GALGAS_string inKey,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_computedFormulaMap * p = (cMapElement_computedFormulaMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    p->mProperty_mBitCount = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedFormulaMap::setter_setMValueForKey (GALGAS_binaryset inAttributeValue,
                                                        GALGAS_string inKey,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_computedFormulaMap * p = (cMapElement_computedFormulaMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    p->mProperty_mValue = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_computedFormulaMap * GALGAS_computedFormulaMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_computedFormulaMap * result = (cMapElement_computedFormulaMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_computedFormulaMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_computedFormulaMap::cEnumerator_computedFormulaMap (const GALGAS_computedFormulaMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedFormulaMap_2D_element cEnumerator_computedFormulaMap::current (LOCATION_ARGS) const {
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
  return GALGAS_computedFormulaMap_2D_element (p->mProperty_lkey, p->mProperty_mVarList, p->mProperty_mBitCount, p->mProperty_mValue) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_computedFormulaMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList cEnumerator_computedFormulaMap::current_mVarList (LOCATION_ARGS) const {
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
  return p->mProperty_mVarList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_computedFormulaMap::current_mBitCount (LOCATION_ARGS) const {
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
  return p->mProperty_mBitCount ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset cEnumerator_computedFormulaMap::current_mValue (LOCATION_ARGS) const {
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
  return p->mProperty_mValue ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_computedFormulaMap::optional_searchKey (const GALGAS_string & inKey,
                                                    GALGAS_varList & outArgument0,
                                                    GALGAS_uint & outArgument1,
                                                    GALGAS_binaryset & outArgument2) const {
  const cMapElement_computedFormulaMap * p = (const cMapElement_computedFormulaMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_computedFormulaMap) ;
    outArgument0 = p->mProperty_mVarList ;
    outArgument1 = p->mProperty_mBitCount ;
    outArgument2 = p->mProperty_mValue ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@computedFormulaMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_computedFormulaMap ("computedFormulaMap",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedFormulaMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedFormulaMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedFormulaMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedFormulaMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_setting_5F_nodeHashMapSize_2D_weak::objectCompare (const GALGAS_setting_5F_nodeHashMapSize_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize_2D_weak::GALGAS_setting_5F_nodeHashMapSize_2D_weak (void) :
GALGAS_abstractFormula_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize_2D_weak & GALGAS_setting_5F_nodeHashMapSize_2D_weak::operator = (const GALGAS_setting_5F_nodeHashMapSize & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize_2D_weak::GALGAS_setting_5F_nodeHashMapSize_2D_weak (const GALGAS_setting_5F_nodeHashMapSize & inSource) :
GALGAS_abstractFormula_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize_2D_weak GALGAS_setting_5F_nodeHashMapSize_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_setting_5F_nodeHashMapSize_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize GALGAS_setting_5F_nodeHashMapSize_2D_weak::bang_setting_5F_nodeHashMapSize_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_setting_5F_nodeHashMapSize result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_setting_5F_nodeHashMapSize) ;
      result = GALGAS_setting_5F_nodeHashMapSize ((cPtr_setting_5F_nodeHashMapSize *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@setting_nodeHashMapSize-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize_2D_weak ("setting_nodeHashMapSize-weak",
                                                           & kTypeDescriptor_GALGAS_abstractFormula_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_setting_5F_nodeHashMapSize_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_nodeHashMapSize_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_setting_5F_nodeHashMapSize_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setting_5F_nodeHashMapSize_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_nodeHashMapSize_2D_weak GALGAS_setting_5F_nodeHashMapSize_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_setting_5F_nodeHashMapSize_2D_weak result ;
  const GALGAS_setting_5F_nodeHashMapSize_2D_weak * p = (const GALGAS_setting_5F_nodeHashMapSize_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_setting_5F_nodeHashMapSize_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setting_nodeHashMapSize-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_setting_5F_andCacheMapSize_2D_weak::objectCompare (const GALGAS_setting_5F_andCacheMapSize_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_andCacheMapSize_2D_weak::GALGAS_setting_5F_andCacheMapSize_2D_weak (void) :
GALGAS_abstractFormula_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_andCacheMapSize_2D_weak & GALGAS_setting_5F_andCacheMapSize_2D_weak::operator = (const GALGAS_setting_5F_andCacheMapSize & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_andCacheMapSize_2D_weak::GALGAS_setting_5F_andCacheMapSize_2D_weak (const GALGAS_setting_5F_andCacheMapSize & inSource) :
GALGAS_abstractFormula_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_andCacheMapSize_2D_weak GALGAS_setting_5F_andCacheMapSize_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_setting_5F_andCacheMapSize_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_andCacheMapSize GALGAS_setting_5F_andCacheMapSize_2D_weak::bang_setting_5F_andCacheMapSize_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_setting_5F_andCacheMapSize result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_setting_5F_andCacheMapSize) ;
      result = GALGAS_setting_5F_andCacheMapSize ((cPtr_setting_5F_andCacheMapSize *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@setting_andCacheMapSize-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize_2D_weak ("setting_andCacheMapSize-weak",
                                                           & kTypeDescriptor_GALGAS_abstractFormula_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_setting_5F_andCacheMapSize_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_setting_5F_andCacheMapSize_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setting_5F_andCacheMapSize_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_andCacheMapSize_2D_weak GALGAS_setting_5F_andCacheMapSize_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_setting_5F_andCacheMapSize_2D_weak result ;
  const GALGAS_setting_5F_andCacheMapSize_2D_weak * p = (const GALGAS_setting_5F_andCacheMapSize_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_setting_5F_andCacheMapSize_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setting_andCacheMapSize-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dumpFormula_2D_weak::objectCompare (const GALGAS_dumpFormula_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dumpFormula_2D_weak::GALGAS_dumpFormula_2D_weak (void) :
GALGAS_abstractFormula_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dumpFormula_2D_weak & GALGAS_dumpFormula_2D_weak::operator = (const GALGAS_dumpFormula & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dumpFormula_2D_weak::GALGAS_dumpFormula_2D_weak (const GALGAS_dumpFormula & inSource) :
GALGAS_abstractFormula_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dumpFormula_2D_weak GALGAS_dumpFormula_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dumpFormula_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dumpFormula GALGAS_dumpFormula_2D_weak::bang_dumpFormula_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dumpFormula result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dumpFormula) ;
      result = GALGAS_dumpFormula ((cPtr_dumpFormula *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@dumpFormula-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dumpFormula_2D_weak ("dumpFormula-weak",
                                            & kTypeDescriptor_GALGAS_abstractFormula_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dumpFormula_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dumpFormula_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dumpFormula_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dumpFormula_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dumpFormula_2D_weak GALGAS_dumpFormula_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dumpFormula_2D_weak result ;
  const GALGAS_dumpFormula_2D_weak * p = (const GALGAS_dumpFormula_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dumpFormula_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dumpFormula-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_graphvizFormula_2D_weak::objectCompare (const GALGAS_graphvizFormula_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphvizFormula_2D_weak::GALGAS_graphvizFormula_2D_weak (void) :
GALGAS_abstractFormula_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphvizFormula_2D_weak & GALGAS_graphvizFormula_2D_weak::operator = (const GALGAS_graphvizFormula & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphvizFormula_2D_weak::GALGAS_graphvizFormula_2D_weak (const GALGAS_graphvizFormula & inSource) :
GALGAS_abstractFormula_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphvizFormula_2D_weak GALGAS_graphvizFormula_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_graphvizFormula_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphvizFormula GALGAS_graphvizFormula_2D_weak::bang_graphvizFormula_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_graphvizFormula result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_graphvizFormula) ;
      result = GALGAS_graphvizFormula ((cPtr_graphvizFormula *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@graphvizFormula-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphvizFormula_2D_weak ("graphvizFormula-weak",
                                                & kTypeDescriptor_GALGAS_abstractFormula_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphvizFormula_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphvizFormula_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphvizFormula_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphvizFormula_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphvizFormula_2D_weak GALGAS_graphvizFormula_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_graphvizFormula_2D_weak result ;
  const GALGAS_graphvizFormula_2D_weak * p = (const GALGAS_graphvizFormula_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_graphvizFormula_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphvizFormula-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_expression_2D_weak::objectCompare (const GALGAS_expression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression_2D_weak::GALGAS_expression_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression_2D_weak & GALGAS_expression_2D_weak::operator = (const GALGAS_expression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression_2D_weak::GALGAS_expression_2D_weak (const GALGAS_expression & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression_2D_weak GALGAS_expression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_expression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_expression_2D_weak::bang_expression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_expression result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_expression) ;
      result = GALGAS_expression ((cPtr_expression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@expression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expression_2D_weak ("expression-weak",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_expression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_expression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression_2D_weak GALGAS_expression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_expression_2D_weak result ;
  const GALGAS_expression_2D_weak * p = (const GALGAS_expression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_varInExpression_2D_weak::objectCompare (const GALGAS_varInExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpression_2D_weak::GALGAS_varInExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpression_2D_weak & GALGAS_varInExpression_2D_weak::operator = (const GALGAS_varInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpression_2D_weak::GALGAS_varInExpression_2D_weak (const GALGAS_varInExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpression_2D_weak GALGAS_varInExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_varInExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpression GALGAS_varInExpression_2D_weak::bang_varInExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_varInExpression result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_varInExpression) ;
      result = GALGAS_varInExpression ((cPtr_varInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@varInExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInExpression_2D_weak ("varInExpression-weak",
                                                & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varInExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varInExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpression_2D_weak GALGAS_varInExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_varInExpression_2D_weak result ;
  const GALGAS_varInExpression_2D_weak * p = (const GALGAS_varInExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varInExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_varBitInExpression_2D_weak::objectCompare (const GALGAS_varBitInExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varBitInExpression_2D_weak::GALGAS_varBitInExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varBitInExpression_2D_weak & GALGAS_varBitInExpression_2D_weak::operator = (const GALGAS_varBitInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varBitInExpression_2D_weak::GALGAS_varBitInExpression_2D_weak (const GALGAS_varBitInExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varBitInExpression_2D_weak GALGAS_varBitInExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_varBitInExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varBitInExpression GALGAS_varBitInExpression_2D_weak::bang_varBitInExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_varBitInExpression result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_varBitInExpression) ;
      result = GALGAS_varBitInExpression ((cPtr_varBitInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@varBitInExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varBitInExpression_2D_weak ("varBitInExpression-weak",
                                                   & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varBitInExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varBitInExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varBitInExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varBitInExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varBitInExpression_2D_weak GALGAS_varBitInExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_varBitInExpression_2D_weak result ;
  const GALGAS_varBitInExpression_2D_weak * p = (const GALGAS_varBitInExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_varBitInExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varBitInExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @andExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_andExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_andExpression * p = (const cPtr_andExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_andExpression::objectCompare (const GALGAS_andExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpression::GALGAS_andExpression (void) :
GALGAS_expression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpression::GALGAS_andExpression (const cPtr_andExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpression GALGAS_andExpression::constructor_new (const GALGAS_expression & inAttribute_mLeftExpression,
                                                            const GALGAS_expression & inAttribute_mRightExpression
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_andExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andExpression::setter_setMLeftExpression (GALGAS_expression inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_andExpression * p = (cPtr_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andExpression::setter_setMRightExpression (GALGAS_expression inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_andExpression * p = (cPtr_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_andExpression::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_andExpression * p = (cPtr_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_andExpression::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_andExpression * p = (cPtr_andExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @andExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_andExpression::cPtr_andExpression (const GALGAS_expression & in_mLeftExpression,
                                        const GALGAS_expression & in_mRightExpression
                                        COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpression ;
}

void cPtr_andExpression::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@andExpression:" ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@andExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andExpression ("andExpression",
                                      & kTypeDescriptor_GALGAS_expression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_andExpression_2D_weak::objectCompare (const GALGAS_andExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpression_2D_weak::GALGAS_andExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpression_2D_weak & GALGAS_andExpression_2D_weak::operator = (const GALGAS_andExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpression_2D_weak::GALGAS_andExpression_2D_weak (const GALGAS_andExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpression_2D_weak GALGAS_andExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_andExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpression GALGAS_andExpression_2D_weak::bang_andExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_andExpression result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andExpression) ;
      result = GALGAS_andExpression ((cPtr_andExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@andExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andExpression_2D_weak ("andExpression-weak",
                                              & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpression_2D_weak GALGAS_andExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_andExpression_2D_weak result ;
  const GALGAS_andExpression_2D_weak * p = (const GALGAS_andExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @orExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_orExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_orExpression * p = (const cPtr_orExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_orExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_orExpression::objectCompare (const GALGAS_orExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpression::GALGAS_orExpression (void) :
GALGAS_expression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpression::GALGAS_orExpression (const cPtr_orExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpression GALGAS_orExpression::constructor_new (const GALGAS_expression & inAttribute_mLeftExpression,
                                                          const GALGAS_expression & inAttribute_mRightExpression
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_orExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_orExpression::setter_setMLeftExpression (GALGAS_expression inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_orExpression * p = (cPtr_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_orExpression::setter_setMRightExpression (GALGAS_expression inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_orExpression * p = (cPtr_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_orExpression::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_orExpression * p = (cPtr_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_orExpression::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_orExpression * p = (cPtr_orExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @orExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_orExpression::cPtr_orExpression (const GALGAS_expression & in_mLeftExpression,
                                      const GALGAS_expression & in_mRightExpression
                                      COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_orExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpression ;
}

void cPtr_orExpression::description (C_String & ioString,
                                     const int32_t inIndentation) const {
  ioString << "[@orExpression:" ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_orExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@orExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orExpression ("orExpression",
                                     & kTypeDescriptor_GALGAS_expression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_orExpression_2D_weak::objectCompare (const GALGAS_orExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpression_2D_weak::GALGAS_orExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpression_2D_weak & GALGAS_orExpression_2D_weak::operator = (const GALGAS_orExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpression_2D_weak::GALGAS_orExpression_2D_weak (const GALGAS_orExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpression_2D_weak GALGAS_orExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_orExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpression GALGAS_orExpression_2D_weak::bang_orExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_orExpression result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_orExpression) ;
      result = GALGAS_orExpression ((cPtr_orExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@orExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orExpression_2D_weak ("orExpression-weak",
                                             & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpression_2D_weak GALGAS_orExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_orExpression_2D_weak result ;
  const GALGAS_orExpression_2D_weak * p = (const GALGAS_orExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @xorExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_xorExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_xorExpression * p = (const cPtr_xorExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_xorExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_xorExpression::objectCompare (const GALGAS_xorExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpression::GALGAS_xorExpression (void) :
GALGAS_expression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpression::GALGAS_xorExpression (const cPtr_xorExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpression GALGAS_xorExpression::constructor_new (const GALGAS_expression & inAttribute_mLeftExpression,
                                                            const GALGAS_expression & inAttribute_mRightExpression
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_xorExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xorExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xorExpression::setter_setMLeftExpression (GALGAS_expression inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_xorExpression * p = (cPtr_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_xorExpression::setter_setMRightExpression (GALGAS_expression inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_xorExpression * p = (cPtr_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_xorExpression::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_xorExpression * p = (cPtr_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_xorExpression::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_xorExpression * p = (cPtr_xorExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @xorExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_xorExpression::cPtr_xorExpression (const GALGAS_expression & in_mLeftExpression,
                                        const GALGAS_expression & in_mRightExpression
                                        COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_xorExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpression ;
}

void cPtr_xorExpression::description (C_String & ioString,
                                      const int32_t inIndentation) const {
  ioString << "[@xorExpression:" ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_xorExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_xorExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@xorExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xorExpression ("xorExpression",
                                      & kTypeDescriptor_GALGAS_expression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xorExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xorExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_xorExpression_2D_weak::objectCompare (const GALGAS_xorExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpression_2D_weak::GALGAS_xorExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpression_2D_weak & GALGAS_xorExpression_2D_weak::operator = (const GALGAS_xorExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpression_2D_weak::GALGAS_xorExpression_2D_weak (const GALGAS_xorExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpression_2D_weak GALGAS_xorExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_xorExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpression GALGAS_xorExpression_2D_weak::bang_xorExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_xorExpression result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_xorExpression) ;
      result = GALGAS_xorExpression ((cPtr_xorExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@xorExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xorExpression_2D_weak ("xorExpression-weak",
                                              & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xorExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xorExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpression_2D_weak GALGAS_xorExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_xorExpression_2D_weak result ;
  const GALGAS_xorExpression_2D_weak * p = (const GALGAS_xorExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xorExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @equalExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_equalExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_equalExpression * p = (const cPtr_equalExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_equalExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_equalExpression::objectCompare (const GALGAS_equalExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_equalExpression::GALGAS_equalExpression (void) :
GALGAS_expression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_equalExpression::GALGAS_equalExpression (const cPtr_equalExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_equalExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_equalExpression GALGAS_equalExpression::constructor_new (const GALGAS_expression & inAttribute_mLeftExpression,
                                                                const GALGAS_expression & inAttribute_mRightExpression
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_equalExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_equalExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_equalExpression::setter_setMLeftExpression (GALGAS_expression inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_equalExpression * p = (cPtr_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_equalExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_equalExpression::setter_setMRightExpression (GALGAS_expression inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_equalExpression * p = (cPtr_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_equalExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_equalExpression::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_equalExpression * p = (cPtr_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_equalExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_equalExpression::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_equalExpression * p = (cPtr_equalExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_equalExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @equalExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_equalExpression::cPtr_equalExpression (const GALGAS_expression & in_mLeftExpression,
                                            const GALGAS_expression & in_mRightExpression
                                            COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_equalExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equalExpression ;
}

void cPtr_equalExpression::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@equalExpression:" ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_equalExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_equalExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@equalExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_equalExpression ("equalExpression",
                                        & kTypeDescriptor_GALGAS_expression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_equalExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equalExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_equalExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_equalExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_equalExpression_2D_weak::objectCompare (const GALGAS_equalExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_equalExpression_2D_weak::GALGAS_equalExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_equalExpression_2D_weak & GALGAS_equalExpression_2D_weak::operator = (const GALGAS_equalExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_equalExpression_2D_weak::GALGAS_equalExpression_2D_weak (const GALGAS_equalExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_equalExpression_2D_weak GALGAS_equalExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_equalExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_equalExpression GALGAS_equalExpression_2D_weak::bang_equalExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_equalExpression result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_equalExpression) ;
      result = GALGAS_equalExpression ((cPtr_equalExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@equalExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_equalExpression_2D_weak ("equalExpression-weak",
                                                & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_equalExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equalExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_equalExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_equalExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_equalExpression_2D_weak GALGAS_equalExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_equalExpression_2D_weak result ;
  const GALGAS_equalExpression_2D_weak * p = (const GALGAS_equalExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_equalExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("equalExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @notEqualExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_notEqualExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_notEqualExpression * p = (const cPtr_notEqualExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_notEqualExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_notEqualExpression::objectCompare (const GALGAS_notEqualExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notEqualExpression::GALGAS_notEqualExpression (void) :
GALGAS_expression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notEqualExpression::GALGAS_notEqualExpression (const cPtr_notEqualExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_notEqualExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_notEqualExpression GALGAS_notEqualExpression::constructor_new (const GALGAS_expression & inAttribute_mLeftExpression,
                                                                      const GALGAS_expression & inAttribute_mRightExpression
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_notEqualExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_notEqualExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_notEqualExpression::setter_setMLeftExpression (GALGAS_expression inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_notEqualExpression * p = (cPtr_notEqualExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notEqualExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_notEqualExpression::setter_setMRightExpression (GALGAS_expression inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_notEqualExpression * p = (cPtr_notEqualExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notEqualExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_notEqualExpression::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_notEqualExpression * p = (cPtr_notEqualExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notEqualExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_notEqualExpression::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_notEqualExpression * p = (cPtr_notEqualExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notEqualExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @notEqualExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_notEqualExpression::cPtr_notEqualExpression (const GALGAS_expression & in_mLeftExpression,
                                                  const GALGAS_expression & in_mRightExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_notEqualExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notEqualExpression ;
}

void cPtr_notEqualExpression::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@notEqualExpression:" ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_notEqualExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_notEqualExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@notEqualExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_notEqualExpression ("notEqualExpression",
                                           & kTypeDescriptor_GALGAS_expression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_notEqualExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notEqualExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_notEqualExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_notEqualExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_notEqualExpression_2D_weak::objectCompare (const GALGAS_notEqualExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notEqualExpression_2D_weak::GALGAS_notEqualExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notEqualExpression_2D_weak & GALGAS_notEqualExpression_2D_weak::operator = (const GALGAS_notEqualExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notEqualExpression_2D_weak::GALGAS_notEqualExpression_2D_weak (const GALGAS_notEqualExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notEqualExpression_2D_weak GALGAS_notEqualExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_notEqualExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notEqualExpression GALGAS_notEqualExpression_2D_weak::bang_notEqualExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_notEqualExpression result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_notEqualExpression) ;
      result = GALGAS_notEqualExpression ((cPtr_notEqualExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@notEqualExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_notEqualExpression_2D_weak ("notEqualExpression-weak",
                                                   & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_notEqualExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notEqualExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_notEqualExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_notEqualExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notEqualExpression_2D_weak GALGAS_notEqualExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_notEqualExpression_2D_weak result ;
  const GALGAS_notEqualExpression_2D_weak * p = (const GALGAS_notEqualExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_notEqualExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("notEqualExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @impliesExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_impliesExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_impliesExpression * p = (const cPtr_impliesExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_impliesExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_impliesExpression::objectCompare (const GALGAS_impliesExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_impliesExpression::GALGAS_impliesExpression (void) :
GALGAS_expression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_impliesExpression::GALGAS_impliesExpression (const cPtr_impliesExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_impliesExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_impliesExpression GALGAS_impliesExpression::constructor_new (const GALGAS_expression & inAttribute_mLeftExpression,
                                                                    const GALGAS_expression & inAttribute_mRightExpression
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_impliesExpression result ;
  if (inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_impliesExpression (inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_impliesExpression::setter_setMLeftExpression (GALGAS_expression inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_impliesExpression * p = (cPtr_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impliesExpression) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_impliesExpression::setter_setMRightExpression (GALGAS_expression inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_impliesExpression * p = (cPtr_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impliesExpression) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_impliesExpression::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_impliesExpression * p = (cPtr_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impliesExpression) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_impliesExpression::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_impliesExpression * p = (cPtr_impliesExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_impliesExpression) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @impliesExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_impliesExpression::cPtr_impliesExpression (const GALGAS_expression & in_mLeftExpression,
                                                const GALGAS_expression & in_mRightExpression
                                                COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_impliesExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impliesExpression ;
}

void cPtr_impliesExpression::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@impliesExpression:" ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_impliesExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_impliesExpression (mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@impliesExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_impliesExpression ("impliesExpression",
                                          & kTypeDescriptor_GALGAS_expression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_impliesExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impliesExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_impliesExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_impliesExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_impliesExpression_2D_weak::objectCompare (const GALGAS_impliesExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_impliesExpression_2D_weak::GALGAS_impliesExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_impliesExpression_2D_weak & GALGAS_impliesExpression_2D_weak::operator = (const GALGAS_impliesExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_impliesExpression_2D_weak::GALGAS_impliesExpression_2D_weak (const GALGAS_impliesExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_impliesExpression_2D_weak GALGAS_impliesExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_impliesExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_impliesExpression GALGAS_impliesExpression_2D_weak::bang_impliesExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_impliesExpression result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_impliesExpression) ;
      result = GALGAS_impliesExpression ((cPtr_impliesExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@impliesExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_impliesExpression_2D_weak ("impliesExpression-weak",
                                                  & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_impliesExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_impliesExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_impliesExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_impliesExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_impliesExpression_2D_weak GALGAS_impliesExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_impliesExpression_2D_weak result ;
  const GALGAS_impliesExpression_2D_weak * p = (const GALGAS_impliesExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_impliesExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("impliesExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @complementExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_complementExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_complementExpression * p = (const cPtr_complementExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_complementExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_complementExpression::objectCompare (const GALGAS_complementExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_complementExpression::GALGAS_complementExpression (void) :
GALGAS_expression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_complementExpression::GALGAS_complementExpression (const cPtr_complementExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_complementExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_complementExpression GALGAS_complementExpression::constructor_new (const GALGAS_expression & inAttribute_mExpression
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_complementExpression result ;
  if (inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_complementExpression (inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_complementExpression::setter_setMExpression (GALGAS_expression inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_complementExpression * p = (cPtr_complementExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_complementExpression) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_complementExpression::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_complementExpression * p = (cPtr_complementExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_complementExpression) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @complementExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_complementExpression::cPtr_complementExpression (const GALGAS_expression & in_mExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_complementExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complementExpression ;
}

void cPtr_complementExpression::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@complementExpression:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_complementExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_complementExpression (mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@complementExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_complementExpression ("complementExpression",
                                             & kTypeDescriptor_GALGAS_expression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_complementExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complementExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_complementExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_complementExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_complementExpression_2D_weak::objectCompare (const GALGAS_complementExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_complementExpression_2D_weak::GALGAS_complementExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_complementExpression_2D_weak & GALGAS_complementExpression_2D_weak::operator = (const GALGAS_complementExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_complementExpression_2D_weak::GALGAS_complementExpression_2D_weak (const GALGAS_complementExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_complementExpression_2D_weak GALGAS_complementExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_complementExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_complementExpression GALGAS_complementExpression_2D_weak::bang_complementExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_complementExpression result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_complementExpression) ;
      result = GALGAS_complementExpression ((cPtr_complementExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@complementExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_complementExpression_2D_weak ("complementExpression-weak",
                                                     & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_complementExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_complementExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_complementExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_complementExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_complementExpression_2D_weak GALGAS_complementExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_complementExpression_2D_weak result ;
  const GALGAS_complementExpression_2D_weak * p = (const GALGAS_complementExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_complementExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("complementExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @trueExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_trueExpression::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_trueExpression::objectCompare (const GALGAS_trueExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpression::GALGAS_trueExpression (void) :
GALGAS_expression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpression GALGAS_trueExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_trueExpression::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpression::GALGAS_trueExpression (const cPtr_trueExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_trueExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpression GALGAS_trueExpression::constructor_new (LOCATION_ARGS) {
  GALGAS_trueExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_trueExpression (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @trueExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_trueExpression::cPtr_trueExpression (LOCATION_ARGS) :
cPtr_expression (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_trueExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpression ;
}

void cPtr_trueExpression::description (C_String & ioString,
                                       const int32_t /* inIndentation */) const {
  ioString << "[@trueExpression]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_trueExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_trueExpression (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@trueExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_trueExpression ("trueExpression",
                                       & kTypeDescriptor_GALGAS_expression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_trueExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_trueExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_trueExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_trueExpression_2D_weak::objectCompare (const GALGAS_trueExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpression_2D_weak::GALGAS_trueExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpression_2D_weak & GALGAS_trueExpression_2D_weak::operator = (const GALGAS_trueExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpression_2D_weak::GALGAS_trueExpression_2D_weak (const GALGAS_trueExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpression_2D_weak GALGAS_trueExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_trueExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpression GALGAS_trueExpression_2D_weak::bang_trueExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_trueExpression result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_trueExpression) ;
      result = GALGAS_trueExpression ((cPtr_trueExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@trueExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_trueExpression_2D_weak ("trueExpression-weak",
                                               & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_trueExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_trueExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_trueExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpression_2D_weak GALGAS_trueExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_trueExpression_2D_weak result ;
  const GALGAS_trueExpression_2D_weak * p = (const GALGAS_trueExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_trueExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("trueExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @falseExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_falseExpression::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_falseExpression::objectCompare (const GALGAS_falseExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpression::GALGAS_falseExpression (void) :
GALGAS_expression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpression GALGAS_falseExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_falseExpression::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpression::GALGAS_falseExpression (const cPtr_falseExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_falseExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpression GALGAS_falseExpression::constructor_new (LOCATION_ARGS) {
  GALGAS_falseExpression result ;
  macroMyNew (result.mObjectPtr, cPtr_falseExpression (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @falseExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_falseExpression::cPtr_falseExpression (LOCATION_ARGS) :
cPtr_expression (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_falseExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpression ;
}

void cPtr_falseExpression::description (C_String & ioString,
                                        const int32_t /* inIndentation */) const {
  ioString << "[@falseExpression]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_falseExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_falseExpression (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@falseExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_falseExpression ("falseExpression",
                                        & kTypeDescriptor_GALGAS_expression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_falseExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_falseExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_falseExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_falseExpression_2D_weak::objectCompare (const GALGAS_falseExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpression_2D_weak::GALGAS_falseExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpression_2D_weak & GALGAS_falseExpression_2D_weak::operator = (const GALGAS_falseExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpression_2D_weak::GALGAS_falseExpression_2D_weak (const GALGAS_falseExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpression_2D_weak GALGAS_falseExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_falseExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpression GALGAS_falseExpression_2D_weak::bang_falseExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_falseExpression result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_falseExpression) ;
      result = GALGAS_falseExpression ((cPtr_falseExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@falseExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_falseExpression_2D_weak ("falseExpression-weak",
                                                & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_falseExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_falseExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_falseExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpression_2D_weak GALGAS_falseExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_falseExpression_2D_weak result ;
  const GALGAS_falseExpression_2D_weak * p = (const GALGAS_falseExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_falseExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("falseExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@formulaParameterListInExpression' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_formulaParameterListInExpression : public cCollectionElement {
  public: GALGAS_formulaParameterListInExpression_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_formulaParameterListInExpression (const GALGAS_lstring & in_mParameterName,
                                                               const GALGAS_lstringlist & in_mFieldNames
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formulaParameterListInExpression (const GALGAS_formulaParameterListInExpression_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_formulaParameterListInExpression::cCollectionElement_formulaParameterListInExpression (const GALGAS_lstring & in_mParameterName,
                                                                                                          const GALGAS_lstringlist & in_mFieldNames
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mParameterName, in_mFieldNames) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_formulaParameterListInExpression::cCollectionElement_formulaParameterListInExpression (const GALGAS_formulaParameterListInExpression_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mParameterName, inElement.mProperty_mFieldNames) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_formulaParameterListInExpression::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_formulaParameterListInExpression::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_formulaParameterListInExpression (mObject.mProperty_mParameterName, mObject.mProperty_mFieldNames COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_formulaParameterListInExpression::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterName" ":" ;
  mObject.mProperty_mParameterName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFieldNames" ":" ;
  mObject.mProperty_mFieldNames.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_formulaParameterListInExpression::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formulaParameterListInExpression * operand = (cCollectionElement_formulaParameterListInExpression *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formulaParameterListInExpression) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression::GALGAS_formulaParameterListInExpression (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression::GALGAS_formulaParameterListInExpression (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression GALGAS_formulaParameterListInExpression::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_formulaParameterListInExpression  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression GALGAS_formulaParameterListInExpression::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstringlist & inOperand1
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_formulaParameterListInExpression result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_formulaParameterListInExpression (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_formulaParameterListInExpression::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaParameterListInExpression::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_lstringlist & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formulaParameterListInExpression (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaParameterListInExpression::setter_append (GALGAS_formulaParameterListInExpression_2D_element inElement,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formulaParameterListInExpression (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaParameterListInExpression::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                    const GALGAS_lstringlist inOperand1,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formulaParameterListInExpression (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaParameterListInExpression::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                    GALGAS_lstringlist & outOperand1,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
        outOperand0 = p->mObject.mProperty_mParameterName ;
        outOperand1 = p->mObject.mProperty_mFieldNames ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mFieldNames ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mFieldNames ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mFieldNames ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mFieldNames ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression GALGAS_formulaParameterListInExpression::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formulaParameterListInExpression result = GALGAS_formulaParameterListInExpression::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression GALGAS_formulaParameterListInExpression::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_formulaParameterListInExpression result = GALGAS_formulaParameterListInExpression::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression GALGAS_formulaParameterListInExpression::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_formulaParameterListInExpression result = GALGAS_formulaParameterListInExpression::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaParameterListInExpression::plusAssign_operation (const GALGAS_formulaParameterListInExpression inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaParameterListInExpression::setter_setMParameterNameAtIndex (GALGAS_lstring inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formulaParameterListInExpression::getter_mParameterNameAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    result = p->mObject.mProperty_mParameterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaParameterListInExpression::setter_setMFieldNamesAtIndex (GALGAS_lstringlist inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFieldNames = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_formulaParameterListInExpression::getter_mFieldNamesAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaParameterListInExpression * p = (cCollectionElement_formulaParameterListInExpression *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
    result = p->mObject.mProperty_mFieldNames ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_formulaParameterListInExpression::cEnumerator_formulaParameterListInExpression (const GALGAS_formulaParameterListInExpression & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression_2D_element cEnumerator_formulaParameterListInExpression::current (LOCATION_ARGS) const {
  const cCollectionElement_formulaParameterListInExpression * p = (const cCollectionElement_formulaParameterListInExpression *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formulaParameterListInExpression::current_mParameterName (LOCATION_ARGS) const {
  const cCollectionElement_formulaParameterListInExpression * p = (const cCollectionElement_formulaParameterListInExpression *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
  return p->mObject.mProperty_mParameterName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_formulaParameterListInExpression::current_mFieldNames (LOCATION_ARGS) const {
  const cCollectionElement_formulaParameterListInExpression * p = (const cCollectionElement_formulaParameterListInExpression *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formulaParameterListInExpression) ;
  return p->mObject.mProperty_mFieldNames ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@formulaParameterListInExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formulaParameterListInExpression ("formulaParameterListInExpression",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formulaParameterListInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaParameterListInExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formulaParameterListInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formulaParameterListInExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_formulaInExpression_2D_weak::objectCompare (const GALGAS_formulaInExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaInExpression_2D_weak::GALGAS_formulaInExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaInExpression_2D_weak & GALGAS_formulaInExpression_2D_weak::operator = (const GALGAS_formulaInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaInExpression_2D_weak::GALGAS_formulaInExpression_2D_weak (const GALGAS_formulaInExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaInExpression_2D_weak GALGAS_formulaInExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_formulaInExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaInExpression GALGAS_formulaInExpression_2D_weak::bang_formulaInExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_formulaInExpression result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_formulaInExpression) ;
      result = GALGAS_formulaInExpression ((cPtr_formulaInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@formulaInExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formulaInExpression_2D_weak ("formulaInExpression-weak",
                                                    & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formulaInExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaInExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formulaInExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formulaInExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaInExpression_2D_weak GALGAS_formulaInExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formulaInExpression_2D_weak result ;
  const GALGAS_formulaInExpression_2D_weak * p = (const GALGAS_formulaInExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_formulaInExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formulaInExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @existInExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_existInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_existInExpression * p = (const cPtr_existInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_existInExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mArgumentList.objectCompare (p->mProperty_mArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_existInExpression::objectCompare (const GALGAS_existInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_existInExpression::GALGAS_existInExpression (void) :
GALGAS_expression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_existInExpression::GALGAS_existInExpression (const cPtr_existInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_existInExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_existInExpression GALGAS_existInExpression::constructor_new (const GALGAS_domainFieldList & inAttribute_mArgumentList,
                                                                    const GALGAS_expression & inAttribute_mExpression
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_existInExpression result ;
  if (inAttribute_mArgumentList.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_existInExpression (inAttribute_mArgumentList, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_existInExpression::setter_setMArgumentList (GALGAS_domainFieldList inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_existInExpression * p = (cPtr_existInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_existInExpression) ;
    p->mProperty_mArgumentList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_existInExpression::setter_setMExpression (GALGAS_expression inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_existInExpression * p = (cPtr_existInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_existInExpression) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainFieldList GALGAS_existInExpression::readProperty_mArgumentList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_domainFieldList () ;
  }else{
    cPtr_existInExpression * p = (cPtr_existInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_existInExpression) ;
    return p->mProperty_mArgumentList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_existInExpression::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_existInExpression * p = (cPtr_existInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_existInExpression) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @existInExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_existInExpression::cPtr_existInExpression (const GALGAS_domainFieldList & in_mArgumentList,
                                                const GALGAS_expression & in_mExpression
                                                COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mArgumentList (in_mArgumentList),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_existInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_existInExpression ;
}

void cPtr_existInExpression::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@existInExpression:" ;
  mProperty_mArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_existInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_existInExpression (mProperty_mArgumentList, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@existInExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_existInExpression ("existInExpression",
                                          & kTypeDescriptor_GALGAS_expression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_existInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_existInExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_existInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_existInExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_existInExpression_2D_weak::objectCompare (const GALGAS_existInExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_existInExpression_2D_weak::GALGAS_existInExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_existInExpression_2D_weak & GALGAS_existInExpression_2D_weak::operator = (const GALGAS_existInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_existInExpression_2D_weak::GALGAS_existInExpression_2D_weak (const GALGAS_existInExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_existInExpression_2D_weak GALGAS_existInExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_existInExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_existInExpression GALGAS_existInExpression_2D_weak::bang_existInExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_existInExpression result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_existInExpression) ;
      result = GALGAS_existInExpression ((cPtr_existInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@existInExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_existInExpression_2D_weak ("existInExpression-weak",
                                                  & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_existInExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_existInExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_existInExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_existInExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_existInExpression_2D_weak GALGAS_existInExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_existInExpression_2D_weak result ;
  const GALGAS_existInExpression_2D_weak * p = (const GALGAS_existInExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_existInExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("existInExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @forAllInExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_forAllInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_forAllInExpression * p = (const cPtr_forAllInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_forAllInExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mArgumentList.objectCompare (p->mProperty_mArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_forAllInExpression::objectCompare (const GALGAS_forAllInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forAllInExpression::GALGAS_forAllInExpression (void) :
GALGAS_expression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forAllInExpression::GALGAS_forAllInExpression (const cPtr_forAllInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forAllInExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_forAllInExpression GALGAS_forAllInExpression::constructor_new (const GALGAS_domainFieldList & inAttribute_mArgumentList,
                                                                      const GALGAS_expression & inAttribute_mExpression
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_forAllInExpression result ;
  if (inAttribute_mArgumentList.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_forAllInExpression (inAttribute_mArgumentList, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forAllInExpression::setter_setMArgumentList (GALGAS_domainFieldList inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_forAllInExpression * p = (cPtr_forAllInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forAllInExpression) ;
    p->mProperty_mArgumentList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forAllInExpression::setter_setMExpression (GALGAS_expression inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_forAllInExpression * p = (cPtr_forAllInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forAllInExpression) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainFieldList GALGAS_forAllInExpression::readProperty_mArgumentList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_domainFieldList () ;
  }else{
    cPtr_forAllInExpression * p = (cPtr_forAllInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forAllInExpression) ;
    return p->mProperty_mArgumentList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_forAllInExpression::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_forAllInExpression * p = (cPtr_forAllInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forAllInExpression) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @forAllInExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_forAllInExpression::cPtr_forAllInExpression (const GALGAS_domainFieldList & in_mArgumentList,
                                                  const GALGAS_expression & in_mExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mArgumentList (in_mArgumentList),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_forAllInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forAllInExpression ;
}

void cPtr_forAllInExpression::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@forAllInExpression:" ;
  mProperty_mArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forAllInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_forAllInExpression (mProperty_mArgumentList, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@forAllInExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forAllInExpression ("forAllInExpression",
                                           & kTypeDescriptor_GALGAS_expression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forAllInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forAllInExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forAllInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forAllInExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_forAllInExpression_2D_weak::objectCompare (const GALGAS_forAllInExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forAllInExpression_2D_weak::GALGAS_forAllInExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forAllInExpression_2D_weak & GALGAS_forAllInExpression_2D_weak::operator = (const GALGAS_forAllInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forAllInExpression_2D_weak::GALGAS_forAllInExpression_2D_weak (const GALGAS_forAllInExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forAllInExpression_2D_weak GALGAS_forAllInExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_forAllInExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forAllInExpression GALGAS_forAllInExpression_2D_weak::bang_forAllInExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_forAllInExpression result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forAllInExpression) ;
      result = GALGAS_forAllInExpression ((cPtr_forAllInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@forAllInExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forAllInExpression_2D_weak ("forAllInExpression-weak",
                                                   & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forAllInExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forAllInExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forAllInExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forAllInExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forAllInExpression_2D_weak GALGAS_forAllInExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_forAllInExpression_2D_weak result ;
  const GALGAS_forAllInExpression_2D_weak * p = (const GALGAS_forAllInExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forAllInExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forAllInExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison::GALGAS_comparison (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::constructor_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::constructor_notEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_notEqual ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::constructor_lowerOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_lowerOrEqual ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::constructor_lowerThan (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_lowerThan ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::constructor_greaterOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_greaterOrEqual ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::constructor_greaterThan (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_greaterThan ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_equal () const {
  const bool ok = mEnum == kEnum_equal ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_notEqual () const {
  const bool ok = mEnum == kEnum_notEqual ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_lowerOrEqual () const {
  const bool ok = mEnum == kEnum_lowerOrEqual ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_lowerThan () const {
  const bool ok = mEnum == kEnum_lowerThan ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_greaterOrEqual () const {
  const bool ok = mEnum == kEnum_greaterOrEqual ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_greaterThan () const {
  const bool ok = mEnum == kEnum_greaterThan ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_comparison [7] = {
  "(not built)",
  "equal",
  "notEqual",
  "lowerOrEqual",
  "lowerThan",
  "greaterOrEqual",
  "greaterThan"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isNotEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_notEqual == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isLowerOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lowerOrEqual == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isLowerThan (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lowerThan == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isGreaterOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greaterOrEqual == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isGreaterThan (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greaterThan == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparison::description (C_String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString << "<enum @comparison: " << gEnumNameArrayFor_comparison [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@comparison type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparison ("comparison",
                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparison::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparison ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparison::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparison (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_comparisonWithConstantInExpression_2D_weak::objectCompare (const GALGAS_comparisonWithConstantInExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonWithConstantInExpression_2D_weak::GALGAS_comparisonWithConstantInExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonWithConstantInExpression_2D_weak & GALGAS_comparisonWithConstantInExpression_2D_weak::operator = (const GALGAS_comparisonWithConstantInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonWithConstantInExpression_2D_weak::GALGAS_comparisonWithConstantInExpression_2D_weak (const GALGAS_comparisonWithConstantInExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonWithConstantInExpression_2D_weak GALGAS_comparisonWithConstantInExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_comparisonWithConstantInExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonWithConstantInExpression GALGAS_comparisonWithConstantInExpression_2D_weak::bang_comparisonWithConstantInExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_comparisonWithConstantInExpression result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_comparisonWithConstantInExpression) ;
      result = GALGAS_comparisonWithConstantInExpression ((cPtr_comparisonWithConstantInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@comparisonWithConstantInExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonWithConstantInExpression_2D_weak ("comparisonWithConstantInExpression-weak",
                                                                   & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonWithConstantInExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonWithConstantInExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonWithConstantInExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonWithConstantInExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonWithConstantInExpression_2D_weak GALGAS_comparisonWithConstantInExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_comparisonWithConstantInExpression_2D_weak result ;
  const GALGAS_comparisonWithConstantInExpression_2D_weak * p = (const GALGAS_comparisonWithConstantInExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparisonWithConstantInExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonWithConstantInExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_variableComparisonInExpression_2D_weak::objectCompare (const GALGAS_variableComparisonInExpression_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_variableComparisonInExpression_2D_weak::GALGAS_variableComparisonInExpression_2D_weak (void) :
GALGAS_expression_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_variableComparisonInExpression_2D_weak & GALGAS_variableComparisonInExpression_2D_weak::operator = (const GALGAS_variableComparisonInExpression & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_variableComparisonInExpression_2D_weak::GALGAS_variableComparisonInExpression_2D_weak (const GALGAS_variableComparisonInExpression & inSource) :
GALGAS_expression_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_variableComparisonInExpression_2D_weak GALGAS_variableComparisonInExpression_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_variableComparisonInExpression_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_variableComparisonInExpression GALGAS_variableComparisonInExpression_2D_weak::bang_variableComparisonInExpression_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_variableComparisonInExpression result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_variableComparisonInExpression) ;
      result = GALGAS_variableComparisonInExpression ((cPtr_variableComparisonInExpression *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@variableComparisonInExpression-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_variableComparisonInExpression_2D_weak ("variableComparisonInExpression-weak",
                                                               & kTypeDescriptor_GALGAS_expression_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_variableComparisonInExpression_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableComparisonInExpression_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_variableComparisonInExpression_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_variableComparisonInExpression_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_variableComparisonInExpression_2D_weak GALGAS_variableComparisonInExpression_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_variableComparisonInExpression_2D_weak result ;
  const GALGAS_variableComparisonInExpression_2D_weak * p = (const GALGAS_variableComparisonInExpression_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_variableComparisonInExpression_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("variableComparisonInExpression-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@expression computeExpression'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryset callExtensionGetter_computeExpression (const cPtr_expression * inObject,
                                                        const GALGAS_domainMap in_inDomainMap,
                                                        const GALGAS_varMap in_inVarMap,
                                                        const GALGAS_uint in_inTotalBitCount,
                                                        const GALGAS_computedFormulaMap in_inComputedFormulaMap,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_binaryset result ;
  if (nullptr != inObject) {
    result = inObject->getter_computeExpression (in_inDomainMap, in_inVarMap, in_inTotalBitCount, in_inComputedFormulaMap, inCompiler COMMA_THERE) ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_start_5F_symbol_i0_ (GALGAS_ast & outArgument_outAST,
                                                                          C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outAST.drop () ; // Release 'out' argument
  outArgument_outAST = GALGAS_ast::constructor_default (SOURCE_FILE ("grammar.ggs", 39)) ;
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
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_domain COMMA_SOURCE_FILE ("domain.ggs", 41)) ;
  GALGAS_lstring var_domainName_1732 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("domain.ggs", 43)) ;
  GALGAS_domainDeclarationType var_domainDeclarationType_1790 ;
  switch (select_kerbdd_5F_syntax_1 (inCompiler)) {
  case 1: {
    GALGAS_bddType var_type_1830 ;
    nt_type_ (var_type_1830, inCompiler) ;
    var_domainDeclarationType_1790 = GALGAS_domainDeclarationType::constructor_type (var_type_1830  COMMA_SOURCE_FILE ("domain.ggs", 47)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("domain.ggs", 49)) ;
    GALGAS_domainFieldList var_fieldList_1943 ;
    nt_recordFields_ (var_fieldList_1943, inCompiler) ;
    var_domainDeclarationType_1790 = GALGAS_domainDeclarationType::constructor_record (var_fieldList_1943  COMMA_SOURCE_FILE ("domain.ggs", 51)) ;
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("domain.ggs", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("domain.ggs", 54)) ;
  ioArgument_ioAST.mProperty_mDomainList.addAssign_operation (var_domainName_1732, var_domainDeclarationType_1790  COMMA_SOURCE_FILE ("domain.ggs", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i1_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_domain COMMA_SOURCE_FILE ("domain.ggs", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("domain.ggs", 43)) ;
  switch (select_kerbdd_5F_syntax_1 (inCompiler)) {
  case 1: {
    nt_type_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("domain.ggs", 49)) ;
    nt_recordFields_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("domain.ggs", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("domain.ggs", 54)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_recordFields_i2_ (GALGAS_domainFieldList & outArgument_outFormulaArgumentList,
                                                                       C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outFormulaArgumentList.drop () ; // Release 'out' argument
  outArgument_outFormulaArgumentList = GALGAS_domainFieldList::constructor_emptyList (SOURCE_FILE ("domain.ggs", 61)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_varName_2341 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 63)) ;
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("domain.ggs", 64)) ;
    GALGAS_bddType var_type_2381 ;
    nt_type_ (var_type_2381, inCompiler) ;
    outArgument_outFormulaArgumentList.addAssign_operation (var_varName_2341, var_type_2381  COMMA_SOURCE_FILE ("domain.ggs", 66)) ;
    switch (select_kerbdd_5F_syntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("domain.ggs", 68)) ;
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
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 63)) ;
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("domain.ggs", 64)) ;
    nt_type_parse (inCompiler) ;
    switch (select_kerbdd_5F_syntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("domain.ggs", 68)) ;
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
    GALGAS_lstring var_typeName_2649 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 76)) ;
    outArgument_outType = GALGAS_bddType::constructor_namedType (var_typeName_2649  COMMA_SOURCE_FILE ("domain.ggs", 77)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_bool COMMA_SOURCE_FILE ("domain.ggs", 79)) ;
    switch (select_kerbdd_5F_syntax_4 (inCompiler)) {
    case 1: {
      outArgument_outType = GALGAS_bddType::constructor_bool (SOURCE_FILE ("domain.ggs", 81)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("domain.ggs", 83)) ;
      GALGAS_luint var_bitCount_2793 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("domain.ggs", 84)) ;
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("domain.ggs", 85)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, var_bitCount_2793.readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (var_bitCount_2793.readProperty_location (), GALGAS_string ("size should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("domain.ggs", 87)) ;
        }
      }
      outArgument_outType = GALGAS_bddType::constructor_boolArray (var_bitCount_2793.readProperty_uint ()  COMMA_SOURCE_FILE ("domain.ggs", 89)) ;
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
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("domain.ggs", 76)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_bool COMMA_SOURCE_FILE ("domain.ggs", 79)) ;
    switch (select_kerbdd_5F_syntax_4 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("domain.ggs", 83)) ;
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("domain.ggs", 84)) ;
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("domain.ggs", 85)) ;
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
  GALGAS_lstring var_formulaName_1368 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-assignment.ggs", 28)) ;
  GALGAS_domainFieldList var_domainFieldList_1408 ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 30)) ;
  switch (select_kerbdd_5F_syntax_5 (inCompiler)) {
  case 1: {
    var_domainFieldList_1408 = GALGAS_domainFieldList::constructor_emptyList (SOURCE_FILE ("formula-assignment.ggs", 32)) ;
  } break ;
  case 2: {
    nt_recordFields_ (var_domainFieldList_1408, inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 36)) ;
  GALGAS_formulaKind var_kind_1527 ;
  switch (select_kerbdd_5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3A__3D_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 39)) ;
    var_kind_1527 = GALGAS_formulaKind::constructor_assignment (SOURCE_FILE ("formula-assignment.ggs", 40)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__2B__3D_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 42)) ;
    var_kind_1527 = GALGAS_formulaKind::constructor_fixedPoint (GALGAS_binaryset::constructor_emptyBinarySet (SOURCE_FILE ("formula-assignment.ggs", 43))  COMMA_SOURCE_FILE ("formula-assignment.ggs", 43)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__2D__3D_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 45)) ;
    var_kind_1527 = GALGAS_formulaKind::constructor_fixedPoint (GALGAS_binaryset::constructor_fullBinarySet (SOURCE_FILE ("formula-assignment.ggs", 46))  COMMA_SOURCE_FILE ("formula-assignment.ggs", 46)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_expression var_expression_1751 ;
  nt_expression_ (var_expression_1751, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 49)) ;
  ioArgument_ioAST.mProperty_mFormulaList.addAssign_operation (GALGAS_assignmentFormula::constructor_new (var_formulaName_1368, var_domainFieldList_1408, var_kind_1527, var_expression_1751  COMMA_SOURCE_FILE ("formula-assignment.ggs", 50))  COMMA_SOURCE_FILE ("formula-assignment.ggs", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i4_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-assignment.ggs", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 30)) ;
  switch (select_kerbdd_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_recordFields_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 36)) ;
  switch (select_kerbdd_5F_syntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3A__3D_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 39)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__2B__3D_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 42)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__2D__3D_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 45)) ;
  } break ;
  default:
    break ;
  }
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-assignment.ggs", 49)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i5_ (GALGAS_ast & ioArgument_ioAST,
                                                                              C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize COMMA_SOURCE_FILE ("setting-map.ggs", 24)) ;
  GALGAS_luint var_setting_1268 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("setting-map.ggs", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("setting-map.ggs", 26)) ;
  ioArgument_ioAST.mProperty_mFormulaList.addAssign_operation (GALGAS_setting_5F_nodeHashMapSize::constructor_new (var_setting_1268  COMMA_SOURCE_FILE ("setting-map.ggs", 27))  COMMA_SOURCE_FILE ("setting-map.ggs", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i5_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_nodeHashMapSize COMMA_SOURCE_FILE ("setting-map.ggs", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("setting-map.ggs", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("setting-map.ggs", 26)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i6_ (GALGAS_ast & ioArgument_ioAST,
                                                                              C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize COMMA_SOURCE_FILE ("setting-map.ggs", 33)) ;
  GALGAS_luint var_setting_1567 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("setting-map.ggs", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("setting-map.ggs", 35)) ;
  ioArgument_ioAST.mProperty_mFormulaList.addAssign_operation (GALGAS_setting_5F_andCacheMapSize::constructor_new (var_setting_1567  COMMA_SOURCE_FILE ("setting-map.ggs", 36))  COMMA_SOURCE_FILE ("setting-map.ggs", 36)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i6_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_andCacheMapSize COMMA_SOURCE_FILE ("setting-map.ggs", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("setting-map.ggs", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("setting-map.ggs", 35)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i7_ (GALGAS_ast & ioArgument_ioAST,
                                                                              C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_dump COMMA_SOURCE_FILE ("formula-dump.ggs", 18)) ;
  GALGAS_lstring var_formulaName_1052 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-dump.ggs", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-dump.ggs", 20)) ;
  ioArgument_ioAST.mProperty_mFormulaList.addAssign_operation (GALGAS_dumpFormula::constructor_new (var_formulaName_1052  COMMA_SOURCE_FILE ("formula-dump.ggs", 21))  COMMA_SOURCE_FILE ("formula-dump.ggs", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i7_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_dump COMMA_SOURCE_FILE ("formula-dump.ggs", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-dump.ggs", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-dump.ggs", 20)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i8_ (GALGAS_ast & ioArgument_ioAST,
                                                                              C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("formula-graphviz.ggs", 18)) ;
  GALGAS_lstring var_formulaName_1060 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-graphviz.ggs", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-graphviz.ggs", 20)) ;
  ioArgument_ioAST.mProperty_mFormulaList.addAssign_operation (GALGAS_graphvizFormula::constructor_new (var_formulaName_1060  COMMA_SOURCE_FILE ("formula-graphviz.ggs", 21))  COMMA_SOURCE_FILE ("formula-graphviz.ggs", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_topLevelDeClaration_i8_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("formula-graphviz.ggs", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("formula-graphviz.ggs", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("formula-graphviz.ggs", 20)) ;
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
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("expression.ggs", 149)) ;
    GALGAS_expression var_rightExpression_5445 ;
    nt_comparison_ (var_rightExpression_5445, inCompiler) ;
    outArgument_outExpression = GALGAS_equalExpression::constructor_new (outArgument_outExpression, var_rightExpression_5445  COMMA_SOURCE_FILE ("expression.ggs", 151)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("expression.ggs", 153)) ;
    GALGAS_expression var_rightExpression_5586 ;
    nt_comparison_ (var_rightExpression_5586, inCompiler) ;
    outArgument_outExpression = GALGAS_notEqualExpression::constructor_new (outArgument_outExpression, var_rightExpression_5586  COMMA_SOURCE_FILE ("expression.ggs", 155)) ;
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
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("expression.ggs", 149)) ;
    nt_comparison_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("expression.ggs", 153)) ;
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
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("expression.ggs", 165)) ;
      GALGAS_expression var_rightExpression_5941 ;
      nt_term_ (var_rightExpression_5941, inCompiler) ;
      outArgument_outExpression = GALGAS_orExpression::constructor_new (outArgument_outExpression, var_rightExpression_5941  COMMA_SOURCE_FILE ("expression.ggs", 167)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("expression.ggs", 169)) ;
      GALGAS_expression var_rightExpression_6075 ;
      nt_term_ (var_rightExpression_6075, inCompiler) ;
      outArgument_outExpression = GALGAS_xorExpression::constructor_new (outArgument_outExpression, var_rightExpression_6075  COMMA_SOURCE_FILE ("expression.ggs", 171)) ;
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
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("expression.ggs", 165)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("expression.ggs", 169)) ;
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
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("expression.ggs", 181)) ;
      GALGAS_expression var_rightExpression_6423 ;
      nt_factor_ (var_rightExpression_6423, inCompiler) ;
      outArgument_outExpression = GALGAS_andExpression::constructor_new (outArgument_outExpression, var_rightExpression_6423  COMMA_SOURCE_FILE ("expression.ggs", 183)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("expression.ggs", 185)) ;
      GALGAS_expression var_rightExpression_6561 ;
      nt_factor_ (var_rightExpression_6561, inCompiler) ;
      outArgument_outExpression = GALGAS_impliesExpression::constructor_new (outArgument_outExpression, var_rightExpression_6561  COMMA_SOURCE_FILE ("expression.ggs", 187)) ;
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
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("expression.ggs", 181)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__2D__3E_ COMMA_SOURCE_FILE ("expression.ggs", 185)) ;
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
  GALGAS_lstring var_varName_6844 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 194)) ;
  switch (select_kerbdd_5F_syntax_10 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_varInExpression::constructor_new (var_varName_6844  COMMA_SOURCE_FILE ("expression.ggs", 196)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 198)) ;
    GALGAS_luint var_varBit_6946 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression.ggs", 199)) ;
    outArgument_outExpression = GALGAS_varBitInExpression::constructor_new (var_varName_6844, var_varBit_6946  COMMA_SOURCE_FILE ("expression.ggs", 200)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i12_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 194)) ;
  switch (select_kerbdd_5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 198)) ;
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression.ggs", 199)) ;
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
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 207)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 209)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i13_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 207)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 209)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i14_ (GALGAS_expression & outArgument_outExpression,
                                                                  C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression.ggs", 215)) ;
  GALGAS_expression var_expression_7434 ;
  nt_factor_ (var_expression_7434, inCompiler) ;
  outArgument_outExpression = GALGAS_complementExpression::constructor_new (var_expression_7434  COMMA_SOURCE_FILE ("expression.ggs", 217)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i14_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__7E_ COMMA_SOURCE_FILE ("expression.ggs", 215)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i15_ (GALGAS_expression & outArgument_outExpression,
                                                                  C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_true COMMA_SOURCE_FILE ("expression.ggs", 223)) ;
  outArgument_outExpression = GALGAS_trueExpression::constructor_new (SOURCE_FILE ("expression.ggs", 224)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i15_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_true COMMA_SOURCE_FILE ("expression.ggs", 223)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i16_ (GALGAS_expression & outArgument_outExpression,
                                                                  C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_false COMMA_SOURCE_FILE ("expression.ggs", 230)) ;
  outArgument_outExpression = GALGAS_falseExpression::constructor_new (SOURCE_FILE ("expression.ggs", 231)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i16_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_false COMMA_SOURCE_FILE ("expression.ggs", 230)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i17_ (GALGAS_expression & outArgument_outExpression,
                                                                  C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_formulaName_8132 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 237)) ;
  GALGAS_formulaParameterListInExpression var_parameterList_8187 = GALGAS_formulaParameterListInExpression::constructor_emptyList (SOURCE_FILE ("expression.ggs", 238)) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 239)) ;
  switch (select_kerbdd_5F_syntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_parameterName_8262 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 243)) ;
      GALGAS_lstringlist var_fieldNames_8297 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("expression.ggs", 244)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_kerbdd_5F_syntax_13 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 247)) ;
          GALGAS_lstring var_fieldName_8376 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 248)) ;
          var_fieldNames_8297.addAssign_operation (var_fieldName_8376  COMMA_SOURCE_FILE ("expression.ggs", 249)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      var_parameterList_8187.addAssign_operation (var_parameterName_8262, var_fieldNames_8297  COMMA_SOURCE_FILE ("expression.ggs", 251)) ;
      switch (select_kerbdd_5F_syntax_12 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("expression.ggs", 253)) ;
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
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 256)) ;
  outArgument_outExpression = GALGAS_formulaInExpression::constructor_new (var_formulaName_8132, var_parameterList_8187  COMMA_SOURCE_FILE ("expression.ggs", 257)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i17_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 237)) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 239)) ;
  switch (select_kerbdd_5F_syntax_11 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 243)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_kerbdd_5F_syntax_13 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 247)) ;
          inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 248)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      switch (select_kerbdd_5F_syntax_12 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("expression.ggs", 253)) ;
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
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 256)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i18_ (GALGAS_expression & outArgument_outExpression,
                                                                  C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("expression.ggs", 263)) ;
  GALGAS_domainFieldList var_domainFieldList_8815 ;
  nt_recordFields_ (var_domainFieldList_8815, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 265)) ;
  GALGAS_expression var_expression_8854 ;
  nt_expression_ (var_expression_8854, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 267)) ;
  outArgument_outExpression = GALGAS_existInExpression::constructor_new (var_domainFieldList_8815, var_expression_8854  COMMA_SOURCE_FILE ("expression.ggs", 268)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i18_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3F_ COMMA_SOURCE_FILE ("expression.ggs", 263)) ;
  nt_recordFields_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 265)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 267)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i19_ (GALGAS_expression & outArgument_outExpression,
                                                                  C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("expression.ggs", 274)) ;
  GALGAS_domainFieldList var_domainFieldList_9165 ;
  nt_recordFields_ (var_domainFieldList_9165, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 276)) ;
  GALGAS_expression var_expression_9204 ;
  nt_expression_ (var_expression_9204, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 278)) ;
  outArgument_outExpression = GALGAS_forAllInExpression::constructor_new (var_domainFieldList_9165, var_expression_9204  COMMA_SOURCE_FILE ("expression.ggs", 279)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i19_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("expression.ggs", 274)) ;
  nt_recordFields_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("expression.ggs", 276)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("expression.ggs", 278)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i20_ (GALGAS_expression & outArgument_outExpression,
                                                                  C_Lexique_kerbdd_5F_lexique * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression.ggs", 284)) ;
  GALGAS_lstring var_varName_9488 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 285)) ;
  GALGAS_lstringlist var_leftFieldNames_9523 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("expression.ggs", 286)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 289)) ;
      GALGAS_lstring var_fieldName_9586 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 290)) ;
      var_leftFieldNames_9523.addAssign_operation (var_fieldName_9586  COMMA_SOURCE_FILE ("expression.ggs", 291)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_comparison var_comparison_9655 ;
  switch (select_kerbdd_5F_syntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("expression.ggs", 295)) ;
    var_comparison_9655 = GALGAS_comparison::constructor_equal (SOURCE_FILE ("expression.ggs", 296)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("expression.ggs", 298)) ;
    var_comparison_9655 = GALGAS_comparison::constructor_notEqual (SOURCE_FILE ("expression.ggs", 299)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression.ggs", 301)) ;
    var_comparison_9655 = GALGAS_comparison::constructor_lowerOrEqual (SOURCE_FILE ("expression.ggs", 302)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("expression.ggs", 304)) ;
    var_comparison_9655 = GALGAS_comparison::constructor_lowerThan (SOURCE_FILE ("expression.ggs", 305)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression.ggs", 307)) ;
    var_comparison_9655 = GALGAS_comparison::constructor_greaterOrEqual (SOURCE_FILE ("expression.ggs", 308)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("expression.ggs", 310)) ;
    var_comparison_9655 = GALGAS_comparison::constructor_greaterThan (SOURCE_FILE ("expression.ggs", 311)) ;
  } break ;
  default:
    break ;
  }
  switch (select_kerbdd_5F_syntax_16 (inCompiler)) {
  case 1: {
    GALGAS_luint var_constant_9957 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression.ggs", 314)) ;
    outArgument_outExpression = GALGAS_comparisonWithConstantInExpression::constructor_new (var_varName_9488, var_leftFieldNames_9523, var_comparison_9655, var_constant_9957  COMMA_SOURCE_FILE ("expression.ggs", 315)) ;
  } break ;
  case 2: {
    GALGAS_lstring var_rightVarName_10108 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 317)) ;
    GALGAS_lstringlist var_rightFieldNames_10146 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("expression.ggs", 318)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_kerbdd_5F_syntax_17 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 321)) ;
        GALGAS_lstring var_fieldName_10217 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 322)) ;
        var_rightFieldNames_10146.addAssign_operation (var_fieldName_10217  COMMA_SOURCE_FILE ("expression.ggs", 323)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    outArgument_outExpression = GALGAS_variableComparisonInExpression::constructor_new (var_varName_9488, var_leftFieldNames_9523, var_comparison_9655, var_rightVarName_10108, var_rightFieldNames_10146  COMMA_SOURCE_FILE ("expression.ggs", 325)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression.ggs", 327)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_kerbdd_5F_syntax::rule_kerbdd_5F_syntax_factor_i20_parse (C_Lexique_kerbdd_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("expression.ggs", 284)) ;
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 285)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_kerbdd_5F_syntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 289)) ;
      inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 290)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_kerbdd_5F_syntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("expression.ggs", 295)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("expression.ggs", 298)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression.ggs", 301)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("expression.ggs", 304)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression.ggs", 307)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("expression.ggs", 310)) ;
  } break ;
  default:
    break ;
  }
  switch (select_kerbdd_5F_syntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_integer COMMA_SOURCE_FILE ("expression.ggs", 314)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 317)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_kerbdd_5F_syntax_17 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("expression.ggs", 321)) ;
        inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("expression.ggs", 322)) ;
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
  inCompiler->acceptTerminal (C_Lexique_kerbdd_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("expression.ggs", 327)) ;
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@formulaList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_formulaList : public cCollectionElement {
  public: GALGAS_formulaList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_formulaList (const GALGAS_abstractFormula & in_mFormula
                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formulaList (const GALGAS_formulaList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_formulaList::cCollectionElement_formulaList (const GALGAS_abstractFormula & in_mFormula
                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormula) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_formulaList::cCollectionElement_formulaList (const GALGAS_formulaList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormula) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_formulaList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_formulaList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_formulaList (mObject.mProperty_mFormula COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_formulaList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormula" ":" ;
  mObject.mProperty_mFormula.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_formulaList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formulaList * operand = (cCollectionElement_formulaList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formulaList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaList::GALGAS_formulaList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaList::GALGAS_formulaList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaList GALGAS_formulaList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_formulaList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaList GALGAS_formulaList::constructor_listWithValue (const GALGAS_abstractFormula & inOperand0
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_formulaList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_formulaList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_formulaList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                    const GALGAS_abstractFormula & in_mFormula
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_formulaList * p = NULL ;
  macroMyNew (p, cCollectionElement_formulaList (in_mFormula COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaList::addAssign_operation (const GALGAS_abstractFormula & inOperand0
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formulaList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{ // Destroy receiver
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaList::setter_append (GALGAS_formulaList_2D_element inElement,
                                        C_Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formulaList (inElement COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      appendObject (attributes) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaList::setter_insertAtIndex (const GALGAS_abstractFormula inOperand0,
                                               const GALGAS_uint inInsertionIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_formulaList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaList::setter_removeAtIndex (GALGAS_abstractFormula & outOperand0,
                                               const GALGAS_uint inRemoveIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_formulaList * p = (cCollectionElement_formulaList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_formulaList) ;
        outOperand0 = p->mObject.mProperty_mFormula ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mFormula ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mFormula ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mFormula ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mFormula ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaList GALGAS_formulaList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formulaList result = GALGAS_formulaList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaList GALGAS_formulaList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formulaList result = GALGAS_formulaList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaList GALGAS_formulaList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_formulaList result = GALGAS_formulaList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaList::plusAssign_operation (const GALGAS_formulaList inOperand,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaList::setter_setMFormulaAtIndex (GALGAS_abstractFormula inOperand,
                                                    GALGAS_uint inIndex,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_formulaList * p = (cCollectionElement_formulaList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formulaList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormula = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFormula GALGAS_formulaList::getter_mFormulaAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formulaList * p = (cCollectionElement_formulaList *) attributes.ptr () ;
  GALGAS_abstractFormula result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_formulaList) ;
    result = p->mObject.mProperty_mFormula ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_formulaList::cEnumerator_formulaList (const GALGAS_formulaList & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaList_2D_element cEnumerator_formulaList::current (LOCATION_ARGS) const {
  const cCollectionElement_formulaList * p = (const cCollectionElement_formulaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formulaList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractFormula cEnumerator_formulaList::current_mFormula (LOCATION_ARGS) const {
  const cCollectionElement_formulaList * p = (const cCollectionElement_formulaList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formulaList) ;
  return p->mObject.mProperty_mFormula ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@formulaList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formulaList ("formulaList",
                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formulaList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formulaList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formulaList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ast::GALGAS_ast (void) :
mProperty_mDomainList (),
mProperty_mFormulaList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ast::~ GALGAS_ast (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ast::GALGAS_ast (const GALGAS_domainDeclarationList & inOperand0,
                        const GALGAS_formulaList & inOperand1) :
mProperty_mDomainList (inOperand0),
mProperty_mFormulaList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ast GALGAS_ast::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ast (GALGAS_domainDeclarationList::constructor_emptyList (HERE),
                     GALGAS_formulaList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ast GALGAS_ast::constructor_new (const GALGAS_domainDeclarationList & inOperand0,
                                        const GALGAS_formulaList & inOperand1 
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ast result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ast (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_ast::objectCompare (const GALGAS_ast & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDomainList.objectCompare (inOperand.mProperty_mDomainList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFormulaList.objectCompare (inOperand.mProperty_mFormulaList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ast::isValid (void) const {
  return mProperty_mDomainList.isValid () && mProperty_mFormulaList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ast::drop (void) {
  mProperty_mDomainList.drop () ;
  mProperty_mFormulaList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ast::description (C_String & ioString,
                              const int32_t inIndentation) const {
  ioString << "<struct @ast:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDomainList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFormulaList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@ast type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ast ("ast",
                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ast::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ast ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ast::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ast (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractFormula analyzeFormula'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeFormula (cPtr_abstractFormula * inObject,
                                         const GALGAS_string constin_inSourceFilePath,
                                         const GALGAS_domainMap constin_inDomainMap,
                                         GALGAS_computedFormulaMap & io_ioComputedFormulaMap,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractFormula) ;
    inObject->method_analyzeFormula (constin_inSourceFilePath, constin_inDomainMap, io_ioComputedFormulaMap, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList_2D_element::GALGAS_varList_2D_element (void) :
mProperty_mVarName (),
mProperty_mBitIndex (),
mProperty_mBitCount () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList_2D_element::~ GALGAS_varList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList_2D_element::GALGAS_varList_2D_element (const GALGAS_string & inOperand0,
                                                      const GALGAS_uint & inOperand1,
                                                      const GALGAS_uint & inOperand2) :
mProperty_mVarName (inOperand0),
mProperty_mBitIndex (inOperand1),
mProperty_mBitCount (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varList_2D_element GALGAS_varList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_varList_2D_element (GALGAS_string::constructor_default (HERE),
                                    GALGAS_uint::constructor_default (HERE),
                                    GALGAS_uint::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_varList_2D_element::objectCompare (const GALGAS_varList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mVarName.objectCompare (inOperand.mProperty_mVarName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitIndex.objectCompare (inOperand.mProperty_mBitIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitCount.objectCompare (inOperand.mProperty_mBitCount) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_varList_2D_element::isValid (void) const {
  return mProperty_mVarName.isValid () && mProperty_mBitIndex.isValid () && mProperty_mBitCount.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList_2D_element::drop (void) {
  mProperty_mVarName.drop () ;
  mProperty_mBitIndex.drop () ;
  mProperty_mBitCount.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varList_2D_element::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @varList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mVarName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@varList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varList_2D_element ("varList-element",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaList_2D_element::GALGAS_formulaList_2D_element (void) :
mProperty_mFormula () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaList_2D_element::~ GALGAS_formulaList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaList_2D_element::GALGAS_formulaList_2D_element (const GALGAS_abstractFormula & inOperand0) :
mProperty_mFormula (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaList_2D_element GALGAS_formulaList_2D_element::constructor_new (const GALGAS_abstractFormula & inOperand0 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formulaList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_formulaList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_formulaList_2D_element::objectCompare (const GALGAS_formulaList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFormula.objectCompare (inOperand.mProperty_mFormula) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_formulaList_2D_element::isValid (void) const {
  return mProperty_mFormula.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaList_2D_element::drop (void) {
  mProperty_mFormula.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaList_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @formulaList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFormula.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@formulaList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formulaList_2D_element ("formulaList-element",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formulaList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formulaList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formulaList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @assignmentFormula reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_assignmentFormula::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_assignmentFormula * p = (const cPtr_assignmentFormula *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_assignmentFormula) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormulaName.objectCompare (p->mProperty_mFormulaName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFormulaArgumentList.objectCompare (p->mProperty_mFormulaArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_assignmentFormula::objectCompare (const GALGAS_assignmentFormula & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentFormula::GALGAS_assignmentFormula (void) :
GALGAS_abstractFormula () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentFormula::GALGAS_assignmentFormula (const cPtr_assignmentFormula * inSourcePtr) :
GALGAS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentFormula) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentFormula::setter_setMFormulaName (GALGAS_lstring inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    p->mProperty_mFormulaName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentFormula::setter_setMFormulaArgumentList (GALGAS_domainFieldList inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    p->mProperty_mFormulaArgumentList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentFormula::setter_setMKind (GALGAS_formulaKind inValue
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_assignmentFormula::setter_setMExpression (GALGAS_expression inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_assignmentFormula::readProperty_mFormulaName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    return p->mProperty_mFormulaName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainFieldList GALGAS_assignmentFormula::readProperty_mFormulaArgumentList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_domainFieldList () ;
  }else{
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    return p->mProperty_mFormulaArgumentList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaKind GALGAS_assignmentFormula::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formulaKind () ;
  }else{
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expression GALGAS_assignmentFormula::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_expression () ;
  }else{
    cPtr_assignmentFormula * p = (cPtr_assignmentFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentFormula) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @assignmentFormula class
//----------------------------------------------------------------------------------------------------------------------

cPtr_assignmentFormula::cPtr_assignmentFormula (const GALGAS_lstring & in_mFormulaName,
                                                const GALGAS_domainFieldList & in_mFormulaArgumentList,
                                                const GALGAS_formulaKind & in_mKind,
                                                const GALGAS_expression & in_mExpression
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (THERE),
mProperty_mFormulaName (in_mFormulaName),
mProperty_mFormulaArgumentList (in_mFormulaArgumentList),
mProperty_mKind (in_mKind),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_assignmentFormula::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentFormula ;
}

void cPtr_assignmentFormula::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@assignmentFormula:" ;
  mProperty_mFormulaName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFormulaArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_assignmentFormula::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_assignmentFormula (mProperty_mFormulaName, mProperty_mFormulaArgumentList, mProperty_mKind, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@assignmentFormula type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentFormula ("assignmentFormula",
                                          & kTypeDescriptor_GALGAS_abstractFormula) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentFormula::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentFormula ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentFormula::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentFormula (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_assignmentFormula_2D_weak::objectCompare (const GALGAS_assignmentFormula_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentFormula_2D_weak::GALGAS_assignmentFormula_2D_weak (void) :
GALGAS_abstractFormula_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentFormula_2D_weak & GALGAS_assignmentFormula_2D_weak::operator = (const GALGAS_assignmentFormula & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentFormula_2D_weak::GALGAS_assignmentFormula_2D_weak (const GALGAS_assignmentFormula & inSource) :
GALGAS_abstractFormula_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentFormula_2D_weak GALGAS_assignmentFormula_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_assignmentFormula_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentFormula GALGAS_assignmentFormula_2D_weak::bang_assignmentFormula_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_assignmentFormula result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignmentFormula) ;
      result = GALGAS_assignmentFormula ((cPtr_assignmentFormula *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@assignmentFormula-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_assignmentFormula_2D_weak ("assignmentFormula-weak",
                                                  & kTypeDescriptor_GALGAS_abstractFormula_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_assignmentFormula_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentFormula_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_assignmentFormula_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_assignmentFormula_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_assignmentFormula_2D_weak GALGAS_assignmentFormula_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_assignmentFormula_2D_weak result ;
  const GALGAS_assignmentFormula_2D_weak * p = (const GALGAS_assignmentFormula_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_assignmentFormula_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentFormula-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @setting_5F_andCacheMapSize reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_setting_5F_andCacheMapSize::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_setting_5F_andCacheMapSize * p = (const cPtr_setting_5F_andCacheMapSize *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_setting_5F_andCacheMapSize) ;
  if (kOperandEqual == result) {
    result = mProperty_mSetting.objectCompare (p->mProperty_mSetting) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_setting_5F_andCacheMapSize::objectCompare (const GALGAS_setting_5F_andCacheMapSize & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_andCacheMapSize::GALGAS_setting_5F_andCacheMapSize (void) :
GALGAS_abstractFormula () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_andCacheMapSize GALGAS_setting_5F_andCacheMapSize::constructor_default (LOCATION_ARGS) {
  return GALGAS_setting_5F_andCacheMapSize::constructor_new (GALGAS_luint::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_andCacheMapSize::GALGAS_setting_5F_andCacheMapSize (const cPtr_setting_5F_andCacheMapSize * inSourcePtr) :
GALGAS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_setting_5F_andCacheMapSize) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_setting_5F_andCacheMapSize GALGAS_setting_5F_andCacheMapSize::constructor_new (const GALGAS_luint & inAttribute_mSetting
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_setting_5F_andCacheMapSize result ;
  if (inAttribute_mSetting.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_setting_5F_andCacheMapSize (inAttribute_mSetting COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_setting_5F_andCacheMapSize::setter_setMSetting (GALGAS_luint inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_setting_5F_andCacheMapSize * p = (cPtr_setting_5F_andCacheMapSize *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setting_5F_andCacheMapSize) ;
    p->mProperty_mSetting = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_setting_5F_andCacheMapSize::readProperty_mSetting (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_setting_5F_andCacheMapSize * p = (cPtr_setting_5F_andCacheMapSize *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setting_5F_andCacheMapSize) ;
    return p->mProperty_mSetting ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @setting_andCacheMapSize class
//----------------------------------------------------------------------------------------------------------------------

cPtr_setting_5F_andCacheMapSize::cPtr_setting_5F_andCacheMapSize (const GALGAS_luint & in_mSetting
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (THERE),
mProperty_mSetting (in_mSetting) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_setting_5F_andCacheMapSize::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize ;
}

void cPtr_setting_5F_andCacheMapSize::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@setting_andCacheMapSize:" ;
  mProperty_mSetting.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_setting_5F_andCacheMapSize::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_setting_5F_andCacheMapSize (mProperty_mSetting COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@setting_andCacheMapSize type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize ("setting_andCacheMapSize",
                                                   & kTypeDescriptor_GALGAS_abstractFormula) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_setting_5F_andCacheMapSize::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setting_5F_andCacheMapSize ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_setting_5F_andCacheMapSize::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setting_5F_andCacheMapSize (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @dumpFormula reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_dumpFormula::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dumpFormula * p = (const cPtr_dumpFormula *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dumpFormula) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormulaName.objectCompare (p->mProperty_mFormulaName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_dumpFormula::objectCompare (const GALGAS_dumpFormula & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dumpFormula::GALGAS_dumpFormula (void) :
GALGAS_abstractFormula () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dumpFormula GALGAS_dumpFormula::constructor_default (LOCATION_ARGS) {
  return GALGAS_dumpFormula::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dumpFormula::GALGAS_dumpFormula (const cPtr_dumpFormula * inSourcePtr) :
GALGAS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dumpFormula) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_dumpFormula GALGAS_dumpFormula::constructor_new (const GALGAS_lstring & inAttribute_mFormulaName
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_dumpFormula result ;
  if (inAttribute_mFormulaName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dumpFormula (inAttribute_mFormulaName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_dumpFormula::setter_setMFormulaName (GALGAS_lstring inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_dumpFormula * p = (cPtr_dumpFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dumpFormula) ;
    p->mProperty_mFormulaName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_dumpFormula::readProperty_mFormulaName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_dumpFormula * p = (cPtr_dumpFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dumpFormula) ;
    return p->mProperty_mFormulaName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @dumpFormula class
//----------------------------------------------------------------------------------------------------------------------

cPtr_dumpFormula::cPtr_dumpFormula (const GALGAS_lstring & in_mFormulaName
                                    COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (THERE),
mProperty_mFormulaName (in_mFormulaName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dumpFormula::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dumpFormula ;
}

void cPtr_dumpFormula::description (C_String & ioString,
                                    const int32_t inIndentation) const {
  ioString << "[@dumpFormula:" ;
  mProperty_mFormulaName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dumpFormula::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dumpFormula (mProperty_mFormulaName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@dumpFormula type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dumpFormula ("dumpFormula",
                                    & kTypeDescriptor_GALGAS_abstractFormula) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dumpFormula::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dumpFormula ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dumpFormula::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dumpFormula (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @graphvizFormula reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_graphvizFormula::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_graphvizFormula * p = (const cPtr_graphvizFormula *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_graphvizFormula) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormulaName.objectCompare (p->mProperty_mFormulaName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_graphvizFormula::objectCompare (const GALGAS_graphvizFormula & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphvizFormula::GALGAS_graphvizFormula (void) :
GALGAS_abstractFormula () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphvizFormula GALGAS_graphvizFormula::constructor_default (LOCATION_ARGS) {
  return GALGAS_graphvizFormula::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphvizFormula::GALGAS_graphvizFormula (const cPtr_graphvizFormula * inSourcePtr) :
GALGAS_abstractFormula (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_graphvizFormula) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphvizFormula GALGAS_graphvizFormula::constructor_new (const GALGAS_lstring & inAttribute_mFormulaName
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_graphvizFormula result ;
  if (inAttribute_mFormulaName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_graphvizFormula (inAttribute_mFormulaName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphvizFormula::setter_setMFormulaName (GALGAS_lstring inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_graphvizFormula * p = (cPtr_graphvizFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphvizFormula) ;
    p->mProperty_mFormulaName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_graphvizFormula::readProperty_mFormulaName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_graphvizFormula * p = (cPtr_graphvizFormula *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphvizFormula) ;
    return p->mProperty_mFormulaName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @graphvizFormula class
//----------------------------------------------------------------------------------------------------------------------

cPtr_graphvizFormula::cPtr_graphvizFormula (const GALGAS_lstring & in_mFormulaName
                                            COMMA_LOCATION_ARGS) :
cPtr_abstractFormula (THERE),
mProperty_mFormulaName (in_mFormulaName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_graphvizFormula::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphvizFormula ;
}

void cPtr_graphvizFormula::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@graphvizFormula:" ;
  mProperty_mFormulaName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_graphvizFormula::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_graphvizFormula (mProperty_mFormulaName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@graphvizFormula type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphvizFormula ("graphvizFormula",
                                        & kTypeDescriptor_GALGAS_abstractFormula) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphvizFormula::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphvizFormula ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphvizFormula::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphvizFormula (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @varInExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_varInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varInExpression * p = (const cPtr_varInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varInExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_varInExpression::objectCompare (const GALGAS_varInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpression::GALGAS_varInExpression (void) :
GALGAS_expression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpression GALGAS_varInExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_varInExpression::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpression::GALGAS_varInExpression (const cPtr_varInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_varInExpression GALGAS_varInExpression::constructor_new (const GALGAS_lstring & inAttribute_mVarName
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_varInExpression result ;
  if (inAttribute_mVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varInExpression (inAttribute_mVarName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varInExpression::setter_setMVarName (GALGAS_lstring inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_varInExpression * p = (cPtr_varInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpression) ;
    p->mProperty_mVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_varInExpression::readProperty_mVarName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_varInExpression * p = (cPtr_varInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpression) ;
    return p->mProperty_mVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @varInExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_varInExpression::cPtr_varInExpression (const GALGAS_lstring & in_mVarName
                                            COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mVarName (in_mVarName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpression ;
}

void cPtr_varInExpression::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@varInExpression:" ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varInExpression (mProperty_mVarName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@varInExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varInExpression ("varInExpression",
                                        & kTypeDescriptor_GALGAS_expression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varInExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @varBitInExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_varBitInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_varBitInExpression * p = (const cPtr_varBitInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_varBitInExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVarBit.objectCompare (p->mProperty_mVarBit) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_varBitInExpression::objectCompare (const GALGAS_varBitInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varBitInExpression::GALGAS_varBitInExpression (void) :
GALGAS_expression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varBitInExpression GALGAS_varBitInExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_varBitInExpression::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_luint::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_varBitInExpression::GALGAS_varBitInExpression (const cPtr_varBitInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varBitInExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_varBitInExpression GALGAS_varBitInExpression::constructor_new (const GALGAS_lstring & inAttribute_mVarName,
                                                                      const GALGAS_luint & inAttribute_mVarBit
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_varBitInExpression result ;
  if (inAttribute_mVarName.isValid () && inAttribute_mVarBit.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_varBitInExpression (inAttribute_mVarName, inAttribute_mVarBit COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varBitInExpression::setter_setMVarName (GALGAS_lstring inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_varBitInExpression * p = (cPtr_varBitInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varBitInExpression) ;
    p->mProperty_mVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_varBitInExpression::setter_setMVarBit (GALGAS_luint inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_varBitInExpression * p = (cPtr_varBitInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varBitInExpression) ;
    p->mProperty_mVarBit = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_varBitInExpression::readProperty_mVarName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_varBitInExpression * p = (cPtr_varBitInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varBitInExpression) ;
    return p->mProperty_mVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_varBitInExpression::readProperty_mVarBit (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_varBitInExpression * p = (cPtr_varBitInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varBitInExpression) ;
    return p->mProperty_mVarBit ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @varBitInExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_varBitInExpression::cPtr_varBitInExpression (const GALGAS_lstring & in_mVarName,
                                                  const GALGAS_luint & in_mVarBit
                                                  COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mVarName (in_mVarName),
mProperty_mVarBit (in_mVarBit) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_varBitInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varBitInExpression ;
}

void cPtr_varBitInExpression::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@varBitInExpression:" ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVarBit.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_varBitInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_varBitInExpression (mProperty_mVarName, mProperty_mVarBit COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@varBitInExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_varBitInExpression ("varBitInExpression",
                                           & kTypeDescriptor_GALGAS_expression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_varBitInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varBitInExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_varBitInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_varBitInExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @formulaInExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_formulaInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_formulaInExpression * p = (const cPtr_formulaInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_formulaInExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mFormulaName.objectCompare (p->mProperty_mFormulaName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mParameterList.objectCompare (p->mProperty_mParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_formulaInExpression::objectCompare (const GALGAS_formulaInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaInExpression::GALGAS_formulaInExpression (void) :
GALGAS_expression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaInExpression GALGAS_formulaInExpression::constructor_default (LOCATION_ARGS) {
  return GALGAS_formulaInExpression::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_formulaParameterListInExpression::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaInExpression::GALGAS_formulaInExpression (const cPtr_formulaInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_formulaInExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaInExpression GALGAS_formulaInExpression::constructor_new (const GALGAS_lstring & inAttribute_mFormulaName,
                                                                        const GALGAS_formulaParameterListInExpression & inAttribute_mParameterList
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_formulaInExpression result ;
  if (inAttribute_mFormulaName.isValid () && inAttribute_mParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_formulaInExpression (inAttribute_mFormulaName, inAttribute_mParameterList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaInExpression::setter_setMFormulaName (GALGAS_lstring inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_formulaInExpression * p = (cPtr_formulaInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_formulaInExpression) ;
    p->mProperty_mFormulaName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_formulaInExpression::setter_setMParameterList (GALGAS_formulaParameterListInExpression inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_formulaInExpression * p = (cPtr_formulaInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_formulaInExpression) ;
    p->mProperty_mParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formulaInExpression::readProperty_mFormulaName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_formulaInExpression * p = (cPtr_formulaInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_formulaInExpression) ;
    return p->mProperty_mFormulaName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formulaParameterListInExpression GALGAS_formulaInExpression::readProperty_mParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formulaParameterListInExpression () ;
  }else{
    cPtr_formulaInExpression * p = (cPtr_formulaInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_formulaInExpression) ;
    return p->mProperty_mParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @formulaInExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_formulaInExpression::cPtr_formulaInExpression (const GALGAS_lstring & in_mFormulaName,
                                                    const GALGAS_formulaParameterListInExpression & in_mParameterList
                                                    COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mFormulaName (in_mFormulaName),
mProperty_mParameterList (in_mParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_formulaInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaInExpression ;
}

void cPtr_formulaInExpression::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@formulaInExpression:" ;
  mProperty_mFormulaName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_formulaInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_formulaInExpression (mProperty_mFormulaName, mProperty_mParameterList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@formulaInExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_formulaInExpression ("formulaInExpression",
                                            & kTypeDescriptor_GALGAS_expression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formulaInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formulaInExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formulaInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formulaInExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @comparisonWithConstantInExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_comparisonWithConstantInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_comparisonWithConstantInExpression * p = (const cPtr_comparisonWithConstantInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mVarName.objectCompare (p->mProperty_mVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFieldNames.objectCompare (p->mProperty_mFieldNames) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mComparison.objectCompare (p->mProperty_mComparison) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstant.objectCompare (p->mProperty_mConstant) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_comparisonWithConstantInExpression::objectCompare (const GALGAS_comparisonWithConstantInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonWithConstantInExpression::GALGAS_comparisonWithConstantInExpression (void) :
GALGAS_expression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonWithConstantInExpression::GALGAS_comparisonWithConstantInExpression (const cPtr_comparisonWithConstantInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonWithConstantInExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonWithConstantInExpression::setter_setMVarName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    p->mProperty_mVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonWithConstantInExpression::setter_setMFieldNames (GALGAS_lstringlist inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    p->mProperty_mFieldNames = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonWithConstantInExpression::setter_setMComparison (GALGAS_comparison inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    p->mProperty_mComparison = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonWithConstantInExpression::setter_setMConstant (GALGAS_luint inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    p->mProperty_mConstant = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_comparisonWithConstantInExpression::readProperty_mVarName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    return p->mProperty_mVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_comparisonWithConstantInExpression::readProperty_mFieldNames (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    return p->mProperty_mFieldNames ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparisonWithConstantInExpression::readProperty_mComparison (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_comparison () ;
  }else{
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    return p->mProperty_mComparison ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_comparisonWithConstantInExpression::readProperty_mConstant (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_comparisonWithConstantInExpression * p = (cPtr_comparisonWithConstantInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonWithConstantInExpression) ;
    return p->mProperty_mConstant ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @comparisonWithConstantInExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_comparisonWithConstantInExpression::cPtr_comparisonWithConstantInExpression (const GALGAS_lstring & in_mVarName,
                                                                                  const GALGAS_lstringlist & in_mFieldNames,
                                                                                  const GALGAS_comparison & in_mComparison,
                                                                                  const GALGAS_luint & in_mConstant
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mVarName (in_mVarName),
mProperty_mFieldNames (in_mFieldNames),
mProperty_mComparison (in_mComparison),
mProperty_mConstant (in_mConstant) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_comparisonWithConstantInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonWithConstantInExpression ;
}

void cPtr_comparisonWithConstantInExpression::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@comparisonWithConstantInExpression:" ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFieldNames.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mComparison.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstant.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_comparisonWithConstantInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_comparisonWithConstantInExpression (mProperty_mVarName, mProperty_mFieldNames, mProperty_mComparison, mProperty_mConstant COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@comparisonWithConstantInExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonWithConstantInExpression ("comparisonWithConstantInExpression",
                                                           & kTypeDescriptor_GALGAS_expression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonWithConstantInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonWithConstantInExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonWithConstantInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonWithConstantInExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
// @variableComparisonInExpression reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_variableComparisonInExpression::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_variableComparisonInExpression * p = (const cPtr_variableComparisonInExpression *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftVarName.objectCompare (p->mProperty_mLeftVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftFieldNames.objectCompare (p->mProperty_mLeftFieldNames) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mComparison.objectCompare (p->mProperty_mComparison) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightVarName.objectCompare (p->mProperty_mRightVarName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightFieldNames.objectCompare (p->mProperty_mRightFieldNames) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_variableComparisonInExpression::objectCompare (const GALGAS_variableComparisonInExpression & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_variableComparisonInExpression::GALGAS_variableComparisonInExpression (void) :
GALGAS_expression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_variableComparisonInExpression::GALGAS_variableComparisonInExpression (const cPtr_variableComparisonInExpression * inSourcePtr) :
GALGAS_expression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_variableComparisonInExpression) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_variableComparisonInExpression::setter_setMLeftVarName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    p->mProperty_mLeftVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_variableComparisonInExpression::setter_setMLeftFieldNames (GALGAS_lstringlist inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    p->mProperty_mLeftFieldNames = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_variableComparisonInExpression::setter_setMComparison (GALGAS_comparison inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    p->mProperty_mComparison = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_variableComparisonInExpression::setter_setMRightVarName (GALGAS_lstring inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    p->mProperty_mRightVarName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_variableComparisonInExpression::setter_setMRightFieldNames (GALGAS_lstringlist inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    p->mProperty_mRightFieldNames = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_variableComparisonInExpression::readProperty_mLeftVarName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    return p->mProperty_mLeftVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_variableComparisonInExpression::readProperty_mLeftFieldNames (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    return p->mProperty_mLeftFieldNames ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_variableComparisonInExpression::readProperty_mComparison (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_comparison () ;
  }else{
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    return p->mProperty_mComparison ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_variableComparisonInExpression::readProperty_mRightVarName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    return p->mProperty_mRightVarName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_variableComparisonInExpression::readProperty_mRightFieldNames (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_variableComparisonInExpression * p = (cPtr_variableComparisonInExpression *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_variableComparisonInExpression) ;
    return p->mProperty_mRightFieldNames ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @variableComparisonInExpression class
//----------------------------------------------------------------------------------------------------------------------

cPtr_variableComparisonInExpression::cPtr_variableComparisonInExpression (const GALGAS_lstring & in_mLeftVarName,
                                                                          const GALGAS_lstringlist & in_mLeftFieldNames,
                                                                          const GALGAS_comparison & in_mComparison,
                                                                          const GALGAS_lstring & in_mRightVarName,
                                                                          const GALGAS_lstringlist & in_mRightFieldNames
                                                                          COMMA_LOCATION_ARGS) :
cPtr_expression (THERE),
mProperty_mLeftVarName (in_mLeftVarName),
mProperty_mLeftFieldNames (in_mLeftFieldNames),
mProperty_mComparison (in_mComparison),
mProperty_mRightVarName (in_mRightVarName),
mProperty_mRightFieldNames (in_mRightFieldNames) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_variableComparisonInExpression::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableComparisonInExpression ;
}

void cPtr_variableComparisonInExpression::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@variableComparisonInExpression:" ;
  mProperty_mLeftVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftFieldNames.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mComparison.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightVarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightFieldNames.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_variableComparisonInExpression::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_variableComparisonInExpression (mProperty_mLeftVarName, mProperty_mLeftFieldNames, mProperty_mComparison, mProperty_mRightVarName, mProperty_mRightFieldNames COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@variableComparisonInExpression type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_variableComparisonInExpression ("variableComparisonInExpression",
                                                       & kTypeDescriptor_GALGAS_expression) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_variableComparisonInExpression::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_variableComparisonInExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_variableComparisonInExpression::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_variableComparisonInExpression (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       N O N    T E R M I N A L    N A M E S                                          
//                                                                                                                      
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
//                                                                                                                      
//                                S L R    A N A L Y Z E R    A C T I O N    T A B L E                                  
//                                                                                                                      
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
//                                                                                                                      
//                                            SLR states successors table                                               
//                                                                                                                      
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
//                                                                                                                      
//                          Production rules infos (left non terminal, size of right string)                            
//                                                                                                                      
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
//                                                                                                                      
//                                     'start_symbol' non terminal implementation                                       
//                                                                                                                      
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
  macroMyNew (scanner, C_Lexique_kerbdd_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_kerbdd_5F_grammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_kerbdd_5F_lexique * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_kerbdd_5F_lexique (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performBottomUpParsing (gActionTable_kerbdd_grammar, gNonTerminalNames_kerbdd_grammar,
                                     gActionTableIndex_kerbdd_grammar, gSuccessorTable_kerbdd_grammar,
                                     gProductionsTable_kerbdd_grammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_kerbdd_5F_grammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_ast &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.readProperty_string () ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
      C_Lexique_kerbdd_5F_lexique * scanner = NULL ;
      macroMyNew (scanner, C_Lexique_kerbdd_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
      if (scanner->sourceText ().isValid ()) {
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
        const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'topLevelDeClaration' non terminal implementation                                    
//                                                                                                                      
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
//                                                                                                                      
//                                     'recordFields' non terminal implementation                                       
//                                                                                                                      
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
//                                                                                                                      
//                                         'type' non terminal implementation                                           
//                                                                                                                      
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
//                                                                                                                      
//                                      'expression' non terminal implementation                                        
//                                                                                                                      
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
//                                                                                                                      
//                                      'comparison' non terminal implementation                                        
//                                                                                                                      
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
//                                                                                                                      
//                                         'term' non terminal implementation                                           
//                                                                                                                      
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
//                                                                                                                      
//                                        'factor' non terminal implementation                                          
//                                                                                                                      
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
//                                                                                                                      
//                              'select_kerbdd_5F_syntax_0' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_0 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 21 22
  return inLexique->nextProductionIndex () - 20 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_kerbdd_5F_syntax_1' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_1 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 23 24
  return inLexique->nextProductionIndex () - 22 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_kerbdd_5F_syntax_2' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_2 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 25 26
  return inLexique->nextProductionIndex () - 24 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_kerbdd_5F_syntax_3' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_3 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 27 28
  return inLexique->nextProductionIndex () - 26 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_kerbdd_5F_syntax_4' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_4 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 29 30
  return inLexique->nextProductionIndex () - 28 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_kerbdd_5F_syntax_5' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_5 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 31 32
  return inLexique->nextProductionIndex () - 30 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_kerbdd_5F_syntax_6' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_6 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 33 34 35
  return inLexique->nextProductionIndex () - 32 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_kerbdd_5F_syntax_7' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_7 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 36 37 38
  return inLexique->nextProductionIndex () - 35 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_kerbdd_5F_syntax_8' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_8 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 39 40 41
  return inLexique->nextProductionIndex () - 38 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_kerbdd_5F_syntax_9' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_9 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 42 43 44
  return inLexique->nextProductionIndex () - 41 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_kerbdd_5F_syntax_10' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_10 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 45 46
  return inLexique->nextProductionIndex () - 44 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_kerbdd_5F_syntax_11' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_11 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 47 48
  return inLexique->nextProductionIndex () - 46 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_kerbdd_5F_syntax_12' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_12 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 49 50
  return inLexique->nextProductionIndex () - 48 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_kerbdd_5F_syntax_13' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_13 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 51 52
  return inLexique->nextProductionIndex () - 50 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_kerbdd_5F_syntax_14' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_14 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 53 54
  return inLexique->nextProductionIndex () - 52 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_kerbdd_5F_syntax_15' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_15 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 55 56 57 58 59 60
  return inLexique->nextProductionIndex () - 54 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_kerbdd_5F_syntax_16' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_16 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 61 62
  return inLexique->nextProductionIndex () - 60 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'select_kerbdd_5F_syntax_17' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_kerbdd_5F_grammar::select_kerbdd_5F_syntax_17 (C_Lexique_kerbdd_5F_lexique * inLexique) {
// Productions numbers : 63 64
  return inLexique->nextProductionIndex () - 62 ;
}

//---------------------------------------------------------------------------------------------------------------------*

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainFieldList_2D_element::GALGAS_domainFieldList_2D_element (void) :
mProperty_mVarName (),
mProperty_mType () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainFieldList_2D_element::~ GALGAS_domainFieldList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainFieldList_2D_element::GALGAS_domainFieldList_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_bddType & inOperand1) :
mProperty_mVarName (inOperand0),
mProperty_mType (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainFieldList_2D_element GALGAS_domainFieldList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_bddType & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_domainFieldList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_domainFieldList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_domainFieldList_2D_element::objectCompare (const GALGAS_domainFieldList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mVarName.objectCompare (inOperand.mProperty_mVarName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_domainFieldList_2D_element::isValid (void) const {
  return mProperty_mVarName.isValid () && mProperty_mType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainFieldList_2D_element::drop (void) {
  mProperty_mVarName.drop () ;
  mProperty_mType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainFieldList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @domainFieldList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mVarName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@domainFieldList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_domainFieldList_2D_element ("domainFieldList-element",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_domainFieldList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainFieldList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_domainFieldList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainFieldList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList_2D_element::GALGAS_domainDeclarationList_2D_element (void) :
mProperty_mDomainName (),
mProperty_mType () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList_2D_element::~ GALGAS_domainDeclarationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList_2D_element::GALGAS_domainDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_domainDeclarationType & inOperand1) :
mProperty_mDomainName (inOperand0),
mProperty_mType (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainDeclarationList_2D_element GALGAS_domainDeclarationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_domainDeclarationType & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_domainDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_domainDeclarationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_domainDeclarationList_2D_element::objectCompare (const GALGAS_domainDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDomainName.objectCompare (inOperand.mProperty_mDomainName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_domainDeclarationList_2D_element::isValid (void) const {
  return mProperty_mDomainName.isValid () && mProperty_mType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationList_2D_element::drop (void) {
  mProperty_mDomainName.drop () ;
  mProperty_mType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainDeclarationList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @domainDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDomainName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@domainDeclarationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_domainDeclarationList_2D_element ("domainDeclarationList-element",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_domainDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainDeclarationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_domainDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap_2D_element::GALGAS_recordDomainMap_2D_element (void) :
mProperty_lkey (),
mProperty_mIndex (),
mProperty_mBitCount (),
mProperty_mSubDomain () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap_2D_element::~ GALGAS_recordDomainMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap_2D_element::GALGAS_recordDomainMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_uint & inOperand1,
                                                                      const GALGAS_uint & inOperand2,
                                                                      const GALGAS_recordDomainMap & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1),
mProperty_mBitCount (inOperand2),
mProperty_mSubDomain (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_recordDomainMap_2D_element GALGAS_recordDomainMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_recordDomainMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE),
                                            GALGAS_uint::constructor_default (HERE),
                                            GALGAS_recordDomainMap::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_recordDomainMap_2D_element::objectCompare (const GALGAS_recordDomainMap_2D_element & inOperand) const {
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
    result = mProperty_mSubDomain.objectCompare (inOperand.mProperty_mSubDomain) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_recordDomainMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () && mProperty_mBitCount.isValid () && mProperty_mSubDomain.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_recordDomainMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
  mProperty_mBitCount.drop () ;
  mProperty_mSubDomain.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_recordDomainMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @recordDomainMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSubDomain.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@recordDomainMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_recordDomainMap_2D_element ("recordDomainMap-element",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_recordDomainMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_recordDomainMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_recordDomainMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_recordDomainMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainMap_2D_element::GALGAS_domainMap_2D_element (void) :
mProperty_lkey (),
mProperty_mBitCount (),
mProperty_mRecordMap () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainMap_2D_element::~ GALGAS_domainMap_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainMap_2D_element::GALGAS_domainMap_2D_element (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_uint & inOperand1,
                                                          const GALGAS_recordDomainMap & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mBitCount (inOperand1),
mProperty_mRecordMap (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_domainMap_2D_element GALGAS_domainMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_domainMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                      GALGAS_uint::constructor_default (HERE),
                                      GALGAS_recordDomainMap::constructor_emptyMap (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_domainMap_2D_element::objectCompare (const GALGAS_domainMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBitCount.objectCompare (inOperand.mProperty_mBitCount) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRecordMap.objectCompare (inOperand.mProperty_mRecordMap) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_domainMap_2D_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mBitCount.isValid () && mProperty_mRecordMap.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainMap_2D_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mBitCount.drop () ;
  mProperty_mRecordMap.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_domainMap_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @domainMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBitCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRecordMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@domainMap-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_domainMap_2D_element ("domainMap-element",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_domainMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_domainMap_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_domainMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_domainMap_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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
//@varMap-element type
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
//@computedFormulaMap-element type
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

GALGAS_formulaParameterListInExpression_2D_element GALGAS_formulaParameterListInExpression_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_lstringlist & inOperand1 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formulaParameterListInExpression_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_formulaParameterListInExpression_2D_element (inOperand0, inOperand1) ;
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
//@formulaParameterListInExpression-element type
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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
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
//@setting_nodeHashMapSize type
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
