/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:27 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBOSSoftwareUpdateProcessDelegate, OS_dispatch_queue;
@class TVSStateMachine, PBSOSUpdateScanOptions, MAAsset, NSDate, MSUUpdateBrainAssetLoader, NSTimer, MAProgressNotification, NSObject;

@interface PBOSSoftwareUpdateProcess : NSObject {

	BOOL _needToCancelMSUOperation;
	BOOL _assetIsLarge;
	BOOL _downloadAssetWithDiscretionaryPriority;
	BOOL _isApplyingRecheckedUpdate;
	BOOL _sentDownloadFinishedCallback;
	BOOL _userConfirmedApplyAtCheckTime;
	float _lastMSUPercentCompleted;
	id<PBOSSoftwareUpdateProcessDelegate> _delegate;
	unsigned long long _action;
	unsigned long long _state;
	TVSStateMachine* _machine;
	unsigned long long _deferredAction;
	PBSOSUpdateScanOptions* _scanOptions;
	MAAsset* _asset;
	NSDate* _assetReleaseDate;
	MSUUpdateBrainAssetLoader* _brainLoader;
	NSTimer* _slowUpdateTimer;
	MAProgressNotification* _lastDownloadProgressNotification;
	NSObject*<OS_dispatch_queue> _spaceClearingQueue;

}

