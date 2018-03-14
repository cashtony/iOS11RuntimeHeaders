/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATWakeupCall : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    NSNetServiceBrowser * _browser;
    id /* block */  _completion;
    NSMutableArray * _hostLibraryIdentifiers;
    unsigned long long  _hostsToResolve;
    NSMutableArray * _resolvedLibraryIdentifiers;
    NSMutableArray * _resolvedLibraryServices;
    int  _resolving;
    NSMutableArray * _resolvingHosts;
    bool  _searching;
    NSThread * _wakeThread;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)sendWakeupCall:(id)arg1;
+ (void)sendWakeupCallToAllSyncHosts;
+ (id)wakeableHostsWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)stop;
- (void)wake;

@end