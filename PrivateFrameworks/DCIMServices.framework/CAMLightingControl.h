/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
 */

@interface CAMLightingControl : UIView <CAAnimationDelegate, CAMBadgeViewDelegate, UIGestureRecognizerDelegate> {
    CAMAnimationGenerator * __animationGenerator;
    CAMLightingDialBackground * __backgroundView;
    NSTimer * __collapseTimer;
    NSDictionary * __effectItemsForType;
    NSArray * __effectTypes;
    unsigned long long  __expandedAnimationCounter;
    CAMLightingFrameCache * __frameCache;
    NSDictionary * __itemOutlineViewsForType;
    NSDictionary * __itemShadowViewsForType;
    NSDictionary * __itemViewsForType;
    CAMLightingNameBadge * __nameBadge;
    UIPanGestureRecognizer * __panGesture;
    UILongPressGestureRecognizer * __pressGesture;
    double  __selectionAngularOffset;
    UISelectionFeedbackGenerator * __selectionFeedbackGenerator;
    unsigned long long  __selectionIndex;
    UIImageView * __selectionOverlay;
    UIImageView * __selectionUnderlay;
    UITapGestureRecognizer * __tapGesture;
    NSDate * __timeTrackingBegan;
    <CAMLightingControlDelegate> * _delegate;
    struct { 
        bool respondsToWillChangeExpanded; 
        bool respondsToDidChangeExpanded; 
    }  _delegateFlags;
    bool  _expanded;
    bool  _highlighted;
    bool  _nameBadgeHidden;
    long long  _orientation;
    long long  _selectedLightingType;
    bool  _showAllItemsWhenCollapsed;
    bool  _tracking;
}

@property (nonatomic, readonly) CAMAnimationGenerator *_animationGenerator;
@property (setter=_setBackgroundView:, nonatomic, retain) CAMLightingDialBackground *_backgroundView;
@property (setter=_setCollapseTimer:, nonatomic, retain) NSTimer *_collapseTimer;
@property (setter=_setEffectItemsForType:, nonatomic, retain) NSDictionary *_effectItemsForType;
@property (setter=_setEffectTypes:, nonatomic, retain) NSArray *_effectTypes;
@property (setter=_setExpandedAnimationCounter:, nonatomic) unsigned long long _expandedAnimationCounter;
@property (nonatomic, readonly) CAMLightingFrameCache *_frameCache;
@property (setter=_setItemOutlineViewsForType:, nonatomic, retain) NSDictionary *_itemOutlineViewsForType;
@property (setter=_setItemShadowViewsForType:, nonatomic, retain) NSDictionary *_itemShadowViewsForType;
@property (setter=_setItemViewsForType:, nonatomic, retain) NSDictionary *_itemViewsForType;
@property (setter=_setNameBadge:, nonatomic, retain) CAMLightingNameBadge *_nameBadge;
@property (nonatomic, readonly) UIPanGestureRecognizer *_panGesture;
@property (nonatomic, readonly) UILongPressGestureRecognizer *_pressGesture;
@property (setter=_setSelectionAngularOffset:, nonatomic) double _selectionAngularOffset;
@property (nonatomic, readonly) UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
@property (nonatomic, readonly) unsigned long long _selectionIndex;
@property (setter=_setSelectionOverlay:, nonatomic, retain) UIImageView *_selectionOverlay;
@property (setter=_setSelectionUnderlay:, nonatomic, retain) UIImageView *_selectionUnderlay;
@property (nonatomic, readonly) UITapGestureRecognizer *_tapGesture;
@property (setter=_setTimeTrackingBegan:, nonatomic, retain) NSDate *_timeTrackingBegan;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) long long defaultLightingType;
@property (nonatomic) <CAMLightingControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (getter=isNameBadgeHidden, nonatomic) bool nameBadgeHidden;
@property (nonatomic) long long orientation;
@property (nonatomic) long long selectedLightingType;
@property (nonatomic) bool showAllItemsWhenCollapsed;
@property (readonly) Class superclass;
@property (getter=isTracking, setter=_setTracking:, nonatomic) bool tracking;

