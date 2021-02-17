//
//  GofMediator+GofBModule.m
//  GofMediatorCategory_Example
//
//  Created by 李高峰 on 2021/2/17.
//  Copyright © 2021 LeeGof. All rights reserved.
//

#import "GofMediator+GofBModule.h"

@implementation GofMediator (GofBModule)

- (UIViewController *)gof_BViewControllerWithCallback:(void (^)(NSString *))callback {
    NSMutableDictionary *params = [[NSMutableDictionary alloc] init];
    params[@"callBack"] = callback;
    params[kMediatorSwiftModuleNameKey] = @"GofBModule";
    return [self gof_performNativeWithTarget:@"B" action:@"CategoryBViewCtrl" params:params];
}

@end
