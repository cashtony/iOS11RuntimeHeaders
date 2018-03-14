/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMButtonLabel : UIView {
    UILabel * __label;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NSString * _text;
    bool  _wantsLegibilityShadow;
}

@property (nonatomic, readonly, retain) UILabel *_label;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic) bool wantsLegibilityShadow;

- (void).cxx_destruct;
- (id)_label;
- (void)_updateAttributedText;
- (void)_updateInternalContentSize;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)highlightedTextColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setWantsLegibilityShadow:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (long long)textAlignment;
- (id)textColor;
- (void)updateToContentSize:(id)arg1;
- (bool)wantsLegibilityShadow;

@end
