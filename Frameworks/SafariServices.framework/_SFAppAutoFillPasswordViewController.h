/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFAppAutoFillPasswordViewController : UIViewController <SFPasswordRemoteViewControllerDelegate, SFQueueingServiceViewControllerProxyDelegate> {
    _UIAsyncInvocation * _cancelViewServiceRequest;
    <_SFAppAutoFillPasswordViewControllerDelegate> * _delegate;
    bool  _hasAttemptedAuthenticationForPasswords;
    SFPasswordRemoteViewController * _remoteViewController;
    SFQueueingServiceViewControllerProxy<SFPasswordServiceViewControllerProtocol> * _serviceProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFAppAutoFillPasswordViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addRemoteView;
- (void)_addRemoteViewAsChild;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_connectToService;
- (void)authenticateToPresentInPopover:(bool)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (id)init;
- (void)remoteViewController:(id)arg1 viewServiceDidTerminateWithError:(id)arg2;
- (void)remoteViewControllerWillDismiss:(id)arg1;
- (void)serviceProxyWillQueueInvocation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

@end
