/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKDispatchQueue : NSObject {
    bool  _cancelled;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableDictionary * _dispatchQueueBlocks;
    unsigned long long  _fifo;
    struct __CFBinaryHeap { } * _heap;
    NSObject<OS_dispatch_queue> * _lockQueue;
    bool  _suspended;
}

@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, retain) NSMutableDictionary *dispatchQueueBlocks;
@property (nonatomic, retain) struct __CFBinaryHeap { }*heap;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *lockQueue;
@property (getter=isSuspended, nonatomic) bool suspended;

+ (id)concurrentQueueWithDispatchPriority:(long long)arg1;
+ (id)serialQueueWithDispatchPriority:(long long)arg1;

- (void).cxx_destruct;
- (id)_initWithDispatchAttr:(id)arg1 dispatchPriority:(long long)arg2;
- (void)addBlock:(id /* block */)arg1;
- (void)addBlock:(id /* block */)arg1 withQueuePriority:(long long)arg2;
- (void)addBlock:(id /* block */)arg1 withQueuePriority:(long long)arg2 forKey:(id)arg3;
- (id)allKeysOfOutstandingBlocks;
- (bool)containsOutstandingBlockForKey:(id)arg1;
- (void)dealloc;
- (id)dispatchQueue;
- (id)dispatchQueueBlocks;
- (struct __CFBinaryHeap { }*)heap;
- (id)init;
- (bool)isCancelled;
- (bool)isSuspended;
- (id)lockQueue;
- (long long)queuePriorityOfOutstandingBlockForKey:(id)arg1;
- (void)removeAllOutstandingBlocks;
- (void)removeOutstandingBlockForKey:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setDispatchQueueBlocks:(id)arg1;
- (void)setHeap:(struct __CFBinaryHeap { }*)arg1;
- (void)setLockQueue:(id)arg1;
- (void)setQueuePriority:(long long)arg1 ofOutstandingBlockForKey:(id)arg2;
- (void)setSuspended:(bool)arg1;

@end
