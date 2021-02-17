//
//  UIColor+GofColor.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (GofColor)

@property (nonatomic, readonly) CGColorSpaceModel colorSpaceModel;
@property (nonatomic, readonly) BOOL canProvideRGBComponents;
@property (nonatomic, readonly) CGFloat red;
@property (nonatomic, readonly) CGFloat green;
@property (nonatomic, readonly) CGFloat blue;
@property (nonatomic, readonly) CGFloat white;
@property (nonatomic, readonly) CGFloat alpha;

/**
 根据颜色生成图片
 
 @param color 指定的颜色，用于生成图片
 @return 返回图片对象，默认大小为1*1
 */
+ (UIImage *)gof_imageWithColor:(UIColor *)color;

/**
 根据颜色生成图片
 
 @param color 指定的颜色，用于生成图片
 @param size 指定生成的图片的大小
 @return 返回图片对象
 */
+ (UIImage *)gof_imageWithColor:(UIColor *)color size:(CGSize)size;

/**
 使用UIColor和alpha创建UIColor
 
 @param color 原始UIColor
 @param alpha alpha
 @return 使用UIColor和alpha创建的UIColor实例
 */
+ (UIColor *)gof_colorWithColor:(UIColor *)color
                          alpha:(float)alpha;

/**
 使用HEX string创建UIColor
 
 @param hexString HEX string，例如：#ffffff
 @return UIColor实例
 */
+ (UIColor *)gof_colorWithHexString:(NSString *)hexString;

/**
 使用HEX string和alpha创建UIColor
 
 @param hexString HEX string，例如：#ffffff
 @param alpha 颜色alpha值,取0-1
 @return UIColor实例
 */
+ (UIColor *)gof_colorWithHexString:(NSString *)hexString
                           andAlpha:(CGFloat)alpha;

/**
 使用16进制数创建UIColor
 
 @param hex 16进制数，例如：0xffffff
 @return UIColor实例
 */
+ (UIColor *)gof_colorWithHex:(unsigned int)hex;

/**
 使用16进制数和alpha创建UIColor
 
 @param hex 16进制数，例如：0xffffff
 @param alpha alpha
 @return UIColor实例
 */
+ (UIColor *)gof_colorWithHex:(unsigned int)hex
                        alpha:(float)alpha;

@end
