//
//  NSData+GofCache.h
//  NSData数据缓存
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (GofCache)

/**
 *  使用key缓存数据到磁盘
 *
 *  @param key 标识字符串
 */
- (void)gof_saveDataToCacheWithKey:(NSString *)key;

/**
 *  取出缓存数据
 *
 *  @param key url.absoluteString
 *
 *  @return 缓存
 */
+ (NSData *)gof_getDataFromCacheWithKey:(NSString *)key;

/**
 缓存目录
 
 @return .../Library/Caches/GofDataCache
 */
+ (NSString *)gof_dataCacheDocument;

@end
