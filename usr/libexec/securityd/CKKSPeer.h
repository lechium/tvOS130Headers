/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/securityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, _SFECPublicKey;


@protocol CKKSPeer <NSObject>
@property (readonly) NSString * peerID; 
@property (readonly) _SFECPublicKey * publicEncryptionKey; 
@property (readonly) _SFECPublicKey * publicSigningKey; 
@required
-(NSString *)peerID;
-(_SFECPublicKey *)publicEncryptionKey;
-(_SFECPublicKey *)publicSigningKey;
-(BOOL)matchesPeer:(id)arg1;

@end
