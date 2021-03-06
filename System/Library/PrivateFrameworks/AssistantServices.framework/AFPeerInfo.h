/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/NSSecureCoding.h>

@class NSString;

@interface AFPeerInfo : NSObject <NSSecureCoding> {

	BOOL _isDeviceOwnedByCurrentUser;
	NSString* _idsIdentifier;
	NSString* _idsFirstRoutableInternetDestination;
	NSString* _rapportEffectiveIdentifier;
	NSString* _mediaSystemIdentifier;

}

@property (assign,setter=setDeviceOwnedByCurrentUser:,nonatomic) BOOL isDeviceOwnedByCurrentUser;              //@synthesize isDeviceOwnedByCurrentUser=_isDeviceOwnedByCurrentUser - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                                                           //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,copy) NSString * idsFirstRoutableInternetDestination;                                     //@synthesize idsFirstRoutableInternetDestination=_idsFirstRoutableInternetDestination - In the implementation block
@property (nonatomic,copy) NSString * rapportEffectiveIdentifier;                                              //@synthesize rapportEffectiveIdentifier=_rapportEffectiveIdentifier - In the implementation block
@property (nonatomic,copy) NSString * mediaSystemIdentifier;                                                   //@synthesize mediaSystemIdentifier=_mediaSystemIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(BOOL)isDeviceOwnedByCurrentUser;
-(void)setDeviceOwnedByCurrentUser:(BOOL)arg1 ;
-(NSString *)idsIdentifier;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(NSString *)idsFirstRoutableInternetDestination;
-(void)setIdsFirstRoutableInternetDestination:(NSString *)arg1 ;
-(NSString *)rapportEffectiveIdentifier;
-(void)setRapportEffectiveIdentifier:(NSString *)arg1 ;
-(NSString *)mediaSystemIdentifier;
-(void)setMediaSystemIdentifier:(NSString *)arg1 ;
@end

