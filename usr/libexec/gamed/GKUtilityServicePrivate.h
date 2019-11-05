/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:40 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/GKUtilityService.h>
#import <gamed/GKUtilityServicePrivate.h>

@protocol GKUtilityServicePrivate <GKUtilityService>
@required
-(oneway void)terminate;
-(oneway void)openGameCenterSettings;
-(oneway void)openSettings;
-(oneway void)openICloudSettings;
-(oneway void)refreshPreferences;
-(oneway void)pingWithHandler:(/*^block*/id)arg1;
-(oneway void)updateNotificationTopics;
-(oneway void)loadDataForURL:(id)arg1 postBody:(id)arg2 completionHandler:(/*^block*/id)arg3;

@end


@class NSString;

@interface GKUtilityServicePrivate : GKUtilityService <GKUtilityServicePrivate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)requiredEntitlements;
+(Class)interfaceClass;
-(oneway void)terminate;
-(oneway void)openGameCenterSettings;
-(oneway void)openSettings;
-(oneway void)openICloudSettings;
-(oneway void)refreshPreferences;
-(oneway void)pingWithHandler:(/*^block*/id)arg1 ;
-(oneway void)updateNotificationTopics;
-(oneway void)loadDataForURL:(id)arg1 postBody:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
