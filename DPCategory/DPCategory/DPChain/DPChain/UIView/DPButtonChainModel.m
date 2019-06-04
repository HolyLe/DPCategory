//
//  DPButtonChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/27.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPButtonChainModel.h"

#define DPCATEGORY_CHAIN_BUTTON_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_VIEWCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPButtonChainModel *,UIButton)

#define DPCATEGORY_CHAIN_BUTTONLABEL_IMPLEMENTATION(DPMethod,DPParaType)\
- (DPButtonChainModel * (^)(DPParaType DPMethod))DPMethod    \
{   \
    return ^ (DPParaType DPMethod) {    \
        ((UIButton *)self.view).titleLabel.DPMethod = DPMethod;   \
        return self;    \
    };\
}
@implementation DPButtonChainModel

DPCATEGORY_CHAIN_BUTTON_IMPLEMENTATION(contentEdgeInsets, UIEdgeInsets)

DPCATEGORY_CHAIN_BUTTON_IMPLEMENTATION(titleEdgeInsets, UIEdgeInsets)

DPCATEGORY_CHAIN_BUTTON_IMPLEMENTATION(imageEdgeInsets, UIEdgeInsets)

DPCATEGORY_CHAIN_BUTTON_IMPLEMENTATION(adjustsImageWhenHighlighted, BOOL)

DPCATEGORY_CHAIN_BUTTON_IMPLEMENTATION(showsTouchWhenHighlighted, BOOL)

DPCATEGORY_CHAIN_BUTTON_IMPLEMENTATION(adjustsImageWhenDisabled, BOOL)

DPCATEGORY_CHAIN_BUTTON_IMPLEMENTATION(reversesTitleShadowWhenHighlighted, BOOL)

DPCATEGORY_CHAIN_BUTTONLABEL_IMPLEMENTATION(textAlignment, NSTextAlignment)
DPCATEGORY_CHAIN_BUTTONLABEL_IMPLEMENTATION(numberOfLines, NSInteger)
DPCATEGORY_CHAIN_BUTTONLABEL_IMPLEMENTATION(lineBreakMode, NSLineBreakMode)
DPCATEGORY_CHAIN_BUTTONLABEL_IMPLEMENTATION(adjustsFontSizeToFitWidth, BOOL)
DPCATEGORY_CHAIN_BUTTONLABEL_IMPLEMENTATION(baselineAdjustment, UIBaselineAdjustment)

- (DPButtonChainModel * _Nonnull (^)(UIImage * _Nonnull, UIControlState))image{
    return ^ (UIImage *image, UIControlState state){
        [(UIButton *)self.view setImage:image forState:state];
        return self;
    };
}

- (DPButtonChainModel * _Nonnull (^)(NSString * _Nonnull, UIControlState))text{
    return ^ (NSString *text, UIControlState state){
        [(UIButton *)self.view setTitle:text forState:state];
        return self;
    };
}

- (DPButtonChainModel * _Nonnull (^)(UIImage * _Nonnull, UIControlState))backgroundImage{
    return ^ (UIImage *image, UIControlState state){
        [(UIButton *)self.view setBackgroundImage:image forState:state];
        return self;
    };
}

- (DPButtonChainModel * _Nonnull (^)(NSAttributedString * _Nonnull, UIControlState))attributedTitle{
    return ^ (NSAttributedString *title, UIControlState state){
        [(UIButton *)self.view setAttributedTitle:title forState:state];
        return self;
    };
}

- (DPButtonChainModel * _Nonnull (^)(UIFont * _Nonnull))font{
    return ^ (UIFont *font){
        [(UIButton *)self.view titleLabel].font = font;
        return self;
    };
}

- (DPButtonChainModel * _Nonnull (^)(UIColor * _Nonnull, UIControlState))textColor{
    return ^ (UIColor *color, UIControlState state){
        [(UIButton *)self.view setTitleColor:color forState:state];
        return self;
    };
}

- (DPButtonChainModel * _Nonnull (^)(UIColor * _Nonnull, UIControlState))titleShadow{
    return ^ (UIColor *color, UIControlState state){
        [(UIButton *)self.view setTitleShadowColor:color forState:state];
        return self;
    };
}

- (DPButtonChainModel * _Nonnull (^)(DPButtonImageDirection, CGFloat))imageDirection{
    return ^ (DPButtonImageDirection direction, CGFloat space){
        [(UIButton *)self.view imageDirection:direction space:space];
        return self;
    };
}
- (DPButtonChainModel * _Nonnull (^)(DPButtonImageTitleBlock _Nonnull))imageAndTitle{
    return ^ (DPButtonImageTitleBlock block){
        if (block) {
            UIButton *button = self.view;
            block(button.imageView,button.titleLabel);
        }
        return self;
    };
}
@end
DPCATEGORY_VIEW_IMPLEMENTATION(UIButton, DPButtonChainModel)
#undef DPCATEGORY_CHAIN_BUTTON_IMPLEMENTATION
#undef DPCATEGORY_CHAIN_BUTTONLABEL_IMPLEMENTATION
