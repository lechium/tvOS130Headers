/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreTelephony/NSSecureCoding.h>

@class CTDeviceIdentifier, NSArray;

@interface CTRemoteDevice : NSObject <NSSecureCoding> {

	CTDeviceIdentifier* _deviceID;
	NSArray* _remotePlans;

}

@property (nonatomic,retain) CTDeviceIdentifier * deviceID;              //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSArray * remotePlans;                      //@synthesize remotePlans=_remotePlans - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)deviceName;
-(id)EID;
-(CTDeviceIdentifier *)deviceID;
-(NSArray *)remotePlans;
-(unsigned long long)deviceType;
-(void)setDeviceID:(CTDeviceIdentifier *)arg1 ;
-(void)setRemotePlans:(NSArray *)arg1 ;
@end

