//
//  DPPanGestureChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/31.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseGestureChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPPanGestureChainModel;
@interface DPPanGestureChainModel : DPBaseGestureChainModel<DPPanGestureChainModel *>
DPCATEGORY_CHAIN_PROPERTY DPPanGestureChainModel * (^ minimumNumberOfTouches) (NSUInteger minimumNumberOfTouches);
DPCATEGORY_CHAIN_PROPERTY DPPanGestureChainModel * (^ maximumNumberOfTouches) (NSUInteger maximumNumberOfTouches);
DPCATEGORY_CHAIN_PROPERTY DPPanGestureChainModel * (^ translation) (CGPoint translation,UIView *view);
@end
DPCreate(UIPanGestureRecognizer)
DPCATEGORY_EXINTERFACE(UIPanGestureRecognizer, DPPanGestureChainModel)
NS_ASSUME_NONNULL_END
