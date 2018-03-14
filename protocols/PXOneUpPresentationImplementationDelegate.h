/* Generated by RuntimeBrowser.
 */

@protocol PXOneUpPresentationImplementationDelegate <NSObject>

@required

- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 commitPreviewViewController:(UIViewController *)arg2;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 didDismissPreviewViewController:(UIViewController *)arg2 committing:(bool)arg3;
- (bool)oneUpPresentation:(PXOneUpPresentation *)arg1 startAnimated:(bool)arg2 interactiveMode:(long long)arg3;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 stopAnimated:(bool)arg2;
- (UIViewController *)previewViewControllerForOneUpPresentation:(PXOneUpPresentation *)arg1 allowingActions:(bool)arg2;

@optional

- (bool)oneUpPresentation:(PXOneUpPresentation *)arg1 handlePresentingPinchGestureRecognizer:(UIPinchGestureRecognizer *)arg2;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 presentingViewControllerViewDidAppear:(bool)arg2;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 presentingViewControllerViewDidDisappear:(bool)arg2;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 presentingViewControllerViewWillAppear:(bool)arg2;
- (void)oneUpPresentation:(PXOneUpPresentation *)arg1 presentingViewControllerViewWillDisappear:(bool)arg2;
- (bool)oneUpPresentationCanStart:(PXOneUpPresentation *)arg1;
- (bool)oneUpPresentationCanStop:(PXOneUpPresentation *)arg1;
- (void)oneUpPresentationInvalidatePresentingGeometry:(PXOneUpPresentation *)arg1;

@end