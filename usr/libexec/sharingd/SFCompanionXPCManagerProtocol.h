/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:54 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFCompanionXPCManagerProtocol <NSObject>
@required
-(void)createCompanionServiceManagerWithIdentifier:(id)arg1 clientProxy:(id)arg2 reply:(/*^block*/id)arg3;
-(void)createStreamsForMessage:(id)arg1 reply:(/*^block*/id)arg2;
-(void)createUnlockManagerWithReply:(/*^block*/id)arg1;
-(void)appleAccountSignedIn;
-(void)appleAccountSignedOut;

@end
