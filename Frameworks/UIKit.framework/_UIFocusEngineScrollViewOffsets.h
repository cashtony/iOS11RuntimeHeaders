/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusEngineScrollViewOffsets : NSObject {
    id /* block */  _completion;
    double  _convergenceRate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastContentOffset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastVelocity;
    <UIScrollViewDelegate> * _scrollDelegate;
    UIScrollView * _scrollView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _targetContentOffset;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) double convergenceRate;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastContentOffset;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastVelocity;
@property (nonatomic, retain) <UIScrollViewDelegate> *scrollDelegate;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic) struct CGPoint { double x1; double x2; } targetContentOffset;

- (void).cxx_destruct;
- (id /* block */)completion;
- (double)convergenceRate;
- (struct CGPoint { double x1; double x2; })lastContentOffset;
- (struct CGPoint { double x1; double x2; })lastVelocity;
- (id)scrollDelegate;
- (id)scrollView;
- (void)setCompletion:(id /* block */)arg1;
- (void)setConvergenceRate:(double)arg1;
- (void)setLastContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setLastVelocity:(struct CGPoint { double x1; double x2; })arg1;
- (void)setScrollDelegate:(id)arg1;
- (void)setScrollView:(id)arg1;
- (void)setTargetContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffset;

@end