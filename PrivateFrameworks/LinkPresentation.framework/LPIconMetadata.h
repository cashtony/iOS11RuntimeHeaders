/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPIconMetadata : NSObject <NSSecureCoding, _LPResolvable> {
    NSURL * _URL;
    NSString * _accessibilityText;
    unsigned int  _version;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSString *accessibilityText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned int version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)_initWithURL:(id)arg1;
- (id)accessibilityText;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isValidMIMEType:(id)arg1;
- (long long)maximumBytes;
- (void)setAccessibilityText:(id)arg1;
- (void)setURL:(id)arg1;
- (id)tryToResolveWithWebViewForProcessSharing:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned int)version;

@end
