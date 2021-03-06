/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrackingAvoidance/TrackingAvoidance-Structs.h>
#import <TrackingAvoidance/OSLogCoding.h>
#import <TrackingAvoidance/TAEventProtocol.h>

@class NSDate, NSString;

@interface TAGeoNavigationNotification : NSObject <OSLogCoding, TAEventProtocol> {

	NSDate* _date;
	unsigned long long _transportType;
	unsigned long long _navState;

}

@property (nonatomic,copy,readonly) NSDate * date;                            //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) unsigned long long transportType;              //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) unsigned long long navState;                   //@synthesize navState=_navState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithOSLogCoder:(id)arg1 options:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(unsigned long long)transportType;
-(unsigned long long)navState;
-(id)descriptionDictionary;
-(id)getDate;
-(id)initWithTransportType:(unsigned long long)arg1 andNavigationState:(unsigned long long)arg2 date:(id)arg3 ;
@end

