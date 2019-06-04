//
//  DPProgressViewChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/11.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPProgressViewChainModel.h"
#define DPCATEGORY_CHAIN_PROGRESS_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_VIEWCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPProgressViewChainModel *,UIProgressView)
DPCATEGORY_VIEW_IMPLEMENTATION(UIProgressView, DPProgressViewChainModel)
@implementation DPProgressViewChainModel
DPCATEGORY_CHAIN_PROGRESS_IMPLEMENTATION(progressViewStyle, UIProgressViewStyle)
DPCATEGORY_CHAIN_PROGRESS_IMPLEMENTATION(progress, float)
DPCATEGORY_CHAIN_PROGRESS_IMPLEMENTATION(progressTintColor, UIColor*)
DPCATEGORY_CHAIN_PROGRESS_IMPLEMENTATION(trackTintColor, UIColor*)
DPCATEGORY_CHAIN_PROGRESS_IMPLEMENTATION(progressImage, UIImage*)
DPCATEGORY_CHAIN_PROGRESS_IMPLEMENTATION(trackImage, UIImage*)
DPCATEGORY_CHAIN_PROGRESS_IMPLEMENTATION(observedProgress, NSProgress *)

- (DPProgressViewChainModel * _Nonnull (^)(float, BOOL))setProgressAnimated{
    return ^ (float p, BOOL a){
        [(UIProgressView *)self.view setProgress:p animated:a];
        return self;
    };
}

@end
#undef DPCATEGORY_CHAIN_PROGRESS_IMPLEMENTATION
