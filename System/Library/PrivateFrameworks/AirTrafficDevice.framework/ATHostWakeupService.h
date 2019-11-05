/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTrafficDevice/ATEnvironmentMonitorObserver.h>

@class ATEnvironmentMonitor, NSString;

@interface ATHostWakeupService : NSObject <ATEnvironmentMonitorObserver> {

	ATEnvironmentMonitor* _environmentMonitor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)start;
-(void)stop;
-(void)environmentMonitorDidChangePower:(id)arg1 ;
-(void)_wakeupHost:(id)arg1 ;
-(void)sendWakeupToAllHostsWithCompletion:(/*^block*/id)arg1 ;
-(void)sendWakeupToHostWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getWakeableHostsWithCompletion:(/*^block*/id)arg1 ;
@end
