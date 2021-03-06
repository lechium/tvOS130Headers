/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/PlugIns/setoken.appex/setoken
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CryptoTokenKit/TKTokenSession.h>
#import <setoken/TKTokenSessionPrivateDelegate.h>

@class TKSharedResource, SEToken, NSString;

@interface SETokenSession : TKTokenSession <TKTokenSessionPrivateDelegate> {

	TKSharedResource* _ACMContextResource;
	SEToken* _SEToken;

}

@property (setter=EToken,readonly) SEToken * SEToken;               //@synthesize SEToken=_SEToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithToken:(id)arg1 ;
-(void)endRequest;
-(id)tokenSession:(id)arg1 signData:(id)arg2 usingKey:(id)arg3 algorithm:(id)arg4 error:(id*)arg5 ;
-(id)tokenSession:(id)arg1 performKeyExchangeWithPublicKey:(id)arg2 usingKey:(id)arg3 algorithm:(id)arg4 parameters:(id)arg5 error:(id*)arg6 ;
-(id)tokenSession:(id)arg1 attributesOfObject:(id)arg2 error:(id*)arg3 ;
-(BOOL)tokenSession:(id)arg1 supportsOperation:(long long)arg2 usingKey:(id)arg3 algorithm:(id)arg4 parameters:(id)arg5 ;
-(id)tokenSession:(id)arg1 decryptData:(id)arg2 usingKey:(id)arg3 algorithm:(id)arg4 parameters:(id)arg5 error:(id*)arg6 ;
-(id)tokenSession:(id)arg1 attestKey:(id)arg2 usingKey:(id)arg3 nonce:(id)arg4 error:(id*)arg5 ;
-(BOOL)tokenSession:(id)arg1 bumpKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)tokenSession:(id)arg1 commitKey:(id)arg2 error:(id*)arg3 ;
-(id)tokenSession:(id)arg1 createObjectWithAttributes:(id)arg2 error:(id*)arg3 ;
-(BOOL)tokenSession:(id)arg1 deleteObject:(id)arg2 error:(id*)arg3 ;
-(id)attributesOfKey:(id)arg1 error:(id*)arg2 ;
-(id)ACMContextWithError:(id*)arg1 ;
-(BOOL)keyAttestationAllowedWithError:(id*)arg1 ;
-(SEToken *)SEToken;
@end

