//
//  NSMutableAttributedString+GofAttributeString.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/2.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreText/CoreText.h>
#import <UIKit/UIKit.h>

@interface NSMutableAttributedString (GofAttributeString)

/**
 富文本文字初始化(默认文本居左对齐, 字体颜色为黑色)
 
 @param title 富文本内容
 @param font 字体大小
 @param lineSpace 段落间距
 @return 返回创建的富文本
 */
+ (NSMutableAttributedString *)gof_attributeTitleWithTitle:(NSString *)title
                                                      font:(UIFont *)font
                                                 lineSpace:(CGFloat)lineSpace;


/**
 富文本初始化
 
 @param title 富文本内容
 @param font 字体大小
 @param textAlign 字体所在位置
 @param lineSpace 段落间距
 @param color 字体颜色
 @return 返回创建的富文本
 */
+ (NSMutableAttributedString *)gof_attributeTitleWithTitle:(NSString *)title
                                                      font:(UIFont *)font
                                                 textAlign:(NSTextAlignment)textAlign
                                                 lineSpace:(CGFloat)lineSpace
                                                     color:(UIColor *)color;


/**
 多段不同颜色的富文本
 
 @param title 富文本内容
 @param font 字体大小
 @param defaultColor 默认文本颜色
 @param attributeColor 可变文本颜色
 @param defaultIndex 默认文本的末尾下标
 @param attributedLength 可变颜色文本的长度
 @return 返回创建的富文本
 */
+ (NSMutableAttributedString *)gof_attributeTitleWithTitle:(NSString *)title
                                                      font:(UIFont *)font
                                              defaultColor:(UIColor *)defaultColor
                                            attributeColor:(UIColor *)attributeColor
                                              defaultIndex:(NSUInteger)defaultIndex
                                          attributedLength:(NSUInteger)attributedLength;

/**
 多段不同颜色的富文本
 
 @param title 富文本内容
 @param font 字体大小
 @param defaultColor 默认文本颜色
 @param attributeColor 可变文本颜色
 @param defaultIndex 默认文本的末尾下标
 @param attributedLength 可变颜色文本的长度
 @param lineSpace 段落间距
 @return 返回创建的富文本
 */
+ (NSMutableAttributedString *)gof_attributeTitleWithTitle:(NSString *)title
                                                      font:(UIFont *)font
                                              defaultColor:(UIColor *)defaultColor
                                            attributeColor:(UIColor *)attributeColor
                                              defaultIndex:(NSUInteger)defaultIndex
                                          attributedLength:(NSUInteger)attributedLength
                                                 lineSpace:(CGFloat)lineSpace;

/**
 富文本高度
 
 @param string 富文本内容
 @param font 字体
 @param lineSpace 段落间距
 @param width 宽度
 @return 返回富文本计算的高度
 */
+ (CGFloat)gof_heigthWithString:(NSString *)string
                           font:(UIFont *)font
                      lineSpace:(CGFloat)lineSpace
                          width:(CGFloat)width;


/**
 多行文本的高度
 
 @param line 行数
 @param font 字体
 @param lineSpace 段落间距
 @param width 宽度
 @return 返回计算高度
 */
+ (CGFloat)gof_heigthWithNumberOfLine:(int)line
                                 font:(UIFont *)font
                            lineSpace:(CGFloat)lineSpace
                                width:(CGFloat)width;

/*
 设置文字颜色
 */
- (void)gof_addAttributeTextColor:(UIColor *)color;
- (void)gof_addAttributeTextColor:(UIColor *)color range:(NSRange)range;

/*
 设置字体
 */
- (void)gof_addAttributeFont:(UIFont *)font;
- (void)gof_addAttributeFont:(UIFont *)font range:(NSRange)range;

/*
 设置字符间隔
 unichar：unsigned short unichar
 */
- (void)gof_addAttributeCharacterSpacing:(unichar)characterSpacing;
- (void)gof_addAttributeCharacterSpacing:(unichar)characterSpacing range:(NSRange)range;

/*
 设置下划线
 CTUnderlineStyle:下划线风格
 CTUnderlineStyleModifiers：实线还是虚线
 */
- (void)gof_addAttributeUnderlineStyle:(CTUnderlineStyle)style
                              modifier:(CTUnderlineStyleModifiers)modifier;

- (void)gof_addAttributeUnderlineStyle:(CTUnderlineStyle)style
                              modifier:(CTUnderlineStyleModifiers)modifier
                                 range:(NSRange)range;

/*
 设置字行间距
 CTTextAlignment:文字对齐方式
 CTLineBreakMode：文字截取方式
 */
- (void)gof_addAttributeAlignmentStyle:(NSTextAlignment)textAlignment
                        lineSpaceStyle:(CGFloat)linesSpacing
                        lineBreakStyle:(NSLineBreakMode)lineBreakMode;

- (void)gof_addAttributeAlignmentStyle:(NSTextAlignment)textAlignment
                        lineSpaceStyle:(CGFloat)linesSpacing
                        lineBreakStyle:(NSLineBreakMode)lineBreakMode
                                 range:(NSRange)range;

@end
