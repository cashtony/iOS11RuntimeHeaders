/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLSlalomRegionEditor : UIControl {
    <PLSlalomRegionEditorDelegate> * _delegate;
    bool  _draggingEnd;
    bool  _draggingStart;
    UIImageView * _endHandleView;
    double  _endValue;
    bool  _forceLayout;
    double  _maxValue;
    double  _minValue;
    unsigned long long  _regionEditorStyle;
    UIImageView * _startHandleView;
    double  _startValue;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchLocationWhenTrackingZoomBegan;
    double  _touchOffset;
    UIImageView * _trackImageView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _trackInsets;
    UIImageView * _trackSnapshotView;
    bool  _trackingZoom;
    double  _trimHandleWidth;
    bool  _zoomAnimating;
    double  _zoomDelay;
    double  _zoomMaxValue;
    double  _zoomMinValue;
    bool  _zoomed;
}

@property (nonatomic) <PLSlalomRegionEditorDelegate> *delegate;
@property (nonatomic) double endValue;
@property (nonatomic) double maxValue;
@property (nonatomic) double minValue;
@property (nonatomic) unsigned long long regionEditorStyle;
@property (nonatomic) double startValue;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } trackInsets;
@property (nonatomic) double trimHandleWidth;
@property (getter=isZoomAnimating, setter=setZoomAnimating:, nonatomic) bool zoomAnimating;
@property (nonatomic) double zoomDelay;

- (void)_beginTrackingZoomWithTouch:(id)arg1;
- (void)_cancelTrackingZoom;
- (void)_cancelZoom;
- (void)_cancelZoomTrackingIfNeccessaryWithTouch:(id)arg1;
- (void)_drawCurveWithFlatEndsFromX:(double)arg1 fromY:(double)arg2 toX:(double)arg3 toY:(double)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_endHandleFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_handleFrameForValue:(double)arg1 isStart:(bool)arg2;
- (id)_handleImage;
- (id)_handleTintColor;
- (bool)_isTouch:(id)arg1 inHandleIsStart:(bool)arg2 outTouchOffset:(double*)arg3;
- (bool)_isZoomed;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_startHandleFrame;
- (void)_stopTrackingAndSendControlEvents:(unsigned long long)arg1;
- (id)_tickColor;
- (id)_trackColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_trackFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_trackFrameNoZoom;
- (id)_trackImageForZoom:(bool)arg1;
- (double)_trackScale;
- (double)_trimHandleWidth;
- (void)_updateSlidersWithTouch:(id)arg1;
- (void)_updateTrack;
- (double)_valueFromEndHandleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_valueFromHandleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isStart:(bool)arg2;
- (double)_valueFromStartHandleFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)_zoomMaxValue;
- (double)_zoomMinValue;
- (void)_zoomPressWasHeld;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (double)endValue;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isZoomAnimating;
- (void)layoutSubviews;
- (double)maxValue;
- (double)minValue;
- (unsigned long long)regionEditorStyle;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEndValue:(double)arg1;
- (void)setEndValue:(double)arg1 notify:(bool)arg2;
- (void)setMaxValue:(double)arg1;
- (void)setMinValue:(double)arg1;
- (void)setRegionEditorStyle:(unsigned long long)arg1;
- (void)setStartValue:(double)arg1;
- (void)setStartValue:(double)arg1 notify:(bool)arg2;
- (void)setTrackInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTrimHandleWidth:(double)arg1;
- (void)setZoomAnimating:(bool)arg1;
- (void)setZoomDelay:(double)arg1;
- (void)setZoomMinValue:(double)arg1 maxValue:(double)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)startValue;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })trackInsets;
- (double)trimHandleWidth;
- (double)zoomDelay;

@end
