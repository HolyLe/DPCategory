//
//  DPGradientLayerChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/4.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPBaseLayerChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPGradientLayerChainModel;
@interface DPGradientLayerChainModel : DPBaseLayerChainModel<DPGradientLayerChainModel *>
DPCATEGORY_CHAIN_PROPERTY DPGradientLayerChainModel * (^ colors) (NSArray * colors);
DPCATEGORY_CHAIN_PROPERTY DPGradientLayerChainModel * (^ locations) (NSArray<NSNumber *> * locations);
DPCATEGORY_CHAIN_PROPERTY DPGradientLayerChainModel * (^ startPoint) (CGPoint startPoint);
DPCATEGORY_CHAIN_PROPERTY DPGradientLayerChainModel * (^ endPoint) (CGPoint endPoint);
@end
DPCreateLayer(CAGradientLayer)
DPCATEGORY_EXINTERFACE(CAGradientLayer, DPGradientLayerChainModel)
NS_ASSUME_NONNULL_END
