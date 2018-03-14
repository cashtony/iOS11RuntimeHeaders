/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSAudioCircularBuffer : NSObject {
    unsigned long long  _anchorHostTime;
    unsigned long long  _anchorSampleCount;
    unsigned long long  _bufferLength;
    struct unique_ptr<corespeech::CSAudioCircularBufferImpl<unsigned short>, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > > { 
        struct __compressed_pair<corespeech::CSAudioCircularBufferImpl<unsigned short> *, std::__1::default_delete<corespeech::CSAudioCircularBufferImpl<unsigned short> > > { 
            struct CSAudioCircularBufferImpl<unsigned short> {} *__first_; 
        } __ptr_; 
    }  _csAudioCircularBufferImpl;
}

@property (nonatomic) unsigned long long bufferLength;

+ (id)createAudioCircularBufferWithDefaultSettings;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addSamples:(const void*)arg1 numSamples:(unsigned long long)arg2;
- (void)addSamples:(const void*)arg1 numSamples:(unsigned long long)arg2 atHostTime:(unsigned long long)arg3;
- (unsigned long long)bufferLength;
- (id)copyBufferWithNumSamplesCopiedIn:(unsigned long long*)arg1;
- (id)copySamplesFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (id)copySamplesFromHostTime:(unsigned long long)arg1;
- (unsigned long long)hostTimeFromSampleCount:(unsigned long long)arg1;
- (id)initWithNumChannels:(unsigned long long)arg1 recordingDuration:(float)arg2 samplingRate:(float)arg3;
- (void)reset;
- (unsigned long long)sampleCount;
- (unsigned long long)sampleCountFromHostTime:(unsigned long long)arg1;
- (void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3;
- (void)setBufferLength:(unsigned long long)arg1;

@end
