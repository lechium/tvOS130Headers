/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIPresentationController.h>

@class UIView;

@interface SUICFullScreenBlurPresentationController : UIPresentationController {

	UIView* _fullScreenBlurView;
	unsigned long long _blurStyle;

}

@property (assign,nonatomic) unsigned long long blurStyle;              //@synthesize blurStyle=_blurStyle - In the implementation block
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)presentationTransitionWillBegin;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 blurStyle:(unsigned long long)arg3 ;
-(void)_stageViewsForFadeIn;
-(void)dismissalTransitionWillBegin;
-(void)setBlurStyle:(unsigned long long)arg1 ;
-(unsigned long long)blurStyle;
@end
