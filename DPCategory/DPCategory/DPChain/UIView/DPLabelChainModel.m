//
//  DPLabelChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/27.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPLabelChainModel.h"
#import "UILabel+DPCategory.h"
#define DPCATEGORY_CHAIN_LABLE_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_VIEWCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPLabelChainModel *,UILabel)
@implementation DPLabelChainModel

DPCATEGORY_CHAIN_LABLE_IMPLEMENTATION(text, NSString *);
DPCATEGORY_CHAIN_LABLE_IMPLEMENTATION(font, UIFont *);
DPCATEGORY_CHAIN_LABLE_IMPLEMENTATION(textColor, UIColor *);
DPCATEGORY_CHAIN_LABLE_IMPLEMENTATION(attributedText, NSAttributedString *);
DPCATEGORY_CHAIN_LABLE_IMPLEMENTATION(textAlignment, NSTextAlignment);
DPCATEGORY_CHAIN_LABLE_IMPLEMENTATION(numberOfLines, NSInteger);
DPCATEGORY_CHAIN_LABLE_IMPLEMENTATION(lineBreakMode, NSLineBreakMode);
DPCATEGORY_CHAIN_LABLE_IMPLEMENTATION(adjustsFontSizeToFitWidth, BOOL);
DPCATEGORY_CHAIN_LABLE_IMPLEMENTATION(baselineAdjustment, UIBaselineAdjustment);
DPCATEGORY_CHAIN_LABLE_IMPLEMENTATION(allowsDefaultTighteningForTruncation, BOOL);
DPCATEGORY_CHAIN_LABLE_IMPLEMENTATION(preferredMaxLayoutWidth, CGFloat);
DPCATEGORY_CHAIN_LABLE_IMPLEMENTATION(minimumScaleFactor, CGFloat);
- (CGSize (^)(CGSize))sizeWithLimitSize{
    return ^ (CGSize size){
        return [(UILabel *)self.view sizeWithLimitSize:size];
    };
}

- (CGSize (^)(void))sizeWithOutLimitSize{
    return ^ (){
        return [(UILabel *)self.view sizeWithoutLimitSize];
    };
}
@end

DPCATEGORY_VIEW_IMPLEMENTATION(UILabel, DPLabelChainModel)
#undef DPCATEGORY_CHAIN_LABLE_IMPLEMENTATION
