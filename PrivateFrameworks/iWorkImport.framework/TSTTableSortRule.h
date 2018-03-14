/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableSortRule : NSObject <NSCopying> {
    unsigned char  mColumnIndex;
    int  mDirection;
}

@property (nonatomic, readonly) unsigned char columnIndex;
@property (nonatomic, readonly) int direction;

+ (id)ruleWithColumnIndex:(unsigned char)arg1 direction:(int)arg2;

- (unsigned char)columnIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)direction;
- (void)encodeToArchive:(struct TableSortOrderArchive_SortRuleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; int x6; }*)arg1;
- (unsigned long long)hash;
- (id)initFromArchive:(const struct TableSortOrderArchive_SortRuleArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned int x5; int x6; }*)arg1;
- (id)initWithColumnIndex:(unsigned char)arg1 direction:(int)arg2;
- (bool)isEqual:(id)arg1;
- (id)ruleByChangingColumnIndexTo:(unsigned char)arg1;
- (id)ruleByChangingDirectionTo:(int)arg1;

@end
