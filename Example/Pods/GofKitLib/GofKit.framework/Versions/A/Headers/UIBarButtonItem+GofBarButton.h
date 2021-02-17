//
//  UIBarButtonItem+GofBarButton.h
//  创建BarButtonItem
//
//  Created by LeeGof on 2018/1/10.
//  Copyright © 2018年 gof. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GofBlock.h"

@interface UIBarButtonItem (GofBarButton)

#pragma mark - 图片方式生成UIBarButtonItem

+ (UIBarButtonItem *)gof_itemWithNormalImage:(NSString *)image buttonTag:(NSInteger)buttonTag buttonBlock:(GofButtonBlock)buttonBlock;

+ (UIBarButtonItem *)gof_itemWithNormalImage:(NSString *)image imageEdgeInsets:(UIEdgeInsets)imageEdgeInsets buttonTag:(NSInteger)buttonTag buttonBlock:(GofButtonBlock)buttonBlock;

/**
 生成UIBarButtonItem

 @param normalImage 常态图片名称
 @param higeLightedImage 高亮图片名称
 @param imageEdgeInsets 内边距
 @param buttonTag 按钮Tag
 @param buttonBlock 按钮点击
 @return UIBarButtonItem
 */
+ (UIBarButtonItem *)gof_itemWithNomalImage:(NSString *)normalImage
                           higeLightedImage:(NSString *)higeLightedImage
                            imageEdgeInsets:(UIEdgeInsets)imageEdgeInsets
                                  buttonTag:(NSInteger)buttonTag
                                buttonBlock:(GofButtonBlock)buttonBlock;

#pragma mark - 文本方式生成UIBarButtonItem

+ (UIBarButtonItem *)gof_itemWithTitle:(NSString *)title buttonTag:(NSInteger)buttonTag buttonBlock:(GofButtonBlock)buttonBlock;

+ (UIBarButtonItem *)gof_itemWithTitle:(NSString *)title titleEdgeInsets:(UIEdgeInsets)titleEdgeInsets buttonTag:(NSInteger)buttonTag buttonBlock:(GofButtonBlock)buttonBlock;

/**
 生成UIBarButtonItem

 @param title 标题
 @param font 文本字体
 @param titleColor 文本颜色
 @param highlightedColor 高亮颜色
 @param titleEdgeInsets 内边距
 @param buttonTag 按钮Tag
 @param buttonBlock 按钮点击
 @return UIBarButtonItem
 */
+ (UIBarButtonItem *)gof_itemWithTitle:(NSString *)title
                                  font:(UIFont *)font
                            titleColor:(UIColor *)titleColor
                      highlightedColor:(UIColor *)highlightedColor
                       titleEdgeInsets:(UIEdgeInsets)titleEdgeInsets
                             buttonTag:(NSInteger)buttonTag
                           buttonBlock:(GofButtonBlock)buttonBlock;

#pragma mark - 修正位置的UIBarButtonItem

+ (UIBarButtonItem *)gof_fixedSpaceWithWidth:(CGFloat)width;

@end
