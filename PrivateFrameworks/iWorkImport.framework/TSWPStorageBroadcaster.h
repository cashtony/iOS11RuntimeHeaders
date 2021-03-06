/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSWPStorageBroadcaster : NSObject {
    struct set<id<TSWPStorageObserver>, std::__1::less<id<TSWPStorageObserver> >, std::__1::allocator<id<TSWPStorageObserver> > > { 
        struct __tree<id<TSWPStorageObserver>, std::__1::less<id<TSWPStorageObserver> >, std::__1::allocator<id<TSWPStorageObserver> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<id<TSWPStorageObserver>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::less<id<TSWPStorageObserver> > > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _observers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)broadcastStorage:(id)arg1 didChangeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (void)dealloc;
- (void)removeAllObservers;
- (void)removeObserver:(id)arg1;

@end
