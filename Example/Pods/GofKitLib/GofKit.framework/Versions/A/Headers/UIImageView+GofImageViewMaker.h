//
//  UIImageView+GofImageViewMaker.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GofBlock.h"

@interface UIImageView (GofImageViewMaker)

/**
 创建UIImageView

 @param image 图片,可以是UIImage对象，也可以是图片名称
 @return UIImageView
 */
+ (instancetype)gof_imageViewWithImage:(id)image;

/**
 创建UIImageView

 @param image 图片,可以是UIImage对象，也可以是图片名称
 @param superView 父视图
 @return UIImageView
 */
+ (instancetype)gof_imageViewWithImage:(id)image
                              superView:(UIView *)superView;

/**
 * 创建UIImageView控件
 *
 * @param superView       父视图
 * @param constraints     约束
 *
 * @return UIImageView对象
 */
+ (instancetype)gof_imageViewWithSuperView:(UIView *)superView
                                constraints:(GofConstraintMaker)constraints;

/**
 * 创建UIImageView控件
 *
 * @param superView       父视图
 * @param constraints     约束
 * @param tap             点击手势回调，如果传nil，则不添加手势
 *
 * @return UIImageView对象
 */
+ (instancetype)gof_imageViewWithSuperView:(UIView *)superView
                                constraints:(GofConstraintMaker)constraints
                                        tap:(GofGestureBlock)tap;

/**
 * 创建UIImageView控件
 *
 * @param image           图片,可以是UIImage对象，也可以是图片名称
 * @param superView       父视图
 * @param constraints     约束
 *
 * @return UIImageView对象
 */
+ (instancetype)gof_imageViewWithImage:(id)image
                              superView:(UIView *)superView
                            constraints:(GofConstraintMaker)constraints;

/**
 * 创建UIImageView控件
 *
 * @param image           图片,可以是UIImage对象，也可以是图片名称
 * @param superView       父视图
 * @param constraints     约束
 * @param tap             点击手势回调，如果传nil，则不添加手势
 *
 * @return UIImageView对象
 */
+ (instancetype)gof_imageViewWithImage:(id)image
                              superView:(UIView *)superView
                            constraints:(GofConstraintMaker)constraints
                                    tap:(GofGestureBlock)tap;

/**
 * 创建UIImageView控件
 *
 * @param image           图片,可以是UIImage对象，也可以是图片名称
 * @param circle          是否设置为圆
 * @param superView       父视图
 * @param constraints     约束
 *
 * @return UIImageView对象
 */
+ (instancetype)gof_imageViewWithImage:(id)image
                                 circle:(BOOL)circle
                              superView:(UIView *)superView
                            constraints:(GofConstraintMaker)constraints;

/**
 * 创建UIImageView控件
 *
 * @param image           图片,可以是UIImage对象，也可以是图片名称
 * @param circle          是否设置为圆
 * @param superView       父视图
 * @param constraints     约束
 * @param tap             点击手势回调，如果传nil，则不添加手势
 *
 * @return UIImageView对象
 */
+ (instancetype)gof_imageViewWithImage:(id)image
                                 circle:(BOOL)circle
                              superView:(UIView *)superView
                            constraints:(GofConstraintMaker)constraints
                                    tap:(GofGestureBlock)tap;

/**
 * 创建UIImageView控件
 *
 * @param image           图片,可以是UIImage对象，也可以是图片名称
 * @param fixedSize       图片控件固定大小
 * @param circle          是否设置为圆
 * @param superView       父视图
 * @param constraints     约束
 * @param tap             点击手势回调，如果传nil，则不添加手势
 *
 * @return UIImageView对象
 */
+ (instancetype)gof_imageViewWithImage:(id)image
                              fixedSize:(CGSize)fixedSize
                                 circle:(BOOL)circle
                              superView:(UIView *)superView
                            constraints:(GofConstraintMaker)constraints
                                    tap:(GofGestureBlock)tap;

@end
