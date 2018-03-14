/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Haptics.framework/Haptics
 */

@interface PatternPlayer : NSObject <HPHapticPatternPlayer> {
    AVHapticPlayerChannel * _channel;
    HPHapticEngine * _engine;
    NSArray * _events;
    unsigned long long  _runningToken;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithPattern:(id)arg1 engine:(id)arg2;
- (bool)sendParameters:(id)arg1 atTime:(double)arg2 error:(id*)arg3;
- (bool)start:(double)arg1 error:(id*)arg2;
- (bool)stop:(double)arg1 error:(id*)arg2;

@end
