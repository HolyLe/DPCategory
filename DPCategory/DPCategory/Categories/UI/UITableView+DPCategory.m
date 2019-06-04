//
//  UITableView+DPCategory.m
//  WisdomTree
//
//  Created by 麻小亮 on 2018/12/19.
//  Copyright © 2018 able-elec. All rights reserved.
//

#import "UITableView+DPCategory.h"
#import "UIScrollView+DPCategory.h"
@implementation UITableView (DPCategory)
+ (UITableView *)tableViewStyle:(UITableViewStyle)style{
    UITableView *tableView = [[UITableView alloc] initWithFrame:CGRectZero style:style];
    tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    tableView.backgroundColor = [UIColor whiteColor];
    tableView.showsVerticalScrollIndicator = NO;
    tableView.showsHorizontalScrollIndicator = NO;
    return tableView;
}

- (void)adJustedContentIOS11{
    if (@available(iOS 11.0, *)) {
        [self setContentInsetAdjustmentBehavior:UIScrollViewContentInsetAdjustmentNever];
        self.estimatedRowHeight = 0;
        self.estimatedSectionHeaderHeight = 0;
        self.estimatedSectionFooterHeight = 0;
    }
}
@end
