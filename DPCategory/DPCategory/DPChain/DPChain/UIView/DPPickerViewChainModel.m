//
//  DPPickerViewChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/11.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPPickerViewChainModel.h"
#define DPCATEGORY_CHAIN_PICKER_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_VIEWCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPPickerViewChainModel *,UIPickerView)
DPCATEGORY_VIEW_IMPLEMENTATION(UIPickerView, DPPickerViewChainModel)
@implementation DPPickerViewChainModel
DPCATEGORY_CHAIN_PICKER_IMPLEMENTATION(dataSource, id<UIPickerViewDataSource>)
DPCATEGORY_CHAIN_PICKER_IMPLEMENTATION(delegate, id<UIPickerViewDelegate>)
DPCATEGORY_CHAIN_PICKER_IMPLEMENTATION(showsSelectionIndicator, BOOL)

- (NSInteger (^)(NSInteger))numberOfRowsInComponent{
    return ^ (NSInteger n){
        return [(UIPickerView *)self.view numberOfRowsInComponent:1];
    };
}

- (DPPickerViewChainModel * _Nonnull (^)(void))reloadAllComponents{
    return ^ (){
        [(UIPickerView *)self.view reloadAllComponents];
        return self;
    };
}

- (CGSize (^)(NSInteger))rowSizeForComponent{
    return ^ (NSInteger n){
        return [(UIPickerView *)self.view rowSizeForComponent:1];
    };
}

- (DPPickerViewChainModel * _Nonnull (^)(NSInteger))reloadComponent{
    return ^ (NSInteger n){
        [(UIPickerView *)self.view reloadComponent:1];
        return self;
    };
}

- (UIView * _Nonnull (^)(NSInteger, NSInteger))viewForRowComponent{
    return ^ (NSInteger n, NSInteger n1){
        return [(UIPickerView *)self.view viewForRow:n forComponent:n1];
    };
}

- (DPPickerViewChainModel * _Nonnull (^)(NSInteger, NSInteger, BOOL))selectRowInComponent{
    return ^ (NSInteger a, NSInteger b, BOOL c){
        [(UIPickerView *)self.view selectRow:a inComponent:b animated:c];
        return self;
    };
}

- (NSInteger (^)(NSInteger))selectedRowInComponent{
    return ^ (NSInteger n){
       return [(UIPickerView *)self.view selectedRowInComponent:1];
    };
}

@end
#undef DPCATEGORY_CHAIN_PICKER_IMPLEMENTATION
