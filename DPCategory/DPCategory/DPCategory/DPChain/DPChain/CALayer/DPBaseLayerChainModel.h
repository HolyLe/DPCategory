//
//  DPBaseLayerChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/3.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPChainDefine.h"

#define DPCATEGORY_CHAIN_LAYERCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPModelType, DPPropertyClass) DPCATEGORY_CHAIN_IMPLEMENTATION(DPMethod,DPParaType, layer, DPModelType, DPPropertyClass)

#define DPCATEGORY_LAYER_IMPLEMENTATION(DPClass, modelType)\
@implementation DPClass (EXT)\
- (modelType *)makeChain{\
    return [[modelType alloc] initWithLayer:self];\
}\
@end
NS_ASSUME_NONNULL_BEGIN


typedef void(^DPAssignLayerLoad)(__kindof CALayer *layer);
@interface DPBaseLayerChainModel <__covariant  ObjectType> : NSObject

- (instancetype)initWithLayer:(CALayer *)layer;

@property (nonatomic, strong, readonly) __kindof CALayer * layer;

@property (nonatomic, assign, readonly) Class  layerClass;

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ bounds) (CGRect bounds);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ position) (CGPoint position);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ zPosition) (CGFloat zPosition);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ anchorPoint) (CGPoint anchorPoint);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ anchorPointZ) (CGFloat anchorPointZ);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ transform) (CATransform3D transform);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ affineTransform) (CGAffineTransform affineTransform);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ frame) (CGRect frame);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ hidden) (BOOL hidden);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ doubleSided) (BOOL doubleSided);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ geometryFlipped) (BOOL geometryFlipped);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ removeFromSuperlayer) (void);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ addToSuperLayer) (CALayer * layer);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ insertSublayerBelow) (CALayer *layer, CALayer * below);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ insertSublayerIndex) (CALayer *layer, NSInteger index);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ insertSublayerAbove) (CALayer *layer, CALayer *above);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ relpaceSublayer) (CALayer *oldLayer, CALayer *newLayer);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ setToMask) (CALayer * toLayer);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ mask) (CALayer * maskLayer);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ masksToBounds) (BOOL masksToBounds);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ contents) (id contents);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ contentsRect) (CGRect contentsRect);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ contentsGravity) (CALayerContentsGravity contentsGravity);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ contentsScale) (CGFloat contentsScale);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ contentsCenter) (CGRect contentsCenter);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ contentsFormat) (CALayerContentsFormat contentsFormat);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ minificationFilter) (CALayerContentsFilter minificationFilter);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ magnificationFilter) (CALayerContentsFilter magnificationFilter);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ minificationFilterBias) (float minificationFilterBias);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ opaque) (BOOL opaque);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ needsDisplayOnBoundsChange) (BOOL needsDisplayOnBoundsChange);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ drawsAsynchronously) (BOOL drawsAsynchronously);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ edgeAntialiasingMask) (CAEdgeAntialiasingMask edgeAntialiasingMask);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ allowsEdgeAntialiasing) (BOOL allowsEdgeAntialiasing);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ backgroundColor) (CGColorRef backgroundColor);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ cornerRadius) (CGFloat cornerRadius);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ maskedCorners) (CACornerMask maskedCorners);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ borderWidth) (CGFloat borderWidth);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ borderColor) (CGColorRef borderColor);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ opacity) (float opacity);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ allowsGroupOpacity) (BOOL allowsGroupOpacity);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ compositingFilter) (id compositingFilter);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ filters) (NSArray* filters);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ backgroundFilters) (NSArray* backgroundFilters);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ shouldRasterize) (BOOL shouldRasterize);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ rasterizationScale) (CGFloat rasterizationScale);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ shadowColor) (CGColorRef shadowColor);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ shadowOpacity) (float shadowOpacity);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ shadowOffset) (CGSize shadowOffset);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ shadowRadius) (CGFloat shadowRadius);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ shadowPath) (CGPathRef shadowPath);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ actions) (NSDictionary<NSString *, id<CAAction>> * actions);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ addAnimation) (CAAnimation *animation, NSString *key);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ removeAnimation) (NSString * key);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ removeAllAnimation) (void);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ name) (NSString * name);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ delegate) (id <CALayerDelegate> delegate);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ style) (NSDictionary * style);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ assignTo) (DPAssignLayerLoad assignTo);
@end

NS_ASSUME_NONNULL_END
