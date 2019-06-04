//
//  DPUIDatePickerViewChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/11.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPBaseControlChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPDatePickerViewChainModel;
@interface DPDatePickerViewChainModel : DPBaseControlChainModel<DPDatePickerViewChainModel *>
DPCATEGORY_CHAIN_PROPERTY DPDatePickerViewChainModel * (^ datePickerMode) (UIDatePickerMode datePickerMode);
DPCATEGORY_CHAIN_PROPERTY DPDatePickerViewChainModel * (^ locale) (NSLocale* locale);
DPCATEGORY_CHAIN_PROPERTY DPDatePickerViewChainModel * (^ calendar) (NSCalendar* calendar);
DPCATEGORY_CHAIN_PROPERTY DPDatePickerViewChainModel * (^ timeZone) (NSTimeZone* timeZone);
DPCATEGORY_CHAIN_PROPERTY DPDatePickerViewChainModel * (^ date) (NSDate * date);
DPCATEGORY_CHAIN_PROPERTY DPDatePickerViewChainModel * (^ minimumDate) (NSDate * minimumDate);
DPCATEGORY_CHAIN_PROPERTY DPDatePickerViewChainModel * (^ maximumDate) (NSDate * maximumDate);
DPCATEGORY_CHAIN_PROPERTY DPDatePickerViewChainModel * (^ countDownDuration) (NSTimeInterval countDownDuration);
DPCATEGORY_CHAIN_PROPERTY DPDatePickerViewChainModel * (^ minuteInterval) (NSInteger minuteInterval);
DPCATEGORY_CHAIN_PROPERTY DPDatePickerViewChainModel * (^ setDateWithAnimated) (NSDate *date, BOOL animated);

@end
DPCreate(UIDatePicker)
DPCATEGORY_EXINTERFACE(UIDatePicker, DPDatePickerViewChainModel)

NS_ASSUME_NONNULL_END
