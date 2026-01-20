//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//   LEXIQUE kerbdd_lexique
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

struct SettingViewFor_kerbdd_lexique : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @AppStorage("FontFor_kerbdd_lexique")
  private var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))

  @AppStorage("LineHeightFor_kerbdd_lexique")
  private var mLineHeight : Int = 12

  @AppStorage("ColorFor_kerbdd_lexique")
  private var mDefaultColor : Color = .black

  @AppStorage("ColorFor_kerbdd_lexique-keywordsStyle")
  private var mColorFor_keywordsStyle : Color = .black

  @AppStorage("BoldFor_kerbdd_lexique-keywordsStyle")
  private var mBoldFor_keywordsStyle : Bool = false

  @AppStorage("ItalicFor_kerbdd_lexique-keywordsStyle")
  private var mItalicFor_keywordsStyle : Bool = false

  @AppStorage("ColorFor_kerbdd_lexique-integerStyle")
  private var mColorFor_integerStyle : Color = .black

  @AppStorage("BoldFor_kerbdd_lexique-integerStyle")
  private var mBoldFor_integerStyle : Bool = false

  @AppStorage("ItalicFor_kerbdd_lexique-integerStyle")
  private var mItalicFor_integerStyle : Bool = false

  @AppStorage("ColorFor_kerbdd_lexique-stringStyle")
  private var mColorFor_stringStyle : Color = .black

  @AppStorage("BoldFor_kerbdd_lexique-stringStyle")
  private var mBoldFor_stringStyle : Bool = false

  @AppStorage("ItalicFor_kerbdd_lexique-stringStyle")
  private var mItalicFor_stringStyle : Bool = false

  @AppStorage("ColorFor_kerbdd_lexique-delimitersStyle")
  private var mColorFor_delimitersStyle : Color = .black

  @AppStorage("BoldFor_kerbdd_lexique-delimitersStyle")
  private var mBoldFor_delimitersStyle : Bool = false

  @AppStorage("ItalicFor_kerbdd_lexique-delimitersStyle")
  private var mItalicFor_delimitersStyle : Bool = false

  @AppStorage("ColorFor_kerbdd_lexique-commentStyle")
  private var mColorFor_commentStyle : Color = .black

  @AppStorage("BoldFor_kerbdd_lexique-commentStyle")
  private var mBoldFor_commentStyle : Bool = false

  @AppStorage("ItalicFor_kerbdd_lexique-commentStyle")
  private var mItalicFor_commentStyle : Bool = false


  @AppStorage("ColorFor_kerbdd_lexique_lexical_error")
  private var mColorFor_lexical_error : Color = .red

  @AppStorage("BoldFor_kerbdd_lexique_lexical_error")
  private var mBoldFor_lexical_error : Bool = false

  @AppStorage("ItalicFor_kerbdd_lexique_lexical_error")
  private var mItalicFor_lexical_error : Bool = false

  @AppStorage("ColorFor_kerbdd_lexique_template")
  private var mColorFor_template : Color = .gray

  @AppStorage("BoldFor_kerbdd_lexique_template")
  private var mBoldFor_template : Bool = false

  @AppStorage("ItalicFor_kerbdd_lexique_template")
  private var mItalicFor_template : Bool = false

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var body : some View {
    Form {
      LabeledContent ("Font") { CustomFontPicker (fontBinding: self.$mFont) }
      Picker("Line Height", selection: self.$mLineHeight) {
        Text("1.0").tag(10)
        Text("1.1").tag(11)
        Text("1.2").tag(12)
        Text("1.5").tag(15)
        Text("1.7").tag(17)
        Text("2.0").tag(20)
      }.pickerStyle(.automatic)
      ColorPicker ("Default Color", selection: self.$mDefaultColor)
      LabeledContent ("Keywords") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_keywordsStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_keywordsStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_keywordsStyle)
        }
      }
      LabeledContent ("Integer Constants") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_integerStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_integerStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_integerStyle)
        }
      }
      LabeledContent ("String Constants") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_stringStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_stringStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_stringStyle)
        }
      }
      LabeledContent ("Delimiters") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_delimitersStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_delimitersStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_delimitersStyle)
        }
      }
      LabeledContent ("Comments") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_commentStyle).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_commentStyle)
          Toggle ("Italic", isOn: self.$mItalicFor_commentStyle)
        }
      }
      LabeledContent ("Lexical Error") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_lexical_error).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_lexical_error)
          Toggle ("Italic", isOn: self.$mItalicFor_lexical_error)
        }
      }
      LabeledContent ("Template") {
        HStack {
          ColorPicker ("", selection: self.$mColorFor_template).labelsHidden ()
          Toggle ("Bold", isOn: self.$mBoldFor_template)
          Toggle ("Italic", isOn: self.$mItalicFor_template)
        }
      }
    }.padding (20)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

