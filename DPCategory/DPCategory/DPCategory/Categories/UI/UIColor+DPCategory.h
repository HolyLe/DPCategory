//
//  UIColor+DPCategory.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/27.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (DPCategory)

+ (UIColor *)dp_colorWithHexString:(NSString *)hexString;

+ (UIColor *)dp_colorWithHexString:(NSString *)hexStr alpha:(CGFloat)alpha;

+ (UIColor *)dp_randomColor;

+ (UIColor *)dp_percentR:(NSInteger)r g:(NSInteger)g b:(NSInteger)b alpha:(CGFloat)alpha;

- (NSString *)dp_hexString;

- (NSString *)dp_hexStringWithAplha;

- (UIColor *)dp_addColor:(UIColor *)acolor blendMode:(CGBlendMode)blendModel;

@property (nonatomic, assign, readonly) CGFloat  dp_red;

@property (nonatomic, assign, readonly) CGFloat  dp_green;

@property (nonatomic, assign, readonly) CGFloat  dp_blue;

@property (nonatomic, assign, readonly) CGFloat  dp_alpha;

@property (nonatomic, assign, readonly) CGFloat  dp_hue;

@property (nonatomic, assign, readonly) CGFloat  dp_saturation;

@property (nonatomic, assign, readonly) CGFloat  dp_brightness;

@property (nonatomic, readonly) CGColorSpaceModel dp_colorSpaceModel;

@property (nonatomic, readonly) NSString *dp_colorSpaceString;

/**
 反色调
 */
- (UIColor *)dp_antiColor;

@end

static inline UIColor *UIColorHexString(NSString *hexString){
    return [UIColor dp_colorWithHexString:hexString];
}

static inline UIColor *UIColorHexAlpha(NSString *hexString, CGFloat alpha){
    return [UIColor dp_colorWithHexString:hexString alpha:alpha];
}
NS_ASSUME_NONNULL_END
