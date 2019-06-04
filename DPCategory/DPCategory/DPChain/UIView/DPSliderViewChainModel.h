//
//  DPSliderViewChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/11.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPBaseControlChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPSliderViewChainModel;
@interface DPSliderViewChainModel : DPBaseControlChainModel<DPSliderViewChainModel *>
DPCATEGORY_CHAIN_PROPERTY DPSliderViewChainModel * (^ value) (float value);
DPCATEGORY_CHAIN_PROPERTY DPSliderViewChainModel * (^ minimumValue) (float minimumValue);
DPCATEGORY_CHAIN_PROPERTY DPSliderViewChainModel * (^ maximumValue) (float maximumValue);
DPCATEGORY_CHAIN_PROPERTY DPSliderViewChainModel * (^ minimumValueImage) (UIImage * minimumValueImage);
DPCATEGORY_CHAIN_PROPERTY DPSliderViewChainModel * (^ maximumValueImage) (UIImage * maximumValueImage);
DPCATEGORY_CHAIN_PROPERTY DPSliderViewChainModel * (^ continuous) (BOOL continuous);
DPCATEGORY_CHAIN_PROPERTY DPSliderViewChainModel * (^ minimumTrackTintColor) (UIColor * minimumTrackTintColor);
DPCATEGORY_CHAIN_PROPERTY DPSliderViewChainModel * (^ maximumTrackTintColor) ( UIColor *maximumTrackTintColor);
DPCATEGORY_CHAIN_PROPERTY DPSliderViewChainModel * (^ thumbTintColor) (UIColor * thumbTintColor);
DPCATEGORY_CHAIN_PROPERTY DPSliderViewChainModel * (^ setThumbImage) (UIImage *image,UIControlState status);
DPCATEGORY_CHAIN_PROPERTY DPSliderViewChainModel * (^ setMinimumTrackImage) (UIImage *image,UIControlState status);
DPCATEGORY_CHAIN_PROPERTY DPSliderViewChainModel * (^ setMaximumTrackImage) (UIImage *image,UIControlState status);
DPCATEGORY_CHAIN_PROPERTY DPSliderViewChainModel * (^ setValueAnimated) (float value, BOOL animated);
@end
DPCreate(UISlider)
DPCATEGORY_EXINTERFACE(UISlider, DPSliderViewChainModel)
NS_ASSUME_NONNULL_END
