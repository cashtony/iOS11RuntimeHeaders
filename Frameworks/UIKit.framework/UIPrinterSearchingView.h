/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterSearchingView : UIView {
    bool  _constraintsSet;
    _UIPrintMessageAndSpinnerView * _messageAndSpinner;
}

@property (nonatomic) _UIPrintMessageAndSpinnerView *messageAndSpinner;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (void).cxx_destruct;

// Image: /Developer/usr/lib/libMainThreadChecker.dylib

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)messageAndSpinner;
- (void)searchTimeout;
- (void)setMessageAndSpinner:(id)arg1;
- (void)setSearching:(bool)arg1;
- (void)updateConstraints;
- (void)updateFont;

@end
