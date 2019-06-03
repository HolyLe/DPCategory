//
//  DPBaseControlChainModel.h
//  WisdomTree
//
//  Created by 麻小亮 on 2019/1/15.
//  Copyright © 2019 able-elec. All rights reserved.
//

#import "DPBaseViewChainModel.h"

NS_ASSUME_NONNULL_BEGIN
typedef void(^DPTargetActionBlock)(__kindof UIControl *sender);
@interface DPBaseControlChainModel <__covariant ObjectType>: DPBaseViewChainModel<ObjectType>
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ enabled)(BOOL enabled);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ selected)(BOOL selected);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ highlighted)(BOOL highlighted);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ contentVerticalAlignment)(UIControlContentVerticalAlignment contentVerticalAlignment);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ contentHorizontalAlignment)(UIControlContentHorizontalAlignment contentHorizontalAlignment);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ addTargetBlock)(DPTargetActionBlock addTargetBlock, UIControlEvents controlEvents);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ setTargetBlock)(DPTargetActionBlock addTargetBlock, UIControlEvents controlEvents);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ addTarget)(id target, SEL action, UIControlEvents controlEvents);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ setTarget)(id target, SEL action, UIControlEvents controlEvents);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ removeTarget) (id target,SEL action, UIControlEvents controlEvents);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ removeAllTarget)(void);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ removeAllTargetBlock)(UIControlEvents controlEvents);
@end

NS_ASSUME_NONNULL_END
