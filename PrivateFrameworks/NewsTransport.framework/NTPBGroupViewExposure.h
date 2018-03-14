/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBGroupViewExposure : PBCodable <NSCopying> {
    int  _feedAutoSubscribeType;
    NSData * _feedViewExposureId;
    int  _groupArticleCountInForYou;
    int  _groupDisplayRankInForYou;
    NSString * _groupFeedId;
    int  _groupFormationReason;
    int  _groupPresentationReason;
    int  _groupType;
    NSMutableArray * _groupedArticleIds;
    struct { 
        unsigned int feedAutoSubscribeType : 1; 
        unsigned int groupArticleCountInForYou : 1; 
        unsigned int groupDisplayRankInForYou : 1; 
        unsigned int groupFormationReason : 1; 
        unsigned int groupPresentationReason : 1; 
        unsigned int groupType : 1; 
        unsigned int topStoryMandatoryArticleCount : 1; 
        unsigned int topStoryOptionalArticleCount : 1; 
        unsigned int isSubscribedToGroupFeed : 1; 
        unsigned int reachedEndOfGroup : 1; 
    }  _has;
    bool  _isSubscribedToGroupFeed;
    bool  _reachedEndOfGroup;
    int  _topStoryMandatoryArticleCount;
    int  _topStoryOptionalArticleCount;
}

@property (nonatomic) int feedAutoSubscribeType;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic) int groupArticleCountInForYou;
@property (nonatomic) int groupDisplayRankInForYou;
@property (nonatomic, retain) NSString *groupFeedId;
@property (nonatomic) int groupFormationReason;
@property (nonatomic) int groupPresentationReason;
@property (nonatomic) int groupType;
@property (nonatomic, retain) NSMutableArray *groupedArticleIds;
@property (nonatomic) bool hasFeedAutoSubscribeType;
@property (nonatomic, readonly) bool hasFeedViewExposureId;
@property (nonatomic) bool hasGroupArticleCountInForYou;
@property (nonatomic) bool hasGroupDisplayRankInForYou;
@property (nonatomic, readonly) bool hasGroupFeedId;
@property (nonatomic) bool hasGroupFormationReason;
@property (nonatomic) bool hasGroupPresentationReason;
@property (nonatomic) bool hasGroupType;
@property (nonatomic) bool hasIsSubscribedToGroupFeed;
@property (nonatomic) bool hasReachedEndOfGroup;
@property (nonatomic) bool hasTopStoryMandatoryArticleCount;
@property (nonatomic) bool hasTopStoryOptionalArticleCount;
@property (nonatomic) bool isSubscribedToGroupFeed;
@property (nonatomic) bool reachedEndOfGroup;
@property (nonatomic) int topStoryMandatoryArticleCount;
@property (nonatomic) int topStoryOptionalArticleCount;

+ (Class)groupedArticleIdsType;

- (void).cxx_destruct;
- (int)StringAsFeedAutoSubscribeType:(id)arg1;
- (int)StringAsGroupFormationReason:(id)arg1;
- (int)StringAsGroupPresentationReason:(id)arg1;
- (int)StringAsGroupType:(id)arg1;
- (void)addGroupedArticleIds:(id)arg1;
- (void)clearGroupedArticleIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)feedAutoSubscribeType;
- (id)feedAutoSubscribeTypeAsString:(int)arg1;
- (id)feedViewExposureId;
- (int)groupArticleCountInForYou;
- (int)groupDisplayRankInForYou;
- (id)groupFeedId;
- (int)groupFormationReason;
- (id)groupFormationReasonAsString:(int)arg1;
- (int)groupPresentationReason;
- (id)groupPresentationReasonAsString:(int)arg1;
- (int)groupType;
- (id)groupTypeAsString:(int)arg1;
- (id)groupedArticleIds;
- (id)groupedArticleIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)groupedArticleIdsCount;
- (bool)hasFeedAutoSubscribeType;
- (bool)hasFeedViewExposureId;
- (bool)hasGroupArticleCountInForYou;
- (bool)hasGroupDisplayRankInForYou;
- (bool)hasGroupFeedId;
- (bool)hasGroupFormationReason;
- (bool)hasGroupPresentationReason;
- (bool)hasGroupType;
- (bool)hasIsSubscribedToGroupFeed;
- (bool)hasReachedEndOfGroup;
- (bool)hasTopStoryMandatoryArticleCount;
- (bool)hasTopStoryOptionalArticleCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isSubscribedToGroupFeed;
- (void)mergeFrom:(id)arg1;
- (bool)reachedEndOfGroup;
- (bool)readFrom:(id)arg1;
- (void)setFeedAutoSubscribeType:(int)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setGroupArticleCountInForYou:(int)arg1;
- (void)setGroupDisplayRankInForYou:(int)arg1;
- (void)setGroupFeedId:(id)arg1;
- (void)setGroupFormationReason:(int)arg1;
- (void)setGroupPresentationReason:(int)arg1;
- (void)setGroupType:(int)arg1;
- (void)setGroupedArticleIds:(id)arg1;
- (void)setHasFeedAutoSubscribeType:(bool)arg1;
- (void)setHasGroupArticleCountInForYou:(bool)arg1;
- (void)setHasGroupDisplayRankInForYou:(bool)arg1;
- (void)setHasGroupFormationReason:(bool)arg1;
- (void)setHasGroupPresentationReason:(bool)arg1;
- (void)setHasGroupType:(bool)arg1;
- (void)setHasIsSubscribedToGroupFeed:(bool)arg1;
- (void)setHasReachedEndOfGroup:(bool)arg1;
- (void)setHasTopStoryMandatoryArticleCount:(bool)arg1;
- (void)setHasTopStoryOptionalArticleCount:(bool)arg1;
- (void)setIsSubscribedToGroupFeed:(bool)arg1;
- (void)setReachedEndOfGroup:(bool)arg1;
- (void)setTopStoryMandatoryArticleCount:(int)arg1;
- (void)setTopStoryOptionalArticleCount:(int)arg1;
- (int)topStoryMandatoryArticleCount;
- (int)topStoryOptionalArticleCount;
- (void)writeTo:(id)arg1;

@end
