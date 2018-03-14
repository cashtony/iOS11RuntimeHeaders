/* Generated by RuntimeBrowser.
 */

@protocol FPItemCollectionDelegate <NSObject>

@required

- (void)collection:(FPItemCollection *)arg1 didDeleteItemsAtIndexPaths:(NSArray *)arg2;
- (void)collection:(FPItemCollection *)arg1 didInsertItemsAtIndexPaths:(NSArray *)arg2;
- (void)collection:(FPItemCollection *)arg1 didMoveItemsFromIndexPaths:(NSArray *)arg2 toIndexPaths:(NSArray *)arg3;
- (void)collection:(void *)arg1 didPerformBatchUpdateWithReplayBlock:(void *)arg2; // needs 2 arg types, found 6: FPItemCollection *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)collection:(FPItemCollection *)arg1 didUpdateItemsAtIndexPaths:(NSArray *)arg2 changes:(NSDictionary *)arg3;
- (void)dataForCollectionShouldBeReloaded:(FPItemCollection *)arg1;

@optional

- (void)collection:(FPItemCollection *)arg1 didEncounterError:(NSError *)arg2;
- (void)collection:(FPItemCollection *)arg1 didUpdateObservedItem:(FPItem *)arg2;

@end
