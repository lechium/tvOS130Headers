/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPUI/CDPPassphraseEntryViewController.h>
#import <CoreCDPUI/DevicePINControllerDelegate.h>

@class NSString;

@interface CDPRemoteUILocalSecretEntryViewController : CDPPassphraseEntryViewController <DevicePINControllerDelegate> {

	BOOL _inlineMode;
	BOOL _finished;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)title;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
-(id)pinInstructionsPrompt;
@end

