//
//  DPScrollLayerChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/4.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPScrollLayerChainModel.h"
#define DPCATEGORY_CHAIN_SCROLLLAYER_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_LAYERCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPScrollLayerChainModel *, CAScrollLayer)

@implementation DPScrollLayerChainModel
DPCATEGORY_CHAIN_SCROLLLAYER_IMPLEMENTATION(scrollMode, CAScrollLayerScrollMode)

- (DPScrollLayerChainModel * _Nonnull (^)(CGRect))scrollToRect{
    return ^ (CGRect rect){
        [(CAScrollLayer *)self.layer scrollToRect:rect];
        return self;
    };
}

- (DPScrollLayerChainModel * _Nonnull (^)(CGPoint))scrollToPoint{
    return ^ (CGPoint point){
       [(CAScrollLayer *)self.layer scrollToPoint:point];
        return self;
    };
}

@end
DPCATEGORY_LAYER_IMPLEMENTATION(CAScrollLayer, DPScrollLayerChainModel)
#undef DPCATEGORY_CHAIN_SCROLLLAYER_IMPLEMENTATION
