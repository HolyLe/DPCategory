//
//  DPSegmentedControlChainModel.m
//  DPCategory
//
//  Created by 麻小亮 on 2019/1/11.
//  Copyright © 2019 xllpp. All rights reserved.
//

#import "DPSegmentedControlChainModel.h"
#define DPCATEGORY_CHAIN_SEGMENT_IMPLEMENTATION(DPMethod,DPParaType) DPCATEGORY_CHAIN_VIEWCLASS_IMPLEMENTATION(DPMethod,DPParaType, DPSegmentedControlChainModel *,UISegmentedControl)
DPCATEGORY_VIEW_IMPLEMENTATION(UISegmentedControl, DPSegmentedControlChainModel)

#define DPCATEGORY_CHAIN_SEGMENT_METHOD_IMPLEMENTATION(DPTYPE,METHOD)\
- (DPSegmentedControlChainModel * _Nonnull (^)(DPTYPE, NSUInteger))METHOD{\
    return ^ (DPTYPE t, NSUInteger i){\
        [(UISegmentedControl *)self.view METHOD:t forSegmentAtIndex:i];\
        return self;\
    };\
}\

@implementation DPSegmentedControlChainModel

DPCATEGORY_CHAIN_SEGMENT_IMPLEMENTATION(momentary, BOOL)
DPCATEGORY_CHAIN_SEGMENT_IMPLEMENTATION(apportionsSegmentWidthsByContent, BOOL)

- (DPSegmentedControlChainModel * _Nonnull (^)(void))removeAllSegments{
    return ^ (){
        [(UISegmentedControl *)self.view removeAllSegments];
        return self;
    };
}
DPCATEGORY_CHAIN_SEGMENT_METHOD_IMPLEMENTATION(NSString * , setTitle)
DPCATEGORY_CHAIN_SEGMENT_METHOD_IMPLEMENTATION(UIImage * , setImage)
DPCATEGORY_CHAIN_SEGMENT_METHOD_IMPLEMENTATION(CGFloat , setWidth)
DPCATEGORY_CHAIN_SEGMENT_METHOD_IMPLEMENTATION(CGSize, setContentOffset)
DPCATEGORY_CHAIN_SEGMENT_METHOD_IMPLEMENTATION(BOOL , setEnabled)
DPCATEGORY_CHAIN_SEGMENT_IMPLEMENTATION(selectedSegmentIndex, NSInteger)

- (DPSegmentedControlChainModel * _Nonnull (^)(UIImage * _Nonnull, UIControlState, UIBarMetrics))setBackgroundImage{
    return ^ (UIImage * _Nonnull a , UIControlState b, UIBarMetrics c){
        [(UISegmentedControl *)self.view setBackgroundImage:a forState:b barMetrics:c];
        return self;
    };
}

- (DPSegmentedControlChainModel * _Nonnull (^)(UIImage * _Nonnull, UIControlState, UIControlState, UIBarMetrics))setDividerImage{
    return ^ (UIImage * _Nonnull a , UIControlState b, UIControlState b1, UIBarMetrics c){
        [(UISegmentedControl *)self.view setDividerImage:a forLeftSegmentState:b rightSegmentState:b1 barMetrics:c];
        return self;
    };
}

- (DPSegmentedControlChainModel * _Nonnull (^)(NSDictionary<NSAttributedStringKey,id> * _Nonnull, UIControlState))setTitleTextAttributes{
    return ^ (NSDictionary<NSAttributedStringKey,id> * _Nonnull a, UIControlState b){
        [(UISegmentedControl *)self.view setTitleTextAttributes:a forState:b];
        return self;
    };
}


- (DPSegmentedControlChainModel * _Nonnull (^)(UIOffset, UISegmentedControlSegment, UIBarMetrics))setContentPositionAdjustment{
    return ^ (UIOffset a, UISegmentedControlSegment b, UIBarMetrics c){
        [(UISegmentedControl *)self.view setContentPositionAdjustment:a forSegmentType:b barMetrics:c];
        return self;
    };
}

@end
#undef DPCATEGORY_CHAIN_SEGMENT_IMPLEMENTATION
#undef DPCATEGORY_CHAIN_SEGMENT_METHOD_IMPLEMENTATION
