/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol> {
    CLIntersiloInterface * _inboundInterface;
    CLIntersiloInterface * _outboundInterface;
    CLIntersiloUniverse * _universe;
    bool  _valid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CLIntersiloInterface *inboundInterface;
@property (nonatomic, readonly) CLIntersiloInterface *outboundInterface;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CLIntersiloUniverse *universe;
@property (nonatomic) bool valid;

+ (void)becameFatallyBlocked:(id)arg1;
+ (id)getSilo;
+ (bool)isSupported;
+ (void)performSyncOnSilo:(id)arg1 invoker:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)inboundInterface;
- (id)init;
- (id)initWithInboundProtocol:(id)arg1 outboundProtocol:(id)arg2;
- (bool)isHydrated;
- (id)outboundInterface;
- (void)setUniverse:(id)arg1;
- (void)setValid:(bool)arg1;
- (id)universe;
- (bool)valid;

@end