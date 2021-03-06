/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriUIActivation.framework/SiriUIActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUIActivation/SiriUIActivation-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <SiriUIActivation/SASStateChangeListener.h>
#import <SiriUIActivation/AFUISiriLanguageDelegate.h>
#import <SiriUIActivation/AFUISiriViewControllerDelegate.h>
#import <SiriUIActivation/AFUISiriViewControllerDataSource.h>
#import <SiriUIActivation/AFUISiriSetupViewControllerDelegate.h>
#import <SiriUIActivation/SiriPresentation.h>

@protocol OS_dispatch_queue, SiriPresentationControllerDelegate, SiriPresentationIntentUsageDelegate;
@class NSDate, AFRequestCompletionOptions, NSMutableDictionary, UIScreen, NSObject, BSServiceConnection, AFConnection, NSTimer, NSArray, AFWatchdogTimer, AFUISiriLanguage, AFUISiriViewController, AFUISiriSetupViewController, NSString, AFQueue;

@interface SiriPresentationViewController : UIViewController <SASStateChangeListener, AFUISiriLanguageDelegate, AFUISiriViewControllerDelegate, AFUISiriViewControllerDataSource, AFUISiriSetupViewControllerDelegate, SiriPresentation> {

	long long _identifier;
	BOOL _delaySessionEndForTTS;
	NSDate* _lastGuideCheck;
	AFRequestCompletionOptions* _completionOptions;
	NSMutableDictionary* _activePresentationProperties;
	UIScreen* _activeScreen;
	BOOL _activationHandled;
	BOOL _isIdleAndQuiet;
	/*^block*/id _buttonTrigger;
	BOOL _receivedIncomingPhoneCall;
	NSObject*<OS_dispatch_queue> _watchdogQueue;
	BOOL _springBoardIdleTimerDisabled;
	BOOL _waitingForTelephonyToStart;
	BOOL _startGuidedAccessOnDismissal;
	BOOL _pocketStateKeptScreenOffDuringActivation;
	BOOL _buttonDownEventDidOccur;
	BOOL _predictedRecordRouteIsZLL;
	os_unfair_lock_s _lock;
	long long identifier;
	id<SiriPresentationControllerDelegate> siriPresentationControllerDelegate;
	BSServiceConnection* _connection;
	AFConnection* _unownedConnection;
	NSDate* _lastAppUpdateTimestamp;
	double _buttonDownTimestamp;
	NSTimer* _carSiriButtonHoldToTalkTimer;
	double _carSiriButtonTimeInterval;
	NSArray* _contextAppInfosForSiriViewController;
	NSArray* _currentCarPlaySupportedOEMAppIdList;
	NSArray* _starkAppBundleIdentifierContext;
	unsigned long long _currentLockState;
	AFWatchdogTimer* _activationTimer;
	AFUISiriLanguage* _language;
	id<SiriPresentationIntentUsageDelegate> _intentUsageDelegate;
	NSTimer* _clearSiriViewControllerTimer;
	AFUISiriViewController* _siriViewController;
	AFUISiriSetupViewController* _siriSetupViewController;
	NSString* __currentTestName;
	NSString* __currentTestID;
	AFQueue* _testInputQueue;
	CGRect _hostedPresentationFrame;

}

