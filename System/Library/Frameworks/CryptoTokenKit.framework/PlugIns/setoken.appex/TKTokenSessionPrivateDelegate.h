/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/PlugIns/setoken.appex/setoken
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TKTokenSessionPrivateDelegate <TKTokenSessionDelegate>
@optional
-(id)tokenSession:(id)arg1 attributesOfObject:(id)arg2 error:(id*)arg3;
-(BOOL)tokenSession:(id)arg1 supportsOperation:(long long)arg2 usingKey:(id)arg3 algorithm:(id)arg4 parameters:(id)arg5;
-(id)tokenSession:(id)arg1 decryptData:(id)arg2 usingKey:(id)arg3 algorithm:(id)arg4 parameters:(id)arg5 error:(id*)arg6;
-(id)tokenSession:(id)arg1 attestKey:(id)arg2 usingKey:(id)arg3 nonce:(id)arg4 error:(id*)arg5;
-(BOOL)tokenSession:(id)arg1 bumpKey:(id)arg2 error:(id*)arg3;
-(BOOL)tokenSession:(id)arg1 commitKey:(id)arg2 error:(id*)arg3;
-(id)tokenSession:(id)arg1 createObjectWithAttributes:(id)arg2 error:(id*)arg3;
-(BOOL)tokenSession:(id)arg1 deleteObject:(id)arg2 error:(id*)arg3;
-(id)tokenSession:(id)arg1 constraintOfObject:(id)arg2 forOperation:(long long)arg3 error:(id*)arg4;
-(id)tokenSession:(id)arg1 dataOfCertificate:(id)arg2 error:(id*)arg3;
-(id)tokenSession:(id)arg1 publicKeyDataOfPrivateKey:(id)arg2 error:(id*)arg3;
-(void)tokenSession:(id)arg1 getAccessControlOfObject:(id)arg2 reply:(/*^block*/id)arg3;
-(void)tokenSession:(id)arg1 getDataOfObject:(id)arg2 reply:(/*^block*/id)arg3;
-(void)tokenSession:(id)arg1 getPublicKeyDataOfObject:(id)arg2 reply:(/*^block*/id)arg3;
-(void)tokenSession:(id)arg1 checkOperation:(long long)arg2 usingKey:(id)arg3 algorithm:(id)arg4 reply:(/*^block*/id)arg5;
-(void)tokenSession:(id)arg1 beginAuthForOperation:(long long)arg2 constraint:(id)arg3 reply:(/*^block*/id)arg4;
-(void)tokenSession:(id)arg1 signData:(id)arg2 usingKey:(id)arg3 algorithm:(id)arg4 reply:(/*^block*/id)arg5;
-(void)tokenSession:(id)arg1 decryptData:(id)arg2 usingKey:(id)arg3 algorithm:(id)arg4 parameters:(id)arg5 reply:(/*^block*/id)arg6;
-(void)tokenSession:(id)arg1 performKeyExchangeWithPublicKey:(id)arg2 usingKey:(id)arg3 algorithm:(id)arg4 parameters:(id)arg5 reply:(/*^block*/id)arg6;
-(void)tokenSession:(id)arg1 createObjectWithAttributes:(id)arg2 reply:(/*^block*/id)arg3;
-(void)tokenSession:(id)arg1 deleteObject:(id)arg2 reply:(/*^block*/id)arg3;
-(void)tokenSession:(id)arg1 controlWithAttributes:(id)arg2 reply:(/*^block*/id)arg3;

@end
