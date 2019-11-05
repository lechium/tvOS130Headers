/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/ASDNotificationCenterNotificationObserver.h>
#import <AppStoreDaemon/ASDNotificationCenterProgressObserver.h>

@protocol OS_dispatch_queue, ASDAppQueryResultsObserver;
@class NSObject, ASDNotificationCenter, NSMutableDictionary, ASDServiceBroker, NSPredicate, NSString;

@interface ASDAppQuery : NSObject <ASDNotificationCenterNotificationObserver, ASDNotificationCenterProgressObserver> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _hasRunOnce;
	ASDNotificationCenter* _notificationCenter;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	id<ASDAppQueryResultsObserver> _observer;
	NSMutableDictionary* _resultCache;
	ASDServiceBroker* _serviceBroker;
	id _device;
	NSPredicate* _predicate;

}

@property (readonly) NSPredicate * predicate;                            //@synthesize predicate=_predicate - In the implementation block
@property (__weak) id<ASDAppQueryResultsObserver> observer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_executeQueryWithPredicate:(id)arg1 onPairedDevice:(id)arg2 usingServiceBroker:(id)arg3 withResultHandler:(/*^block*/id)arg4 ;
+(id)_newProgressForApp:(id)arg1 fromRemoteProgress:(id)arg2 usingServiceBroker:(id)arg3 ;
+(id)queryForBeagleApps;
+(id)queryForBetaApps;
+(id)queryForBundleIDs:(id)arg1 ;
+(id)queryForBundleAtPath:(id)arg1 ;
+(id)queryDefaultPairedWatchForBetaApps;
+(id)queryForBetaAppsOnPairedDevice:(id)arg1 ;
+(id)queryForStoreApps;
+(id)queryForStoreItemIDs:(id)arg1 ;
+(id)queryForSystemAppsOnPairedDevice:(id)arg1 ;
+(id)queryWithPredicate:(id)arg1 ;
+(void)anyWithPredicate:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(id<ASDAppQueryResultsObserver>)observer;
-(NSPredicate *)predicate;
-(void)setObserver:(id<ASDAppQueryResultsObserver>)arg1 ;
-(id)initWithPredicate:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 serviceBroker:(id)arg2 notificationCenter:(id)arg3 ;
-(void)_handleBrokerConnectionNotification:(id)arg1 ;
-(id)_replaceCachedResultsWithResults:(id)arg1 ;
-(void)_handleNotificationRegisteredWithUserInfo:(id)arg1 ;
-(void)_handleNotificationUnregisteredWithUserInfo:(id)arg1 ;
-(void)_handleNotificationRefreshWithUserInfo:(id)arg1 ;
-(void)_updateCachedResultsWithResults:(id)arg1 ;
-(void)_sendResultsChangedWithResults:(id)arg1 ;
-(id)_removeCachedResultsForBundleIDs:(id)arg1 ;
-(void)_handleAppsUpdatedWithResults:(id)arg1 ;
-(void)_handleAppsRemovedWithBundleIDs:(id)arg1 ;
-(void)_handleAppsReplacedWithResults:(id)arg1 ;
-(void)notificationCenter:(id)arg1 receivedNotifications:(id)arg2 ;
-(void)notificationCenter:(id)arg1 receivedProgress:(id)arg2 ;
-(void)executeQueryWithResultHandler:(/*^block*/id)arg1 ;
-(void)_unitTest_setHasRunOnce:(BOOL)arg1 ;
@end
