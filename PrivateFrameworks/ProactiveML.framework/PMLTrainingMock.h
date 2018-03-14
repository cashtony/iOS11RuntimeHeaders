/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLTrainingMock : NSObject <PMLTrainingProtocol> {
    NSArray * _collectedSessions;
    NSMutableArray * _internalCollectedSessions;
}

@property (readonly) NSArray *collectedSessions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addSessionWithCovariates:(id)arg1 label:(long long)arg2 sessionDescriptor:(id)arg3 spotlightReference:(id)arg4 isInternal:(bool)arg5;
- (void)addSessionWithCovariates:(id)arg1 source:(id)arg2 label:(long long)arg3 sessionDescriptor:(id)arg4 spotlightReference:(id)arg5 isInternal:(bool)arg6;
- (void)clearCollectedSessions;
- (id)collectedSessions;
- (void)deleteSessionsWithBundleID:(id)arg1;
- (void)deleteSessionsWithDomainIdentifiers:(id)arg1 bundleID:(id)arg2;
- (void)deleteSessionsWithIdentifiers:(id)arg1 bundleID:(id)arg2;
- (id)init;
- (bool)modelServerUpdateWithPayload:(id)arg1 error:(id*)arg2;
- (id)planReceivedWithPayload:(id)arg1 error:(id*)arg2;
- (void)trainWhile:(id /* block */)arg1;
- (void)trimDb;
- (void)updateSessionsAndLabelForModel:(id)arg1 block:(id /* block */)arg2;

@end
