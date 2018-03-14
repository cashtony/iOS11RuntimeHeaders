/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
 */

@interface PETTestLoggingOutlet : NSObject <PETLoggingOutlet> {
    NSMutableArray * _allLoggedKeys;
    NSMutableArray * _allLoggedValues;
    NSMutableDictionary * _keyValues;
    double  _lastLoggedDistributionValue;
    NSString * _lastLoggedKey;
    unsigned long long  _lastLoggedScalarValue;
    double  _previousLoggedDistributionValue;
    NSString * _previousLoggedKey;
    unsigned long long  _previousLoggedScalarValue;
}

@property (nonatomic, readonly) NSMutableArray *allLoggedKeys;
@property (nonatomic, readonly) NSMutableArray *allLoggedValues;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *keyValues;
@property (nonatomic, readonly) double lastLoggedDistributionValue;
@property (nonatomic, readonly) NSString *lastLoggedKey;
@property (nonatomic, readonly) unsigned long long lastLoggedScalarValue;
@property (nonatomic, readonly) double previousLoggedDistributionValue;
@property (nonatomic, readonly) NSString *previousLoggedKey;
@property (nonatomic, readonly) unsigned long long previousLoggedScalarValue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allLoggedKeys;
- (id)allLoggedValues;
- (id)getValueForKey:(id)arg1;
- (id)init;
- (id)keyValues;
- (double)lastLoggedDistributionValue;
- (id)lastLoggedKey;
- (unsigned long long)lastLoggedScalarValue;
- (void)logDoubleValue:(double)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;
- (void)logErrorForEvent:(id)arg1 featureId:(id)arg2 reason:(id)arg3;
- (void)logUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;
- (double)previousLoggedDistributionValue;
- (id)previousLoggedKey;
- (unsigned long long)previousLoggedScalarValue;
- (void)reset;
- (void)setUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5;

@end
