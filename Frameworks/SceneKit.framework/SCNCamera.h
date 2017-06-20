/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNCamera : NSObject <NSCopying, NSSecureCoding, SCNAnimatable, SCNTechniqueSupport> {
    SCNOrderedDictionary * _animations;
    float  _aspectRatio;
    unsigned int  _automaticallyAdjustsZRange;
    float  _averageGray;
    NSMutableDictionary * _bindings;
    long long  _bladeCount;
    float  _bloomBlurRadius;
    float  _bloomIntensity;
    float  _bloomThreshold;
    struct __C3DCamera { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5 : 1; unsigned int x_2_1_6 : 1; unsigned int x_2_1_7 : 1; double x_2_1_8; double x_2_1_9; double x_2_1_10; float x_2_1_11; double x_2_1_12; union C3DMatrix4x4 { float x_13_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_13_2_2[4]; void*x_13_2_3; } x_2_1_13; double x_2_1_14; double x_2_1_15; } x2; float x3; float x4; float x5; float x6; int x7; int x8; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned char x13; union C3DMatrix4x4 { float x_14_1_1[16]; void*x_14_1_2[4]; void*x_14_1_3; } x14; float x15; float x16; float x17; float x18; } * _camera;
    unsigned long long  _categoryBitMask;
    float  _colorFringeIntensity;
    float  _colorFringeStrength;
    SCNMaterialProperty * _colorGrading;
    float  _contrast;
    unsigned int  _custom;
    float  _dofIntensity;
    float  _exposureAdaptationBrighteningSpeedFactor;
    float  _exposureAdaptationDarkeningSpeedFactor;
    float  _exposureAdaptationDuration;
    double  _exposureAdaptationHistogramRangeHighProbability;
    double  _exposureAdaptationHistogramRangeLowProbability;
    long long  _exposureAdaptationMode;
    float  _exposureOffset;
    float  _fStop;
    float  _fieldOfView;
    unsigned int  _fillMode;
    long long  _focalBlurSampleCount;
    float  _focalLength;
    float  _focusDistance;
    unsigned int  _isPresentationInstance;
    unsigned int  _legacyFov;
    float  _maximumExposure;
    float  _minimumExposure;
    float  _motionBlurIntensity;
    NSString * _name;
    double  _orthographicScale;
    unsigned int  _projectionDirection;
    struct SCNMatrix4 { 
        float m11; 
        float m12; 
        float m13; 
        float m14; 
        float m21; 
        float m22; 
        float m23; 
        float m24; 
        float m31; 
        float m32; 
        float m33; 
        float m34; 
        float m41; 
        float m42; 
        float m43; 
        float m44; 
    }  _projectionTransform;
    float  _saturation;
    struct { 
        float intensity; 
        float radius; 
        float bias; 
        float depthThreshold; 
        float normalThreshold; 
        long long sampleCount; 
        long long downSample; 
    }  _screenSpaceAmbientOcclusion;
    float  _sensorSize;
    SCNTechnique * _technique;
    unsigned int  _usesOrthographicProjection;
    float  _vignettingIntensity;
    float  _vignettingPower;
    bool  _wantsExposureAdaptation;
    bool  _wantsHDR;
    float  _whitePoint;
    float  _xFov;
    float  _yFov;
    double  _zFar;
    double  _zNear;
}

