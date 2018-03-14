/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUProxyCall : TUCall <AVCRemoteVideoClientDelegate, NSSecureCoding> {
    NSArray * _activeRemoteParticipantHandles;
    NSString * _audioCategory;
    NSString * _audioMode;
    TUCallProvider * _backingProvider;
    bool  _blocked;
    NSUUID * _callGroupUUID;
    int  _callRelaySupport;
    int  _callStatus;
    NSString * _callUUID;
    NSString * _callerNameFromNetwork;
    long long  _cameraType;
    NSUUID * _conversationGroupUUID;
    TUCallDisplayContext * _displayContext;
    TUCallProvider * _displayProvider;
    bool  _downlinkMuted;
    bool  _emergency;
    NSString * _endedErrorString;
    NSString * _endedReasonString;
    NSDictionary * _endedReasonUserInfo;
    TUHandle * _handle;
    bool  _hostedOnCurrentDevice;
    bool  _isSendingAudio;
    bool  _isSendingVideo;
    bool  _isVideo;
    NSData * _localFrequency;
    <TURemoteVideoClient> * _localVideo;
    NSMutableDictionary * _localVideoModeToLayer;
    bool  _mediaStalled;
    bool  _needsManualInCallSounds;
    bool  _outgoing;
    bool  _prefersExclusiveAccessToCellularNetwork;
    NSDictionary * _providerContext;
    <TUCallServicesProxyCallActions> * _proxyCallActionsDelegate;
    struct CGSize { 
        double width; 
        double height; 
    }  _remoteAspectRatio;
    long long  _remoteCameraOrientation;
    NSData * _remoteFrequency;
    NSArray * _remoteParticipantHandles;
    struct CGSize { 
        double width; 
        double height; 
    }  _remoteScreenLandscapeAspectRatio;
    long long  _remoteScreenOrientation;
    struct CGSize { 
        double width; 
        double height; 
    }  _remoteScreenPortraitAspectRatio;
    bool  _remoteUplinkMuted;
    <TURemoteVideoClient> * _remoteVideo;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _remoteVideoContentRect;
    NSMutableDictionary * _remoteVideoModeToLayer;
    bool  _requiresRemoteVideo;
    bool  _sos;
    bool  _supportsTTYWithVoice;
    bool  _thirdPartyVideo;
    int  _ttyType;
    bool  _uplinkMuted;
    bool  _usingBaseband;
    bool  _videoDegraded;
    bool  _videoPaused;
    long long  _videoStreamToken;
    bool  _voicemail;
}

@property (nonatomic, copy) NSArray *activeRemoteParticipantHandles;
@property (nonatomic, copy) NSString *audioCategory;
@property (nonatomic, copy) NSString *audioMode;
@property (nonatomic, retain) TUCallProvider *backingProvider;
@property (getter=isBlocked, nonatomic) bool blocked;
@property (nonatomic, copy) NSUUID *callGroupUUID;
@property (nonatomic) int callRelaySupport;
@property (nonatomic) int callStatus;
@property (nonatomic, copy) NSString *callUUID;
@property (nonatomic, copy) NSString *callerNameFromNetwork;
@property (nonatomic) long long cameraType;
@property (nonatomic, copy) NSUUID *conversationGroupUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) TUCallDisplayContext *displayContext;
@property (nonatomic, retain) TUCallProvider *displayProvider;
@property (getter=isEmergency, nonatomic) bool emergency;
@property (nonatomic, copy) NSString *endedErrorString;
@property (nonatomic, copy) NSString *endedReasonString;
@property (nonatomic, copy) NSDictionary *endedReasonUserInfo;
@property (nonatomic, retain) TUHandle *handle;
@property (readonly) unsigned long long hash;
@property (getter=isHostedOnCurrentDevice, nonatomic) bool hostedOnCurrentDevice;
@property (nonatomic) bool isSendingAudio;
@property (nonatomic) bool isVideo;
@property (nonatomic, retain) NSData *localFrequency;
@property (nonatomic, retain) <TURemoteVideoClient> *localVideo;
@property (nonatomic, retain) NSMutableDictionary *localVideoModeToLayer;
@property (getter=isMediaStalled, nonatomic) bool mediaStalled;
@property (nonatomic) bool needsManualInCallSounds;
@property (getter=isOutgoing, nonatomic) bool outgoing;
@property (nonatomic) bool prefersExclusiveAccessToCellularNetwork;
@property (nonatomic, retain) NSDictionary *providerContext;
@property (nonatomic) <TUCallServicesProxyCallActions> *proxyCallActionsDelegate;
@property (nonatomic) struct CGSize { double x1; double x2; } remoteAspectRatio;
@property (nonatomic) long long remoteCameraOrientation;
@property (nonatomic, retain) NSData *remoteFrequency;
@property (nonatomic, copy) NSArray *remoteParticipantHandles;
@property (nonatomic) struct CGSize { double x1; double x2; } remoteScreenLandscapeAspectRatio;
@property (nonatomic) long long remoteScreenOrientation;
@property (nonatomic) struct CGSize { double x1; double x2; } remoteScreenPortraitAspectRatio;
@property (getter=isRemoteUplinkMuted, nonatomic) bool remoteUplinkMuted;
@property (nonatomic, retain) <TURemoteVideoClient> *remoteVideo;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } remoteVideoContentRect;
@property (nonatomic, retain) NSMutableDictionary *remoteVideoModeToLayer;
@property (getter=isSOS, setter=setSOS:, nonatomic) bool sos;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsTTYWithVoice;
@property (getter=isThirdPartyVideo, nonatomic) bool thirdPartyVideo;
@property (nonatomic) int ttyType;
@property (getter=isUsingBaseband, nonatomic) bool usingBaseband;
@property (getter=isVideoDegraded, nonatomic) bool videoDegraded;
@property (getter=isVideoPaused, nonatomic) bool videoPaused;
@property (nonatomic) long long videoStreamToken;
@property (getter=isVoicemail, nonatomic) bool voicemail;

