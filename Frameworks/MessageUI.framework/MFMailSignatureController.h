/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailSignatureController : NSObject

- (id)_signatureStringForSender:(id)arg1;
- (void)addSignatureForSender:(id)arg1 bodyField:(id)arg2 prepend:(bool)arg3;
- (void)finalizeSignatureForBodyField:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isDefaultSignatureForSender:(id)arg1;
- (void)removeSignatureForSender:(id)arg1 bodyField:(id)arg2;
- (void)updateSignatureForSender:(id)arg1 bodyField:(id)arg2;

@end
