/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DeviceIdentity.framework/DeviceIdentity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DeviceIdentity/DeviceIdentity-Structs.h>
@interface GestaltHlpr : NSObject
+(id)getSharedInstance;
-(id)copyAnswer:(CFStringRef)arg1 ;
-(BOOL)getBoolAnswer:(CFStringRef)arg1 ;
-(void)addAGestaltKey:(CFStringRef)arg1 toDictionary:(id)arg2 required:(BOOL)arg3 errors:(id)arg4 ;
-(id)copyDeviceIDInfo:(id*)arg1 ;
-(id)copyDeviceInfo:(id*)arg1 ;
-(id)copyRegulatoryImagesInfo:(id*)arg1 ;
-(void)updateRecertInfo:(id)arg1 errors:(id*)arg2 ;
@end
