/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlaybackControlsView : AVButtonOverlappingHitRectResolverView <AVPlaybackControlsViewItemAvailabilityObserver> {
    bool  _canHideInteractiveContentOverlayView;
    <AVPlaybackControlsViewDelegate> * _delegate;
    AVButton * _doneButton;
    bool  _doubleRowLayoutEnabled;
    bool  _fullScreen;
    AVButton * _fullScreenButton;
    UIView * _interactiveContentOverlayView;
    AVButton * _mediaSelectionButton;
    AVButton * _miniPlayPauseButton;
    AVBackdropView * _miniPlayPauseButtonBackdropView;
    bool  _needsIntialLayout;
    AVButton * _pictureInPictureButton;
    NSString * _playbackControlsViewGroupName;
    NSArray * _playbackControlsViewItems;
    long long  _preferredUnobscuredArea;
    AVButton * _prominentPlayButton;
    AVBackdropView * _prominentPlayButtonBackdropView;
    AVPlaybackControlsRoutePickerView * _routePickerView;
    AVBackdropView * _screenModeControls;
    NSLayoutConstraint * _screenModeControlsToVolumeControlsSpacingConstraint;
    AVScrubber * _scrubber;
    AVButton * _skipBackButton;
    AVButton * _skipForwardButton;
    AVButton * _standardPlayPauseButton;
    AVView * _transportControlsContainerView;
    AVTransportControlsView * _transportControlsView;
    AVButton * _videoGravityButton;
    NSLayoutConstraint * _volumeBottomToTransportControlsTopConstraint;
    AVVolumeButtonControl * _volumeButton;
    AVBackdropView * _volumeControls;
    AVVolumeSlider * _volumeSlider;
    NSLayoutConstraint * _volumeTopToLayoutGuideTopConstraint;
    NSLayoutConstraint * _volumeTopToViewTopConstraint;
}

@property (nonatomic) bool canHideInteractiveContentOverlayView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVPlaybackControlsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVButton *doneButton;
@property (getter=isDoubleRowLayoutEnabled, nonatomic) bool doubleRowLayoutEnabled;
@property (getter=isFullScreen, nonatomic) bool fullScreen;
@property (nonatomic, readonly) AVButton *fullScreenButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIView *interactiveContentOverlayView;
@property (nonatomic, readonly) AVButton *mediaSelectionButton;
@property (nonatomic, readonly) AVButton *miniPlayPauseButton;
@property (nonatomic, readonly) AVBackdropView *miniPlayPauseButtonBackdropView;
@property (nonatomic) bool needsIntialLayout;
@property (nonatomic, readonly) AVButton *pictureInPictureButton;
@property (nonatomic, readonly) NSString *playbackControlsViewGroupName;
@property (nonatomic, readonly) NSArray *playbackControlsViewItems;
@property (nonatomic) long long preferredUnobscuredArea;
@property (nonatomic, readonly) AVButton *prominentPlayButton;
@property (nonatomic, readonly) AVBackdropView *prominentPlayButtonBackdropView;
@property (nonatomic, readonly) AVPlaybackControlsRoutePickerView *routePickerView;
@property (nonatomic, readonly) AVBackdropView *screenModeControls;
@property (nonatomic, readonly) NSLayoutConstraint *screenModeControlsToVolumeControlsSpacingConstraint;
@property (nonatomic, readonly) AVScrubber *scrubber;
@property (nonatomic, readonly) AVButton *skipBackButton;
@property (nonatomic, readonly) AVButton *skipForwardButton;
@property (nonatomic, readonly) AVButton *standardPlayPauseButton;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AVView *transportControlsContainerView;
@property (nonatomic, readonly) AVTransportControlsView *transportControlsView;
@property (nonatomic, readonly) AVButton *videoGravityButton;
@property (nonatomic, readonly) NSLayoutConstraint *volumeBottomToTransportControlsTopConstraint;
@property (nonatomic, readonly) AVVolumeButtonControl *volumeButton;
@property (nonatomic, readonly) AVBackdropView *volumeControls;
@property (nonatomic, readonly) AVVolumeSlider *volumeSlider;
@property (nonatomic, readonly) NSLayoutConstraint *volumeTopToLayoutGuideTopConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *volumeTopToViewTopConstraint;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_interactiveContentOverlayViewLayoutMargins;
- (bool)_isDescendantOfNonPagingScrollView;
- (void)_setupInitialLayout;
- (void)_statusBarFrameDidChange:(id)arg1;
- (void)_statusBarFrameWillChange:(id)arg1;
- (void)_statusBarHiddenDidChange:(id)arg1;
- (void)_statusBarOrientationWillChange:(id)arg1;
- (void)_updateDoubleRowTransportControlsEnabled;
- (void)_updateLayoutMargins;
- (void)_updateLayoutMargins:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_volumeButtonToTransportControlsTopConstraintConstant;
- (void)animateAlongsideVisibilityChangeIfNeeded;
- (bool)canHideInteractiveContentOverlayView;
- (void)dealloc;
- (id)delegate;
- (id)doneButton;
- (id)fullScreenButton;
- (id)init;
- (id)interactiveContentOverlayView;
- (bool)isDoubleRowLayoutEnabled;
- (bool)isFullScreen;
- (void)layoutSubviews;
- (id)mediaSelectionButton;
- (id)miniPlayPauseButton;
- (id)miniPlayPauseButtonBackdropView;
- (bool)needsIntialLayout;
- (id)pictureInPictureButton;
- (id)playbackControlsViewGroupName;
- (void)playbackControlsViewItemChangedAvailability:(id)arg1;
- (id)playbackControlsViewItems;
- (long long)preferredUnobscuredArea;
- (id)prominentPlayButton;
- (id)prominentPlayButtonBackdropView;
- (id)routePickerView;
- (void)safeAreaInsetsDidChange;
- (id)screenModeControls;
- (id)screenModeControlsToVolumeControlsSpacingConstraint;
- (id)scrubber;
- (void)setCanHideInteractiveContentOverlayView:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoubleRowLayoutEnabled:(bool)arg1;
- (void)setFullScreen:(bool)arg1;
- (void)setNeedsIntialLayout:(bool)arg1;
- (void)setPreferredUnobscuredArea:(long long)arg1;
- (id)skipBackButton;
- (id)skipForwardButton;
- (id)standardPlayPauseButton;
- (void)traitCollectionDidChange:(id)arg1;
- (id)transportControlsContainerView;
- (id)transportControlsView;
- (id)videoGravityButton;
- (id)volumeBottomToTransportControlsTopConstraint;
- (id)volumeButton;
- (id)volumeControls;
- (id)volumeSlider;
- (id)volumeTopToLayoutGuideTopConstraint;
- (id)volumeTopToViewTopConstraint;

@end
