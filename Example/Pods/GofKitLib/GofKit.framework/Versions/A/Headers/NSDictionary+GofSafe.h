//
//  NSDictionary+GofSafe.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (GofSafe)

/*!
 *
 * 根据key获取值
 *
 * @return 如果存在，返回value，否则返回nil，表示不存在或者是空
 */
- (id)gof_safeObjectForKey:(id<NSCopying>)aKey;

/*!
 *
 * 根据key获取值
 *
 * @return 如果存在，返回value，否则返回0
 */
- (int)gof_intValueForKey:(id)key;

/*!
 *
 * 根据key获取值
 *
 * @return 如果存在，返回value，否则返回0.0
 */
- (double)gof_doubleValueForKey:(id)key;

/*!
 *
 * 根据key获取值
 *
 * @return 如果存在，返回value，否则返回0.0f
 */
- (float)gof_floatValueForKey:(id)key;

/*!
 *
 * 根据key获取值
 *
 * @return 如果存在，返回value，否则返回0
 */
- (NSInteger)gof_integerValueForKey:(id)key;

/*!
 *
 * 根据key获取值
 *
 * @return 如果存在，返回value，否则返回nil
 */
- (NSString *)gof_stringValueForKey:(id)key;

/*!
 *
 * 根据key获取值
 *
 * @return 如果存在，返回value，否则返回nil
 */
- (NSDictionary *)gof_dictionaryValueForKey:(id)key;

/*!
 *
 * 根据key获取值
 *
 * @return 如果存在，返回value，否则返回nil
 */
- (NSArray *)gof_arrayValueForKey:(id)key;

/*!
 *
 * 根据key获取值
 *
 * @return 如果存在，返回value，否则返回nil
 */
- (NSNumber *)gof_numberValueForKey:(id)key;

/*!
 *
 * 根据key获取值
 *
 * @return 如果存在，返回value，否则返回nil
 */
- (BOOL)gof_boolValueForKey:(id)key;

@end

@interface NSMutableDictionary (GofSafe)

/**
 *
 *  更安全的方法添加对象到字典
 *
 *  @param anObject 若为nil，则什么都不做
 *  @param aKey     若为nil，则什么都不做
 */
- (void)gof_setSafeObject:(id)anObject forKey:(id<NSCopying>)aKey;

/**
 *  对字典添加元素 进行空值判断
 *
 *  @param anObject value值
 *  @param aKey     key值
 */
- (void)gof_setSafeObject:(id)anObject forKeyedSubscript:(id<NSCopying>)aKey;

/**
 *
 *  更安全的方法添加网络请求参数
 *
 *  @param anObject 若为nil，则置为 @“”
 *  @param aKey     若为nil，则什么都不做
 */
- (void)gof_setPostObj:(id)anObject forKey:(id<NSCopying>)aKey;

/**
 *
 *  对基础数据类型的安全存储API
 */
- (void)gof_setInt:(int)intValue forKey:(id<NSCopying>)aKey;
- (void)gof_setDouble:(double)doubleValue forKey:(id<NSCopying>)aKey;
- (void)gof_setFloat:(float)floatValue forKey:(id<NSCopying>)aKey;
- (void)gof_setInteger:(NSInteger)integerValue forKey:(id<NSCopying>)aKey;
- (void)gof_setBool:(BOOL)boolValue forKey:(id<NSCopying>)aKey;

@end
