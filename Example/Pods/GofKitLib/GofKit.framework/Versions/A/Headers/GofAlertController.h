//
//  GofAlertController.h
//  GofKitDemo
//
//  Created by ligaofeng on 2019/7/25.
//  Copyright © 2019 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface GofAlertController : NSObject

/**
 获取UIAlertController并显示
 
 @param title 标题
 @param message 描述信息
 @param cancelTitle 取消按钮标题
 @param cancelBlock 取消按钮回调
 @param sender sender
 @param controller 控制器
 @param completion 完成回调
 @return UIAlertController
 */
+ (UIAlertController *)gof_showAlertControllerWithTitle:(nullable NSString *)title
                                                message:(nullable NSString *)message
                                            cancelTitle:(NSString *)cancelTitle
                                            cancelBlock:(void (^_Nullable)(void))cancelBlock
                                                 sender:(nullable id)sender
                                             controller:(nullable __kindof UIViewController *)controller
                                             completion:(void (^_Nullable)(void))completion;

/**
 获取UIAlertController并显示
 
 @param title 标题
 @param cancelTitle 取消按钮标题
 @param cancelBlock 取消按钮回调
 @param sender sender
 @param controller 控制器
 @param completion 完成回调
 @return UIAlertController
 */
+ (UIAlertController *)gof_showAlertControllerWithTitle:(nullable NSString *)title
                                            cancelTitle:(NSString *)cancelTitle
                                            cancelBlock:(void (^_Nullable)(void))cancelBlock
                                                 sender:(nullable id)sender
                                             controller:(nullable __kindof UIViewController *)controller
                                             completion:(void (^_Nullable)(void))completion;

/**
 获取UIAlertController并显示
 
 @param title 标题
 @param message 描述信息
 @param cancelTitle 取消按钮标题
 @param cancelBlock 取消按钮回调
 @param confirmTitle 确认按钮标题
 @param confirmBlock 确认按钮回调
 @param sender sender
 @param controller 控制器
 @param alertRotation 屏幕方向
 @param completion 完成回调
 @return UIAlertController
 */
+ (UIAlertController *)gof_showAlertControllerWithTitle:(nullable NSString *)title
                                                message:(nullable NSString *)message
                                            cancelTitle:(NSString *)cancelTitle
                                            cancelBlock:(void (^_Nullable)(void))cancelBlock
                                           confirmTitle:(nullable NSString *)confirmTitle
                                           confirmBlock:(void (^_Nullable)(void))confirmBlock
                                                 sender:(nullable id)sender
                                             controller:(nullable __kindof UIViewController *)controller
                                          alertRotation:(UIInterfaceOrientationMask)alertRotation
                                             completion:(void (^_Nullable)(void))completion;

/**
 获取UIAlertController并显示
 
 @param message 描述信息
 @param cancelTitle 取消按钮标题
 @param cancelBlock 取消按钮回调
 @param sender sender
 @param controller 控制器
 @param alertRotation 屏幕方向
 @param completion 完成回调
 @return UIAlertController
 */
+ (UIAlertController *)gof_showAlertControllerWithMessage:(nullable NSString *)message
                                              cancelTitle:(NSString *)cancelTitle
                                              cancelBlock:(void (^_Nullable)(void))cancelBlock
                                                   sender:(nullable id)sender
                                               controller:(nullable __kindof UIViewController *)controller
                                            alertRotation:(UIInterfaceOrientationMask)alertRotation
                                               completion:(void (^_Nullable)(void))completion;

/**
 获取UIAlertController并显示
 
 @param message 描述信息
 @param cancelTitle 取消按钮标题
 @param cancelBlock 取消按钮回调
 @param confirmTitle 确认按钮标题
 @param confirmBlock 确认按钮回调
 @param sender sender
 @param controller 控制器
 @param alertRotation 屏幕方向
 @param completion 完成回调
 @return UIAlertController
 */
+ (UIAlertController *)gof_showAlertControllerWithMessage:(nullable NSString *)message
                                              cancelTitle:(NSString *)cancelTitle
                                              cancelBlock:(void (^_Nullable)(void))cancelBlock
                                             confirmTitle:(nullable NSString *)confirmTitle
                                             confirmBlock:(void (^_Nullable)(void))confirmBlock
                                                   sender:(nullable id)sender
                                               controller:(nullable __kindof UIViewController *)controller
                                            alertRotation:(UIInterfaceOrientationMask)alertRotation
                                               completion:(void (^_Nullable)(void))completion;

