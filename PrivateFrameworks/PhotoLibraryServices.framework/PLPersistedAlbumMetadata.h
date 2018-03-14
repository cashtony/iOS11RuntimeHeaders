/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPersistedAlbumMetadata : NSObject {
    bool  _allowsOverwrite;
    NSMutableOrderedSet * _assetUUIDs;
    NSString * _cloudGUID;
    NSString * _customKeyAssetUUID;
    bool  _customSortAscending;
    int  _customSortKey;
    PLGenericAlbum * _genericAlbum;
    bool  _inTrash;
    bool  _isFolder;
    NSNumber * _kind;
    NSURL * _metadataURL;
    bool  _pinned;
    NSString * _title;
    NSString * _uuid;
}

@property (nonatomic) bool allowsOverwrite;
@property (nonatomic, retain) NSMutableOrderedSet *assetUUIDs;
@property (nonatomic, retain) NSString *cloudGUID;
@property (nonatomic, retain) NSString *customKeyAssetUUID;
@property (nonatomic) bool customSortAscending;
@property (nonatomic) int customSortKey;
@property (nonatomic, retain) PLGenericAlbum *genericAlbum;
@property (getter=isInTrash, nonatomic) bool inTrash;
@property (nonatomic, readonly) bool isFolder;
@property (nonatomic, retain) NSNumber *kind;
@property (nonatomic, retain) NSURL *metadataURL;
@property (getter=isPinned, nonatomic) bool pinned;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *uuid;

+ (bool)isValidPath:(id)arg1;

- (bool)_readMetadata;
- (void)_saveMetadata;
- (bool)allowsOverwrite;
- (id)assetUUIDs;
- (id)cloudGUID;
- (id)customKeyAssetUUID;
- (bool)customSortAscending;
- (int)customSortKey;
- (void)dealloc;
- (id)description;
- (id)genericAlbum;
- (id)init;
- (id)initWithPLGenericAlbum:(id)arg1;
- (id)initWithPersistedDataAtURL:(id)arg1;
- (id)initWithTitle:(id)arg1 uuid:(id)arg2 cloudGUID:(id)arg3 kind:(id)arg4 assetUUIDs:(id)arg5;
- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;
- (bool)isFolder;
- (bool)isInTrash;
- (bool)isPinned;
- (id)kind;
- (id)metadataURL;
- (void)persistAlbumData;
- (void)removePersistedAlbumData;
- (void)setAllowsOverwrite:(bool)arg1;
- (void)setAssetUUIDs:(id)arg1;
- (void)setCloudGUID:(id)arg1;
- (void)setCustomKeyAssetUUID:(id)arg1;
- (void)setCustomSortAscending:(bool)arg1;
- (void)setCustomSortKey:(int)arg1;
- (void)setGenericAlbum:(id)arg1;
- (void)setInTrash:(bool)arg1;
- (void)setKind:(id)arg1;
- (void)setMetadataURL:(id)arg1;
- (void)setPinned:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)title;
- (void)updateChildrenOrderingInAlbum:(id)arg1 includePendingAssetChanges:(bool)arg2;
- (id)uuid;

@end
