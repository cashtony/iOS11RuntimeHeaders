/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPDocumentRoot : TSKDocumentRoot <TSWPObjectIndex> {
    bool  _didRemoveMissingAttachments;
    NSUUID * _uuid;
}

@property (getter=isChangeTrackingEnabled, nonatomic, readonly) bool changeTrackingEnabled;
@property (nonatomic) bool didRemoveMissingAttachments;
@property (nonatomic, readonly) EQKitEnvironment *equationEnvironment;
@property (nonatomic, readonly) double stickyCommentScaleMultiplier;
@property (nonatomic, readonly) bool supportHeaderFooterParagraphAlignmentInInspectors;

- (double)bodyWidth;
- (bool)cellCommentsAllowedOnInfo:(id)arg1;
- (id)changeSessionManagerForModel:(id)arg1;
- (id)changeVisibility;
- (bool)didRemoveMissingAttachments;
- (void)documentDidLoad;
- (id)documentFonts;
- (id)documentId;
- (id)documentTSWPFontObjects;
- (id)equationEnvironment;
- (id)flowInfoContainer;
- (struct __CFLocale { }*)hyphenationLocale;
- (bool)isChangeTrackingEnabled;
- (bool)isDrawableOnPageMaster:(id)arg1;
- (int)naturalAlignmentAtCharIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (id)p_fontsInStylesheetUsingBlock:(id /* block */)arg1;
- (void)setDidRemoveMissingAttachments:(bool)arg1;
- (bool)shouldHyphenate;
- (double)stickyCommentScaleMultiplier;
- (bool)supportHeaderFooterParagraphAlignmentInInspectors;
- (id)unavailableDocumentFonts;
- (bool)useLigatures;
- (int)verticalAlignmentForTextStorage:(id)arg1;
- (void)willClose;

@end