@property (nonatomic,retain) id<SiriPresentationIntentUsageDelegate> intentUsageDelegate; 
@property (assign,nonatomic) os_unfair_lock_s lock;                                                                                                                                            //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) BSServiceConnection * connection;                                                                                                                                 //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) CGRect hostedPresentationFrame;                                                                                                                                   //@synthesize hostedPresentationFrame=_hostedPresentationFrame - In the implementation block
@property (nonatomic,retain) AFConnection * unownedConnection;                                                                                                                                 //@synthesize unownedConnection=_unownedConnection - In the implementation block
@property (setter=_setLastAppUpdateTimestamp:,getter=_lastAppUpdateTimestamp,nonatomic,retain) NSDate * lastAppUpdateTimestamp;                                                                //@synthesize lastAppUpdateTimestamp=_lastAppUpdateTimestamp - In the implementation block
@property (assign,setter=_setSpringBoardIdleTimerDisabled:,getter=_isSpringBoardIdleTimerDisabled,nonatomic) BOOL springBoardIdleTimerDisabled;                                                //@synthesize springBoardIdleTimerDisabled=_springBoardIdleTimerDisabled - In the implementation block
@property (assign,setter=_setWaitingForTelephonyToStart:,getter=_isWaitingForTelephonyToStart,nonatomic) BOOL waitingForTelephonyToStart;                                                      //@synthesize waitingForTelephonyToStart=_waitingForTelephonyToStart - In the implementation block
@property (assign,setter=_setStartGuidedAccessOnDismissal:,getter=_startGuidedAccessOnDismissal,nonatomic) BOOL startGuidedAccessOnDismissal;                                                  //@synthesize startGuidedAccessOnDismissal=_startGuidedAccessOnDismissal - In the implementation block
@property (assign,setter=_setPocketStateKeptScreenOffDuringActivation:,getter=_pocketStateKeptScreenOffDuringActivation,nonatomic) BOOL pocketStateKeptScreenOffDuringActivation;              //@synthesize pocketStateKeptScreenOffDuringActivation=_pocketStateKeptScreenOffDuringActivation - In the implementation block
@property (assign,setter=_setButtonDownEventDidOccur:,getter=_buttonDownEventDidOccur,nonatomic) BOOL buttonDownEventDidOccur;                                                                 //@synthesize buttonDownEventDidOccur=_buttonDownEventDidOccur - In the implementation block
@property (assign,setter=_setButtonDownTimestamp:,getter=_buttonDownTimestamp,nonatomic) double buttonDownTimestamp;                                                                           //@synthesize buttonDownTimestamp=_buttonDownTimestamp - In the implementation block
@property (setter=_setCarSiriButtonHoldToTalkTimer:,getter=_carSiriButtonHoldToTalkTimer,nonatomic,retain) NSTimer * carSiriButtonHoldToTalkTimer;                                             //@synthesize carSiriButtonHoldToTalkTimer=_carSiriButtonHoldToTalkTimer - In the implementation block
@property (assign,setter=_setCarSiriButtonTimeInterval:,getter=_carSiriButtonTimeInterval,nonatomic) double carSiriButtonTimeInterval;                                                         //@synthesize carSiriButtonTimeInterval=_carSiriButtonTimeInterval - In the implementation block
@property (nonatomic,retain) NSArray * contextAppInfosForSiriViewController;                                                                                                                   //@synthesize contextAppInfosForSiriViewController=_contextAppInfosForSiriViewController - In the implementation block
@property (nonatomic,retain) NSArray * currentCarPlaySupportedOEMAppIdList;                                                                                                                    //@synthesize currentCarPlaySupportedOEMAppIdList=_currentCarPlaySupportedOEMAppIdList - In the implementation block
@property (nonatomic,retain) NSArray * starkAppBundleIdentifierContext;                                                                                                                        //@synthesize starkAppBundleIdentifierContext=_starkAppBundleIdentifierContext - In the implementation block
@property (assign,nonatomic) BOOL predictedRecordRouteIsZLL;                                                                                                                                   //@synthesize predictedRecordRouteIsZLL=_predictedRecordRouteIsZLL - In the implementation block
@property (assign,nonatomic) unsigned long long currentLockState;                                                                                                                              //@synthesize currentLockState=_currentLockState - In the implementation block
@property (nonatomic,retain) AFWatchdogTimer * activationTimer;                                                                                                                                //@synthesize activationTimer=_activationTimer - In the implementation block
@property (getter=_language,nonatomic,readonly) AFUISiriLanguage * language;                                                                                                                   //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) id<SiriPresentationIntentUsageDelegate> intentUsageDelegate;                                                                                                      //@synthesize intentUsageDelegate=_intentUsageDelegate - In the implementation block
@property (nonatomic,retain) NSTimer * clearSiriViewControllerTimer;                                                                                                                           //@synthesize clearSiriViewControllerTimer=_clearSiriViewControllerTimer - In the implementation block
@property (nonatomic,retain) AFUISiriViewController * siriViewController;                                                                                                                      //@synthesize siriViewController=_siriViewController - In the implementation block
@property (nonatomic,retain) AFUISiriSetupViewController * siriSetupViewController;                                                                                                            //@synthesize siriSetupViewController=_siriSetupViewController - In the implementation block
@property (setter=_setCurrentTestName:,nonatomic,copy) NSString * _currentTestName;                                                                                                            //@synthesize _currentTestName=__currentTestName - In the implementation block
@property (setter=_setCurrentTestID:,nonatomic,copy) NSString * _currentTestID;                                                                                                                //@synthesize _currentTestID=__currentTestID - In the implementation block
@property (getter=_testInputQueue,nonatomic,copy) AFQueue * testInputQueue;                                                                                                                    //@synthesize testInputQueue=_testInputQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long identifier; 
@property (nonatomic,retain) id<SiriPresentationControllerDelegate> siriPresentationControllerDelegate; 
+(id)extractTestingInputsFromContext:(id)arg1 ;
+(BOOL)testIsSyntheticActivation:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(os_unfair_lock_s)lock;
-(long long)identifier;
-(void)setConnection:(BSServiceConnection *)arg1 ;
-(BSServiceConnection *)connection;
-(id)initWithIdentifier:(long long)arg1 ;
-(BOOL)isEnabled;
-(void)dismiss;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(oneway void)preheat;
-(id)_language;
-(void)viewWillLayoutSubviews;
-(BOOL)shouldAutorotate;
-(NSString *)_currentTestName;
-(void)siriLanguageSpokenLanguageCodeDidChange:(id)arg1 ;
-(void)extendCurrentTTSRequested;
-(void)siriSessionShouldExtendAudioSessionForImminentPhoneCall;
-(void)siriSessionShouldEndExtendAudioSessionForImminentPhoneCall;
-(void)siriViewControllerDidChangeVisibility:(id)arg1 ;
-(void)siriViewController:(id)arg1 didEncounterUnexpectedError:(id)arg2 ;
-(id)siriViewController:(id)arg1 bulletinWithIdentifier:(id)arg2 ;
-(unsigned long long)lockStateForSiriViewController:(id)arg1 ;
-(void)siriViewControllerDidFinishDismissing:(id)arg1 ;
-(void)dismissSiriViewController:(id)arg1 delayForTTS:(BOOL)arg2 ;
-(void)startGuidedAccessForSiriViewController:(id)arg1 ;
-(void)userRelevantEventDidOccurInSiriViewController:(id)arg1 ;
-(void)siriViewController:(id)arg1 launchApplicationWithBundleIdentifier:(id)arg2 withURL:(id)arg3 launchOptions:(long long)arg4 replyHandler:(/*^block*/id)arg5 ;
-(void)siriViewController:(id)arg1 siriIdleAndQuietStatusDidChange:(BOOL)arg2 ;
-(void)siriViewController:(id)arg1 willStartTest:(id)arg2 ;
-(void)siriViewController:(id)arg1 didFinishTest:(id)arg2 ;
-(void)siriViewController:(id)arg1 failTest:(id)arg2 withReason:(id)arg3 ;
-(void)siriViewController:(id)arg1 didReadBulletinWithIdentifier:(id)arg2 ;
-(void)siriViewController:(id)arg1 openURL:(id)arg2 delaySessionEndForTTS:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)siriViewController:(id)arg1 openURL:(id)arg2 appBundleID:(id)arg3 allowSiriDismissal:(BOOL)arg4 ;
-(void)siriViewController:(id)arg1 didChangePresentationPeekMode:(unsigned long long)arg2 ;
-(void)siriViewController:(id)arg1 requestsPresentation:(/*^block*/id)arg2 ;
-(void)siriViewController:(id)arg1 requestsDismissal:(/*^block*/id)arg2 ;
-(void)siriViewController:(id)arg1 presentedIntentWithBundleId:(id)arg2 ;
-(void)siriViewController:(id)arg1 didUpdateAudioCategoriesDisablingVolumeHUD:(id)arg2 ;
-(void)siriViewController:(id)arg1 didHideStatusView:(BOOL)arg2 ;
-(id)_uiPresentationIdentifier;
-(id)siriViewController:(id)arg1 willStartRequestWithOptions:(id)arg2 ;
-(BOOL)predictedRecordRouteIsZLL;
-(BOOL)siriViewControllerShouldSupportTextInput:(id)arg1 ;
-(BOOL)siriViewControllerShouldEndSession:(id)arg1 ;
-(BOOL)siriViewController:(id)arg1 attemptUnlockWithPassword:(id)arg2 ;
-(id)bulletinsForSiriViewController:(id)arg1 ;
-(id)contextAppInfosForSiriViewController:(id)arg1 ;
-(id)currentCarPlaySupportedOEMAppsForSiriViewController:(id)arg1 ;
-(id)starkAppBundleIdentifierContextForSiriViewController:(id)arg1 ;
-(void)siriViewControllerSessionDidResetContext:(id)arg1 ;
-(void)siriViewController:(id)arg1 didCompleteRequestWithError:(id)arg2 ;
-(void)setHostedPresentationFrame:(CGRect)arg1 ;
-(void)animatedAppearanceWithFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)animatedDisappearanceWithFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)cancelTTS;
-(CGRect)hostedPresentationFrame;
-(void)setPredictedRecordRouteIsZLL:(BOOL)arg1 ;
-(double)_buttonDownTimestamp;
-(void)siriSetupViewControllerDidChangeVisibility:(id)arg1 ;
-(void)dismissSiriSetupViewController:(id)arg1 ;
-(void)openSiriRequestedBySiriSetupViewController:(id)arg1 ;
-(void)disableSiriActivationRequestedBySiriSetupViewController:(id)arg1 ;
-(void)setContextAppInfosForSiriViewController:(NSArray *)arg1 ;
-(void)setCurrentLockState:(unsigned long long)arg1 ;
-(oneway void)presentationRequestedWithPresentationOptions:(id)arg1 requestOptions:(id)arg2 ;
-(oneway void)presentationDismissalRequestedWithOptions:(id)arg1 ;
-(oneway void)handleRequestWithOptions:(id)arg1 ;
-(BOOL)presentationisIdleAndQuiet;
-(oneway void)cancelPreheat;
-(oneway void)cancelPendingActivationEventWithReason:(id)arg1 ;
-(oneway void)turnOnScreenAfterPocketStateFetch;
-(oneway void)handleButtonDownFromButtonIdentifier:(id)arg1 timestamp:(id)arg2 ;
-(oneway void)handleButtonUpFromButtonIdentifier:(id)arg1 timestamp:(id)arg2 ;
-(oneway void)handleButtonTapFromButtonIdentifier:(id)arg1 ;
-(oneway void)handleButtonLongPressFromButtonIdentifier:(id)arg1 timestamp:(id)arg2 ;
-(oneway void)updateCurrentLockState:(id)arg1 ;
-(oneway void)updateActiveInterfaceOrientation:(id)arg1 willAnimationWithDuration:(id)arg2 ;
-(void)bulletinManagerDidChangeBulletins;
-(AFWatchdogTimer *)activationTimer;
-(void)setActivationTimer:(AFWatchdogTimer *)arg1 ;
-(void)callStateChangedToIsActive:(BOOL)arg1 isOutgoing:(BOOL)arg2 ;
-(NSArray *)contextAppInfosForSiriViewController;
-(unsigned long long)currentLockState;
-(NSArray *)currentCarPlaySupportedOEMAppIdList;
-(void)setCurrentCarPlaySupportedOEMAppIdList:(NSArray *)arg1 ;
-(long long)preferredFlamesViewFidelity;
-(void)prewarmFlamesViewShadersInBackgroundForScreen:(id)arg1 activeFrame:(CGRect)arg2 ;
-(id)initWithIdentifier:(long long)arg1 hostedPresentationFrame:(CGRect)arg2 ;
-(AFUISiriViewController *)siriViewController;
-(AFUISiriSetupViewController *)siriSetupViewController;
-(id)_fallbackScreenForIdentifier:(long long)arg1 ;
-(CGRect)_fallbackFrameForScreen:(id)arg1 withIdentifier:(long long)arg2 ;
-(void)_updateLanguageCode;
-(void)_invalidateCarSiriButtonHoldToTalkTimer;
-(void)dismissWithOptions:(id)arg1 ;
-(BOOL)siriViewControllerConfigured;
-(void)_presentationRequestedWithPresentationOptions:(id)arg1 requestOptions:(id)arg2 ;
-(void)_setPocketStateKeptScreenOffDuringActivation:(BOOL)arg1 ;
-(void)_processIncomingRequestOptionsForTestingPayload:(id)arg1 ;
-(BOOL)_shouldShowSetupViewController;
-(void)_showSetupViewControllerIfNecessary;
-(void)_removeSetupViewControllerIfNecessary;
-(void)_presentSiriViewControllerWithPresentationOptions:(id)arg1 requestOptions:(id)arg2 ;
-(BOOL)_pocketStateKeptScreenOffDuringActivation;
-(id<SiriPresentationControllerDelegate>)siriPresentationControllerDelegate;
-(void)_prepareSiriViewControllerWithRequestOptions:(id)arg1 ;
-(void)_activateWithRequestOptions:(id)arg1 ;
-(void)_presentationRequestedHandlerWithRequestOptions:(id)arg1 ;
-(void)startActivationWatchdogTimer;
-(void)stopActivationWatchdogTimerIfNeededThen:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(void)activateWithRequestOptions:(id)arg1 ;
-(void)_updateHostedPresentationFrame;
-(NSTimer *)clearSiriViewControllerTimer;
-(void)setClearSiriViewControllerTimer:(NSTimer *)arg1 ;
-(id)siriViewControllerWithRequestSource:(long long)arg1 ;
-(void)_setSiriViewModeForRequestOptions:(id)arg1 ;
-(void)_handleContextClearForRequestOptions:(id)arg1 ;
-(void)_updateActivePresentationPropertiesForPresentationIdentifier:(id)arg1 ;
-(void)activateWithSource:(long long)arg1 requestOptions:(id)arg2 timestamp:(id)arg3 ;
-(BOOL)_releaseExistingTrigger;
-(void)_setButtonDownEventDidOccur:(BOOL)arg1 ;
-(void)_setButtonDownTimestamp:(double)arg1 ;
-(void)_wasDismissed;
-(void)_enableSpringBoardIdleTimer;
-(void)_scheduleConnectionHouseKeepingAfterDelay:(double)arg1 ;
-(void)_setUpUnownedConnectionIfNecessary;
-(void)_cleanupUnownedConnection;
-(BOOL)_cancelPendingPhoneCall;
-(void)activateWithSource:(long long)arg1 timestamp:(id)arg2 ;
-(void)_setCarSiriButtonTimeInterval:(double)arg1 ;
-(void)_carSiriButtonHoldToTalkIntervalFiredWithButtonIdentifier:(long long)arg1 ;
-(void)_setCarSiriButtonHoldToTalkTimer:(id)arg1 ;
-(id)_carSiriButtonHoldToTalkTimer;
-(BOOL)_buttonIdentifierIsHoldToTalkTrigger:(long long)arg1 ;
-(BOOL)_handleTapButtonBehavior:(long long)arg1 ;
-(BOOL)_handleTapDismissal:(long long)arg1 ;
-(void)_dismissSiriSetup;
-(void)_requestDismissal;
-(double)_carSiriButtonTimeInterval;
-(void)_cancelPendingActivationWithReason:(unsigned long long)arg1 ;
-(void)_setWaitingForTelephonyToStart:(BOOL)arg1 ;
-(void)_telephonyHasStarted;
-(void)_processConnectionHouseKeeping;
-(void)setSiriViewController:(AFUISiriViewController *)arg1 ;
-(void)_finishClearingSiriViewController:(id)arg1 ;
-(BOOL)_isDelayingSessionEnd;
-(void)_checkForGuideUpdatesIfNecessary;
-(void)_clearSiriViewController;
-(BOOL)_startGuidedAccessOnDismissal;
-(void)_setStartGuidedAccessOnDismissal:(BOOL)arg1 ;
-(BOOL)presentationHostedInSpringBoard;
-(void)_setSpringBoardIdleTimerDisabled:(BOOL)arg1 ;
-(void)_beginDelayingSessionEndForTTS;
-(BOOL)_hasTestingInput;
-(id)_dequeueTestingInput;
-(void)_openURL:(id)arg1 bundleId:(id)arg2 delaySessionEndForTTS:(BOOL)arg3 punchoutStyle:(long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)_endDelayingSessionEndForTTS;
-(id<SiriPresentationIntentUsageDelegate>)intentUsageDelegate;
-(NSArray *)starkAppBundleIdentifierContext;
-(BOOL)_isWaitingForTelephonyToStart;
-(void)_callIsActiveDidChangeNotification:(id)arg1 ;
-(void)_sendTelephonyHasStartedAfterDelay:(double)arg1 ;
-(void)_ttsQueueDidEmpty:(id)arg1 ;
-(void)_setupSiriViewControllerPresentedSuccessHandler;
-(void)setSiriSetupViewController:(AFUISiriSetupViewController *)arg1 ;
-(void)_watchdogQueue_startActivationWatchdogTimer;
-(void)_watchdogQueue_stopActivationWatchdogTimerIfNeededThen:(/*^block*/id)arg1 onQueue:(id)arg2 ;
-(BOOL)siriSetupViewController:(id)arg1 openURL:(id)arg2 ;
-(void)setSiriPresentationControllerDelegate:(id<SiriPresentationControllerDelegate>)arg1 ;
-(void)_siriDidOpenURL:(id)arg1 ;
-(BOOL)_isDeviceButton:(long long)arg1 ;
-(void)_applicationsDidChange;
-(AFConnection *)unownedConnection;
-(void)setUnownedConnection:(AFConnection *)arg1 ;
-(id)_lastAppUpdateTimestamp;
-(void)_setLastAppUpdateTimestamp:(id)arg1 ;
-(BOOL)_isSpringBoardIdleTimerDisabled;
-(BOOL)_buttonDownEventDidOccur;
-(void)setStarkAppBundleIdentifierContext:(NSArray *)arg1 ;
-(void)setIntentUsageDelegate:(id<SiriPresentationIntentUsageDelegate>)arg1 ;
-(void)_setCurrentTestName:(id)arg1 ;
-(NSString *)_currentTestID;
-(void)_setCurrentTestID:(id)arg1 ;
-(id)_testInputQueue;
-(void)setTestInputQueue:(AFQueue *)arg1 ;
-(void)_removePreviousInjectAudioSettings;
-(void)_removePreviousConversationIfNeededWithTestName:(id)arg1 testOptions:(id)arg2 ;
-(void)_runSiriBringupListeningStateTestWithTestName:(id)arg1 testOptions:(id)arg2 ;
-(void)_runSiriBringupSnippetTestWithTestName:(id)arg1 testOptions:(id)arg2 dismissUIAfterTimeout:(BOOL)arg3 finishTestAfterTimeout:(BOOL)arg4 ;
-(void)_runSiriBringupToConversationTestWithTestName:(id)arg1 testOptions:(id)arg2 ;
-(void)_runSiriBringupToConversationMainTestWithTestName:(id)arg1 testOptions:(id)arg2 ;
-(id)_updateTestStartedTimeInTestOptions:(id)arg1 toTime:(id)arg2 ;
-(void)_runSiriBringupInjectAudioTestWithTestName:(id)arg1 testOptions:(id)arg2 dismissUIAfterTimeout:(BOOL)arg3 finishTestAfterTimeout:(BOOL)arg4 ;
-(void)_runSiriBringupNetworkEnabledTestWithTestName:(id)arg1 testOptions:(id)arg2 dismissUIAfterTimeout:(BOOL)arg3 finishTestAfterTimeout:(BOOL)arg4 ;
-(void)_runSiriBringupCarPlayButtonToSpeechRecordingWithoutPrewarmTestWithTestName:(id)arg1 testOptions:(id)arg2 ;
-(void)_runSyntheticButtonActivationTest;
-(void)_enableAudioInjection:(BOOL)arg1 audioFiles:(id)arg2 ;
-(void)_clearAllTestingInputs;
-(void)_enqueueTestInput:(id)arg1 ;
-(BOOL)_handlePPTActivation:(id)arg1 ;
-(void)runTest:(id)arg1 testOptions:(id)arg2 ;
-(void)_dismissTest:(id)arg1 afterTimeoutWithTestOptions:(id)arg2 finishTest:(BOOL)arg3 ;
-(void)_startUIRequestWithText:(id)arg1 testName:(id)arg2 ;
-(BOOL)_broadcastPlistDictionaryWithTestName:(id)arg1 testOptions:(id)arg2 ;
@end

