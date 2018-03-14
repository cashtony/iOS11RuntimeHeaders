/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKStackedTextItemView : UIView {
    bool  _animated;
    struct CGSize { 
        double width; 
        double height; 
    }  _boundsSize;
    PKStackedTextItem * _content;
    struct { 
        struct CGSize { 
            double width; 
            double height; 
        } boundingSize; 
        struct { 
            struct CGRect { 
                struct CGPoint { 
                    double x; 
                    double y; 
                } origin; 
                struct CGSize { 
                    double width; 
                    double height; 
                } size; 
            } frame; 
            bool widthConstrained; 
        } textMetrics[4]; 
    }  _contentConstraints;
    UIFont * _idealPrimaryFont;
    UIFont * _idealSecondaryFont;
    UIFont * _idealTertiaryFont;
    UIFont * _idealTitleFont;
    UIFont * _layoutPrimaryFont;
    UILabel * _primary;
    UIFont * _primaryFont;
    UILabel * _secondary;
    UIFont * _significantPrimaryFont;
    NSMutableSet * _snapshots;
    long long  _style;
    UILabel * _tertiary;
    long long  _textAlignment;
    UILabel * _title;
}

@property (nonatomic, copy) PKStackedTextItem *content;
@property (nonatomic) struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_2_1_1; bool x_2_1_2; } x2[4]; } contentConstraints;
@property (nonatomic, readonly) long long style;
@property (nonatomic) long long textAlignment;

- (void).cxx_destruct;
- (id)_attributedStringWithText:(id)arg1 strikethrough:(bool)arg2;
- (double)_prepareViewForReuse:(id)arg1;
- (void)_updateAlignmentAnimated:(bool)arg1;
- (void)_updateSubviewsAnimated:(bool)arg1;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_2_1_1; bool x_2_1_2; } x2[4]; })boundingMetricForWidth:(double)arg1;
- (id)content;
- (struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_2_1_1; bool x_2_1_2; } x2[4]; })contentConstraints;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (void)layoutIfNeededAnimated:(bool)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setContent:(id)arg1;
- (void)setContent:(id)arg1 animated:(bool)arg2;
- (void)setContentConstraints:(struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct { struct CGRect { struct CGPoint { double x_1_3_1; double x_1_3_2; } x_1_2_1; struct CGSize { double x_2_3_1; double x_2_3_2; } x_1_2_2; } x_2_1_1; bool x_2_1_2; } x2[4]; })arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextAlignment:(long long)arg1 animated:(bool)arg2;
- (long long)style;
- (long long)textAlignment;

@end
