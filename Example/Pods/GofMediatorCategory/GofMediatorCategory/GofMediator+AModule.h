//
//  GofMediator+AModule.h
//  展示 OC 模块分类
//
//  Created by 李高峰 on 2021/2/17.
//  Copyright © 2021 LeeGof. All rights reserved.
//

#import <GofMediator/GofMediator.h>

NS_ASSUME_NONNULL_BEGIN

@interface GofMediator (AModule)

/// 展示 A 模块页面
/// @param callback 回调
- (UIViewController *)gof_AViewControllerWithCallback:(void (^)(NSString *))callback;

@end

NS_ASSUME_NONNULL_END
