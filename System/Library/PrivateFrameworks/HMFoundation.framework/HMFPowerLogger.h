/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@interface HMFPowerLogger : HMFObject
+(id)sharedPowerLogger;
-(id)linkTypeDescription:(long long)arg1 ;
-(void)reportConnection:(id)arg1 linkType:(long long)arg2 ;
-(void)reportIncomingAdvertisementChange:(id)arg1 ;
-(void)reportIncomingIPEvent:(id)arg1 ;
-(void)reportIncomingCloudPush:(id)arg1 ;
-(void)reportIncomingIDSPush:(id)arg1 fromToken:(id)arg2 ;
-(void)reportIncomingLoxyMessage:(id)arg1 ;
@end

