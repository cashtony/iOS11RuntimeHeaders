/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

@interface CRBasicCard : NSObject <CRCard> {
    NSArray * _cardSections;
    NSArray * _dismissalCommands;
    NSSet * _interactions;
}

@property (nonatomic, readonly) bool asynchronous;
@property (nonatomic, readonly) SFCard *backingCard;
@property (nonatomic, retain) NSArray *cardSections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *dismissalCommands;
@property (nonatomic, readonly) bool flexibleSectionOrder;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *interactions;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)asynchronous;
- (id)cardSections;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dismissalCommands;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)interactions;
- (void)loadCardWithCompletion:(id /* block */)arg1;
- (void)setCardSections:(id)arg1;
- (void)setDismissalCommands:(id)arg1;
- (void)setInteractions:(id)arg1;

@end
