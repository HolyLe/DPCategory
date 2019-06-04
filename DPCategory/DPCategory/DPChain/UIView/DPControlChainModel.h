//
//  DPControlChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/27.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseControlChainModel.h"

NS_ASSUME_NONNULL_BEGIN



@class DPControlChainModel;
@interface DPControlChainModel : DPBaseControlChainModel<DPControlChainModel*>



@end
DPCreate(UIControl)
DPCATEGORY_EXINTERFACE(UIControl, DPControlChainModel)
NS_ASSUME_NONNULL_END
