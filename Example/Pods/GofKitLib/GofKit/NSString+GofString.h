//
//  NSString+GofString.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (GofString)

#pragma mark - App信息

/**
 获取应用Build版本
 
 @return Build版本
 */
+ (NSString *)gof_appBuild;

/**
 获取应用版本
 
 @return 应用版本
 */
+ (NSString *)gof_appVersion;

/**
 获取应用名称
 
 @return 应用名称
 */
+ (NSString *)gof_appName;

/**
 *  app的版本号
 *
 *  @return 返回app的应用版本 build版本
 */
+ (NSString *)gof_appVersionAndBuild;

/**
 获取设备型号

 @return 设备型号
 */
+ (NSString *)gof_deviceModel;

/**
 获取系统版本

 @return 系统版本
 */
+ (NSString *)gof_systemVersion;

#pragma mark - 数据转换

/**
 转换成Data数据
 
 @return data数据
 */
- (NSData *)gof_toData;

/**
 Data转换成字符串数据
 
 @param data data数据
 @return 转换之后的字符串数据
 */
+ (NSString *)gof_toString:(NSData *)data;

/**
 *
 *  获取字符串中共有多少行
 *
 *  @return 行数
 */
- (NSUInteger)gof_numberOfLines;

#pragma mark - URL包装
/**
 *
 * 转换成URL
 *
 * @note 前提条件是满URL
 */
- (NSURL *)gof_toURL;

/**
 *
 * 把URL进行UTF8转码
 *
 * @note 前提条件是满足URL
 */
- (NSString *)gof_URLEncode;

#pragma mark - 过滤HTML标签

/**
 过滤掉HTML标签
 
 @return 返回去掉所有HTML标签后的字符串
 */
- (NSString *)gof_filteredHtml;

/**
 过滤掉HTML标签
 
 @param html HTML内容
 @return 返回去掉所有HTML标签后的字符串
 */
+ (NSString *)gof_filterHTML:(NSString *)html;

#pragma mark - 添加前缀、后缀

/**
 添加前缀
 
 @param prefix 前缀
 @return 返回添加后的字符串
 */
- (NSString *)gof_addPrefix:(NSString *)prefix;

/**
 添加后缀
 
 @param subfix 后缀
 @return 返回添加后的字符串
 */
- (NSString *)gof_addSubfix:(NSString *)subfix;

#pragma mark - 获取文件路径

/**
 根据文件名返回文件的路径
 
 @param fileName 文件名（如果有后缀，需要加上）
 @return 如果文件路径存在，则返回该文件路径，否则返回nil
 */
+ (NSString *)gof_pathWithFileName:(NSString *)fileName;

/**
 根据文件名返回文件的路径
 
 @param fileName 文件名(不加后缀)
 @param type 文件后缀名
 @return 如果文件路径存在，则返回该文件路径，否则返回nil
 */
+ (NSString *)gof_pathWithFileName:(NSString *)fileName ofType:(NSString *)type;

+ (NSString *)gof_fileSizeStringWithNumber:(NSUInteger)fileSize;

#pragma mark - 获取Documents/tmp/Cache路径

/**
 获取Documents路径
 
 @return Documents路径
 */
+ (NSString *)gof_documentPath;

/**
 获取tmp路径
 
 @return tmp路径
 */
+ (NSString *)gof_tmpPath;

/**
 获取Cache路径
 
 @return Cache路径
 */
+ (NSString *)gof_cachePath;

#pragma mark - 生成UUID

/**
 生成UUID，每次生成的UUID都是唯一的
 
 @return 返回UUID
 */
+ (NSString *)gof_createUUID;

@end
