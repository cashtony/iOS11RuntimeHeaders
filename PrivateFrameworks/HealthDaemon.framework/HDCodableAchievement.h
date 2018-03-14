/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableAchievement : PBCodable <NSCopying> {
    long long  _achievementType;
    bool  _alerted;
    double  _completedDate;
    NSString * _definitionIdentifier;
    double  _doubleValue;
    struct { 
        unsigned int achievementType : 1; 
        unsigned int completedDate : 1; 
        unsigned int doubleValue : 1; 
        unsigned int intValue : 1; 
        unsigned int workoutActivityType : 1; 
        unsigned int alerted : 1; 
    }  _has;
    long long  _intValue;
    NSData * _uuid;
    long long  _workoutActivityType;
}

@property (nonatomic) long long achievementType;
@property (nonatomic) bool alerted;
@property (nonatomic) double completedDate;
@property (nonatomic, retain) NSString *definitionIdentifier;
@property (nonatomic) double doubleValue;
@property (nonatomic) bool hasAchievementType;
@property (nonatomic) bool hasAlerted;
@property (nonatomic) bool hasCompletedDate;
@property (nonatomic, readonly) bool hasDefinitionIdentifier;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic) bool hasIntValue;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) bool hasWorkoutActivityType;
@property (nonatomic) long long intValue;
@property (nonatomic, retain) NSData *uuid;
@property (nonatomic) long long workoutActivityType;

- (void).cxx_destruct;
- (long long)achievementType;
- (bool)alerted;
- (double)completedDate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)decodedAchievementType;
- (id)decodedCreatedDate;
- (id)decodedUUID;
- (id)decodedValue;
- (id)definitionIdentifier;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleValue;
- (bool)hasAchievementType;
- (bool)hasAlerted;
- (bool)hasCompletedDate;
- (bool)hasDefinitionIdentifier;
- (bool)hasDoubleValue;
- (bool)hasIntValue;
- (bool)hasUuid;
- (bool)hasWorkoutActivityType;
- (unsigned long long)hash;
- (long long)intValue;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAchievementType:(long long)arg1;
- (void)setAlerted:(bool)arg1;
- (void)setCompletedDate:(double)arg1;
- (void)setDefinitionIdentifier:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHasAchievementType:(bool)arg1;
- (void)setHasAlerted:(bool)arg1;
- (void)setHasCompletedDate:(bool)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasIntValue:(bool)arg1;
- (void)setHasWorkoutActivityType:(bool)arg1;
- (void)setIntValue:(long long)arg1;
- (void)setUuid:(id)arg1;
- (void)setWorkoutActivityType:(long long)arg1;
- (id)uuid;
- (long long)workoutActivityType;
- (void)writeTo:(id)arg1;

@end
