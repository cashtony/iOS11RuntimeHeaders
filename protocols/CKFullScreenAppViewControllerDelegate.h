/* Generated by RuntimeBrowser.
 */

@protocol CKFullScreenAppViewControllerDelegate <NSObject>

@optional

- (void)fullscreenAppViewController:(CKFullScreenAppViewController *)arg1 hasUpdatedLastTouchDate:(NSDate *)arg2;
- (void)fullscreenAppViewController:(CKFullScreenAppViewController *)arg1 wantsToSwitchToPlugin:(IMBalloonPlugin *)arg2;
- (void)fullscreenAppViewControllerDidTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppManager:(CKFullScreenAppViewController *)arg1;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppStore:(CKFullScreenAppViewController *)arg1;
- (void)fullscreenAppViewControllerWantsToCollapse:(CKFullScreenAppViewController *)arg1;

@end
