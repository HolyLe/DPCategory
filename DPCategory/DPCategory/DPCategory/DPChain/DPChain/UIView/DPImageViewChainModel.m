//
//  DPImageViewChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/27.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPImageViewChainModel.h"
#define DPCATEGORY_CHAIN_IMAGEVIEW_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_VIEWCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPImageViewChainModel *,UIImageView)
@implementation DPImageViewChainModel

DPCATEGORY_CHAIN_IMAGEVIEW_IMPLEMENTATION(image, UIImage *);
DPCATEGORY_CHAIN_IMAGEVIEW_IMPLEMENTATION(highlightedImage, UIImage *);
DPCATEGORY_CHAIN_IMAGEVIEW_IMPLEMENTATION(highlighted, BOOL);
DPCATEGORY_CHAIN_IMAGEVIEW_IMPLEMENTATION(animationImages, NSArray<UIImage *> *)
DPCATEGORY_CHAIN_IMAGEVIEW_IMPLEMENTATION(highlightedAnimationImages, NSArray<UIImage *> *)
DPCATEGORY_CHAIN_IMAGEVIEW_IMPLEMENTATION(animationDuration, NSTimeInterval)
DPCATEGORY_CHAIN_IMAGEVIEW_IMPLEMENTATION(animationRepeatCount, NSInteger)

- (DPImageViewChainModel * _Nonnull (^)(void))startAnimating{
    return ^ (){
        [self startAnimating];
        return self;
    };
}

- (DPImageViewChainModel * _Nonnull (^)(void))stopAnimating{
    return ^ (){
        [self stopAnimating];
        return self;
    };
}

@end
DPCATEGORY_VIEW_IMPLEMENTATION(UIImageView, DPImageViewChainModel)
#undef DPCATEGORY_CHAIN_IMAGEVIEW_IMPLEMENTATION
