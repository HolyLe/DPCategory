//
//  DPPanGestureChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/31.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPPanGestureChainModel.h"
#define DPCATEGORY_CHAIN_PANGESTURE_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_GESTURECLASS_IMPLEMENTATION(DPMethod,DPParaType, DPPanGestureChainModel *, UIPanGestureRecognizer)
@implementation DPPanGestureChainModel
DPCATEGORY_CHAIN_PANGESTURE_IMPLEMENTATION(minimumNumberOfTouches, NSUInteger)
DPCATEGORY_CHAIN_PANGESTURE_IMPLEMENTATION(maximumNumberOfTouches, NSUInteger)

- (DPPanGestureChainModel * _Nonnull (^)(CGPoint, UIView * _Nonnull))translation{
    return ^ (CGPoint translation, UIView *view){
        [(UIPanGestureRecognizer *)self.gesture setTranslation:translation inView:view];
        return self;
    };
}
@end
DPCATEGORY_GESTURE_IMPLEMENTATION(UIPanGestureRecognizer, DPPanGestureChainModel)
#undef DPCATEGORY_CHAIN_PANGESTURE_IMPLEMENTATION
