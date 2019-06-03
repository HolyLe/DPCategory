//
//  UIView+DPChain.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/27.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DPViewChainHeader.h"
#import "CALayer+DPChain.h"
#import "DPGestureChainHeader.h"
NS_ASSUME_NONNULL_BEGIN
@interface UIView (DPChain)

DPCATEGORY_STRONG_PROPERTY DPViewChainModel *(^ addView)(NSInteger tag);

DPCATEGORY_STRONG_PROPERTY DPLabelChainModel *(^ addLabel)(NSInteger tag);

DPCATEGORY_STRONG_PROPERTY DPImageViewChainModel *(^ addImageView)(NSInteger tag);

DPCATEGORY_STRONG_PROPERTY DPControlChainModel *(^ addControl)(NSInteger tag);

DPCATEGORY_STRONG_PROPERTY DPTextFieldChainModel *(^ addTextField)(NSInteger tag);

DPCATEGORY_STRONG_PROPERTY DPButtonChainModel *(^ addButton)(NSInteger tag);

DPCATEGORY_STRONG_PROPERTY DPSwitchChainModel *(^ addSwitch)(NSInteger tag);

DPCATEGORY_STRONG_PROPERTY DPScrollViewChainModel *(^ addScrollView)(NSInteger tag);

DPCATEGORY_STRONG_PROPERTY DPTextViewChainModel *(^ addTextView)(NSInteger tag);

DPCATEGORY_STRONG_PROPERTY DPTableViewChainModel *(^ addTableView)(NSInteger tag);

DPCATEGORY_STRONG_PROPERTY DPCollectionViewChainModel *(^ addCollectionView)(NSInteger tag);

DPCATEGORY_STRONG_PROPERTY DPLayerChainModel *(^ addLayer)(void);

DPCATEGORY_STRONG_PROPERTY DPShaperLayerChainModel *(^ addShaperLayer)(void);

DPCATEGORY_STRONG_PROPERTY DPEmiiterLayerChainModel *(^ addEmiiterLayer)(void);

DPCATEGORY_STRONG_PROPERTY DPScrollLayerChainModel *(^ addScrollLayer)(void);

DPCATEGORY_STRONG_PROPERTY DPTextLayerChainModel *(^ addTextLayer)(void);

DPCATEGORY_STRONG_PROPERTY DPTiledLayerChainModel *(^ addTiledLayer)(void);

DPCATEGORY_STRONG_PROPERTY DPTransFormLayerChainModel *(^ addTransFormLayer)(void);

DPCATEGORY_STRONG_PROPERTY DPGradientLayerChainModel *(^ addGradientLayer)(void);

DPCATEGORY_STRONG_PROPERTY DPReplicatorLayerChainModel *(^ addReplicatorLayer)(void);

@end

NS_ASSUME_NONNULL_END
