/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCPayloadDetailsViewController : UITableViewController <PSStateRestoration> {
    NSArray * _keyValueSections;
    MCPayload * _payload;
    MCPayloadInfo * _payloadInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *keyValueSections;
@property (nonatomic, retain) MCPayload *payload;
@property (nonatomic, retain) MCPayloadInfo *payloadInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setup;
- (bool)canBeShownFromSuspendedState;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)initWithPayload:(id)arg1;
- (id)initWithPayloadInfo:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)keyValueSections;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)payload;
- (id)payloadInfo;
- (void)setKeyValueSections:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setPayloadInfo:(id)arg1;
- (void)setTitle:(id)arg1 keyValueSections:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
