//
//  DPActivityIndicatorViewModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/11.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPBaseViewChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPActivityIndicatorViewModel;
@interface DPActivityIndicatorViewModel : DPBaseViewChainModel<DPActivityIndicatorViewModel *>
DPCATEGORY_CHAIN_PROPERTY DPActivityIndicatorViewModel * (^ activityIndicatorViewStyle) (UIActivityIndicatorViewStyle activityIndicatorViewStyle);
DPCATEGORY_CHAIN_PROPERTY DPActivityIndicatorViewModel * (^ hidesWhenStopped) (BOOL hidesWhenStopped);
DPCATEGORY_CHAIN_PROPERTY DPActivityIndicatorViewModel * (^ color) (UIColor * color);
DPCATEGORY_CHAIN_PROPERTY DPActivityIndicatorViewModel * (^ startAnimating) (void);
DPCATEGORY_CHAIN_PROPERTY DPActivityIndicatorViewModel * (^ stopAnimating) (void);
@end
DPCreate(UIActivityIndicatorView)
DPCATEGORY_EXINTERFACE(UIActivityIndicatorView, DPActivityIndicatorViewModel)
NS_ASSUME_NONNULL_END
