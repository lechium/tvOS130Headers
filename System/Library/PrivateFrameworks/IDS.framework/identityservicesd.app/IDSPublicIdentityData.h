/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSNumber;

@interface IDSPublicIdentityData : NSObject {

	NSData* _publicLegacyIdentityData;
	NSData* _publicNGMIdentityData;
	NSData* _publicNGMPrekeyData;
	NSNumber* _NGMVersion;

}

@property (nonatomic,readonly) NSData * publicLegacyIdentityData;              //@synthesize publicLegacyIdentityData=_publicLegacyIdentityData - In the implementation block
@property (nonatomic,readonly) NSData * publicNGMIdentityData;                 //@synthesize publicNGMIdentityData=_publicNGMIdentityData - In the implementation block
@property (nonatomic,readonly) NSData * publicNGMPrekeyData;                   //@synthesize publicNGMPrekeyData=_publicNGMPrekeyData - In the implementation block
@property (nonatomic,readonly) NSNumber * NGMVersion;                          //@synthesize NGMVersion=_NGMVersion - In the implementation block
-(id)initWithPublicLegacyIdentityData:(id)arg1 publicNGMIdentityData:(id)arg2 publicNGMPrekeyData:(id)arg3 NGMVersion:(id)arg4 ;
-(NSData *)publicLegacyIdentityData;
-(NSData *)publicNGMIdentityData;
-(NSData *)publicNGMPrekeyData;
-(NSNumber *)NGMVersion;
@end

