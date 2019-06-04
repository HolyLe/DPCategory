//
//  DPTapGestureChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/31.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseGestureChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPTapGestureChainModel;
@interface DPTapGestureChainModel : DPBaseGestureChainModel<DPTapGestureChainModel *>
DPCATEGORY_CHAIN_PROPERTY DPTapGestureChainModel * (^ numberOfTapsRequired) (NSUInteger numberOfTapsRequired);
@end
DPCreate(UITapGestureRecognizer)
DPCATEGORY_EXINTERFACE(UITapGestureRecognizer, DPTapGestureChainModel)
NS_ASSUME_NONNULL_END
