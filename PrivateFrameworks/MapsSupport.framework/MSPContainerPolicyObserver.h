/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPContainerPolicyObserver : NSObject <MSPContainerObserver> {
    unsigned long long  _dataLossPolicyOffenses;
    bool  _keepMetrics;
    unsigned long long  _lastKnownItemCount;
    double  _minimumDeleteRatioForDataLoss;
    unsigned long long  _minimumDeletesForDataLoss;
    NSObject<OS_dispatch_queue> * _observerQueue;
}

@property (nonatomic) unsigned long long dataLossPolicyOffenses;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool keepMetrics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5;
- (void)containerWillEraseContents:(id)arg1;
- (unsigned long long)dataLossPolicyOffenses;
- (id)init;
- (bool)keepMetrics;
- (id)observationQueueForContainer:(id)arg1;
- (void)setContainerItemCount:(unsigned long long)arg1;
- (void)setDataLossPolicyOffenses:(unsigned long long)arg1;
- (void)setKeepMetrics:(bool)arg1;

@end
