//
//  GofCountDownUtils.h
//  倒计时管理类
//
//  Created by LeeGof on 2019/9/10.
//  Copyright © 2019 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GofBlock.h"

NS_ASSUME_NONNULL_BEGIN

@interface GofCountDownUtils : NSObject

/**
 开始倒计时(每秒回调一次)

 @param retBlock 回调Block
 */
- (void)gof_countDownWithRetBlock:(GofVoidBlock)retBlock;

/**
 结束倒计时
 */
- (void)gof_destoryTimer;

@end

NS_ASSUME_NONNULL_END
