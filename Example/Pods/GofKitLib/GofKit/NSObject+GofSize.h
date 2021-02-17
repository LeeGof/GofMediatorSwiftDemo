//
//  NSObject+GofSize.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSObject (GofSize)

/*!
 *
 * 获取文本的高度、宽度
 *
 * @return 适应的宽高
 */
+ (CGSize)gof_sizeWithFont:(UIFont *)font text:(NSString *)text maxWidth:(CGFloat)maxWidth;
+ (CGSize)gof_sizeWithFontSize:(CGFloat)fontSize text:(NSString *)text;
+ (CGSize)gof_sizeWithBoldFontSize:(CGFloat)fontSize text:(NSString *)text;
+ (CGSize)gof_sizeWithFontSize:(CGFloat)fontSize text:(NSString *)text maxWidth:(CGFloat)maxWidth;
+ (UIImage *)gof_thumbnailFromImage:(UIImage *)image;

@end
