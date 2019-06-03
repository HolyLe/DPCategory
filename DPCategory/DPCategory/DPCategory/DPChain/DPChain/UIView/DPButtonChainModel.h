//
//  DPButtonChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/27.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseControlChainModel.h"
#import "UIButton+DPCategory.h"
NS_ASSUME_NONNULL_BEGIN
typedef void(^DPButtonImageTitleBlock)(UIImageView *imageView, UILabel *title);
@class DPButtonChainModel;
@interface DPButtonChainModel : DPBaseControlChainModel<DPButtonChainModel *>

DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel *(^ contentEdgeInsets)(UIEdgeInsets contentEdgeInsets);

DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel *(^ titleEdgeInsets)(UIEdgeInsets titleEdgeInsets);

DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel *(^ imageEdgeInsets)(UIEdgeInsets imageEdgeInsets);

DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel *(^ adjustsImageWhenHighlighted) (BOOL adjustsImageWhenHighlighted);

DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel *(^ showsTouchWhenHighlighted) (BOOL showsTouchWhenHighlighted);

DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel *(^ adjustsImageWhenDisabled) (BOOL adjustsImageWhenDisabled);

DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel *(^ reversesTitleShadowWhenHighlighted) (BOOL reversesTitleShadowWhenHighlighted);

DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel *(^ image) (UIImage *image, UIControlState state);

DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel *(^ text) (NSString *title, UIControlState state);

DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel *(^ textColor) (UIColor *color, UIControlState state);

DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel * (^ backgroundImage) (UIImage *image, UIControlState state);

DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel *(^ attributedTitle) (NSAttributedString *title, UIControlState state);

DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel *(^ titleShadow) (UIColor *color, UIControlState state);

DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel *(^ font) (UIFont *font);

DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel *(^ textAlignment)(NSTextAlignment textAlignment);
DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel *(^ numberOfLines)(NSInteger numberOfLines);
DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel *(^ lineBreakMode)(NSLineBreakMode lineBreakMode);
DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel *(^ adjustsFontSizeToFitWidth)(BOOL adjustsFontSizeToFitWidth);
DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel *(^ baselineAdjustment)(UIBaselineAdjustment baselineAdjustment);


DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel * (^ imageDirection) (DPButtonImageDirection imageDirection, CGFloat space);

DPCATEGORY_CHAIN_PROPERTY DPButtonChainModel *(^ imageAndTitle)(DPButtonImageTitleBlock block);
@end

DPCreate(UIButton)
static inline UIButton *UIButtonCreateWithType(UIButtonType buttonType){
    return [UIButton buttonWithType:buttonType];
}
DPCATEGORY_EXINTERFACE(UIButton, DPButtonChainModel)
NS_ASSUME_NONNULL_END
