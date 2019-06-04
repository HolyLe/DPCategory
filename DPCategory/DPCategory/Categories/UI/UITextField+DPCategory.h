//
//  UITextField+DPCategory.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/28.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITextField (DPCategory)

- (void)addLeftViewBlock:(UIView * (^) (UITextField *))leftBlock mode:(UITextFieldViewMode)mode;

- (void)addRightViewBlock:(UIView * (^) (UITextField *))rightBlock mode:(UITextFieldViewMode)mode;

- (NSRange)selectedRange;

- (void)selectedText;

- (void)setSelectedRange:(NSRange)range;

/**
 已输入字符串
 */
@property (nonatomic, copy) void (^ editedText) (NSString *text);
/**
 需要结合delegate中的方法
 */
@property (nonatomic, assign) NSUInteger limitLength;

@end

NS_ASSUME_NONNULL_END
