/* Generated by RuntimeBrowser.
 */

@protocol CCUIOverlayMetricsProvider <NSObject>

@required

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })overlayBackgroundFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })overlayContainerFrame;
- (long long)overlayInterfaceOrientation;
- (bool)overlayReachabilityAffectsHeader;
- (double)overlayReachabilityHeight;
- (CCUIStatusBarStyleSnapshot *)overlayStatusBarStyle;

@end
