/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSDateComponents : NSObject <NSCopying, NSSecureCoding>

@property (copy) NSCalendar *calendar;
@property (readonly, copy) NSDate *date;
@property long long day;
@property long long era;
@property long long hour;
@property (getter=isLeapMonth) bool leapMonth;
@property long long minute;
@property long long month;
@property long long nanosecond;
@property long long quarter;
@property long long second;
@property (copy) NSTimeZone *timeZone;
@property (getter=isValidDate, readonly) bool validDate;
@property long long weekOfMonth;
@property long long weekOfYear;
@property long long weekday;
@property long long weekdayOrdinal;
@property long long year;
@property long long yearForWeekOfYear;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)supportsSecureCoding;

- (id)calendar;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (long long)day;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)era;
- (unsigned long long)hash;
- (long long)hour;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLeapMonth;
- (bool)isLeapMonthSet;
- (bool)isValidDate;
- (bool)isValidDateInCalendar:(id)arg1;
- (long long)minute;
- (long long)month;
- (long long)nanosecond;
- (long long)quarter;
- (long long)second;
- (void)setCalendar:(id)arg1;
- (void)setDay:(long long)arg1;
- (void)setEra:(long long)arg1;
- (void)setHour:(long long)arg1;
- (void)setLeapMonth:(bool)arg1;
- (void)setMinute:(long long)arg1;
- (void)setMonth:(long long)arg1;
- (void)setNanosecond:(long long)arg1;
- (void)setQuarter:(long long)arg1;
- (void)setSecond:(long long)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setValue:(long long)arg1 forComponent:(unsigned long long)arg2;
- (void)setWeek:(long long)arg1;
- (void)setWeekOfMonth:(long long)arg1;
- (void)setWeekOfYear:(long long)arg1;
- (void)setWeekday:(long long)arg1;
- (void)setWeekdayOrdinal:(long long)arg1;
- (void)setYear:(long long)arg1;
- (void)setYearForWeekOfYear:(long long)arg1;
- (id)timeZone;
- (long long)valueForComponent:(unsigned long long)arg1;
- (long long)week;
- (long long)weekOfMonth;
- (long long)weekOfYear;
- (long long)weekday;
- (long long)weekdayOrdinal;
- (long long)year;
- (long long)yearForWeekOfYear;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

- (Class)contactViewControllerCellClassForPropertyType:(id)arg1;
- (id)displayString;

// Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI

- (void)clearTimeComponents;
- (id)dateComponents:(unsigned long long)arg1 byAddingComponents:(id)arg2 calendar:(id)arg3;
- (id)dateComponents:(unsigned long long)arg1 byAddingDays:(int)arg2 calendar:(id)arg3;
- (id)dateComponentsForDateOnly;
- (id)dateComponentsForEndOfDay;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })gregorianDate;
- (bool)hasTimeComponents;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)hk_componentsWithDays:(long long)arg1;
+ (id)hk_dateComponentsForCalendarUnit:(unsigned long long)arg1;
+ (id)hk_oneDay;
+ (id)hk_oneWeek;

- (id)_hk_dateByAddingFilteredInterval:(long long)arg1 toDate:(id)arg2;
- (double)hk_approximateDuration;
- (id)hk_dateByAddingInterval:(long long)arg1 toDate:(id)arg2;
- (long long)hk_maxComponentValue;
- (id)hk_populatedCalendarGregorianCalendarDefault;
- (id)hk_translateDateComponentsToCalendar:(id)arg1 calendarUnits:(unsigned long long)arg2;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (unsigned long long)_ui_largerComponentsRelativeToComponent:(unsigned long long)arg1;
+ (id)_ui_namesForComponents:(unsigned long long)arg1;
+ (unsigned long long)_ui_smallerComponentsRelativeToComponent:(unsigned long long)arg1;
+ (unsigned long long)smaller:(bool)arg1 componentsRelativeToComponent:(unsigned long long)arg2;

- (id)_ui_conciseDescription;
- (void)_ui_setComponents:(id)arg1;
- (void)_ui_setValue:(long long)arg1 forComponent:(unsigned long long)arg2;
- (long long)_ui_valueForComponent:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (bool)isSameDayAsComponents:(id)arg1;
- (bool)isSameMonthAsComponents:(id)arg1;
- (bool)isSameYearAsComponents:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

+ (id)componentForDays:(long long)arg1;
+ (id)componentForHours:(long long)arg1;
+ (id)componentForMinutes:(long long)arg1;
+ (id)componentForMonths:(long long)arg1;
+ (id)componentForWeeks:(long long)arg1;
+ (id)componentForYears:(long long)arg1;

- (bool)isSameDayAsComponents:(id)arg1;
- (bool)isSameMonthAsComponents:(id)arg1;
- (bool)isSameYearAsComponents:(id)arg1;
- (id)representedDate;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

- (id)localTimeDescription;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (unsigned long long)_hf_allPossibleComponents;
+ (id)hf_biweeklyIntervalComponents;
+ (id)hf_componentsWithHour:(long long)arg1 minute:(long long)arg2;
+ (id)hf_dailyIntervalComponents;
+ (id)hf_dailyWeekdayIntervalComponents;
+ (id)hf_monthlyIntervalComponents;
+ (id)hf_weeklyIntervalComponents;
+ (id)hf_yearlyIntervalComponents;
+ (id)hf_zeroDateComponentsWithComponents:(unsigned long long)arg1 calendar:(id)arg2;

- (id)hf_absoluteValue;
- (long long)hf_compareNextMatchingDate:(id)arg1;
- (long long)hf_compareNextMatchingDate:(id)arg1 withCalendar:(id)arg2;
- (bool)hf_isEqualToHomeKitRecurrence:(id)arg1;
- (id)hf_negativeValue;
- (double)hf_timeInterval;
- (unsigned long long)hf_validComponents;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit

- (id)description;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

+ (bool)wf_isSameDayWithComponents:(id)arg1 andComponents:(id)arg2;
+ (long long)wf_minutesBetweenDateComponents:(id)arg1 andComponents:(id)arg2;
+ (id)wf_nowDateComponents;
+ (id)wf_weatherDataClosestToDate:(id)arg1 inArray:(id)arg2;
+ (id)wf_weatherDataOnDate:(id)arg1 inArray:(id)arg2;
+ (id)wf_weatherDatasOnDate:(id)arg1 inArray:(id)arg2;

- (bool)wf_componentsAreTimeless;
- (id)wf_componentsWithoutTimeZone;
- (long long)wf_dateComponentsCompare:(id)arg1;
- (long long)wf_minutesDifferenceFromDate:(id)arg1;
- (long long)wf_minutesFromNow;

@end
