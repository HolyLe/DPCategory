//
//  DPSwipeGestureChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/31.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPSwipeGestureChainModel.h"
#define DPCATEGORY_CHAIN_SWIPEGESTURE_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_GESTURECLASS_IMPLEMENTATION(DPMethod,DPParaType, DPSwipeGestureChainModel *, UISwipeGestureRecognizer)
@implementation DPSwipeGestureChainModel
DPCATEGORY_CHAIN_SWIPEGESTURE_IMPLEMENTATION(numberOfTouchesRequired, NSUInteger)
DPCATEGORY_CHAIN_SWIPEGESTURE_IMPLEMENTATION(direction, UISwipeGestureRecognizerDirection)
@end
DPCATEGORY_GESTURE_IMPLEMENTATION(UISwipeGestureRecognizer, DPSwipeGestureChainModel)
#undef DPCATEGORY_CHAIN_SWIPEGESTURE_IMPLEMENTATION
