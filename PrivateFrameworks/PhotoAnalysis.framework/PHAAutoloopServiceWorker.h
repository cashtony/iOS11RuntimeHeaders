/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAAutoloopServiceWorker : PHAWorker {
    PHAAnalysisWorkerJob * _currentJob;
    PHAAutoloopAnalysisPerformer * _currentPerformer;
    NSMutableArray * _pendingAssetIdentifiers;
    NSObject<OS_dispatch_queue> * _workerQueue;
}

+ (long long)applicationDataFolderIdentifier;
+ (bool)persistsState;
+ (short)workerType;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_processAsset:(id)arg1;
- (void)_processNextPendingAssetIdentifier;
- (void)cooldown;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (bool)startAnalysisJob:(id)arg1 error:(id*)arg2;
- (bool)stopAnalysisJob:(id)arg1 error:(id*)arg2;

@end
