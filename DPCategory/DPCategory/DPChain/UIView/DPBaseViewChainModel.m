//
//  DPBaseViewChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/26.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseViewChainModel.h"
#import "UIView+DPCategory.h"
#import <objc/runtime.h>

#define DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_VIEWCLASS_IMPLEMENTATION(DPMethod,DPParaType, id,UIView)


#define     DPCATEGORY_CHAIN_LAYER_IMPLEMENTATION(DPMethod,DPParaType) \
- (id (^)(DPParaType DPMethod))DPMethod    \
{   \
    return ^id (DPParaType DPMethod) {    \
        self.view.layer.DPMethod = DPMethod;   \
        return self;    \
    };\
}

@interface DPBaseViewChainModel ()
@property (nonatomic, assign) NSInteger  tag;
@end
@implementation DPBaseViewChainModel

- (instancetype)initWithTag:(NSInteger)tag andView:(UIView *)view{
    if (self = [super init]) {
        _tag = tag;
        _view = view;
        _viewClass = [view class];
        [view setTag:tag];
    }
    return self;
}
#pragma mark - frame -
DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(bounds, CGRect)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(frame, CGRect)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(origin, CGPoint)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(x, CGFloat)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(y, CGFloat)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(size, CGSize)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(width, CGFloat)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(height, CGFloat)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(center, CGPoint)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(centerX, CGFloat)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(centerY, CGFloat)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(top, CGFloat)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(bottom, CGFloat)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(left, CGFloat)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(right, CGFloat)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(autoresizingMask, UIViewAutoresizing)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(autoresizesSubviews, BOOL)

- (UIView * _Nonnull (^)(NSInteger))viewWithTag{
    return ^ (NSInteger tag){
        UIView *view = [self.view viewWithTag:tag];
        return view;
    };
}

- (CGFloat (^)(void))visibleAlpha{
    return ^(){
        return [self.view visibleAlpha];
    };
}


- (CGRect (^)(CGRect, UIView * _Nonnull))convertRectTo{
    return  ^(CGRect rect, UIView *view){
        return [self.view convertRectTo:rect :view];
    };
}


- (CGRect (^)(CGRect, UIView * _Nonnull))convertRectFrom{
    return  ^(CGRect rect, UIView *view){
        return [self.view convertRectFrom:rect :view];
    };
}

- (CGPoint (^)(CGPoint, UIView * _Nonnull))convertPointTo{
    return  ^(CGPoint point, UIView *view){
        return [self.view convertPointTo:point :view];
    };
}

- (CGPoint (^)(CGPoint, UIView * _Nonnull))convertPointFrom{
    return  ^(CGPoint point, UIView *view){
        return [self.view convertPointFrom:point :view];
    };
}
#pragma mark - show -

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(backgroundColor, UIColor *)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(tintColor, UIColor *)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(alpha, CGFloat)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(hidden, BOOL)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(clipsToBounds, BOOL)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(opaque, BOOL)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(userInteractionEnabled, BOOL)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(multipleTouchEnabled, BOOL)

DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(contentMode, UIViewContentMode)
DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION(transform, CGAffineTransform)

- (id  _Nonnull (^)(BOOL))endEditing{
    return ^(BOOL end){
        [self.view endEditing:end];
        return self;
    };
}

- (id  _Nonnull (^)(UIView * _Nonnull))addToSuperView{
    return ^(UIView *superView){
        [superView addSubview:self.view];
        return self;
    };
}

- (id  _Nonnull (^)(UIView * _Nonnull))addSubView{
    return ^(UIView *subView){
        [self.view addSubview:subView];
        return self;
    };
}

- (id  _Nonnull (^)(UIGestureRecognizer * _Nonnull))addGesture{
    return ^(UIGestureRecognizer *ges){
        if (!ges) return self;
        [self.view addGestureRecognizer:ges];
        return self;
    };
}

- (id  _Nonnull (^)(UIGestureRecognizer * _Nonnull))removeGesture{
    return ^(UIGestureRecognizer *ges){
        if (!ges) return self;
        [self.view removeGestureRecognizer:ges];
        return self;
    };
}

