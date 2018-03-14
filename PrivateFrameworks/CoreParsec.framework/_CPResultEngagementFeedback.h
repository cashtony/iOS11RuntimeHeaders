/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPResultEngagementFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPResultEngagementFeedback> {
    bool  _actionEngaged;
    int  _actionTarget;
    int  _destination;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int actionEngaged : 1; 
        unsigned int triggerEvent : 1; 
        unsigned int destination : 1; 
        unsigned int actionTarget : 1; 
        unsigned int matchesUnengagedSuggestion : 1; 
    }  _has;
    bool  _matchesUnengagedSuggestion;
    _CPSearchResultForFeedback * _result;
    unsigned long long  _timestamp;
    NSString * _titleText;
    int  _triggerEvent;
}

@property (nonatomic) bool actionEngaged;
@property (nonatomic) int actionTarget;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int destination;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) id feedbackJSON;
@property (nonatomic, readonly) bool hasActionEngaged;
@property (nonatomic, readonly) bool hasActionTarget;
@property (nonatomic, readonly) bool hasDestination;
@property (nonatomic, readonly) bool hasMatchesUnengagedSuggestion;
@property (nonatomic, readonly) bool hasResult;
@property (nonatomic, readonly) bool hasTimestamp;
@property (nonatomic, readonly) bool hasTitleText;
@property (nonatomic, readonly) bool hasTriggerEvent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool matchesUnengagedSuggestion;
@property (nonatomic, readonly) bool requiresQueryId;
@property (nonatomic, retain) _CPSearchResultForFeedback *result;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, copy) NSString *titleText;
@property (nonatomic) int triggerEvent;

- (void).cxx_destruct;
- (id)actionDestinationFromResult:(id)arg1 actionEngaged:(bool)arg2 destination:(int)arg3;
- (bool)actionEngaged;
- (int)actionTarget;
- (int)destination;
- (id)dictionaryRepresentation;
- (id)feedbackJSON;
- (bool)hasActionEngaged;
- (bool)hasActionTarget;
- (bool)hasDestination;
- (bool)hasMatchesUnengagedSuggestion;
- (bool)hasResult;
- (bool)hasTimestamp;
- (bool)hasTitleText;
- (bool)hasTriggerEvent;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)matchesUnengagedSuggestion;
- (bool)readFrom:(id)arg1;
- (bool)requiresQueryId;
- (id)result;
- (void)setActionEngaged:(bool)arg1;
- (void)setActionTarget:(int)arg1;
- (void)setDestination:(int)arg1;
- (void)setMatchesUnengagedSuggestion:(bool)arg1;
- (void)setResult:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTriggerEvent:(int)arg1;
- (unsigned long long)timestamp;
- (id)titleText;
- (int)triggerEvent;
- (void)writeTo:(id)arg1;

@end
