//
//  UIActionSheet+GofActionSheet.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 * Block版本的回调
 *
 * @param actionSheet 调起的UIActionSheet
 * @param buttonIndex 用户点击的按钮的索引
 */
typedef void(^GofActionSheetClickedButtonBlock)(UIActionSheet *actionSheet, NSUInteger buttonIndex);

@interface UIActionSheet (GofActionSheet)

/**
 * 点击按钮项时的回调
 */
@property (nonatomic, copy) GofActionSheetClickedButtonBlock gof_clickedButtonBlock;

/**
 *
 * Block版本的actionSheet，具体如何使用请参考UIActionSheet
 *
 * @param inView 父视图
 * @param title 标题
 * @param cancelTitle 取消按钮标题
 * @param destructiveTitle destructive按钮标题
 * @param otherTitles 其它按钮的标题
 * @param callback 按钮点击的回调
 *
 * @note 最多支持30项
 * @see UIActionSheet
 * @see GofActionSheetClickedButtonBlock
 */
+ (UIActionSheet *)gof_showInView:(UIView *)inView
                            title:(NSString *)title
                      cancelTitle:(NSString *)cancelTitle
                 destructiveTitle:(NSString *)destructiveTitle
                      otherTitles:(NSArray *)otherTitles
                         callback:(GofActionSheetClickedButtonBlock)callback;

@end
