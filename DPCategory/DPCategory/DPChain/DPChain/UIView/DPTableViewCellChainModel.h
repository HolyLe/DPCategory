//
//  DPTableViewCellChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/28.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseViewChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPTableViewCellChainModel;
@interface DPTableViewCellChainModel : DPBaseViewChainModel<DPTableViewCellChainModel *>
DPCATEGORY_CHAIN_PROPERTY DPTableViewCellChainModel * (^ selectionStyle) (UITableViewCellSelectionStyle selectionStyle);
DPCATEGORY_CHAIN_PROPERTY DPTableViewCellChainModel * (^ accessoryType) (UITableViewCellAccessoryType selectionStyle);
DPCATEGORY_CHAIN_PROPERTY DPTableViewCellChainModel * (^ separatorInset) (UIEdgeInsets separatorInset);
DPCATEGORY_CHAIN_PROPERTY DPTableViewCellChainModel * (^ editing) (BOOL editing);
DPCATEGORY_CHAIN_PROPERTY DPTableViewCellChainModel * (^ editingWithAnimated) (BOOL editing, BOOL animated);
DPCATEGORY_CHAIN_PROPERTY DPTableViewCellChainModel * (^ focusStyle)(UITableViewCellFocusStyle focusStyle);
DPCATEGORY_CHAIN_PROPERTY DPTableViewCellChainModel * (^ userInteractionEnabledWhileDragging)(BOOL userInteractionEnabledWhileDragging);

@end
DPCreate(UITableViewCell)
static inline UITableViewCell * UITableViewCellCreateWithStyleAndIndentify(UITableViewCellStyle style, NSString *identifier){
    return [[UITableViewCell alloc] initWithStyle:style reuseIdentifier:identifier];
}
DPCATEGORY_EXINTERFACE(UITableViewCell, DPTableViewCellChainModel)
NS_ASSUME_NONNULL_END
