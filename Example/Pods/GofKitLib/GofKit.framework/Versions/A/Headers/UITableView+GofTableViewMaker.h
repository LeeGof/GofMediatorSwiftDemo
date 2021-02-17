//
//  UITableView+GofTableViewMaker.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GofBlock.h"

@interface UITableView (GofTableViewMaker)

/**
 创建UITableView

 @param delegate 代理
 @param style 表格样式
 @return UITableView
 */
+ (instancetype)gof_tableViewWithDelegate:(id)delegate
                                     style:(UITableViewStyle)style;

/**
 创建UITableView

 @param delegate 代理
 @param style 表格样式
 @param superView 父视图
 @param constraints 约束
 @return UITableView
 */
+ (instancetype)gof_tableViewWithDelegate:(id)delegate
                                     style:(UITableViewStyle)style
                                 superView:(UIView *)superView
                               constraints:(GofConstraintMaker)constraints;

@end