/**
 获取UIAlertController并显示
 
 @param title 标题
 @param message 描述信息
 @param cancelTitle 取消按钮标题
 @param cancelBlock 取消按钮回调
 @param sender sender
 @param controller 控制器
 @param alertRotation 屏幕方向
 @param completion 完成回调
 @return UIAlertController
 */
+ (UIAlertController *)gof_showAlertControllerWithTitle:(nullable NSString *)title
                                                message:(nullable NSString *)message
                                            cancelTitle:(NSString *)cancelTitle
                                            cancelBlock:(void (^_Nullable)(void))cancelBlock
                                                 sender:(nullable id)sender
                                             controller:(nullable __kindof UIViewController *)controller
                                          alertRotation:(UIInterfaceOrientationMask)alertRotation
                                             completion:(void (^_Nullable)(void))completion;

/**
 获取UIAlertController并显示
 
 @param title 标题
 @param message 描述信息
 @param cancelTitle 取消按钮标题
 @param cancelBlock 取消按钮回调
 @param confirmTitle 确认按钮标题
 @param confirmBlock 确认按钮回调
 @param sender sender
 @param controller 控制器
 @param completion 完成回调
 @return UIAlertController
 */
+ (UIAlertController *)gof_showAlertControllerWithTitle:(nullable NSString *)title
                                                message:(nullable NSString *)message
                                            cancelTitle:(nullable NSString *)cancelTitle
                                            cancelBlock:(void (^_Nullable)(void))cancelBlock
                                           confirmTitle:(nullable NSString *)confirmTitle
                                           confirmBlock:(void (^_Nullable)(void))confirmBlock
                                                 sender:(nullable id)sender
                                             controller:(nullable __kindof UIViewController *)controller
                                             completion:(void (^_Nullable)(void))completion;

/**
 获取UIAlertController并显示
 
 @param message 描述信息
 @param cancelTitle 取消按钮标题
 @param cancelBlock 取消按钮回调
 @param confirmTitle 确认按钮标题
 @param confirmBlock 确认按钮回调
 @param sender sender
 @param controller 控制器
 @param completion 完成回调
 @return UIAlertController
 */
+ (UIAlertController *)gof_showAlertControllerWithMessage:(nullable NSString *)message
                                              cancelTitle:(nullable NSString *)cancelTitle
                                              cancelBlock:(void (^_Nullable)(void))cancelBlock
                                             confirmTitle:(nullable NSString *)confirmTitle
                                             confirmBlock:(void (^_Nullable)(void))confirmBlock
                                                   sender:(nullable id)sender
                                               controller:(nullable __kindof UIViewController *)controller
                                               completion:(void (^_Nullable)(void))completion;


/**
 显示ActionSheet
 
 @param title 标题
 @return UIAlertController
 */
+ (UIAlertController *)gof_actionSheetWithTitle:(nullable NSString *)title;

/**
 显示ActionSheet
 
 @param actionTitle 标题
 @param actionBlock 回调Block
 @param cancelTitle 取消按钮标题
 @param cancelBlock 取消按钮回调
 @param sender sender
 @param controller 控制器
 */
+ (void)gof_showActionSheetWithActionTitle:(nullable NSString *)actionTitle
                               actionBlock:(void (^_Nullable)(void))actionBlock
                               cancelTitle:(NSString *)cancelTitle
                               cancelBlock:(void (^_Nullable)(void))cancelBlock
                                    sender:(nullable id)sender
                                controller:(nullable __kindof UIViewController *)controller;

/**
 显示ActionSheet
 
 @param actionSheet ActionSheet
 @param sender sender
 @param controller 控制器
 */
+ (void)gof_showActionSheet:(UIAlertController *)actionSheet
                     sender:(nullable id)sender
                 controller:(nonnull __kindof UIViewController *)controller;

/**
 显示ActionSheet
 
 @param actionSheet ActionSheet
 @param arrowDirection 出现方向
 @param sender sender
 @param controller 控制器
 */
+ (void)gof_showActionSheet:(UIAlertController *)actionSheet
             arrowDirection:(UIPopoverArrowDirection)arrowDirection
                     sender:(nullable id)sender
                 controller:(nonnull __kindof UIViewController *)controller;

@end

NS_ASSUME_NONNULL_END
