/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDCanvasLayer : TSDNoDefaultImplicitActionLayer <TSKKeyboardObserver> {
    bool  _createdByPresentationLayer;
    bool  _torndown;
    bool  mAllowsPinchZoom;
    bool  mAvoidKeyboardWhenVerticallyCenteredInScrollView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  mContentInset;
    TSDInteractiveCanvasController * mController;
    bool  mHorizontallyCenteredInScrollView;
    bool  mIsInfinite;
    unsigned long long  mLayoutDisabledDepth;
    double  mMaximumPinchViewScale;
    double  mMinimumPinchViewScale;
    bool  mShowsScaleFeedback;
    struct CGSize { 
        double width; 
        double height; 
    }  mUnscaledSize;
    bool  mVerticallyCenteredInScrollView;
    double  mViewScale;
    unsigned long long  mViewScaleAnimationCount;
}

@property (nonatomic) bool allowsPinchZoom;
@property (nonatomic) bool avoidKeyboardWhenVerticallyCenteredInScrollView;
@property (nonatomic, readonly) TSDCanvasView *canvasView;
@property (nonatomic) bool centeredInScrollView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic) TSDInteractiveCanvasController *controller;
@property (nonatomic) bool createdByPresentationLayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isLayoutDisabled, nonatomic, readonly) bool disableLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool horizontallyCenteredInScrollView;
@property (getter=isInfinite, nonatomic) bool infinite;
@property (nonatomic) double maximumPinchViewScale;
@property (nonatomic) double minimumPinchViewScale;
@property (nonatomic) bool showsScaleFeedback;
@property (readonly) Class superclass;
@property (nonatomic) bool torndown;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } unscaledContentCenter;
@property (nonatomic) struct CGSize { double x1; double x2; } unscaledSize;
@property (nonatomic) bool verticallyCenteredInScrollView;
@property (nonatomic) double viewScale;

- (void)_adjustContentInsetsForKeyboard;
- (void)adjustContentInsets;
- (bool)allowsPinchZoom;
- (void)animateToViewScale:(double)arg1 contentCenter:(struct CGPoint { double x1; double x2; })arg2 contentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 duration:(double)arg4 animation:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)animateToViewScale:(double)arg1 contentCenter:(struct CGPoint { double x1; double x2; })arg2 contentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 duration:(double)arg4 completionBlock:(id /* block */)arg5;
- (bool)avoidKeyboardWhenVerticallyCenteredInScrollView;
- (id)canvasView;
- (bool)centeredInScrollView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (struct CGPoint { double x1; double x2; })contentOffsetForUnscaledContentCenter:(struct CGPoint { double x1; double x2; })arg1;
- (id)controller;
- (bool)createdByPresentationLayer;
- (void)dealloc;
- (void)fixFrameAndScrollView;
- (bool)horizontallyCenteredInScrollView;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;
- (bool)isInfinite;
- (bool)isLayoutDisabled;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)layoutIfNeededIgnoringDisabledLayout;
- (void)layoutSublayers;
- (double)maximumPinchViewScale;
- (double)minimumPinchViewScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_boundsRect;
- (void)p_commonInit;
- (struct CGPoint { double x1; double x2; })p_contentOffsetForUnscaledContentCenter:(struct CGPoint { double x1; double x2; })arg1 viewScale:(double)arg2 contentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)p_fixFrameAndScrollView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_fixedBoundsForScrollViewSize:(struct CGSize { double x1; double x2; })arg1 viewScale:(double)arg2 contentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)p_reenableDrawingAfterResumingFromBackground;
- (void)p_scrollViewScrollerStyleDidChange:(id)arg1;
- (void)p_setEnclosingScrollViewZoomParameters;
- (void)p_setViewScale:(double)arg1;
- (void)p_setViewScale:(double)arg1 preservingScrollOffset:(bool)arg2;
- (void)popLayoutDisabled;
- (id)presentationLayer;
- (void)pushLayoutDisabled;
- (void)setAllowsPinchZoom:(bool)arg1;
- (void)setAvoidKeyboardWhenVerticallyCenteredInScrollView:(bool)arg1;
- (void)setCenteredInScrollView:(bool)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setController:(id)arg1;
- (void)setCreatedByPresentationLayer:(bool)arg1;
- (void)setHorizontallyCenteredInScrollView:(bool)arg1;
- (void)setInfinite:(bool)arg1;
- (void)setMaximumPinchViewScale:(double)arg1;
- (void)setMinimumPinchViewScale:(double)arg1;
- (void)setNeedsDisplayForDirtyTiles:(id)arg1;
- (void)setNeedsLayout;
- (void)setNeedsLayoutForTilingLayers;
- (void)setScrollViewFrameMaintainingApparentScrollPosition:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScrollViewFrameMaintainingApparentScrollPosition:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)setShowsScaleFeedback:(bool)arg1;
- (void)setTorndown:(bool)arg1;
- (void)setUnscaledSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUnscaledSizeOnLayer:(struct CGSize { double x1; double x2; })arg1;
- (void)setVerticallyCenteredInScrollView:(bool)arg1;
- (void)setViewScale:(double)arg1;
- (void)setViewScale:(double)arg1 andScrollViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 maintainPosition:(bool)arg3 animated:(bool)arg4;
- (bool)showsScaleFeedback;
- (void)teardown;
- (void)teardownWithoutClearingLayerDelegates;
- (bool)torndown;
- (struct CGPoint { double x1; double x2; })unscaledContentCenter;
- (struct CGSize { double x1; double x2; })unscaledSize;
- (bool)verticallyCenteredInScrollView;
- (double)viewScale;

@end
