/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUUIAlbumListViewController : PUAlbumListViewController <PUPhotoPickerServicesConsumer> {
    unsigned long long  __imagePickerAssetTypes;
    PUUIImagePickerControllerHelper * __imagePickerControllerHelper;
    NSArray * __imagePickerMediaTypes;
    bool  _collectionsFetchResultIsValid;
    UIBarButtonItem * _imagePickerCancelButton;
    <PUPhotoPicker> * _photoPicker;
}

@property (setter=_setImagePickerAssetTypes:, nonatomic) unsigned long long _imagePickerAssetTypes;
@property (setter=_setImagePickerMediaTypes:, nonatomic, copy) NSArray *_imagePickerMediaTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PUPhotoPicker> *photoPicker;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleImagePickerCancel:(id)arg1;
- (unsigned long long)_imagePickerAssetTypes;
- (id)_imagePickerControllerHelper;
- (id)_imagePickerMediaTypes;
- (void)_invalidateCollectionsFetchResult;
- (void)_setImagePickerAssetTypes:(unsigned long long)arg1;
- (void)_setImagePickerMediaTypes:(id)arg1;
- (void)_updateCollectionsFetchResultIfNeeded;
- (id)assetsFilterPredicate;
- (long long)filteringAssetTypes;
- (id)init;
- (void)loadView;
- (id)newGridViewControllerForAllPhotos;
- (id)newGridViewControllerForAssetCollection:(id)arg1;
- (id)newGridViewControllerForFolder:(id)arg1;
- (id)photoPicker;
- (bool)pu_wantsNavigationBarVisible;
- (void)setPhotoPicker:(id)arg1;
- (void)setPhotoPickerMediaTypes:(id)arg1;
- (bool)shouldAllowEmailInAlbumSubtitle;
- (bool)shouldHideEmptyCollections;
- (bool)shouldShowAllPhotosItem;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateNavigationBarAnimated:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
