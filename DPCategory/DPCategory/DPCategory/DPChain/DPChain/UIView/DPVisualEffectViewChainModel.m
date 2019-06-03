//
//  DPVisualEffectViewChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/11.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPVisualEffectViewChainModel.h"
#define DPCATEGORY_CHAIN_VISUALEFFECT_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_VIEWCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPVisualEffectViewChainModel *,UIVisualEffectView)
DPCATEGORY_VIEW_IMPLEMENTATION(UIVisualEffectView, DPVisualEffectViewChainModel)
@implementation DPVisualEffectViewChainModel
DPCATEGORY_CHAIN_VISUALEFFECT_IMPLEMENTATION( effect,UIVisualEffect*)
@end
#undef DPCATEGORY_CHAIN_VISUALEFFECT_IMPLEMENTATION
