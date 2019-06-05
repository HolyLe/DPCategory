//
//  DPBaseViewChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/26.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPChainDefine.h"


#define DPCATEGORY_CHAIN_VIEWCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPModelType, DPPropertyClass) DPCATEGORY_CHAIN_IMPLEMENTATION(DPMethod,DPParaType, view, DPModelType, DPPropertyClass)

#define DPCATEGORY_VIEW_IMPLEMENTATION(DPClass, modelType)\
@implementation DPClass (EXT)\
- (modelType *)makeChain{\
    return [[modelType alloc] initWithTag:self.tag andView:self];\
}\
@end
NS_ASSUME_NONNULL_BEGIN


typedef void(^DPAssignViewLoad)(__kindof UIView *view);
@interface DPBaseViewChainModel <__covariant  ObjectType> : NSObject

- (instancetype)initWithTag:(NSInteger)tag andView:(UIView *)view;

@property (nonatomic, assign, readonly) NSInteger tag;

@property (nonatomic, strong, readonly) __kindof UIView *view;

@property (nonatomic, assign, readonly) Class viewClass;

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ bounds) (CGRect frame);
#pragma mark - frame -
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ frame) (CGRect frame);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ origin) (CGPoint origin);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ x) (CGFloat x);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ y) (CGFloat y);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ size) (CGSize size);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ width) (CGFloat width);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ height) (CGFloat height);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ center) (CGPoint center);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ centerX) (CGFloat centerX);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ centerY) (CGFloat centerY);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ top) (CGFloat top);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ left) (CGFloat left);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ bottom) (CGFloat bottom);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ right) (CGFloat right);


DPCATEGORY_CHAIN_PROPERTY CGFloat (^ visibleAlpha) (void);

DPCATEGORY_CHAIN_PROPERTY CGRect (^ convertRectTo) (CGRect rect, UIView * toView);

DPCATEGORY_CHAIN_PROPERTY CGRect (^ convertRectFrom) (CGRect rect, UIView * toView);

DPCATEGORY_CHAIN_PROPERTY CGPoint (^ convertPointTo) (CGPoint point, UIView * toView);

DPCATEGORY_CHAIN_PROPERTY CGPoint (^ convertPointFrom) (CGPoint point, UIView * toView);

DPCATEGORY_CHAIN_PROPERTY UIView *(^ viewWithTag) (NSInteger tag);

#pragma mark - show -

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ backgroundColor) (UIColor *backgroundColor);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ tintColor) (UIColor *tintColor);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ alpha) (CGFloat alpha);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ hidden) (BOOL hidden);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ clipsToBounds) (BOOL clipsToBounds);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ opaque) (BOOL opaque);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ userInteractionEnabled) (BOOL userInteractionEnabled);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ multipleTouchEnabled) (BOOL multipleTouchEnabled);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ endEditing) (BOOL endEditing);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ contentMode) (UIViewContentMode contentMode);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ transform) (CGAffineTransform transform);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ autoresizingMask) (UIViewAutoresizing autoresizingMask);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ autoresizesSubviews) (BOOL autoresizesSubviews);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ makeTag) (NSInteger tag);

#pragma mark - control -

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ addToSuperView) (UIView *superView);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ addSubView) (UIView *subView);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ addGesture) (UIGestureRecognizer *gesture);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ removeGesture) (UIGestureRecognizer *gesture);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ addGestureWithTag) (UIGestureRecognizer *gesture, NSString *tag);

@property (nonatomic, strong, readonly) UIGestureRecognizer * (^ getGestureByTag) (NSString * tag);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ removeGestureByTag) (NSString *tag);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ bringSubViewToFront) (UIView *view);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ sendSubViewToBack) (UIView *view);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ exchangeSubView) (UIView *front, UIView *backView);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ exchangeSubviewWithIndex) (NSInteger front, NSInteger back);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ insertSubViewBelow) (UIView* below, UIView * above);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ insertSubViewAbove) (UIView* above, UIView * below);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ insertSubViewIndex) (UIView* above, NSInteger index);


#pragma mark - layer -

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ shouldRasterize)(BOOL shouldRasterize);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ layerOpacity)(float layerOpacity);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ layerBackGroundColor)(UIColor * backgroundColor);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ layerOpaque)(BOOL opaque);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ rasterizationScale)(CGFloat rasterizationScale);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ masksToBounds)(BOOL masksToBounds);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ cornerRadius)(CGFloat cornerRadius);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ border)(CGFloat borderWidth, UIColor *borderColor);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ borderWidth)(CGFloat borderWidth);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ borderColor)(CGColorRef borderColor);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ zPosition)(CGFloat zPosition);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ anchorPoint)(CGPoint anchorPoint);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ shadow)(CGSize shadowOffset, CGFloat shadowRadius, UIColor *shadowColor, CGFloat shadowOpacity);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ shadowColor)(CGColorRef shadowColor);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ shadowOpacity)(CGFloat shadowOpacity);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ shadowOffset)(CGSize shadowOffset);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ shadowRadius)(CGFloat shadowRadius);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ layerTransform)(CATransform3D transform);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ shadowPath) (CGPathRef shadowPath);

#pragma mark - method -



DPCATEGORY_CHAIN_PROPERTY ObjectType (^ assignTo)(DPAssignViewLoad assignTo);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ sizeToFit) (void);
DPCATEGORY_CHAIN_PROPERTY CGSize (^ sizeToFitSize) (CGSize size);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ removeFormSuperView) (void);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ layoutIfNeeded) (void);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ setNeedsLayout) (void);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ setNeedsDisplay) (void);
DPCATEGORY_CHAIN_PROPERTY ObjectType (^ setNeedsDisplayRect) (CGRect rect);
@end

NS_ASSUME_NONNULL_END
