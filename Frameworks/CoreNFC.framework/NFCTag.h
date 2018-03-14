/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

@interface NFCTag : NSObject <NFCTag> {
    NFWeakReference * _session;
    <NFTag> * _tag;
}

@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSData *identifier;
@property (nonatomic, readonly) <NFCReaderSession> *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

+ (unsigned long long)_MaxRetry;
+ (double)_MaxRetryInterval;
+ (bool)supportsSecureCoding;

- (bool)_connectWithError:(id*)arg1;
- (bool)_disconnectWithError:(id*)arg1;
- (id)_getInternalReaderSession;
- (void)_setSession:(id)arg1;
- (void)_setTag:(id)arg1;
- (bool)_transceiveWithData:(id)arg1 receivedData:(id*)arg2 error:(id*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithSession:(id)arg1 tag:(id)arg2;
- (bool)isAvailable;
- (id)session;
- (unsigned long long)type;

@end
