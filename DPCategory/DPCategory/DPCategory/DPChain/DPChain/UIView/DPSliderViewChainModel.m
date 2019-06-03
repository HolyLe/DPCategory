//
//  DPSliderViewChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/11.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPSliderViewChainModel.h"
#define DPCATEGORY_CHAIN_SLIDER_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_VIEWCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPSliderViewChainModel *,UISlider)

#define DPCATEGORY_CHAIN_SLIDER_METHOND_IMPLEMENTATION(MehodName)\
- (DPSliderViewChainModel * _Nonnull (^)(UIImage * _Nonnull, UIControlState))MehodName{\
return ^ (UIImage *image, UIControlState state){\
    [(UISlider *)self.view MehodName:image forState:state];\
    return self;\
};\
}

DPCATEGORY_VIEW_IMPLEMENTATION(UISlider, DPSliderViewChainModel)
@implementation DPSliderViewChainModel
DPCATEGORY_CHAIN_SLIDER_IMPLEMENTATION(value ,float);
DPCATEGORY_CHAIN_SLIDER_IMPLEMENTATION(minimumValue ,float);
DPCATEGORY_CHAIN_SLIDER_IMPLEMENTATION(maximumValue ,float);
DPCATEGORY_CHAIN_SLIDER_IMPLEMENTATION(minimumValueImage ,UIImage *);
DPCATEGORY_CHAIN_SLIDER_IMPLEMENTATION(maximumValueImage, UIImage *);
DPCATEGORY_CHAIN_SLIDER_IMPLEMENTATION(continuous, BOOL);
DPCATEGORY_CHAIN_SLIDER_IMPLEMENTATION(minimumTrackTintColor, UIColor *);
DPCATEGORY_CHAIN_SLIDER_IMPLEMENTATION(maximumTrackTintColor ,UIColor *);
DPCATEGORY_CHAIN_SLIDER_IMPLEMENTATION(thumbTintColor ,UIColor *);

- (DPSliderViewChainModel * _Nonnull (^)(float, BOOL))setValueAnimated{
    return ^ (float v, BOOL a){
        [(UISlider *)self.view setValue:v animated:a];
        return self;
    };
}



DPCATEGORY_CHAIN_SLIDER_METHOND_IMPLEMENTATION(setThumbImage)
DPCATEGORY_CHAIN_SLIDER_METHOND_IMPLEMENTATION(setMinimumTrackImage);
DPCATEGORY_CHAIN_SLIDER_METHOND_IMPLEMENTATION(setMaximumTrackImage);

@end
#undef DPCATEGORY_CHAIN_SLIDER_IMPLEMENTATION
#undef DPCATEGORY_CHAIN_SLIDER_METHOND_IMPLEMENTATION
