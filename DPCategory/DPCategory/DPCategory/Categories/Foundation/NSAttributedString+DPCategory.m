//
//  NSAttributedString+DPCategory.m
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/3.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "NSAttributedString+DPCategory.h"

@implementation NSAttributedString (DPCategory)
- (CGSize)sizeWithLimitSize:(CGSize)size{
    CGRect strRect = [self boundingRectWithSize:size options:(NSStringDrawingUsesLineFragmentOrigin|NSStringDrawingUsesFontLeading) context:nil];
    return strRect.size;
}

- (CGSize)sizeWithoutLimitSize{
    return [self sizeWithLimitSize:CGSizeMake(MAXFLOAT, MAXFLOAT)];
}
@end
