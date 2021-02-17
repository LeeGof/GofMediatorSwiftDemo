//
//  UIButton+GofButtonMaker.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GofBlock.h"
#import "UIControl+GofControl.h"

@interface UIButton (GofButtonMaker)

/**
 创建按钮
 
 @param title 按钮标题
 @param touchUp 点击回调
 @return UIButton
 */
+ (instancetype)gof_buttonWithTitle:(NSString *)title
                            touchUp:(GofButtonBlock)touchUp;

/**
 创建按钮
 
 @param title 按钮标题
 @param superView 父视图
 @param touchUp 点击回调
 @return UIButton
 */
+ (instancetype)gof_buttonWithTitle:(NSString *)title
                          superView:(UIView *)superView
                            touchUp:(GofButtonBlock)touchUp;

/**
 创建按钮
 
 @param title 按钮标题
 @param superView 父视图
 @param constraints 约束
 @param touchUp 点击回调
 @return UIButton
 */
+ (instancetype)gof_buttonWithTitle:(NSString *)title
                          superView:(UIView *)superView
                        constraints:(GofConstraintMaker)constraints
                            touchUp:(GofButtonBlock)touchUp;

/**
 创建按钮
 
 @param title 按钮标题
 @param backgroundImage 背景图片(字符串类型或UIImage类型)
 @param superView 父视图
 @param constraints 约束
 @param touchUp 点击回调
 @return UIButton
 */
+ (instancetype)gof_buttonWithTitle:(NSString *)title
                    backgroundImage:(id)backgroundImage
                          superView:(UIView *)superView
                        constraints:(GofConstraintMaker)constraints
                            touchUp:(GofButtonBlock)touchUp;

/**
 创建按钮
 
 @param image 按钮图片(字符串类型或UIImage类型)
 @param superView 父视图
 @param constraints 约束
 @param touchUp 点击回调
 @return UIButton
 */
+ (instancetype)gof_buttonWithImage:(id)image
                          superView:(UIView *)superView
                        constraints:(GofConstraintMaker)constraints
                            touchUp:(GofButtonBlock)touchUp;

/**
 创建按钮
 
 @param image 按钮图片(字符串类型或UIImage类型)
 @param selectedImage 选中按钮图片(字符串类型或UIImage类型)
 @param superView 父视图
 @param constraints 约束
 @param touchUp 点击回调
 @return UIButton
 */
+ (instancetype)gof_buttonWithImage:(id)image
                      selectedImage:(id)selectedImage
                          superView:(UIView *)superView
                        constraints:(GofConstraintMaker)constraints
                            touchUp:(GofButtonBlock)touchUp;

/**
 创建按钮
 
 @param title 按钮标题
 @param image 按钮图片(字符串类型或UIImage类型)
 @param selectedImage 选中按钮图片(字符串类型或UIImage类型)
 @param backgroundImage 按钮背景图(不和按钮背景颜色同时配置，参数类型为字符串或者UIImage)
 @param normalBgColor 按钮背景颜色
 @param highlightedBgColor 选中按钮背景颜色
 @param superView 父视图
 @param constraints 按钮约束
 @param touchUp 点击事件
 @param touchDown 点击弹起事件
 @return UIButton
 */
+ (instancetype)gof_buttonWithTitle:(NSString *)title
                              image:(id)image
                      selectedImage:(id)selectedImage
                    backgroundImage:(id)backgroundImage
                      normalBgColor:(UIColor *)normalBgColor
                hightlightedBgColor:(UIColor *)highlightedBgColor
                          superView:(UIView *)superView
                        constraints:(GofConstraintMaker)constraints
                            touchUp:(GofButtonBlock)touchUp
                          touchDown:(GofButtonBlock)touchDown;

@end
