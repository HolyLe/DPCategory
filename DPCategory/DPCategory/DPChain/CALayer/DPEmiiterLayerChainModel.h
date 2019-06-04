//
//  DPEmiiterLayerChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/4.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPBaseLayerChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPEmiiterLayerChainModel;
@interface DPEmiiterLayerChainModel : DPBaseLayerChainModel<DPEmiiterLayerChainModel *>
DPCATEGORY_CHAIN_PROPERTY DPEmiiterLayerChainModel * (^ emitterCells) (NSArray<CAEmitterCell *> * emitterCells);
DPCATEGORY_CHAIN_PROPERTY DPEmiiterLayerChainModel * (^ birthRate) (float birthRate);
DPCATEGORY_CHAIN_PROPERTY DPEmiiterLayerChainModel * (^ lifetime) (float lifetime);
DPCATEGORY_CHAIN_PROPERTY DPEmiiterLayerChainModel * (^ emitterPosition) (CGPoint emitterPosition);
DPCATEGORY_CHAIN_PROPERTY DPEmiiterLayerChainModel * (^ emitterZPosition) (CGFloat emitterZPosition);
DPCATEGORY_CHAIN_PROPERTY DPEmiiterLayerChainModel * (^ emitterSize) (CGSize emitterSize);
DPCATEGORY_CHAIN_PROPERTY DPEmiiterLayerChainModel * (^ emitterDepth) (CGFloat emitterDepth);

#ifdef __IPHONE_12_0
DPCATEGORY_CHAIN_PROPERTY DPEmiiterLayerChainModel * (^ emitterShape) (CAEmitterLayerEmitterShape emitterShape);
DPCATEGORY_CHAIN_PROPERTY DPEmiiterLayerChainModel * (^ emitterMode) (CAEmitterLayerEmitterMode emitterMode);
DPCATEGORY_CHAIN_PROPERTY DPEmiiterLayerChainModel * (^ renderMode) (CAEmitterLayerRenderMode renderMode);

#endif
DPCATEGORY_CHAIN_PROPERTY DPEmiiterLayerChainModel * (^ preservesDepth) (BOOL preservesDepth);
DPCATEGORY_CHAIN_PROPERTY DPEmiiterLayerChainModel * (^ velocity) (float velocity);
DPCATEGORY_CHAIN_PROPERTY DPEmiiterLayerChainModel * (^ scale) (float scale);
DPCATEGORY_CHAIN_PROPERTY DPEmiiterLayerChainModel * (^ spin) (float spin);
DPCATEGORY_CHAIN_PROPERTY DPEmiiterLayerChainModel * (^ seed) (unsigned int seed);

@end
DPCreateLayer(CAEmitterLayer)
DPCATEGORY_EXINTERFACE(CAEmitterLayer, DPEmiiterLayerChainModel)
NS_ASSUME_NONNULL_END
