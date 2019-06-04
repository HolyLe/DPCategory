//
//  CALayer+DPChain.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/4.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import "DPLayerChainHeader.h"
NS_ASSUME_NONNULL_BEGIN

@interface CALayer (DPChain)

DPCATEGORY_STRONG_PROPERTY DPLayerChainModel *(^ addLayer)(void);

DPCATEGORY_STRONG_PROPERTY DPShaperLayerChainModel *(^ addShaperLayer)(void);

DPCATEGORY_STRONG_PROPERTY DPEmiiterLayerChainModel *(^ addEmiiterLayer)(void);

DPCATEGORY_STRONG_PROPERTY DPScrollLayerChainModel *(^ addScrollLayer)(void);

DPCATEGORY_STRONG_PROPERTY DPTextLayerChainModel *(^ addTextLayer)(void);

DPCATEGORY_STRONG_PROPERTY DPTiledLayerChainModel *(^ addTiledLayer)(void);

DPCATEGORY_STRONG_PROPERTY DPTransFormLayerChainModel *(^ addTransFormLayer)(void);

DPCATEGORY_STRONG_PROPERTY DPGradientLayerChainModel *(^ addGradientLayer)(void);

DPCATEGORY_STRONG_PROPERTY DPReplicatorLayerChainModel *(^ addReplicatorLayer)(void);

@end

NS_ASSUME_NONNULL_END
