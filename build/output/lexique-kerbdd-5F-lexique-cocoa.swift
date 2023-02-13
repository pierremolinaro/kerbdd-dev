//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import AppKit

//----------------------------------------------------------------------------------------------------------------------
//   LEXIQUE kerbdd_lexique
//----------------------------------------------------------------------------------------------------------------------

fileprivate let gFont_kerbdd_lexique = EBGenericPreferenceProperty <NSFont> (
  defaultValue: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular),
  prefKey: "FontFor_" + kerbdd_lexique_lexiqueIdentifier ()
)

//----------------------------------------------------------------------------------------------------------------------

fileprivate let gLineHeight_kerbdd_lexique = EBGenericPreferenceProperty <Int> (
  defaultValue: 12,
  prefKey: "LineHeightFor_" + kerbdd_lexique_lexiqueIdentifier ()
)

//----------------------------------------------------------------------------------------------------------------------

fileprivate let gColors_kerbdd_lexique : [EBGenericPreferenceProperty <NSColor>] = [
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_kerbdd_lexique"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_kerbdd_lexique-keywordsStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_kerbdd_lexique-integerStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_kerbdd_lexique-stringStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_kerbdd_lexique-delimitersStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .black, prefKey: "ColorFor_kerbdd_lexique-commentStyle"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .red, prefKey: "ColorFor_kerbdd_lexique_lexical_error"),
  EBGenericPreferenceProperty <NSColor> (defaultValue: .gray, prefKey: "ColorFor_kerbdd_lexique_template")
]

//----------------------------------------------------------------------------------------------------------------------

fileprivate let gBoldStyle_kerbdd_lexique : [EBGenericPreferenceProperty <Bool>] = [
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_kerbdd_lexique"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_kerbdd_lexique-keywordsStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_kerbdd_lexique-integerStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_kerbdd_lexique-stringStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_kerbdd_lexique-delimitersStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_kerbdd_lexique-commentStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: true, prefKey: "BoldFor_kerbdd_lexique_lexical_error"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "BoldFor_kerbdd_lexique_template")
]

//----------------------------------------------------------------------------------------------------------------------

fileprivate let gItalicStyle_kerbdd_lexique : [EBGenericPreferenceProperty <Bool>] = [
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_kerbdd_lexique"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_kerbdd_lexique-keywordsStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_kerbdd_lexique-integerStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_kerbdd_lexique-stringStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_kerbdd_lexique-delimitersStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_kerbdd_lexique-commentStyle"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_kerbdd_lexique_lexical_error"),
  EBGenericPreferenceProperty <Bool> (defaultValue: false, prefKey: "ItalicFor_kerbdd_lexique_template")
]

//----------------------------------------------------------------------------------------------------------------------
//                           Template Replacements
//----------------------------------------------------------------------------------------------------------------------



//----------------------------------------------------------------------------------------------------------------------
//                           Template Delimiters
//----------------------------------------------------------------------------------------------------------------------



//----------------------------------------------------------------------------------------------------------------------
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N
//----------------------------------------------------------------------------------------------------------------------

