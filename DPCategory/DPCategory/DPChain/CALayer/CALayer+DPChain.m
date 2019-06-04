//
//  CALayer+DPChain.m
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/4.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "CALayer+DPChain.h"
#define DPCATEGORY_ADDSUBLAYER(method, modelClass, LayerClass)\
- (modelClass * _Nonnull (^)(void))method{\
return ^ (){\
LayerClass *layer = [LayerClass layer];\
modelClass *chainModel = [[modelClass alloc] initWithLayer:layer];\
[self addSublayer:layer];\
return chainModel;\
};\
}
@implementation CALayer (DPChain)
DPCATEGORY_ADDSUBLAYER(addLayer, DPLayerChainModel, CALayer)
DPCATEGORY_ADDSUBLAYER(addShaperLayer, DPShaperLayerChainModel, CAShapeLayer)
DPCATEGORY_ADDSUBLAYER(addEmiiterLayer, DPEmiiterLayerChainModel, CAEmitterLayer)
DPCATEGORY_ADDSUBLAYER(addScrollLayer, DPScrollLayerChainModel, CAScrollLayer)
DPCATEGORY_ADDSUBLAYER(addTextLayer, DPTextLayerChainModel, CATextLayer)
DPCATEGORY_ADDSUBLAYER(addTiledLayer, DPTiledLayerChainModel, CATiledLayer)
DPCATEGORY_ADDSUBLAYER(addTransFormLayer, DPTransFormLayerChainModel, CATransformLayer)
DPCATEGORY_ADDSUBLAYER(addGradientLayer, DPGradientLayerChainModel, CAGradientLayer)
DPCATEGORY_ADDSUBLAYER(addReplicatorLayer, DPReplicatorLayerChainModel, CAReplicatorLayer)
@end
#undef DPCATEGORY_ADDSUBLAYER
