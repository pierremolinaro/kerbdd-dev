//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import SwiftUI
import UniformTypeIdentifiers

//--------------------------------------------------------------------------------------------------

extension UTType {
  nonisolated static let kerbdd = UTType (exportedAs: Bundle.main.bundleIdentifier! + ".kerbdd")
}

//--------------------------------------------------------------------------------------------------

extension ProjectDocument {
  static let readableContentTypes : [UTType] = [.kerbdd]
}

//--------------------------------------------------------------------------------------------------
//    Project file extensions
//--------------------------------------------------------------------------------------------------

let projectFileExtensions = Set (["kerbdd"])

//--------------------------------------------------------------------------------------------------
//    Indexing dictionary
//--------------------------------------------------------------------------------------------------

func indexingDescriptorDictionary () -> [String : String] {
 return [:]
}

//--------------------------------------------------------------------------------------------------
//   Scanner for a given extension
//--------------------------------------------------------------------------------------------------

@MainActor func scannerFor (extension inExtension : String) -> AbstractScanner? {
  var result : AbstractScanner? = nil
  let fileExtension = inExtension.lowercased ()
  if fileExtension == "kerbdd" {
    result = ScannerFor_kerbdd_lexique ()
  }
  return result
}

//--------------------------------------------------------------------------------------------------
// Setting View
//--------------------------------------------------------------------------------------------------

struct SettingsView : View {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  enum SidebarItem {
    case commandLineOptions
    case kerbdd_lexique_0
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @State private var mSelection : SidebarItem = .commandLineOptions

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder var body : some View {
    NavigationSplitView {
      List(selection: self.$mSelection) {
        Text ("Options").tag (SidebarItem.commandLineOptions)

        Text ("Source").tag (SidebarItem.kerbdd_lexique_0)
      }
      .toolbar (removing: .sidebarToggle)
    } detail: {
      switch self.mSelection {
        case .commandLineOptions : OptionView ()
        case .kerbdd_lexique_0 : SettingViewFor_kerbdd_lexique ()
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}


//--------------------------------------------------------------------------------------------------
//   Popup list data for 'kerbdd_lexique' lexique
//--------------------------------------------------------------------------------------------------

let gPopUpData_kerbdd_lexique : [[UInt16]] = [

]

//--------------------------------------------------------------------------------------------------
//   Block Comment for 'kerbdd_lexique' lexique
//--------------------------------------------------------------------------------------------------

let gBlockComment_kerbdd_lexique : String? = "#"


//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


