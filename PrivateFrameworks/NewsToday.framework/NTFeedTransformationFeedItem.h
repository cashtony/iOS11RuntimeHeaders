/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTFeedTransformationFeedItem : NSObject <NTFeedTransformationItem> {
    NSDate * _cacheExpirationDate;
    NTPBFeedItem * _feedItem;
    SFSearchResult * _searchResult;
}

@property (nonatomic, readonly, copy) NSDate *cacheCutoffTimeRelativeDate;
@property (nonatomic, readonly, copy) NSDate *cacheExpirationDate;
@property (nonatomic, readonly, copy) NSString *clusterID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEligibleForLeadingCellAppearance, nonatomic, readonly) bool eligibleForLeadingCellAppearance;
@property (nonatomic, readonly, copy) NTPBFeedItem *feedItem;
@property (nonatomic, readonly, copy) NTPBFeedItem *feedItemForHeadlineFetch;
@property (nonatomic, readonly) <FCFeedTransformationItem> *feedTransformationItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool needsFeedItemHeadlinesFetch;
@property (nonatomic, readonly, copy) SFSearchResult *searchResult;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long todayItemType;

- (void).cxx_destruct;
- (id)cacheCutoffTimeRelativeDate;
- (id)cacheExpirationDate;
- (id)clusterID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)feedItem;
- (id)feedItemForHeadlineFetch;
- (id)feedTransformationItem;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithFeedItem:(id)arg1 cacheExpirationDate:(id)arg2;
- (bool)isEligibleForLeadingCellAppearance;
- (bool)isEqual:(id)arg1;
- (bool)needsFeedItemHeadlinesFetch;
- (id)protoitemWithFetchedFeedItemHeadline:(id)arg1;
- (id)searchResult;
- (unsigned long long)todayItemType;

@end
