/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/PlugIns/CoreRCHIDService.plugin/CoreRCHIDService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CoreCECDeviceDelegate <CoreRCDeviceDelegate>
@optional
-(void)cecDeviceShouldAssertActiveSource:(id)arg1;
-(void)cecDevice:(id)arg1 activeSourceStatusHasChanged:(BOOL)arg2;
-(void)cecDevice:(id)arg1 deckControlPlayHasBeenReceived:(unsigned long long)arg2 fromDevice:(id)arg3;
-(void)cecDevice:(id)arg1 deckControlCommandHasBeenReceived:(unsigned long long)arg2 fromDevice:(id)arg3;
-(void)cecDevice:(id)arg1 deckControlStatusHasBeenUpdated:(unsigned long long)arg2 fromDevice:(id)arg3;
-(void)cecDevice:(id)arg1 featureAbort:(id)arg2;
-(void)cecDevice:(id)arg1 standbyRequestHasBeenReceived:(id)arg2;

@end
