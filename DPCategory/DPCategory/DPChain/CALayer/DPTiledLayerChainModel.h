//
//  DPTiledLayerChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/4.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPBaseLayerChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPTiledLayerChainModel;
@interface DPTiledLayerChainModel : DPBaseLayerChainModel<DPTiledLayerChainModel *>
DPCATEGORY_CHAIN_PROPERTY DPTiledLayerChainModel * (^ levelsOfDetail) (size_t levelsOfDetail);
DPCATEGORY_CHAIN_PROPERTY DPTiledLayerChainModel * (^ levelsOfDetailBias) (size_t levelsOfDetailBias);
DPCATEGORY_CHAIN_PROPERTY DPTiledLayerChainModel * (^ tileSize) (CGSize tileSize);
@end
DPCreateLayer(CATiledLayer)
DPCATEGORY_EXINTERFACE(CATiledLayer, DPTiledLayerChainModel)
NS_ASSUME_NONNULL_END
