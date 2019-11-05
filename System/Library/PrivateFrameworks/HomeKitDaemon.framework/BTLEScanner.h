/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <HomeKitDaemon/HMFTimerDelegate.h>
#import <HomeKitDaemon/HAPBTLECentralManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, HMFTimer, CUBLEScanner, HAPBTLECentralManager, HMDAccessoryQueues, NSString, NSArray;

@interface BTLEScanner : HMFObject <HMFTimerDelegate, HAPBTLECentralManagerDelegate> {

	NSObject*<OS_dispatch_queue> workQueue;
	HMFTimer* scanTimer;
	CUBLEScanner* cubleScanner;
	HAPBTLECentralManager* centralManager;
	HMDAccessoryQueues* scanQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue; 
@property (nonatomic,retain) HMFTimer * scanTimer; 
@property (nonatomic,retain) CUBLEScanner * cubleScanner; 
@property (nonatomic,retain) HAPBTLECentralManager * centralManager; 
@property (nonatomic,retain) HMDAccessoryQueues * scanQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
+(id)sharedScanLock;
+(id)initializeScanner;
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(void)_stopTimer;
-(void)setCentralManager:(HAPBTLECentralManager *)arg1 ;
-(HAPBTLECentralManager *)centralManager;
-(void)didUpdateBTLEState:(long long)arg1 ;
-(HMDAccessoryQueues *)scanQueue;
-(void)setScanQueue:(HMDAccessoryQueues *)arg1 ;
-(void)_stopScan;
-(void)_flushQueue;
-(HMFTimer *)scanTimer;
-(void)setScanTimer:(HMFTimer *)arg1 ;
-(void)setCubleScanner:(CUBLEScanner *)arg1 ;
-(CUBLEScanner *)cubleScanner;
-(void)_checkCanScan;
-(BOOL)startScan:(id)arg1 timeout:(double)arg2 ;
@end
