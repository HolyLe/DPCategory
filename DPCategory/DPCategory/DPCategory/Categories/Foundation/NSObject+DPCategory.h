//
//  NSObject+DPCategory.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/9.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSObject (DPCategory)

@property (nonatomic, copy, readonly) NSString * clasName;

+ (NSString *)clasName;

@end

@interface NSObject (SwizzleClassMehtod)
+ (BOOL)swizzleClassMethod:(SEL)originalSel with:(SEL)newSel;
+ (BOOL)swizzleInstanceMethod:(SEL)originalSel with:(SEL)newSel;
@end
@interface NSObject (AssociateObject)

- (void)setAssociateValue:(id)value forKey:(void *)key;

- (void)setAssociateWeakValue:(nullable id)value forKey:(void *)key;

- (id)getAssociateValueByKey:(void *)key;

- (void)removeAllAssociatedValues;

@end

@interface NSObject (PerformSelector)

- (nullable id)performSelectorWithArguments:(SEL)sel, ...;

- (void)performSelectorWithArguments:(SEL)sel delay:(NSTimeInterval)delay, ...;

- (nullable id)performSelectorWaitUntilDone:(BOOL)wait onMainThreadWithArguments:(SEL)sel ,...;

- (nullable id)performSelectorwaitUntilDone:(BOOL)wait withArguments:(SEL)sel onThread:(NSThread *)thread, ...;

- (void)performSelectorWithArgumentsInBackground:(SEL)sel, ...;

@end

NS_ASSUME_NONNULL_END
