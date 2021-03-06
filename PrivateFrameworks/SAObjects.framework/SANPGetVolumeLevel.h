/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPGetVolumeLevel : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *hashedRouteUIDs;

+ (id)getVolumeLevel;
+ (id)getVolumeLevelWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)requiresResponse;
- (void)setHashedRouteUIDs:(id)arg1;

@end
