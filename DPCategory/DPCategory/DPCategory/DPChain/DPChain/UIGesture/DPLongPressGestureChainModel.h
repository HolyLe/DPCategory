//
//  DPLongPressGestureChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/31.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseGestureChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPLongPressGestureChainModel;
@interface DPLongPressGestureChainModel : DPBaseGestureChainModel<DPLongPressGestureChainModel *>

DPCATEGORY_CHAIN_PROPERTY DPLongPressGestureChainModel * (^ numberOfTapsRequired) (NSUInteger numberOfTapsRequired);

DPCATEGORY_CHAIN_PROPERTY DPLongPressGestureChainModel * (^ minimumPressDuration) (NSTimeInterval minimumPressDuration);
DPCATEGORY_CHAIN_PROPERTY DPLongPressGestureChainModel * (^ allowableMovement) (CGFloat allowableMovement);
@end
DPCreate(UILongPressGestureRecognizer)
DPCATEGORY_EXINTERFACE(UILongPressGestureRecognizer, DPLongPressGestureChainModel)
NS_ASSUME_NONNULL_END
