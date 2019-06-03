//
//  DPLayerChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/4.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPBaseLayerChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPLayerChainModel;
@interface DPLayerChainModel : DPBaseLayerChainModel<DPLayerChainModel *>

@end
DPCreateLayer(CALayer)
DPCATEGORY_EXINTERFACE(CALayer, DPLayerChainModel)
NS_ASSUME_NONNULL_END
