//
//  DPUIDatePickerViewChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/11.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPDatePickerViewChainModel.h"
#define DPCATEGORY_CHAIN_DATEPICKER_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_VIEWCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPDatePickerViewChainModel *,UIDatePicker)
@implementation DPDatePickerViewChainModel
DPCATEGORY_CHAIN_DATEPICKER_IMPLEMENTATION(datePickerMode, UIDatePickerMode)
DPCATEGORY_CHAIN_DATEPICKER_IMPLEMENTATION(locale, NSLocale *)
DPCATEGORY_CHAIN_DATEPICKER_IMPLEMENTATION(calendar, NSCalendar *)
DPCATEGORY_CHAIN_DATEPICKER_IMPLEMENTATION(timeZone, NSTimeZone *)
DPCATEGORY_CHAIN_DATEPICKER_IMPLEMENTATION(date, NSDate *)
DPCATEGORY_CHAIN_DATEPICKER_IMPLEMENTATION(minimumDate, NSDate *)
DPCATEGORY_CHAIN_DATEPICKER_IMPLEMENTATION(maximumDate, NSDate *)
DPCATEGORY_CHAIN_DATEPICKER_IMPLEMENTATION(countDownDuration, NSTimeInterval)
DPCATEGORY_CHAIN_DATEPICKER_IMPLEMENTATION(minuteInterval, NSInteger)

- (DPDatePickerViewChainModel * _Nonnull (^)(NSDate * _Nonnull, BOOL))setDateWithAnimated{
    return ^ (NSDate *date, BOOL animated){
        [(UIDatePicker *)self.view setDate:date animated:animated];
        return self;
    };
}

@end
DPCATEGORY_VIEW_IMPLEMENTATION(UIDatePicker, DPDatePickerViewChainModel)
#undef DPCATEGORY_CHAIN_DATEPICKER_IMPLEMENTATION
