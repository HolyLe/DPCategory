//
//  DPSwipeGestureChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/31.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseGestureChainModel.h"

NS_ASSUME_NONNULL_BEGIN

@class DPSwipeGestureChainModel;
@interface DPSwipeGestureChainModel : DPBaseGestureChainModel<DPSwipeGestureChainModel *>
DPCATEGORY_CHAIN_PROPERTY DPSwipeGestureChainModel * (^ numberOfTapsRequired) (NSUInteger numberOfTapsRequired);
DPCATEGORY_CHAIN_PROPERTY DPSwipeGestureChainModel * (^ direction) (UISwipeGestureRecognizerDirection direction);
@end

DPCreate(UISwipeGestureRecognizer)
DPCATEGORY_EXINTERFACE(UISwipeGestureRecognizer, DPSwipeGestureChainModel)
NS_ASSUME_NONNULL_END
