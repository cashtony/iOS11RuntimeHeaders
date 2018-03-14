/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIStarkBannerViewButton : UIControl {
    UIColor * _highlightColor;
    UIView * _highlightView;
    UIImageView * _imageView;
    UIImage * _selectedImage;
    UIColor * _selectedTextColor;
    UILabel * _textLabel;
    UIImage * _unselectedImage;
    UIColor * _unselectedTextColor;
}

@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic, retain) UIImage *selectedImage;
@property (nonatomic, retain) UIColor *selectedTextColor;
@property (nonatomic, retain) UILabel *textLabel;
@property (nonatomic, retain) UIImage *unselectedImage;
@property (nonatomic, retain) UIColor *unselectedTextColor;

+ (id)_chevronImageForTraitCollection:(id)arg1;
+ (id)buttonWithChevronImageForTraitCollection:(id)arg1 highlightColor:(id)arg2;
+ (id)buttonWithOKAndHighlightColor:(id)arg1;
+ (id)buttonWithText:(id)arg1 highlightColor:(id)arg2;
+ (id)highlightColorForNightTime:(bool)arg1;

- (void).cxx_destruct;
- (id)highlightColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)selectedImage;
- (id)selectedTextColor;
- (void)setHighlightColor:(id)arg1;
- (void)setSelectedImage:(id)arg1;
- (void)setSelectedTextColor:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setUnselectedImage:(id)arg1;
- (void)setUnselectedTextColor:(id)arg1;
- (id)textLabel;
- (id)unselectedImage;
- (id)unselectedTextColor;

@end
