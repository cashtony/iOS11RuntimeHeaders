/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFMailMimePart : MFMimePart

+ (Class)attachmentClass;
+ (bool)isRecognizedClassForContent:(id)arg1;

- (bool)_shouldContinueDecodingProcess;
- (void)configureFileWrapper:(id)arg1;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(bool)arg3 asHTML:(bool)arg4 isComplete:(bool*)arg5;
- (id)decodeMessageDelivery_status;
- (id)decodeMessageExternal_body;
- (id)decodeMessagePartial;
- (id)decodeMessageRfc822;
- (id)decodeMultipartAppledouble;
- (id)decodeTextCalendar;
- (id)decodeTextEnriched;
- (id)decodeTextHtml;
- (id)decodeTextPlain;
- (id)decodeTextRichtext;
- (id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2;
- (id)fileWrapperForcingDownload:(bool)arg1;
- (id)htmlContent;
- (id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2;
- (id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(bool)arg3;
- (id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(bool)arg3;

@end
