//
//  DPTransFormLayerChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/4.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPTransFormLayerChainModel.h"
#define DPCATEGORY_CHAIN_TRANSFORMLAYER_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_LAYERCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPTransFormLayerChainModel *, CATransformLayer)

@implementation DPTransFormLayerChainModel

@end
DPCATEGORY_LAYER_IMPLEMENTATION(CATransformLayer, DPTransFormLayerChainModel)
#undef DPCATEGORY_CHAIN_TRANSFORMLAYER_IMPLEMENTATION
