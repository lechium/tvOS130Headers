/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/CPLDirectChangeSession.h>
#import <cloudphotod/CPLPushChangeSessionImplementation.h>

@class NSString, CPLEngineLibrary, CPLEngineStore, CPLEnginePushRepository, CPLEngineScheduler, NSMutableSet;

@interface CPLDirectPushChangeSession : CPLDirectChangeSession <CPLPushChangeSessionImplementation> {

	BOOL _didPushSomeChange;
	BOOL _pushedBatchesCanLowerQuota;
	NSString* _lastSeenLibraryVersion;
	CPLEngineLibrary* _engineLibrary;
	CPLEngineStore* _store;
	CPLEnginePushRepository* _pushRepository;
	CPLEngineScheduler* _scheduler;
	NSMutableSet* _scopeIdentifiersInThisSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)selfCrashResetReason;
-(void)commitChangeBatch:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)beginSessionWithKnownLibraryVersion:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)finalizeWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)clientWorkDescription;
@end

