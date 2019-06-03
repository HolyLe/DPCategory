//
//  DPTapGestureChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/31.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPTapGestureChainModel.h"

#define DPCATEGORY_CHAIN_TAPGESTURE_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_GESTURECLASS_IMPLEMENTATION(DPMethod,DPParaType, DPTapGestureChainModel *, UITapGestureRecognizer)
@implementation DPTapGestureChainModel
DPCATEGORY_CHAIN_TAPGESTURE_IMPLEMENTATION(numberOfTapsRequired,NSUInteger)
@end
DPCATEGORY_GESTURE_IMPLEMENTATION(UITapGestureRecognizer, DPTapGestureChainModel)
#undef DPCATEGORY_CHAIN_TAPGESTURE_IMPLEMENTATION
