/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Siri/Siri-Structs.h>
#import <UIKitCore/UIView.h>

@class SRUserUtteranceView, UIView;

@interface SRUserUtteranceContainerView : UIView {

	BOOL _showEditingView;
	SRUserUtteranceView* _displayView;
	UIView* _tableView;

}

@property (assign,nonatomic,__weak) SRUserUtteranceView * displayView;              //@synthesize displayView=_displayView - In the implementation block
@property (assign,nonatomic,__weak) UIView * tableView;                             //@synthesize tableView=_tableView - In the implementation block
-(void)setTableView:(UIView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isFirstResponder;
-(double)baselineOffsetFromBottom;
-(void)layoutSubviews;
-(UIView *)tableView;
-(double)firstLineBaselineOffsetFromTop;
-(void)animateToEditWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)animateToDisplayWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(SRUserUtteranceView *)displayView;
-(void)setDisplayView:(SRUserUtteranceView *)arg1 ;
@end

