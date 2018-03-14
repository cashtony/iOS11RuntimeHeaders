/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

@interface _CRKSearchUIFeedbackAdapter : NSObject <CRKFeedbackDelegateProxying, SearchUIFeedbackDelegate> {
    <CRKFeedbackDelegate> * _feedbackDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <CRKFeedbackDelegate> *feedbackDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cardSectionViewDidInvalidateSize:(id)arg1 animate:(bool)arg2;
- (void)didEngageCardSection:(id)arg1;
- (id)feedbackDelegate;
- (id)feedbackListener;
- (void)presentViewController:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (bool)shouldHandleCardSectionEngagement:(id)arg1;

@end
