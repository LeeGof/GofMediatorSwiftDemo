//
//  NSArray+GofSafe.h
//  数组的安全Setter/Getter
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSArray (GofSafe)

#pragma mark - 安全读取数组元素

/**
 安全读取数组元素(id类型)

 @param index 元素索引
 @return 数组元素
 */
- (id)gof_safeObjectAtIndex:(NSUInteger)index;

/**
 安全读取数组元素(NSString类型)
 
 @param index 元素索引
 @return 数组元素
 */
- (NSString *)gof_safeStringAtIndex:(NSUInteger)index;

/**
 安全读取数组元素(NSNumber类型)
 
 @param index 元素索引
 @return 数组元素
 */
- (NSNumber *)gof_safeNumberAtIndex:(NSUInteger)index;

/**
 安全读取数组元素(NSArray类型)
 
 @param index 元素索引
 @return 数组元素
 */
- (NSArray *)gof_safeArrayAtIndex:(NSUInteger)index;

/**
 安全读取数组元素(NSDictionary类型)
 
 @param index 元素索引
 @return 数组元素
 */
- (NSDictionary *)gof_safeDictionaryAtIndex:(NSUInteger)index;

/**
 安全读取数组元素(NSInteger类型)
 
 @param index 元素索引
 @return 数组元素
 */
- (NSInteger)gof_safeIntegerAtIndex:(NSUInteger)index;

/**
 安全读取数组元素(NSUInteger类型)
 
 @param index 元素索引
 @return 数组元素
 */
- (NSUInteger)gof_safeUIntegerAtIndex:(NSUInteger)index;

/**
 安全读取数组元素(BOOL类型)
 
 @param index 元素索引
 @return 数组元素
 */
- (BOOL)gof_safeBoolAtIndex:(NSUInteger)index;

/**
 安全读取数组元素(char类型)
 
 @param index 元素索引
 @return 数组元素
 */
- (char)gof_safeCharAtIndex:(NSUInteger)index;

/**
 安全读取数组元素(float类型)
 
 @param index 元素索引
 @return 数组元素
 */
- (float)gof_safeFloatAtIndex:(NSUInteger)index;

/**
 安全读取数组元素(double类型)
 
 @param index 元素索引
 @return 数组元素
 */
- (double)gof_safeDoubleAtIndex:(NSUInteger)index;

/**
 安全读取数组元素(CGPoint类型)
 
 @param index 元素索引
 @return 数组元素
 */
- (CGPoint)gof_safePointAtIndex:(NSUInteger)index;

/**
 安全读取数组元素(CGSize类型)
 
 @param index 元素索引
 @return 数组元素
 */
- (CGSize)gof_safeSizeAtIndex:(NSUInteger)index;

/**
 安全读取数组元素(CGRect类型)
 
 @param index 元素索引
 @return 数组元素
 */
- (CGRect)gof_safeRectAtIndex:(NSUInteger)index;

@end

@interface NSMutableArray(GofSafe)

#pragma mark - 安全添加数组元素

/**
 添加数组元素

 @param param 数组元素(对象类型)
 */
- (void)gof_safeAddObject:(id)param;

/**
 添加数组元素
 
 @param param 数组元素(NSInteger类型)
 */
- (void)gof_safeAddInteger:(NSInteger)param;

/**
 添加数组元素
 
 @param param 数组元素(NSUInteger类型)
 */
- (void)gof_safeAddUInteger:(NSUInteger)param;

/**
 添加数组元素
 
 @param param 数组元素(BOOL类型)
 */
- (void)gof_safeAddBool:(BOOL)param;

/**
 添加数组元素
 
 @param param 数组元素(char类型)
 */
- (void)gof_safeAddChar:(char)param;

/**
 添加数组元素
 
 @param param 数组元素(float类型)
 */
- (void)gof_safeAddFloat:(float)param;

/**
 添加数组元素
 
 @param param 数组元素(double类型)
 */
- (void)gof_safeAddDouble:(double)param;

/**
 添加数组元素

 @param array 数组元素(数组类型)
 */
- (void)gof_safeAddArray:(NSArray *)array;

/**
 添加数组元素
 
 @param param 数组元素(CGPoint类型)
 */
- (void)gof_safeAddPoint:(CGPoint)param;

/**
 添加数组元素
 
 @param param 数组元素(CGSize类型)
 */
- (void)gof_safeAddSize:(CGSize)param;

/**
 添加数组元素
 
 @param param 数组元素(CGRect类型)
 */
- (void)gof_safeAddRect:(CGRect)param;

/**
 指定位置添加数组元素

 @param anObject 元素
 @param atIndex 指定位置
 @return YES表示成功，NO表示插入失败
 */
- (BOOL)gof_safeInsertObject:(id)anObject atIndex:(NSUInteger)atIndex;

#pragma mark - 安全移除数组元素

/**
 将对象移除

 @param atIndex 待移除对象的索引
 @return YES表示成功，NO表示失败
 */
- (BOOL)gof_safeRemoveObjectAtIndex:(NSUInteger)atIndex;

/**
 将对象移除

 @param anObject 待移除对象
 @return YES表示成功，NO表示失败
 */
- (BOOL)gof_safeRemoveObject:(id)anObject;

@end
