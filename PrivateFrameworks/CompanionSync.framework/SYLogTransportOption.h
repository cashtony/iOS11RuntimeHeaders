/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYLogTransportOption : PBCodable <NSCopying> {
    NSString * _key;
    NSString * _value;
}

@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
