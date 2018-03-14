/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface CCCharBoxContext : NSObject {
    unsigned int  allocationSize;
    float  bBottom;
    float  bTop;
    unsigned long long * charBoxFlags;
    unsigned short * charboxROIFullVectorHeight2;
    unsigned short * charboxROIFullVectorRowStart;
    unsigned short  filterWalkUpDownCount;
    float * floatVectorSumProd;
    short  loopBigBox;
    short  loopBigBoxPrev;
    float  mBottom;
    float  mTop;
    unsigned short  medianHeightBottom;
    unsigned short  medianHeightTop;
    float  posLL;
    float  posLR;
    float  posUL;
    float  posUR;
    char * pulseVectorHeightCharBox;
    char * pulseVectorHeightCharBoxAdaptive;
}

@property unsigned int allocationSize;
@property float bBottom;
@property float bTop;
@property unsigned long long*charBoxFlags;
@property unsigned short*charboxROIFullVectorHeight2;
@property unsigned short*charboxROIFullVectorRowStart;
@property unsigned short filterWalkUpDownCount;
@property float*floatVectorSumProd;
@property short loopBigBox;
@property short loopBigBoxPrev;
@property float mBottom;
@property float mTop;
@property unsigned short medianHeightBottom;
@property unsigned short medianHeightTop;
@property float posLL;
@property float posLR;
@property float posUL;
@property float posUR;
@property char *pulseVectorHeightCharBox;
@property char *pulseVectorHeightCharBoxAdaptive;

- (unsigned int)allocationSize;
- (float)bBottom;
- (float)bTop;
- (unsigned long long*)charBoxFlags;
- (unsigned short*)charboxROIFullVectorHeight2;
- (unsigned short*)charboxROIFullVectorRowStart;
- (unsigned int)checkFlag:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (void)clearFlag:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (void)copyFlagValue:(unsigned long long)arg1 toTarget:(unsigned long long)arg2 atIndex:(unsigned int)arg3;
- (void)dealloc;
- (unsigned short)filterWalkUpDownCount;
- (float*)floatVectorSumProd;
- (short)loopBigBox;
- (short)loopBigBoxPrev;
- (float)mBottom;
- (float)mTop;
- (bool)makeAllocationsForWidth:(unsigned long long)arg1;
- (unsigned short)medianHeightBottom;
- (unsigned short)medianHeightTop;
- (float)posLL;
- (float)posLR;
- (float)posUL;
- (float)posUR;
- (char *)pulseVectorHeightCharBox;
- (char *)pulseVectorHeightCharBoxAdaptive;
- (void)releaseAllocations;
- (void)resetBoxBounds;
- (void)setAllocationSize:(unsigned int)arg1;
- (void)setBBottom:(float)arg1;
- (void)setBTop:(float)arg1;
- (void)setCharBoxFlags:(unsigned long long*)arg1;
- (void)setCharboxROIFullVectorHeight2:(unsigned short*)arg1;
- (void)setCharboxROIFullVectorRowStart:(unsigned short*)arg1;
- (void)setFilterWalkUpDownCount:(unsigned short)arg1;
- (void)setFlag:(unsigned long long)arg1 atIndex:(unsigned int)arg2;
- (void)setFloatVectorSumProd:(float*)arg1;
- (void)setLoopBigBox:(short)arg1;
- (void)setLoopBigBoxPrev:(short)arg1;
- (void)setMBottom:(float)arg1;
- (void)setMTop:(float)arg1;
- (void)setMedianHeightBottom:(unsigned short)arg1;
- (void)setMedianHeightTop:(unsigned short)arg1;
- (void)setPosLL:(float)arg1;
- (void)setPosLR:(float)arg1;
- (void)setPosUL:(float)arg1;
- (void)setPosUR:(float)arg1;
- (void)setPulseVectorHeightCharBox:(char *)arg1;
- (void)setPulseVectorHeightCharBoxAdaptive:(char *)arg1;

@end
