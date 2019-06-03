//
//  DPPickerViewChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/11.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPBaseViewChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPPickerViewChainModel;
@interface DPPickerViewChainModel : DPBaseViewChainModel<DPPickerViewChainModel *>
DPCATEGORY_CHAIN_PROPERTY DPPickerViewChainModel * (^ dataSource) (id<UIPickerViewDataSource> dataSource);
DPCATEGORY_CHAIN_PROPERTY DPPickerViewChainModel * (^ delegate) (id<UIPickerViewDelegate> delegate);
DPCATEGORY_CHAIN_PROPERTY DPPickerViewChainModel * (^ showsSelectionIndicator) (BOOL showsSelectionIndicator);
DPCATEGORY_CHAIN_PROPERTY NSInteger (^ numberOfRowsInComponent) (NSInteger component);
DPCATEGORY_CHAIN_PROPERTY CGSize (^ rowSizeForComponent) (NSInteger component);
DPCATEGORY_CHAIN_PROPERTY UIView * (^ viewForRowComponent) (NSInteger row, NSInteger component);
DPCATEGORY_CHAIN_PROPERTY DPPickerViewChainModel * (^ reloadAllComponents) (void);
DPCATEGORY_CHAIN_PROPERTY DPPickerViewChainModel * (^ reloadComponent) (NSInteger component);
DPCATEGORY_CHAIN_PROPERTY DPPickerViewChainModel * (^ selectRowInComponent) (NSInteger row, NSInteger component, BOOL animated);
DPCATEGORY_CHAIN_PROPERTY NSInteger (^ selectedRowInComponent) (NSInteger component);

@end
DPCreate(UIPickerView)
DPCATEGORY_EXINTERFACE(UIPickerView, DPPickerViewChainModel)
NS_ASSUME_NONNULL_END
