/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/NSSecureCoding.h>

@class NSString, NSData;

@interface PKApplePayTrustSignatureRequest : NSObject <NSSecureCoding> {

	NSString* _keyIdentifier;
	NSData* _nonce;
	NSData* _manifestHash;

}

@property (nonatomic,copy,readonly) NSString * keyIdentifier;              //@synthesize keyIdentifier=_keyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * nonce;                        //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,copy,readonly) NSData * manifestHash;                 //@synthesize manifestHash=_manifestHash - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)nonce;
-(NSString *)keyIdentifier;
-(NSData *)manifestHash;
-(id)initWithKeyIdentifier:(id)arg1 manifestHash:(id)arg2 nonce:(id)arg3 ;
@end

