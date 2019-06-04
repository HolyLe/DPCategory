//
//  DPProgressViewChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/11.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPBaseViewChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPProgressViewChainModel;
@interface DPProgressViewChainModel : DPBaseViewChainModel<DPProgressViewChainModel *>
DPCATEGORY_CHAIN_PROPERTY DPProgressViewChainModel * (^ progressViewStyle) (UIProgressViewStyle progressViewStyle);
DPCATEGORY_CHAIN_PROPERTY DPProgressViewChainModel * (^ progress) (float progress);
DPCATEGORY_CHAIN_PROPERTY DPProgressViewChainModel * (^ progressTintColor) (UIColor* progressTintColor);
DPCATEGORY_CHAIN_PROPERTY DPProgressViewChainModel * (^ trackTintColor) (UIColor* trackTintColor);
DPCATEGORY_CHAIN_PROPERTY DPProgressViewChainModel * (^ progressImage) (UIImage* progressImage);
DPCATEGORY_CHAIN_PROPERTY DPProgressViewChainModel * (^ trackImage) (UIImage* trackImage);
DPCATEGORY_CHAIN_PROPERTY DPProgressViewChainModel * (^ observedProgress) (NSProgress * observedProgress);
DPCATEGORY_CHAIN_PROPERTY DPProgressViewChainModel * (^ setProgressAnimated) (float progress, BOOL animated);
@end
DPCreate(UIProgressView)
DPCATEGORY_EXINTERFACE(UIProgressView, DPProgressViewChainModel)
NS_ASSUME_NONNULL_END
