//
//  DPPinchGestureChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/31.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseGestureChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPPinchGestureChainModel;
@interface DPPinchGestureChainModel : DPBaseGestureChainModel<DPPinchGestureChainModel *>
DPCATEGORY_CHAIN_PROPERTY DPPinchGestureChainModel * (^ scale) (CGFloat scale);
@end
DPCreate(UIPinchGestureRecognizer)
DPCATEGORY_EXINTERFACE(UIPinchGestureRecognizer, DPPinchGestureChainModel)
NS_ASSUME_NONNULL_END
