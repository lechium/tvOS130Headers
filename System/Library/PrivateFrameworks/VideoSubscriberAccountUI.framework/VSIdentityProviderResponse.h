/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSAccountMetadata, VSAccount, VSOptional;

@interface VSIdentityProviderResponse : NSObject {

	BOOL _didCreateAccount;
	VSAccountMetadata* _accountMetadata;
	VSAccount* _account;
	VSOptional* _logoLoadOperation;

}

@property (nonatomic,copy) VSAccountMetadata * accountMetadata;              //@synthesize accountMetadata=_accountMetadata - In the implementation block
@property (nonatomic,retain) VSAccount * account;                            //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL didCreateAccount;                          //@synthesize didCreateAccount=_didCreateAccount - In the implementation block
@property (nonatomic,retain) VSOptional * logoLoadOperation;                 //@synthesize logoLoadOperation=_logoLoadOperation - In the implementation block
-(id)description;
-(id)init;
-(VSAccount *)account;
-(void)setAccount:(VSAccount *)arg1 ;
-(VSAccountMetadata *)accountMetadata;
-(void)setAccountMetadata:(VSAccountMetadata *)arg1 ;
-(void)setLogoLoadOperation:(VSOptional *)arg1 ;
-(VSOptional *)logoLoadOperation;
-(BOOL)didCreateAccount;
-(void)setDidCreateAccount:(BOOL)arg1 ;
@end

