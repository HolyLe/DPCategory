//
//  UIView+DPChain.m
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/27.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "UIView+DPChain.h"

#define DPCATEGORY_ADDVIEW(method, modelClass, ViewClass)\
- (modelClass * (^)(NSInteger tag))method    \
{   \
    return ^(NSInteger tag) {      \
        ViewClass *view = [[ViewClass alloc] init];       \
        [self addSubview:view];                            \
        modelClass *chainModel = [[modelClass alloc] initWithTag:tag andView:view]; \
        return chainModel;      \
    };      \
}
#define DPCATEGORY_ADDLAYER(method, modelClass, LayerClass)\
- (modelClass * _Nonnull (^)(void))method{\
return ^ (){\
    LayerClass *layer = [LayerClass layer];\
    modelClass *chainModel = [[modelClass alloc] initWithLayer:layer];\
    [self.layer addSublayer:layer];\
    return chainModel;\
};\
}


@implementation UIView (DPChain)

DPCATEGORY_ADDVIEW(addView, DPViewChainModel, UIView);
DPCATEGORY_ADDVIEW(addLabel, DPLabelChainModel, UILabel);
DPCATEGORY_ADDVIEW(addImageView, DPImageViewChainModel, UIImageView);
DPCATEGORY_ADDVIEW(addControl, DPControlChainModel, UIControl);
DPCATEGORY_ADDVIEW(addTextField, DPTextFieldChainModel, UITextField);
DPCATEGORY_ADDVIEW(addButton, DPButtonChainModel, UIButton);
DPCATEGORY_ADDVIEW(addSwitch, DPSwitchChainModel, UISwitch);
DPCATEGORY_ADDVIEW(addScrollView, DPScrollViewChainModel, UIScrollView);
DPCATEGORY_ADDVIEW(addTextView, DPTextViewChainModel, UITextView);
DPCATEGORY_ADDVIEW(addTableView, DPTableViewChainModel, UITableView);

- (DPCollectionViewChainModel * (^)(NSInteger tag))addCollectionView
{
    return ^(NSInteger tag) {
        UICollectionViewFlowLayout *layout = [[UICollectionViewFlowLayout alloc] init];
        layout.minimumInteritemSpacing = layout.minimumLineSpacing = 0;
        layout.headerReferenceSize = layout.footerReferenceSize = CGSizeZero;
        layout.sectionInset = UIEdgeInsetsZero;
        UICollectionView *view = [[UICollectionView alloc] initWithFrame:CGRectZero collectionViewLayout:layout];
        [self addSubview:view];
        DPCollectionViewChainModel *chainModel = [[DPCollectionViewChainModel alloc] initWithTag:tag andView:view];
        return chainModel;
    };
}

DPCATEGORY_ADDLAYER(addLayer, DPLayerChainModel, CALayer)
DPCATEGORY_ADDLAYER(addShaperLayer, DPShaperLayerChainModel, CAShapeLayer)
DPCATEGORY_ADDLAYER(addEmiiterLayer, DPEmiiterLayerChainModel, CAEmitterLayer)
DPCATEGORY_ADDLAYER(addScrollLayer, DPScrollLayerChainModel, CAScrollLayer)
DPCATEGORY_ADDLAYER(addTextLayer, DPTextLayerChainModel, CATextLayer)
DPCATEGORY_ADDLAYER(addTiledLayer, DPTiledLayerChainModel, CATiledLayer)
DPCATEGORY_ADDLAYER(addTransFormLayer, DPTransFormLayerChainModel, CATransformLayer)
DPCATEGORY_ADDLAYER(addGradientLayer, DPGradientLayerChainModel, CAGradientLayer)
DPCATEGORY_ADDLAYER(addReplicatorLayer, DPReplicatorLayerChainModel, CAReplicatorLayer)

@end
#undef DPCATEGORY_ADDVIEW
#undef DPCATEGORY_ADDLAYER
