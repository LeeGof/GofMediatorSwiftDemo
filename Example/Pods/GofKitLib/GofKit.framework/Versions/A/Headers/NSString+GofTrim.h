//
//  NSString+GofTrim.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (GofTrim)

/**
 去掉左边的空格
 
 @return 处理后的字符串
 */
- (NSString *)gof_trimLeft;

/**
 去掉右边的空格
 
 @return 处理后的字符串
 */
- (NSString *)gof_trimRight;

/**
 去掉两边的空格
 
 @return 处理后的字符串
 */
- (NSString *)gof_trim;

/**
 去掉所有空格
 
 @return 处理后的字符串
 */
- (NSString *)gof_trimAll;

/**
 去掉首尾字母
 
 @return 处理后的字符串
 */
- (NSString *)gof_trimLetters;

/**
 去掉字符中中所有的指定的字符
 
 @param character 指定的字符
 @return 处理后的字符串
 */
- (NSString *)gof_trimCharacter:(unichar)character;

/**
 去掉首尾空格或换行
 
 @return 处理后的字符串
 */
- (NSString *)gof_trimWhitespace;

@end
