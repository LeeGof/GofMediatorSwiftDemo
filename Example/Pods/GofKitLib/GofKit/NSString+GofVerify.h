//
//  NSString+GofVerify.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (GofVerify)

#pragma mark - 空校验

/*!
 *
 * 判断是否是空串/判断去掉两边的空格后是否是空串
 *
 * @return YES表示是空串，NO表示非空
 */
- (BOOL)gof_isEmpty;
- (BOOL)gof_isTrimEmpty;

#pragma mark - 判断字母、数字

/*!
 *
 * 判断是否只包含字母、数字、字母和数字
 *
 * @return YES，表示条件正确，否则返回NO
 */
- (BOOL)gof_isOnlyLetters;
- (BOOL)gof_isOnlyNumbers;
- (BOOL)gof_isOnlyAlphaNumeric;

#pragma mark - 邮件、手机、电话、身份证校验

/**
 *
 *  判断是否是合格的邮箱格式
 *
 *  @return YES表示正确，NO表示不正确
 */
- (BOOL)gof_isValidEmail;
+ (BOOL)gof_isValidEmail:(NSString *)email;

/*!
 *
 * 验证是否是正确的手机号码格式
 *
 * @return YES表示是正确的手机号码格式，返回NO表示手机号码格式不正确
 */
- (BOOL)gof_isValidPhone;
+ (BOOL)gof_isValidPhone:(NSString *)phone;

/*!
 *
 * 验证是否是正确的固定电话号码格式
 *
 * @return YES表示是正确的固定电话号码格式，返回NO表示固话号码格式不正确
 */
- (BOOL)gof_isValidTelNumber;
+ (BOOL)gof_isValidTelNumber:(NSString *)telNumber;

/*!
 *
 * 验证是否是正确的18位身份证号码格式
 *
 * @return YES表示是正确的身份证号码格式，返回NO表示身份证号码格式不正确
 */
- (BOOL)gof_isValidPersonID;
+ (BOOL)gof_isValidPersonID:(NSString *)PID;

#pragma mark - 其他

/*!
 *
 * 判断是否包含字符串
 * @param  str     需要判断的被包含的字符串
 */
- (BOOL)gof_isContainString:(NSString *)str;

/**
 *  将NSString类转为NSRange （进行容错判断）
 *
 *  @param aString 值
 *
 *  @return NSRange的值
 */
- (NSRange)gof_rangeOfStringFixed:(NSString *)aString;

/**
 *  删除一个 subString
 *
 *  @param subString 被删除字符串
 *
 *  @return 删除subString后的字符串
 */
- (NSString *)gof_deleteSubString:(NSString*)subString;

/*!
 *
 * 匹配非表情符号的正则表达式
 * @param  string     需要判断的字符串
 */
+ (BOOL)gof_isValidateCharacter:(NSString *)string;

/**
 *  判断输入钱数是否合法,也就是判断钱数只能是数字或者小数点,但对位数,小数点个数,开头是否是零没有规定,只是判断有无其他字符,需要配合使用
 *
 *  @param moneyStr 钱数字符串
 *
 *  @return yes合法,只包含数字和小数点
 */
+ (BOOL)gof_ifOkForMoneyNum:(NSString*)moneyStr;

@end