class ScannerFor_kerbdd_lexique : AbstractScanner {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mDebug = false
  private let mVerboseDebug = false
  private var mTokenArray = [LexicalToken] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final override func popUpDefinitionList () -> [[UInt16]] {
    return gPopUpData_kerbdd_lexique
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final override func blockComment () -> String? {
    return gBlockComment_kerbdd_lexique
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func selectionRange (forProposedRange inProposedSelectionRange : NSRange,
                                granularity inGranularity : NSSelectionGranularity,
                                nsTextViewComputedRange inTextViewComputedRange : NSRange) -> NSRange {
    var result = inTextViewComputedRange
    switch inGranularity {
    case .selectByCharacter :
      ()
    case .selectByWord :
      var found = false
      var idx = 0
      while idx < self.mTokenArray.count, !found {
        let token = self.mTokenArray [idx]
        idx += 1
        let tokenRange = token.range
        found = ((tokenRange.location + tokenRange.length) > inProposedSelectionRange.location)
           && (tokenRange.location <= inProposedSelectionRange.location)
        if found, self.atomicSelectionFor (token: token.tokenCode) {
          result = tokenRange
        }
      }
    case .selectByParagraph :
      var found = false
      var idx = 0
      while idx < self.mTokenArray.count, !found {
        let token = self.mTokenArray [idx]
        idx += 1
        let tokenRange = token.range
        found = ((tokenRange.location + tokenRange.length) > inProposedSelectionRange.location)
           && (tokenRange.location <= inProposedSelectionRange.location)
        if found {
          result = tokenRange
        }
      }
    @unknown default:
      ()
    }
    return result
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Scanner
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mLexicalAttribute_tokenString : String = ""
  private var mLexicalAttribute_uint32value : UInt32 = 0

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func lexiqueIdentifier () -> String {
    return kerbdd_lexique_lexiqueIdentifier ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func isTemplateLexique () -> Bool {
    return false
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func terminalVocabularyCount () -> Int {
    return 41
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

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

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

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

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func indexingTitles () -> [String] {

    return []
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //  S T Y L E S
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleCount () -> UInt8 {
    return 5
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleNameFor (styleIndex inIndex : UInt8) -> String {
    return kerbdd_lexique_styleNameFor (styleIndex: inIndex)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIdentifierFor (styleIndex inIndex : UInt8) -> String {
    return kerbdd_lexique_styleIdentifierFor (styleIndex: inIndex)
  }

 // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final var mFont = CustomFont (nsFont: NSFont.monospacedSystemFont (ofSize: 13.0, weight: .regular))
  final var mLineHeight : Int = 12
  final var mDefaultColor : Color = .black
  final var mColorFor_keywordsStyle : Color = .black
  final var mBoldFor_keywordsStyle : Bool = false
  final var mItalicFor_keywordsStyle : Bool = false
  final var mColorFor_integerStyle : Color = .black
  final var mBoldFor_integerStyle : Bool = false
  final var mItalicFor_integerStyle : Bool = false
  final var mColorFor_stringStyle : Color = .black
  final var mBoldFor_stringStyle : Bool = false
  final var mItalicFor_stringStyle : Bool = false
  final var mColorFor_delimitersStyle : Color = .black
  final var mBoldFor_delimitersStyle : Bool = false
  final var mItalicFor_delimitersStyle : Bool = false
  final var mColorFor_commentStyle : Color = .black
  final var mBoldFor_commentStyle : Bool = false
  final var mItalicFor_commentStyle : Bool = false
  final var mColorFor_lexical_error : Color = .red
  final var mBoldFor_lexical_error : Bool = false
  final var mItalicFor_lexical_error : Bool = false
  final var mColorFor_template : Color = .gray
  final var mBoldFor_template : Bool = false
  final var mItalicFor_template : Bool = false
  final var mTokenAttributeArray = [[NSAttributedString.Key : Any]?] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func updateTokenStyleArrays (_ ioStyleDidChange : inout Bool) {
    ioStyleDidChange = false
    let ud = UserDefaults.standard
    if let s = ud.string (forKey: "FontFor_kerbdd_lexique"), let v = CustomFont (rawValue: s) {
      if self.mFont != v {
        self.mFont = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "LineHeightFor_kerbdd_lexique"), let v = Int (s) {
      if self.mLineHeight != v {
        self.mLineHeight = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_kerbdd_lexique"), let v = Color (rawValue: s) {
      if self.mDefaultColor != v {
        self.mDefaultColor = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_kerbdd_lexique-keywordsStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_keywordsStyle != v {
        self.mColorFor_keywordsStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_kerbdd_lexique-keywordsStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_kerbdd_lexique-keywordsStyle")
      if self.mBoldFor_keywordsStyle != v {
        self.mBoldFor_keywordsStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_kerbdd_lexique-keywordsStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_kerbdd_lexique-keywordsStyle")
      if self.mItalicFor_keywordsStyle != v {
        self.mItalicFor_keywordsStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_kerbdd_lexique-integerStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_integerStyle != v {
        self.mColorFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_kerbdd_lexique-integerStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_kerbdd_lexique-integerStyle")
      if self.mBoldFor_integerStyle != v {
        self.mBoldFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_kerbdd_lexique-integerStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_kerbdd_lexique-integerStyle")
      if self.mItalicFor_integerStyle != v {
        self.mItalicFor_integerStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_kerbdd_lexique-stringStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_stringStyle != v {
        self.mColorFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_kerbdd_lexique-stringStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_kerbdd_lexique-stringStyle")
      if self.mBoldFor_stringStyle != v {
        self.mBoldFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_kerbdd_lexique-stringStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_kerbdd_lexique-stringStyle")
      if self.mItalicFor_stringStyle != v {
        self.mItalicFor_stringStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_kerbdd_lexique-delimitersStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_delimitersStyle != v {
        self.mColorFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_kerbdd_lexique-delimitersStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_kerbdd_lexique-delimitersStyle")
      if self.mBoldFor_delimitersStyle != v {
        self.mBoldFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_kerbdd_lexique-delimitersStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_kerbdd_lexique-delimitersStyle")
      if self.mItalicFor_delimitersStyle != v {
        self.mItalicFor_delimitersStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_kerbdd_lexique-commentStyle"), let v = Color (rawValue: s) {
      if self.mColorFor_commentStyle != v {
        self.mColorFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_kerbdd_lexique-commentStyle") != nil {
      let v = ud.bool (forKey: "BoldFor_kerbdd_lexique-commentStyle")
      if self.mBoldFor_commentStyle != v {
        self.mBoldFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_kerbdd_lexique-commentStyle") != nil {
      let v = ud.bool (forKey: "ItalicFor_kerbdd_lexique-commentStyle")
      if self.mItalicFor_commentStyle != v {
        self.mItalicFor_commentStyle = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_kerbdd_lexique_lexical_error"), let v = Color (rawValue: s) {
      if self.mColorFor_lexical_error != v {
        self.mColorFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_kerbdd_lexique_lexical_error") != nil {
      let v = ud.bool (forKey: "BoldFor_kerbdd_lexique_lexical_error")
      if self.mBoldFor_lexical_error != v {
        self.mBoldFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_kerbdd_lexique_lexical_error") != nil {
      let v = ud.bool (forKey: "ItalicFor_kerbdd_lexique_lexical_error")
      if self.mItalicFor_lexical_error != v {
        self.mItalicFor_lexical_error = v
        ioStyleDidChange = true
      }
    }
    if let s = ud.string (forKey: "ColorFor_kerbdd_lexique_template"), let v = Color (rawValue: s) {
      if self.mColorFor_template != v {
        self.mColorFor_template = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "BoldFor_kerbdd_lexique_template") != nil {
      let v = ud.bool (forKey: "BoldFor_kerbdd_lexique_template")
      if self.mBoldFor_template != v {
        self.mBoldFor_template = v
        ioStyleDidChange = true
      }
    }
    if ud.string (forKey: "ItalicFor_kerbdd_lexique_template") != nil {
      let v = ud.bool (forKey: "ItalicFor_kerbdd_lexique_template")
      if self.mItalicFor_template != v {
        self.mItalicFor_template = v
        ioStyleDidChange = true
      }
    }
  //--- Build token attribute array
    if ioStyleDidChange {
      let fontManager = NSFontManager.shared
      let boldFont = fontManager.convert (self.mFont.nsFont, toHaveTrait: .boldFontMask)
      let italicFont = fontManager.convert (self.mFont.nsFont, toHaveTrait: .italicFontMask)
      let boldItalicFont = fontManager.convert (boldFont, toHaveTrait: .italicFontMask)
      self.mTokenAttributeArray.removeAll (keepingCapacity: true)
      var attributes = [NSAttributedString.Key : Any] ()
    //--- Attributes for keywordsStyle
      if self.mColorFor_keywordsStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_keywordsStyle)
      }
      if self.mBoldFor_keywordsStyle && self.mItalicFor_keywordsStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_keywordsStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_keywordsStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for integerStyle
      if self.mColorFor_integerStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_integerStyle)
      }
      if self.mBoldFor_integerStyle && self.mItalicFor_integerStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_integerStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_integerStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for stringStyle
      if self.mColorFor_stringStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_stringStyle)
      }
      if self.mBoldFor_stringStyle && self.mItalicFor_stringStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_stringStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_stringStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for delimitersStyle
      if self.mColorFor_delimitersStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_delimitersStyle)
      }
      if self.mBoldFor_delimitersStyle && self.mItalicFor_delimitersStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_delimitersStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_delimitersStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Attributes for commentStyle
      if self.mColorFor_commentStyle != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_commentStyle)
      }
      if self.mBoldFor_commentStyle && self.mItalicFor_commentStyle {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_commentStyle {
        attributes [.font] = boldFont
      }else if self.mItalicFor_commentStyle {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Lexical error
      if self.mColorFor_lexical_error != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_lexical_error)
      }
      if self.mBoldFor_lexical_error && self.mItalicFor_lexical_error {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_lexical_error {
        attributes [.font] = boldFont
      }else if self.mItalicFor_lexical_error {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
      attributes.removeAll (keepingCapacity: true)
    //--- Template
      if self.mColorFor_template != self.mDefaultColor {
        attributes [.foregroundColor] = NSColor (self.mColorFor_template)
      }
      if self.mBoldFor_template && self.mItalicFor_template {
        attributes [.font] = boldItalicFont
      }else if self.mBoldFor_template {
        attributes [.font] = boldFont
      }else if self.mItalicFor_template {
        attributes [.font] = italicFont
      }
      self.mTokenAttributeArray.append (attributes.isEmpty ? nil : attributes)
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func performLexicalColoringAfterUserDefaultChange (textStorage inTextStorage : NSTextStorage) {
    if self.mDebug { Swift.print ("performLexicalColoringAfterUserDefaultChange") }
    let start = Date ()
    var styleDidChange = false
    self.updateTokenStyleArrays (&styleDidChange)
    if styleDidChange {
      let nsString = inTextStorage.string as NSString
      let fullRange = NSRange (location: 0, length: nsString.length)
    //---- Apply default attributes
      let tsDelegate : (any NSTextStorageDelegate)? = inTextStorage.delegate
      inTextStorage.delegate = nil // NSTextStorageDelegate
      inTextStorage.beginEditing ()
      let defaultFont = self.mFont.nsFont
      inTextStorage.font = defaultFont
      let ps = NSMutableParagraphStyle ()
      ps.lineHeightMultiple = CGFloat (self.mLineHeight) / 10.0
      let defaultAttributes : [NSAttributedString.Key : Any] = [
        .font: defaultFont,
        .foregroundColor: NSColor (self.mDefaultColor),
        .paragraphStyle : ps
      ]
      inTextStorage.setAttributes (defaultAttributes, range: fullRange)
    //--- Apply styles
      for token in self.mTokenArray {
        let idx = Int (self.styleIndexFor (token: token.tokenCode))
        if idx > 0, idx < (self.mTokenAttributeArray.count - 1), let attributes = self.mTokenAttributeArray [idx - 1] {
          inTextStorage.addAttributes (attributes, range: token.range)
        }
      }
      inTextStorage.endEditing ()
      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate
    }
    if self.mDebug { Swift.print ("  done: \(Int (Date ().timeIntervalSince (start) * 1000.0)) ms") }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func performLexicalAnalysisAndColoring (textStorage inTextStorage : NSTextStorage,
                                                   editedRange inEditedRange : NSRange,
                                                   changeInLength inDelta : Int,
                                                   popMenuItems ioPopupMenuItems : inout [IdentifiableAttributedString]) {
    if self.mDebug { Swift.print ("performLexicalAnalysisAndColoring \(inEditedRange), delta \(inDelta)") }
    let nsString = inTextStorage.string as NSString
  //---
    var savedTokenCount = 0
    var found = false
    while savedTokenCount < self.mTokenArray.count, !found {
      if self.mTokenArray [savedTokenCount].range.upperBound < inEditedRange.location {
        savedTokenCount += 1
      }else{
        found = true
      }
    }
    if self.mDebug { Swift.print ("  savedTokenCount \(savedTokenCount), currently \(self.mTokenArray.count) tokens") }
  //--- Eliminate tokens beyond end of source string
    while let lastToken = self.mTokenArray.last, lastToken.range.upperBound > nsString.length {
      if self.mVerboseDebug { Swift.print ("Remove last token \(lastToken.range), beyond end") }
      _ = self.mTokenArray.removeLast ()
    }
    if self.mDebug { Swift.print ("  Eliminate token beyond end: \(self.mTokenArray.count) tokens") }
  //--- Translater les tokens suivants
    var i = savedTokenCount + 1
    while i < self.mTokenArray.count {
      let token = self.mTokenArray [i]
      let newToken = LexicalToken (
        range: NSRange (location: token.range.location + inDelta, length: token.range.length),
        tokenCode: token.tokenCode,
        templateDelimiterIndex: token.templateDelimiterIndex
      )
      self.mTokenArray [i] = newToken
      i += 1
    }
  //--- Eliminate tokens beyond end of source string
    while let lastToken = self.mTokenArray.last, lastToken.range.upperBound > nsString.length {
      if self.mVerboseDebug { Swift.print ("Remove last token \(lastToken.range), beyond end") }
      _ = self.mTokenArray.removeLast ()
    }
    if self.mDebug { Swift.print ("  Eliminate token beyond end, after delta correction: \(self.mTokenArray.count) tokens") }
  //--- Perform lexical analysis
    let start = Date ()
    if savedTokenCount == 0 {
      self.resetScannerLocation (withString: nsString)
    }else{
      self.resetScanner (
        withString: nsString,
        location: self.mTokenArray [savedTokenCount-1].range.upperBound,
        templateDelimiterIndex : self.mTokenArray [savedTokenCount-1].templateDelimiterIndex
      )
    }
    if self.mDebug { Swift.print ("  Scanning start location: \(self.currentLocation)") }
    var stop = false
    var insertionIndex = savedTokenCount
    while self.currentLocation < nsString.length, !stop {
      let token : LexicalToken = self.parseLexicalTokenForLexicalColoring ()
      if token.tokenCode > 0 { // For eliminating separators
        if self.mVerboseDebug { Swift.print ("  -> new token \(token.range) '\(nsString.substring (with: token.range))'") }
      //--- Eliminate previous tokens before new token location
        if insertionIndex < self.mTokenArray.count,
              self.mTokenArray [insertionIndex] == token,
              token.range.location > inEditedRange.upperBound {
          if self.mVerboseDebug { Swift.print ("    stop at \(insertionIndex)") }
          stop = true
        }else{
          while insertionIndex < self.mTokenArray.count,
                self.mTokenArray [insertionIndex].range.lowerBound <= token.range.location {
            if self.mVerboseDebug { Swift.print ("    remove token \(self.mTokenArray [insertionIndex].range) at \(insertionIndex)") }
            self.mTokenArray.remove (at: insertionIndex)
          }
          if insertionIndex == self.mTokenArray.count {
            if self.mVerboseDebug { Swift.print ("    append token \(token.range) at \(insertionIndex)") }
            self.mTokenArray.append (token)
            insertionIndex += 1
          }else{
            if self.mVerboseDebug {  Swift.print ("    insert token \(token.range) at \(insertionIndex)") }
            self.mTokenArray.insert (token, at: insertionIndex)
            insertionIndex += 1
          }
        }
      }
    }
    if self.mDebug { Swift.print ("  Lexical analysis time: \(Int (Date ().timeIntervalSince (start) * 1000.0)) ms") }
  //---- Apply default attributes
    let modificationStart = min (inEditedRange.location, (savedTokenCount == 0)
      ? 0
      : self.mTokenArray [savedTokenCount - 1].range.upperBound)
    let modificationEnd = max (inEditedRange.upperBound, (insertionIndex == self.mTokenArray.count)
       ? nsString.length
       : self.mTokenArray [insertionIndex].range.upperBound
    )
    if self.mDebug { Swift.print ("  Attributes will change from char index \(modificationStart) to \(modificationEnd)") }
    let start2 = Date ()
    if modificationStart < modificationEnd {
      let modifiedRange = NSRange (location: modificationStart, length: modificationEnd - modificationStart)
      let tsDelegate : (any NSTextStorageDelegate)? = inTextStorage.delegate
      inTextStorage.delegate = nil // NSTextStorageDelegate
      inTextStorage.beginEditing ()
      let defaultFont = self.mFont.nsFont
      let ps = NSMutableParagraphStyle ()
      ps.lineHeightMultiple = CGFloat (self.mLineHeight) / 10.0
      let defaultAttributes : [NSAttributedString.Key : Any] = [
        .font: defaultFont,
        .foregroundColor: NSColor (self.mDefaultColor),
        .paragraphStyle : ps
      ]
      if self.mVerboseDebug { Swift.print ("Apply default attributes \(modifiedRange)") }
      inTextStorage.setAttributes (defaultAttributes, range: modifiedRange)
    //--- Apply styles
      var idx = 0
      stop = false
      while idx < self.mTokenArray.count, !stop { // Apply token styles
        let token = self.mTokenArray [idx]
        idx += 1
        if token.range.lowerBound >= modifiedRange.upperBound {
          stop = true
        }else if token.range.upperBound > modifiedRange.lowerBound {
          let styleIndex = Int (self.styleIndexFor (token: token.tokenCode))
          if styleIndex > 0, styleIndex < (self.mTokenAttributeArray.count - 1), let attributes = self.mTokenAttributeArray [styleIndex - 1] {
            inTextStorage.addAttributes (attributes, range: token.range)
          }
        }
      }
      inTextStorage.endEditing ()
      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate
    }
    if self.mDebug { Swift.print ("  Adding attributes: \(Int (Date ().timeIntervalSince (start2) * 1000.0)) ms") }
    ioPopupMenuItems = self.updateEntryPopUpButtons (self.mTokenArray)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Lexical analysis
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func parseLexicalTokenForLexicalColoring () -> LexicalToken {
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
    return LexicalToken (
      range: NSRange (location: startLocation, length: self.currentLocation - startLocation),
      tokenCode: tokenCode,
      templateDelimiterIndex: self.mEndTemplateDelimiterIndex
    )
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
//             Key words table 'keyWordList'      
//--------------------------------------------------------------------------------------------------

fileprivate let kDictionary_kerbdd_5F_lexique_keyWordList : [String : UInt16] = [
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

fileprivate func search_into_kerbdd_5F_lexique_keyWordList (_ inSearchedString : String) -> UInt16 {
  return kDictionary_kerbdd_5F_lexique_keyWordList [inSearchedString, default: kerbdd_lexique_1_]
}



//--------------------------------------------------------------------------------------------------

func kerbdd_lexique_lexiqueIdentifier () -> String {
  return "kerbdd_lexique"
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------
//                           Template Replacements
//--------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------
//                           Template Delimiters
//--------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N
//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


