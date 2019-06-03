//
//  DPScrollLayerChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/4.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPBaseLayerChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPScrollLayerChainModel;
@interface DPScrollLayerChainModel : DPBaseLayerChainModel<DPScrollLayerChainModel *>
DPCATEGORY_CHAIN_PROPERTY DPScrollLayerChainModel * (^ scrollToPoint) (CGPoint point);
DPCATEGORY_CHAIN_PROPERTY DPScrollLayerChainModel * (^ scrollToRect) (CGRect rect);
DPCATEGORY_CHAIN_PROPERTY DPScrollLayerChainModel * (^ scrollMode) (CAScrollLayerScrollMode scrollMode);
@end
DPCreateLayer(CAScrollLayer)
DPCATEGORY_EXINTERFACE(CAScrollLayer, DPScrollLayerChainModel)
NS_ASSUME_NONNULL_END
