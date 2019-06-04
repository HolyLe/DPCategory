//
//  DPActivityIndicatorViewModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/11.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPActivityIndicatorViewChainModel.h"
#define DPCATEGORY_CHAIN_ACTIVITY_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_VIEWCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPActivityIndicatorViewModel *,UIActivityIndicatorView)
@implementation DPActivityIndicatorViewModel

DPCATEGORY_CHAIN_ACTIVITY_IMPLEMENTATION(activityIndicatorViewStyle,UIActivityIndicatorViewStyle)
DPCATEGORY_CHAIN_ACTIVITY_IMPLEMENTATION(hidesWhenStopped,BOOL)
DPCATEGORY_CHAIN_ACTIVITY_IMPLEMENTATION(color,UIColor *)

- (DPActivityIndicatorViewModel * _Nonnull (^)(void))startAnimating{
    return ^()
    {
        [(UIActivityIndicatorView *)self.view startAnimating];
        return self;
    };
}


- (DPActivityIndicatorViewModel * _Nonnull (^)(void))stopAnimating{
    return ^()
    {
        [(UIActivityIndicatorView *)self.view stopAnimating];
        return self;
    };
}
@end

DPCATEGORY_VIEW_IMPLEMENTATION(UIActivityIndicatorView, DPActivityIndicatorViewModel)
#undef DPCATEGORY_CHAIN_ACTIVITY_IMPLEMENTATION