let kerbdd_lexique_1_ : UInt16 = 0
let kerbdd_lexique_1_identifier : UInt16 = 1
let kerbdd_lexique_1_integer : UInt16 = 2
let kerbdd_lexique_1_literal_5F_string : UInt16 = 3
let kerbdd_lexique_1_comment : UInt16 = 4
let kerbdd_lexique_1_nodeHashMapSize : UInt16 = 5
let kerbdd_lexique_1_andCacheMapSize : UInt16 = 6
let kerbdd_lexique_1_domain : UInt16 = 7
let kerbdd_lexique_1_bool : UInt16 = 8
let kerbdd_lexique_1_true : UInt16 = 9
let kerbdd_lexique_1_false : UInt16 = 10
let kerbdd_lexique_1_display : UInt16 = 11
let kerbdd_lexique_1_include : UInt16 = 12
let kerbdd_lexique_1_graphviz : UInt16 = 13
let kerbdd_lexique_1_dump : UInt16 = 14
let kerbdd_lexique_1__28_ : UInt16 = 15
let kerbdd_lexique_1__29_ : UInt16 = 16
let kerbdd_lexique_1__5B_ : UInt16 = 17
let kerbdd_lexique_1__5D_ : UInt16 = 18
let kerbdd_lexique_1__7B_ : UInt16 = 19
let kerbdd_lexique_1__7D_ : UInt16 = 20
let kerbdd_lexique_1__3A__3D_ : UInt16 = 21
let kerbdd_lexique_1__3A_ : UInt16 = 22
let kerbdd_lexique_1__2E_ : UInt16 = 23
let kerbdd_lexique_1__2E__2E_ : UInt16 = 24
let kerbdd_lexique_1__2B__3D_ : UInt16 = 25
let kerbdd_lexique_1__2D__3D_ : UInt16 = 26
let kerbdd_lexique_1__2D__3E_ : UInt16 = 27
let kerbdd_lexique_1__26_ : UInt16 = 28
let kerbdd_lexique_1__7C_ : UInt16 = 29
let kerbdd_lexique_1__5E_ : UInt16 = 30
let kerbdd_lexique_1__7E_ : UInt16 = 31
let kerbdd_lexique_1__2C_ : UInt16 = 32
let kerbdd_lexique_1__3F_ : UInt16 = 33
let kerbdd_lexique_1__21_ : UInt16 = 34
let kerbdd_lexique_1__3B_ : UInt16 = 35
let kerbdd_lexique_1__3D_ : UInt16 = 36
let kerbdd_lexique_1__21__3D_ : UInt16 = 37
let kerbdd_lexique_1__3C_ : UInt16 = 38
let kerbdd_lexique_1__3C__3D_ : UInt16 = 39
let kerbdd_lexique_1__3E_ : UInt16 = 40
let kerbdd_lexique_1__3E__3D_ : UInt16 = 41
let kerbdd_lexique_2_ERROR : UInt16 = 42
let kerbdd_lexique_2_TEMPLATE : UInt16 = 43

//----------------------------------------------------------------------------------------------------------------------

func kerbdd_lexique_lexiqueIdentifier () -> String {
  return "kerbdd_lexique"
}

//----------------------------------------------------------------------------------------------------------------------

func kerbdd_lexique_styleNameFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "Default Style", // 0
    "Keywords", // 1
    "Integer Constants", // 2
    "String Constants", // 3
    "Delimiters", // 4
    "Comments", // 5
    "Lexical error", // 6
    "Template" // 7
  ]
  return kStyleArray [Int (inIndex)]
}

//----------------------------------------------------------------------------------------------------------------------

func kerbdd_lexique_styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "kerbdd_lexique", // 0
    "kerbdd_lexique-keywordsStyle", // 1
    "kerbdd_lexique-integerStyle", // 2
    "kerbdd_lexique-stringStyle", // 3
    "kerbdd_lexique-delimitersStyle", // 4
    "kerbdd_lexique-commentStyle", // 5
    "kerbdd_lexique.ERROR", // 6
    "kerbdd_lexique.TEMPLATE" // 7
  ]
  return kStyleArray [Int (inIndex)]
}

//----------------------------------------------------------------------------------------------------------------------
//                     S C A N N E R    C L A S S
//----------------------------------------------------------------------------------------------------------------------

