/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMRemoteShutterController : NSObject <CCCameraConnectionDelegate> {
    CAMMotionController * __motionController;
    NSArray * _availableCaptureModes;
    long long  _captureDevice;
    long long  _captureMode;
    bool  _capturingTimelapse;
    bool  _capturingVideo;
    CCCameraConnection * _connection;
    <CAMRemoteShutterDelegate> * _delegate;
    long long  _flashMode;
    long long  _hdrMode;
    long long  _irisMode;
    long long  _shallowDepthOfFieldStatus;
    bool  _showingPreview;
    double  _zoomAmount;
}

@property (nonatomic, readonly) CAMMotionController *_motionController;
@property (nonatomic, retain) NSArray *availableCaptureModes;
@property (nonatomic) long long captureDevice;
@property (nonatomic) long long captureMode;
@property (getter=isCapturingTimelapse, nonatomic) bool capturingTimelapse;
@property (getter=isCapturingVideo, nonatomic) bool capturingVideo;
@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (nonatomic, retain) CCCameraConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CAMRemoteShutterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long flashMode;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long hdrMode;
@property (nonatomic) long long irisMode;
@property (nonatomic) long long shallowDepthOfFieldStatus;
@property (getter=isShowingPreview, nonatomic) bool showingPreview;
@property (readonly) Class superclass;
@property (nonatomic) double zoomAmount;

- (void).cxx_destruct;
- (void)_captureOrientationDidChange:(id)arg1;
- (long long)_convertMode:(long long)arg1;
- (long long)_currentMode;
- (void)_enterBackground:(id)arg1;
- (void)_enterForeground:(id)arg1;
- (id)_motionController;
- (void)_sendMode;
- (void)applyCaptureConfiguration:(id)arg1;
- (id)availableCaptureModes;
- (void)burstCaptureDidStop;
- (void)burstCaptureNumberOfPhotosDidChange:(unsigned long long)arg1;
- (void)burstCaptureWillStart;
- (bool)cameraConnection:(id)arg1 setCaptureMode:(long long)arg2;
- (void)cameraConnection:(id)arg1 setFlashMode:(long long)arg2;
- (void)cameraConnection:(id)arg1 setFocusPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)cameraConnection:(id)arg1 setHDRMode:(long long)arg2;
- (void)cameraConnection:(id)arg1 setIrisMode:(long long)arg2;
- (void)cameraConnection:(id)arg1 setZoomAmount:(double)arg2;
- (void)cameraConnection:(id)arg1 takePhotoWithCountdown:(unsigned long long)arg2;
- (bool)cameraConnectionBeginBurstCapture:(id)arg1;
- (bool)cameraConnectionBurstSupport:(id)arg1;
- (void)cameraConnectionCancelCountdown:(id)arg1;
- (long long)cameraConnectionCaptureMode:(id)arg1;
- (bool)cameraConnectionEndBurstCapture:(id)arg1;
- (long long)cameraConnectionFlashMode:(id)arg1;
- (long long)cameraConnectionFlashSupport:(id)arg1;
- (long long)cameraConnectionHDRMode:(id)arg1;
- (long long)cameraConnectionHDRSupport:(id)arg1;
- (long long)cameraConnectionIrisMode:(id)arg1;
- (long long)cameraConnectionIrisSupport:(id)arg1;
- (bool)cameraConnectionIsMirrored:(id)arg1;
- (bool)cameraConnectionIsShowingLivePreview:(id)arg1;
- (long long)cameraConnectionOrientation:(id)arg1;
- (bool)cameraConnectionStartCapture:(id)arg1;
- (bool)cameraConnectionStopCapture:(id)arg1;
- (id)cameraConnectionSupportedCaptureModes:(id)arg1;
- (void)cameraConnectionToggleCameraDevice:(id)arg1;
- (bool)cameraConnectionToggleCameraDeviceSupport:(id)arg1;
- (double)cameraConnectionZoomAmount:(id)arg1;
- (bool)cameraConnectionZoomSupport:(id)arg1;
- (long long)captureDevice;
- (long long)captureMode;
- (void)closeConnection;
- (id)connection;
- (void)countdownCanceled;
- (void)dealloc;
- (id)delegate;
- (void)didStartCaptureTimer;
- (void)didStopCapture;
- (long long)flashMode;
- (long long)hdrMode;
- (id)initWithCaptureConfiguration:(id)arg1 motionController:(id)arg2;
- (long long)irisMode;
- (bool)isCapturingTimelapse;
- (bool)isCapturingVideo;
- (bool)isConnected;
- (bool)isShowingPreview;
- (void)openConnection;
- (void)sendThumbnailData:(id)arg1 isVideo:(bool)arg2;
- (void)sendThumbnailImage:(id)arg1 isVideo:(bool)arg2;
- (void)setAvailableCaptureModes:(id)arg1;
- (void)setCaptureDevice:(long long)arg1;
- (void)setCaptureMode:(long long)arg1;
- (void)setCapturingTimelapse:(bool)arg1;
- (void)setCapturingVideo:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFlashMode:(long long)arg1;
- (void)setHdrMode:(long long)arg1;
- (void)setIrisMode:(long long)arg1;
- (void)setShallowDepthOfFieldStatus:(long long)arg1;
- (void)setShowingPreview:(bool)arg1;
- (void)setZoomAmount:(double)arg1;
- (long long)shallowDepthOfFieldStatus;
- (void)willStartCapturing;
- (double)zoomAmount;

@end
