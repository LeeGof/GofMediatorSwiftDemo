//
//  UIGestureRecognizer+GofGesture.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GofBlock.h"

/**
 * 长按手势通用的block
 *
 * @param sender 手势对象
 */
typedef void(^GofLongGestureBlock)(UILongPressGestureRecognizer *sender);

@interface UIGestureRecognizer (GofGesture)

@property (nonatomic, copy) GofGestureBlock gof_gestureBlock;  //!<UIGestureRecognizer点击手势的block版本回调
@property (nonatomic, copy) GofLongGestureBlock gof_longGestureBlock;  //!<UILongGestureRecognizer点击手势的block版本回调

@end
