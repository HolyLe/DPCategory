//
//  DPWebViewChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/28.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseScrollViewChainModel.h"
#if __has_include(<WebKit/WebKit.h>)
#import <WebKit/WebKit.h>
#else
@import WebKit;
#endif

NS_ASSUME_NONNULL_BEGIN


@class DPWebViewChainModel;
@interface DPWebViewChainModel : DPBaseScrollViewChainModel<DPWebViewChainModel *>

@end
DPCreate(WKWebView)
DPCATEGORY_EXINTERFACE(WKWebView, DPWebViewChainModel)
NS_ASSUME_NONNULL_END
