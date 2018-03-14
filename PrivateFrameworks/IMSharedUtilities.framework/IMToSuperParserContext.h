/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMToSuperParserContext : IMXMLParserContext {
    NSString * _backgroundColor;
    NSMutableArray * _backgroundColorStack;
    long long  _baseWritingDirection;
    NSMutableAttributedString * _body;
    unsigned long long  _boldCount;
    NSMutableDictionary * _currentAttributes;
    bool  _didAddBodyAttributes;
    NSMutableArray * _fileTransferGUIDs;
    NSMutableArray * _fontFamilyStack;
    NSMutableArray * _fontSizeStack;
    NSString * _foregroundColor;
    NSMutableArray * _foregroundColorStack;
    unsigned long long  _italicCount;
    NSMutableArray * _linkStack;
    unsigned long long  _messagePartNumber;
    unsigned long long  _strikethroughCount;
    unsigned long long  _underlineCount;
}

@property (nonatomic, copy) NSString *backgroundColor;
@property long long baseWritingDirection;
@property (nonatomic, readonly) NSAttributedString *body;
@property (nonatomic, retain) NSArray *fileTransferGUIDs;
@property (nonatomic, copy) NSString *foregroundColor;

- (void)_clearIvars;
- (void)_incrementMessagePartNumber;
- (void)_initIvars;
- (void)_popValueFromStack:(id)arg1 attributeName:(id)arg2;
- (void)_pushValue:(id)arg1 ontoStack:(id)arg2 attributeName:(id)arg3;
- (void)_updateFontFamily;
- (void)_updateFontSize;
- (void)appendBreadcrumbText:(id)arg1 withOptions:(unsigned int)arg2;
- (void)appendFileTransferWithGUID:(id)arg1;
- (void)appendInlineImageWithGUID:(id)arg1 filename:(id)arg2 width:(long long)arg3 height:(long long)arg4;
- (void)appendInlineImageWithGUID:(id)arg1 filename:(id)arg2 width:(long long)arg3 height:(long long)arg4 emoji:(long long)arg5;
- (void)appendString:(id)arg1;
- (id)backgroundColor;
- (long long)baseWritingDirection;
- (id)body;
- (void)dealloc;
- (void)decrementBoldCount;
- (void)decrementItalicCount;
- (void)decrementStrikethroughCount;
- (void)decrementUnderlineCount;
- (id)fileTransferGUIDs;
- (id)foregroundColor;
- (void)incrementBoldCount;
- (void)incrementItalicCount;
- (void)incrementStrikethroughCount;
- (void)incrementUnderlineCount;
- (id)name;
- (void)popBackgroundColor;
- (void)popFontFamily;
- (void)popFontSize;
- (void)popForegroundColor;
- (void)popLink;
- (void)pushBackgroundColor:(id)arg1;
- (void)pushFontFamily:(id)arg1;
- (void)pushFontSize:(id)arg1;
- (void)pushForegroundColor:(id)arg1;
- (void)pushLink:(id)arg1;
- (void)reset;
- (id)resultsForLogging;
- (void)setBackgroundColor:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1;
- (void)setFileTransferGUIDs:(id)arg1;
- (void)setForegroundColor:(id)arg1;

@end
