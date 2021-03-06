/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Siri/Siri-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView;

@interface SRStarkCancelButton : UIButton {

	UIView* _focusedView;

}

@property (nonatomic,retain) UIView * focusedView;              //@synthesize focusedView=_focusedView - In the implementation block
+(id)button;
+(void)_configureStylingForCancelButton:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(UIView *)focusedView;
-(void)setFocusedView:(UIView *)arg1 ;
-(void)_updateButton:(id)arg1 forFocusedState:(BOOL)arg2 ;
@end

