//
//  DPTableViewCellChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/28.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPTableViewCellChainModel.h"

#define DPCATEGORY_CHAIN_TABLEVIEWCELL_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_VIEWCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPTableViewCellChainModel *,UITableViewCell)
@implementation DPTableViewCellChainModel

DPCATEGORY_CHAIN_TABLEVIEWCELL_IMPLEMENTATION(selectionStyle, UITableViewCellSelectionStyle)
DPCATEGORY_CHAIN_TABLEVIEWCELL_IMPLEMENTATION(accessoryType, UITableViewCellAccessoryType)
DPCATEGORY_CHAIN_TABLEVIEWCELL_IMPLEMENTATION(separatorInset, UIEdgeInsets)
DPCATEGORY_CHAIN_TABLEVIEWCELL_IMPLEMENTATION(editing, BOOL)
DPCATEGORY_CHAIN_TABLEVIEWCELL_IMPLEMENTATION(focusStyle, UITableViewCellFocusStyle)
DPCATEGORY_CHAIN_TABLEVIEWCELL_IMPLEMENTATION(userInteractionEnabledWhileDragging, BOOL)

- (DPTableViewCellChainModel * _Nonnull (^)(BOOL, BOOL))editingWithAnimated{
    return ^ (BOOL editing, BOOL animated){
        [(UITableViewCell *)self.view setEditing:editing animated:animated];
        return self;
    };
}
@end
DPCATEGORY_VIEW_IMPLEMENTATION(UITableViewCell, DPTableViewCellChainModel)
#undef DPCATEGORY_CHAIN_TABLEVIEWCELL_IMPLEMENTATION
