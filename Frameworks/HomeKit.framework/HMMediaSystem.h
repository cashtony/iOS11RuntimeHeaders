/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMMediaSystem : NSObject <HFMediaProfileContainer, HMAccessorySettingsContainer, HMApplicationData, HMMediaObject> {
    bool  _compatible;
    NSArray * _components;
    <HMMediaSystemDelegate> * _delegate;
    HMHome * _home;
    NSString * _name;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, readonly) HMApplicationData *applicationData;
@property (getter=isCompatible, nonatomic, readonly) bool compatible;
@property (nonatomic, readonly) NSArray *components;
@property (readonly) HMHome *containerHome;
@property (readonly, copy) NSString *debugDescription;
@property <HMMediaObjectDelegate> *delegate;
@property <HMMediaSystemDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMAccessory *hf_backingAccessory;
@property (nonatomic, readonly, copy) NSDate *hf_dateAdded;
@property (nonatomic, readonly) NSSet *hf_dependentHomeKitObjects;
@property (nonatomic, readonly, copy) NSString *hf_displayName;
@property (nonatomic, readonly) bool hf_hasSetFavorite;
@property (nonatomic, readonly) HMHome *hf_home;
@property (nonatomic, readonly) bool hf_isCurrentAccessory;
@property (nonatomic, readonly) bool hf_isFavorite;
@property (nonatomic, readonly) bool hf_isReachable;
@property (nonatomic, readonly) <HFMediaValueSource> *hf_mediaValueSource;
@property (nonatomic, readonly) HMRoom *hf_parentRoom;
@property (nonatomic, readonly) NSString *hf_prettyDescription;
@property (nonatomic, readonly) HMRemoteLoginHandler *hf_remoteLoginHandler;
@property (nonatomic, readonly) HFServiceNameComponents *hf_serviceNameComponents;
@property (nonatomic, readonly) HFAccessorySettingAdapterManager *hf_settingsAdapterManager;
@property (nonatomic, readonly) HFMediaProfileContainerSettingsValueManager *hf_settingsValueManager;
@property (nonatomic, readonly) bool hf_shouldShowInFavorites;
@property (nonatomic, readonly) bool hf_supportsSoftwareUpdate;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) bool isContainedWithinItemGroup;
@property (nonatomic, readonly) bool isItemGroup;
@property (readonly, copy) HMMediaSession *mediaSession;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfItemsContainedWithinGroup;
@property (readonly) HMAccessorySettings *settings;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (void).cxx_destruct;
- (id)applicationData;
- (id)components;
- (id)containerHome;
- (id)delegate;
- (id)home;
- (bool)isCompatible;
- (id)mediaSession;
- (id)name;
- (void)setDelegate:(id)arg1;
- (id)settings;
- (id)uniqueIdentifier;
- (void)updateApplicationData:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)accessories;
- (id)hf_accessoryForRole:(id)arg1;
- (id)hf_appleMusicCompleteLoginWithAuthenticationResults:(id)arg1;
- (id)hf_appleMusicCurrentLoggedInAccount;
- (id)hf_appleMusicCurrentLoggedInAccountDSID;
- (id)hf_appleMusicLoginWithAccount:(id)arg1;
- (id)hf_appleMusicLogout;
- (id)hf_backingAccessory;
- (id)hf_dateAdded;
- (id)hf_dependentHomeKitObjects;
- (id)hf_displayName;
- (id)hf_fetchLog:(id)arg1 timeout:(double)arg2;
- (id)hf_fetchLogListWithTimeout:(double)arg1;
- (bool)hf_hasSetFavorite;
- (id)hf_home;
- (id)hf_idsDeviceIdentifierWithError:(id*)arg1;
- (bool)hf_isCurrentAccessory;
- (bool)hf_isFavorite;
- (bool)hf_isReachable;
- (id)hf_mediaValueSource;
- (id)hf_parentRoom;
- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_remoteLoginHandler;
- (id)hf_roleForAccessory:(id)arg1;
- (id)hf_serializedStateDumpRepresentation;
- (id)hf_serviceNameComponents;
- (id)hf_settingsAdapterManager;
- (id)hf_settingsValueManager;
- (bool)hf_shouldShowInFavorites;
- (bool)hf_supportsSoftwareUpdate;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateIsFavorite:(bool)arg1;
- (id)homeKitObject;
- (bool)isContainedWithinItemGroup;
- (bool)isItemGroup;
- (unsigned long long)numberOfItemsContainedWithinGroup;

@end
