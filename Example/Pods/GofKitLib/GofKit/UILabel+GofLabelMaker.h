//
//  UILabel+GofLabelMaker.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GofBlock.h"

@interface UILabel (GofLabelMaker)

/**
 创建Label

 @param text 文本
 @return UIlabel
 */
+ (instancetype)gof_labelWithText:(NSString *)text;

/**
 创建Label

 @param text 文本
 @param superView 父视图
 @return UIlabel
 */
+ (instancetype)gof_labelWithText:(NSString *)text
                     superView:(UIView *)superView;

/**
 * 创建UILabel控件,默认透明背景、单行、黑色文本、字号为kBodyFontSize、左对齐
 *
 * @param text        文本
 * @param superView   所创建的控件的父视图
 * @param constraints 添加约束
 *
 * @return 生成UILabel控件
 */
+ (instancetype)gof_labelWithText:(NSString *)text
                     superView:(UIView *)superView
                   constraints:(GofConstraintMaker)constraints;

/**
 * 创建UILabel控件
 *
 * @param text        文本
 * @param font        文本字体
 * @param superView   所创建的控件的父视图
 * @param constraints 添加约束
 *
 * @return 生成UILabel控件
 */
+ (instancetype)gof_labelWithText:(NSString *)text
                          font:(UIFont *)font
                     superView:(UIView *)superView
                   constraints:(GofConstraintMaker)constraints;

/**
 * 创建UILabel控件
 *
 * @param text        文本
 * @param textColor   文本前景色
 * @param superView   所创建的控件的父视图
 * @param constraints 添加约束
 *
 * @return 生成UILabel控件
 */

+ (instancetype)gof_labelWithText:(NSString *)text
                     textColor:(UIColor *)textColor
                     superView:(UIView *)superView
                   constraints:(GofConstraintMaker)constraints;

/**
 * 创建UILabel控件
 *
 * @param text        文本
 * @param textColor   文本前景色
 * @param font        文本字体
 * @param superView   所创建的控件的父视图
 * @param constraints 添加约束
 *
 * @return 生成UILabel控件
 */
+ (instancetype)gof_labelWithText:(NSString *)text
                     textColor:(UIColor *)textColor
                          font:(UIFont *)font
                     superView:(UIView *)superView
                   constraints:(GofConstraintMaker)constraints;

@end
