//
//  GofAViewController.m
//  GofAModule
//
//  Created by 李高峰 on 2021/2/16.
//

#import "GofAViewController.h"
#import "UIButton+GofButtonMaker.h"
#import "Masonry.h"
#import "GofAlertController.h"

@interface GofAViewController ()

/// 弹框按钮
@property (nonatomic, strong) UIButton *btnAlert;

@end

@implementation GofAViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self.view addSubview:self.btnAlert];
    [self.btnAlert mas_makeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(10);
        make.right.mas_equalTo(-10);
        make.top.mas_equalTo(100);
        make.height.mas_equalTo(40);
    }];
}

#pragma mark - Getter

- (UIButton *)btnAlert {
    if (nil == _btnAlert) {
        _btnAlert = [UIButton gof_buttonWithTitle:@"弹框" touchUp:^(UIButton *sender) {
            [GofAlertController gof_showAlertControllerWithTitle:@"弹框看看" cancelTitle:@"确定" cancelBlock:^{
                NSLog(@"点击了确定");
            } sender:self controller:nil completion:nil];
        }];
        _btnAlert.backgroundColor = [UIColor blueColor];
        [_btnAlert setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    }
    return _btnAlert;
}

@end
