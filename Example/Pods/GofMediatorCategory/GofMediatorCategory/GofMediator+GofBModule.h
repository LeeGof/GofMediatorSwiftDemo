//
//  GofMediator+GofBModule.h
//  分类展示 Swift 模块示例
//
//  Created by 李高峰 on 2021/2/17.
//  Copyright © 2021 LeeGof. All rights reserved.
//

#import <GofMediator/GofMediator.h>

NS_ASSUME_NONNULL_BEGIN

/// 分类展示 Swift 模块示例
@interface GofMediator (GofBModule)

/// 分类展示 Swift 模块的 B 页面
/// @param callback 回调
- (UIViewController *)gof_BViewControllerWithCallback:(void (^)(NSString *))callback;

@end

NS_ASSUME_NONNULL_END
