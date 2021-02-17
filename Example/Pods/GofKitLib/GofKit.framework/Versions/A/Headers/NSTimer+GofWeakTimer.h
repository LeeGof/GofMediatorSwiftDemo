//
//  NSTimer+GofWeakTimer.h
//  GofKitDemo
//
//  Created by ligaofeng on 2019/7/25.
//  Copyright © 2019 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (GofWeakTimer)

/**
 Weak类型的timer，避免循环引用

 @param ti 时间间隔
 @param aTarget target
 @param aSelector sel
 @param userInfo userInfo
 @param yesOrNo 是否重复
 @return Weak类型的timer
 */
+ (NSTimer *)gof_scheduledWeakTimerWithTimeInterval:(NSTimeInterval)ti target:(id)aTarget selector:(SEL)aSelector userInfo:(id)userInfo repeats:(BOOL)yesOrNo;

@end
