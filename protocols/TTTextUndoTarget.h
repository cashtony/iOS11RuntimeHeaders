/* Generated by RuntimeBrowser.
 */

@protocol TTTextUndoTarget <NSObject>

@required

- (void)applyUndoGroup:(TTMergeableStringUndoGroup *)arg1;
- (TTMergeableStringUndoGroup *)newCoalescingUndoGroup;

@end
