/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitIncident : PBCodable <NSCopying> {
    NSMutableArray * _affectedEntitys;
    bool  _blocking;
    unsigned int  _creationDatetime;
    unsigned int  _endDatetime;
    struct { 
        unsigned int incidentMuid : 1; 
        unsigned int creationDatetime : 1; 
        unsigned int endDatetime : 1; 
        unsigned int iconEnum : 1; 
        unsigned int incidentIndex : 1; 
        unsigned int startDatetime : 1; 
        unsigned int updatedDatetime : 1; 
        unsigned int blocking : 1; 
    }  _has;
    int  _iconEnum;
    unsigned int  _incidentIndex;
    unsigned long long  _incidentMuid;
    GEOPBTransitArtwork * _incidentTypeArtwork;
    NSString * _longDescriptionString;
    NSString * _messageForAllBlocking;
    NSString * _messageForIncidentType;
    NSString * _messageString;
    NSString * _shortDescriptionString;
    unsigned int  _startDatetime;
    NSString * _titleString;
    PBUnknownFields * _unknownFields;
    unsigned int  _updatedDatetime;
}

@property (nonatomic, retain) NSMutableArray *affectedEntitys;
@property (nonatomic) bool blocking;
@property (nonatomic) unsigned int creationDatetime;
@property (nonatomic) unsigned int endDatetime;
@property (nonatomic) bool hasBlocking;
@property (nonatomic) bool hasCreationDatetime;
@property (nonatomic) bool hasEndDatetime;
@property (nonatomic) bool hasIconEnum;
@property (nonatomic) bool hasIncidentIndex;
@property (nonatomic) bool hasIncidentMuid;
@property (nonatomic, readonly) bool hasIncidentTypeArtwork;
@property (nonatomic, readonly) bool hasLongDescriptionString;
@property (nonatomic, readonly) bool hasMessageForAllBlocking;
@property (nonatomic, readonly) bool hasMessageForIncidentType;
@property (nonatomic, readonly) bool hasMessageString;
@property (nonatomic, readonly) bool hasShortDescriptionString;
@property (nonatomic) bool hasStartDatetime;
@property (nonatomic, readonly) bool hasTitleString;
@property (nonatomic) bool hasUpdatedDatetime;
@property (nonatomic) int iconEnum;
@property (nonatomic) unsigned int incidentIndex;
@property (nonatomic) unsigned long long incidentMuid;
@property (nonatomic, retain) GEOPBTransitArtwork *incidentTypeArtwork;
@property (nonatomic, retain) NSString *longDescriptionString;
@property (nonatomic, retain) NSString *messageForAllBlocking;
@property (nonatomic, retain) NSString *messageForIncidentType;
@property (nonatomic, retain) NSString *messageString;
@property (nonatomic, retain) NSString *shortDescriptionString;
@property (nonatomic) unsigned int startDatetime;
@property (nonatomic, retain) NSString *titleString;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) unsigned int updatedDatetime;

+ (Class)affectedEntityType;

- (void).cxx_destruct;
- (int)StringAsIconEnum:(id)arg1;
- (void)addAffectedEntity:(id)arg1;
- (id)affectedEntityAtIndex:(unsigned long long)arg1;
- (id)affectedEntitys;
- (unsigned long long)affectedEntitysCount;
- (bool)blocking;
- (void)clearAffectedEntitys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)creationDatetime;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)endDatetime;
- (bool)hasBlocking;
- (bool)hasCreationDatetime;
- (bool)hasEndDatetime;
- (bool)hasIconEnum;
- (bool)hasIncidentIndex;
- (bool)hasIncidentMuid;
- (bool)hasIncidentTypeArtwork;
- (bool)hasLongDescriptionString;
- (bool)hasMessageForAllBlocking;
- (bool)hasMessageForIncidentType;
- (bool)hasMessageString;
- (bool)hasShortDescriptionString;
- (bool)hasStartDatetime;
- (bool)hasTitleString;
- (bool)hasUpdatedDatetime;
- (unsigned long long)hash;
- (int)iconEnum;
- (id)iconEnumAsString:(int)arg1;
- (unsigned int)incidentIndex;
- (unsigned long long)incidentMuid;
- (id)incidentTypeArtwork;
- (bool)isEqual:(id)arg1;
- (id)longDescriptionString;
- (void)mergeFrom:(id)arg1;
- (id)messageForAllBlocking;
- (id)messageForIncidentType;
- (id)messageString;
- (bool)readFrom:(id)arg1;
- (void)setAffectedEntitys:(id)arg1;
- (void)setBlocking:(bool)arg1;
- (void)setCreationDatetime:(unsigned int)arg1;
- (void)setEndDatetime:(unsigned int)arg1;
- (void)setHasBlocking:(bool)arg1;
- (void)setHasCreationDatetime:(bool)arg1;
- (void)setHasEndDatetime:(bool)arg1;
- (void)setHasIconEnum:(bool)arg1;
- (void)setHasIncidentIndex:(bool)arg1;
- (void)setHasIncidentMuid:(bool)arg1;
- (void)setHasStartDatetime:(bool)arg1;
- (void)setHasUpdatedDatetime:(bool)arg1;
- (void)setIconEnum:(int)arg1;
- (void)setIncidentIndex:(unsigned int)arg1;
- (void)setIncidentMuid:(unsigned long long)arg1;
- (void)setIncidentTypeArtwork:(id)arg1;
- (void)setLongDescriptionString:(id)arg1;
- (void)setMessageForAllBlocking:(id)arg1;
- (void)setMessageForIncidentType:(id)arg1;
- (void)setMessageString:(id)arg1;
- (void)setShortDescriptionString:(id)arg1;
- (void)setStartDatetime:(unsigned int)arg1;
- (void)setTitleString:(id)arg1;
- (void)setUpdatedDatetime:(unsigned int)arg1;
- (id)shortDescriptionString;
- (unsigned int)startDatetime;
- (id)titleString;
- (id)unknownFields;
- (unsigned int)updatedDatetime;
- (void)writeTo:(id)arg1;

@end
