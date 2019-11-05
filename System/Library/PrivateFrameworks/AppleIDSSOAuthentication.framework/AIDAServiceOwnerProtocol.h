/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AIDAServiceOwnerProtocol <NSObject>
@required
+(id)supportedServices;
-(id)initWithAccountStore:(id)arg1;
-(id)altDSIDForAccount:(id)arg1 service:(id)arg2;
-(id)accountForService:(id)arg1;
-(id)DSIDForAccount:(id)arg1 service:(id)arg2;
-(id)nameComponentsForAccount:(id)arg1 service:(id)arg2;
-(void)signInService:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;
-(void)signOutService:(id)arg1 withContext:(id)arg2 completion:(/*^block*/id)arg3;

@end
