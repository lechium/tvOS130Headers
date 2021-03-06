/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UAClientController.h>
#import <useractivityd/NSXPCListenerDelegate.h>

@class NSXPCListener, NSMutableSet, NSMutableDictionary, BKSApplicationStateMonitor, NSString, UALocalItemReceiver, NSDate, NSArray, NSSet;

@interface UAUserActivityClientProcessesController : UAClientController <NSXPCListenerDelegate> {

	NSXPCListener* _activityManagerListener;
	NSMutableSet* _clients;
	NSMutableDictionary* _userActivityClientsByPID;
	NSMutableSet* _additionalUserActivityAdvertisableItems;
	NSMutableDictionary* _proxiedClients;
	NSMutableDictionary* _userActivityClientsByBundleID;
	NSMutableSet* _visibleUserActivityClients;
	BKSApplicationStateMonitor* _appStateMonitor;
	NSString* _frontBundleID;
	UALocalItemReceiver* _localReceiver;
	NSDate* _ignoreLockScreenUntil;
	NSArray* _DEBUG_lastEligibleItems;

}

@property (retain) UALocalItemReceiver * localReceiver;                                 //@synthesize localReceiver=_localReceiver - In the implementation block
@property (copy,readonly) NSSet * visibleUserActivityClients; 
@property (copy) NSString * frontBundleID;                                              //@synthesize frontBundleID=_frontBundleID - In the implementation block
@property (copy) NSDate * ignoreLockScreenUntil;                                        //@synthesize ignoreLockScreenUntil=_ignoreLockScreenUntil - In the implementation block
@property (retain,readonly) NSMutableDictionary * proxiedClients;                       //@synthesize proxiedClients=_proxiedClients - In the implementation block
@property (copy,readonly) NSArray * DEBUG_lastEligibleItems;                            //@synthesize DEBUG_lastEligibleItems=_DEBUG_lastEligibleItems - In the implementation block
@property (copy,readonly) NSArray * userActivityClients; 
@property (copy,readonly) NSSet * additionalUserActivityAdvertisableItems; 
@property (retain) BKSApplicationStateMonitor * appStateMonitor;                        //@synthesize appStateMonitor=_appStateMonitor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)resume;
-(BOOL)suspend;
-(id)items;
-(id)statusString;
-(BKSApplicationStateMonitor *)appStateMonitor;
-(void)setAppStateMonitor:(BKSApplicationStateMonitor *)arg1 ;
-(id)initWithManager:(id)arg1 name:(id)arg2 ;
-(id)userActivityInfoForUUID:(id)arg1 ;
-(id)eligibleAdvertiseableItemsInOrder;
-(NSArray *)userActivityClients;
-(id)recentEligibleItemsInOrder:(double)arg1 ;
-(BOOL)clientIsActive:(id)arg1 ;
-(UALocalItemReceiver *)localReceiver;
-(void)handleAppStateMonitorUpdate:(id)arg1 ;
-(NSString *)frontBundleID;
-(NSSet *)additionalUserActivityAdvertisableItems;
-(BOOL)addAdditionalUserActivityAdvertisableItems:(id)arg1 ;
-(NSMutableDictionary *)proxiedClients;
-(id)userActivityClientForBundleIdentifier:(id)arg1 ;
-(void)setFrontBundleID:(NSString *)arg1 ;
-(id)advertiseableItemForBundleIdentifier:(id)arg1 ;
-(NSArray *)DEBUG_lastEligibleItems;
-(void)addUserActivityClient:(id)arg1 ;
-(NSSet *)visibleUserActivityClients;
-(id)userActivityClientForUUID:(id)arg1 ;
-(id)userActivityClientForPID:(int)arg1 ;
-(BOOL)removeAdditionalUserActivityAdvertisableItems:(id)arg1 ;
-(void)removeClientActivityClient:(id)arg1 ;
-(BOOL)registerAsProxyApplication:(id)arg1 forPid:(int)arg2 ;
-(void)setLocalReceiver:(UALocalItemReceiver *)arg1 ;
-(NSDate *)ignoreLockScreenUntil;
-(void)setIgnoreLockScreenUntil:(NSDate *)arg1 ;
@end

