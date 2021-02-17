//
//  NSDate+GofDate.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (GofDate)

/**
 * 获取日、月、年、小时、分钟、秒
 */
- (NSUInteger)gof_day;
- (NSUInteger)gof_month;
- (NSUInteger)gof_year;
- (NSUInteger)gof_hour;
- (NSUInteger)gof_minute;
- (NSUInteger)gof_second;
+ (NSUInteger)gof_day:(NSDate *)gof_date;
+ (NSUInteger)gof_month:(NSDate *)gof_date;
+ (NSUInteger)gof_year:(NSDate *)gof_date;
+ (NSUInteger)gof_hour:(NSDate *)gof_date;
+ (NSUInteger)gof_minute:(NSDate *)gof_date;
+ (NSUInteger)gof_second:(NSDate *)gof_date;

/**
 * 获取一年中的总天数
 */
- (NSUInteger)gof_daysInYear;
+ (NSUInteger)gof_daysInYear:(NSDate *)gof_date;

/**
 * 判断是否是润年
 * @return YES表示润年，NO表示平年
 */
- (BOOL)gof_isLeapYear;
+ (BOOL)gof_isLeapYear:(NSDate *)gof_date;
+ (BOOL)gof_isLeapYearWithYear:(int)year;

/**
 * 获取该日期是该年的第几周
 */
- (NSUInteger)gof_weekOfYear;
+ (NSUInteger)gof_weekOfYear:(NSDate *)gof_date;

/**
 * 获取格式化为YYYY-MM-dd格式的日期字符串
 */
- (NSString *)gof_formatYMD;
+ (NSString *)gof_formatYMD:(NSDate *)gof_date;

/**
 * 返回当前月一共有几周(可能为4,5,6)gof_
 */
- (NSUInteger)gof_weeksOfMonth;
+ (NSUInteger)gof_weeksOfMonth:(NSDate *)gof_date;

/**
 * 获取该月的第一天的日期
 */
- (NSDate *)gof_begindayOfMonth;
+ (NSDate *)gof_begindayOfMonth:(NSDate *)gof_date;

/**
 * 获取该月的最后一天的日期
 */
- (NSDate *)gof_lastdayOfMonth;
+ (NSDate *)gof_lastdayOfMonth:(NSDate *)gof_date;

/**
 * 返回day天后的日期(若day为负数,则为|day|天前的日期)gof_
 */
- (NSDate *)gof_dateAfterDay:(NSUInteger)gof_day;
+ (NSDate *)gof_dateAfterDate:(NSDate *)gof_date day:(NSInteger)gof_day;

/**
 * 返回day天后的日期(若day为负数,则为|day|天前的日期)gof_
 */
- (NSDate *)gof_dateAfterMonth:(NSUInteger)gof_month;
+ (NSDate *)gof_dateAfterDate:(NSDate *)gof_date month:(NSInteger)gof_month;

/**
 * 返回numYears年后的日期
 */
- (NSDate *)gof_offsetYears:(int)gof_numYears;
+ (NSDate *)gof_offsetYears:(int)gof_numYears fromDate:(NSDate *)gof_fromDate;

/**
 * 返回numMonths月后的日期
 */
- (NSDate *)gof_offsetMonths:(int)gof_numMonths;
+ (NSDate *)gof_offsetMonths:(int)gof_numMonths fromDate:(NSDate *)gof_fromDate;

/**
 * 返回numDays天后的日期
 */
- (NSDate *)gof_offsetDays:(int)gof_numDays;
+ (NSDate *)gof_offsetDays:(int)gof_numDays fromDate:(NSDate *)gof_fromDate;

/**
 * 返回numHours小时后的日期
 */
- (NSDate *)gof_offsetHours:(int)gof_hours;
+ (NSDate *)gof_offsetHours:(int)gof_numHours fromDate:(NSDate *)gof_fromDate;

/**
 * 距离该日期前几天
 */
- (NSUInteger)gof_daysAgo;
+ (NSUInteger)gof_daysAgo:(NSDate *)gof_date;

/**
 *  获取星期几
 *
 *  @return Return weekday number
 *  [1 - Sunday]
 *  [2 - Monday]
 *  [3 - Tuerday]
 *  [4 - Wednesday]
 *  [5 - Thursday]
 *  [6 - Friday]
 *  [7 - Saturday]
 */
