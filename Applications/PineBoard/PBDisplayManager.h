/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/PBSDisplayState.h>
#import <PineBoard/PBSDisplayManagerServiceInterface.h>
#import <PineBoard/PBSMigrationHandling.h>

@protocol OS_dispatch_source;
@class NSArray, PBSDisplayMode, NSSet, NSString, NSDictionary, NSMutableDictionary, NSHashTable, SSDisplay, NSObject, NSNumber, NSUserDefaults, PBCableSignalInfo, NSMutableArray;

@interface PBDisplayManager : NSObject <PBSDisplayState, PBSDisplayManagerServiceInterface, PBSMigrationHandling> {

	BOOL _filteredUsingdPineBoardPolicy;
	BOOL _canHandleHighBandwidthModes;
	BOOL _shouldModeSwitchForDynamicRange;
	BOOL _shouldModeSwitchForFrameRate;
	BOOL _detectedPoorCableConnection;
	BOOL _deemed4KCapable;
	BOOL _usesDolbyLowLatency;
	BOOL _observingFocusedProcess;
	double _baseCableCheckTimeInterval;
	NSArray* _blackScreenRecoveryDisplayModes;
	NSMutableDictionary* _nextEstablishModePerDisplays;
	NSHashTable* _stateObservers;
	SSDisplay* _systemState;
	NSObject*<OS_dispatch_source> _reloadStateSource;
	NSObject*<OS_dispatch_source> _notifyClientsSource;
	NSNumber* _displayConnectionToNotify;
	double _localeRefreshRate;
	NSArray* _sortedDisplayModes;
	PBSDisplayMode* _currentDisplayMode;
	PBSDisplayMode* _fallbackDisplayMode;
	PBSDisplayMode* _userSelectedDisplayMode;
	NSSet* _seenDisplayIDs;
	NSString* _currentDisplayID;
	long long _displayConnection;
	long long _lastCablePollStatus;
	NSDictionary* _audioLatencies;
	double _userPreferredRefreshRate;
	NSSet* _encodedPromotedDisplayModes;
	NSNumber* _presentedDisplayAssistantKind;
	NSUserDefaults* _defaults;
	NSDictionary* _memoryStore;
	NSString* _currentEDIDHash;
	NSObject*<OS_dispatch_source> _cableCheckTimer;
	PBCableSignalInfo* _lastCableErrorInfo;
	NSMutableArray* _matchContentRequestedModes;

}

