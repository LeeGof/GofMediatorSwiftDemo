//
//  NSUserDefaults+GofUserDefaults.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSUserDefaults (GofUserDefaults)

- (NSString *)gof_udSafeObjectForKey:(NSString *)aKey;

/**
 *
 *  更加安全的方式存储数据，只有苹果允许的有效数据类型会正常执行，否则跳过。
 *
 *  @param value       对象
 *  @param defaultName 键
 */
- (void)gof_setUDSafeObject:(id)value forKey:(NSString *)defaultName;

/**
 *
 *  更加安全的方式存储数据，只有苹果允许的有效数据类型会正常执行，否则跳过。
 *
 *  @param value       对象
 *  @param defaultName 键
 *  @param autoSync    是否自动调用保存，默认为NO
 *
 *  @return 如果autoSync为YES，则会返回保存状态
 */
- (BOOL)gof_setUDSafeObject:(id)value forKey:(NSString *)defaultName autoSync:(BOOL)autoSync;

@end
