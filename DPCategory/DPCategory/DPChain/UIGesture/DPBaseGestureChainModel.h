//
//  DPBaseGestureChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/31.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPChainDefine.h"

#define DPCATEGORY_CHAIN_GESTURECLASS_IMPLEMENTATION(DPMethod,DPParaType, DPModelType, DPPropertyClass) DPCATEGORY_CHAIN_IMPLEMENTATION(DPMethod,DPParaType, gesture, DPModelType, DPPropertyClass)

#define DPCATEGORY_GESTURE_IMPLEMENTATION(DPClass, modelType)\
@implementation DPClass (EXT)\
- (modelType *)makeChain{\
    return [[modelType alloc] initWithGesture:self];\
}\
@end
NS_ASSUME_NONNULL_BEGIN



@interface DPBaseGestureChainModel <__covariant  ObjectType> : NSObject

- (instancetype)initWithGesture:(UIGestureRecognizer *)gesture;

@property (nonatomic, strong, readonly) UIGestureRecognizer * gesture;

@property (nonatomic, assign, readonly) Class  gestureClass;

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ delegate) (id<UIGestureRecognizerDelegate> delegate);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ enabled) (BOOL enabled);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ cancelsTouchesInView) (BOOL cancelsTouchesInView);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ delaysTouchesBegan) (BOOL delaysTouchesBegan);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ delaysTouchesEnded) (BOOL delaysTouchesEnded);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ allowedTouchTypes) (NSArray<NSNumber *> *allowedTouchTypes);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ allowedPressTypes) (NSArray<NSNumber *> *allowedPressTypes);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ requiresExclusiveTouchType) (BOOL requiresExclusiveTouchType);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ name) (NSString * name);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ requireGestureRecognizerToFail) (UIGestureRecognizer * requireGestureRecognizerToFail);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ addTarget) (id target, SEL action);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ removeTarget) (id target, SEL action);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ addTargetBlock) (void (^) (id gesture));

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ addTargetBlockWithTag) (void (^) (id gesture), NSString *tag);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ removeTargetBlockWithTag) (NSString *tag);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ removeAllTargetBlock)(void);

DPCATEGORY_CHAIN_PROPERTY ObjectType (^ addToSuperView) (UIView *view);

@end
NS_ASSUME_NONNULL_END
