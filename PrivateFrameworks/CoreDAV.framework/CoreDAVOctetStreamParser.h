/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVOctetStreamParser : NSObject <CoreDAVResponseBodyParser> {
    NSMutableData * _octetStreamData;
    NSError * _parserError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableData *octetStreamData;
@property (readonly) NSError *parserError;
@property (readonly) Class superclass;

+ (bool)canHandleContentType:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)octetStreamData;
- (id)parserError;
- (bool)processData:(id)arg1 forTask:(id)arg2;
- (void)setOctetStreamData:(id)arg1;

@end
