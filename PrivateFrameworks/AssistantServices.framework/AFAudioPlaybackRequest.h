/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAudioPlaybackRequest : NSObject <NSCopying, NSSecureCoding> {
    double  _fadeInDuration;
    double  _fadeOutDuration;
    NSData * _itemData;
    NSURL * _itemURL;
    long long  _numberOfLoops;
    NSDictionary * _userInfo;
    float  _volume;
}

@property (nonatomic, readonly) double fadeInDuration;
@property (nonatomic, readonly) double fadeOutDuration;
@property (nonatomic, readonly, copy) NSData *itemData;
@property (nonatomic, readonly, copy) NSURL *itemURL;
@property (nonatomic, readonly) long long numberOfLoops;
@property (nonatomic, readonly, copy) NSDictionary *userInfo;
@property (nonatomic, readonly) float volume;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)builder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)fadeInDuration;
- (double)fadeOutDuration;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemURL:(id)arg1 itemData:(id)arg2 numberOfLoops:(long long)arg3 volume:(float)arg4 fadeInDuration:(double)arg5 fadeOutDuration:(double)arg6 userInfo:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)itemData;
- (id)itemURL;
- (long long)numberOfLoops;
- (id)userInfo;
- (float)volume;

@end
