/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATEnvironmentMonitor : NSObject {
    bool  _internetReachable;
    bool  _internetReachableViaOnlyWWAN;
    NSHashTable * _observers;
    bool  _power;
    unsigned int  _powerNotification;
    NSObject<OS_dispatch_queue> * _queue;
    struct __SCNetworkReachability { } * _reachability;
}

@property (getter=isInternetReachable, nonatomic, readonly) bool internetReachable;
@property (getter=isInternetReachableViaOnlyWWAN, nonatomic, readonly) bool internetReachableViaOnlyWWAN;
@property (getter=hasPower, nonatomic, readonly) bool power;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (bool)hasPower;
- (id)init;
- (bool)isInternetReachable;
- (bool)isInternetReachableViaOnlyWWAN;
- (void)removeObserver:(id)arg1;
- (void)start;
- (void)stop;

@end