+ (id)proxyCallWithCall:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_cameraTypeForVideoAttributeCamera:(int)arg1;
- (void)_createLocalVideoIfNecessary;
- (void)_createRemoteVideoIfNecessary;
- (long long)_orientationForVideoAttributesOrientation:(int)arg1;
- (void)_synchronizeLocalVideo;
- (void)_synchronizeRemoteVideo;
- (void)_updateVideoCallAttributes:(id)arg1;
- (void)_updateVideoStreamToken:(long long)arg1;
- (id)activeRemoteParticipantHandles;
- (void)answerWithRequest:(id)arg1;
- (id)audioCategory;
- (id)audioMode;
- (int)avcRemoteVideoModeForMode:(long long)arg1;
- (id)backingProvider;
- (id)callGroupUUID;
- (int)callRelaySupport;
- (int)callStatus;
- (id)callUUID;
- (id)callerNameFromNetwork;
- (long long)cameraType;
- (id)conversationGroupUUID;
- (void)disconnectWithReason:(int)arg1;
- (id)displayContext;
- (id)displayProvider;
- (void)encodeWithCoder:(id)arg1;
- (id)endedErrorString;
- (id)endedReasonString;
- (id)endedReasonUserInfo;
- (id)handle;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueProxyIdentifier:(id)arg1 endpointOnCurrentDevice:(bool)arg2;
- (bool)isBlocked;
- (bool)isDownlinkMuted;
- (bool)isEmergency;
- (bool)isHostedOnCurrentDevice;
- (bool)isMediaStalled;
- (bool)isOutgoing;
- (bool)isRemoteUplinkMuted;
- (bool)isSOS;
- (bool)isSendingAudio;
- (bool)isSendingVideo;
- (bool)isThirdPartyVideo;
- (bool)isUplinkMuted;
- (bool)isUsingBaseband;
- (bool)isVideo;
- (bool)isVideoDegraded;
- (bool)isVideoPaused;
- (bool)isVoicemail;
- (struct CGSize { double x1; double x2; })localAspectRatioForOrientation:(long long)arg1;
- (id)localFrequency;
- (id)localVideo;
- (id)localVideoModeToLayer;
- (bool)needsManualInCallSounds;
- (void)playDTMFToneForKey:(unsigned char)arg1;
- (bool)prefersExclusiveAccessToCellularNetwork;
- (id)providerContext;
- (id)proxyCallActionsDelegate;
- (struct CGSize { double x1; double x2; })remoteAspectRatio;
- (long long)remoteCameraOrientation;
- (id)remoteFrequency;
- (id)remoteParticipantHandles;
- (struct CGSize { double x1; double x2; })remoteScreenAspectRatio;
- (struct CGSize { double x1; double x2; })remoteScreenLandscapeAspectRatio;
- (long long)remoteScreenOrientation;
- (struct CGSize { double x1; double x2; })remoteScreenPortraitAspectRatio;
- (id)remoteVideo;
- (void)remoteVideoClient:(id)arg1 remoteMediaDidStall:(bool)arg2;
- (void)remoteVideoClient:(id)arg1 remoteScreenAttributesDidChange:(id)arg2;
- (void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;
- (void)remoteVideoClient:(id)arg1 remoteVideoDidPause:(bool)arg2;
- (void)remoteVideoClient:(id)arg1 videoDidDegrade:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })remoteVideoContentRect;
- (id)remoteVideoModeToLayer;
- (bool)requiresRemoteVideo;
- (void)sendHardPauseDigits;
- (void)setActiveRemoteParticipantHandles:(id)arg1;
- (void)setAudioCategory:(id)arg1;
- (void)setAudioMode:(id)arg1;
- (void)setBackingProvider:(id)arg1;
- (void)setBlocked:(bool)arg1;
- (void)setCallDisconnectedDueToComponentCrash;
- (void)setCallGroupUUID:(id)arg1;
- (void)setCallRelaySupport:(int)arg1;
- (void)setCallStatus:(int)arg1;
- (void)setCallUUID:(id)arg1;
- (void)setCallerNameFromNetwork:(id)arg1;
- (void)setCameraType:(long long)arg1;
- (void)setConversationGroupUUID:(id)arg1;
- (void)setDisconnectedReason:(int)arg1;
- (void)setDisplayContext:(id)arg1;
- (void)setDisplayProvider:(id)arg1;
- (void)setDownlinkMuted:(bool)arg1;
- (void)setEmergency:(bool)arg1;
- (void)setEndedErrorString:(id)arg1;
- (void)setEndedReasonString:(id)arg1;
- (void)setEndedReasonUserInfo:(id)arg1;
- (void)setEndpointOnCurrentDevice:(bool)arg1;
- (void)setHandle:(id)arg1;
- (void)setHostedOnCurrentDevice:(bool)arg1;
- (void)setIsSendingAudio:(bool)arg1;
- (void)setIsSendingVideo:(bool)arg1;
- (void)setIsVideo:(bool)arg1;
- (void)setLocalFrequency:(id)arg1;
- (void)setLocalVideo:(id)arg1;
- (void)setLocalVideoLayer:(id)arg1 forMode:(long long)arg2;
- (void)setLocalVideoModeToLayer:(id)arg1;
- (void)setMediaStalled:(bool)arg1;
- (void)setNeedsManualInCallSounds:(bool)arg1;
- (void)setOutgoing:(bool)arg1;
- (void)setPrefersExclusiveAccessToCellularNetwork:(bool)arg1;
- (void)setProviderContext:(id)arg1;
- (void)setProxyCallActionsDelegate:(id)arg1;
- (void)setRemoteAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setRemoteCameraOrientation:(long long)arg1;
- (void)setRemoteFrequency:(id)arg1;
- (void)setRemoteParticipantHandles:(id)arg1;
- (void)setRemoteScreenLandscapeAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setRemoteScreenOrientation:(long long)arg1;
- (void)setRemoteScreenPortraitAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (void)setRemoteUplinkMuted:(bool)arg1;
- (void)setRemoteVideo:(id)arg1;
- (void)setRemoteVideoContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRemoteVideoLayer:(id)arg1 forMode:(long long)arg2;
- (void)setRemoteVideoModeToLayer:(id)arg1;
- (void)setRemoteVideoPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRemoteVideoPresentationState:(int)arg1;
- (void)setRequiresRemoteVideo:(bool)arg1;
- (void)setSOS:(bool)arg1;
- (void)setShouldSuppressRingtone:(bool)arg1;
- (void)setSupportsTTYWithVoice:(bool)arg1;
- (void)setThirdPartyVideo:(bool)arg1;
- (void)setTransitionStatus:(int)arg1;
- (void)setTtyType:(int)arg1;
- (void)setUplinkMuted:(bool)arg1;
- (void)setUsingBaseband:(bool)arg1;
- (void)setVideoDegraded:(bool)arg1;
- (void)setVideoPaused:(bool)arg1;
- (void)setVideoStreamToken:(long long)arg1;
- (void)setVoicemail:(bool)arg1;
- (void)setWantsHoldMusic:(bool)arg1;
- (bool)supportsTTYWithVoice;
- (int)ttyType;
- (void)updateProxyCallWithDaemon;
- (void)updateWithCall:(id)arg1;
- (long long)videoStreamToken;

@end
