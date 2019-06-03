//
//  DPVisualEffectViewChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/11.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPBaseViewChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPVisualEffectViewChainModel;
@interface DPVisualEffectViewChainModel : DPBaseViewChainModel<DPVisualEffectViewChainModel *>
DPCATEGORY_CHAIN_PROPERTY DPVisualEffectViewChainModel * (^ effect) (UIVisualEffect * effect);
@end
DPCreate(UIVisualEffectView)
DPCATEGORY_EXINTERFACE(UIVisualEffectView, DPVisualEffectViewChainModel)
NS_ASSUME_NONNULL_END
