/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVStackView : UIStackView {
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _hitRectInsets;
}

@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } hitRectInsets;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })hitRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setHitRectInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
