/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARWorldTrackingConfiguration : ARConfiguration {
    unsigned long long  _planeDetection;
    bool  _relocalizationEnabled;
}

@property (nonatomic) unsigned long long planeDetection;
@property (nonatomic) bool relocalizationEnabled;

+ (bool)isSupported;
+ (id)new;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)planeDetection;
- (bool)relocalizationEnabled;
- (void)setPlaneDetection:(unsigned long long)arg1;
- (void)setRelocalizationEnabled:(bool)arg1;
- (id)techniques;

@end
