//
//  DPTransFormLayerChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/4.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPBaseLayerChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPTransFormLayerChainModel;
@interface DPTransFormLayerChainModel : DPBaseLayerChainModel<DPTransFormLayerChainModel *>

@end
DPCreateLayer(CATransformLayer)
DPCATEGORY_EXINTERFACE(CATransformLayer, DPTransFormLayerChainModel)
NS_ASSUME_NONNULL_END
