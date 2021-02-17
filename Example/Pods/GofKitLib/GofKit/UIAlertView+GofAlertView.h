//
//  UIAlertView+GofAlertView.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <UIKit/UIKit.h>

// UIAlertView的ok/cancel按钮的标题，默认值可在此处修改
FOUNDATION_EXTERN NSString *const kAlertViewOkButtonTitle;
FOUNDATION_EXTERN NSString *const kAlertViewCancelButtonTitle;

/**
 * Block版本的回调
 *
 * @param alertView 调起的UIAlertView
 * @param buttonIndex 用户点击的按钮的索引
 */
typedef void(^GofAlertClickedButtonBlock)(UIAlertView *alertView,
NSUInteger buttonIndex);

@interface UIAlertView (GofAlertView)

/**
 *  为提示添加id属性
 */
@property (copy, nonatomic) NSString *apsID;

/**
 *
 *  点击按钮时的回调
 *
 *  @see GofAlertClickedButtonBlock
 */
@property (nonatomic, copy) GofAlertClickedButtonBlock  gof_clickedButtonBlock;

/**
 *
 *  无标题，只有提示和取消、确定按钮
 *
 *  @param message 提示语
 *
 *  @return UIAlertView对象
 */
+ (UIAlertView *)gof_showWithMessage:(NSString *)message;

/**
 *
 *  无标题，只有确定按钮和提示
 *
 *  @param message 提示语
 *
 *  @return UIAlertView对象
 */
+ (UIAlertView *)gof_showOkWithMessage:(NSString *)message;

/**
 *
 *  无标题，只有取消按钮和提示
 *
 *  @param message 提示语
 *
 *  @return UIAlertView对象
 */
+ (UIAlertView *)gof_showCancelWithMessage:(NSString *)message;

/**
 *
 *  带标题，提示语和确定、取消
 *
 *  @param title   标题
 *  @param message 提示语
 *
 *  @return UIAlertView对象
 */
+ (UIAlertView *)gof_showWithTitle:(NSString *)title message:(NSString *)message;

/**
 *
 *  带标题，提示语和确定按钮
 *
 *  @param title   标题
 *  @param message 提示语
 *
 *  @return UIAlertView对象
 */
+ (UIAlertView *)gof_showOkWithTitle:(NSString *)title message:(NSString *)message;

/**
 *
 *  带标题，提示语和取消按钮
 *
 *  @param title   标题
 *  @param message 提示语
 *
 *  @return UIAlertView对象
 */
+ (UIAlertView *)gof_showCancelWithTitle:(NSString *)title message:(NSString *)message;

/**
 *
 *  显示标题、提示语、带确定、取消按钮
 *
 *  @param title   标题
 *  @param message 提示语
 *  @param block   点击按钮时的回调
 *
 *  @return UIAlertView对象
 */
+ (UIAlertView *)gof_showWithTitle:(NSString *)title
                           message:(NSString *)message
                             block:(GofAlertClickedButtonBlock)block;

/**
 *
 *  显示标题、提示语、带确定按钮
 *
 *  @param title   标题
 *  @param message 提示语
 *  @param block   点击按钮时的回调
 *
 *  @return UIAlertView对象
 */
+ (UIAlertView *)gof_showOkWithTitle:(NSString *)title
                             message:(NSString *)message
                               block:(GofAlertClickedButtonBlock)block;

/**
 *
 *  显示标题、提示语、带取消按钮
 *
 *  @param title   标题
 *  @param message 提示语
 *  @param block   点击按钮时的回调
 *
 *  @return UIAlertView对象
 */
+ (UIAlertView *)gof_showCancelWithTitle:(NSString *)title
                                 message:(NSString *)message
                                   block:(GofAlertClickedButtonBlock)block;

/**
 *
 *  显示标题、提示语、带确定按钮
 *
 *  @param title        标题
 *  @param message      提示语
 *  @param buttonTitles 标题数组，最多可以有4个按钮
 *  @param block        点击按钮时的回调
 *
 *  @return UIAlertView对象
 */
+ (UIAlertView *)gof_showOkWithTitle:(NSString *)title
                             message:(NSString *)message
                        buttonTitles:(NSArray *)buttonTitles
                               block:(GofAlertClickedButtonBlock)block;

/**
 *
 *  显示标题、提示语、带确定按钮
 *  提示语左对齐
 *
 *  @param title        标题
 *  @param message      提示语
 *  @param buttonTitles 标题数组，最多可以有4个按钮
 *  @param block        点击按钮时的回调
 *
 *  @return UIAlertView对象
 */
+ (UIAlertView *)gof_showLeftMessageWithTitle:(NSString *)title
                                      message:(NSString *)message
                                 buttonTitles:(NSArray *)buttonTitles
                                        block:(GofAlertClickedButtonBlock)block;

@end
