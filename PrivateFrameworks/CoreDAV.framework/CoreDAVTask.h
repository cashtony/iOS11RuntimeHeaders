/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVTask : NSObject <CoreDAVSubmittable, DATask> {
    <CoreDAVAccountInfoProvider> * _accountInfoProvider;
    bool  _allowAutomaticRedirects;
    id /* block */  _completionBlock;
    bool  _compressedRequestFailed;
    NSURLConnection * _connection;
    id  _context;
    NSDate * _dateConnectionWentOut;
    <CoreDAVTaskDelegate> * _delegate;
    int  _depth;
    bool  _didCancel;
    bool  _didFailWithError;
    bool  _didFinishLoading;
    bool  _didReceiveData;
    bool  _didReceiveResponse;
    bool  _didRetryWithClientToken;
    bool  _didSendRequest;
    NSError * _error;
    bool  _everTriedTokenAuth;
    NSData * _fakeResponseData;
    bool  _finished;
    CoreDAVErrorItem * _forbiddenErrorItem;
    bool  _haveParsedFakeResponseData;
    bool  _justTriedTokenAuth;
    CoreDAVRequestLogger * _logger;
    long long  _numDownloadedElements;
    NSMutableDictionary * _overriddenHeaders;
    NSError * _passwordNotificationError;
    bool  _receivedBadPasswordResponse;
    NSMutableArray * _redirectHistory;
    NSURLRequest * _request;
    bool  _requestIsCompressed;
    id /* block */  _requestProgressBlock;
    NSDictionary * _requestProperties;
    NSHTTPURLResponse * _response;
    <CoreDAVResponseBodyParser> * _responseBodyParser;
    id /* block */  _responseProgressBlock;
    long long  _responseStatusCode;
    bool  _shouldRetryWithClientToken;
    <CoreDAVTaskManager> * _taskManager;
    double  _timeoutInterval;
    unsigned long long  _totalBytesReceived;
    bool  _triedRenewingCredential;
    NSString * _uniqueID;
    NSURL * _url;
}

@property (nonatomic) <CoreDAVAccountInfoProvider> *accountInfoProvider;
@property (nonatomic) bool allowAutomaticRedirects;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, retain) id context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CoreDAVTaskDelegate> *delegate;
@property (nonatomic) int depth;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ requestProgressBlock;
@property (nonatomic, retain) NSDictionary *requestProperties;
@property (nonatomic, retain) <CoreDAVResponseBodyParser> *responseBodyParser;
@property (nonatomic, readonly) NSDictionary *responseHeaders;
@property (nonatomic, copy) id /* block */ responseProgressBlock;
@property (nonatomic) long long responseStatusCode;
@property (readonly) Class superclass;
@property (nonatomic) <CoreDAVTaskManager> *taskManager;
@property (nonatomic) double timeoutInterval;
@property (nonatomic) unsigned long long totalBytesReceived;
@property (nonatomic, readonly) NSURL *url;

// Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV

+ (id)stringFromDepth:(int)arg1;
+ (unsigned int)uniqueQueryID;

- (void).cxx_destruct;
- (id)_applyAuthenticationChain:(struct __CFArray { }*)arg1 toRequest:(id)arg2;
- (id)_applyStorageSession:(struct __CFURLStorageSession { }*)arg1 toRequest:(id)arg2;
- (id)_compressBodyData:(id)arg1;
- (id)_connectionForLogging;
- (id)_createBodyData;
- (void)_failImmediately;
- (void)_handleBadPasswordResponse;
- (bool)_handleUnauthorizedAccessError:(id)arg1;
- (bool)_includeGeneralHeaders;
- (void)_logSantizedRequest:(id)arg1 withTaskID:(id)arg2;
- (id)_osLogDescription;
- (id)_requestForLogging;
- (void)_sendTimeSpentInNetworkingToProvider;
- (bool)_shouldCreateCredentialForBasicOrDigestAuthChallenge:(id)arg1;
- (bool)_shouldHandleStatusCode:(long long)arg1;
- (id)accountInfoProvider;
- (id)additionalHeaderValues;
- (bool)allowAutomaticRedirects;
- (unsigned long long)cachePolicy;
- (id /* block */)completionBlock;
- (bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (bool)connectionShouldUseCredentialStorage:(id)arg1;
- (id)context;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)credentialForClientCertificateChallenge:(id)arg1;
- (id)credentialForOAuthChallenge:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (int)depth;
- (id)description;
- (id)error;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (void)finishEarlyWithError:(id)arg1;
- (void)handleWebLoginRequestWithCompletionBlock:(id /* block */)arg1;
- (id)httpMethod;
- (id)initWithURL:(id)arg1;
- (bool)isFinished;
- (id)lastRedirectURL;
- (void)loadRequest:(id)arg1;
- (bool)markAsFinished;
- (long long)numDownloadedElements;
- (void)overrideRequestHeader:(id)arg1 withValue:(id)arg2;
- (void)performCoreDAVTask;
- (void)reportStatusWithError:(id)arg1;
- (id)requestBody;
- (id)requestBodyStream;
- (id /* block */)requestProgressBlock;
- (id)requestProperties;
- (void)reset;
- (id)responseBodyParser;
- (id)responseHeaders;
- (id /* block */)responseProgressBlock;
- (long long)responseStatusCode;
- (void)setAccountInfoProvider:(id)arg1;
- (void)setAllowAutomaticRedirects:(bool)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepth:(int)arg1;
- (void)setError:(id)arg1;
- (void)setRequestProgressBlock:(id /* block */)arg1;
- (void)setRequestProperties:(id)arg1;
- (void)setResponseBodyParser:(id)arg1;
- (void)setResponseProgressBlock:(id /* block */)arg1;
- (void)setResponseStatusCode:(long long)arg1;
- (void)setTaskManager:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setTotalBytesReceived:(unsigned long long)arg1;
- (bool)shouldLogResponseBody;
- (void)startModal;
- (void)submitWithTaskManager:(id)arg1;
- (id)taskManager;
- (void)tearDownResources;
- (double)timeoutInterval;
- (unsigned long long)totalBytesReceived;
- (id)url;
- (bool)validate:(id*)arg1;

// Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV

+ (double)bdv_overrideTimeoutInterval;

- (void)bdv_applyOverrideTimeoutIntervalIfNeeded;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue

- (void)cancelTaskWithReason:(int)arg1 underlyingError:(id)arg2;
- (void)finishWithError:(id)arg1;
- (void)performTask;

@end
