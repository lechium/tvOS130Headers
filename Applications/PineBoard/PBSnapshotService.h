/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:28 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/PBAppInfoControllerDelegate.h>
#import <PineBoard/PBSMigrationHandling.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, NSMutableArray, NSMutableDictionary, PBAppInfoController, NSString;

@interface PBSnapshotService : NSObject <PBAppInfoControllerDelegate, PBSMigrationHandling> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSOperationQueue* _imageProcessingQueue;
	NSMutableArray* _pendingImageOperations;
	NSMutableDictionary* _snapshotManifestByBundleIdentifier;
	PBAppInfoController* _appInfoController;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;                              //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * imageProcessingQueue;                               //@synthesize imageProcessingQueue=_imageProcessingQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingImageOperations;                               //@synthesize pendingImageOperations=_pendingImageOperations - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * snapshotManifestByBundleIdentifier;              //@synthesize snapshotManifestByBundleIdentifier=_snapshotManifestByBundleIdentifier - In the implementation block
@property (nonatomic,readonly) PBAppInfoController * appInfoController;                               //@synthesize appInfoController=_appInfoController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(unsigned long long)migrateWithContext:(id)arg1 error:(id*)arg2 ;
+(void)_invalidateSnapshotsWithMask:(unsigned long long)arg1 applicationInfo:(id)arg2 manifest:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
-(void)setupWallpaper;
-(void)appInfoController:(id)arg1 didUpdate:(id)arg2 ;
-(PBAppInfoController *)appInfoController;
-(void)_ingestDefaultLaunchImageForApplicationInfo:(id)arg1 ;
-(id)_snapshotManifestForBundleIdentifier:(id)arg1 applicationInfo:(id)arg2 ;
-(id)_sortDescriptorsForImageScale:(double)arg1 ;
-(void)_updateSnapshot:(id)arg1 withContext:(id)arg2 forProcessWithIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_saveWallpaperForSnapshotImage:(id)arg1 synchronously:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_cancelWallpaperOperations;
-(long long)_userInterfaceStyleForFocusedProcess;
-(void)_processImageOperationsSync:(id)arg1 ;
-(void)_processImageOperation:(id)arg1 ;
-(void)_cancelSnapshotOperationsWithGroupID:(id)arg1 ;
-(void)_invalidateAllSnapshotsForApplicationInfo:(id)arg1 ;
-(void)_processPendingOperations;
-(void)ingestLaunchImages;
-(id)loadSnapshotImageWithRequest:(id)arg1 ;
-(void)saveSnapshotForScene:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveWallpaperForSnapshotImage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invalidateSnapshotsForBundleIdentifier:(id)arg1 ;
-(void)cancelSnapshotsForSceneID:(id)arg1 ;
-(NSOperationQueue *)imageProcessingQueue;
-(NSMutableArray *)pendingImageOperations;
-(NSMutableDictionary *)snapshotManifestByBundleIdentifier;
@end

