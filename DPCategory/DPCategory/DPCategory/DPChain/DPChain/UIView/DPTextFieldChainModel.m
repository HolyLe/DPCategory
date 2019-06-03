//
//  DPTextFieldChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/27.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPTextFieldChainModel.h"
#import "UITextField+DPCategory.h"
#define DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_VIEWCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPTextFieldChainModel *,UITextField)

@implementation DPTextFieldChainModel

DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(text, NSString *);
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(attributedText, NSAttributedString *);

DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(font, UIFont *);
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(textColor, UIColor *);

DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(textAlignment, NSTextAlignment);
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(borderStyle, UITextBorderStyle);

DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(defaultTextAttributes, NSDictionary *);

DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(placeholder, NSString *);
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(attributedPlaceholder, NSAttributedString *);

DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(keyboardType, UIKeyboardType);

DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(clearsOnBeginEditing, BOOL);
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(adjustsFontSizeToFitWidth, BOOL);
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(minimumFontSize, CGFloat);

DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(delegate, id<UITextFieldDelegate>);

DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(background, UIImage *);
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(disabledBackground, UIImage *);

DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(allowsEditingTextAttributes, BOOL);
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(typingAttributes, NSDictionary *);

DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(clearButtonMode, UITextFieldViewMode);
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(leftView, UIView *);
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(leftViewMode, UITextFieldViewMode);
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(rightView, UIView *);
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(rightViewMode, UITextFieldViewMode);
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(limitLength, NSUInteger);
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(inputView, UIView *);
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(inputAccessoryView, UIView *);

#pragma mark - UITextInputTraits -
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(autocapitalizationType, UITextAutocapitalizationType);
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(autocorrectionType, UITextAutocorrectionType)
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(spellCheckingType, UITextSpellCheckingType)

DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(keyboardAppearance, UIKeyboardAppearance);
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(returnKeyType, UIReturnKeyType);
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(enablesReturnKeyAutomatically, BOOL);
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(secureTextEntry, BOOL);
DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION(textContentType, UITextContentType);


- (DPTextFieldChainModel * _Nonnull (^)(UIFont * _Nonnull))placeholderFont{
    return ^(UIFont *font){
        [self.view setValue:font forKeyPath:@"_placeholderLabel.font"];
        return self;
    };
}

- (DPTextFieldChainModel * _Nonnull (^)(UIColor * _Nonnull))placeholderColor{
    return ^(UIColor *color){
        [self.view setValue:color forKeyPath:@"_placeholderLabel.textColor"];
        return self;
    };
}

@end
DPCATEGORY_VIEW_IMPLEMENTATION(UITextField, DPTextFieldChainModel)
#undef DPCATEGORY_CHAIN_TEXTFIELD_IMPLEMENTATION
