/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKPopoverController : UIPopoverController <UIPopoverControllerDelegate> {
    bool  mDismissAnimatedOnOrientationChange;
    bool  mDismissOnMoviePlayback;
    bool  mDismissOnUndo;
    bool  mIsDismissing;
    <UIPopoverControllerDelegate> * mSavedDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool dismissAnimatedOnOrientationChange;
@property (nonatomic) bool dismissOnMoviePlayback;
@property (nonatomic) bool dismissOnUndo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)anyPopoversVisible;
+ (double)defaultPopoverPlacementPadding;

- (void)dealloc;
- (bool)dismissAnimatedOnOrientationChange;
- (bool)dismissOnMoviePlayback;
- (bool)dismissOnUndo;
- (void)dismissPopoverAnimated:(bool)arg1;
- (id)initWithContentViewController:(id)arg1;
- (void)moviePlaybackWillBegin:(id)arg1;
- (void)p_applicationDidEnterBackground:(id)arg1;
- (void)p_dismissPopoverAnimated:(bool)arg1;
- (void)p_orientationWillChange:(id)arg1;
- (void)p_sendPopoverHidDelegateMessage;
- (void)p_willShowPopoverNotification:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (bool)popoverControllerShouldDismissPopover:(id)arg1;
- (void)presentPopoverFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(bool)arg4;
- (void)presentPopoverFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 permittedArrowDirections:(unsigned long long)arg3 animated:(bool)arg4 constrainToView:(bool)arg5 withPadding:(double)arg6;
- (void)setDelegate:(id)arg1;
- (void)setDismissAnimatedOnOrientationChange:(bool)arg1;
- (void)setDismissOnMoviePlayback:(bool)arg1;
- (void)setDismissOnUndo:(bool)arg1;

@end
