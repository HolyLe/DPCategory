//
//  DPTiledLayerChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/4.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPTiledLayerChainModel.h"
#define DPCATEGORY_CHAIN_TILEDLAYER_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_LAYERCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPTiledLayerChainModel *, CATiledLayer)

@implementation DPTiledLayerChainModel
DPCATEGORY_CHAIN_TILEDLAYER_IMPLEMENTATION(levelsOfDetail, size_t)
DPCATEGORY_CHAIN_TILEDLAYER_IMPLEMENTATION(levelsOfDetailBias,size_t)
DPCATEGORY_CHAIN_TILEDLAYER_IMPLEMENTATION(tileSize,CGSize)
@end
DPCATEGORY_LAYER_IMPLEMENTATION(CATiledLayer, DPTiledLayerChainModel)
#undef DPCATEGORY_CHAIN_TILEDLAYER_IMPLEMENTATION
