/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptGradient : SUScriptObject {
    SUGradient * _nativeGradient;
}

@property (readonly) NSString *type;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (void)addColorStopWithOffset:(double)arg1 color:(id)arg2;
- (id)attributeKeys;
- (id)copyNativeGradient;
- (void)dealloc;
- (id)init;
- (id)initLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4;
- (id)initRadialGraidentWithX0:(double)arg1 y0:(double)arg2 r0:(double)arg3 x1:(double)arg4 y1:(double)arg5 r1:(double)arg6;
- (id)initWithGradient:(id)arg1;
- (id)patternColorWithWidth:(double)arg1 height:(double)arg2 opaque:(bool)arg3;
- (id)scriptAttributeKeys;
- (id)type;

@end
