/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iOSScreenSharing.framework/iOSScreenSharing
 */

@interface ViewServiceHelper : NSObject <NSXPCListenerDelegate, ViewServiceProtocol> {
    NSObject<ViewServiceHelperDelegate> * _delegate;
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property NSObject<ViewServiceHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSXPCListener *listener;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)handleStatusBarTap;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)pauseResumeResponse:(id)arg1;
- (void)pidNotification:(id)arg1;
- (void)run;
- (void)setDelegate:(id)arg1;
- (void)setListener:(id)arg1;
- (void)termsAndConditionsResponse:(id)arg1;

@end
