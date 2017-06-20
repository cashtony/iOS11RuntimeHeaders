/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWVisionLandmarkDetector : NSObject {
    BWPixelBufferPool * _faceDetectionBufferPool;
    M2MController * _m2mController;
}

+ (void)initialize;

- (id)_detectLandmarksUsingInputPixelBuffer:(struct __CVBuffer { }*)arg1 metadata:(id)arg2 outputFaceDetectionOrientation:(int*)arg3;
- (void)dealloc;
- (int)detectFaceLandmarksUsingSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 attachingToSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (id)init;
- (int)prepareForDetectionWithInputVideoFormat:(id)arg1;

@end