//
//  DPCollectionViewChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/27.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseScrollViewChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPCollectionViewChainModel;
@interface DPCollectionViewChainModel : DPBaseScrollViewChainModel<DPCollectionViewChainModel *>

DPCATEGORY_CHAIN_PROPERTY DPCollectionViewChainModel *(^ collectionViewLayout)(UICollectionViewLayout *collectionViewLayout);
DPCATEGORY_CHAIN_PROPERTY DPCollectionViewChainModel *(^ delegate)(id<UICollectionViewDelegate> delegate);
DPCATEGORY_CHAIN_PROPERTY DPCollectionViewChainModel *(^ dataSource)(id<UICollectionViewDataSource> dataSource);
DPCATEGORY_CHAIN_PROPERTY DPCollectionViewChainModel *(^ allowsSelection)(BOOL allowsSelection);

DPCATEGORY_CHAIN_PROPERTY DPCollectionViewChainModel *(^ allowsMultipleSelection)(BOOL allowsMultipleSelection);

DPCATEGORY_CHAIN_PROPERTY DPCollectionViewChainModel *(^ registerCellClass)(Class cellClass, NSString *identifier);

DPCATEGORY_CHAIN_PROPERTY DPCollectionViewChainModel *(^ registerCellNib)(UINib * nib, NSString *identifier);

DPCATEGORY_CHAIN_PROPERTY DPCollectionViewChainModel *(^ registerViewClass)(Class viewClass, NSString *identifier, NSString *kind);

DPCATEGORY_CHAIN_PROPERTY DPCollectionViewChainModel *(^ registerViewNib)(UINib * viewNib, NSString *identifier, NSString *kind);

DPCATEGORY_CHAIN_PROPERTY DPCollectionViewChainModel * (^ adJustedContentIOS11)(void);
DPCATEGORY_CHAIN_PROPERTY DPCollectionViewChainModel * (^ reloadData)(void);
@end
DPCreate(UICollectionView)
static inline UICollectionView *UICollectionViewCreateWithLayout(UICollectionViewFlowLayout *layout){
    return [[UICollectionView alloc] initWithFrame:CGRectZero collectionViewLayout:layout];
}
DPCATEGORY_EXINTERFACE(UICollectionView, DPCollectionViewChainModel)
NS_ASSUME_NONNULL_END
