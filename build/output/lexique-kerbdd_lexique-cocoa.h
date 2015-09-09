//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#import "OC_Lexique.h"

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    E X T E R N    R O U T I N E S                                                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    E X T E R N    F U N C T I O N S                                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N                                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

enum {kerbdd_lexique_1_,
  kerbdd_lexique_1_identifier,
  kerbdd_lexique_1_integer,
  kerbdd_lexique_1_literal_5F_string,
  kerbdd_lexique_1_comment,
  kerbdd_lexique_1_nodeHashMapSize,
  kerbdd_lexique_1_andCacheMapSize,
  kerbdd_lexique_1_domain,
  kerbdd_lexique_1_bool,
  kerbdd_lexique_1_true,
  kerbdd_lexique_1_false,
  kerbdd_lexique_1_display,
  kerbdd_lexique_1_include,
  kerbdd_lexique_1_graphviz,
  kerbdd_lexique_1_dump,
  kerbdd_lexique_1__28_,
  kerbdd_lexique_1__29_,
  kerbdd_lexique_1__5B_,
  kerbdd_lexique_1__5D_,
  kerbdd_lexique_1__7B_,
  kerbdd_lexique_1__7D_,
  kerbdd_lexique_1__3A__3D_,
  kerbdd_lexique_1__3A_,
  kerbdd_lexique_1__2E_,
  kerbdd_lexique_1__2E__2E_,
  kerbdd_lexique_1__2B__3D_,
  kerbdd_lexique_1__2D__3D_,
  kerbdd_lexique_1__2D__3E_,
  kerbdd_lexique_1__26_,
  kerbdd_lexique_1__7C_,
  kerbdd_lexique_1__5E_,
  kerbdd_lexique_1__7E_,
  kerbdd_lexique_1__2C_,
  kerbdd_lexique_1__3F_,
  kerbdd_lexique_1__21_,
  kerbdd_lexique_1__3B_,
  kerbdd_lexique_1__3D_,
  kerbdd_lexique_1__21__3D_,
  kerbdd_lexique_1__3C_,
  kerbdd_lexique_1__3C__3D_,
  kerbdd_lexique_1__3E_,
  kerbdd_lexique_1__3E__3D_
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     S C A N N E R    C L A S S                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

@interface OC_Lexique_kerbdd_lexique : OC_Lexique {
//--- Attributes
  @private NSMutableString * mLexicalAttribute_tokenString ;
  @private UInt32 mLexicalAttribute_uint32value ;

}

- (NSUInteger) terminalVocabularyCount ;

- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal ;

- (void) parseLexicalTokenForLexicalColoring ;

- (NSUInteger) styleCount ;

- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex ;

- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex ;

- (NSString *) indexingDirectory ;

- (NSArray *) indexingTitles ; // Array of NSString

- (BOOL) isTemplateLexique ;

- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex ;

@end

//---------------------------------------------------------------------------------------------------------------------*
//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

