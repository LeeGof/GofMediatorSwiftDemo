//
//  NSString+GofEncrypt.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (GofEncrypt)

/**
 将 JSON 字符串 转为 JSON 对象

 @return JSON对象
 */
- (id)gof_JSONObject;

/**
 將序列化的字串轉成組合對象（非數組或字典，亦非含有組合對象的組合對象，目前只支持一級組合對象）；主要用於對象從數據庫中恢復

 @return 组合对象
 */
- (id)gof_deserializedObject;

/**用於去除 JSON 串中值為空對象的字典項*/

/**
 去除 JSON 串中值為空對象的字典項

 @return 处理后的JSON串
 */
- (NSString *)gof_nullTrimmedString;

/**
 用 pattern 修剪字符串

 @param pattern pattern
 @return 修建后的字符串
 */
- (NSString *)gof_trimmedStringWithPattern:(NSString *)pattern;

#pragma mark - MD5

/**
 *
 *  生成MD5加密字符串
 *
 *  @return MD5加密后的字符串
 */
- (NSString *)gof_md5;

#pragma mark - SHA

/**
 *
 *  生成SHA1加密字符串
 *
 *  @return SHA1加密字符串
 */
- (NSString *)gof_SHA1;

/**
 生成SHA256加密字符串
 
 @return SHA256加密字符串
 */
- (NSString *)gof_SHA256;

/**
 生成SHA512加密字符串
 
 @return SHA512加密字符串
 */
- (NSString *)gof_SHA512;

#pragma mark - AES

/**
 *
 *  对test进行AES算法加密
 *
 *  @param text 待加密的文本
 *  @param password 加密使用的密码，解密时会需要到此密码
 *
 *  @return AES加密后的base64字符串
 */
+ (NSString *)gof_AESEncrypt:(NSString *)text password:(NSString *)password;

/**
 *
 *  进行AES算法解密
 *
 *  @param decodedString 待解密的文本
 *  @param password 加密时使用的密码
 *
 *  @return AES解密后的字符串
 */
+ (NSString *)gof_AESDecrypt:(NSString *)decodedString password:(NSString *)password;

#pragma mark - Base64

/**
 *
 * 把data转成base64字符串
 *
 * @param data 待转换的二进制数据
 * @param length 转换的长度范围
 *
 * @return 转换后的字符串
 */
+ (NSString *)gof_base64StringFromData:(NSData *)data length:(NSUInteger)length;

/*!
 *
 *  将字符串转换成二进制数据后，再进行base64编码
 *
 *  @return 返回base64编码后的字符串
 */
- (NSString *)gof_base64Encoding;
+ (NSString *)gof_base64Encoding:(NSString *)text;

/*!
 *
 *  将base64编码字符串还原成普通字符串
 *
 *  @return 普通字符串
 */
+ (NSString *)gof_textWithBase64Decoding:(NSString *)base64Encoding;

@end
