/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AWDMetricReporter : NSObject
+(void)reportPiggyBackWithSuccess:(BOOL)arg1 error:(id)arg2 ;
+(void)reportStateMachineCompletionShouldCompleteSignIn:(BOOL)arg1 cloudDataProtectionEnabled:(BOOL)arg2 error:(id)arg3 ;
+(void)reportStateMachineLockAssertionWithError:(id)arg1 ;
+(void)reportStateMachineEnableCDPResult:(id)arg1 ;
+(void)reportStateMachineCircleJoinWithResult:(id)arg1 error:(id)arg2 ;
+(void)reportStateMachineRepairHSA2AuthWithError:(id)arg1 ;
+(void)reportStateMachineRepairCircleAuth;
+(void)reportStateMachineRecoveryWithSecretType:(long long)arg1 userDidReset:(BOOL)arg2 error:(id)arg3 ;
@end

