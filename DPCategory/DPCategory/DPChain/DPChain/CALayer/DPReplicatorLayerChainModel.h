//
//  DPReplicatorLayerChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/4.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPBaseLayerChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPReplicatorLayerChainModel;
@interface DPReplicatorLayerChainModel : DPBaseLayerChainModel<DPReplicatorLayerChainModel *>
DPCATEGORY_CHAIN_PROPERTY DPReplicatorLayerChainModel * (^ instanceCount) (NSInteger instanceCount);
DPCATEGORY_CHAIN_PROPERTY DPReplicatorLayerChainModel * (^ preservesDepth) (BOOL preservesDepth);
DPCATEGORY_CHAIN_PROPERTY DPReplicatorLayerChainModel * (^ instanceDelay) (CFTimeInterval instanceDelay);
DPCATEGORY_CHAIN_PROPERTY DPReplicatorLayerChainModel * (^ instanceTransform) (CATransform3D instanceTransform);
DPCATEGORY_CHAIN_PROPERTY DPReplicatorLayerChainModel * (^ instanceColor) (CGColorRef instanceColor);
DPCATEGORY_CHAIN_PROPERTY DPReplicatorLayerChainModel * (^ instanceRedOffset) (float instanceRedOffset);
DPCATEGORY_CHAIN_PROPERTY DPReplicatorLayerChainModel * (^ instanceGreenOffset) (float instanceGreenOffset);
DPCATEGORY_CHAIN_PROPERTY DPReplicatorLayerChainModel * (^ instanceBlueOffset) (float instanceBlueOffset);
DPCATEGORY_CHAIN_PROPERTY DPReplicatorLayerChainModel * (^ instanceAlphaOffset) (float instanceAlphaOffset);
@end
DPCreateLayer(CAReplicatorLayer)
DPCATEGORY_EXINTERFACE(CAReplicatorLayer, DPReplicatorLayerChainModel)
NS_ASSUME_NONNULL_END
