//
//  GofVerticalLabel.h
//  Gof135Editor
//
//  Created by LeeGof on 2017/9/10.
//  Copyright © 2017年 GofLee. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_OPTIONS(NSInteger, GofVerticalAlignment) {
    GofVerticalAlignmentTop = 1,
    GofVerticalAlignmentMiddle,
    GofVerticalAlignmentBottom
};

@interface GofVerticalLabel : UILabel

@property (nonatomic, assign) GofVerticalAlignment gof_verticalAlignment;

@end
