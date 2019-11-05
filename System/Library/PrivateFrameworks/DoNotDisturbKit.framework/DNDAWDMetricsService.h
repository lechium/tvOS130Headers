/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbKit.framework/DoNotDisturbKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbKit/DNDStateUpdateListener.h>

@protocol OS_dispatch_queue;
@class NSObject, DNDStateService, DNDState, NSString;

@interface DNDAWDMetricsService : NSObject <DNDStateUpdateListener> {

	NSObject*<OS_dispatch_queue> _queue;
	DNDStateService* _notificationsStateService;
	DNDState* _currentState;
	unsigned long long _lockState;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resume;
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2 ;
-(void)_queue_postAWDMetric;
-(void)handleTransitionToUILocked:(BOOL)arg1 ;
-(unsigned long long)_queue_currentAWDMetricState;
@end
