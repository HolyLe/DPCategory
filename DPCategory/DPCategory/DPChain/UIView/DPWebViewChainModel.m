//
//  DPWebViewChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/28.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPWebViewChainModel.h"
#define DPCATEGORY_CHAIN_WEBVIEW_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_VIEWCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPWebViewChainModel *,WKWebView)
@implementation DPWebViewChainModel

@end
DPCATEGORY_VIEW_IMPLEMENTATION(WKWebView, DPWebViewChainModel)
#undef DPCATEGORY_CHAIN_WEBVIEW_IMPLEMENTATION
