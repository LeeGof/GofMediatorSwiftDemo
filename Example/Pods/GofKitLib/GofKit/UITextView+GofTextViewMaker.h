//
//  UITextView+GofTextViewMaker.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GofBlock.h"

@interface UITextView (GofTextViewMaker)

/**
 创建TextView

 @param text 文本
 @param holder 占位
 @return UITextView
 */
+ (instancetype)gof_textViewWithText:(NSString *)text
                         placeholder:(NSString *)holder;

/**
 创建TextView

 @param text 文本
 @param holder 占位
 @param superView 父视图
 @return UITextView
 */
+ (instancetype)gof_textViewWithText:(NSString *)text
                         placeholder:(NSString *)holder
                           superView:(UIView *)superView;

/**
 创建TextView

 @param text 文本
 @param holder 占位
 @param superView 父视图
 @param constraints 约束
 @return UITextView
 */
+ (instancetype)gof_textViewWithText:(NSString *)text
                         placeholder:(NSString *)holder
                           superView:(UIView *)superView
                         constraints:(GofConstraintMaker)constraints;

/**
 创建TextView

 @param text 文本
 @param holder 占位
 @param delegate 代理
 @param superView 父视图
 @param constraints 约束
 @return UITextView
 */
+ (instancetype)gof_textViewWithText:(NSString *)text
                         placeholder:(NSString *)holder
                            delegate:(id<UITextViewDelegate>)delegate
                           superView:(UIView *)superView
                         constraints:(GofConstraintMaker)constraints;

/**
 创建TextView

 @param text 文本
 @param textColor 字体颜色
 @param textFont 字体
 @param placeholder 占位
 @param delegate 代理
 @param superView 父视图
 @param constraints 约束
 @return UITextView
 */
+ (instancetype)gof_textViewWithText:(NSString *)text
                           textColor:(UIColor *)textColor
                            textFont:(UIFont *)textFont
                         placeholder:(NSString *)placeholder
                            delegate:(id<UITextViewDelegate>)delegate
                           superView:(UIView *)superView
                         constraints:(GofConstraintMaker)constraints;

@end
