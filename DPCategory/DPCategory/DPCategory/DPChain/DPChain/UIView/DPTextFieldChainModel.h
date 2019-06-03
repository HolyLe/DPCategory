//
//  DPTextFieldChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/27.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseControlChainModel.h"
NS_ASSUME_NONNULL_BEGIN

@class DPTextFieldChainModel;
@interface DPTextFieldChainModel : DPBaseControlChainModel<DPTextFieldChainModel*>

DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ text)(NSString *text);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ attributedText)(NSAttributedString *attributedText);

DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ font)(UIFont *font);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ textColor)(UIColor *textColor);

DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ textAlignment)(NSTextAlignment textAlignment);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ borderStyle)(UITextBorderStyle borderStyle);

DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ defaultTextAttributes)(NSDictionary *defaultTextAttributes);

DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ placeholder)(NSString *placeholder);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ attributedPlaceholder)(NSAttributedString *attributedPlaceholder);

DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ clearsOnBeginEditing)(BOOL clearsOnBeginEditing);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ adjustsFontSizeToFitWidth)(BOOL adjustsFontSizeToFitWidth);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ minimumFontSize)(CGFloat minimumFontSize);

DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ delegate)(id<UITextFieldDelegate> delegate);

DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ background)(UIImage *background);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ disabledBackground)(UIImage *disabledBackground);

DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ allowsEditingTextAttributes)(BOOL allowsEditingTextAttributes);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ typingAttributes)(NSDictionary *typingAttributes);

DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ clearButtonMode)(UITextFieldViewMode clearButtonMode);

DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ leftView)(UIView *leftView);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ leftViewMode)(UITextFieldViewMode leftViewMode);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ rightView)(UIView *rightView);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ rightViewMode)(UITextFieldViewMode rightViewMode);

DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ limitLength) (NSUInteger limitLength);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ inputView)(UIView *inputView);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ inputAccessoryView)(UIView *inputAccessoryView);

DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ placeholderFont)(UIFont *font);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ placeholderColor)(UIColor *color);

#pragma mark - UITextInputTraits -
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ autocapitalizationType)(UITextAutocapitalizationType autocapitalizationType);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ autocorrectionType)(UITextAutocorrectionType autocorrectionType);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ spellCheckingType)(UITextSpellCheckingType spellCheckingType);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ keyboardType)(UIKeyboardType keyboardType);

DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ keyboardAppearance)(UIKeyboardAppearance keyboardAppearance);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ returnKeyType)(UIReturnKeyType returnKeyType);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ enablesReturnKeyAutomatically)(BOOL enablesReturnKeyAutomatically);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ secureTextEntry)(BOOL secureTextEntry);
DPCATEGORY_CHAIN_PROPERTY DPTextFieldChainModel *(^ textContentType)(UITextContentType textContentType);

@end
DPCreate(UITextField)
DPCATEGORY_EXINTERFACE(UITextField, DPTextFieldChainModel)
NS_ASSUME_NONNULL_END
