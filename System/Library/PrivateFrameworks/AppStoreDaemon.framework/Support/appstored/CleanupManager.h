/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface CleanupManager : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
-(id)init;
-(void)performCleanup;
-(void)_cleanupStaleCoordinators;
-(BOOL)cleanupStaleUpdateTimerIsExpired;
-(long long)_cleanupUpdates:(BOOL)arg1 removedApps:(id)arg2 ;
-(void)_cleanupUpdates:(BOOL)arg1 removedApps:(id)arg2 updateCount:(long long*)arg3 removeCount:(long long*)arg4 ;
-(BOOL)cleanupStaleJobsTimerIsExpired;
-(void)cleanupStaleJobs;
-(BOOL)garbageCollectionTimerIsExpired;
-(void)garbageCollectDownloads;
-(BOOL)removeDatabaseAtPath:(id)arg1 ;
-(id)_activeInstalls;
-(void)_cancelInstallIDs:(id)arg1 ;
-(BOOL)cleanupLegacyUpdatesDatabase;
-(long long)cleanupUpdates:(id)arg1 ;
-(long long)cleanupUpdatesFollowingInstall:(id)arg1 ;
@end

