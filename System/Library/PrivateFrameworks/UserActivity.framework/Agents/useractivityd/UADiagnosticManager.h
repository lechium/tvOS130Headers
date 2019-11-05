/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <useractivityd/useractivityd-Structs.h>
@interface UADiagnosticManager : NSObject
+(id)sharedManager;
-(id)init;
-(void)submitUserActivityWasSuggestedInfo:(id)arg1 ;
-(void)submitUserActivityWasContinuedInfo:(id)arg1 ;
-(void)submitRemotePasteboardBecameUnavailable:(int)arg1 ;
-(void)submitRemotePasteboardTypeInfoRequested:(id)arg1 ;
-(void)submitLocalPasteboardInfoWasCleared;
-(void)submitRemotePasteboardWasRequested:(id)arg1 ;
-(void)submitDidSendLocalPasteboard:(id)arg1 ;
-(void)submitUserActivityBecameCurrent:(id)arg1 withToken:(const SCD_Struct_UA6*)arg2 ;
-(void)submitUserActivityWasDiscovered:(id)arg1 ;
-(id)firstPartyActivityTypeOrUnknown:(id)arg1 ;
-(void)submitRemotePasteboardBecameAvailable;
-(unsigned long long)roundNum:(unsigned long long)arg1 to:(unsigned long long)arg2 ;
@end
