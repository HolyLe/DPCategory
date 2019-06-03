//
//  DPImageViewChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/27.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseViewChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPImageViewChainModel;

@interface DPImageViewChainModel : DPBaseViewChainModel<DPImageViewChainModel *>

DPCATEGORY_CHAIN_PROPERTY DPImageViewChainModel *(^ image)(UIImage *image);

DPCATEGORY_CHAIN_PROPERTY DPImageViewChainModel *(^ highlightedImage)(UIImage *highlightedImage);

DPCATEGORY_CHAIN_PROPERTY DPImageViewChainModel *(^ highlighted)(BOOL highlighted);

DPCATEGORY_CHAIN_PROPERTY DPImageViewChainModel *(^ animationImages)(NSArray <UIImage *> * animationImages);

DPCATEGORY_CHAIN_PROPERTY DPImageViewChainModel *(^ highlightedAnimationImages)(NSArray <UIImage *> * highlightedAnimationImages);

DPCATEGORY_CHAIN_PROPERTY DPImageViewChainModel *(^ startAnimating)(void);

DPCATEGORY_CHAIN_PROPERTY DPImageViewChainModel *(^ stopAnimating)(void);

DPCATEGORY_CHAIN_PROPERTY DPImageViewChainModel *(^ animationRepeatCount)(NSInteger animationRepeatCount);

DPCATEGORY_CHAIN_PROPERTY DPImageViewChainModel *(^ animationDuration)(NSTimeInterval animationDuration);

@end
DPCreate(UIImageView)
DPCATEGORY_EXINTERFACE(UIImageView, DPImageViewChainModel)
NS_ASSUME_NONNULL_END
