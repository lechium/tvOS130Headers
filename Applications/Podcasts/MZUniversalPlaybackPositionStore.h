/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:18 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MZUniversalPlaybackPositionDataSource, OS_dispatch_queue;
@class MZAsynchronousTask, MZUniversalPlaybackPositionSyncHandler, NSDate, NSTimer, NSObject;

@interface MZUniversalPlaybackPositionStore : NSObject {

	BOOL _hasLocalChangesToSync;
	BOOL _canRequestStoreSignIn;
	BOOL _refreshTimerActive;
	BOOL _isActive;
	BOOL _initialAutosyncNeeded;
	id<MZUniversalPlaybackPositionDataSource> _dataSource;
	unsigned long long _automaticSynchronizeOptions;
	MZAsynchronousTask* _synchronizeTask;
	MZAsynchronousTask* _bagLookupTask;
	MZUniversalPlaybackPositionSyncHandler* _syncHandler;
	NSDate* _dateToFireNextTimer;
	NSTimer* _timer;
	NSObject*<OS_dispatch_queue> _queue;
	id _accountsObserver;
	id _prefsObserver;
	double _autorefreshRate;
	double _bagSpecifiedPollingInterval;

}

@property (nonatomic,retain) MZAsynchronousTask * synchronizeTask;                              //@synthesize synchronizeTask=_synchronizeTask - In the implementation block
@property (nonatomic,retain) MZAsynchronousTask * bagLookupTask;                                //@synthesize bagLookupTask=_bagLookupTask - In the implementation block
@property (nonatomic,retain) MZUniversalPlaybackPositionSyncHandler * syncHandler;              //@synthesize syncHandler=_syncHandler - In the implementation block
@property (nonatomic,retain) NSDate * dateToFireNextTimer;                                      //@synthesize dateToFireNextTimer=_dateToFireNextTimer - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                                   //@synthesize timer=_timer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL refreshTimerActive;                                           //@synthesize refreshTimerActive=_refreshTimerActive - In the implementation block
@property (assign,nonatomic) BOOL isActive;                                                     //@synthesize isActive=_isActive - In the implementation block
@property (assign,nonatomic) BOOL initialAutosyncNeeded;                                        //@synthesize initialAutosyncNeeded=_initialAutosyncNeeded - In the implementation block
@property (assign,nonatomic) id accountsObserver;                                               //@synthesize accountsObserver=_accountsObserver - In the implementation block
@property (assign,nonatomic) id prefsObserver;                                                  //@synthesize prefsObserver=_prefsObserver - In the implementation block
@property (assign,nonatomic) double autorefreshRate;                                            //@synthesize autorefreshRate=_autorefreshRate - In the implementation block
@property (assign,nonatomic) double bagSpecifiedPollingInterval;                                //@synthesize bagSpecifiedPollingInterval=_bagSpecifiedPollingInterval - In the implementation block
@property (assign,nonatomic) BOOL canRequestStoreSignIn;                                        //@synthesize canRequestStoreSignIn=_canRequestStoreSignIn - In the implementation block
@property (assign) id<MZUniversalPlaybackPositionDataSource> dataSource;                        //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) unsigned long long automaticSynchronizeOptions;                    //@synthesize automaticSynchronizeOptions=_automaticSynchronizeOptions - In the implementation block
@property (assign,nonatomic) BOOL hasLocalChangesToSync;                                        //@synthesize hasLocalChangesToSync=_hasLocalChangesToSync - In the implementation block
+(id)keyValueStoreItemIdentifierForItem:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setTimer:(NSTimer *)arg1 ;
-(BOOL)isActive;
-(void)_timerFired:(id)arg1 ;
-(NSTimer *)timer;
-(id<MZUniversalPlaybackPositionDataSource>)dataSource;
-(void)setDataSource:(id<MZUniversalPlaybackPositionDataSource>)arg1 ;
-(void)setIsActive:(BOOL)arg1 ;
-(void)becomeActive;
-(void)resignActive;
-(void)setDateToFireNextTimer:(NSDate *)arg1 ;
-(void)_updateAutorefreshRateSettingAndRestartTimer:(BOOL)arg1 ;
-(void)_onQueueLoadBagContextWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateForStoreAccountsChange;
-(id)initWithInitialUpdateDelay:(double)arg1 ;
-(void)_onQueueStopTimer;
-(void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(double)arg1 ;
-(MZAsynchronousTask *)bagLookupTask;
-(void)_onQueueSuspendTimer;
-(BOOL)_automaticallySynchronizeOnBecomeActive;
-(void)_onQueueResumeTimer;
-(void)_onQueueUpdateTimerForActiveChanges;
-(BOOL)_automaticallySynchronizeLocalChangesOnResignActive;
-(void)_onQueueSynchronizeWithAutosynchronizeMask:(unsigned long long)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;
-(unsigned long long)automaticSynchronizeOptions;
-(void)setAutomaticSynchronizeOptions:(unsigned long long)arg1 ;
-(id)_accountForSyncing;
-(void)_onQueueStartNewTimer;
-(double)_effectiveAutorefreshRate;
-(void)_updateSettingsFromLoadedBagContext:(id)arg1 ;
-(NSDate *)dateToFireNextTimer;
-(BOOL)_timerIsStopped;
-(void)_onQueueScheduleTimer;
-(void)setHasLocalChangesToSync:(BOOL)arg1 ;
-(BOOL)hasLocalChangesToSync;
-(void)setAutomaticallySynchronizeLocalChangesOnResignActive:(BOOL)arg1 ;
-(BOOL)automaticallySynchronizeLocalChangesOnResignActive;
-(void)setAutomaticallySynchronizeOnBecomeActive:(BOOL)arg1 ;
-(BOOL)automaticallySynchronizeOnBecomeActive;
-(void)synchronizeImmediatelyWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)checkForAvailabilityWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setBagLookupTask:(MZAsynchronousTask *)arg1 ;
-(id)initWithInitialUpdateDelay:(double)arg1 isActive:(BOOL)arg2 ;
-(void)setSyncHandler:(MZUniversalPlaybackPositionSyncHandler *)arg1 ;
-(MZAsynchronousTask *)synchronizeTask;
-(void)setSynchronizeTask:(MZAsynchronousTask *)arg1 ;
-(void)_onQueueSetHasLocalChangesToSync:(BOOL)arg1 ;
-(void)_onQueueSynchronizeImmediatelyWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setCanRequestStoreSignIn:(BOOL)arg1 ;
-(void)setBagSpecifiedPollingInterval:(double)arg1 ;
-(BOOL)initialAutosyncNeeded;
-(double)autorefreshRate;
-(BOOL)canRequestStoreSignIn;
-(void)_grabBagWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setAutorefreshRate:(double)arg1 ;
-(MZUniversalPlaybackPositionSyncHandler *)syncHandler;
-(BOOL)refreshTimerActive;
-(void)setRefreshTimerActive:(BOOL)arg1 ;
-(void)setInitialAutosyncNeeded:(BOOL)arg1 ;
-(id)accountsObserver;
-(void)setAccountsObserver:(id)arg1 ;
-(id)prefsObserver;
-(void)setPrefsObserver:(id)arg1 ;
-(double)bagSpecifiedPollingInterval;
@end

