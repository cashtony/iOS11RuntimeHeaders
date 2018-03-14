/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMDeviceSetupSession : NSObject <HMFLogging, HMFMessageReceiver> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HMDeviceSetupSessionDelegate> * _delegate;
    NSUUID * _identifier;
    HMFMessageDispatcher * _messageDispatcher;
    bool  _open;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    long long  _role;
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HMDeviceSetupSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (nonatomic, readonly) HMFMessageDispatcher *messageDispatcher;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (getter=isOpen, nonatomic) bool open;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) long long role;
@property (readonly) Class superclass;
@property (readonly, copy) NSDictionary *userInfo;

+ (id)homeManagerDestination;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)__handleClose:(id)arg1;
- (void)__handleReceivedExchangeData:(id)arg1;
- (void)__registerForMessages;
- (void)_closeWithError:(id)arg1;
- (void)_handleDisconnection:(id)arg1;
- (void)_handleOpenedSession;
- (void)_reallySendExchangeData:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)clientQueue;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (id)identifier;
- (id)init;
- (id)initWithRole:(long long)arg1 delegate:(id)arg2;
- (bool)isOpen;
- (id)logIdentifier;
- (id)messageDestination;
- (id)messageDispatcher;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)open;
- (id)propertyQueue;
- (long long)role;
- (void)sendExchangeData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setOpen:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
