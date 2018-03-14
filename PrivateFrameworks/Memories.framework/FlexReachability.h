/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FlexReachability : NSObject {
    bool  _isNotifying;
    NSObject<OS_dispatch_queue> * _reachabilityQueue;
    bool  localWiFiRef;
    struct __SCNetworkReachability { } * reachabilityRef;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *reachabilityQueue;

+ (id)reachabilityForInternetConnection;
+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityWithAddress:(const struct sockaddr_in { unsigned char x1; unsigned char x2; unsigned short x3; struct in_addr { unsigned int x_4_1_1; } x4; BOOL x5[8]; }*)arg1;
+ (id)reachabilityWithHostName:(id)arg1;

- (void).cxx_destruct;
- (bool)connectionRequired;
- (long long)currentReachabilityStatus;
- (void)dealloc;
- (id)init;
- (bool)interventionRequired;
- (long long)localWiFiStatusForFlags:(unsigned int)arg1;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (id)reachabilityQueue;
- (void)setReachabilityQueue:(id)arg1;
- (bool)startNotifier;
- (void)stopNotifier;

@end
