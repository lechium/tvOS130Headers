/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSAppleIDRegistrationCenterListener
@optional
-(void)center:(id)arg1 startedAuthenticating:(id)arg2;
-(void)center:(id)arg1 succeededAuthentication:(id)arg2;
-(void)center:(id)arg1 succeededInitialRegionQuery:(id)arg2;
-(void)center:(id)arg1 succeededRegionValidation:(id)arg2 regionID:(id)arg3 phoneNumber:(id)arg4 extraContext:(id)arg5 verified:(BOOL)arg6;
-(void)center:(id)arg1 failedAuthentication:(id)arg2 error:(long long)arg3 info:(id)arg4;
-(void)center:(id)arg1 failedRegionValidation:(id)arg2 error:(long long)arg3 info:(id)arg4;

@end

