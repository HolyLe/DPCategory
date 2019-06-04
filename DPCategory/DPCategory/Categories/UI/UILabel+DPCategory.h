//
//  UILabel+DPCategory.h
//  WisdomTree
//
//  Created by 麻小亮 on 2018/12/18.
//  Copyright © 2018 able-elec. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NSString+DPCategory.h"
NS_ASSUME_NONNULL_BEGIN

@interface UILabel (DPCategory)

- (CGSize)sizeWithLimitSize:(CGSize)size;

- (CGSize)sizeWithoutLimitSize;

@end

NS_ASSUME_NONNULL_END
