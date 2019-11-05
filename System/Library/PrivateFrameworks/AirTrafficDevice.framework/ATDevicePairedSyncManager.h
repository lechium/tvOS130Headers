/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTrafficDevice/ICNanoPairedDeviceStatusObserver.h>
#import <AirTrafficDevice/ATMessageLinkObserver.h>
#import <AirTrafficDevice/ATSessionObserver.h>

@protocol OS_dispatch_queue;
@class ATDeviceService, NSObject, NSString;

@interface ATDevicePairedSyncManager : NSObject <ICNanoPairedDeviceStatusObserver, ATMessageLinkObserver, ATSessionObserver> {

	ATDeviceService* _deviceService;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPairedSyncManager;
-(id)init;
-(void)start;
-(void)stop;
-(void)_cleanupSyncState;
-(void)nanoPairedDeviceStatusMonitorPairedDeviceChanged:(id)arg1 ;
-(void)nanoPairedDeviceStatusMonitorNewActiveDevice:(id)arg1 ;
-(void)nanoPairedDeviceStatusMonitor:(id)arg1 didFinishInitialSyncForPairingIdentifier:(id)arg2 ;
-(void)nanoPairedDeviceStatusMonitor:(id)arg1 didChangeClientSyncState:(unsigned long long)arg2 ;
-(void)_triggerInitialSync;
-(void)_setInstallDateIfNeededForBundleID:(id)arg1 ;
-(BOOL)hasRestriction;
@end
