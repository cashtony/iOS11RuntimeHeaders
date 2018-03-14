/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUTransportControlsView : UIView {
    NSArray * _availableTransportControls;
    NSMutableDictionary * _classByReuseIdentifier;
    <MPUTransportControlsViewDataSource> * _dataSource;
    <MPUTransportControlsViewDelegate> * _delegate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insetsForExpandingButtons;
    <MPUTransportControlsViewLayoutDelegate> * _layoutDelegate;
    unsigned long long  _minimumNumberOfTransportButtonsForLayout;
    NSMutableDictionary * _recycledButtonsByReuseIdentifier;
    NSMapTable * _reuseIdentifierByButton;
    bool  _sortByGroup;
    NSMutableArray * _sortedVisibleControlsWithBlanks;
    bool  _sortedVisibleControlsWithBlanksNeedsReload;
    NSMutableSet * _typesOfControlsToReload;
    bool  _usesLegacyLayoutHeuristics;
    NSMutableDictionary * _visibleButtonByControlType;
}

@property (nonatomic, copy) NSArray *availableTransportControls;
@property (nonatomic) <MPUTransportControlsViewDataSource> *dataSource;
@property (nonatomic) <MPUTransportControlsViewDelegate> *delegate;
@property (getter=_insetsForExpandingButtons, setter=_setInsetsForExpandingButtons:, nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insetsForExpandingButtons;
@property (nonatomic) <MPUTransportControlsViewLayoutDelegate> *layoutDelegate;
@property (nonatomic) unsigned long long minimumNumberOfTransportButtonsForLayout;
@property (nonatomic) bool sortByGroup;
@property (getter=_usesLegacyLayoutHeuristics, setter=_setUsesLegacyLayoutHeuristics:, nonatomic) bool usesLegacyLayoutHeuristics;

+ (id)defaultTransportControls;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustedFrameOfButtonForTransportControl:(id)arg1 proposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)_availableTransportControlsForGroup:(int)arg1;
- (void)_configureTransportButton:(id)arg1 forTransportControl:(id)arg2;
- (id)_createTransportButtonWithReuseIdentifier:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_insetsForExpandingButtons;
- (void)_recycleTransportButtonWithControlType:(long long)arg1;
- (void)_reloadSortedVisibleControlsWithBlanks;
- (void)_setInsetsForExpandingButtons:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_setUsesLegacyLayoutHeuristics:(bool)arg1;
- (id)_transportButtonForControlType:(long long)arg1;
- (struct CGSize { double x1; double x2; })_transportControlButtonSize;
- (void)_transportControlLongPressBegan:(id)arg1;
- (void)_transportControlLongPressEnded:(id)arg1;
- (void)_transportControlTapped:(id)arg1;
- (void)_transportControlTouchEntered:(id)arg1;
- (void)_transportControlTouchExited:(id)arg1;
- (id)_typesFromTransportControls:(id)arg1;
- (id)_typesOfVisibleControls;
- (bool)_usesLegacyLayoutHeuristics;
- (id)_visibleTransportControlAtIndex:(unsigned long long)arg1;
- (void)_willRemoveTransportButton:(id)arg1;
- (id)availableTransportControlWithType:(long long)arg1;
- (id)availableTransportControls;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (id)dequeueReusableTransportButtonWithReuseIdentifier:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutDelegate;
- (void)layoutSubviews;
- (unsigned long long)minimumNumberOfTransportButtonsForLayout;
- (void)registerClass:(Class)arg1 forTransportButtonWithReuseIdentifier:(id)arg2;
- (void)reloadTransportButtonWithControlType:(long long)arg1;
- (void)setAvailableTransportControls:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLayoutDelegate:(id)arg1;
- (void)setMinimumNumberOfTransportButtonsForLayout:(unsigned long long)arg1;
- (void)setSortByGroup:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)sortByGroup;

@end
