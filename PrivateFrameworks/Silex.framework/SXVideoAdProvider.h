/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoAdProvider : NSObject <ADBannerViewInternalDelegate, SXVideoAdProviding> {
    <SXAnalyticsReporting> * _analyticsReporter;
    <SXVideoAdProviderDataSource> * _dataSource;
    <SXVideoAdViewControllerProviding> * _fullscreenViewControllerProvider;
    <SXVideoMetadataProviding> * _metadata;
    SXPrerollAdResponse * _response;
    SXVideoAdStateManager * _stateManager;
    SXTimeline * _timeline;
}

@property (nonatomic, retain) <SXAnalyticsReporting> *analyticsReporter;
@property (nonatomic) <SXVideoAdProviderDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXVideoAdViewControllerProviding> *fullscreenViewControllerProvider;
@property (nonatomic, readonly) bool hasAction;
@property (readonly) unsigned long long hash;
@property (nonatomic) <SXVideoMetadataProviding> *metadata;
@property (nonatomic, retain) SXPrerollAdResponse *response;
@property (nonatomic, readonly) unsigned long long skipThreshold;
@property (nonatomic, readonly) SXVideoAdStateManager *stateManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXTimeline *timeline;

- (void).cxx_destruct;
- (id)analyticsReporter;
- (void)configureTimelineForImpressionReporting;
- (id)dataSource;
- (id)fullscreenViewControllerProvider;
- (bool)hasAction;
- (id)initWithDataSource:(id)arg1 viewControllerProvider:(id)arg2;
- (id /* block */)loadWithCompletionBlock:(id /* block */)arg1;
- (id)metadata;
- (void)playbackFailedWithError:(id)arg1;
- (void)playbackFinished;
- (void)playbackInitiated;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackStarted;
- (void)presentAction;
- (void)presentPrivacyStatement;
- (void)reportEngagementEventWithType:(unsigned long long)arg1;
- (id)response;
- (void)setAnalyticsReporter:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setResponse:(id)arg1;
- (unsigned long long)skipThreshold;
- (void)skipped;
- (id)stateManager;
- (void)timeElapsed:(double)arg1 duration:(double)arg2;
- (id)timeline;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;

@end
