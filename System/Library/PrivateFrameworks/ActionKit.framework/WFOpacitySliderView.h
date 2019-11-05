/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIControl.h>

@class WFOpacitySlider, UILabel;

@interface WFOpacitySliderView : UIControl {

	WFOpacitySlider* _slider;
	UILabel* _opacityLabel;

}

@property (nonatomic,__weak,readonly) WFOpacitySlider * slider;              //@synthesize slider=_slider - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * opacityLabel;                //@synthesize opacityLabel=_opacityLabel - In the implementation block
@property (nonatomic,readonly) double opacity; 
-(id)init;
-(void)reset;
-(double)opacity;
-(void)layoutSubviews;
-(void)didChangeOpacityValue:(id)arg1 ;
-(WFOpacitySlider *)slider;
-(UILabel *)opacityLabel;
@end
