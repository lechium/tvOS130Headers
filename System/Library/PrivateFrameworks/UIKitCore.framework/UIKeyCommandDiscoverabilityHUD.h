/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, _UIKeyCommandDiscoverabilityHUDWindow;

@interface UIKeyCommandDiscoverabilityHUD : NSObject {

	NSTimer* _HUDPopTimer;
	_UIKeyCommandDiscoverabilityHUDWindow* _window;
	BOOL _commandKeyIsDown;

}
+(id)sharedKeyCommandDiscoverabilityHUD;
+(void)clearHUDPopTimer;
+(void)dismissHUD;
-(void)dealloc;
-(void)_dismissHUD;
-(void)_presentHUDWithKeyCommands:(id)arg1 ;
-(void)_scheduleHUDPresentation;
-(void)_applicationWillResignActive;
-(void)handlePhysicalKeyboardEvent:(id)arg1 ;
-(void)_clearHUDPopTimer;
-(void)_didTakeScreenshot;
-(void)_HUDPopTimerFired:(id)arg1 ;
-(id)_performableKeyCommandsWithResponder:(id)arg1 ;
@end
