//
//  DPTableViewChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/27.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPTableViewChainModel.h"
#import "UIScrollView+DPCategory.h"
#define DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_VIEWCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPTableViewChainModel *,UITableView)
@implementation DPTableViewChainModel


DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(delegate, id<UITableViewDelegate>)
DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(dataSource, id<UITableViewDataSource>)
- (DPTableViewChainModel * _Nonnull (^)(void))adJustedContentIOS11{
    return ^ (){
        if (@available(iOS 11.0, *)) {
            [(UIScrollView *)self.view adJustedContentIOS11];
        }
        return self;
    };
}

DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(rowHeight, CGFloat)
DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(sectionHeaderHeight, CGFloat)
DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(sectionFooterHeight, CGFloat)
DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(estimatedRowHeight, CGFloat)
DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(estimatedSectionHeaderHeight, CGFloat)
DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(estimatedSectionFooterHeight, CGFloat)
DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(separatorInset, UIEdgeInsets)
DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(editing, BOOL)
DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(allowsSelection, BOOL)
DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(allowsMultipleSelection, BOOL)
DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(allowsSelectionDuringEditing, BOOL)
DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(allowsMultipleSelectionDuringEditing, BOOL)
DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(separatorStyle, UITableViewCellSeparatorStyle)
DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(separatorColor, UIColor *)
DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(tableHeaderView, UIView *)
DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(tableFooterView, UIView *)
DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(sectionIndexBackgroundColor, UIColor *)
DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION(sectionIndexColor, UIColor *)

- (DPTableViewChainModel * _Nonnull (^)(UINib * _Nonnull, NSString * _Nonnull))registerCellNib{
    return ^ (UINib *nib, NSString *identifier){
        [(UITableView *)self.view registerNib:nib forCellReuseIdentifier:identifier];
        return self;
    };
}

- (DPTableViewChainModel * _Nonnull (^)(UINib * _Nonnull, NSString * _Nonnull))registerViewNib{
    return ^ (UINib *nib, NSString *identifier){
        [(UITableView *)self.view registerNib:nib forHeaderFooterViewReuseIdentifier:identifier];
        return self;
    };
}

- (DPTableViewChainModel * _Nonnull (^)(Class  _Nonnull __unsafe_unretained, NSString * _Nonnull))registerCellClass{
    return ^ (Class class, NSString *identifier){
        [(UITableView *)self.view registerClass:class forCellReuseIdentifier:identifier];
        return self;
    };
}

- (DPTableViewChainModel * _Nonnull (^)(Class  _Nonnull __unsafe_unretained, NSString * _Nonnull))registerViewClass{
    return ^ (Class class, NSString *identifier){
        [(UITableView *)self.view registerClass:class forHeaderFooterViewReuseIdentifier:identifier];
        
        return self;
    };
}

@end
DPCATEGORY_VIEW_IMPLEMENTATION(UITableView, DPTableViewChainModel)
#undef DPCATEGORY_CHAIN_TABLEVIEW_IMPLEMENTATION
