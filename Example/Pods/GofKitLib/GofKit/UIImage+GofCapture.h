//
//  UIImage+GofCapture.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (GofCapture)

/**
 对指定视图进行截屏
 
 @param view 指定视图
 @return 截图
 */
+ (nullable UIImage *)gof_captureWithView:(nullable UIView *)view;

/**
 对ScrollView进行全屏截图
 
 @param view 指定的ScrollView(包括TableView)
 @return 截图
 */
+ (nullable UIImage *)gof_captureWithScrollView:(nullable UIScrollView *)view;

/**
 占位图

 @param bgColor 背景色
 @return 占位图
 */
+ (nullable UIImage *)gof_placeholderImageForArticle:(nullable UIColor *)bgColor;

+ (nullable UIImage *)gof_iconImage:(nullable UIColor *)bgColor;

@end
