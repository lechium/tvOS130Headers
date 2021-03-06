/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:08 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-4008.appex/Diagnostic-4008
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_semaphore;
#import <Diagnostic-4008/Diagnostic-4008-Structs.h>
@class NSObject, NSMutableArray;

@interface OSDBluetooth : NSObject {

	NSObject*<OS_dispatch_queue> _btQueue;
	SCD_Struct_OS0* _attachDetachCallback;
	SCD_Struct_OS1* _discoveryCallbacks;
	SCD_Struct_OS2* _localDeviceCallbacks;
	BTSessionImplRef _session;
	BTLocalDeviceImplRef _localDevice;
	BTDiscoveryAgentImplRef _discoveryAgent;
	BOOL _started;
	BOOL _stopped;
	NSObject*<OS_dispatch_semaphore> _statusSema;
	NSMutableArray* _devices;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> statusSema;              //@synthesize statusSema=_statusSema - In the implementation block
@property (nonatomic,retain) NSMutableArray * devices;                                 //@synthesize devices=_devices - In the implementation block
@property (assign,nonatomic) BOOL started;                                             //@synthesize started=_started - In the implementation block
@property (assign,nonatomic) BOOL stopped;                                             //@synthesize stopped=_stopped - In the implementation block
@property (assign,nonatomic) BTSessionImplRef session;                                 //@synthesize session=_session - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BTSessionImplRef)session;
-(void)setSession:(BTSessionImplRef)arg1 ;
-(BOOL)stopped;
-(void)setStopped:(BOOL)arg1 ;
-(BOOL)started;
-(NSMutableArray *)devices;
-(void)setDevices:(NSMutableArray *)arg1 ;
-(void)setStarted:(BOOL)arg1 ;
-(void)performScanOnQueue:(id)arg1 timeout:(double)arg2 gracePeriod:(double)arg3 completionBlock:(/*^block*/id)arg4 ;
-(int)_bluetoothPower:(BTLocalDeviceImplRef)arg1 isEnabled:(BOOL*)arg2 ;
-(BOOL)_setupBluetoothSessionAndDevice:(id*)arg1 ;
-(BOOL)_setBluetoothPower:(BTLocalDeviceImplRef)arg1 enabled:(BOOL)arg2 timeout:(double)arg3 ;
-(void)_teardownBluetoothSessionAndDevice;
-(id)performBluetoothScanWithTimeout:(double)arg1 foundDevices:(id)arg2 ;
-(BOOL)setBluetoothPowerOn:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)statusSema;
-(void)setStatusSema:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

