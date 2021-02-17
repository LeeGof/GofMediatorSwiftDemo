//
//  GofConst.h
//  常用常量定义
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NSObject+GofDevice.h"

#ifndef GofConst_h
#define GofConst_h

#define kGofLoading @"正在加载..."

#pragma mark - Path

#define kDocumentPath [NSHomeDirectory() stringByAppendingPathComponent:@"Documents"]
#define kLibraryPath [NSHomeDirectory() stringByAppendingPathComponent:@"Library"]
#define kTempPath NSTemporaryDirectory()

#pragma mark - Size

#define kScreenWidth ([UIScreen mainScreen].bounds.size.width)  //屏幕宽度
#define kScreenHeight ([UIScreen mainScreen].bounds.size.height)  //屏幕高度
#define iPhoneX ([NSObject gof_isiPhoneXSerial])
static const float kNavigationBarHeight = 44.0f;  //导航栏高度(不加状态栏高度）
#define kStatusBarHeight (iPhoneX ? 44.0f : 20.0f)  //状态栏高度
#define kBottomHeight (iPhoneX ? 83.0f : 49.0f)  //TabBar的高度
static const float kCornerRadius = 3.0f;  //圆角大小
static const float kLineHeight = 0.5f;  //线高，一般用于表格行分割线
static const float kPadding5 = 5.0f;
static const float kPadding10 = 10.0f;
static const float kPadding15 = 15.0f;
static const float kPadding20 = 20.0f;
static const float kHeight30 = 30.0f;
static const float kHeight40 = 40.0f;
static const NSInteger kPageSize = 20;
static const float kButtonTimeInterval = 0.5f;  //按钮连续点击间隔

#pragma mark - Strong/Weak

#define kWeakObject(object) __weak __typeof(object) weakObject = object;
#define kStrongObject(object) __strong __typedef(object) strongObject = object;

#pragma mark - GCD

#define kMainThread (dispatch_get_main_queue())
#define kGlobalThread dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0)

// 主线程延迟执行  second = 秒/ block = ^(){}
#define kDispathAfter(second, block) dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(second * NSEC_PER_SEC)), dispatch_get_main_queue(),block);

#pragma mark - Version

#define kSystemVersion ([UIDevice currentDevice].systemVersion.floatValue)
#define kAppVersion [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleShortVersionString"]
#define kIsIOSXOrLater(version) ([UIDevice currentDevice].systemVersion.integerValue >= version ? YES : NO)
#define iPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone6Plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)

#pragma mark - Image加载

#define kImageWithName(Name) ([UIImage imageNamed:Name])
#define kBigImageWithName(Name) ([UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:Name ofType:nil]])

#pragma mark - Font

#define kFontWithSize(size) [UIFont systemFontOfSize:size]
#define kBoldFontWithSize(size) [UIFont boldSystemFontOfSize:size]

#pragma mark - Color

///< format：0xFFFFFF
#define kColorWith16RGB(rgbValue) \
[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16)) / 255.0 \
green:((float)((rgbValue & 0xFF00) >> 8)) / 255.0 \
blue:((float)(rgbValue & 0xFF)) / 255.0 alpha:1.0]
#define kColorWith16RGBAndAlpha(rgbValue,alphaValue) \
[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16)) / 255.0 \
green:((float)((rgbValue & 0xFF00) >> 8)) / 255.0 \
blue:((float)(rgbValue & 0xFF)) / 255.0 alpha:alphaValue]
#define kBColor kColorWith16RGB(0x000000)  // 黑色
#define kRColor kColorWith16RGB(0xff0000)  // 红色
#define kWColor kColorWith16RGB(0xffffff)  // 白色
#define kCColor [UIColor clearColor]  // 无色
#define kBgColor  kColorWith16RGB(0xf2f2f2) // 界面背景灰色
#define kMainColor kColorWith16RGB(0xff6203) //主题色
#define kSplitColor kColorWith16RGB(0xdedede)  //分割线颜色

#define kG1Color kColorWith16RGB(0x333333)
#define kG2Color kColorWith16RGB(0x666666)
#define kG3Color kColorWith16RGB(0x999999)
#define kG4Color kColorWith16RGB(0xfafafa)
#define kG5Color kColorWith16RGB(0xe5e5e5)
#define kG6Color kColorWith16RGB(0x7c7979)
#define kG7Color kColorWith16RGB(0xf0efef)
#define kG8Color kColorWith16RGB(0xed6c2d)
#define kG9Color kColorWith16RGB(0xee7b1f)
#define kG10Color kColorWith16RGB(0xf3f9fd)

#define kHolderTipColor kColorWith16RGB(0xafafaf) // 提示：输入框，提示语的颜色

#pragma mark - SystemSingleton

#define kUserDefault [NSUserDefaults standardUserDefaults]
#define kNotificationCenter [NSNotificationCenter defaultCenter]

#pragma mark - Notification

#define kPostNotificationWithName(notificationName) \
[kNotificationCenter postNotificationName:notificationName object:nil userInfo:nil]
#define kPostNotificationWithNameAndUserInfo(notificationName, userInfo) \
[kNotificationCenter postNotificationName:notificationName object:nil userInfo:userInfo]

#pragma mark - Singleton

#define GofSingletonInterface(__clazz) \
+ (__clazz *)sharedInstance;

#define GofSingletonImplement(__clazz) \
+ (__clazz *)sharedInstance \
{\
static dispatch_once_t once; \
static __clazz * __singletion;\
dispatch_once(&once,^{__singletion = [[__clazz alloc] init];});\
return __singletion;\
}

#pragma mark - Null Verify

#define kIsEmptyString(s) (s == nil || [s isKindOfClass:[NSNull class]] || ([s isKindOfClass:[NSString class]] && s.length == 0))  //空字符串校验
#define kIsNull(obj) ([obj isKindOfClass:[NSNull class]])  //空对象校验
#define kIsInvalidDict(objDict) (objDict == nil || ![objDict isKindOfClass:[NSDictionary class]])  //是否是无效字典
#define kIsInvalidArray(objArray) (objArray == nil || ![objArray isKindOfClass:[NSArray class]])  //是否是无效数组

#pragma mark - Localized
#define kCurrentLanguage ([[NSLocale preferredLanguages] objectAtIndex:0])   //当前的设备的默认语言
#define GofLoginLocalizedFromTable(key) NSLocalizedStringFromTable(key, @"LoginLocalizable", nil)

#pragma mark - DEBUG

#ifdef DEBUG
#define GofAppLog(s, ... ) NSLog( @"[%@：in line: %d]-->[message: %@]", [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, [NSString stringWithFormat:(s), ##__VA_ARGS__] )
#else
#define GofAppLog(s, ... )
#endif

#pragma mark - Warnings

#define Suppress_Perform_Selector_Leak_Warning(code)                    \
_Pragma("clang diagnostic push")                                        \
_Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"")     \
code;                                                                   \
_Pragma("clang diagnostic pop")

#endif /* GofConst_h */
