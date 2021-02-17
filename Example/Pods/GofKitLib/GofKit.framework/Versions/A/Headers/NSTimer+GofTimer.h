//
//  NSTimer+GofTimer.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GofBlock.h"

@interface NSTimer (GofTimer)

/**
 *  创建Timer---Block版本
 *
 *  @param interval 每隔interval秒就回调一次callback
 *  @param repeats  是否重复
 *  @param callback 回调block
 *
 *  @return NSTimer对象
 */
+ (NSTimer *)gof_scheduledTimerWithTimeInterval:(NSTimeInterval)interval
                                        repeats:(BOOL)repeats
                                       callback:(GofVoidBlock)callback;

/**
 *  创建Timer---Block版本
 *
 *  @param interval 每隔interval秒就回调一次callback
 *  @param count  回调多少次后自动暂停，如果count <= 0，则表示无限次，否则表示具体的次数
 *  @param callback 回调block
 *
 *  @return NSTimer对象
 */
+ (NSTimer *)gof_scheduledTimerWithTimeInterval:(NSTimeInterval)interval
                                          count:(NSInteger)count
                                       callback:(GofVoidBlock)callback;

/**
 *  开始启动定时器
 */
- (void)gof_fireTimer;

/**
 *  暂停定时器
 */
- (void)gof_unfireTimer;

/**
 *  Make it invalid if currently it is valid.
 */
- (void)gof_invalid;

@end
