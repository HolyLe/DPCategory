//
//  DPBaseViewChainModel+Masonry.m
//  DPCategory
//
//  Created by 麻小亮 on 2019/6/5.
//  Copyright © 2019 麻小亮. All rights reserved.
//

#import "DPBaseViewChainModel+Masonry.h"

#define     DPCATEGORY_CHAIN_MASONRY_IMPLEMENTATION(methodName, masonryMethod) \
- (id (^)( void (^constraints)(MASConstraintMaker *)) )methodName    \
{   \
return ^id ( void (^constraints)(MASConstraintMaker *) ) {  \
if (self.view.superview) { \
[self.view masonryMethod:constraints];    \
}   \
return self;    \
};  \
}
#define     DPCATEGORY_CHAIN_MASONRY_IMPLEMENTATION_NULL(methodName, masonryMethod) \
- (id (^)( void (^constraints)(MASConstraintMaker *)) )methodName    \
{   \
return ^id ( void (^constraints)(MASConstraintMaker *) ) {  \
return self;    \
};  \
}
@implementation DPBaseViewChainModel (Masonry)
#if __has_include(<Masonry.h>) || __has_include("Masonry.h")
DPCATEGORY_CHAIN_MASONRY_IMPLEMENTATION(makeMasonry, mas_makeConstraints);
DPCATEGORY_CHAIN_MASONRY_IMPLEMENTATION(updateMasonry, mas_updateConstraints);
DPCATEGORY_CHAIN_MASONRY_IMPLEMENTATION(remakeMasonry, mas_remakeConstraints);
#else
DPCATEGORY_CHAIN_MASONRY_IMPLEMENTATION_NULL(makeMasonry, mas_makeConstraints);
DPCATEGORY_CHAIN_MASONRY_IMPLEMENTATION_NULL(updateMasonry, mas_updateConstraints);
DPCATEGORY_CHAIN_MASONRY_IMPLEMENTATION_NULL(remakeMasonry, mas_remakeConstraints);
#endif

@end
#undef DPCATEGORY_CHAIN_MASONRY_IMPLEMENTATION
#undef DPCATEGORY_CHAIN_MASONRY_IMPLEMENTATION_NULL
