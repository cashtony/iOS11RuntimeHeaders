/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarCarPlayDockAppItemButton : UIButton <NSCopying> {
    bool  _active;
    UIImageView * _badgeView;
    NSString * _bundleIdentifier;
    bool  _hasBadge;
    NSLayoutConstraint * _heightConstraint;
    UIImageView * _iconHighlightImageView;
    UIImageView * _iconImageView;
    NSLayoutConstraint * _widthConstraint;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) UIImageView *badgeView;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) bool hasBadge;
@property (nonatomic, retain) UIImageView *iconHighlightImageView;
@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, readonly) bool itemHasBundleIdentifier;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (id)badgeView;
- (id)bundleIdentifier;
- (bool)canBecomeFocused;
- (float)charge;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)hasBadge;
- (id)iconHighlightImageView;
- (id)iconImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isActive;
- (bool)itemHasBundleIdentifier;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setActive:(bool)arg1;
- (void)setBadgeHidden:(bool)arg1 animated:(bool)arg2;
- (void)setBadgeView:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCharge:(float)arg1;
- (void)setHasBadge:(bool)arg1;
- (void)setIconHighlightImageView:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (bool)shouldShowBadge;

@end
