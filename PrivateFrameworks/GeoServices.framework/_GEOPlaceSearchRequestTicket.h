/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceSearchRequestTicket : _GEOPlaceRequestTicket <GEOMapServiceSearchTicket>

@property (nonatomic, readonly) NSArray *browseCategories;
@property (nonatomic) unsigned long long cachePolicy;
@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (getter=isChainResultSet, nonatomic, readonly) bool chainResultSet;
@property (nonatomic, readonly) GEOResolvedItem *clientResolvedResult;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEODirectionIntent *directionIntent;
@property (nonatomic, readonly) NSArray *displayHeaderSubstitutes;
@property (nonatomic, readonly) unsigned int dymSuggestionVisibleTime;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *relatedSearchSuggestions;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (nonatomic, readonly) GEOMapRegion *resultBoundingRegion;
@property (nonatomic, readonly) NSString *resultDisplayHeader;
@property (nonatomic, readonly) NSString *resultSectionHeader;
@property (nonatomic, readonly) NSString *searchQuery;
@property (nonatomic, readonly) int searchResultType;
@property (nonatomic, readonly) bool shouldEnableRedoSearch;
@property (nonatomic, readonly) bool showDymSuggestionCloseButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (id)searchQuery;

@end
