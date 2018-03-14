/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKBubbleFlowContainerView : UIView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bubbleRestingRects;
    NSMutableArray * _bubbleSets;
    long long  _supportedBubbles;
}

@property (nonatomic, retain) NSArray *bubbleSets;
@property (nonatomic, readonly) GKBubbleSet *primaryBubbleControls;
@property (nonatomic, readonly) long long supportedBubbles;

- (void)addBubbleSet:(id)arg1;
- (id)bubbleSets;
- (void)dealloc;
- (void)enumerateBubbles:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)primaryBubbleControls;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })restingRectForBubbleType:(long long)arg1;
- (void)setBubbleSets:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setRestingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forBubbleType:(long long)arg2;
- (long long)supportedBubbles;
- (union _GLKVector3 { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; float x4[3]; })worldPositionForBubble:(long long)arg1;

@end
