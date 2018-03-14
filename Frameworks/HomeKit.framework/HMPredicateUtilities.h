/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMPredicateUtilities : NSObject

+ (bool)areOnlyHourAndMinuteSet:(id)arg1;
+ (bool)containsPresenceEvents:(id)arg1;
+ (id)rewritePredicateForClient:(id)arg1 home:(id)arg2;
+ (id)rewritePredicateForDaemon:(id)arg1 characteristicIsInvalid:(bool*)arg2;
+ (id)rewritePredicateForMerge:(id)arg1 existingHome:(id)arg2 characteristicIsInvalid:(bool*)arg3;
+ (bool)validatePredicate:(id)arg1;

@end
