/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDListDefinition : NSObject <NSCopying> {
    WDDocument * mDocument;
    NSMutableArray * mLevels;
    int  mListDefinitionId;
    NSString * mStyleId;
    NSString * mStyleRefId;
    int  mType;
}

@property (nonatomic, readonly) int listDefinitionId;
@property (nonatomic, readonly) NSString *styleId;
@property (nonatomic, copy) NSString *styleRefId;

- (id)addLevel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithDocument:(id)arg1 listDefinitionId:(int)arg2 styleId:(id)arg3;
- (id)levelAt:(int)arg1;
- (int)levelCount;
- (int)listDefinitionId;
- (void)removeLastLevel;
- (void)setStyleRefId:(id)arg1;
- (void)setType:(int)arg1;
- (id)styleId;
- (id)styleRefId;
- (int)type;

@end