- (id  _Nonnull (^)(UIGestureRecognizer * _Nonnull, NSString * _Nonnull))addGestureWithTag{
    return ^(UIGestureRecognizer *ges, NSString *tag){
        if (!tag) return self;
        NSMutableDictionary *dic = [self DP_category_gestureDic];
        if ([dic.allKeys containsObject:tag]) {
            self.removeGestureByTag(tag);
        }
        self.addGesture(ges);
        [dic setObject:ges forKey:tag];
        return self;
    };
}

- (id  _Nonnull (^)(NSString * _Nonnull))removeGestureByTag{
    return ^(NSString *tag){
        if (!tag) return self;
        NSMutableDictionary *dic = [self DP_category_gestureDic];
        UIGestureRecognizer *ges = [dic objectForKey:tag];
        self.removeGesture(ges);
        [dic removeObjectForKey:tag];
        return self;
    };
}

- (UIGestureRecognizer * (^)(NSString * ))getGestureByTag{
    return ^(NSString *tag){
        UIGestureRecognizer *ges;
        if (!tag) {
            NSMutableDictionary *dic = [self DP_category_gestureDic];
            ges = [dic objectForKey:tag];
        }
        return ges;
    };
}

- (NSMutableDictionary *)DP_category_gestureDic{
    NSMutableDictionary *_dic = objc_getAssociatedObject(self, @selector(DP_category_gestureDic));
    if (!_dic) {
        _dic = [NSMutableDictionary dictionary];
        objc_setAssociatedObject(self, @selector(DP_category_gestureDic), _dic, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    }
    return _dic;
}

- (id  _Nonnull (^)(UIView * _Nonnull))bringSubViewToFront{
    return ^ (UIView *view){
        [self.view bringSubviewToFront:view];
        return self;
    };
}

- (id  _Nonnull (^)(UIView * _Nonnull))sendSubViewToBack{
    return ^ (UIView *view){
        [self.view sendSubviewToBack:view];
        return self;
    };
}

- (id  _Nonnull (^)(UIView * _Nonnull, UIView * _Nonnull))exchangeSubView{
    return ^(UIView *v1, UIView *v2){
        NSArray *subs = self.view.subviews;
        NSInteger index1 = [subs indexOfObject:v1];
        NSInteger index2 = [subs indexOfObject:v2];
        if (index1 != NSNotFound && index2 != NSNotFound) {
            if (index2 != index1) {
                [self.view exchangeSubviewAtIndex:index1 withSubviewAtIndex:index2];
            }
        }
        return self;
    };
}

- (id  _Nonnull (^)(NSInteger, NSInteger))exchangeSubviewWithIndex{
    return ^(NSInteger v1, NSInteger v2){
        NSInteger count = self.view.subviews.count;
        if (v1 < count && v1 > 0 && v2 < count && v2 > 0 && v1 != v2) {
            [self.view exchangeSubviewAtIndex:v1 withSubviewAtIndex:v2];
        }
        return self;
    };
}


- (id  _Nonnull (^)(UIView * _Nonnull, UIView * _Nonnull))insertSubViewAbove{
    return ^(UIView *above, UIView *below){
        if (!above) return self;
        if (!below) {
            below = [self.view.subviews lastObject];
        }
        [self.view insertSubview:above aboveSubview:below];
        return self;
    };
}

- (id  _Nonnull (^)(UIView * _Nonnull, UIView * _Nonnull))insertSubViewBelow{
    return ^(UIView *below, UIView *above){
        if (!below) return self;
        if (!above) {
            above = [self.view.subviews lastObject];
        }
        [self.view insertSubview:below belowSubview:above];
        return self;
    };
}

- (id  _Nonnull (^)(UIView * _Nonnull, NSInteger))insertSubViewIndex{
    return ^(UIView *view, NSInteger index){
        if (view) {
            [self.view insertSubview:view atIndex:index];
        }
        return self;
    };
}

- (id (^)(CGFloat cornerRadius))cornerRadius
{
    return ^__kindof DPBaseViewChainModel *(CGFloat cornerRadius) {
        [self.view.layer setCornerRadius:cornerRadius];
        return self;
    };
}

- (id (^)(CGFloat borderWidth, UIColor *borderColor))border
{
    return ^__kindof DPBaseViewChainModel *(CGFloat borderWidth, UIColor *borderColor) {
        [self.view.layer setBorderWidth:borderWidth];
        [self.view.layer setBorderColor:borderColor.CGColor];
        return self;
    };
}

- (id (^)(CGSize shadowOffset, CGFloat shadowRadius, UIColor *shadowColor, CGFloat shadowOpacity))shadow
{
    return ^ DPBaseViewChainModel *(CGSize shadowOffset, CGFloat shadowRadius, UIColor *shadowColor, CGFloat shadowOpacity) {
        [self.view.layer setShadowOffset:shadowOffset];
        [self.view.layer setShadowRadius:shadowRadius];
        [self.view.layer setShadowColor:shadowColor.CGColor];
        [self.view.layer setShadowOpacity:shadowOpacity];
        return self;
    };
}

- (id  _Nonnull (^)(float))layerOpacity{
    return ^ (float opacity){
        self.view.layer.opacity = opacity;
        return self;
    };
}

- (id  _Nonnull (^)(BOOL))layerOpaque{
    return ^ (BOOL opaque){
        self.view.layer.opaque = opaque;
        return self;
    };
}

- (id  _Nonnull (^)(UIColor * _Nonnull))layerBackGroundColor{
    return ^ (UIColor *color){
        self.view.layer.backgroundColor = color.CGColor;
        return self;
    };
}

DPCATEGORY_CHAIN_LAYER_IMPLEMENTATION(masksToBounds, BOOL);
DPCATEGORY_CHAIN_LAYER_IMPLEMENTATION(shadowColor, CGColorRef);
DPCATEGORY_CHAIN_LAYER_IMPLEMENTATION(shadowOpacity, CGFloat);
DPCATEGORY_CHAIN_LAYER_IMPLEMENTATION(shadowOffset, CGSize);
DPCATEGORY_CHAIN_LAYER_IMPLEMENTATION(shadowRadius, CGFloat);

DPCATEGORY_CHAIN_LAYER_IMPLEMENTATION(borderWidth, CGFloat);
DPCATEGORY_CHAIN_LAYER_IMPLEMENTATION(borderColor, CGColorRef);
DPCATEGORY_CHAIN_LAYER_IMPLEMENTATION(zPosition, CGFloat);
DPCATEGORY_CHAIN_LAYER_IMPLEMENTATION(anchorPoint, CGPoint);
DPCATEGORY_CHAIN_LAYER_IMPLEMENTATION(shouldRasterize, BOOL);
DPCATEGORY_CHAIN_LAYER_IMPLEMENTATION(rasterizationScale, CGFloat);
DPCATEGORY_CHAIN_LAYER_IMPLEMENTATION(shadowPath, CGPathRef);


- (id  _Nonnull (^)(CATransform3D))layerTransform{
    return ^ (CATransform3D ta){
        self.view.layer.transform = ta;
        return self;
    };
}

- (id  _Nonnull (^)(DPAssignViewLoad _Nonnull))assignTo{
    return ^ (void (^assignTo)(id view)){
        if (assignTo) {
            assignTo(self.view);
        }
        return self;
    };
}

- (id  _Nonnull (^)(void))removeFormSuperView{
    return ^ (){
        [self.view removeFromSuperview];
        return self;
    };
}

- (id  _Nonnull (^)(void))sizeToFit{
    return ^ (){
        [self.view sizeToFit];
        return self;
    };
}

- (id  _Nonnull (^)(void))layoutIfNeeded{
    return ^ (){
        [self.view layoutIfNeeded];
        return self;
    };
}

- (id  _Nonnull (^)(NSInteger))makeTag{
    return ^ (NSInteger tag){
        self.view.tag = tag;
        self.tag = tag;
        return self;
    };
}

- (id  _Nonnull (^)(void))setNeedsLayout{
    return ^ (){
        [self.view setNeedsLayout];
        return self;
    };
}
- (id  _Nonnull (^)(void))setNeedsDisplay{
    return ^ (){
        [self.view setNeedsDisplay];
        return self;
    };
}

- (CGSize (^)(CGSize))sizeToFitSize{
    return ^ (CGSize size){
       return [self.view sizeThatFits:size];
    };
}

- (id (^)(CGRect))setNeedsDisplayRect{
    return ^ (CGRect rect){
        [self.view setNeedsDisplayInRect:rect];
        return self;
    };
}

@end
#undef DPCATEGORY_CHAIN_MASONRY_IMPLEMENTATION

#undef DPCATEGORY_CHAIN_LAYER_IMPLEMENTATION
#undef DPCATEGORY_CHAIN_VIEW_IMPLEMENTATION
