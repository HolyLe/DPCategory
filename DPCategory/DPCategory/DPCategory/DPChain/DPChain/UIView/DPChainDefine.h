//
//  DPChainDefine.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/31.
//  Copyright © 2018 xllpp. All rights reserved.
//

#ifndef DPChainDefine_h
#define DPChainDefine_h
#import <UIKit/UIKit.h>
#define DPCreate(ViewClass)\
static inline ViewClass *ViewClass##Create(void){\
return [ViewClass new];\
}

#define DPCreateLayer(ViewClass)\
static inline ViewClass *ViewClass##Create(void){\
return [ViewClass layer];\
}

#define DPTansactionDisableActions(...)\
[CATransaction begin];\
[CATransaction setDisableActions:YES];\
__VA_ARGS__\
[CATransaction commit];

#define DPCATEGORY_CHAIN_PROPERTY @property (nonatomic, copy, readonly)

#define DPCATEGORY_STRONG_PROPERTY @property (nonatomic, strong, readonly)

#define DPCATEGORY_CHAIN_IMPLEMENTATION(DPMethod,DPParaType, DPProperty, DPModelType, DPPropertyClass)\
- (DPModelType  _Nonnull (^)(DPParaType))DPMethod{\
return ^ (DPParaType DPMethod){\
    ((DPPropertyClass *)self.DPProperty).DPMethod = DPMethod;\
    return self;\
};\
}

#define DPCATEGORY_EXINTERFACE(DPClass, modelType)\
@interface DPClass(EXT)\
DPCATEGORY_CHAIN_PROPERTY modelType * makeChain;\
@end


#endif /* DPChainDefine_h */
