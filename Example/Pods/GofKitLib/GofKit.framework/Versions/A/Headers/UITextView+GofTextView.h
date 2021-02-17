//
//  UITextView+GofTextView.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextView (GofTextView)

@property (nonatomic, copy) NSString *gof_placeholder;  //!<占位提示语
@property (nonatomic, strong) UIColor *gof_placeholderColor;  //!<占位提示语的字体颜色
@property (nonatomic, strong) UIFont  *gof_placeholderFont;  //!<占位提示语的字体
@property (nonatomic, strong, readonly) UILabel *gof_placeholderLabel;  //!<占位提示语标签

- (void)gof_placehoderTextChange:(NSNotification *)notification;

@end
