//
//  NSObject+GofObject.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define KEY_CLASS_NAME @"GE_KEY_CLASS_NAME"

@interface NSObject (GofObject)

/**
 *  将 JSON 对象(數組對象或字典對象) 转为 JSON 字符串
 *
 *  @return JSON 字符串
 */
- (NSString*)gof_JSONString;


/**
 *  將組合對象（非數組或字典，亦非含有組合對象的組合對象，目前只支持一級組合對象）轉成序列化的字串，目前還不能轉CGPoint等，圖片要轉成NSData才可用；主要用於數據庫存儲
 *
 *  @return JSON 字符串
 */
-(NSString*)gof_serializedString;

/**
 *
 * 获取类名称
 */
- (NSString *)gof_className;

/*!
 *
 * @brief 把角度与弧度值互转
 *
 * @return 返回对应的弧度值/角度值
 */
+ (CGFloat)gof_degreesToRadian:(CGFloat)degree;
+ (CGFloat)gof_randianToDegrees:(CGFloat)radian;

/**
 *
 *  Create a random integer between the given range
 *
 *  @param minValue Mininum random value
 *  @param maxValue Maxinum random value
 *
 *  @return Return the created random integer
 */
+ (NSInteger)gof_randomIntBetweenMin:(NSInteger)minValue
                              andMax:(NSInteger)maxValue;

/**
 *
 *  Create a random float
 *
 *  @return Return the created random float
 */
+ (CGFloat)gof_randomFloat;

/**
 *
 *  Create a random float between the given range
 *
 *  @param minValue Mininum random value
 *  @param maxValue Maxinum random value
 *
 *  @return Return the created random float
 */
+ (CGFloat)gof_randomFloatBetweenMin:(CGFloat)minValue
                              andMax:(CGFloat)maxValue;

/*
 *
 * @brief 把对象转换成JSON格式数据
 *
 * @param object OC类型对象
 * @return 如果转换失败，返回nil，否则返回JSON格式数据
 */
+ (NSMutableData *)gof_JSONDataWithObject:(id)object;
+ (NSString *)gof_JSONStringWithObject:(id)object;

/*
 *
 * @brief 判断本机是否安装了某个应用，该应用是自己公司的产品
 *
 * @param urlSchemes 要判断的应用的URLSchemes，该参数值是由要判断的应用工程上配置的URLSchemes参数
 *
 * @return 返回YES表示本机已经安装了该应用，返回NO表示该应用未被安装
 */
+ (BOOL)gof_hasLocalInstallApp:(NSString *)urlSchemes;

/*
 *
 * @brief 判断能否打开指定的Itunes应用的链接
 *
 * @param itunesUrlString 要打开在Itunes上的应用的链接
 *
 * @return 返回YES表示可以打开该链接，返回NO表示无法打开该链接
 */
+ (BOOL)gof_canOpenApp:(NSString *)itunesUrlString;

/*
 *
 * @brief 在本机调起指定的应用
 *
 * @param urlSchemes 要判断的应用的URLSchemes，该参数值是由要调起的应用工程上配置的URLSchemes参数
 */
+ (void)gof_openLocalApp:(NSString *)urlSchemes;

/*
 *
 * @brief 进入APP Store
 *
 * @param itunesUrlString 要打开在Itunes上的应用的链接
 */
+ (void)gof_openAppStore:(NSString *)itunesUrlString;

/**
 *
 *  移除所有值为null的key-value
 *
 *  @param object OC-OBJECT
 */
+ (id)gof_removeNullFromObject:(id)object;

@end
