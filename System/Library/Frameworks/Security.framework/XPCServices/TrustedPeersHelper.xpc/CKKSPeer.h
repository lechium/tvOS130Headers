/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Security.framework/XPCServices/TrustedPeersHelper.xpc/TrustedPeersHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, _SFECPublicKey;


@protocol CKKSPeer <NSObject>
@property (readonly,nonatomic) NSString * peerID; 
@property (readonly,nonatomic) _SFECPublicKey * publicEncryptionKey; 
@property (readonly,nonatomic) _SFECPublicKey * publicSigningKey; 
@required
-(NSString *)peerID;
-(_SFECPublicKey *)publicEncryptionKey;
-(_SFECPublicKey *)publicSigningKey;
-(BOOL)matchesPeer:(id)arg1;

@end

