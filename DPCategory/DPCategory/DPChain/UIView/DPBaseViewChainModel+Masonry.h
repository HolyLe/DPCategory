//
//  DPBaseViewChainModel+Masonry.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/6/5.
//  Copyright © 2019 麻小亮. All rights reserved.
//

#import "DPBaseViewChainModel.h"
#if __has_include(<Masonry.h>)
#import <Masonry.h>
#elif __has_include("Masonry.h")
#import "Masonry.h"
#endif
NS_ASSUME_NONNULL_BEGIN
@class MASConstraintMaker;
typedef void(^DPMasonryLoad)(MASConstraintMaker *make);
@interface DPBaseViewChainModel <ObjectType> (Masonry)
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ makeMasonry)(DPMasonryLoad constraints);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ updateMasonry)(DPMasonryLoad constraints);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ remakeMasonry)(DPMasonryLoad constraints);
@end

NS_ASSUME_NONNULL_END
