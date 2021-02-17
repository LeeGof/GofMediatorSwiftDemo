//
//  GofTargetA.m
//  GofAModule_Example
//
//  Created by 李高峰 on 2021/2/16.
//  Copyright © 2021 LeeGof. All rights reserved.
//

#import "GofTargetA.h"
#import "GofBlock.h"
#import "GofAViewController.h"

@implementation GofTargetA

- (UIViewController *)action_AViewCtrl:(NSDictionary *)params {
    GofStringBlock callBack = params[@"callBack"];
    GofRunBlock(callBack, @"Success");
    GofAViewController *vc = [[GofAViewController alloc] init];
    return vc;
}

@end
