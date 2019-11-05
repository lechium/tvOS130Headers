/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:44 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/UNUserNotificationCenterDelegate.h>

@protocol CLIntersiloUniverse;
@class UNUserNotificationCenter, NSMutableDictionary, NSString;

@interface CLClientNotificationHelper : NSObject <UNUserNotificationCenterDelegate> {

	id<CLIntersiloUniverse> _universe;
	UNUserNotificationCenter* _notificationCenter;
	NSMutableDictionary* _pendingNotifications;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2 ;
-(id)initInUniverse:(id)arg1 ;
-(id)_createNotificationRequestForBundleId:(id)arg1 withDisplayName:(id)arg2 ;
-(void)presentNotificationForBundleId:(id)arg1 withDisplayName:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
@end
