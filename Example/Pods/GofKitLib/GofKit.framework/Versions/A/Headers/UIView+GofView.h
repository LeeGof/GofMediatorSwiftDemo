//
//  UIView+GofView.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GofBlock.h"

typedef enum {
    UIViewHierarchyExploreStyleNumberLevel=0,
    UIViewHierarchyExploreStyleDash,
    UIViewHierarchyExploreStyleDashAndDetail
}UIViewHierarchyExploreStyle;

@interface UIView (GofView)

#pragma mark - 常用frame相关API
/**
 * view.frame.origin.x
 */
@property (nonatomic, assign) CGFloat gof_originX;

/**
 * view.frame.origin.y
 */
@property (nonatomic, assign) CGFloat gof_originY;

/**
 * view.frame.origin
 */
@property (nonatomic, assign) CGPoint gof_origin;

/**
 * view.center.x
 */
@property (nonatomic, assign) CGFloat gof_centerX;

/**
 * view.center.y
 */
@property (nonatomic, assign) CGFloat gof_centerY;

/**
 * view.center
 */
@property (nonatomic, assign) CGPoint gof_center;

/**
 * view.frame.size.width
 */
@property (nonatomic, assign) CGFloat gof_width;

/**
 * view.frame.size.height
 */
@property (nonatomic, assign) CGFloat gof_height;

/**
 * view.frame.size
 */
@property (nonatomic, assign) CGSize  gof_size;

/**
 * view.frame.size.height + view.frame.origin.y
 */
@property (nonatomic, assign) CGFloat gof_bottomY;

/**
 * view.frame.size.width + view.frame.origin.x
 */
@property (nonatomic, assign) CGFloat gof_rightX;

#pragma mark - 手势相关
/**
 *
 * 通过-gof_addTapGestureWithCompletion:方法添加的手势，可通过此属性获取
 */
@property (nonatomic, strong, readonly) UITapGestureRecognizer *gof_tapGetsure;

/**
 *
 * 通过-gof_addLongPressGestureWithCompletion:方法添加的手势，可通过此属性获取
 */
@property (nonatomic, strong, readonly) UILongPressGestureRecognizer *gof_longPressGesture;

#pragma mark xib创建视图

/**
 xib创建视图
 
 @return 创建视图对象
 */
+ (id)gof_viewWithNib;

#pragma mark - 视图操作

/**
 *
 *  移除所有子视图
 */
- (void)gof_removeAllSubviews;

#pragma mark - 截图

/**
 *
 *  对当前视图截图
 */
- (UIImage *)gof_captureScreenshot;

#pragma mark - 淡入淡出效果

/**
 *
 *  添加淡入淡出效果
 *
 *  @param duration 动画时长
 */
- (void)gof_fadeWithDuration:(NSTimeInterval)duration;

/**
 *
 *  给指定的视图添加淡入淡出的效果
 *
 *  @param fadeView 视图
 *  @param duration 动画时长
 */
+ (void)gof_fadeInWithView:(UIView *)fadeView duration:(NSTimeInterval)duration;

#pragma mark - Gesture

/**
 *
 *  给UIView添加Tap手势
 *
 *  @param completion 触发手势时的回调
 */
- (UITapGestureRecognizer *)gof_addTapGestureWithCompletion:(GofGestureBlock)completion;

/**
 *
 * 移除调用-gof_addTapGestureWithCompletion: API添加的手势
 */
- (void)gof_removeTapGesture;

/**
 *
 *  @brief  给UIView添加LongPress手势
 *
 *  @param completion 触发长按手势时的回调
 */
- (void)gof_addLongPressGestureWithCompletion:(GofGestureBlock)completion;

/**
 *
 * 移除调用-gof_addLongPressGestureWithCompletion: API添加的手势
 */
- (void)gof_removeLongPressGesture;

#pragma mark - UIView  Method
/*!
 *
 *  @brief  设置默认圆角为 4
 */
- (void)gof_adjustRadiusByDefault;

/*!
 *
 *  @brief  设置圆角
 *
 *  @param radius  圆角值
 */
- (void)gof_adjustRadius:(CGFloat)radius;

/// 设置圆角
/// @param radius 圆角值
/// @param corners 指定位置(UIRectCornerTopLeft|UIRectCornerTopRight|UIRectCornerBottomLeft|UIRectCornerBottomRight|UIRectCornerAllCorners)
- (void)gof_adjustPathRadius:(CGFloat)radius corners:(UIRectCorner)corners;

/*!
 *
 *  @brief  设置圆角 和 边框的颜色
 *
 *  @param radius  圆角值
 *  @param color   颜色值
 */
- (void)gof_adjustBorder:(CGFloat) radius color:(UIColor *) color;

- (void)gof_exploreHierarchy:(int)level withStyle:(UIViewHierarchyExploreStyle)style;

/**
 *  返回所有的指定类型的后代，包括自己
 *
 *  @param className 类型
 *
 *  @return 后代数组
 */
- (NSArray*)gof_subviewsOfClass:(NSString*)className;

- (void)gof_showAnimated:(BOOL)animated;
- (void)gof_showAnimated:(BOOL)animated completion:(void(^)(void))completion;
- (void)gof_hideAndRemoveAnimated:(BOOL)animated;

@end
