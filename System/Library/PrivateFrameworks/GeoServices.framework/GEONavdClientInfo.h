/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/NSCopying.h>
#import <GeoServices/NSSecureCoding.h>

@class NSString;

@interface GEONavdClientInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _canonicalName;
	NSString* _uniqueClientId;

}

@property (nonatomic,copy) NSString * canonicalName;               //@synthesize canonicalName=_canonicalName - In the implementation block
@property (nonatomic,copy) NSString * uniqueClientId;              //@synthesize uniqueClientId=_uniqueClientId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)clientInfoForNavdPredictions;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)canonicalName;
-(NSString *)uniqueClientId;
-(id)initWithCanonicalName:(id)arg1 instanceId:(unsigned long long)arg2 ;
-(void)setCanonicalName:(NSString *)arg1 ;
-(void)setUniqueClientId:(NSString *)arg1 ;
-(BOOL)isCalendarClientInfo;
-(BOOL)isNavdClientInfo;
@end
