/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface AUAudioUnitViewConfiguration : NSObject <NSSecureCoding> {
    double  _height;
    bool  _hostHasController;
    double  _width;
}

@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) bool hostHasController;
@property (nonatomic, readonly) double width;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (double)height;
- (bool)hostHasController;
- (id)initWithCoder:(id)arg1;
- (id)initWithWidth:(double)arg1 height:(double)arg2 hostHasController:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (double)width;

@end
