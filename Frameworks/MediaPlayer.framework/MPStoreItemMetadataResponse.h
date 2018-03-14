/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreItemMetadataResponse : NSObject <NSCopying> {
    bool  _finalResponse;
    NSMutableDictionary * _itemIdentifierToStoreItemMetadata;
    NSArray * _lastBatchItemIdentifiers;
    NSArray * _requestItemIdentifiers;
}

@property (nonatomic, readonly, copy) NSDate *earliestExpirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (getter=isFinalResponse, nonatomic) bool finalResponse;
@property (nonatomic, readonly, copy) NSArray *itemIdentifiers;
@property (nonatomic, copy) NSArray *lastBatchItemIdentifiers;
@property (nonatomic, copy) NSArray *requestItemIdentifiers;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)earliestExpirationDate;
- (bool)isExpired;
- (bool)isFinalResponse;
- (id)itemIdentifiers;
- (id)lastBatchItemIdentifiers;
- (id)requestItemIdentifiers;
- (void)setFinalResponse:(bool)arg1;
- (void)setLastBatchItemIdentifiers:(id)arg1;
- (void)setRequestItemIdentifiers:(id)arg1;
- (void)setStoreItemMetadata:(id)arg1 forItemIdentifier:(id)arg2;
- (id)storeItemMetadataForItemIdentifier:(id)arg1;
- (id)storeItemMetadataForItemIdentifier:(id)arg1 returningIsFinalMetadata:(bool*)arg2;

@end
