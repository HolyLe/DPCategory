//
//  DPLongPressGestureChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/31.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPLongPressGestureChainModel.h"
#define DPCATEGORY_CHAIN_LONGGESTURE_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_GESTURECLASS_IMPLEMENTATION(DPMethod,DPParaType, DPLongPressGestureChainModel *, UILongPressGestureRecognizer)
@implementation DPLongPressGestureChainModel
DPCATEGORY_CHAIN_LONGGESTURE_IMPLEMENTATION(numberOfTapsRequired, NSUInteger)
DPCATEGORY_CHAIN_LONGGESTURE_IMPLEMENTATION(minimumPressDuration, NSTimeInterval)
DPCATEGORY_CHAIN_LONGGESTURE_IMPLEMENTATION(allowableMovement, CGFloat)
@end
DPCATEGORY_GESTURE_IMPLEMENTATION(UILongPressGestureRecognizer, DPLongPressGestureChainModel)
#undef DPCATEGORY_CHAIN_LONGGESTURE_IMPLEMENTATION
