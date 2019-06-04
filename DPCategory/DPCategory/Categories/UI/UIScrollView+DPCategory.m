//
//  UIScrollView+DPCategory.m
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/7.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "UIScrollView+DPCategory.h"

@implementation UIScrollView (DPCategory)
- (void)adJustedContentIOS11{
    if (@available(iOS 11.0, *)) {
        [self setContentInsetAdjustmentBehavior:UIScrollViewContentInsetAdjustmentNever];
    } else {
        
    }
}
@end
