//
//  DPBaseGestureChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/31.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseGestureChainModel.h"
#import "UIGestureRecognizer+DPCategory.h"

#define DPCATEGORY_CHAIN_GESTURE_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_GESTURECLASS_IMPLEMENTATION(DPMethod,DPParaType, id, UIGestureRecognizer)

@implementation DPBaseGestureChainModel

- (instancetype)initWithGesture:(UIGestureRecognizer *)gesture{
    if (self = [super init]) {
        _gesture = gesture;
        _gestureClass = [gesture class];
    }
    return self;
}

DPCATEGORY_CHAIN_GESTURE_IMPLEMENTATION(delegate, id<UIGestureRecognizerDelegate>)
DPCATEGORY_CHAIN_GESTURE_IMPLEMENTATION(enabled, BOOL)
DPCATEGORY_CHAIN_GESTURE_IMPLEMENTATION(cancelsTouchesInView, BOOL)
DPCATEGORY_CHAIN_GESTURE_IMPLEMENTATION(delaysTouchesBegan, BOOL)
DPCATEGORY_CHAIN_GESTURE_IMPLEMENTATION(delaysTouchesEnded, BOOL)
DPCATEGORY_CHAIN_GESTURE_IMPLEMENTATION(requiresExclusiveTouchType, BOOL)
DPCATEGORY_CHAIN_GESTURE_IMPLEMENTATION(allowedTouchTypes, NSArray<NSNumber *> *)
DPCATEGORY_CHAIN_GESTURE_IMPLEMENTATION(allowedPressTypes, NSArray<NSNumber *> *)
DPCATEGORY_CHAIN_GESTURE_IMPLEMENTATION(name, NSString *)

- (id  _Nonnull (^)(UIGestureRecognizer * _Nonnull))requireGestureRecognizerToFail{
    return ^ (UIGestureRecognizer *gesture){
        if (gesture) {
            [self.gesture requireGestureRecognizerToFail:gesture];
        }
        return self;
    };
}

- (id  _Nonnull (^)(id _Nonnull, SEL _Nonnull))addTarget{
    return ^ (id target, SEL action){
        if (target && action) {
            [self.gesture addTarget:target action:action];
        }
        return self;
    };
}

- (id  _Nonnull (^)(id _Nonnull, SEL _Nonnull))removeTarget{
    return ^ (id target, SEL action){
        if (target) {
            [self.gesture removeTarget:target action:action];
        }
        return self;
    };
}

- (id  _Nonnull (^)(void (^ _Nonnull)(id _Nonnull)))addTargetBlock{
    return ^ (GestureTargetAction action){
        if (action) {
            [self.gesture addTargetBlock:action];
        }
        return self;
    };
}

- (id  _Nonnull (^)(void (^ _Nonnull)(id _Nonnull), NSString * _Nonnull))addTargetBlockWithTag{
    return ^ (GestureTargetAction action, NSString *tag){
        if (action) {
            [self.gesture addTargetBlock:action tag:tag];
        }
        return self;
    };
}

- (id  _Nonnull (^)(NSString * _Nonnull))removeTargetBlockWithTag{
    return ^ (NSString *tag){
        if (tag) {
            [self.gesture removeTargetBlockByTag:tag];
        }
        return self;
    };
}

- (id  _Nonnull (^)(void))removeAllTargetBlock{
    return ^(){
        [self.gesture removeAllTargetBlock];
        return self;
    };
}

- (id  _Nonnull (^)(UIView * _Nonnull))addToSuperView{
    return ^ (UIView *superView){
        if (superView) {
            [superView addGestureRecognizer:self.gesture];
        }
        return self;
    };
}

@end
#undef DPCATEGORY_CHAIN_GESTURE_IMPLEMENTATION
