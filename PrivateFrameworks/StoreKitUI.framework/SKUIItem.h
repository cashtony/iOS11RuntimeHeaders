/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIItem : NSObject <SKUICacheCoding, SSMetricsEventFieldProvider> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _ageBandRange;
    NSString * _artistName;
    <SKUIArtworkProviding> * _artworksProvider;
    NSString * _bundleID;
    NSString * _categoryName;
    NSString * _collectionName;
    unsigned long long  _deviceFamilies;
    NSString * _editorialBadge;
    NSString * _editorialBage;
    NSString * _feedUrlString;
    bool  _gameControllerSupported;
    bool  _hasInAppPurchases;
    bool  _hasMessagesExtension;
    bool  _isHiddenFromSpringBoard;
    long long  _itemIdentifier;
    long long  _itemKind;
    NSString * _itemKindString;
    SKUIItemOffer * _itemOffer;
    bool  _newsstandApp;
    <SKUIArtworkProviding> * _newsstandArtworks;
    long long  _newsstandBindingEdge;
    long long  _newsstandBindingType;
    long long  _numberOfChildItems;
    long long  _numberOfUserRatings;
    long long  _parentalControlsRank;
    bool  _prerenderedArtwork;
    NSString * _productPageURLString;
    NSArray * _requiredCapabilities;
    bool  _requiresGameController;
    SKUIStoreIdentifier * _storeIdentifier;
    NSString * _title;
    float  _userRating;
    long long  _versionIdentifier;
    NSString * _versionString;
    NSArray * _videos;
}

@property (nonatomic, readonly) NSString *_downloadKind;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } ageBandRange;
@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) UIImage *artworkImage;
@property (nonatomic, readonly) <SKUIArtworkProviding> *artworksProvider;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;
@property (nonatomic, readonly) NSString *categoryName;
@property (nonatomic, readonly) NSArray *childItemIdentifiers;
@property (nonatomic, readonly) NSString *collectionName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long deviceFamilies;
@property (nonatomic, readonly) NSString *editorialBadge;
@property (nonatomic, readonly) bool gameControllerSupported;
@property (nonatomic, readonly) bool hasInAppPurchases;
@property (nonatomic, readonly) bool hasMessagesExtension;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isHiddenFromSpringBoard;
@property (nonatomic, readonly) long long itemIdentifier;
@property (nonatomic, readonly) long long itemKind;
@property (nonatomic, readonly) NSString *itemKindString;
@property (nonatomic, readonly) NSURL *largestArtworkURL;
@property (nonatomic, readonly) NSArray *loadedChildItems;
@property (getter=isNewsstandApp, nonatomic, readonly) bool newsstandApp;
@property (nonatomic, readonly) <SKUIArtworkProviding> *newsstandArtworks;
@property (nonatomic, readonly) long long newsstandBindingEdge;
@property (nonatomic, readonly) long long newsstandBindingType;
@property (nonatomic, readonly) long long numberOfChildItems;
@property (nonatomic, readonly) long long numberOfUserRatings;
@property (nonatomic, readonly) long long parentalControlsRank;
@property (getter=hasPrerenderedArtwork, nonatomic, readonly) bool prerenderedArtwork;
@property (nonatomic, readonly) SKUIItemOffer *primaryItemOffer;
@property (nonatomic, readonly) NSString *productPageURLString;
@property (nonatomic, readonly) NSArray *requiredCapabilities;
@property (nonatomic, readonly) bool requiresGameController;
@property (nonatomic, copy) SKUIStoreIdentifier *storeIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) float userRating;
@property (nonatomic, readonly) long long versionIdentifier;
@property (nonatomic, readonly) NSString *versionString;
@property (nonatomic, readonly) NSArray *videos;

- (void).cxx_destruct;
- (id)_downloadKind;
- (void)_setHasInAppPurchases:(bool)arg1;
- (void)addItemOfferParameterWithName:(id)arg1 value:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ageBandRange;
- (id)artistName;
- (id)artworkImage;
- (id)artworkURLForSize:(long long)arg1;
- (id)artworksProvider;
- (id)bundleIdentifier;
- (id)cacheRepresentation;
- (id)categoryName;
- (id)childItemForIdentifier:(id)arg1;
- (id)childItemIdentifiers;
- (id)collectionName;
- (unsigned long long)deviceFamilies;
- (id)editorialBadge;
- (bool)gameControllerSupported;
- (bool)hasInAppPurchases;
- (bool)hasMessagesExtension;
- (bool)hasPrerenderedArtwork;
- (unsigned long long)hash;
- (id)initContainerItemWithItem:(id)arg1;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithLookupDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHiddenFromSpringBoard;
- (bool)isNewsstandApp;
- (long long)itemIdentifier;
- (long long)itemKind;
- (id)itemKindString;
- (id)largestArtworkURL;
- (id)loadedChildItems;
- (id)lookupDictionary;
- (id)newsstandArtworks;
- (long long)newsstandBindingEdge;
- (long long)newsstandBindingType;
- (long long)numberOfChildItems;
- (long long)numberOfUserRatings;
- (long long)parentalControlsRank;
- (id)primaryItemOffer;
- (id)productPageURLString;
- (id)requiredCapabilities;
- (bool)requiresGameController;
- (void)setItemIdentifier:(long long)arg1;
- (void)setItemKind:(long long)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)storeIdentifier;
- (id)title;
- (float)userRating;
- (id)valueForMetricsField:(id)arg1;
- (long long)versionIdentifier;
- (id)versionString;
- (id)videos;

@end
