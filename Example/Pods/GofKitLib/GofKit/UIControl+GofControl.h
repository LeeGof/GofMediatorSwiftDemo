//
//  UIControl+GofControl.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GofBlock.h"

@interface UIControl (GofControl)

@property (nonatomic, copy) NSString *gof_controlName;  //!<控件名称
@property (nonatomic, copy) GofButtonBlock gof_touchDown;  //!<按钮按下事件回调
@property (nonatomic, copy) GofButtonBlock gof_touchUp;  //!<按钮松开事件回调
@property (nonatomic, copy) GofValueChangedBlock gof_valueChangedBlock;  //!<值改变时的回调block
@property (nonatomic, assign) NSTimeInterval gof_acceptEventInterval;  //!<重复点击时间间隔

@end
