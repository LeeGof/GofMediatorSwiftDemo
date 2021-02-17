//
//  UITextField+GofTextFieldMaker.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GofBlock.h"

@interface UITextField (GofTextFieldMaker)

/**
 创建UITextField

 @param text 文本
 @param placeholder 占位
 @return UITextField
 */
+ (instancetype)gof_textFieldWithText:(NSString *)text
                           placeholder:(NSString *)placeholder;

/**
 创建UITextField

 @param text 文本
 @param placeholder 占位
 @param isSecurity 是否加密
 @return UITextField
 */
+ (instancetype)gof_textFieldWithText:(NSString *)text
                          placeholder:(NSString *)placeholder
                           isSecurity:(BOOL)isSecurity;

/**
 创建UITextField

 @param text 文本
 @param placeholder 占位
 @param superView 父视图
 @return UITextField
 */
+ (instancetype)gof_textFieldWithText:(NSString *)text
                           placeholder:(NSString *)placeholder
                             superView:(UIView *)superView;

/**
 创建UITextField

 @param text 文本
 @param placeholder 占位
 @param superView 父视图
 @param constraints 约束
 @return UITextField
 */
+ (instancetype)gof_textFieldWithText:(NSString *)text
                           placeholder:(NSString *)placeholder
                             superView:(UIView *)superView
                           constraints:(GofConstraintMaker)constraints;

/**
 创建UITextField

 @param text 文本
 @param placeholder 占位
 @param superView 父视图
 @param constraints 约束
 @param delegate 代理
 @return UITextField
 */
+ (instancetype)gof_textFieldWithText:(NSString *)text
                           placeholder:(NSString *)placeholder
                             superView:(UIView *)superView
                           constraints:(GofConstraintMaker)constraints
                              delegate:(id<UITextFieldDelegate>)delegate;

/**
 创建UITextField

 @param text 文本
 @param placeholder 占位
 @param isSecurity 是否加密
 @param superView 父视图
 @param constraints 约束
 @param delegate 代理
 @return UITextField
 */
+ (instancetype)gof_textFieldWithText:(NSString *)text
                           placeholder:(NSString *)placeholder
                            isSecurity:(BOOL)isSecurity
                             superView:(UIView *)superView
                           constraints:(GofConstraintMaker)constraints
                              delegate:(id<UITextFieldDelegate>)delegate;

/**
 创建UITextField

 @param text 文本
 @param textColor 文本颜色
 @param placeholder 占位
 @param placeholderColor 占位颜色
 @param font 文本字体
 @param isSecurity 是否加密
 @param delegate 代理
 @param superView 父视图
 @param constraints 约束
 @return UITextField
 */
+ (instancetype)gof_textFieldWithText:(NSString *)text
                             textColor:(UIColor *)textColor
                           placeholder:(NSString *)placeholder
                      placeholderColor:(UIColor *)placeholderColor
                                  font:(UIFont *)font
                            isSecurity:(BOOL)isSecurity
                              delegate:(id<UITextFieldDelegate>)delegate
                             superView:(UIView *)superView
                           constraints:(GofConstraintMaker)constraints;

@end