@property (readonly) NSArray *animationKeys;
@property (nonatomic) double aperture;
@property (nonatomic) long long apertureBladeCount;
@property (nonatomic) bool automaticallyAdjustsZRange;
@property (nonatomic) double averageGray;
@property (nonatomic) double bloomBlurRadius;
@property (nonatomic) double bloomIntensity;
@property (nonatomic) double bloomThreshold;
@property (nonatomic) unsigned long long categoryBitMask;
@property (nonatomic) double colorFringeIntensity;
@property (nonatomic) double colorFringeStrength;
@property (nonatomic, readonly) SCNMaterialProperty *colorGrading;
@property (nonatomic) double contrast;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double exposureAdaptationBrighteningSpeedFactor;
@property (nonatomic) double exposureAdaptationDarkeningSpeedFactor;
@property (nonatomic) double exposureOffset;
@property (nonatomic) double fStop;
@property (nonatomic) double fieldOfView;
@property (nonatomic) double focalBlurRadius;
@property (nonatomic) long long focalBlurSampleCount;
@property (nonatomic) double focalDistance;
@property (nonatomic) double focalLength;
@property (nonatomic) double focalSize;
@property (nonatomic) double focusDistance;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumExposure;
@property (nonatomic) double minimumExposure;
@property (nonatomic) double motionBlurIntensity;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) double orthographicScale;
@property (nonatomic) long long projectionDirection;
@property (nonatomic) struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } projectionTransform;
@property (nonatomic) double saturation;
@property (nonatomic) double screenSpaceAmbientOcclusionBias;
@property (nonatomic) double screenSpaceAmbientOcclusionDepthThreshold;
@property (nonatomic) double screenSpaceAmbientOcclusionIntensity;
@property (nonatomic) double screenSpaceAmbientOcclusionNormalThreshold;
@property (nonatomic) double screenSpaceAmbientOcclusionRadius;
@property (nonatomic) double sensorHeight;
@property (readonly) Class superclass;
@property (nonatomic, copy) SCNTechnique *technique;
@property (nonatomic) bool usesOrthographicProjection;
@property (nonatomic) double vignettingIntensity;
@property (nonatomic) double vignettingPower;
@property (nonatomic) bool wantsDepthOfField;
@property (nonatomic) bool wantsExposureAdaptation;
@property (nonatomic) bool wantsHDR;
@property (nonatomic) double whitePoint;
@property (nonatomic) double xFov;
@property (nonatomic) double yFov;
@property (nonatomic) double zFar;
@property (nonatomic) double zNear;

+ (id)camera;
+ (id)cameraWithCameraRef:(struct __C3DCamera { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5 : 1; unsigned int x_2_1_6 : 1; unsigned int x_2_1_7 : 1; double x_2_1_8; double x_2_1_9; double x_2_1_10; float x_2_1_11; double x_2_1_12; union C3DMatrix4x4 { float x_13_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_13_2_2[4]; void*x_13_2_3; } x_2_1_13; double x_2_1_14; double x_2_1_15; } x2; float x3; float x4; float x5; float x6; int x7; int x8; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned char x13; union C3DMatrix4x4 { float x_14_1_1[16]; void*x_14_1_2[4]; void*x_14_1_3; } x14; float x15; float x16; float x17; float x18; }*)arg1;
+ (id)cameraWithMDLCamera:(id)arg1;
+ (id)keyPathsForValuesAffectingFieldOfView;
+ (id)keyPathsForValuesAffectingFocalLength;
+ (bool)supportsSecureCoding;

