/* Generated by RuntimeBrowser.
 */

@protocol HDNanoSyncServerInterface <NSObject>

@required

- (void)remote_fetchNanoSyncPairedDevicesWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKNanoSyncPairedDevicesSnapshot *, NSError *, void*
- (void)remote_forceNanoSyncWithOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_resetNanoSyncWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)remote_waitForLastChanceSyncWithDevicePairingID:(void *)arg1 timeout:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSUUID *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
