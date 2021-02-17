//
//  UIView+GofViewMaker.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GofBlock.h"
#import "UIGestureRecognizer+GofGesture.h"

@interface UIView (GofViewMaker)

/**
 创建视图

 @return UIView
 */
+ (instancetype)gof_EmptyView;

/**
 创建视图

 @param superView 父视图
 @param constraints 约束
 @return UIView
 */
+ (instancetype)gof_viewWithSuperView:(UIView *)superView
                          constraints:(GofConstraintMaker)constraints;

/**
 创建视图

 @param superView 父视图
 @param constraints 约束
 @param tap 点击事件
 @return UIView
 */
+ (instancetype)gof_viewWithSuperView:(UIView *)superView
                          constraints:(GofConstraintMaker)constraints
                                  tap:(GofGestureBlock)tap;

/**
 创建视图

 @param superView 父视图
 @param constraints 约束
 @param longPress 长按事件
 @return UIView
 */
+ (instancetype)gof_viewWithSuperView:(UIView *)superView
                          constraints:(GofConstraintMaker)constraints
                            longPress:(GofLongGestureBlock)longPress;

/**
 创建视图

 @param superView 父视图
 @param constraints 约束
 @param tap 点击事件
 @param longPress 长按事件
 @return UIView
 */
+ (instancetype)gof_viewWithSuperView:(UIView *)superView
                          constraints:(GofConstraintMaker)constraints
                                  tap:(GofGestureBlock)tap
                            longPress:(GofLongGestureBlock)longPress;

#pragma mark - 分隔线

+ (instancetype)gof_lineViewWithbottomPadding:(CGFloat)bottomPadding
                                       toView:(UIView *)superView
                                      bgColor:(UIColor *)bgColor;

/**
 分隔线

 @param topPadding 上边距
 @param superView 父视图
 @return UIView
 */
+ (instancetype)gof_lineWithTopPadding:(CGFloat)topPadding
                                toView:(UIView *)superView;

/**
 分隔线

 @param leftPadding 左边距
 @param topPadding 上边距
 @param superView 父视图
 @return UIView
 */
+ (instancetype)gof_lineWithLeftPadding:(CGFloat)leftPadding
                             topPadding:(CGFloat)topPadding
                                 toView:(UIView *)superView;

/**
 分隔线

 @param bottomPadding 下边距
 @param superView 父视图
 @return UIView
 */
+ (instancetype)gof_lineWithBottomPadding:(CGFloat)bottomPadding
                                   toView:(UIView *)superView;

/**
 分隔线

 @param leftPadding 左边距
 @param bottomPadding 下边距
 @param superView 父视图
 @return UIView
 */
+ (instancetype)gof_lineWithLeftPadding:(CGFloat)leftPadding
                          bottomPadding:(CGFloat)bottomPadding
                                 toView:(UIView *)superView;

/**
 分隔线

 @param leftPadding 左边距
 @param topPadding 上边距
 @param superView 父视图
 @param bgColor 分隔线颜色
 @return UIView
 */
+ (instancetype)gof_lineWithLeftPadding:(CGFloat)leftPadding
                             topPadding:(CGFloat)topPadding
                                 toView:(UIView *)superView
                                bgColor:(UIColor *)bgColor;

/**
 分隔线

 @param leftPadding 左边距
 @param bottomPadding 下边距
 @param superView 父视图
 @param bgColor 分隔线颜色
 @return UIView
 */
+ (instancetype)gof_lineWithLeftPadding:(CGFloat)leftPadding
                          bottomPadding:(CGFloat)bottomPadding
                                 toView:(UIView *)superView
                                bgColor:(UIColor *)bgColor;

+ (instancetype)gof_lineWithLeftPadding:(CGFloat)leftPadding
                           rightPadding:(CGFloat)rightPadding
                          bottomPadding:(CGFloat)bottomPadding
                                 toView:(UIView *)superView
                                bgColor:(UIColor *)bgColor;

/**
 分割线

 @param leftPadding 左边距
 @param rightPadding 右边距
 @param superView 父视图
 @return UIView
 */
+ (instancetype)gof_lineWithLeftPadding:(CGFloat)leftPadding
                           rightPadding:(CGFloat)rightPadding
                                 toView:(UIView *)superView;

/**
 分割线

 @param leftPadding 左边距
 @param rightPadding 右边距
 @param topPadding 上边距
 @param superView 父视图
 @return UIView
 */
+ (instancetype)gof_lineWithLeftPadding:(CGFloat)leftPadding
                           rightPadding:(CGFloat)rightPadding
                             topPadding:(CGFloat)topPadding
                                 toView:(UIView *)superView;

@end