- (NSInteger)gof_weekday;
+ (NSInteger)gof_weekday:(NSDate *)gof_date;

/**
 *  获取星期几(名称)
 *
 *  @return Return weekday as a localized string
 *  [1 - Sunday]
 *  [2 - Monday]
 *  [3 - Tuerday]
 *  [4 - Wednesday]
 *  [5 - Thursday]
 *  [6 - Friday]
 *  [7 - Saturday]
 */
- (NSString *)gof_dayFromWeekday;
+ (NSString *)gof_dayFromWeekday:(NSDate *)gof_date;

/**
 日期是否相等
 
 @param gof_anotherDate The another date to compare as NSDate
 @return Return YES if is same day, NO if not
 */
- (BOOL)gof_isSameDay:(NSDate *)gof_anotherDate;

/**
 *  是否是今天
 *
 *  @return Return if self is today
 */
- (BOOL)gof_isToday;

/**
 Add days to self
 
 @param gof_days The number of days to add
 @return Return self by adding the gived days number
 */
- (NSDate *)gof_dateByAddingDays:(NSUInteger)gof_days;

/**
 Get the month as a localized string from the given month number
 
 *  [1 - January]
 *  [2 - February]
 *  [3 - March]
 *  [4 - April]
 *  [5 - May]
 *  [6 - June]
 *  [7 - July]
 *  [8 - August]
 *  [9 - September]
 *  [10 - October]
 *  [11 - November]
 *  [12 - December]
 
 @param gof_month The month to be converted in string
 @return Return the given month as a localized string
 */
+ (NSString *)gof_monthWithMonthNumber:(NSInteger)gof_month;

/**
 * 根据日期返回字符串
 */
+ (NSString *)gof_stringWithDate:(NSDate *)gof_date format:(NSString *)gof_format;
- (NSString *)gof_stringWithFormat:(NSString *)gof_format;
+ (NSDate *)gof_dateWithString:(NSString *)gof_string format:(NSString *)gof_format;

/**
 * 获取指定月份的天数
 */
- (NSUInteger)gof_daysInMonth:(NSUInteger)gof_month;
+ (NSUInteger)gof_daysInMonth:(NSDate *)gof_date month:(NSUInteger)gof_month;
+ (NSUInteger)gof_dayInYear:(int)year month:(NSUInteger)month;

/**
 * 获取当前月份的天数
 */
- (NSUInteger)gof_daysInMonth;
+ (NSUInteger)gof_daysInMonth:(NSDate *)gof_date;

/**
 * 返回x分钟前/x小时前/昨天/x天前/x个月前/x年前
 */
- (NSString *)gof_timeInfo;
+ (NSString *)gof_timeInfoWithDate:(NSDate *)gof_date;
+ (NSString *)gof_timeInfoWithDateString:(NSString *)gof_dateString;

/**
 * 分别获取yyyy-MM-dd/HH:mm:ss/yyyy-MM-dd HH:mm:ss格式的字符串
 */
- (NSString *)gof_ymdFormat;
- (NSString *)gof_hmsFormat;
- (NSString *)gof_ymdHmsFormat;
+ (NSString *)gof_ymdFormat;
+ (NSString *)gof_hmsFormat;
+ (NSString *)gof_ymdHmsFormat;

/**
 *
 * @param  date fromDate
 *
 * @return a NSDateComponents object
 */
+ (NSDateComponents *)gof_dateComponentsWithDate:(NSDate *)date;

/**
 *
 * 将日期转换成时间戳
 */
- (NSString *)gof_toTimeStamp;

/**
 *
 * 将时间戳转换成日期
 *
 * @param timeStamp 时间戳
 */
+ (NSDate *)gof_toDateWithTimeStamp:(NSString *)timeStamp;

/**
 *
 * 将国际日期转换成本地日期（系统日期，因为我们国家地处东八区，会与国际相关8个时区）
 *
 * @param anyDate 国际日期
 *
 * @return 返回本地日期（系统日期）
 */
+ (NSDate *)gof_localDateWithDate:(NSDate *)anyDate;

/**
 根据秒数格式化时间(xx小时xx分钟xx秒)

 @param second 秒数
 @return xx小时xx分钟xx秒
 */
+ (NSString *)gof_timeInfoWithSecond:(NSInteger)second;

@end
