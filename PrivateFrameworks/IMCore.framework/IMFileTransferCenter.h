/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMFileTransferCenter : NSObject {
    NSMutableDictionary * _accountIDToTransferGUIDsMap;
    NSMutableSet * _activeTransfers;
    bool  _disconnectionListenerSetUp;
    NSMutableDictionary * _fetchHighQualityVariantCompletionHandlers;
    NSMutableDictionary * _guidToRemovedTransferMap;
    NSMutableDictionary * _guidToTransferMap;
    NSMutableSet * _pendingTransfers;
    NSMutableArray * _preauthorizedGUIDs;
    NSMutableArray * _preauthorizedInfos;
}

@property (nonatomic, readonly) NSArray *activeTransferGUIDs;
@property (nonatomic, readonly) NSArray *activeTransfers;
@property (nonatomic, readonly) bool hasActiveFileTransfers;
@property (nonatomic, readonly) bool hasPendingFileTransfers;
@property (nonatomic, readonly) NSArray *orderedTransfers;
@property (nonatomic, readonly) NSArray *orderedTransfersGUIDs;
@property (nonatomic, readonly) NSDictionary *transfers;

+ (Class)fileTransferClass;
+ (void)setTransferCenterClass:(Class)arg1;
+ (id)sharedInstance;
+ (Class)transferCenterClass;

- (void).cxx_destruct;
- (void)_addActiveTransfer:(id)arg1;
- (void)_addPendingTransfer:(id)arg1;
- (void)_addSpotlightProperties:(id)arg1 sender:(id)arg2 recipients:(id)arg3 incoming:(bool)arg4;
- (void)_addTransfer:(id)arg1;
- (void)_addTransfer:(id)arg1 toAccount:(id)arg2;
- (void)_clearTransfers;
- (void)_daemonRestarted:(id)arg1;
- (void)_fetchHighQualityVariantForTransferGUID:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleAllFileTransfers:(id)arg1;
- (void)_handleFileTransfer:(id)arg1 createdWithProperties:(id)arg2;
- (void)_handleFileTransfer:(id)arg1 highQualityDownloadSucceededWithPath:(id)arg2;
- (void)_handleFileTransfer:(id)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4;
- (void)_handleFileTransfer:(id)arg1 updatedWithProperties:(id)arg2;
- (void)_handleFileTransferHighQualityDownloadFailed:(id)arg1;
- (void)_handleFileTransfers:(id)arg1 createdWithLocalPaths:(id)arg2;
- (void)_handleStandaloneFileTransferRegistered:(id)arg1;
- (void)_initiateHighQualityVariantDownloadWithDaemonForGUID:(id)arg1;
- (void)_removeActiveTransfer:(id)arg1;
- (void)_removeAllActiveTransfers;
- (void)_removePendingTransfer:(id)arg1;
- (void)acceptFileTransferIfPreauthorzed:(id)arg1;
- (void)acceptTransfer:(id)arg1;
- (void)acceptTransfer:(id)arg1 withPath:(id)arg2 autoRename:(bool)arg3 overwrite:(bool)arg4;
- (void)acknowledgeAllPendingTransfers;
- (void)acknowledgePendingTransfer:(id)arg1;
- (id)activeTransferGUIDs;
- (id)activeTransfers;
- (void)assignTransfer:(id)arg1 toHandle:(id)arg2;
- (void)assignTransfer:(id)arg1 toMessage:(id)arg2 account:(id)arg3;
- (id)chatForTransfer:(id)arg1;
- (void)clearFinishedTransfers;
- (void)dealloc;
- (void)deleteTransfer:(id)arg1;
- (bool)doesLocalURLRequireArchiving:(id)arg1 toHandle:(id)arg2;
- (void)fetchHighQualityVariantForTransfer:(id)arg1 completion:(id /* block */)arg2;
- (id)guidForNewOutgoingTransferWithLocalURL:(id)arg1;
- (id)guidsForStoredAttachmentPayloadData:(id)arg1 messageGUID:(id)arg2;
- (bool)hasActiveFileTransfers;
- (bool)hasPendingFileTransfers;
- (bool)isFileTransfer:(id)arg1 preauthorizedWithDictionary:(id)arg2;
- (id)orderedTransfers;
- (id)orderedTransfersGUIDs;
- (void)preauthorizeFileTransferFromOtherPerson:(id)arg1 account:(id)arg2 filename:(id)arg3 saveToPath:(id)arg4;
- (bool)registerGUID:(id)arg1 forNewOutgoingTransferWithLocalURL:(id)arg2;
- (void)registerTransferWithDaemon:(id)arg1;
- (void)removeTransfer:(id)arg1;
- (void)retargetTransfer:(id)arg1 toPath:(id)arg2;
- (void)sendTransfer:(id)arg1;
- (void)setAuxImageForTransfer:(id)arg1 value:(bool)arg2;
- (void)setAuxVideoForTransfer:(id)arg1 value:(bool)arg2;
- (void)stopTransfer:(id)arg1;
- (id)transferForGUID:(id)arg1;
- (id)transferForGUID:(id)arg1 includeRemoved:(bool)arg2;
- (id)transfers;
- (id)transfersForAccount:(id)arg1;
- (bool)wasFileTransferPreauthorized:(id)arg1;

@end
