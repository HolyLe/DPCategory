//
//  DPRotationGestureChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/31.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseGestureChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPRotationGestureChainModel;
@interface DPRotationGestureChainModel : DPBaseGestureChainModel<DPRotationGestureChainModel *>
DPCATEGORY_CHAIN_PROPERTY DPRotationGestureChainModel * (^ rotation) (CGFloat rotation);
@end
DPCreate(UIRotationGestureRecognizer)
DPCATEGORY_EXINTERFACE(UIRotationGestureRecognizer, DPRotationGestureChainModel)
NS_ASSUME_NONNULL_END
