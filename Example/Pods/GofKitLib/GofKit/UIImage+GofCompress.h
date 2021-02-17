//
//  UIImage+GofCompress.h
//  图片压缩
//
//  Created by LeeGof on 2018/2/10.
//  Copyright © 2018年 GofLee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (GofCompress)

/**
 图片压缩

 @param targetWidth 目标宽度
 @param maxFileSize 文件大小上线
 @return 压缩后图片
 */
- (NSData *)gof_compressionImageToDataTargetWidth:(CGFloat)targetWidth maxFileSize:(NSInteger)maxFileSize;

@end
