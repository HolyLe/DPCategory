//
//  DPLabelChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/27.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseViewChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPLabelChainModel;
@interface DPLabelChainModel : DPBaseViewChainModel<DPLabelChainModel *>

DPCATEGORY_CHAIN_PROPERTY DPLabelChainModel *(^ text)(NSString *text);
DPCATEGORY_CHAIN_PROPERTY DPLabelChainModel *(^ font)(UIFont *font);
DPCATEGORY_CHAIN_PROPERTY DPLabelChainModel *(^ textColor)(UIColor *textColor);
DPCATEGORY_CHAIN_PROPERTY DPLabelChainModel *(^ attributedText)(NSAttributedString *attributedText);
DPCATEGORY_CHAIN_PROPERTY DPLabelChainModel *(^ textAlignment)(NSTextAlignment textAlignment);
DPCATEGORY_CHAIN_PROPERTY DPLabelChainModel *(^ numberOfLines)(NSInteger numberOfLines);
DPCATEGORY_CHAIN_PROPERTY DPLabelChainModel *(^ lineBreakMode)(NSLineBreakMode lineBreakMode);
DPCATEGORY_CHAIN_PROPERTY DPLabelChainModel *(^ adjustsFontSizeToFitWidth)(BOOL adjustsFontSizeToFitWidth);
DPCATEGORY_CHAIN_PROPERTY DPLabelChainModel *(^ baselineAdjustment)(UIBaselineAdjustment baselineAdjustment);
DPCATEGORY_CHAIN_PROPERTY DPLabelChainModel *(^ allowsDefaultTighteningForTruncation)(BOOL allowsDefaultTighteningForTruncation);
DPCATEGORY_CHAIN_PROPERTY DPLabelChainModel *(^ minimumScaleFactor)(CGFloat minimumScaleFactor);
DPCATEGORY_CHAIN_PROPERTY DPLabelChainModel *(^ preferredMaxLayoutWidth)(CGFloat preferredMaxLayoutWidth);

DPCATEGORY_CHAIN_PROPERTY CGSize (^ sizeWithLimitSize) (CGSize limitSize);

DPCATEGORY_CHAIN_PROPERTY CGSize (^ sizeWithOutLimitSize) (void);

@end
DPCreate(UILabel)
DPCATEGORY_EXINTERFACE(UILabel, DPLabelChainModel)
NS_ASSUME_NONNULL_END
