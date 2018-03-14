/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKEnterCurrencyAmountView : UIView <UITextFieldDelegate> {
    UIFont * _amountFont;
    UILabel * _amountLabel;
    UITextField * _amountTextField;
    NSString * _currency;
    UIFont * _currencySymbolFont;
    UILabel * _currencySymbolLabel;
    NSNumberFormatter * _currentAmountFormatter;
    <PKEnterCurrencyAmountViewDelegate> * _delegate;
    bool  _enabled;
    UIView * _internalInputAccessoryView;
    NSNumber * _kerning;
    NSString * _localizedAmountString;
    PKNumberPadInputView * _numberPad;
    bool  _showsDecimalPointButton;
    UIColor * _textColor;
}

@property (nonatomic, copy) UIFont *amountFont;
@property (nonatomic, retain) UILabel *amountLabel;
@property (nonatomic, readonly) UITextField *amountTextField;
@property (nonatomic, retain) NSString *currency;
@property (nonatomic, copy) UIFont *currencySymbolFont;
@property (nonatomic, retain) UILabel *currencySymbolLabel;
@property (nonatomic, retain) NSDecimalNumber *currentAmount;
@property (nonatomic, retain) NSNumberFormatter *currentAmountFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKEnterCurrencyAmountViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *inputAccessoryView;
@property (nonatomic, copy) NSNumber *kerning;
@property (nonatomic, retain) NSString *localizedAmountString;
@property (nonatomic, retain) PKNumberPadInputView *numberPad;
@property (nonatomic) bool showsDecimalPointButton;
@property (readonly) Class superclass;
@property (nonatomic, copy) UIColor *textColor;

- (void).cxx_destruct;
- (void)_createAmountFormatter;
- (void)_createSubviews;
- (id)_formatAmount:(id)arg1 alwaysShowDecimalSeparator:(bool)arg2 minimumFractionDigits:(unsigned long long)arg3 useGroupingSeparator:(bool)arg4;
- (unsigned long long)_numberOfDecimalPlacesInString:(id)arg1 decimalSeperator:(id)arg2;
- (double)_topPaddingForCurrencySymbol;
- (void)_updateContent;
- (id)amountFont;
- (id)amountLabel;
- (id)amountTextField;
- (id)currency;
- (id)currencySymbolFont;
- (id)currencySymbolLabel;
- (id)currentAmount;
- (id)currentAmountFormatter;
- (id)delegate;
- (void)dismissKeyboard;
- (bool)enabled;
- (id)initWithCurrency:(id)arg1 amount:(id)arg2;
- (id)inputAccessoryView;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)kerning;
- (void)layoutSubviews;
- (id)localizedAmountString;
- (id)numberPad;
- (void)setAmountFont:(id)arg1;
- (void)setAmountLabel:(id)arg1;
- (void)setCurrency:(id)arg1;
- (void)setCurrencySymbolFont:(id)arg1;
- (void)setCurrencySymbolLabel:(id)arg1;
- (void)setCurrentAmount:(id)arg1;
- (void)setCurrentAmountFormatter:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (void)setKerning:(id)arg1;
- (void)setLocalizedAmountString:(id)arg1;
- (void)setNumberPad:(id)arg1;
- (void)setShowsDecimalPointButton:(bool)arg1;
- (void)setTextColor:(id)arg1;
- (void)showKeyboard;
- (bool)showsDecimalPointButton;
- (id)textColor;
- (bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementString:(id)arg3;

@end
