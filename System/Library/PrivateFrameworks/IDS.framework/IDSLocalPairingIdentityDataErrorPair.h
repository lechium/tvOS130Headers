/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/NSSecureCoding.h>

@class NSData, NSError;

@interface IDSLocalPairingIdentityDataErrorPair : NSObject <NSSecureCoding> {

	NSData* _identityData;
	NSError* _error;

}

@property (nonatomic,retain) NSData * identityData;              //@synthesize identityData=_identityData - In the implementation block
@property (nonatomic,retain) NSError * error;                    //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithError:(id)arg1 ;
-(NSData *)identityData;
-(id)initWithIdentityData:(id)arg1 error:(id)arg2 ;
-(id)initWithIdentityData:(id)arg1 ;
-(void)setIdentityData:(NSData *)arg1 ;
@end

