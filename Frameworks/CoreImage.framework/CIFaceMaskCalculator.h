/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFaceMaskCalculator : CIFilter {
    NSNumber * inputFacesCapMultip;
    CIVector * inputFacesCenterX;
    CIVector * inputFacesCenterY;
    CIVector * inputFacesChinX;
    CIVector * inputFacesChinY;
    NSNumber * inputFacesDistToBlurScaling;
    NSNumber * inputFacesEyeToEyebrowRatio;
    NSNumber * inputFacesGainMultip;
    CIVector * inputFacesLeftEyeX;
    CIVector * inputFacesLeftEyeY;
    NSNumber * inputFacesLinearBlurGrowthC;
    NSNumber * inputFacesLinearBlurGrowthM;
    NSNumber * inputFacesMaxBlurDistFromFocus;
    NSNumber * inputFacesMaxBlurOnEyes;
    CIVector * inputFacesRightEyeX;
    CIVector * inputFacesRightEyeY;
    CIImage * inputImage;
    NSNumber * inputMaxBlur;
    NSDictionary * inputTuningParameters;
}

@property (nonatomic, copy) NSNumber *inputFacesCapMultip;
@property (nonatomic, retain) CIVector *inputFacesCenterX;
@property (nonatomic, retain) CIVector *inputFacesCenterY;
@property (nonatomic, retain) CIVector *inputFacesChinX;
@property (nonatomic, retain) CIVector *inputFacesChinY;
@property (nonatomic, copy) NSNumber *inputFacesDistToBlurScaling;
@property (nonatomic, copy) NSNumber *inputFacesEyeToEyebrowRatio;
@property (nonatomic, copy) NSNumber *inputFacesGainMultip;
@property (nonatomic, retain) CIVector *inputFacesLeftEyeX;
@property (nonatomic, retain) CIVector *inputFacesLeftEyeY;
@property (nonatomic, copy) NSNumber *inputFacesLinearBlurGrowthC;
@property (nonatomic, copy) NSNumber *inputFacesLinearBlurGrowthM;
@property (nonatomic, copy) NSNumber *inputFacesMaxBlurDistFromFocus;
@property (nonatomic, copy) NSNumber *inputFacesMaxBlurOnEyes;
@property (nonatomic, retain) CIVector *inputFacesRightEyeX;
@property (nonatomic, retain) CIVector *inputFacesRightEyeY;
@property (retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputMaxBlur;
@property (nonatomic, retain) NSDictionary *inputTuningParameters;

- (id)_kernel;
- (id)inputFacesCapMultip;
- (id)inputFacesCenterX;
- (id)inputFacesCenterY;
- (id)inputFacesChinX;
- (id)inputFacesChinY;
- (id)inputFacesDistToBlurScaling;
- (id)inputFacesEyeToEyebrowRatio;
- (id)inputFacesGainMultip;
- (id)inputFacesLeftEyeX;
- (id)inputFacesLeftEyeY;
- (id)inputFacesLinearBlurGrowthC;
- (id)inputFacesLinearBlurGrowthM;
- (id)inputFacesMaxBlurDistFromFocus;
- (id)inputFacesMaxBlurOnEyes;
- (id)inputFacesRightEyeX;
- (id)inputFacesRightEyeY;
- (id)inputImage;
- (id)inputMaxBlur;
- (id)inputTuningParameters;
- (id)outputImage;
- (void)setInputFacesCapMultip:(id)arg1;
- (void)setInputFacesCenterX:(id)arg1;
- (void)setInputFacesCenterY:(id)arg1;
- (void)setInputFacesChinX:(id)arg1;
- (void)setInputFacesChinY:(id)arg1;
- (void)setInputFacesDistToBlurScaling:(id)arg1;
- (void)setInputFacesEyeToEyebrowRatio:(id)arg1;
- (void)setInputFacesGainMultip:(id)arg1;
- (void)setInputFacesLeftEyeX:(id)arg1;
- (void)setInputFacesLeftEyeY:(id)arg1;
- (void)setInputFacesLinearBlurGrowthC:(id)arg1;
- (void)setInputFacesLinearBlurGrowthM:(id)arg1;
- (void)setInputFacesMaxBlurDistFromFocus:(id)arg1;
- (void)setInputFacesMaxBlurOnEyes:(id)arg1;
- (void)setInputFacesRightEyeX:(id)arg1;
- (void)setInputFacesRightEyeY:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputMaxBlur:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;

@end
