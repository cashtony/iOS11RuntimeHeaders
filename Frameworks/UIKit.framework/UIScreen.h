/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIScreen : NSObject <DebugHierarchyObject, UICoordinateSpace, UITraitEnvironment, _CRKImageLoaderDelegate, _UIFocusEnvironmentInternal, _UIFocusEnvironmentPrivate, _UIFocusRegionContainer, _UITraitEnvironmentInternal> {
    bool  __UIIBAlwaysProvidePeripheryInsets;
    FBSDisplayConfiguration * __displayConfiguration;
    UIWindow<UIFocusEnvironment> * __focusedWindow;
    NSArray * _availableDisplayModes;
    _UIScreenBoundingPathUtilities * _boundingPathUtilities;
    NSDictionary * _capabilities;
    bool  _captured;
    struct { 
        unsigned int isKnown : 1; 
        unsigned int isSupported : 1; 
        unsigned int isInRange : 1; 
    }  _carPlayHumanPresenceStatus;
    UITraitCollection * _contentSizeCategoryTraits;
    UITraitCollection * _defaultTraitCollection;
    _UIDragManager * _dragManager;
    _UIScreenFixedCoordinateSpace * _fixedCoordinateSpace;
    _UIFocusMovementPerformer * _focusMovementPerformer;
    _UIFocusScrollManager * _focusScrollManager;
    UIFocusSystem * _focusSystem;
    _UIScreenFocusSystemManager * _focusSystemManager;
    long long  _gamut;
    _UIInteractiveHighlightEnvironment * _interactiveHighlightEnvironment;
    long long  _interfaceOrientation;
    float  _lastNotifiedBacklightLevel;
    UITraitCollection * _lastNotifiedTraitCollection;
    UITraitCollection * _overrideTraitCollection;
    bool  _performingSystemSnapshot;
    double  _pointsPerInch;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceBounds;
    double  _scale;
    struct { 
        unsigned int bitsPerComponent : 4; 
        unsigned int initialized : 1; 
        unsigned int connected : 1; 
        unsigned int overscanCompensation : 2; 
        unsigned int wantsWideContentMargins : 1; 
        unsigned int queriedDeviceContentMargins : 1; 
        unsigned int hasCalculatedPointsPerInch : 1; 
        unsigned int rightHandDrive : 1; 
    }  _screenFlags;
    UISoftwareDimmingWindow * _softwareDimmingWindow;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unjailedReferenceBounds;
    long long  _userInterfaceIdiom;
    bool  _wantsSoftwareDimming;
}

