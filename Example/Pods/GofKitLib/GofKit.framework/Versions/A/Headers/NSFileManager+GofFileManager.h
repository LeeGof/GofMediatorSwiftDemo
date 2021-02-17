//
//  NSFileManager+GofFileManager.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSFileManager (GofFileManager)

/*!
 *
 * @brief 判断文件是否存在
 *
 * @param filePath 文件路径名
 *
 * @return 返回YES表示存在，返回NO表示不存在
 */
- (BOOL)gof_isFileExists:(NSString *)filePath;

/*!
 *
 * @brief 判断文件是否超时
 *
 * @param filePath 文件路径名
 * @param timeout 限制的超时时间，单位为秒
 *
 * @return 返回YES表示超时，返回NO表示未超时
 */
- (BOOL)gof_isFile:(NSString *)filePath timeout:(NSTimeInterval)timeout;

/**
 根据路径获取文件的大小
 
 @param path 文件路径名
 @return 文件的大小
 */
- (long)gof_fileSizeWithPath:(NSString *)path;

@end
