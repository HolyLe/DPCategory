//
//  DPBaseScrollViewChainModel.h
//  WisdomTree
//
//  Created by 麻小亮 on 2019/1/15.
//  Copyright © 2019 able-elec. All rights reserved.
//

#import "DPBaseViewChainModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface DPBaseScrollViewChainModel <__covariant ObjectType>: DPBaseViewChainModel<ObjectType>
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ contentSize) (CGSize contentSize);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ contentOffset) (CGPoint contentOffset);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ contentInset) (UIEdgeInsets contentInset);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ bounces) (BOOL bounces);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ alwaysBounceVertical) (BOOL alwaysBounceVertical);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ alwaysBounceHorizontal) (BOOL alwaysBounceHorizontal);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ pagingEnabled) (BOOL pagingEnabled);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ scrollEnabled) (BOOL scrollEnabled);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ showsHorizontalScrollIndicator) (BOOL showsHorizontalScrollIndicator);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ showsVerticalScrollIndicator) (BOOL showsVerticalScrollIndicator);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ scrollsToTop) (BOOL scrollsToTop);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ indicatorStyle) (BOOL indicatorStyle);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ scrollIndicatorInsets) (UIEdgeInsets scrollIndicatorInsets);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ directionalLockEnabled) (BOOL directionalLockEnabled);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ minimumZoomScale) (CGFloat minimumZoomScale);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ maximumZoomScale) (CGFloat maximumZoomScale);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ zoomScale) (CGFloat zoomScale);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ contentOffsetAnimated)(CGPoint point, BOOL animated);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ contentOffsetToVisible)(CGRect rect, BOOL animated);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ delegate) (id <UIScrollViewDelegate> delegate);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ adJustedContentIOS11)(void);
@end

NS_ASSUME_NONNULL_END
