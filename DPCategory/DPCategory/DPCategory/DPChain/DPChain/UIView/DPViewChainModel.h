//
//  DPViewChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/27.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseViewChainModel.h"

NS_ASSUME_NONNULL_BEGIN

@class DPViewChainModel,UIView;
@interface DPViewChainModel : DPBaseViewChainModel<DPViewChainModel *>

@end

DPCreate(UIView)
DPCATEGORY_EXINTERFACE(UIView, DPViewChainModel)

NS_ASSUME_NONNULL_END
