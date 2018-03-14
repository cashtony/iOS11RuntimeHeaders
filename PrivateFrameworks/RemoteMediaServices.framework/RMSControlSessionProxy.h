/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSControlSessionProxy : RMSSessionProxy <RMSControlSession> {
    <RMSControlSessionDelegate> * _delegate;
    RMSIDSClient * _idsClient;
    RMSNowPlayingInfo * _nowPlayingInfo;
    RMSService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RMSControlSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RMSService *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleAudioRoutesDidUpdateNotification:(id)arg1;
- (void)_handleDidBeginEditingTextNotification:(id)arg1;
- (void)_handleDidEndEditingTextNotification:(id)arg1;
- (void)_handleDidReceivePairingChallengeRequestNotification:(id)arg1;
- (void)_handleNowPlayingArtworkDidBecomeAvailableNotification:(id)arg1;
- (void)_handleNowPlayingInfoDidUpdateNotification:(id)arg1;
- (void)_handleSessionDidEndNotification:(id)arg1;
- (void)_handleVolumeDidUpdateNotification:(id)arg1;
- (void)_notifyDelegateForArtworkChange;
- (void)addToWishlist:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)beginObservingNowPlaying;
- (void)connectToService:(id)arg1 pairingGUID:(id)arg2 allowPairing:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)dealloc;
- (id)delegate;
- (void)endObservingNowPlaying;
- (void)heartbeatDidFail;
- (id)init;
- (void)logout;
- (void)pickAudioRoute:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)seekToPlaybackTime:(int)arg1 completionHandler:(id /* block */)arg2;
- (void)sendNavigationCommand:(long long)arg1;
- (void)sendPlaybackCommand:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)sendText:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendTouchEndWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2;
- (void)sendTouchMoveWithDirection:(long long)arg1 repeatCount:(unsigned int)arg2;
- (id)service;
- (void)setDelegate:(id)arg1;
- (void)setLikedState:(long long)arg1 itemID:(unsigned long long)arg2 databaseID:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)setVolume:(float)arg1 completionHandler:(id /* block */)arg2;

@end