@property (setter=_setUIIBAlwaysProvidePeripheryInsets:, nonatomic) bool _UIIBAlwaysProvidePeripheryInsets;
@property (setter=_setFocusedWindow:, nonatomic) UIWindow<UIFocusEnvironment> *_focusedWindow;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _gkBounds;
@property (readonly) double _gkScale;
@property (setter=_setLastNotifiedBacklightLevel:, nonatomic) float _lastNotifiedBacklightLevel;
@property (getter=_isPerformingSystemSnapshot, setter=_setPerformingSystemSnapshot:, nonatomic) bool _performingSystemSnapshot;
@property (nonatomic, readonly) UIWindow *_preferredFocusedWindow;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _referenceBounds;
@property (setter=_setSoftwareDimmingWindow:, nonatomic, retain) UISoftwareDimmingWindow *_softwareDimmingWindow;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } applicationFrame;
@property (nonatomic, readonly, copy) NSArray *availableModes;
@property (getter=_boundingPathUtilities, setter=_setBoundingPathUtilities:, nonatomic, retain) _UIScreenBoundingPathUtilities *boundingPathUtilities;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) double brightness;
@property (getter=isCaptured, setter=_setCaptured:, nonatomic) bool captured;
@property (readonly) <UICoordinateSpace> *coordinateSpace;
@property (nonatomic, retain) UIScreenMode *currentMode;
@property (readonly, copy) NSString *debugDescription;
@property (getter=_defaultTraitCollection, setter=_setDefaultTraitCollection:, nonatomic, retain) UITraitCollection *defaultTraitCollection;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FBSDisplayConfiguration *displayConfiguration;
@property (getter=_dragManager, nonatomic, readonly) _UIDragManager *dragManager;
@property (getter=_isEligibleForFocusInteraction, nonatomic, readonly) bool eligibleForFocusInteraction;
@property (readonly) <UICoordinateSpace> *fixedCoordinateSpace;
@property (getter=_focusMapContainer, nonatomic, readonly) <_UIFocusRegionContainer> *focusMapContainer;
@property (getter=_focusMovementPerformer, nonatomic, readonly) _UIFocusMovementPerformer *focusMovementPerformer;
@property (getter=_focusScrollManager, nonatomic, readonly) _UIFocusScrollManager *focusScrollManager;
@property (getter=_focusSystem, nonatomic, readonly) UIFocusSystem *focusSystem;
@property (getter=_focusSystemManager, nonatomic, readonly) _UIScreenFocusSystemManager *focusSystemManager;
@property (nonatomic, readonly) <UIFocusItem> *focusedItem;
@property (nonatomic, readonly) UIView *focusedView;
@property (readonly) unsigned long long hash;
@property (getter=_interactiveHighlightEnvironment, nonatomic, readonly) _UIInteractiveHighlightEnvironment *interactiveHighlightEnvironment;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } is_scaledSize;
@property (getter=_lastNotifiedTraitCollection, setter=_setLastNotifiedTraitCollection:, nonatomic, retain) UITraitCollection *lastNotifiedTraitCollection;
@property (getter=_linearFocusMovementSequences, nonatomic, readonly, copy) NSArray *linearFocusMovementSequences;
@property (readonly) long long maximumFramesPerSecond;
@property (nonatomic, readonly) UIScreen *mirroredScreen;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } nativeBounds;
@property (nonatomic, readonly) double nativeScale;
@property (getter=_overrideTraitCollection, setter=_setOverrideTraitCollection:, nonatomic, retain) UITraitCollection *overrideTraitCollection;
@property (nonatomic) long long overscanCompensation;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } overscanCompensationInsets;
@property (getter=_parentFocusEnvironment, nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (getter=_preferredFocusMovementStyle, nonatomic, readonly) long long preferredFocusMovementStyle;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (nonatomic, readonly) UIScreenMode *preferredMode;
@property (nonatomic, readonly) double scale;
@property (readonly) unsigned long long screenSizeCategory;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFocus;
@property (nonatomic, readonly) bool supportsScreenshotEditViewController;
@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (getter=isUserInterfaceIdiomPad, nonatomic, readonly) bool userInterfaceIdiomPad;
@property (nonatomic) bool wantsSoftwareDimming;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (void)_FBSDisplayConfigurationConnected:(id)arg1 andNotify:(bool)arg2;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2;
+ (void)_FBSDisplayDidPossiblyConnect:(id)arg1 withScene:(id)arg2 andPost:(bool)arg3;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1;
+ (void)_FBSDisplayDidPossiblyDisconnect:(id)arg1 forSceneDestruction:(id)arg2;
+ (void)_FBSDisplayIdentityDisconnected:(id)arg1;
+ (id)__createPlugInScreenForFBSDisplay:(id)arg1;
+ (id)__displayConfigurationsIncludingMain:(bool)arg1;
+ (id)_carScreen;
+ (void)_enumerateScreensWithBlock:(id /* block */)arg1;
+ (void)_prepareCarScreensForResume;
+ (void)_prepareScreensForAppResume;
+ (id)_screenForScene:(id)arg1;
+ (id)_screenWithDisplayID:(id)arg1;
+ (id)_screenWithDisplayName:(id)arg1;
+ (id)_screenWithFBSDisplayIdentity:(id)arg1;
+ (id)_screenWithIntegerDisplayID:(unsigned int)arg1;
+ (bool)_shouldDisableJail;
+ (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromView:(id)arg2;
+ (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toView:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromView:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toView:(id)arg2;
+ (void)initialize;
+ (id)mainScreen;
+ (id)screens;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForScreenOriginRotation:(double)arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformToRotateScreen:(double)arg1;

- (void).cxx_destruct;
- (bool)_UIIBAlwaysProvidePeripheryInsets;
- (void)_accessibilityForceTouchEnabledChanged:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrameForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(bool)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_applicationFrameWithoutOverscanForInterfaceOrientation:(long long)arg1 usingStatusbarHeight:(double)arg2 ignoreStatusBar:(bool)arg3;
- (bool)_areListsLimited;
- (bool)_areMusicListsLimited;
- (void)_beginObservingBacklightLevelNotifications;
- (id)_boundingPathUtilities;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForInterfaceOrientation:(long long)arg1;
- (id)_capabilities;
- (id)_capabilityForKey:(id)arg1;
- (void)_clearCarPlayHumanPresenceState;
- (void)_computeMetrics;
- (void)_computeMetrics:(bool)arg1;
- (void)_connectScreen;
- (id)_defaultTraitCollection;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1;
- (id)_defaultTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_disconnectScreen;
- (id)_display;
- (double)_displayCornerRadius;
- (id)_displayID;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_displayPeripheryInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_displayPeripheryInsetsRestrictedToScene;
- (id)_dragManager;
- (long long)_effectiveUserInterfaceStyle;
- (void)_endObservingBacklightLevelNotifications;
- (void)_ensureFocusSystemIsLoaded;
- (void)_enumerateWindowsWithBlock:(id /* block */)arg1;
- (bool)_expectsSecureRendering;
- (void)_fetchInitialCarPlayHumanPresenceStatusIfNeeded;
- (id)_focusMapContainer;
- (id)_focusMovementPerformer;
- (id)_focusScrollManager;
- (id)_focusSystem;
- (id)_focusSystemManager;
- (id)_focusedWindow;
- (long long)_forceTouchCapability;
- (void)_handleEffectiveUserInterfaceStyleChanged:(id)arg1;
- (void)_handleForcedUserInterfaceLayoutDirectionChanged:(id)arg1;
- (bool)_hasStatusBar;
- (bool)_hasWindows;
- (long long)_imageOrientation;
- (unsigned int)_integerDisplayID;
- (id)_interactiveHighlightEnvironment;
- (long long)_interfaceOrientation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_interfaceOrientedMainSceneBounds;
- (bool)_isCarPlayHumanPresenceInRange;
- (bool)_isCarScreen;
- (bool)_isExternal;
- (bool)_isMainScreen;
- (bool)_isMainScreenPointer;
- (bool)_isOverscanned;
- (bool)_isPerformingSystemSnapshot;
- (bool)_isRightHandDrive;
- (bool)_isRotatable;
- (bool)_isUIElementLimited:(id /* block */)arg1;
- (bool)_isValidInterfaceOrientation:(long long)arg1;
- (bool)_isWorkspaceCapable;
- (float)_lastNotifiedBacklightLevel;
- (id)_lastNotifiedTraitCollection;
- (id)_launchImageTraitCollectionForInterfaceOrientation:(long long)arg1 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_lazySoftwareDimmingWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mainSceneBoundsForInterfaceOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mainSceneFrame;
- (struct CGPoint { double x1; double x2; })_mainSceneOrigin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_mainSceneReferenceBounds;
- (double)_maximumSupportedScale;
- (id)_name;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_nativeDisplayBounds;
- (void)_notifyTraitsChangedAndPropagateToAllWindows;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_overrideReferenceBounds;
- (id)_overrideTraitCollection;
- (bool)_overscanAdjustmentNeedsUpdate;
- (id)_parentFocusEnvironment;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_peripheryInsets;
- (double)_pointsPerInch;
- (void)_postBrightnessDidChangeNotificationIfAppropriate;
- (id)_preferredFocusRegionCoordinateSpace;
- (id)_preferredFocusedWindow;
- (void)_prepareForWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_referenceBounds;
- (double)_refreshRate;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (double)_rotation;
- (double)_scale;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_sceneSafeAreaInsets;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (unsigned int)_seed;
- (void)_setBoundingPathUtilities:(id)arg1;
- (void)_setCapability:(id)arg1 forKey:(id)arg2;
- (void)_setCaptured:(bool)arg1;
- (void)_setCarPlayHumanPresenceInRange:(bool)arg1;
- (void)_setDefaultTraitCollection:(id)arg1;
- (void)_setDefaultTraitCollection:(id)arg1 notify:(bool)arg2;
- (void)_setExternalDeviceShouldInputText:(bool)arg1;
- (void)_setFocusedWindow:(id)arg1;
- (void)_setInterfaceOrientation:(long long)arg1;
- (void)_setLastNotifiedBacklightLevel:(float)arg1;
- (void)_setLastNotifiedTraitCollection:(id)arg1;
- (void)_setNeedsNonDeferredFocusUpdate;
- (void)_setOverrideTraitCollection:(id)arg1;
- (void)_setPerformingSystemSnapshot:(bool)arg1;
- (void)_setScale:(double)arg1;
- (void)_setSoftwareDimmingWindow:(id)arg1;
- (void)_setUIIBAlwaysProvidePeripheryInsets:(bool)arg1;
- (void)_setUserInterfaceIdiom:(long long)arg1;
- (id)_snapshotExcludingWindows:(id)arg1 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_softwareDimmingWindow;
- (bool)_supportsBrightness;
- (bool)_supportsCarPlayHumanPresence;
- (bool)_supportsDeferredFocus;
- (bool)_supportsDragging;
- (double)_touchRadiusScaleFactor;
- (id)_traitCollectionForChildEnvironment:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unjailedReferenceBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unjailedReferenceBoundsForInterfaceOrientation:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_unjailedReferenceBoundsInPixels;
- (void)_updateAvailableDisplayModes;
- (void)_updateCapabilities;
- (void)_updateDisplayConfiguration:(id)arg1;
- (void)_updateOverscanCompensationAllowingBackgroundUpdate:(bool)arg1;
- (void)_updateTraits;
- (void)_updateUserInterfaceIdiom;
- (long long)_userInterfaceIdiom;
- (bool)_wantsWideContentMargins;
- (void)_willTransitionToTraitCollection:(id)arg1;
- (long long)_workspaceCapableScreenType;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })applicationFrame;
- (id)availableModes;
- (int)bitsPerComponent;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)brightness;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromCoordinateSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toCoordinateSpace:(id)arg2;
- (id)coordinateSpace;
- (id)currentMode;
- (void)dealloc;
- (id)description;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)displayConfiguration;
- (id)displayIdentity;
- (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)fbsDisplay;
- (id)fixedCoordinateSpace;
- (id)focusedItem;
- (id)focusedView;
- (long long)gamut;
- (id)initWithDisplayConfiguration:(id)arg1;
- (bool)isCaptured;
- (long long)maximumFramesPerSecond;
- (id)mirroredScreen;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nativeBounds;
- (double)nativeScale;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (long long)overscanCompensation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })overscanCompensationInsets;
- (id)preferredFocusEnvironments;
- (id)preferredFocusedView;
- (id)preferredMode;
- (float)rawBrightnessForBacklightLevel:(float)arg1;
- (double)scale;
- (int)screenType;
- (void)setBitsPerComponent:(int)arg1;
- (void)setBrightness:(double)arg1;
- (void)setCurrentMode:(id)arg1;
- (void)setDisplayConfiguration:(id)arg1;
- (void)setFocusEnabled:(bool)arg1;
- (void)setNeedsFocusUpdate;
- (void)setOverscanCompensation:(long long)arg1;
- (void)setWantsSoftwareDimming:(bool)arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (id)snapshot;
- (id)snapshotView;
- (id)snapshotViewAfterScreenUpdates:(bool)arg1;
- (bool)supportsFocus;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateFocusIfNeeded;
- (bool)wantsSoftwareDimming;