class SWIFT_Lexique_kerbdd_lexique : SWIFT_Lexique {

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mLexicalAttribute_tokenString : String = ""
  private var mLexicalAttribute_uint32value : UInt32 = 0

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func lexiqueIdentifier () -> String {
    return kerbdd_lexique_lexiqueIdentifier ()
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func isTemplateLexique () -> Bool {
    return false
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func terminalVocabularyCount () -> Int {
    return 41
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var font : EBGenericPreferenceProperty <NSFont> { return gFont_kerbdd_lexique }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var lineHeight : EBGenericPreferenceProperty <Int> { return gLineHeight_kerbdd_lexique }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func color (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <NSColor> {
    return gColors_kerbdd_lexique [Int (inStyleIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func bold (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <Bool> {
    return gBoldStyle_kerbdd_lexique [Int (inStyleIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func italic (forStyle inStyleIndex : UInt8) -> EBGenericPreferenceProperty <Bool> {
    return gItalicStyle_kerbdd_lexique [Int (inStyleIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8 {
    let kTerminalSymbolStyles : [UInt8] = [
      0, // Default
      0, // 1 : kerbdd_lexique_1_identifier
      2, // 2 : kerbdd_lexique_1_integer
      3, // 3 : kerbdd_lexique_1_literal_5F_string
      5, // 4 : kerbdd_lexique_1_comment
      1, // 5 : kerbdd_lexique_1_nodeHashMapSize
      1, // 6 : kerbdd_lexique_1_andCacheMapSize
      1, // 7 : kerbdd_lexique_1_domain
      1, // 8 : kerbdd_lexique_1_bool
      1, // 9 : kerbdd_lexique_1_true
      1, // 10 : kerbdd_lexique_1_false
      1, // 11 : kerbdd_lexique_1_display
      1, // 12 : kerbdd_lexique_1_include
      1, // 13 : kerbdd_lexique_1_graphviz
      1, // 14 : kerbdd_lexique_1_dump
      4, // 15 : kerbdd_lexique_1__28_
      4, // 16 : kerbdd_lexique_1__29_
      4, // 17 : kerbdd_lexique_1__5B_
      4, // 18 : kerbdd_lexique_1__5D_
      4, // 19 : kerbdd_lexique_1__7B_
      4, // 20 : kerbdd_lexique_1__7D_
      4, // 21 : kerbdd_lexique_1__3A__3D_
      4, // 22 : kerbdd_lexique_1__3A_
      4, // 23 : kerbdd_lexique_1__2E_
      4, // 24 : kerbdd_lexique_1__2E__2E_
      4, // 25 : kerbdd_lexique_1__2B__3D_
      4, // 26 : kerbdd_lexique_1__2D__3D_
      4, // 27 : kerbdd_lexique_1__2D__3E_
      4, // 28 : kerbdd_lexique_1__26_
      4, // 29 : kerbdd_lexique_1__7C_
      4, // 30 : kerbdd_lexique_1__5E_
      4, // 31 : kerbdd_lexique_1__7E_
      4, // 32 : kerbdd_lexique_1__2C_
      4, // 33 : kerbdd_lexique_1__3F_
      4, // 34 : kerbdd_lexique_1__21_
      4, // 35 : kerbdd_lexique_1__3B_
      4, // 36 : kerbdd_lexique_1__3D_
      4, // 37 : kerbdd_lexique_1__21__3D_
      4, // 38 : kerbdd_lexique_1__3C_
      4, // 39 : kerbdd_lexique_1__3C__3D_
      4, // 40 : kerbdd_lexique_1__3E_
      4, // 41 : kerbdd_lexique_1__3E__3D_
      6, // 42 : kerbdd_lexique_2_ERROR
      7  // 43 : kerbdd_lexique_2_TEMPLATE
    ]
    return kTerminalSymbolStyles [Int (inTokenIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool {
    let kTerminalAtomicSelection : [Bool] = [
      false, // Default
      true, // 1 : kerbdd_lexique_1_identifier
      true, // 2 : kerbdd_lexique_1_integer
      false, // 3 : kerbdd_lexique_1_literal_5F_string
      false, // 4 : kerbdd_lexique_1_comment
      true, // 5 : kerbdd_lexique_1_nodeHashMapSize
      true, // 6 : kerbdd_lexique_1_andCacheMapSize
      true, // 7 : kerbdd_lexique_1_domain
      true, // 8 : kerbdd_lexique_1_bool
      true, // 9 : kerbdd_lexique_1_true
      true, // 10 : kerbdd_lexique_1_false
      true, // 11 : kerbdd_lexique_1_display
      true, // 12 : kerbdd_lexique_1_include
      true, // 13 : kerbdd_lexique_1_graphviz
      true, // 14 : kerbdd_lexique_1_dump
      true, // 15 : kerbdd_lexique_1__28_
      true, // 16 : kerbdd_lexique_1__29_
      true, // 17 : kerbdd_lexique_1__5B_
      true, // 18 : kerbdd_lexique_1__5D_
      true, // 19 : kerbdd_lexique_1__7B_
      true, // 20 : kerbdd_lexique_1__7D_
      true, // 21 : kerbdd_lexique_1__3A__3D_
      true, // 22 : kerbdd_lexique_1__3A_
      true, // 23 : kerbdd_lexique_1__2E_
      true, // 24 : kerbdd_lexique_1__2E__2E_
      true, // 25 : kerbdd_lexique_1__2B__3D_
      true, // 26 : kerbdd_lexique_1__2D__3D_
      true, // 27 : kerbdd_lexique_1__2D__3E_
      true, // 28 : kerbdd_lexique_1__26_
      true, // 29 : kerbdd_lexique_1__7C_
      true, // 30 : kerbdd_lexique_1__5E_
      true, // 31 : kerbdd_lexique_1__7E_
      true, // 32 : kerbdd_lexique_1__2C_
      true, // 33 : kerbdd_lexique_1__3F_
      true, // 34 : kerbdd_lexique_1__21_
      true, // 35 : kerbdd_lexique_1__3B_
      true, // 36 : kerbdd_lexique_1__3D_
      true, // 37 : kerbdd_lexique_1__21__3D_
      true, // 38 : kerbdd_lexique_1__3C_
      true, // 39 : kerbdd_lexique_1__3C__3D_
      true, // 40 : kerbdd_lexique_1__3E_
      true, // 41 : kerbdd_lexique_1__3E__3D_
      false, // 42 : kerbdd_lexique_2_ERROR
      false  // 43 : kerbdd_lexique_2_TEMPLATE
    ]
    return kTerminalAtomicSelection [Int (inTokenIndex)]
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func indexingDirectory () -> String {
    return ""
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func indexingTitles () -> [String] {

    return []
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  S T Y L E S
  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleCount () -> UInt8 {
    return 5
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleNameFor (styleIndex inIndex : UInt8) -> String {
    return kerbdd_lexique_styleNameFor (styleIndex: inIndex)
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
    return kerbdd_lexique_styleIdentifierFor (styleIndex: inIndex)
  }

  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Lexical analysis
  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func parseLexicalTokenForLexicalColoring () -> SWIFT_Token {
    var loop = true
    var scanningOk = true
    self.mLexicalAttribute_tokenString = ""
    self.mLexicalAttribute_uint32value = 0
    var tokenCode : UInt16 = 0
    let startLocation = self.currentLocation
    if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90)) {
      while (loop && scanningOk) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
        }else{
          loop = false
        }
      }
      loop = true
      if (tokenCode == 0) {
        tokenCode = search_into_kerbdd_5F_lexique_keyWordList (mLexicalAttribute_tokenString) ;
      }
      if tokenCode == 0 {
        tokenCode = kerbdd_lexique_1_identifier ;
      }
    }else if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
      scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        }else if scanningOk && (self.testForInputChar (95)) {
        }else{
          loop = false
        }
      }
      loop = true
      scanner_cocoa_routine_convertDecimalStringIntoUInt (&scanningOk, mLexicalAttribute_tokenString, &self.mLexicalAttribute_uint32value)
      tokenCode = kerbdd_lexique_1_integer
    }else if scanningOk && (self.testForInputChar (34)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputChar (32) || self.testForInputChar (33) || self.testForInputFromChar (35, toChar:65533)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        }else{
          loop = false
        }
      }
      loop = true
      if scanningOk && (self.testForInputChar (34)) {
        tokenCode = kerbdd_lexique_1_literal_5F_string
      }else{
        scanningOk = false
      }
    }else if scanningOk && self.testForInputString (">=", advance: true) {
      tokenCode = kerbdd_lexique_1__3E__3D_
    }else if scanningOk && self.testForInputString ("<=", advance: true) {
      tokenCode = kerbdd_lexique_1__3C__3D_
    }else if scanningOk && self.testForInputString (":=", advance: true) {
      tokenCode = kerbdd_lexique_1__3A__3D_
    }else if scanningOk && self.testForInputString ("..", advance: true) {
      tokenCode = kerbdd_lexique_1__2E__2E_
    }else if scanningOk && self.testForInputString ("->", advance: true) {
      tokenCode = kerbdd_lexique_1__2D__3E_
    }else if scanningOk && self.testForInputString ("-=", advance: true) {
      tokenCode = kerbdd_lexique_1__2D__3D_
    }else if scanningOk && self.testForInputString ("+=", advance: true) {
      tokenCode = kerbdd_lexique_1__2B__3D_
    }else if scanningOk && self.testForInputString ("!=", advance: true) {
      tokenCode = kerbdd_lexique_1__21__3D_
    }else if scanningOk && self.testForInputString ("~", advance: true) {
      tokenCode = kerbdd_lexique_1__7E_
    }else if scanningOk && self.testForInputString ("}", advance: true) {
      tokenCode = kerbdd_lexique_1__7D_
    }else if scanningOk && self.testForInputString ("|", advance: true) {
      tokenCode = kerbdd_lexique_1__7C_
    }else if scanningOk && self.testForInputString ("{", advance: true) {
      tokenCode = kerbdd_lexique_1__7B_
    }else if scanningOk && self.testForInputString ("^", advance: true) {
      tokenCode = kerbdd_lexique_1__5E_
    }else if scanningOk && self.testForInputString ("]", advance: true) {
      tokenCode = kerbdd_lexique_1__5D_
    }else if scanningOk && self.testForInputString ("[", advance: true) {
      tokenCode = kerbdd_lexique_1__5B_
    }else if scanningOk && self.testForInputString ("?", advance: true) {
      tokenCode = kerbdd_lexique_1__3F_
    }else if scanningOk && self.testForInputString (">", advance: true) {
      tokenCode = kerbdd_lexique_1__3E_
    }else if scanningOk && self.testForInputString ("=", advance: true) {
      tokenCode = kerbdd_lexique_1__3D_
    }else if scanningOk && self.testForInputString ("<", advance: true) {
      tokenCode = kerbdd_lexique_1__3C_
    }else if scanningOk && self.testForInputString (";", advance: true) {
      tokenCode = kerbdd_lexique_1__3B_
    }else if scanningOk && self.testForInputString (":", advance: true) {
      tokenCode = kerbdd_lexique_1__3A_
    }else if scanningOk && self.testForInputString (".", advance: true) {
      tokenCode = kerbdd_lexique_1__2E_
    }else if scanningOk && self.testForInputString (",", advance: true) {
      tokenCode = kerbdd_lexique_1__2C_
    }else if scanningOk && self.testForInputString (")", advance: true) {
      tokenCode = kerbdd_lexique_1__29_
    }else if scanningOk && self.testForInputString ("(", advance: true) {
      tokenCode = kerbdd_lexique_1__28_
    }else if scanningOk && self.testForInputString ("&", advance: true) {
      tokenCode = kerbdd_lexique_1__26_
    }else if scanningOk && self.testForInputString ("!", advance: true) {
      tokenCode = kerbdd_lexique_1__21_
    }else if scanningOk && (self.testForInputChar (35)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputFromChar (1, toChar:9) || self.testForInputChar (11) || self.testForInputChar (12) || self.testForInputFromChar (14, toChar:65533)) {
        }else{
          loop = false
        }
      }
      loop = true
      tokenCode = kerbdd_lexique_1_comment
    }else if scanningOk && (self.testForInputFromChar (1, toChar:32)) {
    }else if self.testForInputChar (0) { // End of source text ?
      tokenCode = kerbdd_lexique_1_ ; // Empty string code
    }else{ // Unknown input character
      tokenCode = kerbdd_lexique_2_TEMPLATE
      self.advance ()
    }
    return SWIFT_Token (
      range: NSRange (location: startLocation, length: self.currentLocation - startLocation),
      tokenCode: tokenCode,
      templateDelimiterIndex: self.mEndTemplateDelimiterIndex
    )
  }
  
  //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//----------------------------------------------------------------------------------------------------------------------

/* - (instancetype) init {
  self = [super init] ;
  if (self) {
    noteObjectAllocation (self) ;
    mLexicalAttribute_tokenString = [[NSMutableString alloc] init] ;
    mLexicalAttribute_uint32value = 0 ;
  }
  return self ;
} */

//----------------------------------------------------------------------------------------------------------------------
//
//            Terminal Symbols as end of script in template mark
//
//----------------------------------------------------------------------------------------------------------------------

/*

*/


//----------------------------------------------------------------------------------------------------------------------
//
//             Key words table 'keyWordList'      
//
//----------------------------------------------------------------------------------------------------------------------

fileprivate func search_into_kerbdd_5F_lexique_keyWordList (_ inSearchedString : String) -> UInt16 {
  let dictionary : [String : UInt16] = [
    "bool" : kerbdd_lexique_1_bool,
    "dump" : kerbdd_lexique_1_dump,
    "true" : kerbdd_lexique_1_true,
    "false" : kerbdd_lexique_1_false,
    "domain" : kerbdd_lexique_1_domain,
    "display" : kerbdd_lexique_1_display,
    "include" : kerbdd_lexique_1_include,
    "graphviz" : kerbdd_lexique_1_graphviz,
    "andCacheMapSize" : kerbdd_lexique_1_andCacheMapSize,
    "nodeHashMapSize" : kerbdd_lexique_1_nodeHashMapSize
  ]
  return dictionary [inSearchedString, default: kerbdd_lexique_1_]
}





//----------------------------------------------------------------------------------------------------------------------
//
//               P A R S E    L E X I C A L    T O K E N
//
//----------------------------------------------------------------------------------------------------------------------

/* - (void) parseLexicalTokenForLexicalColoring {
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

*/

//----------------------------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


