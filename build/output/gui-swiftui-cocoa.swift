//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

import SwiftUI

//--------------------------------------------------------------------------------------------------
//    Project file extensions
//--------------------------------------------------------------------------------------------------

func indexingDescriptorDictionary () -> [String : String] {
 return [:]
}

//--------------------------------------------------------------------------------------------------
//   Scanner for a given extension
//--------------------------------------------------------------------------------------------------

@MainActor func scannerFor (extension inExtension : String) -> SWIFT_Scanner? {
  var result : SWIFT_Scanner? = nil
  if inExtension.compare ("kerbdd", options: .caseInsensitive) == .orderedSame {
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
    case kerbdd_lexique
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @State private var mSelection : SidebarItem = .commandLineOptions

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  @ViewBuilder var body : some View {
    NavigationSplitView {
      List(selection: self.$mSelection) {
        Text ("Options").tag (SidebarItem.commandLineOptions)

        Text ("Source").tag (SidebarItem.kerbdd_lexique)
      }
      .toolbar (removing: .sidebarToggle)
    } detail: {
      switch self.mSelection {
        case .commandLineOptions : OptionView ()
        case .kerbdd_lexique : SettingViewFor_kerbdd_lexique ()
      }
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


