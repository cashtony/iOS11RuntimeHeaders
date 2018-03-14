/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudBookmarksMigrationRampSettings : NSObject {
    NSDictionary * _dictionaryRepresentation;
    NSArray * _eligibleOperatingSystemVersionRanges;
    unsigned long long  _gmMigrationPercent;
    unsigned long long  _internalMigrationPercent;
    NSString * _minimumMacSafariVersion;
    unsigned long long  _seedMigrationPercent;
    NSSet * _whitelistedAccounts;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSArray *eligibleOperatingSystemVersionRanges;
@property (nonatomic, readonly) unsigned long long gmMigrationPercent;
@property (nonatomic, readonly) unsigned long long internalMigrationPercent;
@property (nonatomic, readonly) NSString *minimumMacSafariVersion;
@property (nonatomic, readonly) unsigned long long seedMigrationPercent;
@property (nonatomic, readonly) NSSet *whitelistedAccounts;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)eligibleOperatingSystemVersionRanges;
- (unsigned long long)gmMigrationPercent;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)internalMigrationPercent;
- (id)minimumMacSafariVersion;
- (unsigned long long)seedMigrationPercent;
- (id)whitelistedAccounts;

@end
