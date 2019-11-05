/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface AMSXDDevice : NSObject <NSSecureCoding> {

	NSString* _identifier;
	long long _type;

}

@property (nonatomic,readonly) NSDictionary * JSONDictionary; 
@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)deviceFromIdentifier:(id)arg1 ;
+(id)activePairedDevices;
+(id)allPairedDevices;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)initWithJSONDictionary:(id)arg1 ;
-(NSDictionary *)JSONDictionary;
-(id)initWithDeviceID:(id)arg1 type:(long long)arg2 ;
@end
