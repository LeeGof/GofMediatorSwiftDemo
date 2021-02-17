//
//  GofBlock.h
//  常用Block定义
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#ifndef GofBlock_h
#define GofBlock_h

#define GofRunBlock(block, ...) if(block){block(__VA_ARGS__);}

#import <UIKit/UIKit.h>
@class MASConstraintMaker;

/**
 * 用于添加约束
 *
 * @param make 与Masonry的make一致
 */
typedef void(^GofConstraintMaker)(MASConstraintMaker *make);

/**
 * 只带一个error参数的失败闭包类型，主要用于处理失败回调
 *
 * @param error 错误对象
 */
typedef void (^GofErrorBlock)(NSError *error);

/**
 * 只带一个errorMessage参数的失败闭包类型，主要用于处理失败回调
 *
 * @param errorMessage 失败的提示文本
 */
typedef void (^GofErrorMessageBlock)(NSString *errorMessage);

/**
 * 通用的空闭包类型，无参数，无返回值
 */
typedef void (^GofVoidBlock)(void);

/**
 * 通知的Block类型
 *
 * @param notification 回调的通知类型
 */
typedef void (^GofNotificationBlock)(NSNotification *notification);

/**
 * 常用的返回Bool类型的Block类型
 *
 * @param result 返回结果，BOOL类型，通常是判断成功与失败
 */
typedef void (^GofBoolBlock)(BOOL result);

/**
 * 常用的返回Bool类型和相应提示语的Block类型
 *
 * @param result 返回结果，BOOL类型，通常是判断成功与失败
 * @param errorMsg 返回提示语，通常是成功与失败对应的提示语
 */
typedef void (^GofBoolMsgBlock)(BOOL result, NSString *errorMsg);

/**
 * 常用的返回数组类型的Block类型
 *
 * @param resultList 数组，通常是接口返回数据源为一个数组时使用
 */
typedef void (^GofArrayBlock)(NSArray *resultList);

/**
 * 常用的返回数组类型和错误提示语的Block类型
 *
 * @param resultList 数组，通常是接口返回数据源为一个数组时使用
 * @param errorMsg 如果出现错误，可以返回对应的错误提示，否则置为nil即可
 */
typedef void (^GofArrayMsgBlock)(NSArray *resultList, NSString *errorMsg);

/**
 * 常用的返回字典类型的Block类型
 *
 * @param resultDict 结果字典，通常是接口返回数据源为一个字典时使用
 */
typedef void (^GofDictionaryBlock)(NSDictionary *resultDict);

/**
 * 常用的返回字典类型的Block类型
 *
 * @param resultDict 结果字典，通常是接口返回数据源为一个字典时使用
 * @param errorMsg 如果出现错误，可以返回对应的错误提示，否则置为nil即可
 */
typedef void (^GofDictionaryMsgBlock)(NSDictionary *resultDict, NSString *errorMsg);

/**
 * 常用的返回基本类型的Block类型
 *
 * @param resultNumber 返回的结果，通常是接口返回数据源为一个基本类型时使用
 */
typedef void (^GofNumberBlock)(NSNumber *resultNumber);

/**
 * 常用的返回基本类型的Block类型
 *
 * @param resultNumber 返回的结果，通常是接口返回数据源为一个基本类型时使用
 * @param errorMsg 如果出现错误，可以返回对应的错误提示，否则置为nil即可
 */
typedef void (^GofNumberMsgBlock)(NSNumber *resultNumber, NSString *errorMsg);

/**
 * 常用的返回NSInteger类型的Block类型
 *
 * @param resultNumber 返回的结果，通常是接口返回数据源为一个NSInteger类型时使用
 */
typedef void (^GofIntegerBlock)(NSInteger resultNumber);

/**
 * 常用的返回NSInteger类型的Block类型
 *
 * @param resultNumber 返回的结果，通常是接口返回数据源为一个NSInteger类型时使用
 * @param errorMsg 如果出现错误，可以返回对应的错误提示，否则置为nil即可
 */
typedef void (^GofIntegerMsgBlock)(NSInteger resultNumber, NSString *errorMsg);

/**
 * 常用的返回NSString类型的Block类型
 *
 * @param result 返回的结果，通常是接口返回数据源为一个NSString类型时使用
 */
typedef void (^GofStringBlock)(NSString *result);

/**
 * 常用的返回NSString类型的Block类型
 *
 * @param result 返回的结果，通常是接口返回数据源为一个NSString类型时使用
 * @param errorMsg 如果出现错误，可以返回对应的错误提示，否则置为nil即可
 */
typedef void (^GofStringMsgBlock)(NSString *result, NSString *errorMsg);

/**
 * 常用的返回id类型的Block类型
 *
 * @param result 返回的结果，通常是接口返回数据源为一个id类型时使用
 */
typedef void (^GofIdBlock)(id result);

/**
 常用的返回UIImage的Block类型

 @param image 图片
 */
typedef void (^GofImageBlock)(UIImage *image);

/**
 * 常用的返回id类型的Block类型
 *
 * @param result 返回的结果，通常是接口返回数据源为一个id类型时使用
 * @param errorMsg 如果出现错误，可以返回对应的错误提示，否则置为nil即可
 */
typedef void (^GofIdMsgBlock)(id result, NSString *errorMsg);

/**
 * 常用的单个按钮点击回调的Block类型
 *
 * @param sender 响应的按钮
 */
typedef void(^GofButtonBlock)(UIButton *sender);

/**
 * 常用的多个按钮点击回调的Block类型
 *
 * @param index  响应的按钮对应的索引
 * @param sender 响应的按钮
 */
typedef void(^GofButtonIndexBlock)(NSInteger index, UIButton *sender);

/**
 * 常用的手势回调的Block类型
 *
 * @param sender 所触发的手势
 */
typedef void(^GofGestureBlock)(UIGestureRecognizer *sender);

/**
 * UISwitch控件类型的值改变时的回调block声明
 *
 * @param sender 响应的UISwitch控件
 */
typedef void(^GofSwitchValueChangedBlock)(UISwitch *sender);


/**
 * 能够添加值改变事件的控件的回调block声明
 *
 * @param sender 响应的控件
 */
typedef void(^GofValueChangedBlock)(id sender);

#endif /* GofBlock_h */
