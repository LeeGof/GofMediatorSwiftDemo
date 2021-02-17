//
//  NSObject+GofTopVC.h
//  获取当前显示的VC
//
//  Created by LeeGof on 2019/8/31.
//  Copyright © 2019 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (GofTopVC)

/**
 获取当前显示的VC

 @return 显示的VC
 */
+ (UIViewController * __nullable)gof_topViewController;

/**
 获取当前的导航栈

 @return 当前的导航栈
 */
+ (UINavigationController * __nullable)gof_currentNavigationController;

/**
 清空当前显示的导航栈到根视图（不考虑present出来的页面）

 @param animated 是否添加动画
 */
+ (void)gof_popToRootViewController:(BOOL)animated;

@end

NS_ASSUME_NONNULL_END
