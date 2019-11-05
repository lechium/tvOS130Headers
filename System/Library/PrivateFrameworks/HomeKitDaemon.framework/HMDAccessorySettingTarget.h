/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, NSArray;

@interface HMDAccessorySettingTarget : HMFObject {

	HMDAccessory* _systemOwnerAccessory;
	HMDAccessory* _settingOwnerAccessory;
	NSArray* _others;

}

@property (nonatomic,readonly) HMDAccessory * systemOwnerAccessory;               //@synthesize systemOwnerAccessory=_systemOwnerAccessory - In the implementation block
@property (nonatomic,readonly) HMDAccessory * settingOwnerAccessory;              //@synthesize settingOwnerAccessory=_settingOwnerAccessory - In the implementation block
@property (nonatomic,readonly) NSArray * others;                                  //@synthesize others=_others - In the implementation block
-(id)initWithMediaSystem:(id)arg1 ;
-(id)initWithMediaSystem:(id)arg1 accessory:(id)arg2 ;
-(HMDAccessory *)systemOwnerAccessory;
-(HMDAccessory *)settingOwnerAccessory;
-(NSArray *)others;
@end
