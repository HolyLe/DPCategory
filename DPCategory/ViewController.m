//
//  ViewController.m
//  DPCategory
//
//  Created by 麻小亮 on 2019/6/3.
//  Copyright © 2019 麻小亮. All rights reserved.
//

#import "ViewController.h"
#import "DPCategory.h"
#import "NSFileManager+DPCategory.h"
@interface ViewController ()
@property (nonatomic, strong) UILabel * label;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    UILabelCreate()
    .makeChain
    .addToSuperView(self.view)
    .backgroundColor([UIColor grayColor])
    //如果项目导入masonry的话
    .makeMasonry(^(MASConstraintMaker * _Nonnull make) {
//        make.top.mas_offset(16);
//        make.centerX.equalTo(self.contentView);
//        make.width.height.mas_equalTo(100);
    })
    .assignTo(^(__kindof UIView * _Nonnull view) {
        self.label = view;
    });

    // Do any additional setup after loading the view.
}


@end
