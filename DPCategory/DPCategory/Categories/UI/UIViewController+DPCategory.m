//
//  UIViewController+DPCategory.m
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/21.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "UIViewController+DPCategory.h"
#import "UIApplication+DPCategory.h"
@implementation UIViewController (DPCategory)
- (void)presentTransparentViewController:(UIViewController *)vc{
    vc.modalPresentationStyle = UIModalPresentationOverCurrentContext;
    
    [self presentViewController:vc animated:NO completion:nil];
}

- (void)presentedTransparentViewController:(UIViewController *)vc{
    self.modalPresentationStyle = UIModalPresentationOverCurrentContext;
    [vc presentViewController:self animated:NO completion:nil];
}
- (void)presentedFromViewController:(UIViewController *)vc{
    [vc presentViewController:self animated:YES completion:nil];
}

- (void)showInRootViewController{
    UIViewController *vc = [UIApplication currentTopViewController];
    [self presentedFromViewController:vc];
}

- (void)showAndDissmissAfterTime:(NSTimeInterval)time{
    if (time > 0) {
        UIViewController *vc = [UIApplication currentTopViewController];
        [vc presentViewController:self animated:YES completion:^{
            dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(time * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                [self dismissViewControllerAnimated:NO completion:nil];
            });
        }];
    }
}
@end
