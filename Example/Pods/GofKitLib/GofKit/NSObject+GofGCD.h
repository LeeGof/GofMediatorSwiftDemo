//
//  NSObject+GofGCD.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (GofGCD)

/**
 在主线程队列中异步执行任务
 
 @param block 任务Block
 */
- (void)gof_performOnMainQueue:(void(^)(void))block;

/**
 在全局队列中异步执行任务
 
 @param block 任务Block
 */
- (void)gof_performOnGlobalQueue:(void(^)(void))block;

/**
 在XX秒后执行任务
 
 @param seconds XX秒
 @param block 任务Block
 */
- (void)gof_performAfter:(NSTimeInterval)seconds block:(void(^)(void))block;

@end