@property (assign,nonatomic) unsigned long long state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) TVSStateMachine * machine;                                              //@synthesize machine=_machine - In the implementation block
@property (assign,nonatomic) unsigned long long action;                                              //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) unsigned long long deferredAction;                                      //@synthesize deferredAction=_deferredAction - In the implementation block
@property (nonatomic,copy) PBSOSUpdateScanOptions * scanOptions;                                     //@synthesize scanOptions=_scanOptions - In the implementation block
@property (nonatomic,retain) MAAsset * asset;                                                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) NSDate * assetReleaseDate;                                                //@synthesize assetReleaseDate=_assetReleaseDate - In the implementation block
@property (nonatomic,retain) MSUUpdateBrainAssetLoader * brainLoader;                                //@synthesize brainLoader=_brainLoader - In the implementation block
@property (nonatomic,retain) NSTimer * slowUpdateTimer;                                              //@synthesize slowUpdateTimer=_slowUpdateTimer - In the implementation block
@property (assign,nonatomic) BOOL needToCancelMSUOperation;                                          //@synthesize needToCancelMSUOperation=_needToCancelMSUOperation - In the implementation block
@property (assign,nonatomic) BOOL assetIsLarge;                                                      //@synthesize assetIsLarge=_assetIsLarge - In the implementation block
@property (assign,nonatomic) BOOL downloadAssetWithDiscretionaryPriority;                            //@synthesize downloadAssetWithDiscretionaryPriority=_downloadAssetWithDiscretionaryPriority - In the implementation block
@property (assign,nonatomic) BOOL isApplyingRecheckedUpdate;                                         //@synthesize isApplyingRecheckedUpdate=_isApplyingRecheckedUpdate - In the implementation block
@property (assign,nonatomic) BOOL sentDownloadFinishedCallback;                                      //@synthesize sentDownloadFinishedCallback=_sentDownloadFinishedCallback - In the implementation block
@property (assign,nonatomic) BOOL userConfirmedApplyAtCheckTime;                                     //@synthesize userConfirmedApplyAtCheckTime=_userConfirmedApplyAtCheckTime - In the implementation block
@property (assign,nonatomic) float lastMSUPercentCompleted;                                          //@synthesize lastMSUPercentCompleted=_lastMSUPercentCompleted - In the implementation block
@property (nonatomic,retain) MAProgressNotification * lastDownloadProgressNotification;              //@synthesize lastDownloadProgressNotification=_lastDownloadProgressNotification - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> spaceClearingQueue;                        //@synthesize spaceClearingQueue=_spaceClearingQueue - In the implementation block
@property (assign,nonatomic,__weak) id<PBOSSoftwareUpdateProcessDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
+(long long)_compareOSVersion:(id)arg1 andBuild:(id)arg2 withOSVersion:(id)arg3 andBuild:(id)arg4 ;
+(id)sharedProcess;
-(id)init;
-(void)dealloc;
-(id<PBOSSoftwareUpdateProcessDelegate>)delegate;
-(void)setDelegate:(id<PBOSSoftwareUpdateProcessDelegate>)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)start;
-(BOOL)isRunning;
-(unsigned long long)action;
-(void)setAction:(unsigned long long)arg1 ;
-(MAAsset *)asset;
-(void)setAsset:(MAAsset *)arg1 ;
-(void)cancelForReason:(unsigned long long)arg1 ;
-(void)_processEvent:(id)arg1 ;
-(void)setAssetDownloadIsDiscretionary:(BOOL)arg1 ;
-(void)purgeableAssetSpaceWithCompletion:(/*^block*/id)arg1 ;
-(void)purgeAssetsWithCompletion:(/*^block*/id)arg1 ;
-(void)setBrainLoader:(MSUUpdateBrainAssetLoader *)arg1 ;
-(MSUUpdateBrainAssetLoader *)brainLoader;
-(unsigned long long)deferredAction;
-(void)setDeferredAction:(unsigned long long)arg1 ;
-(PBSOSUpdateScanOptions *)scanOptions;
-(void)setScanOptions:(PBSOSUpdateScanOptions *)arg1 ;
-(void)_registerHandlers;
-(void)_storeURLBagLoaded:(id)arg1 ;
-(BOOL)isDownloadingUpdate;
-(TVSStateMachine *)machine;
-(NSDate *)assetReleaseDate;
-(MAProgressNotification *)lastDownloadProgressNotification;
-(id)_downloadProgressPhaseForCurrentState;
-(void)setDownloadAssetWithDiscretionaryPriority:(BOOL)arg1 ;
-(void)_sendCheckStartNotification;
-(void)_sendCheckFinishedNotificationForUpdateAvailable:(BOOL)arg1 withError:(id)arg2 ;
-(void)_purgePreviousAssets;
-(void)_restoreAllPurgedApps;
-(void)_performCheck;
-(void)_cancelUpdatePreDownload;
-(BOOL)_wasStartedForRestore;
-(BOOL)_wasStartedByBackgroundCheck;
-(void)_clearAssetDownloadSpace;
-(void)setUserConfirmedApplyAtCheckTime:(BOOL)arg1 ;
-(void)_cancelUpdateDuringDownload;
-(void)_downloadAsset;
-(void)_clearInternalStateOnReturnToIdle;
-(void)_cancelUpdateDuringApply;
-(void)_clearBrainDownloadSpace;
-(void)_recheckForNewerUpdate;
-(void)setIsApplyingRecheckedUpdate:(BOOL)arg1 ;
-(void)_downloadBrain;
-(void)_clearPrepareAndApplySpace;
-(void)_prepareAndApplyUpdate;
-(void)_cancelAndRebootDuringApply;
-(NSTimer *)slowUpdateTimer;
-(void)setNeedToCancelMSUOperation:(BOOL)arg1 ;
-(void)_foundAsset:(id)arg1 releaseDate:(id)arg2 error:(id)arg3 ;
-(void)setAssetReleaseDate:(NSDate *)arg1 ;
-(void)setAssetIsLarge:(BOOL)arg1 ;
-(BOOL)_goodTimeToDownloadUpdate;
-(BOOL)isApplyingRecheckedUpdate;
-(BOOL)_isManagedAction;
-(id)_resultUserInfoWithError:(id)arg1 ;
-(void)_processAssetDownloadSuccess;
-(void)_handleAssetDownloadProgress:(id)arg1 ;
-(BOOL)downloadAssetWithDiscretionaryPriority;
-(void)_processAssetDownloadFailureWithResult:(long long)arg1 ;
-(BOOL)sentDownloadFinishedCallback;
-(void)setSentDownloadFinishedCallback:(BOOL)arg1 ;
-(id)currentDownload;
-(void)_stopSlowUpdateTimer;
-(id)_brainAssetDownloadOptions;
-(void)_handleBrainDownloadProgressCallbackWithState:(id)arg1 error:(id)arg2 ;
-(void)setLastDownloadProgressNotification:(MAProgressNotification *)arg1 ;
-(void)_prepareAndApplyUpdateThreadedWithImage:(id)arg1 ;
-(void)setLastMSUPercentCompleted:(float)arg1 ;
-(float)lastMSUPercentCompleted;
-(void)_updateProgressStatus:(id)arg1 ;
-(void)_forceRebootAfterCancel;
-(void)_processDownloadSpaceCheckResultForRequiredSpace:(unsigned long long)arg1 hasSpace:(BOOL)arg2 error:(id)arg3 ;
-(void)_clearSpace:(long long)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_continueWithSufficientSpaceFor:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)spaceClearingQueue;
-(void)_processBrainDownloadSpaceCheckResultForBrainSize:(long long)arg1 error:(id)arg2 ;
-(void)_clearPrepareAndApplySpaceWithInstallationSize:(unsigned long long)arg1 andPadding:(unsigned long long)arg2 ;
-(void)_processPrepareAndApplySpaceCheckResultForRequiredSpace:(unsigned long long)arg1 andError:(id)arg2 ;
-(long long)_purgeAppsWithBundleIDs:(id)arg1 spaceNeeded:(long long)arg2 error:(id*)arg3 ;
-(void)_slowUpdateTimerFired:(id)arg1 ;
-(void)setSlowUpdateTimer:(NSTimer *)arg1 ;
-(BOOL)userConfirmedApplyAtCheckTime;
-(BOOL)configureForAction:(unsigned long long)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)isInitializing;
-(BOOL)isCheckingForUpdate;
-(void)resumeAfterUpdateCheck;
-(void)resumeAfterDownload;
-(void)rebootDueToSlowUpdate;
-(void)_startSlowUpdateTimer;
-(void)setMachine:(TVSStateMachine *)arg1 ;
-(BOOL)needToCancelMSUOperation;
-(BOOL)assetIsLarge;
-(void)setSpaceClearingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
