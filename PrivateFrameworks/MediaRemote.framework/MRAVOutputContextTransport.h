/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVOutputContextTransport : MRExternalDeviceTransport {
    void * _deviceInfo;
    NSError * _error;
    MRAVInputStream * _inputStream;
    AVOutputContext * _outputContext;
    NSArray * _outputDevices;
    MRAVOutputStream * _outputStream;
    NSObject<OS_dispatch_queue> * _serialQueue;
    unsigned long long  _state;
    bool  _useSystemAuthenticationPrompt;
}

@property (nonatomic, readonly) NSArray *outputDevices;

- (void)_destroyRemoteControlContext:(id*)arg1;
- (id)_onQueue_createRemoteControlContextWithID:(id)arg1;
- (void)_onQueue_initializeOutputContext;
- (void)_onQueue_resetStreams;
- (void)_outputContextDevicesDidChangeNotification:(id)arg1;
- (void)_registerNotificationsForOutputContext:(id)arg1;
- (void)_unregisterNotificationsForOutputContext:(id)arg1;
- (void)dealloc;
- (id)description;
- (void*)deviceInfo;
- (id)error;
- (bool)getInputStream:(id*)arg1 outputStream:(id*)arg2;
- (id)hostname;
- (id)initWithOutputDevices:(id)arg1;
- (id)name;
- (id)outputDevices;
- (long long)port;
- (bool)requiresCustomPairing;
- (void)reset;
- (void)setShouldUseSystemAuthenticationPrompt:(bool)arg1;
- (bool)shouldUseSystemAuthenticationPrompt;

@end
