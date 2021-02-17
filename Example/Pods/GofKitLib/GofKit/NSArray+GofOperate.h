//
//  NSArray+GofOperate.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (GofOperate)

/**
 反转数组

 @param array 源数组
 @return 逆序排序的数组
 */
+ (NSArray *)gof_reversedArray:(NSArray *)array;

/**
 *  @author Huangibiao
 *
 *  将数组转换成JSON字符串
 *
 *  @return JSON字符串或者nil（转换失败）
 */
- (NSString *)gof_toJson;

/**
 将数组转换成JSON字符串

 @param array 源数组
 @return JSON字符串或者nil（转换失败）
 */
+ (NSString *)gof_toJson:(NSArray *)array;

/**
 判断数组中是否包含string

 @param string 待判断的字符串
 @return YES表示包含，NO表示不包含
 */
- (BOOL)gof_isContainsString:(NSString *)string;

/**
 使用enumerate方式遍历

 @param block 带元素参数的回调Block
 */
- (void)gof_enumerateWithBlock:(void (^)(id object))block;

/**
 使用enumerate方式遍历
 
 @param block 带元素和索引的回调Block
 */
- (void)gof_enumerateWithIndexBlock:(void (^)(id object, NSUInteger index))block;

/**
 数组映射：该功能可用于数组成员统一配置，比如说给字符串数组的每一个成员加一个前缀等
 
 @param block 映射Block
 @return 映射后新的数组
 */
- (NSArray *)gof_map:(id (^)(id object))block;

/**
 数组过滤：该功能可用于对数组成员进行过滤，比如说对数字字符串数组，可在Block中设置过滤条件为大于xx值
 
 @param block 过滤的Block
 @return 过滤后的数组
 */
- (NSArray *)gof_filter:(BOOL (^)(id object))block;

/**
 检查数组元素是否符合某个条件，如果符合，则返回该元素。该功能可用于检查数组是否包含某个字符串，如果包含该字符串，则返回包含该字符串的那个元素
 
 @param block 条件Block
 @return 元素或nil
 */
- (id)gof_detect:(BOOL (^)(id object))block;

@end
