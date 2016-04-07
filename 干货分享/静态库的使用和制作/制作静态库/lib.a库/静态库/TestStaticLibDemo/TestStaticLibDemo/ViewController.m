//
//  ViewController.m
//  TestStaticLibDemo
//
//  Created by lzxuan on 16/3/3.
//  Copyright © 2016年 lzxuan. All rights reserved.
//

#import "ViewController.h"
#import "MyControl.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    UILabel *label = [MyControl creatLabelWithFrame:CGRectMake(0, 100, 320, 100) text:@"测试静态库"];
    label.backgroundColor = [UIColor redColor];
    [self.view addSubview:label];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
