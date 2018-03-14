/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDMagicMoveMatch : NSObject <TSDMatchingAlgorithmMatch> {
    double  _attributeMatchPercent;
    double  _distance;
    TSDMagicMoveMatchObject * _incomingObject;
    long long  _matchCost;
    long long  _matchType;
    NSString * _name;
    TSDMagicMoveMatchObject * _outgoingObject;
    TSDTextureContext * _textureContext;
    double  _zOrderDistance;
}

@property (nonatomic) double attributeMatchPercent;
@property (nonatomic) double distance;
@property (nonatomic, readonly) id incomingMatchObject;
@property (nonatomic, readonly) TSDMagicMoveMatchObject *incomingObject;
@property (nonatomic, readonly) bool isTextMatch;
@property (nonatomic, readonly) long long matchCost;
@property (nonatomic) long long matchType;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) id outgoingMatchObject;
@property (nonatomic, readonly) TSDMagicMoveMatchObject *outgoingObject;
@property (nonatomic, retain) TSDTextureContext *textureContext;
@property (nonatomic) double zOrderDistance;

+ (id)matchWithOutgoingObject:(id)arg1 incomingObject:(id)arg2 matchType:(long long)arg3 attributeMatchPercent:(double)arg4 textureContext:(id)arg5;

- (double)attributeMatchPercent;
- (long long)compareToMatch:(id)arg1;
- (bool)conflictsWithMatch:(id)arg1;
- (void)dealloc;
- (id)description;
- (double)distance;
- (id)incomingMatchObject;
- (id)incomingObject;
- (bool)isTextMatch;
- (long long)matchCost;
- (long long)matchType;
- (id)name;
- (id)outgoingMatchObject;
- (id)outgoingObject;
- (void)p_updateMagicMoveCost;
- (void)setAttributeMatchPercent:(double)arg1;
- (void)setDistance:(double)arg1;
- (void)setMatchType:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setTextureContext:(id)arg1;
- (void)setZOrderDistance:(double)arg1;
- (id)textureContext;
- (double)zOrderDistance;

@end
