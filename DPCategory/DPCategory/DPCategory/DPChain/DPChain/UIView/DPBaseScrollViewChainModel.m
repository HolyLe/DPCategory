//
//  DPBaseScrollViewChainModel.m
//  WisdomTree
//
//  Created by 麻小亮 on 2019/1/15.
//  Copyright © 2019 able-elec. All rights reserved.
//

#import "DPBaseScrollViewChainModel.h"
#import "UIScrollView+DPCategory.h"
#define DPCATEGORY_CHAIN_SCROLLVIEW_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_VIEWCLASS_IMPLEMENTATION(DPMethod,DPParaType,  id ,UIScrollView)
@implementation DPBaseScrollViewChainModel
DPCATEGORY_CHAIN_SCROLLVIEW_IMPLEMENTATION(delegate, id<UIScrollViewDelegate>)

- (id _Nonnull (^)(void))adJustedContentIOS11{
    return ^ (){
        if (@available(iOS 11.0, *)) {
            [(UIScrollView *)self.view adJustedContentIOS11];
        }
        return self;
    };
}

DPCATEGORY_CHAIN_SCROLLVIEW_IMPLEMENTATION(contentSize, CGSize)
DPCATEGORY_CHAIN_SCROLLVIEW_IMPLEMENTATION(contentOffset, CGPoint)
DPCATEGORY_CHAIN_SCROLLVIEW_IMPLEMENTATION(contentInset, UIEdgeInsets)
DPCATEGORY_CHAIN_SCROLLVIEW_IMPLEMENTATION(bounces, BOOL)
DPCATEGORY_CHAIN_SCROLLVIEW_IMPLEMENTATION(alwaysBounceVertical, BOOL)
DPCATEGORY_CHAIN_SCROLLVIEW_IMPLEMENTATION(alwaysBounceHorizontal, BOOL)
DPCATEGORY_CHAIN_SCROLLVIEW_IMPLEMENTATION(pagingEnabled, BOOL)
DPCATEGORY_CHAIN_SCROLLVIEW_IMPLEMENTATION(scrollEnabled, BOOL)
DPCATEGORY_CHAIN_SCROLLVIEW_IMPLEMENTATION(showsHorizontalScrollIndicator, BOOL)
DPCATEGORY_CHAIN_SCROLLVIEW_IMPLEMENTATION(showsVerticalScrollIndicator, BOOL)
DPCATEGORY_CHAIN_SCROLLVIEW_IMPLEMENTATION(scrollsToTop, BOOL)
DPCATEGORY_CHAIN_SCROLLVIEW_IMPLEMENTATION(indicatorStyle, BOOL)
DPCATEGORY_CHAIN_SCROLLVIEW_IMPLEMENTATION(scrollIndicatorInsets, UIEdgeInsets)
DPCATEGORY_CHAIN_SCROLLVIEW_IMPLEMENTATION(directionalLockEnabled, BOOL)
DPCATEGORY_CHAIN_SCROLLVIEW_IMPLEMENTATION(minimumZoomScale, CGFloat)
DPCATEGORY_CHAIN_SCROLLVIEW_IMPLEMENTATION(zoomScale, CGFloat)
DPCATEGORY_CHAIN_SCROLLVIEW_IMPLEMENTATION(maximumZoomScale, CGFloat)

- (id  _Nonnull (^)(CGPoint, BOOL))contentOffsetAnimated{
    return ^ (CGPoint point, BOOL animated){
        [(UIScrollView *)self.view setContentOffset:point animated:animated];
        return self;
    };
}

- (id  _Nonnull (^)(CGRect, BOOL))contentOffsetToVisible{
    return ^ (CGRect rect, BOOL animated){
        [(UIScrollView *)self.view scrollRectToVisible:rect animated:animated];
        return self;
    };
}
@end
#undef DPCATEGORY_CHAIN_SCROLLVIEW_IMPLEMENTATION
