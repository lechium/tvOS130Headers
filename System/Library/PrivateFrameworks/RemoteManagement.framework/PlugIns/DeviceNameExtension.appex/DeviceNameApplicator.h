/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/PlugIns/DeviceNameExtension.appex/DeviceNameExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DeviceNameAdapter;

@interface DeviceNameApplicator : NSObject {

	DeviceNameAdapter* _adapter;

}

@property (nonatomic,readonly) DeviceNameAdapter * adapter;              //@synthesize adapter=_adapter - In the implementation block
-(id)init;
-(DeviceNameAdapter *)adapter;
-(id)initWithAdapter:(id)arg1 ;
-(void)applyConfigurations:(id)arg1 ;
-(id)_existingPolicy;
-(void)_updateOldPolicy:(id)arg1 withNewPolicy:(id)arg2 ;
@end

