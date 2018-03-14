/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PASampleTimeInsensitiveTaskData : NSObject <PASerializable> {
    bool  _allowsIdleExit;
    struct _CSArchitecture { 
        int cpu_type; 
        int cpu_subtype; 
    }  _architecture;
    NSString * _bundleName;
    NSSet * _cachedDonatingUniqueIds;
    PASampleTaskDataPrivateData * _cachedPrivateData;
    bool  _didExec;
    bool  _gatheredNonTimeCriticalAuxiliaryInfoFromLiveSystem;
    bool  _gatheredTimeCriticalAuxiliaryInfoFromLiveSystem;
    NSArray * _imageInfos;
    bool  _isDirty;
    bool  _isThirdParty;
    bool  _isTranslocated;
    bool  _isUnresponsive;
    NSString * _mainBinaryPath;
    double  _mostRecentTimeSamplingOnlyMainThread;
    NSString * _name;
    int  _pid;
    int  _ppid;
    NSMutableSet * _rootUserFrames;
    int  _rpid;
    double  _timeOfLastResponse;
    unsigned int  _uid;
    unsigned long long  _uniquePid;
    bool  _usesSuddenTermination;
    bool  _workQueueExceededConstrainedThreadLimit;
    bool  _workQueueExceededTotalThreadLimit;
    bool  _wqAndDirtyAreStatic;
    PASampleTaskData * mostRecentTask;
    long long  mostRecentTaskSampleIndex;
}

@property (readonly) bool allowsIdleExit;
@property (readonly) struct _CSArchitecture { int x1; int x2; } architecture;
@property (readonly) NSString *bundleName;
@property (retain) NSSet *cachedDonatingUniqueIds;
@property (retain) PASampleTaskDataPrivateData *cachedPrivateData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool didExec;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *imageInfos;
@property (readonly) bool isDirty;
@property (readonly) bool isThirdParty;
@property (readonly) bool isTranslocated;
@property (readonly) bool isUnresponsive;
@property (readonly) unsigned long long mainBinaryOffset;
@property (readonly) NSString *mainBinaryPath;
@property (readonly) NSUUID *mainBinaryUuid;
@property double mostRecentTimeSamplingOnlyMainThread;
@property (copy) NSString *name;
@property (readonly) int pid;
@property (readonly) int ppid;
@property (readonly) int rpid;
@property (readonly) Class superclass;
@property (readonly) double timeOfLastResponse;
@property (readonly) unsigned int uid;
@property (readonly) unsigned long long uniquePid;
@property (readonly) bool usesSuddenTermination;
@property (readonly) bool workQueueExceededConstrainedThreadLimit;
@property (readonly) bool workQueueExceededTotalThreadLimit;
@property (readonly) bool wqAndDirtyAreStatic;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (void).cxx_destruct;
- (void)_gatherNonTimeCriticalAuxiliaryInfoFromLiveSystemWithSampleTimeSeriesDataStore:(id)arg1;
- (void)_gatherTimeCriticalAuxiliaryInfoFromLiveSystemIsLate:(bool)arg1;
- (id)_initWithSerializedTimeInsensitiveTaskData:(const struct { unsigned long long x1; int x2; int x3; int x4; unsigned int x5; long long x6; long long x7; unsigned long long x8; long long x9; bool x10; bool x11; bool x12; bool x13; double x14; unsigned long long x15; unsigned long long x16; struct _CSArchitecture { int x_17_1_1; int x_17_1_2; } x17; double x18; bool x19; }*)arg1;
- (bool)_matchesName:(const char *)arg1;
- (void)addImageInfos:(id)arg1;
- (bool)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(struct NSMutableDictionary { Class x1; }*)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (id)addUserStack:(id)arg1;
- (bool)allowsIdleExit;
- (struct _CSArchitecture { int x1; int x2; })architecture;
- (id)bundleName;
- (id)cachedDonatingUniqueIds;
- (id)cachedPrivateData;
- (bool)correspondsToStackshotTask:(id)arg1;
- (bool)correspondsToUniquePid:(unsigned long long)arg1 withName:(const char *)arg2 withLoadInfos:(const struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; }*)arg3 numLoadInfos:(unsigned int)arg4;
- (id)debugDescription;
- (bool)didExec;
- (void)guessArchitectureGivenMachineArchitecture:(struct _CSArchitecture { int x1; int x2; })arg1;
- (id)imageInfos;
- (id)initWithKCDataStackshotDeltaTask:(const struct task_delta_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; }*)arg1 withLoadInfos:(const struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; }*)arg2 numLoadInfos:(unsigned int)arg3 pid:(int)arg4 andMachineArchitecture:(struct _CSArchitecture { int x1; int x2; })arg5;
- (id)initWithKCDataStackshotTask:(const struct task_snapshot_v2 { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; int x15; BOOL x16[32]; }*)arg1 withLoadInfos:(const struct dyld_uuid_info_64 { unsigned long long x1; unsigned char x2[16]; }*)arg2 numLoadInfos:(unsigned int)arg3 andMachineArchitecture:(struct _CSArchitecture { int x1; int x2; })arg4;
- (id)initWithPid:(int)arg1 andUniqueID:(unsigned long long)arg2 andName:(const char *)arg3;
- (id)initWithStackshotTask:(id)arg1 andMachineArchitecture:(struct _CSArchitecture { int x1; int x2; })arg2;
- (bool)isDirty;
- (bool)isThirdParty;
- (bool)isTranslocated;
- (bool)isUnresponsive;
- (unsigned long long)mainBinaryOffset;
- (id)mainBinaryPath;
- (id)mainBinaryUuid;
- (double)mostRecentTimeSamplingOnlyMainThread;
- (id)name;
- (int)pid;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (int)ppid;
- (id)rootUserFrames;
- (int)rpid;
- (void)setArchitecture:(struct _CSArchitecture { int x1; int x2; })arg1;
- (void)setCachedDonatingUniqueIds:(id)arg1;
- (void)setCachedPrivateData:(id)arg1;
- (void)setDidExec:(bool)arg1;
- (void)setMostRecentTimeSamplingOnlyMainThread:(double)arg1;
- (void)setName:(id)arg1;
- (void)setNameWithCStr:(const char *)arg1;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (double)timeOfLastResponse;
- (unsigned int)uid;
- (unsigned long long)uniquePid;
- (bool)usesSuddenTermination;
- (bool)workQueueExceededConstrainedThreadLimit;
- (bool)workQueueExceededTotalThreadLimit;
- (bool)wqAndDirtyAreStatic;

@end
