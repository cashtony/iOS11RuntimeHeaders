/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVOutputDeviceRoutingDataSource : MPAVRoutingDataSource {
    MPAVEndpointRoutingDataSource * _endpointDataSource;
}

- (void).cxx_destruct;
- (void)_endpointsDidChange:(id)arg1;
- (id)_flattenedRoutes:(id)arg1;
- (void)dealloc;
- (long long)discoveryMode;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (void)setDiscoveryMode:(long long)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(id /* block */)arg3;

@end