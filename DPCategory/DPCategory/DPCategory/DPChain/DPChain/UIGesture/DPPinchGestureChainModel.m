//
//  DPPinchGestureChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/31.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPPinchGestureChainModel.h"
#define DPCATEGORY_CHAIN_PINGESTURE_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_GESTURECLASS_IMPLEMENTATION(DPMethod,DPParaType, DPPinchGestureChainModel *, UIPinchGestureRecognizer)
@implementation DPPinchGestureChainModel
DPCATEGORY_CHAIN_PINGESTURE_IMPLEMENTATION(scale, CGFloat)
@end
DPCATEGORY_GESTURE_IMPLEMENTATION(UIPinchGestureRecognizer, DPPinchGestureChainModel)
#undef DPCATEGORY_CHAIN_PINGESTURE_IMPLEMENTATION
