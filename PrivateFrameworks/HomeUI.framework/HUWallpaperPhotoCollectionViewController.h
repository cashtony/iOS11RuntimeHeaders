/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUWallpaperPhotoCollectionViewController : UICollectionViewController <PHPhotoLibraryChangeObserver> {
    long long  _assetCollectionSubtype;
    PHFetchResult * _assetsFetchResult;
    <HUWallpaperPhotoCollectionViewControllerDelegate> * _delegate;
    HUWallpaperPhotoCollectionFlowLayout * _flowLayout;
    NAFuture * _imageDownloadFuture;
    PHCachingImageManager * _imageManager;
    bool  _initialScrollToBottom;
}

@property (nonatomic, readonly) long long assetCollectionSubtype;
@property (nonatomic, retain) PHFetchResult *assetsFetchResult;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <HUWallpaperPhotoCollectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) HUWallpaperPhotoCollectionFlowLayout *flowLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NAFuture *imageDownloadFuture;
@property (nonatomic, retain) PHCachingImageManager *imageManager;
@property (nonatomic) bool initialScrollToBottom;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)assetCollectionSubtype;
- (id)assetsFetchResult;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (id)flowLayout;
- (id)imageDownloadFuture;
- (id)imageFutureForAsset:(id)arg1 cloudAllowed:(bool)arg2;
- (id)imageManager;
- (id)initWithTitle:(id)arg1 fetchResult:(id)arg2 assetCollectionSubtype:(long long)arg3 delegate:(id)arg4;
- (bool)initialScrollToBottom;
- (void)photoLibraryDidChange:(id)arg1;
- (void)setAssetsFetchResult:(id)arg1;
- (void)setFlowLayout:(id)arg1;
- (void)setImageDownloadFuture:(id)arg1;
- (void)setImageManager:(id)arg1;
- (void)setInitialScrollToBottom:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
