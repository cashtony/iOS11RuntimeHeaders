/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAPresentationModifier : NSObject {
    void * _impl;
    id  _keyPath;
    int  _l;
    id  _value;
}

@property (readonly) bool additive;
@property (getter=isEnabled) bool enabled;
@property (readonly, copy) NSString *keyPath;
@property (retain) id value;

- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (bool)additive;
- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (id)initWithKeyPath:(id)arg1 initialValue:(id)arg2 additive:(bool)arg3;
- (bool)isEnabled;
- (id)keyPath;
- (void)setEnabled:(bool)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end