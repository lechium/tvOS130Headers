/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:32 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/backboardd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <backboardd/BKSTouchDeliveryObservationService_IPC.h>

@protocol OS_dispatch_queue;
@class BKTouchDeliveryObservationServiceListener, BSMutableIntegerMap, NSMutableIndexSet, NSObject, BKTouchDeliveryStatisticsLoggingObserver, BKTouchDeliveryGenericGestureFocusObserver, NSString;

@interface BKTouchDeliveryObservationManager : NSObject <BKSTouchDeliveryObservationService_IPC> {

	BKTouchDeliveryObservationServiceListener* _serviceListener;
	BSMutableIntegerMap* _touchIdentifierToPIDs;
	NSMutableIndexSet* _globalTouchObserverPIDs;
	BSMutableIntegerMap* _pidToConnections;
	NSObject*<OS_dispatch_queue> _queue;
	BKTouchDeliveryStatisticsLoggingObserver* _loggingObserver;
	BKTouchDeliveryGenericGestureFocusObserver* _focusFollowsTouchObserver;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(oneway void)setObservesAllTouches:(id)arg1 ;
-(oneway void)setObservesTouch:(id)arg1 withIdentifier:(id)arg2 ;
-(void)noteTouchDetached:(unsigned)arg1 context:(unsigned)arg2 clientPort:(unsigned)arg3 observers:(id)arg4 ;
-(void)noteTouchUpOccured:(unsigned)arg1 detached:(BOOL)arg2 tapToWake:(BOOL)arg3 transducerType:(unsigned)arg4 context:(unsigned)arg5 clientPort:(unsigned)arg6 observers:(id)arg7 ;
-(void)_queue_postUpdate:(id)arg1 forTouchIdentifier:(unsigned)arg2 ;
-(void)addConnection:(id)arg1 forPID:(int)arg2 ;
-(void)_queue_removeConnectionForPID:(int)arg1 ;
-(int)_pidForClientPort:(unsigned)arg1 ;
@end