@property (assign,nonatomic) BOOL filteredUsingdPineBoardPolicy;                                         //@synthesize filteredUsingdPineBoardPolicy=_filteredUsingdPineBoardPolicy - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * nextEstablishModePerDisplays;                         //@synthesize nextEstablishModePerDisplays=_nextEstablishModePerDisplays - In the implementation block
@property (nonatomic,retain) NSHashTable * stateObservers;                                               //@synthesize stateObservers=_stateObservers - In the implementation block
@property (nonatomic,retain) SSDisplay * systemState;                                                    //@synthesize systemState=_systemState - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> reloadStateSource;                          //@synthesize reloadStateSource=_reloadStateSource - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> notifyClientsSource;                        //@synthesize notifyClientsSource=_notifyClientsSource - In the implementation block
@property (nonatomic,retain) NSNumber * displayConnectionToNotify;                                       //@synthesize displayConnectionToNotify=_displayConnectionToNotify - In the implementation block
@property (assign,nonatomic) double localeRefreshRate;                                                   //@synthesize localeRefreshRate=_localeRefreshRate - In the implementation block
@property (nonatomic,copy) NSArray * sortedDisplayModes;                                                 //@synthesize sortedDisplayModes=_sortedDisplayModes - In the implementation block
@property (nonatomic,copy) PBSDisplayMode * currentDisplayMode;                                          //@synthesize currentDisplayMode=_currentDisplayMode - In the implementation block
@property (nonatomic,copy) PBSDisplayMode * fallbackDisplayMode;                                         //@synthesize fallbackDisplayMode=_fallbackDisplayMode - In the implementation block
@property (nonatomic,copy) PBSDisplayMode * userSelectedDisplayMode;                                     //@synthesize userSelectedDisplayMode=_userSelectedDisplayMode - In the implementation block
@property (nonatomic,copy) NSSet * seenDisplayIDs;                                                       //@synthesize seenDisplayIDs=_seenDisplayIDs - In the implementation block
@property (nonatomic,copy) NSString * currentDisplayID;                                                  //@synthesize currentDisplayID=_currentDisplayID - In the implementation block
@property (assign,nonatomic) BOOL canHandleHighBandwidthModes;                                           //@synthesize canHandleHighBandwidthModes=_canHandleHighBandwidthModes - In the implementation block
@property (assign,nonatomic) BOOL shouldModeSwitchForDynamicRange;                                       //@synthesize shouldModeSwitchForDynamicRange=_shouldModeSwitchForDynamicRange - In the implementation block
@property (assign,nonatomic) BOOL shouldModeSwitchForFrameRate;                                          //@synthesize shouldModeSwitchForFrameRate=_shouldModeSwitchForFrameRate - In the implementation block
@property (assign,nonatomic) long long displayConnection;                                                //@synthesize displayConnection=_displayConnection - In the implementation block
@property (assign,nonatomic) BOOL detectedPoorCableConnection;                                           //@synthesize detectedPoorCableConnection=_detectedPoorCableConnection - In the implementation block
@property (assign,nonatomic) long long lastCablePollStatus;                                              //@synthesize lastCablePollStatus=_lastCablePollStatus - In the implementation block
@property (nonatomic,retain) NSDictionary * audioLatencies;                                              //@synthesize audioLatencies=_audioLatencies - In the implementation block
@property (assign,nonatomic) double userPreferredRefreshRate;                                            //@synthesize userPreferredRefreshRate=_userPreferredRefreshRate - In the implementation block
@property (nonatomic,copy) NSArray * blackScreenRecoveryDisplayModes;                                    //@synthesize blackScreenRecoveryDisplayModes=_blackScreenRecoveryDisplayModes - In the implementation block
@property (nonatomic,copy) NSSet * encodedPromotedDisplayModes;                                          //@synthesize encodedPromotedDisplayModes=_encodedPromotedDisplayModes - In the implementation block
@property (assign,nonatomic) BOOL deemed4KCapable;                                                       //@synthesize deemed4KCapable=_deemed4KCapable - In the implementation block
@property (nonatomic,readonly) BOOL isPresentingDisplayAssistant; 
@property (nonatomic,retain) NSNumber * presentedDisplayAssistantKind;                                   //@synthesize presentedDisplayAssistantKind=_presentedDisplayAssistantKind - In the implementation block
@property (nonatomic,readonly) NSDictionary * serialisedState; 
@property (nonatomic,readonly) BOOL usesDolbyLowLatency;                                                 //@synthesize usesDolbyLowLatency=_usesDolbyLowLatency - In the implementation block
@property (nonatomic,retain) NSUserDefaults * defaults;                                                  //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) NSDictionary * memoryStore;                                                 //@synthesize memoryStore=_memoryStore - In the implementation block
@property (nonatomic,copy) NSString * currentEDIDHash;                                                   //@synthesize currentEDIDHash=_currentEDIDHash - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> cableCheckTimer;                              //@synthesize cableCheckTimer=_cableCheckTimer - In the implementation block
@property (nonatomic,copy) PBCableSignalInfo * lastCableErrorInfo;                                       //@synthesize lastCableErrorInfo=_lastCableErrorInfo - In the implementation block
@property (assign,nonatomic) double baseCableCheckTimeInterval;                                          //@synthesize baseCableCheckTimeInterval=_baseCableCheckTimeInterval - In the implementation block
@property (nonatomic,retain) NSMutableArray * matchContentRequestedModes;                                //@synthesize matchContentRequestedModes=_matchContentRequestedModes - In the implementation block
@property (assign,getter=isObservingFocusedProcess,nonatomic) BOOL observingFocusedProcess;              //@synthesize observingFocusedProcess=_observingFocusedProcess - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(unsigned long long)migrateWithContext:(id)arg1 error:(id*)arg2 ;
+(BOOL)shouldAllowModeSwitchForDynamicRange;
+(BOOL)shouldAllowModeSwitchForDynamicFrameRate;
+(id)attachedDisplayEDIDDigest;
+(id)attachedDisplayEDID;
+(void)enumerateMutableDisplayPreferencesUsingBlock:(/*^block*/id)arg1 ;
+(unsigned long long)migratePreferenceKeyForDisplayEDID:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSUserDefaults *)defaults;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(SSDisplay *)systemState;
-(void)setSystemState:(SSDisplay *)arg1 ;
-(void)_resetTimer;
-(BOOL)shouldModeSwitchForFrameRate;
-(BOOL)shouldModeSwitchForDynamicRange;
-(void)removeStateObserver:(id)arg1 ;
-(void)addStateObserver:(id)arg1 ;
-(void)setStateObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)stateObservers;
-(PBSDisplayMode *)currentDisplayMode;
-(void)setCurrentDisplayMode:(PBSDisplayMode *)arg1 ;
-(NSDictionary *)audioLatencies;
-(void)setAudioLatencies:(NSDictionary *)arg1 ;
-(void)setAudioLatency:(id)arg1 forKey:(id)arg2 ;
-(void)sleepDisplayWithReply:(/*^block*/id)arg1 ;
-(void)wakeDisplayWithReply:(/*^block*/id)arg1 ;
-(void)updateDisplayManagerWithRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)enableModeSwitchingForDynamicRange:(BOOL)arg1 ;
-(void)enableModeSwitchingForFrameRate:(BOOL)arg1 ;
-(void)handleRegionChangeWithNewCountryCode:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)presentDisplayAssistantWithRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)forgetDisplaysForDisplayAssistant;
-(void)removeCableCheckHistory;
-(void)displayAssistantDidStartForKind:(id)arg1 ;
-(void)displayAssistantDidCompleteForKind:(id)arg1 ;
-(void)fetchCurrentDisplayStateWithReply:(/*^block*/id)arg1 ;
-(NSArray *)sortedDisplayModes;
-(id)promotedVirtualDisplayModes;
-(id)findFirstMode:(/*^block*/id)arg1 ;
-(double)localeRefreshRate;
-(id)audioLatencyForDisplayMode:(id)arg1 ;
-(BOOL)isAdvertisingHDMI2;
-(id)filterModes:(/*^block*/id)arg1 ;
-(id)findMatchingLocaleMode:(id)arg1 enforceVirtualCheck:(BOOL)arg2 ;
-(PBSDisplayMode *)fallbackDisplayMode;
-(PBSDisplayMode *)userSelectedDisplayMode;
-(NSSet *)seenDisplayIDs;
-(NSString *)currentDisplayID;
-(BOOL)canHandleHighBandwidthModes;
-(long long)displayConnection;
-(BOOL)detectedPoorCableConnection;
-(BOOL)deemed4KCapable;
-(long long)lastCablePollStatus;
-(void)setLocaleRefreshRate:(double)arg1 ;
-(void)setSortedDisplayModes:(NSArray *)arg1 ;
-(void)setFallbackDisplayMode:(PBSDisplayMode *)arg1 ;
-(void)setUserSelectedDisplayMode:(PBSDisplayMode *)arg1 ;
-(void)setSeenDisplayIDs:(NSSet *)arg1 ;
-(void)setCurrentDisplayID:(NSString *)arg1 ;
-(void)setCanHandleHighBandwidthModes:(BOOL)arg1 ;
-(void)setShouldModeSwitchForDynamicRange:(BOOL)arg1 ;
-(void)setShouldModeSwitchForFrameRate:(BOOL)arg1 ;
-(void)setDisplayConnection:(long long)arg1 ;
-(void)setDetectedPoorCableConnection:(BOOL)arg1 ;
-(void)setLastCablePollStatus:(long long)arg1 ;
-(void)setDeemed4KCapable:(BOOL)arg1 ;
-(void)startObservingFocusedProcess;
-(NSArray *)blackScreenRecoveryDisplayModes;
-(NSDictionary *)serialisedState;
-(void)updateDisplayForNewRegionWithCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)recalculatedCurrentLocaleRefreshRate;
-(void)displayAssistantDidCompleteForKind:(id)arg1 fromUserInteraction:(BOOL)arg2 ;
-(void)_considerDisplayModeSwitchFinished:(id)arg1 ;
-(BOOL)_shouldModeSwitchForBundleIdentifier:(id)arg1 ;
-(id)preferredDisplayModeForBundleIdentifier:(id)arg1 ;
-(id)_bestDisplayModeForDynamicRange:(long long)arg1 frameRate:(double)arg2 ;
-(void)_updateDisplayManagerWithDisplayMode:(id)arg1 ;
-(id)_bestSDRDisplayMode;
-(id)readUserSelectedDisplayMode;
-(id)_fallbackPredicatesForDynamicRange:(long long)arg1 frameRates:(id)arg2 ;
-(id)_displayModePredicatesForDynamicRange:(long long)arg1 frameRate:(double)arg2 ;
-(id)_findDisplayModeFromPredicate:(id)arg1 ;
-(BOOL)_isModeSwitchInProgress;
-(NSMutableArray *)matchContentRequestedModes;
-(void)_notifyDisplayModeChange:(BOOL)arg1 ;
-(void)_notifyDisplayModeChangeDidFinish;
-(void)addNativeAndPerformanceObservers;
-(void)removeNativeAndPerformanceObservers;
-(BOOL)isModeSwitchNeededForTransitionToBundleIdentifier:(id)arg1 ;
-(void)performModeSwitchForBundleIdentifierIfNeeded:(id)arg1 ;
-(void)performModeSwitchForDisplayConfigurationRequest:(id)arg1 ;
-(long long)reportingValueForMatchDynamicRange;
-(long long)reportingValueForMatchFrameRate;
-(BOOL)usesDolbyLowLatency;
-(void)_saveDisplayMode:(id)arg1 forKey:(id)arg2 persisted:(BOOL)arg3 ;
-(id)_readDisplayModeForKey:(id)arg1 persisted:(BOOL)arg2 ;
-(void)removeDisplayModeForKey:(id)arg1 persisted:(BOOL)arg2 ;
-(id)_currentResolutionsPreferencesFromPersistentStore:(BOOL)arg1 ;
-(void)_saveCurrentResolutionsPreferences:(id)arg1 toPersistentStore:(BOOL)arg2 ;
-(NSSet *)encodedPromotedDisplayModes;
-(void)setEncodedPromotedDisplayModes:(NSSet *)arg1 ;
-(NSString *)currentEDIDHash;
-(NSDictionary *)memoryStore;
-(void)setMemoryStore:(NSDictionary *)arg1 ;
-(BOOL)_debugAlwaysSaveModeEnabled;
-(void)saveUserSelectedDisplayMode:(id)arg1 ;
-(void)removeUserSelectedDisplayMode;
-(void)saveCurrentDisplayID:(id)arg1 ;
-(id)readSeenDisplayIDs;
-(void)saveCanHandleHighBandwidthModes:(BOOL)arg1 ;
-(BOOL)readCanDoHighBandwidth;
-(void)saveShouldModeSwitchForDynamicRange:(BOOL)arg1 ;
-(BOOL)readShouldModeSwitchForDynamicRange;
-(void)saveShouldModeSwitchForFrameRate:(BOOL)arg1 ;
-(BOOL)readShouldModeSwitchForFrameRate;
-(void)saveUserPreferredRefreshRate:(double)arg1 ;
-(double)readUserPreferredRefreshRate;
-(void)saveDidCompleteDisplayAssistant:(BOOL)arg1 ;
-(BOOL)readDidCompleteDisplayAssistant;
-(void)removeAllCompleteDisplayAssistants;
-(void)saveNewPromotedDisplayMode:(id)arg1 ;
-(void)removePromotedDisplayModes;
-(id)readEncodedPromotedDisplayModes;
-(void)saveNewAudioLatency:(id)arg1 forKey:(id)arg2 ;
-(void)removeAudioLatencies;
-(id)readAudioLatencies;
-(void)saveLastCableErrorInfo:(id)arg1 ;
-(id)readLastCableErrorInfo;
-(void)removeLastCableErrorInfo;
-(void)saveDetectedPoorCableConnection:(BOOL)arg1 ;
-(BOOL)readDetectedPoorCableConnection;
-(void)saveCableCheckCumulativeTime:(double)arg1 ;
-(double)readCableCheckCumulativeTime;
-(void)resetCableCheckCumulativeTime;
-(BOOL)_shouldPreferDolbyVisionLowLatency;
-(double)readCableHistoryWindowOverride;
-(double)readCableErrorPollingIntervalOverride;
-(int)readCableScoreOverride;
-(double)readCableAlertIntervalOverride;
-(BOOL)isPresentingDisplayAssistant;
-(NSNumber *)presentedDisplayAssistantKind;
-(void)_stopBackgroundMonitoring;
-(void)setCableCheckTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)cableCheckTimer;
-(void)_startBackgroundMonitoringAndIgnoreFirstPoll:(BOOL)arg1 ;
-(double)baseCableCheckTimeInterval;
-(void)setBaseCableCheckTimeInterval:(double)arg1 ;
-(void)setLastCableErrorInfo:(PBCableSignalInfo *)arg1 ;
-(PBCableSignalInfo *)lastCableErrorInfo;
-(double)_historyWindowInterval;
-(void)startMonitoringCable;
-(double)_pollingInterval;
-(void)_processCurrentCableInfo;
-(void)stopMonitoringCable;
-(void)resetCableInfoHistory;
-(void)registerModeSwitch;
-(BOOL)didCompleteDisplayAssistantForCurrentDisplay;
-(void)reloadState;
-(NSNumber *)displayConnectionToNotify;
-(void)notifyStateChangeForDisplayConnection:(long long)arg1 ;
-(void)setDisplayConnectionToNotify:(NSNumber *)arg1 ;
-(NSObject*<OS_dispatch_source>)reloadStateSource;
-(NSObject*<OS_dispatch_source>)notifyClientsSource;
-(BOOL)filteredUsingdPineBoardPolicy;
-(id)findMatchingCAMode:(id)arg1 ;
-(void)_resetSettingsForCurrentDisplay;
-(NSMutableDictionary *)nextEstablishModePerDisplays;
-(BOOL)updateCurrentCADisplayFromDisplayMode:(id)arg1 error:(id*)arg2 ;
-(void)setCurrentEDIDHash:(NSString *)arg1 ;
-(id)_recalculatedDisplayModesFromCoreAnimationModes:(id)arg1 ;
-(BOOL)_recalculateDefaultDisplayMode:(id*)arg1 ;
-(id)_recalculatedBlackScreenRecoveryDisplayModes;
-(void)setFilteredUsingdPineBoardPolicy:(BOOL)arg1 ;
-(double)userPreferredRefreshRate;
-(void)completeDisplayTransition:(long long)arg1 error:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)setPresentedDisplayAssistantKind:(NSNumber *)arg1 ;
-(void)setUserPreferredRefreshRate:(double)arg1 ;
-(BOOL)isObservingFocusedProcess;
-(void)setObservingFocusedProcess:(BOOL)arg1 ;
-(void)setBlackScreenRecoveryDisplayModes:(NSArray *)arg1 ;
-(void)setNextEstablishModePerDisplays:(NSMutableDictionary *)arg1 ;
-(void)setMatchContentRequestedModes:(NSMutableArray *)arg1 ;
@end

