//
//  DPCollectionViewChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/27.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPCollectionViewChainModel.h"
#define DPCATEGORY_CHAIN_COLLECTIONVIEW_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_VIEWCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPCollectionViewChainModel *,UICollectionView)
@implementation DPCollectionViewChainModel

DPCATEGORY_CHAIN_COLLECTIONVIEW_IMPLEMENTATION(collectionViewLayout, UICollectionViewLayout *)
DPCATEGORY_CHAIN_COLLECTIONVIEW_IMPLEMENTATION(delegate, id<UICollectionViewDelegate>)
DPCATEGORY_CHAIN_COLLECTIONVIEW_IMPLEMENTATION(dataSource, id<UICollectionViewDataSource>)

DPCATEGORY_CHAIN_COLLECTIONVIEW_IMPLEMENTATION(allowsSelection, BOOL)
DPCATEGORY_CHAIN_COLLECTIONVIEW_IMPLEMENTATION(allowsMultipleSelection, BOOL)

- (DPCollectionViewChainModel * _Nonnull (^)(void))adJustedContentIOS11{
    return ^ (){
        if (@available(iOS 11.0, *)) {
            [(UICollectionView *)self.view setContentInsetAdjustmentBehavior:UIScrollViewContentInsetAdjustmentNever];
        }
        return self;
    };
}

- (DPCollectionViewChainModel * _Nonnull (^)(UINib * _Nonnull, NSString * _Nonnull))registerCellNib{
    return ^ (UINib *nib, NSString *identifier){
        [(UICollectionView *)self.view registerNib:nib forCellWithReuseIdentifier:identifier];
        return self;
    };
}

- (DPCollectionViewChainModel * _Nonnull (^)(Class  _Nonnull __unsafe_unretained, NSString * _Nonnull))registerCellClass{
    return ^ (Class class, NSString *identifier){
        [(UICollectionView *)self.view registerClass:class forCellWithReuseIdentifier:identifier];
        return self;
    };
}

- (DPCollectionViewChainModel * _Nonnull (^)(Class  _Nonnull __unsafe_unretained, NSString * _Nonnull, NSString * _Nonnull))registerViewClass{
    return ^ (Class class, NSString *identifier, NSString *kind){
        [(UICollectionView *)self.view registerClass:class forSupplementaryViewOfKind:kind withReuseIdentifier:identifier];
        return self;
    };
}
- (DPCollectionViewChainModel * _Nonnull (^)(UINib * _Nonnull, NSString * _Nonnull, NSString * _Nonnull))registerViewNib{
    return ^ (UINib * nib, NSString *identifier, NSString *kind){
        [(UICollectionView *)self.view registerNib:nib forSupplementaryViewOfKind:kind withReuseIdentifier:identifier];
        return self;
    };
}

- (DPCollectionViewChainModel * _Nonnull (^)(void))reloadData{
    return ^ (){
        [CATransaction begin];
        [CATransaction setDisableActions:YES];
        [(UICollectionView *)self.view reloadData];
        [CATransaction commit];
        
        return self;
    };
}

@end
DPCATEGORY_VIEW_IMPLEMENTATION(UICollectionView, DPCollectionViewChainModel)
#undef DPCATEGORY_CHAIN_COLLECTIONVIEW_IMPLEMENTATION
