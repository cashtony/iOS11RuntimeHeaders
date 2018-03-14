/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface TTTextController : NSObject <TTTextStorageStyler> {
    double  _bodyStyleFontSizeThreshold;
    double  _headingStyleFontSizeThreshold;
    bool  _keepNSTextTableAttributes;
    TTZoomController * _zoomController;
}

@property (nonatomic) double bodyStyleFontSizeThreshold;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double headingStyleFontSizeThreshold;
@property (nonatomic) bool keepNSTextTableAttributes;
@property (readonly) Class superclass;
@property (nonatomic, retain) TTZoomController *zoomController;

+ (double)attachmentParagraphSpacing;
+ (double)attachmentParagraphSpacingBefore;
+ (double)bodyParagraphSpacing;
+ (double)bodyParagraphSpacingBefore;
+ (struct UIFont { Class x1; }*)preferredFontForTTTextStyle:(unsigned int)arg1;
+ (double)superscriptScaleFactor;

- (void).cxx_destruct;
- (void)addBIToStyle:(id)arg1;
- (void)addLetterpressInTextStorage:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)bodyAttributes;
- (id)bodyAttributesWithContentSizeCategory:(id)arg1;
- (double)bodyStyleFontSizeThreshold;
- (id)captionAttributes;
- (id)captionAttributesWithContentSizeCategory:(id)arg1;
- (id)checklistAttributes;
- (id)checklistAttributesWithContentSizeCategory:(id)arg1;
- (id)copyAttribute:(id)arg1 fromAttributes:(id)arg2 toAttributes:(id)arg3;
- (id)copyNSParagraphStylefromAttributes:(id)arg1 toAttributes:(id)arg2;
- (id)defaultListAttributes;
- (id)defaultListAttributesWithContentSizeCategory:(id)arg1;
- (id)defaultParagraphStyle;
- (id)defaultTypingAttributesForEmptyDocument;
- (id)filterStyleAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)fixModelAttributesInTextStorage:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)fixedWidthAttributes;
- (id)fixedWidthAttributesWithContentSizeCategory:(id)arg1;
- (void)guessFontSizeThresholdsForTTStylesInAttributedString:(id)arg1;
- (id)headingAttributes;
- (id)headingAttributesWithContentSizeCategory:(id)arg1;
- (double)headingStyleFontSizeThreshold;
- (id)init;
- (bool)keepNSTextTableAttributes;
- (id)modelForStyleAttributes:(id)arg1 filterAttributes:(bool)arg2;
- (id)preferredAttributesForTTTextStyle:(unsigned int)arg1;
- (id)referenceAttributesForLocation:(unsigned long long)arg1 textStorage:(id)arg2 currentParagraphStart:(unsigned long long)arg3;
- (id)removeAttribute:(id)arg1 ifInconsistentAtLocation:(unsigned long long)arg2 inTextStorage:(id)arg3 forNewTypingAttributes:(id)arg4;
- (void)removeLetterpressInTextStorage:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)resetGuessedFontSizes;
- (void)setBodyStyleFontSizeThreshold:(double)arg1;
- (void)setHeadingStyleFontSizeThreshold:(double)arg1;
- (void)setKeepNSTextTableAttributes:(bool)arg1;
- (void)setZoomController:(id)arg1;
- (id)strippedTypingAttributesForEmptyParagraph:(id)arg1 atTheEndOfDocument:(bool)arg2 isTyping:(bool)arg3;
- (void)styleFontInAttributedString:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 contentSizeCategory:(id)arg3;
- (void)styleFontInTextStorage:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)styleForModelAttributes:(id)arg1;
- (id)styleForModelAttributes:(id)arg1 contentSizeCategory:(id)arg2;
- (void)styleListsAndIndentsInAttributedString:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)styleText:(id)arg1 inExactRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 fixModelAttributes:(bool)arg3;
- (void)styleText:(id)arg1 inExactRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 fixModelAttributes:(bool)arg3 enableLetterpress:(bool)arg4;
- (void)styleText:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 fixModelAttributes:(bool)arg3;
- (id)subheadingAttributes;
- (id)subheadingAttributesWithContentSizeCategory:(id)arg1;
- (id)titleAttributes;
- (id)titleAttributesWithContentSizeCategory:(id)arg1;
- (id)typingAttributesForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 forSelectionChange:(bool)arg2 currentTypingAttributes:(id)arg3 inTextStorage:(id)arg4;
- (id)zoomController;

@end
