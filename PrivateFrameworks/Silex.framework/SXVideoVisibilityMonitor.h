/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoVisibilityMonitor : NSObject <SXVideoVisibilityMonitoring> {
    <SXVideoProviding> * _visibleVideo;
}

@property (nonatomic, readonly) <SXVideoProviding> *visibleVideo;

- (void).cxx_destruct;
- (void)videoDidBecomeVisible:(id)arg1;
- (void)videoWillBecomeVisible:(id)arg1;
- (id)visibleVideo;

@end
