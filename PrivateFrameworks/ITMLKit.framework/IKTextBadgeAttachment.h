/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKTextBadgeAttachment : NSTextAttachment {
    IKBadgeElement * _badge;
    IKColor * _tintColor;
}

@property (nonatomic, readonly, retain) IKBadgeElement *badge;
@property (nonatomic, retain) IKColor *tintColor;
@property (setter=tv_setCurrentTintColor:, nonatomic, retain) IKColor *tv_currentTintColor;
@property (setter=tv_setHighlightColor:, nonatomic, retain) IKColor *tv_highlightColor;
@property (getter=tv_isResolving, nonatomic, readonly) bool tv_resolving;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

- (void).cxx_destruct;
- (id)badge;
- (id)initWithBadgeElement:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (id)tv_currentTintColor;
- (id)tv_highlightColor;
- (id)tv_imageProxy;
- (bool)tv_isResolving;
- (void)tv_resolveWithTextLayoutDirection:(long long)arg1 layoutObserver:(id /* block */)arg2;
- (void)tv_setCurrentTintColor:(id)arg1;
- (void)tv_setHighlightColor:(id)arg1;
- (void)tv_setImage:(id)arg1;
- (void)tv_setImageProxy:(id)arg1;
- (void)tv_setResolving:(bool)arg1;

@end
