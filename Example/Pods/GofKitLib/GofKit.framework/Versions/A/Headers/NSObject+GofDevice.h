//
//  NSObject+GofDevice.h
//  GofKitDemo
//
//  Created by LeeGof on 2019/7/27.
//  Copyright © 2019 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (GofDevice)

/**
 是否iPhone4设备

 @return YES/NO
 */
+ (BOOL)gof_isiPhone4;

/**
 是否iPhone5设备

 @return YES/NO
 */
+ (BOOL)gof_isiPhone5;

/**
 是否iPhonePlus设备

 @return YES/NO
 */
+ (BOOL)gof_isiPhonePlus;

/**
 是否iPhone X系列设备

 @return YES/NO
 */
+ (BOOL)gof_isiPhoneXSerial;

/**
 是否iPhone X或XS设备

 @return YES/NO
 */
+ (BOOL)gof_isiPhoneXOrXS;

/**
 是否iPhone XR设备

 @return YES/NO
 */
+ (BOOL)gof_isiPhoneXR;

/**
 是否iPhoneXSMax设备

 @return YES/NO
 */
+ (BOOL)gof_isiPhoneXSMax;

@end

NS_ASSUME_NONNULL_END
