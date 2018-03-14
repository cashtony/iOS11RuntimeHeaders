/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

@interface PCCProxyingDevice : NSObject <NSXPCListenerDelegate, OSASyncProxyServices> {
    PCCEndpoint * _endpoint;
    NSMutableDictionary * _job_handlers;
    bool  _preserveFiles;
    NSObject<OS_dispatch_queue> * _serial_job_queue;
    NSDictionary * _statusInfo;
    NSObject<OS_dispatch_queue> * _sync_proxy_queue;
    NSMutableDictionary * _tracker_jobs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool preserveFiles;
@property (readonly) NSDictionary *statusInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)abort;
- (void)ack:(id)arg1 result:(bool)arg2 error:(id)arg3;
- (void)addJob:(id)arg1 onComplete:(id /* block */)arg2;
- (void)deliver:(id)arg1 tasking:(id)arg2 taskId:(id)arg3 fromBlob:(id)arg4;
- (bool)ensureParentDirectoryExists:(id)arg1;
- (void)finishJob:(id)arg1 content:(id)arg2 error:(id)arg3;
- (void)handleConnection:(bool)arg1;
- (void)handleFile:(id)arg1 metadata:(id)arg2;
- (void)handleMessage:(id)arg1 from:(id)arg2;
- (id)initWithEndpoint:(id)arg1;
- (void)listDevices:(id /* block */)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (bool)preserveFiles;
- (void)request:(id)arg1 logList:(id /* block */)arg2;
- (void)request:(id)arg1 logListWithOptions:(id)arg2 onComplete:(id /* block */)arg3;
- (void)request:(id)arg1 transferGroupWithOptions:(id)arg2 onComplete:(id /* block */)arg3;
- (void)request:(id)arg1 transferLog:(id)arg2 onComplete:(id /* block */)arg3;
- (void)requestProxyMetadata:(id)arg1 onComplete:(id /* block */)arg2;
- (void)setPreserveFiles:(bool)arg1;
- (void)startJob:(id)arg1 message:(id)arg2 onComplete:(id /* block */)arg3;
- (id)statusInfo;
- (void)updateProxiedDeviceMetadata:(id)arg1 from:(id)arg2;

@end
