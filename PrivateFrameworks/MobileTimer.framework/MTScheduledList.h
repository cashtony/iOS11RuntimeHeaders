/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTScheduledList : NSObject {
    <MTScheduledListDelegate> * _delegate;
    NSMutableOrderedSet * _orderedScheduledAlerts;
    NSMutableOrderedSet * _orderedScheduledNotifications;
    NSMutableDictionary * _scheduledAlertMap;
}

@property (nonatomic) <MTScheduledListDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long numberOfScheduledAlerts;
@property (nonatomic, readonly) unsigned long long numberOfScheduledAlertsAndNotifications;
@property (nonatomic, retain) NSMutableOrderedSet *orderedScheduledAlerts;
@property (nonatomic, retain) NSMutableOrderedSet *orderedScheduledNotifications;
@property (nonatomic, retain) NSMutableDictionary *scheduledAlertMap;
@property (nonatomic, readonly) NSArray *scheduledAlerts;
@property (nonatomic, readonly) NSArray *scheduledAlertsAndNotifications;

+ (void)_sort:(id)arg1;

- (void).cxx_destruct;
- (void)_performScheduleChangingBlock:(id /* block */)arg1 withCompletion:(id /* block */)arg2;
- (void)_scheduleObject:(id)arg1;
- (void)_unschedule:(id)arg1;
- (void)_unscheduleObject:(id)arg1;
- (id)delegate;
- (id)description;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (bool)isScheduled:(id)arg1;
- (id)nextScheduledAlert;
- (id)nextScheduledAlertOrNotification;
- (id)nextScheduledAlertWithTriggerType:(unsigned long long)arg1;
- (unsigned long long)numberOfScheduledAlerts;
- (unsigned long long)numberOfScheduledAlertsAndNotifications;
- (id)orderedScheduledAlerts;
- (id)orderedScheduledNotifications;
- (void)reset;
- (void)schedule:(id)arg1 afterDate:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)scheduledAlertMap;
- (id)scheduledAlerts;
- (id)scheduledAlertsAndNotifications;
- (id)scheduledAlertsToFireBeforeDate:(id)arg1;
- (id)scheduledAlertsToFireInInterval:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOrderedScheduledAlerts:(id)arg1;
- (void)setOrderedScheduledNotifications:(id)arg1;
- (void)setScheduledAlertMap:(id)arg1;
- (void)unschedule:(id)arg1;

@end
