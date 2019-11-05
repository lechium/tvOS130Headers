/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <WiFiVelocity/NSCopying.h>
#import <WiFiVelocity/NSSecureCoding.h>

@class NSUUID, NSDictionary;

@interface W5LogItemRequest : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _uuid;
	long long _itemID;
	NSDictionary* _configuration;

}

@property (nonatomic,copy) NSUUID * uuid;                             //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) long long itemID;                        //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy) NSDictionary * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requestWithItemID:(long long)arg1 configuration:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)configuration;
-(void)setConfiguration:(NSDictionary *)arg1 ;
-(NSUUID *)uuid;
-(long long)itemID;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setItemID:(long long)arg1 ;
-(BOOL)isEqualToLogItemRequest:(id)arg1 ;
@end
