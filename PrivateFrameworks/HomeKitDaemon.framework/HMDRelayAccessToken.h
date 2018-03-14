/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRelayAccessToken : HMFObject <NSSecureCoding> {
    NSData * _accessToken;
    HMDHAPAccessory * _accessory;
    NSUUID * _accessoryIdentifier;
    NSUUID * _identifier;
    HMDUser * _user;
    NSUUID * _userIdentifier;
}

@property (nonatomic, readonly, copy) NSData *accessToken;
@property (nonatomic) HMDHAPAccessory *accessory;
@property (nonatomic, readonly) NSUUID *accessoryIdentifier;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic) HMDUser *user;
@property (nonatomic, retain) NSUUID *userIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessToken;
- (id)accessory;
- (id)accessoryIdentifier;
- (void)configureWithHome:(id)arg1;
- (id)dictionaryEncoding;
- (void)encodeWithCoder:(id)arg1;
- (void)fixupUserIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithAccessToken:(id)arg1 consentToken:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAccessory:(id)arg1;
- (void)setUser:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)updateWithDictionary:(id)arg1 home:(id)arg2;
- (id)user;
- (id)userIdentifier;

@end
