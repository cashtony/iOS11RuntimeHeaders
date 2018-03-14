/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PROConcretePlugInManager : PROPlugInManager <PROBundleHandlerDelegate, PROVersionedAPIAccess> {
    NSMutableDictionary * api;
    PROReadWriteLock * apiLock;
    NSMutableDictionary * blockedDocumentPlugins;
    NSMutableDictionary * blockedLibraryPlugins;
    NSMutableDictionary * bundlesDictionary;
    NSMutableDictionary * classesDictionary;
    id  delegate;
    NSMutableDictionary * groupsDictionary;
    struct { 
        unsigned int respondsToDidError : 1; 
        unsigned int respondsToDidPlugInDidError : 1; 
        unsigned int respondsToShouldLoadBundle : 1; 
        unsigned int respondsToShouldLoadPlugIn : 1; 
        unsigned int respondsToDidLoadPlugIn : 1; 
        unsigned int useStrictLoading : 1; 
    }  managerFlags;
    NSRecursiveLock * mutex;
    NSMutableArray * plugInSearchDirectories;
    NSMutableArray * plugIns;
    NSMutableDictionary * protocols;
    NSMutableDictionary * uuids;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addDocumentBlockedPlugin:(id)arg1;
- (void)addLibraryBlockedPlugin:(id)arg1 bundleName:(id)arg2 pluginName:(id)arg3 version:(id)arg4;
- (void)addPlugIn:(id)arg1;
- (void)addPlugInSearchDirectory:(id)arg1;
- (id)apiForProtocol:(id*)arg1 versions:(id)arg2;
- (id)blockedDocumentPlugins;
- (id)blockedLibraryPlugins;
- (void)bundleHandler:(id)arg1 didAddPlugIn:(id)arg2;
- (void)bundleHandler:(id)arg1 didError:(id)arg2;
- (bool)bundleHandler:(id)arg1 shouldAddPlugIn:(id)arg2;
- (bool)checkIfShouldBlockPlugin:(id)arg1 returnPluginDictionary:(id*)arg2;
- (bool)checkPluginVersionAgainstBlockList:(id)arg1 blockDict:(id)arg2;
- (unsigned int)countOfBundles;
- (void)dealloc;
- (id)delegate;
- (void)getNameOverrides:(id)arg1 pluginName:(id*)arg2 bundleName:(id*)arg3;
- (id)init;
- (void)insertObject:(id)arg1 inPlugInSearchDirectoriesAtIndex:(unsigned int)arg2;
- (void)mergeGroupsDictionaryWith:(id)arg1;
- (id)newBlockPluginList:(struct __CFString { }*)arg1;
- (id)objectInBundlesAtIndex:(unsigned int)arg1;
- (id)plugInGroupWithUUID:(struct __CFUUID { }*)arg1;
- (id)plugInGroups;
- (id)plugInGroupsMutable;
- (id)plugInSearchDirectories;
- (id)plugInWithClassName:(id)arg1;
- (id)plugInWithUUID:(struct __CFUUID { }*)arg1;
- (id)plugIns;
- (id)plugInsForProtocol:(id)arg1;
- (id)plugInsForProtocols:(id)arg1;
- (void)registerAPIObject:(id)arg1 forProtocol:(id)arg2 version:(unsigned int)arg3;
- (void)removeAllBlockedDocumentPlugins;
- (void)removeAllPlugIns;
- (void)removeObjectFromPlugInSearchDirectoriesAtIndex:(unsigned int)arg1;
- (void)reportError:(id)arg1;
- (bool)requiresProtocolsToBePresentWhenLoading;
- (void)scanForPlugIns;
- (void)scanForPlugInsInBundle:(id)arg1;
- (void)scanForPlugInsInBundle:(id)arg1 withPluginKitPlugIn:(id)arg2;
- (void)scanForPlugInsInBundleHelper:(id)arg1 zone:(struct _NSZone { }*)arg2 withPluginKitPlugIn:(id)arg3;
- (void)scanForPlugInsInDirectory:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlugInSearchDirectories:(id)arg1;
- (void)setRequiresProtocolsToBePresentWhenLoading:(bool)arg1;
- (bool)shouldLoadBundle:(id)arg1;
- (bool)shouldLoadPlugIn:(id)arg1;
- (void)unregisterAPIForProtocol:(id)arg1;
- (void)unregisterAPIForProtocol:(id)arg1 version:(unsigned int)arg2;
- (bool)validateProtocols:(id)arg1;

@end
