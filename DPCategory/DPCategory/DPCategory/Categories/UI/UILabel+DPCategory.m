//
//  UILabel+DPCategory.m
//  WisdomTree
//
//  Created by 麻小亮 on 2018/12/18.
//  Copyright © 2018 able-elec. All rights reserved.
//

#import "UILabel+DPCategory.h"
#import "NSString+DPCategory.h"
#import "NSAttributedString+DPCategory.h"
@implementation UILabel (DPCategory)

- (CGSize)sizeWithoutLimitSize{
    return [self sizeWithLimitSize:CGSizeMake(MAXFLOAT, MAXFLOAT)];
}

- (CGSize)sizeWithLimitSize:(CGSize)size{
    return [self.text sizeWithAttributes:@{NSFontAttributeName:self.font} limitSize:size];
}

@end
