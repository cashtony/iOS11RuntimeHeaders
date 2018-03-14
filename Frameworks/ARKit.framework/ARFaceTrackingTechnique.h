/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARFaceTrackingTechnique : ARTechnique {
    NSObject<OS_dispatch_semaphore> * _dataSemaphore;
    ARFaceTrackingData * _faceTrackingData;
    bool  _isFaceTracked;
}

+ (bool)isSupported;

- (void).cxx_destruct;
- (id)init;
- (id)processData:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;

@end
