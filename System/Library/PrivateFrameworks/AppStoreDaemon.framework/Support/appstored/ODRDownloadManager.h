/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ODRDownloadManager : NSObject {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)restartInProgressDownloads;
-(void)startDownloadsForInstall:(id)arg1 ;
-(void)addDownloadRequest:(id)arg1 ;
-(void)_addDownloadRequest:(id)arg1 ;
-(id)_popAssetDownloads:(id)arg1 ;
-(void)_deleteDownloadFromScratchDirectory:(id)arg1 ;
-(void)_configureCoordinatorsForDownloadRequests:(id)arg1 coordinatorID:(id)arg2 withLogKey:(id)arg3 ;
-(void)_fetchManifestForContext:(id)arg1 ;
-(id)_configureDownloadsForContext:(id)arg1 ;
-(id)_downloadRequestForKey:(id)arg1 ;
-(BOOL)_hasExceededMaxPinnedResources:(id)arg1 ;
-(id)_duplicateDownloadFor:(id)arg1 ;
-(BOOL)_assetExistsAndMatchesDownload:(id)arg1 ;
-(void)_completeDownload:(id)arg1 withError:(id)arg2 ;
-(void)_startTrackingDownload:(id)arg1 ;
-(void)_attemptDownload:(id)arg1 ;
-(id)_bandwithLimitForDownloadRequest:(id)arg1 ;
-(void)_handleDownloadError:(id)arg1 forDownloadRequest:(id)arg2 ;
-(id)_missingInitialAssetPacksForApplication:(id)arg1 withReason:(long long)arg2 ;
-(id)_missingPrefetchAssetPacksForApplication:(id)arg1 withReason:(long long)arg2 ;
-(void)_finalizeStateForDownload:(id)arg1 ;
-(void)_stopTrackingDownload:(id)arg1 ;
-(id)allCurrentDownloadRequests;
-(id)currentDownloadRequestForAssetPack:(id)arg1 ;
-(void)_refreshRequest:(id)arg1 ;
-(void)cancelDownloadRequestsForBundleID:(id)arg1 andCoordinatorID:(id)arg2 ;
-(void)handlePrefetchDownloadsForBundleID:(id)arg1 withCoordinatorID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)pauseDownloadRequestsForBundleID:(id)arg1 andCoordinatorID:(id)arg2 ;
-(void)resumeDownloadRequestsForBundleID:(id)arg1 andCoordinatorID:(id)arg2 ;
@end

