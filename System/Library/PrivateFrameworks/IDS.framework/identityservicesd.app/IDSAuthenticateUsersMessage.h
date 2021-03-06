/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <identityservicesd/NSCopying.h>

@class NSData, NSString, NSMutableArray, NSArray;

@interface IDSAuthenticateUsersMessage : IDSBaseMessage <NSCopying> {

	NSData* _pushToken;
	NSString* _realm;
	NSMutableArray* _requests;
	NSArray* _authenticationResponses;

}

@property (nonatomic,copy) NSData * pushToken;                               //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,retain) NSMutableArray * requests;                      //@synthesize requests=_requests - In the implementation block
@property (copy) NSString * realm;                                           //@synthesize realm=_realm - In the implementation block
@property (nonatomic,retain) NSArray * authenticationResponses;              //@synthesize authenticationResponses=_authenticationResponses - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)realm;
-(NSMutableArray *)requests;
-(id)messageBody;
-(NSData *)pushToken;
-(void)setPushToken:(NSData *)arg1 ;
-(void)setRealm:(NSString *)arg1 ;
-(long long)command;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(id)requiredKeys;
-(BOOL)wantsHTTPHeaders;
-(long long)responseCommand;
-(BOOL)wantsBinaryPush;
-(BOOL)requiresPushTokenKeys;
-(BOOL)wantsCompressedBody;
-(BOOL)wantsBagKey;
-(double)anisetteHeadersTimeout;
-(BOOL)allowsServerProvidedLenientAnisetteTimeout;
-(id)bagKey;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)arg1 ;
-(NSArray *)authenticationResponses;
-(void)setAuthenticationResponses:(NSArray *)arg1 ;
-(void)_addRequestWithID:(id)arg1 cert:(id)arg2 sig:(id)arg3 csr:(id)arg4 tag:(id)arg5 ;
-(void)addRequestWithID:(id)arg1 cert:(id)arg2 ;
-(void)addRequestWithID:(id)arg1 sig:(id)arg2 csr:(id)arg3 tag:(id)arg4 ;
@end

