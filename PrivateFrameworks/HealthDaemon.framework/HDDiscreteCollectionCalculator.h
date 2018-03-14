/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDiscreteCollectionCalculator : HDCollectionCalculator {
    struct map<long long, _HDDiscreteStats, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDDiscreteStats> > > { 
        struct __tree<std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDDiscreteStats> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDDiscreteStats>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDDiscreteStats>, std::__1::less<long long>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _bySource;
    struct { 
        double avg; 
        double max; 
        double min; 
        unsigned long long count; 
    }  _currentStats;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_didAddFirstValue;
- (void)addValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 sourceID:(long long)arg4;
- (bool)advanceBucket;
- (long long)dataCount;
- (id)description;
- (void)getCurrentBucketStats:(struct { double x1; double x2; double x3; unsigned long long x4; }*)arg1;
- (bool)hasData;
- (id)sourceIDsForCurrentBucket;
- (id)statsBySource;

@end
