//
//  UIApplication+DPCategory.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/7.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIApplication (DPCategory)
+ (UIWindow *)delegateWindow;
+ (id<UIApplicationDelegate>)delegate;
+ (id)rootViewController;
+ (UIWindow *)keyWindow;

/**
 最上层的非TabbarController和NavigationBarController的控制器

 */
+ (UIViewController *)currentTopViewController;
/**
 Documents
 */
@property (nonatomic, readonly) NSURL *documentsURL;
@property (nonatomic, readonly) NSString *documentsPath;

/**
 Caches
 */
@property (nonatomic, readonly) NSURL *cachesURL;
@property (nonatomic, readonly) NSString *cachesPath;

/**
 Library
 */
@property (nonatomic, readonly) NSURL *libraryURL;
@property (nonatomic, readonly) NSString *libraryPath;

@property (nullable, nonatomic, readonly) NSString *appBundleName;

@property (nullable, nonatomic, readonly) NSString *appBundleID;

/**
 是否是从appstore下载

 */

@property (nonatomic, readonly) BOOL isPirated;


/**
 是否是debug状态
 */
@property (nonatomic, readonly) BOOL isBeingDebugged;


@property (nonatomic, readonly) int64_t memoryUsage;


@property (nonatomic, readonly) float cpuUsage;

/**
 增加网络请求数量
 */
- (void)incrementNetworkActivityCount;

/**
 减少网络请求数量
 */
- (void)decrementNetworkActivityCount;

/**
 是否是扩展
 */
+ (BOOL)isAppExtension;

/**
 当为扩展式returnnil
 */
+ (nullable UIApplication *)sharedExtensionApplication;

@end

NS_ASSUME_NONNULL_END
