//
//  UIButton+DPCategory.h
//  WisdomTree
//
//  Created by 麻小亮 on 2018/12/18.
//  Copyright © 2018 able-elec. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UILabel+DPCategory.h"
NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, DPButtonImageDirection) {
    DPButtonImageDirectionTop,
    DPButtonImageDirectionLeft,
    DPButtonImageDirectionRight,
    DPButtonImageDirectionBottom,
};
@interface UIButton (DPCategory)

- (void)imageDirection:(DPButtonImageDirection)direction space:(CGFloat)space;
@end

NS_ASSUME_NONNULL_END
