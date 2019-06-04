//
//  DPScrollViewChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/27.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseScrollViewChainModel.h"

NS_ASSUME_NONNULL_BEGIN

@class DPScrollViewChainModel;

@interface DPScrollViewChainModel : DPBaseScrollViewChainModel<DPScrollViewChainModel*>

@end
DPCreate(UIScrollView)
DPCATEGORY_EXINTERFACE(UIScrollView, DPScrollViewChainModel)
NS_ASSUME_NONNULL_END
