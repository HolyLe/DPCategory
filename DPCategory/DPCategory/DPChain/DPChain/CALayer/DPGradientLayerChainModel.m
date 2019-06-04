//
//  DPGradientLayerChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/4.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPGradientLayerChainModel.h"
#define DPCATEGORY_CHAIN_GRADIENTLAYER_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_LAYERCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPGradientLayerChainModel *, CAGradientLayer)

@implementation DPGradientLayerChainModel
DPCATEGORY_CHAIN_GRADIENTLAYER_IMPLEMENTATION(locations, NSArray<NSNumber *> *)
DPCATEGORY_CHAIN_GRADIENTLAYER_IMPLEMENTATION(startPoint, CGPoint)
DPCATEGORY_CHAIN_GRADIENTLAYER_IMPLEMENTATION(endPoint, CGPoint)


- (DPGradientLayerChainModel * _Nonnull (^)(NSArray * _Nonnull))colors{
    return ^ (NSArray *colors){
        NSMutableArray *bridgeColors = [NSMutableArray array];
        for (id color in colors) {
            if ([color isKindOfClass:[UIColor class]]) {
                [bridgeColors addObject:(__bridge id)[color CGColor]];
            }else{
                [bridgeColors addObject:color];
            }
        }
        [(CAGradientLayer *)self.layer setColors:bridgeColors];
        return self;
    };
}
@end
DPCATEGORY_LAYER_IMPLEMENTATION(CAGradientLayer, DPGradientLayerChainModel)
#undef DPCATEGORY_CHAIN_GRADIENTLAYER_IMPLEMENTATION
