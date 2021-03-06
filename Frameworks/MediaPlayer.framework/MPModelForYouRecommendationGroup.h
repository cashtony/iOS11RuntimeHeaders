/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelForYouRecommendationGroup : MPModelObject {
    unsigned long long  _groupType;
    NSDate * _lastUpdatedDate;
    NSURL * _loadAdditionalContentURL;
    NSURL * _refreshURL;
    long long  _sectionIndex;
    MPSectionedCollection * _sectionedItems;
    NSArray * _subgroups;
    NSString * _title;
}

@property (nonatomic) unsigned long long groupType;
@property (nonatomic, retain) NSDate *lastUpdatedDate;
@property (nonatomic, copy) NSURL *loadAdditionalContentURL;
@property (nonatomic, copy) NSURL *refreshURL;
@property (nonatomic) long long sectionIndex;
@property (nonatomic, retain) MPSectionedCollection *sectionedItems;
@property (nonatomic, copy) NSArray *subgroups;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)__MPModelForYouRecommendationGroupPropertyGroupType__PROPERTY;
+ (id)__MPModelForYouRecommendationGroupPropertyLastUpdatedDate__PROPERTY;
+ (id)__MPModelForYouRecommendationGroupPropertyLoadAdditionalContentURL__PROPERTY;
+ (id)__MPModelForYouRecommendationGroupPropertyRefreshURL__PROPERTY;
+ (id)__MPModelForYouRecommendationGroupPropertySectionIndex__PROPERTY;
+ (id)__MPModelForYouRecommendationGroupPropertySectionedItems__PROPERTY;
+ (id)__MPModelForYouRecommendationGroupPropertySubgroups__PROPERTY;
+ (id)__MPModelForYouRecommendationGroupPropertyTitle__PROPERTY;
+ (id)__groupType__KEY;
+ (id)__lastUpdatedDate__KEY;
+ (id)__loadAdditionalContentURL__KEY;
+ (id)__refreshURL__KEY;
+ (id)__sectionIndex__KEY;
+ (id)__sectionedItems__KEY;
+ (id)__subgroups__KEY;
+ (id)__title__KEY;

- (void).cxx_destruct;
- (id)descriptionWithType:(long long)arg1;
- (unsigned long long)groupType;
- (id)itemAtIndex:(long long)arg1;
- (id)lastUpdatedDate;
- (id)loadAdditionalContentURL;
- (long long)numberOfItems;
- (id)refreshURL;
- (long long)sectionIndex;
- (id)sectionedItems;
- (void)setGroupType:(unsigned long long)arg1;
- (void)setLastUpdatedDate:(id)arg1;
- (void)setLoadAdditionalContentURL:(id)arg1;
- (void)setRefreshURL:(id)arg1;
- (void)setSectionIndex:(long long)arg1;
- (void)setSectionedItems:(id)arg1;
- (void)setSubgroups:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subgroups;
- (id)title;

// Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync

- (void)enumerateItemsUsingBlock:(id /* block */)arg1;

@end
