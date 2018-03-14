/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFeedbackPattern : _UIFeedback <_UIFeedbackContinuousPlayable, _UIFeedbackDiscretePlayable> {
    double  _duration;
    NSArray * _feedbacks;
    bool  _highPriority;
    bool  _isRepeating;
    NSTimer * _repeatTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration;
@property (nonatomic, retain) NSArray *feedbacks;
@property (readonly) unsigned long long hash;
@property (getter=isHighPriority, nonatomic, readonly) bool highPriority;
@property (nonatomic, readonly) bool isRepeating;
@property (getter=isPlaying, nonatomic, readonly) bool playing;
@property (nonatomic, retain) NSTimer *repeatTimer;
@property (readonly) Class superclass;

+ (Class)_parametersClass;
+ (id)feedbackPattern;
+ (id)type;

- (void).cxx_destruct;
- (id)_allEventTypes;
- (id)_allFeedbacks;
- (id)_allSystemSoundIDs;
- (id)_debugDictionary;
- (unsigned long long)_effectivePlayableFeedbackTypes;
- (void)_playPattern;
- (id)_playableProtocol;
- (void)addFeedback:(id)arg1 atTime:(double)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (double)duration;
- (id)feedbacks;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHighPriority;
- (bool)isPlaying;
- (bool)isRepeating;
- (void)play;
- (id)repeatTimer;
- (void)setDuration:(double)arg1;
- (void)setFeedbacks:(id)arg1;
- (void)setPosition:(float)arg1;
- (void)setRepeatTimer:(id)arg1;
- (void)stop;

@end
