//
//  UIImage+GofColor.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (GofColor)

/**
 *  根据颜色值生成图片
 *
 *  @param color 添加的颜色值
 *  @param size 设置图片尺寸
 *
 *  @return 生成的图片
 */
+ (nullable UIImage *)gof_imageWithColor:(nullable UIColor *)color
                                    size:(CGSize)size;


/**
 *  生成一个颜色渐变的背景图
 *
 *  @param colors 传递的颜色值
 *  @param frame  设置图片大小
 *
 *  @return 生成的图片
 */
+ (nullable UIImage *)gof_createGradientImage:(nullable NSArray *)colors withFrame:(CGRect)frame;

/**
 *  获得黑白照片
 *
 *  @param sourceImage 原图像
 *
 *  @return 返回黑白照片
 */
+ (nullable UIImage *)gof_covertToGrayImageFromImage:(nullable UIImage *)sourceImage;

@end
