/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMUserDefaults : NSObject <IMUserDefaults>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (bool)isAbsintheV4Enabled;
+ (bool)isBAACertEnabled;
+ (bool)isDebugPiscoLoggingEnabled;
+ (bool)isDeviceScoringEnabled;
+ (bool)isEngramEnabled;
+ (bool)isLiveDeliveryWarmUpEnabled;
+ (bool)isPiscoEnabled;
+ (long long)phoneNumberValidationMode;
+ (id)phoneNumberValidationPreflightTestData;
+ (void)setEnableAbsintheV4:(bool)arg1;
+ (void)setEnableBAACert:(bool)arg1;
+ (void)setEnableDebugPiscoLogging:(bool)arg1;
+ (void)setEnableDeviceScoring:(bool)arg1;
+ (void)setEnableEngram:(bool)arg1;
+ (void)setEnableLiveDeliveryWarmUp:(bool)arg1;
+ (void)setEnablePisco:(bool)arg1;
+ (void)setPhoneNumberValidationMode:(long long)arg1;
+ (void)setPhoneNumberValidationPreflightTestData:(id)arg1;
+ (id)sharedDefaults;

- (bool)appBoolByHostForKey:(id)arg1;
- (bool)appBoolForKey:(id)arg1;
- (id)appValueForKey:(id)arg1;
- (id)copyKeyListForAppID:(id)arg1;
- (id)copyKeyListForApplicationID:(struct __CFString { }*)arg1 userName:(struct __CFString { }*)arg2 hostName:(struct __CFString { }*)arg3;
- (id)copyMultipleForCurrentKeys:(id)arg1 appID:(id)arg2;
- (id)copyMultipleForCurrentKeys:(id)arg1 applicationID:(struct __CFString { }*)arg2 userName:(struct __CFString { }*)arg3 hostName:(struct __CFString { }*)arg4;
- (id)copyValueForKey:(id)arg1 appID:(id)arg2;
- (id)copyValueForKey:(id)arg1 applicationID:(struct __CFString { }*)arg2 userName:(struct __CFString { }*)arg3 hostName:(struct __CFString { }*)arg4;
- (void)removeAppValueForKey:(id)arg1;
- (void)setAppBool:(bool)arg1 byHostForKey:(id)arg2;
- (void)setAppBool:(bool)arg1 forKey:(id)arg2;
- (void)setAppValue:(id)arg1 forKey:(id)arg2;
- (void)setMultiple:(id)arg1 remove:(id)arg2 appID:(id)arg3;
- (void)setMultiple:(id)arg1 remove:(id)arg2 applicationID:(struct __CFString { }*)arg3 userName:(struct __CFString { }*)arg4 hostName:(struct __CFString { }*)arg5;
- (void)setValue:(void*)arg1 forKey:(id)arg2 appID:(id)arg3;
- (void)setValue:(void*)arg1 forKey:(id)arg2 applicationID:(struct __CFString { }*)arg3 userName:(struct __CFString { }*)arg4 hostName:(struct __CFString { }*)arg5;
- (void)synchronizeAppID:(id)arg1;
- (void)synchronizeApplicationID:(struct __CFString { }*)arg1 userName:(struct __CFString { }*)arg2 hostName:(struct __CFString { }*)arg3;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (bool)__im_isEngramEnabledForGroups;

@end