- (void).cxx_destruct;
- (double)_angleFromCenterToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (double)_angularSpacingForRadialLayout;
- (id)_animationGenerator;
- (id)_backgroundView;
- (void)_cancelDelayedCollapse;
- (id)_collapseTimer;
- (void)_collapseWithDelay:(double)arg1;
- (double)_compressedItemOffsetForFractionalItemOffset:(double)arg1;
- (void)_createBackgroundViewIfNeeded;
- (void)_createItemViewsIfNeeded;
- (void)_createNameBadgeIfNeeded;
- (void)_createSelectionViewsIfNeeded;
- (double)_dialBadgePaddingExpanded:(bool)arg1;
- (struct CGPoint { double x1; double x2; })_dialCenter;
- (double)_dialCenterDistanceBelowBoundsForWidth:(double)arg1;
- (struct CGPoint { double x1; double x2; })_dialCenterForWidth:(double)arg1;
- (double)_dialRadius;
- (double)_dialRadiusForWidth:(double)arg1;
- (double)_dialVisibleHeightExpanded:(bool)arg1;
- (id)_effectItemsForType;
- (id)_effectTypes;
- (unsigned long long)_expandedAnimationCounter;
- (id)_frameCache;
- (void)_handleCollapseTimer:(id)arg1;
- (void)_handlePanGesture:(id)arg1;
- (void)_handlePressGesture:(id)arg1;
- (void)_handleSettlingSelectionViewsFromOffset:(double)arg1 withProgress:(double)arg2 timingCurve:(id)arg3;
- (void)_handleSnapFromOffset:(double)arg1 withProgress:(double)arg2 timingCurve:(id)arg3;
- (void)_handleTapGesture:(id)arg1;
- (void)_handleTapRotationFromOffset:(double)arg1 withProgress:(double)arg2 timingCurve:(id)arg3;
- (bool)_isOverDialedWithSelectionAngularOffset:(double)arg1 selectionIndex:(unsigned long long)arg2;
- (unsigned long long)_itemCount;
- (id)_itemOutlineViewsForType;
- (id)_itemShadowViewsForType;
- (id)_itemViewsForType;
- (void)_layoutBackgroundExpanded:(bool)arg1;
- (void)_layoutItemViewsLinear;
- (void)_layoutItemViewsRadialWithSelectionOffsetAngle:(double)arg1;
- (void)_layoutNameBadgeExpanded:(bool)arg1;
- (void)_layoutSelectionViewsExpanded:(bool)arg1;
- (void)_loadItemsIfNeeded;
- (id)_nameBadge;
- (double)_offsetAngleForItemAtIndex:(unsigned long long)arg1 withSelectionOffset:(double)arg2;
- (double)_offsetAngleForRubberBandOffsetAngle:(double)arg1 selectionIndex:(unsigned long long)arg2;
- (double)_offsetXForItemAtIndex:(unsigned long long)arg1;
- (id)_panGesture;
- (void)_performFeedback;
- (void)_prepareFeedback;
- (id)_pressGesture;
- (void)_rotateForTapFromSelectionIndex:(unsigned long long)arg1 offset:(double)arg2 toSelectionIndex:(unsigned long long)arg3;
- (double)_rotationForPanGesture:(id)arg1;
- (double)_rubberBandOffsetAngleForOffsetAngle:(double)arg1;
- (double)_safeWidthForWidth:(double)arg1;
- (double)_selectionAngularOffset;
- (id)_selectionFeedbackGenerator;
- (unsigned long long)_selectionIndex;
- (id)_selectionOverlay;
- (struct CGPoint { double x1; double x2; })_selectionPointForExpanded:(bool)arg1;
- (id)_selectionUnderlay;
- (void)_setBackgroundView:(id)arg1;
- (void)_setCollapseTimer:(id)arg1;
- (void)_setEffectItemsForType:(id)arg1;
- (void)_setEffectTypes:(id)arg1;
- (void)_setExpanded:(bool)arg1 animated:(bool)arg2 shouldNotify:(bool)arg3;
- (void)_setExpandedAnimationCounter:(unsigned long long)arg1;
- (void)_setItemOutlineViewsForType:(id)arg1;
- (void)_setItemShadowViewsForType:(id)arg1;
- (void)_setItemViewsForType:(id)arg1;
- (void)_setNameBadge:(id)arg1;
- (void)_setSelectedLightingType:(long long)arg1 atIndex:(unsigned long long)arg2 shouldNotify:(bool)arg3 shouldSuppressHaptic:(bool)arg4;
- (void)_setSelectionAngularOffset:(double)arg1;
- (void)_setSelectionOverlay:(id)arg1;
- (void)_setSelectionUnderlay:(id)arg1;
- (void)_setTimeTrackingBegan:(id)arg1;
- (void)_setTracking:(bool)arg1;
- (void)_settleSelectionViewsFromSelectionOffsetAngle:(double)arg1;
- (void)_snapFromSelectionOffsetAngle:(double)arg1 toAngle:(double)arg2 animated:(bool)arg3;
- (double)_spacingForLinearLayout;
- (id)_tapGesture;
- (id)_timeTrackingBegan;
- (void)_updateItemViewsWithSelectionOffsetAngle:(double)arg1;
- (void)_updateNameBadgeAnimated:(bool)arg1;
- (void)_updateSelectionOverlayColorAnimated:(bool)arg1;
- (void)_updateSelectionViewsWithSelectionOffsetAngle:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)badgeViewDidChangeIntrinsicContentSize:(id)arg1;
- (double)contentHeightForWidth:(double)arg1;
- (long long)defaultLightingType;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isExpanded;
- (bool)isHighlighted;
- (bool)isNameBadgeHidden;
- (bool)isTracking;
- (void)layoutSubviews;
- (long long)orientation;
- (void)ppt_selectLightingType:(long long)arg1;
- (void)preloadEffectChangeAnimation;
- (long long)selectedLightingType;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpanded:(bool)arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlighted:(bool)arg1 animated:(bool)arg2;
- (void)setNameBadgeHidden:(bool)arg1;
- (void)setNameBadgeHidden:(bool)arg1 animated:(bool)arg2;
- (void)setOrientation:(long long)arg1;
- (void)setSelectedLightingType:(long long)arg1;
- (void)setShowAllItemsWhenCollapsed:(bool)arg1;
- (void)setShowAllItemsWhenCollapsed:(bool)arg1 animated:(bool)arg2;
- (bool)showAllItemsWhenCollapsed;
- (void)updateToContentSize:(id)arg1;

@end
