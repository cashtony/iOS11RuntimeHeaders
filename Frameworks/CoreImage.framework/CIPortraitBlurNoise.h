/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPortraitBlurNoise : CIFilter {
    CIVector * inputExtent;
    CIImage * inputImage;
    NSNumber * inputLumaNoiseAmpl;
    NSNumber * inputLumaNoiseModelCoeff;
}

@property (copy) CIVector *inputExtent;
@property (retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputLumaNoiseAmpl;
@property (nonatomic, copy) NSNumber *inputLumaNoiseModelCoeff;

- (id)_kernel;
- (id)inputExtent;
- (id)inputImage;
- (id)inputLumaNoiseAmpl;
- (id)inputLumaNoiseModelCoeff;
- (id)outputImage;
- (void)setInputExtent:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputLumaNoiseAmpl:(id)arg1;
- (void)setInputLumaNoiseModelCoeff:(id)arg1;

@end