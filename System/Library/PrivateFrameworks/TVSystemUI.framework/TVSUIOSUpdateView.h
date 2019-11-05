/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIProgressView;

@interface TVSUIOSUpdateView : UIView {

	UIImageView* _logo;
	UILabel* _stepText;
	UILabel* _dontUnplugText;
	UIProgressView* _progress;

}
+(id)viewForUpdateStep1of2;
+(id)viewForDownloadStep;
+(id)imageForStep2of2;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setProgressPercent:(float)arg1 ;
-(void)setStepText:(id)arg1 ;
-(void)_setDontUnplugText:(id)arg1 ;
-(CGRect)_frameForStep2Labels;
@end