// Image: /Developer/Library/PrivateFrameworks/DTDDISupport.framework/libViewDebuggerSupport.dylib

- (double)__dbg_traitCollectionDisplayCornerRadius;
- (id)debugHierarchyPropertyDescriptions;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })cn_mainScreenPeripheryInsets;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_mapkit_display;

// Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit

- (id)traitCollectionForImageLoader:(id)arg1 image:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (bool)__ck_isFullscreen;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_gkBounds;
- (double)_gkScale;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

+ (bool)hk_currentDeviceHas4InchScreen;
+ (bool)hk_currentDeviceHas4Point7InchScreen;

// Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI

- (struct CGSize { double x1; double x2; })pu_workImageSize;

// Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer

- (struct CGSize { double x1; double x2; })is_scaledSize;

// Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices

- (bool)supportsScreenshotEditViewController;

// Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI

- (bool)isUserInterfaceIdiomPad;
- (unsigned long long)screenSizeCategory;

// Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit

+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })nc_counterTransformForActiveInterfaceOrientation;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })nc_transformForInterfaceOrientation:(long long)arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })nc_transformForScreenOriginRotation:(double)arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nc_bounds;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (bool)tsk_appCanUseSidebar;
+ (bool)tsk_appIsInDarkMode;
+ (bool)tsk_appIsInSplitViewMode;
+ (bool)tsk_deviceCanUseSidebar;
+ (double)tsk_expectedScreenScale;
+ (bool)tsk_pad1366H;
+ (bool)tsk_phoneUI568H;
+ (bool)tsk_phoneUI568HOrSmaller;
+ (bool)tsk_phoneUI667H;
+ (bool)tsk_phoneUI667HOrSmaller;
+ (bool)tsk_phoneUI736H;
+ (bool)tsk_phoneUI812H;
+ (void)tsk_resetScreenScaleCache;
+ (double)tsk_screenScale;
+ (void)tsk_setAppIsInDarkMode:(bool)arg1;
+ (bool)tsk_statusBarIsLandscape;

@end
