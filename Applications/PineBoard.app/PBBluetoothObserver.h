/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:28 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/CBPairingAgentDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, CBCentralManager, PBBluetoothDeviceStatistics, NSString;

@interface PBBluetoothObserver : NSObject <CBPairingAgentDelegate> {

	NSObject*<OS_dispatch_queue> _bluetoothSerialQueue;
	CBCentralManager* _coreBluetoothManager;
	NSObject*<OS_dispatch_source> _reloadStatisticsSource;
	NSObject*<OS_dispatch_queue> _statisticsAccessSerialQueue;
	PBBluetoothDeviceStatistics* _currentPairedDeviceStatistics;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> bluetoothSerialQueue;                        //@synthesize bluetoothSerialQueue=_bluetoothSerialQueue - In the implementation block
@property (nonatomic,retain) CBCentralManager * coreBluetoothManager;                                  //@synthesize coreBluetoothManager=_coreBluetoothManager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> reloadStatisticsSource;                   //@synthesize reloadStatisticsSource=_reloadStatisticsSource - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> statisticsAccessSerialQueue;                 //@synthesize statisticsAccessSerialQueue=_statisticsAccessSerialQueue - In the implementation block
@property (nonatomic,retain) PBBluetoothDeviceStatistics * currentPairedDeviceStatistics;              //@synthesize currentPairedDeviceStatistics=_currentPairedDeviceStatistics - In the implementation block
@property (nonatomic,readonly) PBBluetoothDeviceStatistics * pairedDeviceStatistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2 ;
-(void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3 ;
-(void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2 ;
-(void)_handleBluetoothManagerNotificationHandler:(id)arg1 ;
-(void)_reloadStatistics;
-(NSObject*<OS_dispatch_queue>)statisticsAccessSerialQueue;
-(PBBluetoothDeviceStatistics *)currentPairedDeviceStatistics;
-(void)_signalReloadStatisticsSource;
-(NSObject*<OS_dispatch_source>)reloadStatisticsSource;
-(NSObject*<OS_dispatch_queue>)bluetoothSerialQueue;
-(CBCentralManager *)coreBluetoothManager;
-(PBBluetoothDeviceStatistics *)pairedDeviceStatistics;
-(void)setBluetoothSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCoreBluetoothManager:(CBCentralManager *)arg1 ;
-(void)setStatisticsAccessSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setCurrentPairedDeviceStatistics:(PBBluetoothDeviceStatistics *)arg1 ;
@end
