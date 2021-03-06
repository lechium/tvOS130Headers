/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/VoiceOverServices.framework/VoiceOverServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceOverServices/VoiceOverServices-Structs.h>
#import <VoiceOverServices/NSCopying.h>
#import <VoiceOverServices/VOSBluetoothConnectableDevice.h>

@class NSString;

@interface VOSBluetoothDevice : NSObject <NSCopying, VOSBluetoothConnectableDevice> {

	NSString* _name;
	NSString* _address;
	BTDeviceImplRef _device;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(int)type;
-(long long)compare:(id)arg1 ;
-(id)identifier;
-(id)address;
-(void)disconnect;
-(BTDeviceImplRef)device;
-(unsigned)deviceClass;
-(void)connect;
-(BOOL)connected;
-(void)setDevice:(BTDeviceImplRef)arg1 ;
-(BOOL)isServiceSupported:(unsigned)arg1 ;
-(unsigned)productId;
-(unsigned)vendorId;
-(BOOL)isEqualToDevice:(id)arg1 ;
-(unsigned long long)connectedServices;
-(BOOL)paired;
-(void)unpair;
-(void)_clearName;
-(id)initWithDevice:(BTDeviceImplRef)arg1 address:(id)arg2 ;
-(unsigned)majorClass;
-(unsigned)minorClass;
-(unsigned long long)connectedServicesCount;
-(void)connectWithServices:(unsigned)arg1 ;
-(void)setPIN:(id)arg1 ;
-(void)acceptSSP:(int)arg1 ;
-(BOOL)isNameCached;
-(unsigned)authorizedServices;
-(BOOL)hasAddress:(id)arg1 ;
-(BOOL)isAppleHIDDevice;
@end

