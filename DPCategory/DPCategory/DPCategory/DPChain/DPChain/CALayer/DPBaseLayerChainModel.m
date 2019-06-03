//
//  DPBaseLayerChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/3.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPBaseLayerChainModel.h"

#define DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_LAYERCLASS_IMPLEMENTATION(DPMethod,DPParaType, id, CALayer)

@implementation DPBaseLayerChainModel

- (instancetype)initWithLayer:(CALayer *)layer{
    if (self = [super init]) {
        _layer = layer;
        _layerClass = [layer class];
    }
    return self;
}

DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(bounds, CGRect)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(frame, CGRect)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(position, CGPoint)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(anchorPoint, CGPoint)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(zPosition, CGFloat)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(anchorPointZ, CGFloat)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(rasterizationScale, CGFloat)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(transform, CATransform3D)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(affineTransform, CGAffineTransform)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(hidden, BOOL)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(doubleSided, BOOL)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(geometryFlipped, BOOL)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(masksToBounds, BOOL)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(mask, CALayer *)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(contents, id)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(contentsRect, CGRect)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(contentsGravity, CALayerContentsGravity)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(contentsScale, CGFloat)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(contentsCenter, CGRect)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(contentsFormat, CALayerContentsFormat)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(minificationFilter, CALayerContentsFilter)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(magnificationFilter, CALayerContentsFilter)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(minificationFilterBias, float)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(opaque, BOOL)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(needsDisplayOnBoundsChange, BOOL)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(drawsAsynchronously, BOOL)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(edgeAntialiasingMask, CAEdgeAntialiasingMask)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(allowsEdgeAntialiasing, BOOL)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(backgroundColor, CGColorRef)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(cornerRadius, CGFloat)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(maskedCorners, CACornerMask)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(borderWidth, CGFloat)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(borderColor, CGColorRef)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(opacity, float)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(allowsGroupOpacity, BOOL)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(compositingFilter, id)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(filters, NSArray*)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(backgroundFilters, NSArray*)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(shouldRasterize, BOOL)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(shadowColor, CGColorRef)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(shadowOpacity, float)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(shadowOffset, CGSize)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(shadowRadius, CGFloat)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(shadowPath, CGPathRef)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(name, NSString *)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(delegate, id <CALayerDelegate>)
DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION(style, NSDictionary *)

- (id  _Nonnull (^)( NSDictionary<NSString *,id<CAAction>>  * _Nonnull))actions{
    return ^ (NSDictionary<NSString *,id<CAAction>> * dic){
        self.layer.actions = dic;
        return self;
    };
}

- (id  _Nonnull (^)(void))removeFromSuperlayer{
    return ^(){
        [self.layer removeFromSuperlayer];
        return self;
    };
}

- (id  _Nonnull (^)(CALayer * _Nonnull))addToSuperLayer{
    return ^ (CALayer *layer){
        [layer addSublayer:self.layer];
        return self;
    };
}

- (id  _Nonnull (^)(CALayer * _Nonnull, CALayer * _Nonnull))insertSublayerBelow{
    return ^ (CALayer *layer, CALayer *belowLayer){
        [self.layer insertSublayer:layer below:belowLayer];
        return self;
    };
}

- (id  _Nonnull (^)(CALayer * _Nonnull, CALayer * _Nonnull))insertSublayerAbove{
    return ^ (CALayer *layer, CALayer *above){
        [self.layer insertSublayer:layer above:above];
        return self;
    };
}

- (id  _Nonnull (^)(CALayer * _Nonnull, NSInteger))insertSublayerIndex{
    return ^ (CALayer *layer, NSInteger index){
        [self.layer insertSublayer:layer atIndex:(unsigned)index];
        return self;
    };
}

- (id  _Nonnull (^)(CALayer * _Nonnull, CALayer * _Nonnull))relpaceSublayer{
    return ^ (CALayer *oldLayer, CALayer *newLayer){
        [self.layer replaceSublayer:oldLayer with:newLayer];
        return self;
    };
}

- (id  _Nonnull (^)(CALayer * _Nonnull))setToMask{
    return ^ (CALayer *layer){
        layer.mask = self.layer;
        return self;
    };
}

- (id  _Nonnull (^)(CAAnimation * _Nonnull, NSString * _Nonnull))addAnimation{
    return ^ (CAAnimation *ani, NSString *key){
        if (ani && key) {
            [self.layer addAnimation:ani forKey:key];
        }
        return self;
    };
}

- (id  _Nonnull (^)(NSString * _Nonnull))removeAnimation{
    return ^ (NSString *key){
        if (key) {
            [self.layer removeAnimationForKey:key];
        }
        return self;
    };
}

- (id  _Nonnull (^)(void))removeAllAnimation{
    return ^ (){
        [self.layer removeAllAnimations];
        return self;
    };
}

- (id  _Nonnull (^)(DPAssignLayerLoad _Nonnull))assignTo{
    return ^ (void (^assignTo)(id layer)){
        if (assignTo) {
            assignTo(self);
        }
        return self;
    };
}

@end
#undef DPCATEGORY_CHAIN_BASELAYER_IMPLEMENTATION
