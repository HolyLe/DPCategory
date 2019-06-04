//
//  DPTextViewChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2018/12/27.
//  Copyright © 2018 xllpp. All rights reserved.
//

#import "DPBaseScrollViewChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPTextViewChainModel;
@interface DPTextViewChainModel : DPBaseScrollViewChainModel<DPTextViewChainModel *>

DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ delegate)(id<UITextViewDelegate> delegate);

DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ text)(NSString *text);
DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ font)(UIFont *font);
DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ textColor)(UIColor *textColor);

DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ textAlignment)(NSTextAlignment textAlignment);
DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ selectedRange)(NSRange numberOfLines);
DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ editable)(BOOL editable);
DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ selectable)(BOOL selectable);
DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ dataDetectorTypes)(UIDataDetectorTypes dataDetectorTypes);


DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ allowsEditingTextAttributes)(BOOL allowsEditingTextAttributes);
DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ attributedText)(NSAttributedString *attributedText);
DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ typingAttributes)(NSDictionary *typingAttributes);

DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ clearsOnInsertion)(BOOL clearsOnInsertion);

DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ textContainerInset)(UIEdgeInsets textContainerInset);
DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ linkTextAttributes)(NSDictionary *linkTextAttributes);
#pragma mark - UITextInputTraits -
DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ autocapitalizationType)(UITextAutocapitalizationType autocapitalizationType);
DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ autocorrectionType)(UITextAutocorrectionType autocorrectionType);
DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ spellCheckingType)(UITextSpellCheckingType spellCheckingType);
DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ keyboardType)(UIKeyboardType keyboardType);
DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ keyboardAppearance)(UIKeyboardAppearance keyboardAppearance);
DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ returnKeyType)(UIReturnKeyType returnKeyType);
DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ enablesReturnKeyAutomatically)(BOOL enablesReturnKeyAutomatically);
DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ secureTextEntry)(BOOL secureTextEntry);
DPCATEGORY_CHAIN_PROPERTY DPTextViewChainModel *(^ textContentType)(UITextContentType textContentType);
@end
DPCreate(UITextView)
DPCATEGORY_EXINTERFACE(UITextView, DPTextViewChainModel)
NS_ASSUME_NONNULL_END
