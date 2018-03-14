/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

@interface C2MPError : PBCodable <NSCopying> {
    long long  _errorCode;
    NSString * _errorDescription;
    NSString * _errorDomain;
    struct { 
        unsigned int errorCode : 1; 
    }  _has;
    C2MPError * _underlyingError;
}

@property (nonatomic) long long errorCode;
@property (nonatomic, retain) NSString *errorDescription;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDescription;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic, readonly) bool hasUnderlyingError;
@property (nonatomic, retain) C2MPError *underlyingError;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)errorCode;
- (id)errorDescription;
- (id)errorDomain;
- (bool)hasErrorCode;
- (bool)hasErrorDescription;
- (bool)hasErrorDomain;
- (bool)hasUnderlyingError;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorDescription:(id)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setUnderlyingError:(id)arg1;
- (id)underlyingError;
- (void)writeTo:(id)arg1;

@end
