/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <RunningBoard/RBProcessMonitorObserving.h>

@protocol RBProcessMonitoring, RBProcessMonitorObserverConnection, OS_dispatch_queue;
@class RBProcess, NSObject, RBProcessMap, NSMutableDictionary, RBSProcessStateDescriptor, NSHashTable, NSString;

@interface RBProcessMonitorObserver : NSObject <RBProcessMonitorObserving> {

	id<RBProcessMonitoring> _monitor;
	RBProcess* _process;
	id<RBProcessMonitorObserverConnection> _connection;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	os_unfair_lock_s _lock;
	unsigned _qos;
	RBProcessMap* _pendingProcessState;
	NSMutableDictionary* _configurations;
	RBSProcessStateDescriptor* _stateDescriptor;
	NSHashTable* _matchedHandles;
	BOOL _extantUpdate;
	BOOL _didClearStateForSuspended;
	double _lastSend;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(NSString *)description;
-(void)dealloc;
-(void)invalidate;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)captureState;
-(void)removeConfigurationWithIdentifier:(unsigned long long)arg1 ;
-(NSString *)stateCaptureTitle;
-(id)initWithMonitor:(id)arg1 forProcess:(id)arg2 connection:(id)arg3 ;
-(void)addConfiguration:(id)arg1 ;
-(void)processMonitor:(id)arg1 didChangeProcessStates:(id)arg2 ;
-(void)_lock_addConfigurationStatesToPending:(id)arg1 ;
-(void)_lock_rebuildConfiguration;
-(void)_lock_sendPendingStateUpdates;
-(void)_lock_addAllConfiguredStatesToPending;
@end

