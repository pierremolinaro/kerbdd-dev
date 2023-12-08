//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "lexique-kerbdd-5F-lexique-cocoa.h"
#import "PMDebug.h"

//----------------------------------------------------------------------------------------------------------------------

@implementation OC_Lexique_kerbdd_lexique

//----------------------------------------------------------------------------------------------------------------------
//
//                           Template Replacements
//
//----------------------------------------------------------------------------------------------------------------------



//----------------------------------------------------------------------------------------------------------------------
//
//                           Template Delimiters
//
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------

- (instancetype) init {
  self = [super init] ;
  if (self) {
    noteObjectAllocation (self) ;
    mLexicalAttribute_tokenString = [[NSMutableString alloc] init] ;
    mLexicalAttribute_uint32value = 0 ;
  }
  return self ;
}

//----------------------------------------------------------------------------------------------------------------------

- (void) dealloc {
  noteObjectDeallocation (self) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//                 I N D E X I N G    T I T L E S
//
//----------------------------------------------------------------------------------------------------------------------

- (NSArray *) indexingTitles { // Array of NSString

  return [NSArray array] ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//            Terminal Symbols as end of script in template mark
//
//----------------------------------------------------------------------------------------------------------------------



//----------------------------------------------------------------------------------------------------------------------
//
//             Key words table 'keyWordList'      
//
//----------------------------------------------------------------------------------------------------------------------

static const C_cocoa_lexique_table_entry ktable_for_kerbdd_5F_lexique_keyWordList [10] = {
  {"bool", kerbdd_lexique_1_bool},
  {"dump", kerbdd_lexique_1_dump},
  {"true", kerbdd_lexique_1_true},
  {"false", kerbdd_lexique_1_false},
  {"domain", kerbdd_lexique_1_domain},
  {"display", kerbdd_lexique_1_display},
  {"include", kerbdd_lexique_1_include},
  {"graphviz", kerbdd_lexique_1_graphviz},
  {"andCacheMapSize", kerbdd_lexique_1_andCacheMapSize},
  {"nodeHashMapSize", kerbdd_lexique_1_nodeHashMapSize}
} ;

static NSInteger search_into_kerbdd_5F_lexique_keyWordList (NSString * inSearchedString) {
  return searchStringInTable (inSearchedString, ktable_for_kerbdd_5F_lexique_keyWordList, 10) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//               I N T E R N A L    P A R S E    L E X I C A L    T O K E N
//
//----------------------------------------------------------------------------------------------------------------------

- (BOOL) internalParseLexicalTokenForLexicalColoring {
  BOOL scanningOk = YES ;
  [mLexicalAttribute_tokenString setString:@""] ;
  mLexicalAttribute_uint32value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90])) {
    BOOL loop903 = YES ;
    do {
      scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      if (scanningOk && ([self testForInputFromChar:97 toChar:122] || [self testForInputFromChar:65 toChar:90] || [self testForInputChar:95] || [self testForInputFromChar:48 toChar:57])) {
      }else{
        loop903 = NO ;
      }
    }while (loop903 && scanningOk) ;
    if (mTokenCode == 0) {
      mTokenCode = search_into_kerbdd_5F_lexique_keyWordList (mLexicalAttribute_tokenString) ;
    }
    if (mTokenCode == 0) {
      mTokenCode = kerbdd_lexique_1_identifier ;
    }
  }else if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
    scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
    BOOL loop1774 = YES ;
    do {
      if (scanningOk && ([self testForInputFromChar:48 toChar:57])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      }else if (scanningOk && ([self testForInputChar:95])) {
      }else{
        loop1774 = NO ;
      }
    }while (loop1774 && scanningOk) ;
    scanner_cocoa_routine_convertDecimalStringIntoUInt (& scanningOk, mLexicalAttribute_tokenString, & mLexicalAttribute_uint32value) ;
    mTokenCode = kerbdd_lexique_1_integer ;
  }else if (scanningOk && ([self testForInputChar:34])) {
    BOOL loop2601 = YES ;
    do {
      if (scanningOk && ([self testForInputChar:32] || [self testForInputChar:33] || [self testForInputFromChar:35 toChar:65533])) {
        scanner_cocoa_routine_enterCharacterIntoString (& scanningOk, mLexicalAttribute_tokenString, mPreviousChar) ;
      }else{
        loop2601 = NO ;
      }
    }while (loop2601 && scanningOk) ;
    if (scanningOk && ([self testForInputChar:34])) {
      mTokenCode = kerbdd_lexique_1_literal_5F_string ;
    }else{
      scanningOk = NO ;
    }
  }else if (scanningOk && [self testForInputString:@">=" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__3E__3D_ ;
  }else if (scanningOk && [self testForInputString:@"<=" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__3C__3D_ ;
  }else if (scanningOk && [self testForInputString:@":=" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__3A__3D_ ;
  }else if (scanningOk && [self testForInputString:@".." advance:YES]) {
    mTokenCode = kerbdd_lexique_1__2E__2E_ ;
  }else if (scanningOk && [self testForInputString:@"->" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__2D__3E_ ;
  }else if (scanningOk && [self testForInputString:@"-=" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__2D__3D_ ;
  }else if (scanningOk && [self testForInputString:@"+=" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__2B__3D_ ;
  }else if (scanningOk && [self testForInputString:@"!=" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__21__3D_ ;
  }else if (scanningOk && [self testForInputString:@"~" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__7E_ ;
  }else if (scanningOk && [self testForInputString:@"}" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__7D_ ;
  }else if (scanningOk && [self testForInputString:@"|" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__7C_ ;
  }else if (scanningOk && [self testForInputString:@"{" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__7B_ ;
  }else if (scanningOk && [self testForInputString:@"^" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__5E_ ;
  }else if (scanningOk && [self testForInputString:@"]" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__5D_ ;
  }else if (scanningOk && [self testForInputString:@"[" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__5B_ ;
  }else if (scanningOk && [self testForInputString:@"\?" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__3F_ ;
  }else if (scanningOk && [self testForInputString:@">" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__3E_ ;
  }else if (scanningOk && [self testForInputString:@"=" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__3D_ ;
  }else if (scanningOk && [self testForInputString:@"<" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__3C_ ;
  }else if (scanningOk && [self testForInputString:@";" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__3B_ ;
  }else if (scanningOk && [self testForInputString:@":" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__3A_ ;
  }else if (scanningOk && [self testForInputString:@"." advance:YES]) {
    mTokenCode = kerbdd_lexique_1__2E_ ;
  }else if (scanningOk && [self testForInputString:@"," advance:YES]) {
    mTokenCode = kerbdd_lexique_1__2C_ ;
  }else if (scanningOk && [self testForInputString:@")" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__29_ ;
  }else if (scanningOk && [self testForInputString:@"(" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__28_ ;
  }else if (scanningOk && [self testForInputString:@"&" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__26_ ;
  }else if (scanningOk && [self testForInputString:@"!" advance:YES]) {
    mTokenCode = kerbdd_lexique_1__21_ ;
  }else if (scanningOk && ([self testForInputChar:35])) {
    BOOL loop3976 = YES ;
    do {
      if (scanningOk && ([self testForInputFromChar:1 toChar:9] || [self testForInputChar:11] || [self testForInputChar:12] || [self testForInputFromChar:14 toChar:65533])) {
      }else{
        loop3976 = NO ;
      }
    }while (loop3976 && scanningOk) ;
    mTokenCode = kerbdd_lexique_1_comment ;
  }else if (scanningOk && ([self testForInputFromChar:1 toChar:32])) {
  }else   if ([self testForInputChar:'\0']) { // End of source text ?
    mTokenCode = kerbdd_lexique_1_ ; // Empty string code
  }else{ // Unknown input character
    scanningOk = NO ;
    [self advance] ;
  }
  return scanningOk ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//               P A R S E    L E X I C A L    T O K E N
//
//----------------------------------------------------------------------------------------------------------------------

- (void) parseLexicalTokenForLexicalColoring {
  BOOL scanningOk = YES ;
  mTokenCode = 0 ;
  while ((mTokenCode == 0) && (mCurrentChar != '\0')) {
    scanningOk = [self internalParseLexicalTokenForLexicalColoring] ;
  }
//--- Error ?
  if (! scanningOk) {
    mTokenCode = -1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//                   T E R M I N A L    C O U N T
//
//----------------------------------------------------------------------------------------------------------------------

- (NSUInteger) terminalVocabularyCount {
  return 41 ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//                     S T Y L E   C O U N T
//
//----------------------------------------------------------------------------------------------------------------------

- (NSUInteger) styleCount {
  return 6 ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//                I S    T E M P L A T E    L E X I Q U E
//
//----------------------------------------------------------------------------------------------------------------------

- (BOOL) isTemplateLexique {
  return NO ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//   S T Y L E   I N D E X    F O R    T E R M I N A L
//
//----------------------------------------------------------------------------------------------------------------------

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {
  static const NSUInteger kTerminalSymbolStyles [42] = {0,
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
  return kTerminalSymbolStyles [inTerminal] ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L
//
//----------------------------------------------------------------------------------------------------------------------

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {
  static const BOOL kTerminalAtomicSelection [42] = {NO,
    YES /* kerbdd_lexique_1_identifier */,
    YES /* kerbdd_lexique_1_integer */,
    NO /* kerbdd_lexique_1_literal_5F_string */,
    NO /* kerbdd_lexique_1_comment */,
    YES /* kerbdd_lexique_1_nodeHashMapSize */,
    YES /* kerbdd_lexique_1_andCacheMapSize */,
    YES /* kerbdd_lexique_1_domain */,
    YES /* kerbdd_lexique_1_bool */,
    YES /* kerbdd_lexique_1_true */,
    YES /* kerbdd_lexique_1_false */,
    YES /* kerbdd_lexique_1_display */,
    YES /* kerbdd_lexique_1_include */,
    YES /* kerbdd_lexique_1_graphviz */,
    YES /* kerbdd_lexique_1_dump */,
    YES /* kerbdd_lexique_1__28_ */,
    YES /* kerbdd_lexique_1__29_ */,
    YES /* kerbdd_lexique_1__5B_ */,
    YES /* kerbdd_lexique_1__5D_ */,
    YES /* kerbdd_lexique_1__7B_ */,
    YES /* kerbdd_lexique_1__7D_ */,
    YES /* kerbdd_lexique_1__3A__3D_ */,
    YES /* kerbdd_lexique_1__3A_ */,
    YES /* kerbdd_lexique_1__2E_ */,
    YES /* kerbdd_lexique_1__2E__2E_ */,
    YES /* kerbdd_lexique_1__2B__3D_ */,
    YES /* kerbdd_lexique_1__2D__3D_ */,
    YES /* kerbdd_lexique_1__2D__3E_ */,
    YES /* kerbdd_lexique_1__26_ */,
    YES /* kerbdd_lexique_1__7C_ */,
    YES /* kerbdd_lexique_1__5E_ */,
    YES /* kerbdd_lexique_1__7E_ */,
    YES /* kerbdd_lexique_1__2C_ */,
    YES /* kerbdd_lexique_1__3F_ */,
    YES /* kerbdd_lexique_1__21_ */,
    YES /* kerbdd_lexique_1__3B_ */,
    YES /* kerbdd_lexique_1__3D_ */,
    YES /* kerbdd_lexique_1__21__3D_ */,
    YES /* kerbdd_lexique_1__3C_ */,
    YES /* kerbdd_lexique_1__3C__3D_ */,
    YES /* kerbdd_lexique_1__3E_ */,
    YES /* kerbdd_lexique_1__3E__3D_ */
  } ;
  return kTerminalAtomicSelection [inTokenIndex] ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//             S T Y L E   N A M E    F O R    I N D E X
//
//----------------------------------------------------------------------------------------------------------------------

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 6)) {
    NSString * kStyleArray [6] = {
      @"Default Style",
      @"Keywords",
      @"Integer Constants",
      @"String Constants",
      @"Delimiters",
      @"Comments"
    } ;
    result = kStyleArray [inIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//         S T Y L E   I D E N T I F I E R    F O R    I N D E X
//
//----------------------------------------------------------------------------------------------------------------------

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {
  NSString * result = nil ;
  if ((inIndex >= 0) && (inIndex < 6)) {
    NSString * kStyleArray [6] = {
      @"kerbdd_lexique",
      @"kerbdd_lexique-keywordsStyle",
      @"kerbdd_lexique-integerStyle",
      @"kerbdd_lexique-stringStyle",
      @"kerbdd_lexique-delimitersStyle",
      @"kerbdd_lexique-commentStyle"
    } ;
    result = kStyleArray [inIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//         L E X I Q U E   I D E N T I F I E R
//
//----------------------------------------------------------------------------------------------------------------------

- (NSString *) lexiqueIdentifier {
  return @"kerbdd_lexique" ;
}

//----------------------------------------------------------------------------------------------------------------------

@end

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


