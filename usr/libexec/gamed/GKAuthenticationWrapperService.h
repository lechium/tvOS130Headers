/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:38 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKService.h>
#import <gamed/GKAccountService.h>
#import <gamed/GKAccountServicePrivate.h>

@protocol OS_dispatch_queue;
@class GKService, NSObject, NSDictionary, NSString;

@interface GKAuthenticationWrapperService : GKService <GKAccountService, GKAccountServicePrivate> {

	GKService* _service;
	NSObject*<OS_dispatch_queue> _authQueue;
	NSDictionary* _signatureLookup;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)authenticationWrapperForService:(id)arg1 ;
+(id)serviceForClient:(id)arg1 player:(id)arg2 ;
+(id)serviceForBundleID:(id)arg1 player:(id)arg2 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)dealloc;
-(id)initWithClient:(id)arg1 ;
-(oneway void)signOutPlayerWithHandler:(/*^block*/id)arg1 ;
-(oneway void)setLoginStatus:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 usingFastPath:(BOOL)arg5 handler:(/*^block*/id)arg6 ;
-(oneway void)authenticateNonActivePlayerWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 usingFastPath:(BOOL)arg5 handler:(/*^block*/id)arg6 ;
-(oneway void)switchLocalPlayerWithAltDSID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(oneway void)authenticatePlayerWithExistingCredentialsWithHandler:(/*^block*/id)arg1 ;
-(oneway void)generateIdentityVerificationSignatureWithHandler:(/*^block*/id)arg1 ;
-(oneway void)authenticationWasCancelled;
-(oneway void)resetCredentialsWithHandler:(/*^block*/id)arg1 ;
-(oneway void)setLastPrivacyNoticeVersionDisplayedForSignedInPlayer:(unsigned long long)arg1 ;
-(oneway void)getLastPrivacyNoticeVersionDisplayedForSignedInPlayerWithHandler:(/*^block*/id)arg1 ;
-(oneway void)setLastPersonalizationVersionDisplayedForSignedInPlayer:(id)arg1 ;
-(oneway void)getLastPersonalizationVersionDisplayedForSignedInPlayerWithHandler:(/*^block*/id)arg1 ;
-(oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 handler:(/*^block*/id)arg3 ;
-(oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 finished:(BOOL)arg5 handler:(/*^block*/id)arg6 ;
-(oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 altDSID:(id)arg5 finished:(BOOL)arg6 handler:(/*^block*/id)arg7 ;
-(oneway void)validateAccountWithUsername:(id)arg1 password:(id)arg2 handler:(/*^block*/id)arg3 ;
-(oneway void)getAccountAuthTokenWithHandler:(/*^block*/id)arg1 ;
-(oneway void)setupAccountForParameters:(id)arg1 handler:(/*^block*/id)arg2 ;
-(oneway void)authenticationCancelled;
-(oneway void)accountEdited:(id)arg1 alias:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 handler:(/*^block*/id)arg5 ;
-(oneway void)isICloudAvailableWithHandler:(/*^block*/id)arg1 ;
-(void)_buildSignatureLookupForProtocol:(id)arg1 ;
-(id)initWithService:(id)arg1 queue:(id)arg2 ;
-(void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 rawPassword:(id)arg4 altDSID:(id)arg5 usingFastPath:(BOOL)arg6 displayAuthUI:(BOOL)arg7 handler:(/*^block*/id)arg8 ;
-(void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 rawPassword:(id)arg4 altDSID:(id)arg5 usingFastPath:(BOOL)arg6 handler:(/*^block*/id)arg7 ;
-(oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 usingFastPath:(BOOL)arg4 displayAuthUI:(BOOL)arg5 handler:(/*^block*/id)arg6 ;
@end
