//
//  DPSwitchChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/27.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseControlChainModel.h"

NS_ASSUME_NONNULL_BEGIN

@class DPSwitchChainModel;
@interface DPSwitchChainModel : DPBaseControlChainModel<DPSwitchChainModel *>

DPCATEGORY_CHAIN_PROPERTY DPSwitchChainModel *(^ on)(BOOL on);
DPCATEGORY_CHAIN_PROPERTY DPSwitchChainModel *(^ onTintColor)(UIColor *onTintColor);
DPCATEGORY_CHAIN_PROPERTY DPSwitchChainModel *(^ thumbTintColor)(UIColor *thumbTintColor);

DPCATEGORY_CHAIN_PROPERTY DPSwitchChainModel *(^ onImage)(UIImage *onImage);
DPCATEGORY_CHAIN_PROPERTY DPSwitchChainModel *(^ offImage)(UIImage *offImage);

@end
DPCreate(UISwitch)
DPCATEGORY_EXINTERFACE(UISwitch, DPSwitchChainModel)
NS_ASSUME_NONNULL_END
