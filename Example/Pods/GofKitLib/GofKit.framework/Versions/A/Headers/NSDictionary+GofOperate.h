//
//  NSDictionary+GofOperate.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (GofOperate)

#pragma mark - JSON操作

/*!
 *
 * 把格式化的JSON格式的字符串转换成字典
 *
 * @param jsonString JSON格式的字符串
 * @return 返回字典
 */
+ (NSDictionary *)gof_dictionaryWithJsonString:(NSString *)jsonString;

/*!
 *
 * 获取JSON字符串
 *
 * @return 把字典转换成JSON串
 */
- (NSString *)gof_jsonString;

#pragma mark - 字典合并

/**
 合并两个字典
 
 @param dict1 字典1
 @param dict2 字典2
 @return 合并之后的大字典
 */
+ (NSDictionary *)gof_mergeDictionaryWithDict1:(NSDictionary *)dict1
                                      andDict2:(NSDictionary *)dict2;

/**
 合并两个字典
 
 @param dict 待合并的字典
 @return 合并之后的大字典
 */
- (NSDictionary *)gof_mergeDictionaryWithDict:(NSDictionary *)dict;

#pragma mark - Block

/**
 字典遍历
 
 @param block 回调Block
 */
- (void)gof_each:(void (^)(id key, id value))block;

@end
