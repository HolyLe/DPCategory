//
//  DPTableViewChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/27.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseScrollViewChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPTableViewChainModel;
@interface DPTableViewChainModel : DPBaseScrollViewChainModel<DPTableViewChainModel *>

DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel * (^ delegate) (id <UITableViewDelegate> delegate);
DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel * (^ dataSource) (id <UITableViewDataSource> dataSource);
DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel * (^ adJustedContentIOS11)(void);

DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ rowHeight)(CGFloat rowHeight);
DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ sectionHeaderHeight)(CGFloat sectionHeaderHeight);
DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ sectionFooterHeight)(CGFloat sectionFooterHeight);
DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ estimatedRowHeight)(CGFloat estimatedRowHeight);
DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ estimatedSectionHeaderHeight)(CGFloat estimatedSectionHeaderHeight);
DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ estimatedSectionFooterHeight)(CGFloat estimatedSectionFooterHeight);
DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ separatorInset)(UIEdgeInsets separatorInset);

DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ editing)(BOOL editing);
DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ allowsSelection)(BOOL allowsSelection);
DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ allowsMultipleSelection)(BOOL allowsMultipleSelection);
DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ allowsSelectionDuringEditing)(BOOL allowsSelectionDuringEditing);
DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ allowsMultipleSelectionDuringEditing)(BOOL allowsMultipleSelectionDuringEditing);

DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ separatorStyle)(UITableViewCellSeparatorStyle separatorStyle);
DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ separatorColor)(UIColor *separatorColor);

DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ tableHeaderView)(UIView * tableHeaderView);
DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ tableFooterView)(UIView * tableFooterView);

DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ sectionIndexBackgroundColor)(UIColor *sectionIndexBackgroundColor);
DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ sectionIndexColor)(UIColor *sectionIndexColor);

DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ registerCellClass)(Class cellClass, NSString *identifier);

DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ registerCellNib)(UINib * nib, NSString *identifier);

DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ registerViewClass)(Class viewClass, NSString *identifier);

DPCATEGORY_CHAIN_PROPERTY DPTableViewChainModel *(^ registerViewNib)(UINib * viewNib, NSString *identifier);

@end

DPCreate(UITableView)
static inline UITableView * UITableViewCreateWithStyle(UITableViewStyle style){
    return [[UITableView alloc]initWithFrame:CGRectZero style:style];
}
DPCATEGORY_EXINTERFACE(UITableView, DPTableViewChainModel)
NS_ASSUME_NONNULL_END
