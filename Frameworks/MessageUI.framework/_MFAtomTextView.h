/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface _MFAtomTextView : UITextView {
    MFComposeRecipientTextView * _hostRecipientView;
    unsigned long long  _textStorageEditingDepth;
}

@property (readonly) NSArray *atoms;
@property MFComposeRecipientTextView *hostRecipientView;

- (bool)_delegateSupportsKeyboardEvents;
- (void)_handleKeyUIEvent:(id)arg1;
- (id)atoms;
- (long long)baseWritingDirection;
- (void)batchTextStorageUpdates:(id /* block */)arg1;
- (bool)becomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertGlyphRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)enumerateAtomAttachments:(id /* block */)arg1;
- (void)enumerateAtoms:(id /* block */)arg1;
- (void)enumerateAtomsInCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withBlock:(id /* block */)arg2;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)hostRecipientView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (bool)isEditingTextStorage;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)paste:(id)arg1;
- (bool)resignFirstResponder;
- (id)selectionRectsForRange:(id)arg1;
- (void)setContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHostRecipientView:(id)arg1;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (id)undoManager;

@end
