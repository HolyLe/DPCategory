//
//  DPTextLayerChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/4.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPBaseLayerChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPTextLayerChainModel;
@interface DPTextLayerChainModel : DPBaseLayerChainModel<DPTextLayerChainModel *>
DPCATEGORY_CHAIN_PROPERTY DPTextLayerChainModel * (^ string) (id string);
DPCATEGORY_CHAIN_PROPERTY DPTextLayerChainModel * (^ font) (CFTypeRef font);
DPCATEGORY_CHAIN_PROPERTY DPTextLayerChainModel * (^ fontSize) (CGFloat fontSize);
DPCATEGORY_CHAIN_PROPERTY DPTextLayerChainModel * (^ foregroundColor) (CGColorRef foregroundColor);
DPCATEGORY_CHAIN_PROPERTY DPTextLayerChainModel * (^ wrapped) (BOOL wrapped);
DPCATEGORY_CHAIN_PROPERTY DPTextLayerChainModel * (^ truncationMode) (CATextLayerTruncationMode truncationMode);
DPCATEGORY_CHAIN_PROPERTY DPTextLayerChainModel * (^ alignmentMode) (CATextLayerAlignmentMode alignmentMode);
DPCATEGORY_CHAIN_PROPERTY DPTextLayerChainModel * (^ allowsFontSubpixelQuantization) (BOOL allowsFontSubpixelQuantization);

@end
DPCreateLayer(CATextLayer)
DPCATEGORY_EXINTERFACE(CATextLayer, DPTextLayerChainModel)
NS_ASSUME_NONNULL_END
