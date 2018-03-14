/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIPasscodeLockController : PSListController <DevicePINControllerDelegate, HMHomeManagerDelegate> {
    bool  _canUnlockWatch;
    HMHomeManager * _homeManager;
    int  _policyDictatedMaxFailedAttempts;
    PSSpecifier * _voiceDialGroupSpecifier;
    PSSpecifier * _voiceDialSpecifier;
}

@property (nonatomic) bool canUnlockWatch;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHomeManager *homeManager;
@property (readonly) Class superclass;

+ (long long)passcodeGracePeriod;

- (void).cxx_destruct;
- (void)_didUpdatePasscode:(id)arg1;
- (void)_localizeGracePeriodTitlesForSpecifier:(id)arg1;
- (id)_makeWipeDeviceGroupFooter;
- (void)_setWipeEnabled:(bool)arg1;
- (void)_showDeleteSavedFingerprintsAlert;
- (void)_updateGracePeriodForSpecifier:(id)arg1;
- (id)assistantUnderLockEnabled:(id)arg1;
- (bool)canBeShownFromSuspendedState;
- (bool)canUnlockWatch;
- (void)dealloc;
- (void)devicePINController:(id)arg1 didAcceptChangedPIN:(id)arg2;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)devicePINController:(id)arg1 shouldAcceptPIN:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)didAcceptRemovePIN;
- (void)disablePasscodeRequiredSpecifiers:(id)arg1;
- (id)enabledInLockScreen:(id)arg1;
- (long long)fingerprintCount;
- (id)graceValue:(id)arg1;
- (id)homeControlAccessAllowedWhenLocked:(id)arg1;
- (id)homeManager;
- (void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(bool)arg2;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)init;
- (bool)isAssistantRestricted;
- (bool)isPasscodeSet;
- (bool)isVoiceDialRestricted;
- (bool)isWalletRestricted;
- (void)profileNotification:(id)arg1;
- (void)setAssistantUnderLockEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setCanUnlockWatch:(bool)arg1;
- (void)setEnabledInLockScreen:(id)arg1 specifier:(id)arg2;
- (void)setGraceValue:(id)arg1 specifier:(id)arg2;
- (void)setHomeControlAccessAllowedWhenLocked:(id)arg1 specifier:(id)arg2;
- (void)setHomeManager:(id)arg1;
- (void)setVoiceDial:(id)arg1 specifier:(id)arg2;
- (void)setWallet:(id)arg1 specifier:(id)arg2;
- (void)setWipeEnabled:(id)arg1 specifier:(id)arg2;
- (bool)shouldShowVoiceDial;
- (void)showKeychainAlert;
- (void)showPINSheet:(id)arg1;
- (bool)showReplyWithMessage;
- (void)showWeakWarningAlertForController:(id)arg1 offerUseAnyway:(bool)arg2 withCompletion:(id /* block */)arg3;
- (id)specifiers;
- (void)suspend;
- (void)togglePasscode:(id)arg1;
- (void)updateGracePeriodSpecifier;
- (void)updateVoiceDialGroup;
- (id)voiceDial:(id)arg1;
- (id)wallet:(id)arg1;
- (id)wipeEnabled:(id)arg1;

@end
