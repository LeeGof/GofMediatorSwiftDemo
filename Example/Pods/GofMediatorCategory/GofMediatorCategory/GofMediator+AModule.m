//
//  GofMediator+AModule.m
//  GofMediatorCategory_Example
//
//  Created by 李高峰 on 2021/2/17.
//  Copyright © 2021 LeeGof. All rights reserved.
//

#import "GofMediator+AModule.h"

@implementation GofMediator (AModule)

- (UIViewController *)gof_AViewControllerWithCallback:(void (^)(NSString *))callback {
    NSMutableDictionary *params = [[NSMutableDictionary alloc] init];
    params[@"callBack"] = callback;
    return [self gof_performNativeWithTarget:@"A" action:@"AViewCtrl" params:params];
}

@end
