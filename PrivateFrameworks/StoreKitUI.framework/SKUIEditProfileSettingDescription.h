/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIEditProfileSettingDescription : SKUISettingDescription <SKUIProfileImagePickerDelegate, SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> {
    id /* block */  _commitBlock;
    bool  _editing;
    bool  _handleValid;
    NSRegularExpression * _handleValidation;
    NSOperationQueue * _operationQueue;
    bool  _suggestedHandlesDisplayed;
    SKUISettingValueStore * _valueStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic, readonly) bool editing;
@property (nonatomic, copy) NSString *handle;
@property (getter=isHandleValid, nonatomic, readonly) bool handleValid;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly, copy) UIImage *photo;
@property (readonly) Class superclass;

+ (Class)_viewClassForSettingDescription:(id)arg1;
+ (bool)allowsEdit;

- (void).cxx_destruct;
- (void)_authenticateOnCompletion:(id /* block */)arg1;
- (void)_displayFooter:(id)arg1;
- (void)_displayRules:(bool)arg1;
- (void)_displaySuggestedHandles:(id)arg1;
- (void)_enterEditMode;
- (void)_fetchAccountInfo;
- (void)_fetchProfilePhoto;
- (void)_fetchSuggestedHandles;
- (void)_finalizeCommitWithSuccess:(bool)arg1 error:(id)arg2;
- (void)_hideFooter;
- (void)_hideSuggestedHandles;
- (void)_leaveEditMode;
- (void)_reloadData;
- (void)_updateAccountInfo;
- (void)_updateValidity;
- (void)_uploadProfileImage:(id)arg1;
- (bool)_validateHandle:(id)arg1;
- (bool)_validateName:(id)arg1;
- (id)_valueStore;
- (bool)allowsSelection;
- (void)beginEditing;
- (void)cancelEdits;
- (void)chooseNewProfilePhoto;
- (bool)commitEdits:(id /* block */)arg1;
- (void)dealloc;
- (void)discardEdits;
- (id)handle;
- (id)initWithViewElement:(id)arg1 parent:(id)arg2;
- (bool)isEditing;
- (bool)isHandleValid;
- (id)name;
- (id)photo;
- (void)profileImagePicker:(id)arg1 didPickProfileImage:(id)arg2 withCropRect:(id)arg3;
- (void)profileImagePickerDidCancel:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoto:(id)arg1 withCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)suggestedHandlesSettingsHeaderFooterDescription:(id)arg1 didSelectSuggestedHandle:(id)arg2;

@end
