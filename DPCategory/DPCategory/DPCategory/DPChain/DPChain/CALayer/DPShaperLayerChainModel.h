//
//  DPShaperLayerChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/4.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPBaseLayerChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPShaperLayerChainModel;
@interface DPShaperLayerChainModel : DPBaseLayerChainModel<DPShaperLayerChainModel *>
DPCATEGORY_CHAIN_PROPERTY DPShaperLayerChainModel * (^ path) (CGPathRef path);
DPCATEGORY_CHAIN_PROPERTY DPShaperLayerChainModel * (^ fillColor) (CGColorRef fillColor);
DPCATEGORY_CHAIN_PROPERTY DPShaperLayerChainModel * (^ fillRule) (CAShapeLayerFillRule fillRule);
DPCATEGORY_CHAIN_PROPERTY DPShaperLayerChainModel * (^ strokeColor) (CGColorRef strokeColor);
DPCATEGORY_CHAIN_PROPERTY DPShaperLayerChainModel * (^ strokeStart) (CGFloat strokeStart);
DPCATEGORY_CHAIN_PROPERTY DPShaperLayerChainModel * (^ strokeEnd) (CGFloat strokeEnd);
DPCATEGORY_CHAIN_PROPERTY DPShaperLayerChainModel * (^ lineWidth) (CGFloat lineWidth);
DPCATEGORY_CHAIN_PROPERTY DPShaperLayerChainModel * (^ miterLimit) (CGFloat miterLimit);
DPCATEGORY_CHAIN_PROPERTY DPShaperLayerChainModel * (^ lineCap) (CAShapeLayerLineCap lineCap);
DPCATEGORY_CHAIN_PROPERTY DPShaperLayerChainModel * (^ lineJoin) (CAShapeLayerLineJoin lineJoin);
DPCATEGORY_CHAIN_PROPERTY DPShaperLayerChainModel * (^ lineDashPhase) (CGFloat lineDashPhase);
DPCATEGORY_CHAIN_PROPERTY DPShaperLayerChainModel * (^ lineDashPattern) (NSArray<NSNumber *> * lineDashPattern);
@end
DPCreateLayer(CAShapeLayer)
DPCATEGORY_EXINTERFACE(CAShapeLayer, DPShaperLayerChainModel)
NS_ASSUME_NONNULL_END
