//
//  DPSegmentedControlChainModel.h
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/11.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPBaseControlChainModel.h"

NS_ASSUME_NONNULL_BEGIN
@class DPSegmentedControlChainModel;
@interface DPSegmentedControlChainModel : DPBaseControlChainModel<DPSegmentedControlChainModel *>
DPCATEGORY_CHAIN_PROPERTY DPSegmentedControlChainModel* (^ momentary) (BOOL momentary);
DPCATEGORY_CHAIN_PROPERTY DPSegmentedControlChainModel* (^ apportionsSegmentWidthsByContent) (BOOL apportionsSegmentWidthsByContent);
DPCATEGORY_CHAIN_PROPERTY DPSegmentedControlChainModel* (^ removeAllSegments) (void);
DPCATEGORY_CHAIN_PROPERTY DPSegmentedControlChainModel* (^ insertSegmentWithTitle) (NSString * title, NSUInteger index, BOOL animated);
DPCATEGORY_CHAIN_PROPERTY DPSegmentedControlChainModel* (^ insertSegmentWithImage) (UIImage * image, NSUInteger index, BOOL animated);
DPCATEGORY_CHAIN_PROPERTY DPSegmentedControlChainModel* (^ removeSegmentAtIndex) (NSUInteger index);
DPCATEGORY_CHAIN_PROPERTY DPSegmentedControlChainModel* (^ setTitle) (NSString *title, NSUInteger index);
DPCATEGORY_CHAIN_PROPERTY DPSegmentedControlChainModel* (^ setImage) (UIImage *image, NSUInteger index);
DPCATEGORY_CHAIN_PROPERTY DPSegmentedControlChainModel* (^ setWidth) (CGFloat width, NSUInteger index);
DPCATEGORY_CHAIN_PROPERTY DPSegmentedControlChainModel* (^ setContentOffset) (CGSize offset, NSUInteger index);
DPCATEGORY_CHAIN_PROPERTY DPSegmentedControlChainModel* (^ setEnabled) (BOOL enable, NSUInteger index);
DPCATEGORY_CHAIN_PROPERTY DPSegmentedControlChainModel* (^ selectedSegmentIndex) (NSInteger selectedSegmentIndex);
DPCATEGORY_CHAIN_PROPERTY DPSegmentedControlChainModel* (^ setBackgroundImage) (UIImage *image, UIControlState state, UIBarMetrics barMetrics);
DPCATEGORY_CHAIN_PROPERTY DPSegmentedControlChainModel* (^ setDividerImage) (UIImage *image, UIControlState leftState, UIControlState rightState, UIBarMetrics barMetrics);
DPCATEGORY_CHAIN_PROPERTY DPSegmentedControlChainModel* (^ setTitleTextAttributes) (NSDictionary <NSAttributedStringKey ,id>* attributes, UIControlState state);
DPCATEGORY_CHAIN_PROPERTY DPSegmentedControlChainModel* (^ setContentPositionAdjustment) (UIOffset adjustment, UISegmentedControlSegment leftCenterRightOrAlone, UIBarMetrics barMetrics);

@end
DPCreate(UISegmentedControl)
DPCATEGORY_EXINTERFACE(UISegmentedControl, DPSegmentedControlChainModel)
NS_ASSUME_NONNULL_END
