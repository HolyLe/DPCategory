//
//  NSAttributedString+DPCategory.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/3.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSAttributedString (DPCategory)
- (CGSize)sizeWithLimitSize:(CGSize)size;

- (CGSize)sizeWithoutLimitSize;
@end

NS_ASSUME_NONNULL_END