- (const void*)__CFObject;
- (bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (void)_copyAnimationsFrom:(id)arg1;
- (void)_customEncodingOfSCNCamera:(id)arg1;
- (void)_didDecodeSCNCamera:(id)arg1;
- (void)_pauseAnimation:(bool)arg1 forKey:(id)arg2 pausedByNode:(bool)arg3;
- (void)_registerAsObserver;
- (id)_scnAnimationForKey:(id)arg1;
- (id)_scnBindings;
- (void)_syncEntityObjCModel;
- (void)_syncObjCAnimations;
- (void)_syncObjCModel;
- (void)_updateFocalLength;
- (void)_updateFov;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (id)animationKeys;
- (struct __C3DAnimationManager { }*)animationManager;
- (id)animationPlayerForKey:(id)arg1;
- (double)aperture;
- (long long)apertureBladeCount;
- (double)aspectRatio;
- (bool)automaticallyAdjustsZRange;
- (double)averageGray;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (double)bloomBlurRadius;
- (double)bloomIntensity;
- (double)bloomThreshold;
- (struct __C3DCamera { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5 : 1; unsigned int x_2_1_6 : 1; unsigned int x_2_1_7 : 1; double x_2_1_8; double x_2_1_9; double x_2_1_10; float x_2_1_11; double x_2_1_12; union C3DMatrix4x4 { float x_13_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_13_2_2[4]; void*x_13_2_3; } x_2_1_13; double x_2_1_14; double x_2_1_15; } x2; float x3; float x4; float x5; float x6; int x7; int x8; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned char x13; union C3DMatrix4x4 { float x_14_1_1[16]; void*x_14_1_2[4]; void*x_14_1_3; } x14; float x15; float x16; float x17; float x18; }*)cameraRef;
- (unsigned long long)categoryBitMask;
- (double)colorFringeIntensity;
- (double)colorFringeStrength;
- (id)colorGrading;
- (double)contrast;
- (id)copy;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugQuickLookData;
- (id)debugQuickLookObject;
- (id)description;
- (float)dofIntensity;
- (void)encodeWithCoder:(id)arg1;
- (double)exposureAdaptationBrighteningSpeedFactor;
- (double)exposureAdaptationDarkeningSpeedFactor;
- (double)exposureAdaptationDuration;
- (double)exposureAdaptationHistogramRangeHighProbability;
- (double)exposureAdaptationHistogramRangeLowProbability;
- (long long)exposureAdaptationMode;
- (double)exposureOffset;
- (double)fStop;
- (double)fieldOfView;
- (long long)fieldOfViewOrientation;
- (long long)fillMode;
- (double)focalBlurRadius;
- (long long)focalBlurSampleCount;
- (double)focalDistance;
- (double)focalLength;
- (double)focalSize;
- (double)focusDistance;
- (bool)hasCustomProjectionTransform;
- (id)identifier;
- (id)init;
- (id)initPresentationCameraWithCameraRef:(struct __C3DCamera { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5 : 1; unsigned int x_2_1_6 : 1; unsigned int x_2_1_7 : 1; double x_2_1_8; double x_2_1_9; double x_2_1_10; float x_2_1_11; double x_2_1_12; union C3DMatrix4x4 { float x_13_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_13_2_2[4]; void*x_13_2_3; } x_2_1_13; double x_2_1_14; double x_2_1_15; } x2; float x3; float x4; float x5; float x6; int x7; int x8; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned char x13; union C3DMatrix4x4 { float x_14_1_1[16]; void*x_14_1_2[4]; void*x_14_1_3; } x14; float x15; float x16; float x17; float x18; }*)arg1;
- (id)initWithCameraRef:(struct __C3DCamera { struct __C3DEntity { struct __CFRuntimeBase { unsigned long long x_1_2_1; unsigned long long x_1_2_2; } x_1_1_1; void *x_1_1_2; struct __CFString {} *x_1_1_3; struct __CFString {} *x_1_1_4; struct __CFDictionary {} *x_1_1_5; struct __C3DScene {} *x_1_1_6; long long x_1_1_7; } x1; struct { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5 : 1; unsigned int x_2_1_6 : 1; unsigned int x_2_1_7 : 1; double x_2_1_8; double x_2_1_9; double x_2_1_10; float x_2_1_11; double x_2_1_12; union C3DMatrix4x4 { float x_13_2_1[16]; /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_13_2_2[4]; void*x_13_2_3; } x_2_1_13; double x_2_1_14; double x_2_1_15; } x2; float x3; float x4; float x5; float x6; int x7; int x8; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned char x13; union C3DMatrix4x4 { float x_14_1_1[16]; void*x_14_1_2[4]; void*x_14_1_3; } x14; float x15; float x16; float x17; float x18; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAnimationForKeyPaused:(id)arg1;
- (bool)isPausedOrPausedByInheritance;
- (double)maximumExposure;
- (double)minimumExposure;
- (double)motionBlurIntensity;
- (id)name;
- (double)orthographicScale;
- (void)pauseAnimationForKey:(id)arg1;
- (id)presentationCamera;
- (id)presentationInstance;
- (long long)projectionDirection;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })projectionTransform;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })projectionTransformWithViewportSize:(struct CGSize { double x1; double x2; })arg1;
- (void)removeAllAnimations;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (double)saturation;
- (id)scene;
- (struct __C3DScene { }*)sceneRef;
- (double)screenSpaceAmbientOcclusionBias;
- (double)screenSpaceAmbientOcclusionDepthThreshold;
- (long long)screenSpaceAmbientOcclusionDownSample;
- (double)screenSpaceAmbientOcclusionIntensity;
- (double)screenSpaceAmbientOcclusionNormalThreshold;
- (double)screenSpaceAmbientOcclusionRadius;
- (long long)screenSpaceAmbientOcclusionSampleCount;
- (double)sensorHeight;
- (void)setAperture:(double)arg1;
- (void)setApertureBladeCount:(long long)arg1;
- (void)setAspectRatio:(double)arg1;
- (void)setAutomaticallyAdjustsZRange:(bool)arg1;
- (void)setAverageGray:(double)arg1;
- (void)setBloomBlurRadius:(double)arg1;
- (void)setBloomIntensity:(double)arg1;
- (void)setBloomThreshold:(double)arg1;
- (void)setCategoryBitMask:(unsigned long long)arg1;
- (void)setColorFringeIntensity:(double)arg1;
- (void)setColorFringeStrength:(double)arg1;
- (void)setContrast:(double)arg1;
- (void)setDofIntensity:(float)arg1;
- (void)setExposureAdaptationBrighteningSpeedFactor:(double)arg1;
- (void)setExposureAdaptationDarkeningSpeedFactor:(double)arg1;
- (void)setExposureAdaptationDuration:(double)arg1;
- (void)setExposureAdaptationHistogramRangeHighProbability:(double)arg1;
- (void)setExposureAdaptationHistogramRangeLowProbability:(double)arg1;
- (void)setExposureAdaptationMode:(long long)arg1;
- (void)setExposureOffset:(double)arg1;
- (void)setFStop:(double)arg1;
- (void)setFieldOfView:(double)arg1;
- (void)setFieldOfViewOrientation:(long long)arg1;
- (void)setFillMode:(long long)arg1;
- (void)setFocalBlurRadius:(double)arg1;
- (void)setFocalBlurSampleCount:(long long)arg1;
- (void)setFocalDistance:(double)arg1;
- (void)setFocalLength:(double)arg1;
- (void)setFocalSize:(double)arg1;
- (void)setFocusDistance:(double)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMaximumExposure:(double)arg1;
- (void)setMinimumExposure:(double)arg1;
- (void)setMotionBlurIntensity:(double)arg1;
- (void)setName:(id)arg1;
- (void)setOrthographicScale:(double)arg1;
- (void)setProjectionDirection:(long long)arg1;
- (void)setProjectionTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)setSaturation:(double)arg1;
- (void)setScreenSpaceAmbientOcclusionBias:(double)arg1;
- (void)setScreenSpaceAmbientOcclusionDepthThreshold:(double)arg1;
- (void)setScreenSpaceAmbientOcclusionDownSample:(long long)arg1;
- (void)setScreenSpaceAmbientOcclusionIntensity:(double)arg1;
- (void)setScreenSpaceAmbientOcclusionNormalThreshold:(double)arg1;
- (void)setScreenSpaceAmbientOcclusionRadius:(double)arg1;
- (void)setScreenSpaceAmbientOcclusionSampleCount:(long long)arg1;
- (void)setSensorHeight:(double)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)setTechnique:(id)arg1;
- (void)setUsesOrthographicProjection:(bool)arg1;
- (void)setVignettingIntensity:(double)arg1;
- (void)setVignettingPower:(double)arg1;
- (void)setWantsDepthOfField:(bool)arg1;
- (void)setWantsExposureAdaptation:(bool)arg1;
- (void)setWantsHDR:(bool)arg1;
- (void)setWhitePoint:(double)arg1;
- (void)setXFov:(double)arg1;
- (void)setXMag:(double)arg1;
- (void)setYFov:(double)arg1;
- (void)setYMag:(double)arg1;
- (void)setZFar:(double)arg1;
- (void)setZNear:(double)arg1;
- (id)technique;
- (void)unbindAnimatablePath:(id)arg1;
- (bool)useLegacyFov;
- (bool)usesOrthographicProjection;
- (double)vignettingIntensity;
- (double)vignettingPower;
- (bool)wantsDepthOfField;
- (bool)wantsExposureAdaptation;
- (bool)wantsHDR;
- (double)whitePoint;
- (double)xFov;
- (double)xMag;
- (double)yFov;
- (double)yMag;
- (double)zFar;
- (double)zNear;

@end