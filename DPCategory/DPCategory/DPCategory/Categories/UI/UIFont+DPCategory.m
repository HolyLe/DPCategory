//
//  DPTabBarController.m
//  DiamondPark
//
//  Created by 麻小亮 on 2019/2/18.
//  Copyright © 2019 DiamondPark. All rights reserved.
//

#import "UIFont+DPCategory.h"

#define FontScale [UIFont screenWidth] / 375.0

@implementation UIFont (DPCategory)

+ (CGFloat)screenWidth{
    static CGFloat width = 0;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        width = MIN([UIScreen mainScreen].bounds.size.height, [UIScreen mainScreen].bounds.size.width);
    });
    return width;
}

+ (UIFont *)wt_fontScaleWithName:(NSString *)fontName fontSize:(CGFloat)fontSize{
    return [self wt_fontWithName:fontName fontSize:fontSize * FontScale];
}

+ (UIFont *)wt_fontWithName:(NSString *)fontName fontSize:(CGFloat)fontSize{
    BOOL isLoadSystem = fontName.length == 0;
    UIFont *font = nil;
    if (!isLoadSystem) {
        font = [UIFont fontWithName:fontName size:fontSize];
        isLoadSystem = font == nil;
    }
    if (isLoadSystem) {
        return [self systemFontOfSize:fontSize];
    }else{
        return font;
    }
}

+ (UIFont*)fontType:(fontType)type size:(CGFloat)size{
    static NSDictionary *fontNames = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        NSMutableDictionary *dic = [NSMutableDictionary dictionary];
        [dic setObject:@"" forKey:@(SystemFont)];
        [dic setObject:@"PingFangSC-Light" forKey:@(PingFangLight)];
        [dic setObject:@"PingFangSC-Regular" forKey:@(PingFangReguler)];
        [dic setObject:@"PingFangSC-Medium" forKey:@(PingFangMedium)];
        [dic setObject:@"PingFangSC-Semibold" forKey:@(PingFangSemibold)];
        [dic setObject:@"STHeitiSC-Light" forKey:@(STHeitiSCLight)];
        [dic setObject:@"STHeitiSC-Medium" forKey:@(STHeitiSCMedium)];
        [dic setObject:@"DINAlternate-Bold" forKey:@(DinaAlternateBold)];
        fontNames = dic.copy;
    });
    if (type >= fontNames.count || type < 0) {
        type = 0;
    }
    return [self wt_fontWithName:fontNames[@(type)] fontSize:size];
}

+ (UIFont*)fontScaleType:(fontType)type size:(CGFloat)size{
    return [self fontType:type size:size * FontScale];
}

+ (UIFont*)PingFangSCRegularAndSize:(CGFloat)size{
    return [self fontType:PingFangReguler size:size];
}

+ (UIFont*)PingFangSCLightAndSize:(CGFloat)size{
    return [self fontType:PingFangLight size:size];
}

+ (UIFont*)PingFangSCMediumAndSize:(CGFloat)size{
    return [self fontType:PingFangMedium size:size];
}

+ (UIFont *)PingFangSCScaleMediumAndSize:(CGFloat)size{
    return [self fontScaleType:PingFangMedium size:size];
}


+ (UIFont *)PingFangSCSemiboldAndSize:(CGFloat)size{
    return [self fontType:PingFangSemibold size:size];
}

+ (UIFont *)DINAlternateBoldAndSize:(CGFloat)size{
    return [self fontType:DinaAlternateBold size:size];
}

+ (UIFont *)STHeitiSCLightAndSize:(CGFloat)size{
    return [self fontType:STHeitiSCLight size:size];
}

+ (UIFont *)STHeitiSCMedium:(CGFloat)size{
    return [self fontType:STHeitiSCMedium size:size];
}

+ (UIFont *)LatoBoldAndSize:(CGFloat)size{
    return [self fontType:SystemFont size:size];
}
@end
