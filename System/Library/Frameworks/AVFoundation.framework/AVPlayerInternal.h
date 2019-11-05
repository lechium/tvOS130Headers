/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AVCallbackCancellationAVKVOIntrospection, AVLoggingIdentifier;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, AVPixelBufferAttributeMediator, NSObject, AVAudioSessionMediaPlayerOnly, NSError, AVPlayerItem, NSMutableSet, NSArray, NSMutableDictionary, AVAudioSession, NSDictionary, AVOutputContext, NSMutableArray, NSString, NSHashTable;

@interface AVPlayerInternal : NSObject {

	AVWeakReference* weakReference;
	AVPixelBufferAttributeMediator* pixelBufferAttributeMediator;
	NSObject*<OS_dispatch_queue> stateDispatchQueue;
	NSObject*<OS_dispatch_queue> figConfigurationQueue;
	NSObject*<OS_dispatch_queue> layerInteractionQueue;
	NSObject*<OS_dispatch_queue> ivarAccessQueue;
	NSObject*<OS_dispatch_queue> currentItemPropertyUpdateQueue;
	NSObject*<OS_dispatch_queue> layersQ;
	OpaqueCMTimebaseRef proxyTimebase;
	BOOL logPerformanceData;
	AVAudioSessionMediaPlayerOnly* audioSessionMediaPlayerOnly;
	void* IAPDCallbackToken;
	OpaqueFigSimpleMutexRef prerollIDMutex;
	NSObject*<OS_dispatch_queue> configurationQueue;
	long long status;
	NSError* error;
	AVPlayerItem* currentItem;
	AVPlayerItem* lastItem;
	NSMutableSet* items;
	NSArray* queueModifications;
	NSMutableDictionary* pendingFigPlayerProperties;
	AVAudioSession* audioSession;
	NSDictionary* vibrationPattern;
	AVOutputContext* outputContext;
	BOOL IOwnTheFigPlayer;
	BOOL allowsVideoPlaybackWhileInBackground;
	BOOL pausesAudioVisualPlaybackInBackground;
	NSMutableArray* handlersToCallWhenReadyToPlay;
	BOOL shouldReduceResourceUsage;
	long long resourceConservationLevelWhilePaused;
	NSString* playerRole;
	BOOL usesDedicatedNotificationQueueForMediaServices;
	CGSize dimensionsOfReservedVideoMemory;
	NSString* externalPlaybackVideoGravity;
	long long actionAtItemEnd;
	float volume;
	float userVolume;
	float minRateForAudioPlayback;
	float maxRateForAudioPlayback;
	BOOL autoSwitchStreamVariants;
	BOOL preparesItemsForPlaybackAsynchronously;
	BOOL allowsOutOfBandTextTrackRendering;
	BOOL muted;
	BOOL closedCaptionDisplayEnabled;
	BOOL appliesMediaSelectionCriteriaAutomatically;
	BOOL dynamicallyChoosesInitialVariant;
	BOOL limitsBandwidthForCellularAccess;
	BOOL usesAudioOnlyModeForExternalPlayback;
	BOOL allowsPixelBufferPoolSharing;
	BOOL disallowsAMRAudio;
	BOOL disallowsHardwareAcceleratedVideoDecoder;
	BOOL layerDestinationIsTVOut;
	BOOL preventsDisplaySleepDuringVideoPlayback;
	BOOL disallowsVideoLayerDisplayCompositing;
	BOOL allowsExternalPlayback;
	BOOL usesExternalPlaybackWhileExternalScreenIsActive;
	NSString* captionPipelineStrategy;
	NSString* audioOutputDeviceUniqueID;
	NSString* clientName;
	NSString* multichannelAudioStrategy;
	long long clientPriority;
	BOOL PIPModePossible;
	BOOL isDisplayingClosedCaptions;
	BOOL externalPlaybackActive;
	BOOL airPlayVideoActive;
	BOOL isConnectedToPhysicalSecondScreen;
	BOOL outputObscuredDueToInsufficientExternalProtection;
	long long externalProtectionStatus;
	NSString* ancillaryPerformanceInformationForDisplay;
	float rate;
	BOOL automaticallyWaitsToMinimizeStalling;
	BOOL usesLegacyAutomaticWaitingBehavior;
	long long timeControlStatus;
	NSString* reasonForWaitingToPlay;
	CGSize currentItemPresentationSize;
	BOOL currentItemNonForcedSubtitlesEnabled;
	unsigned long long preferredVideoDecoderGPURegistryID;
	BOOL disallowsAutoPauseOnRouteRemovalIfNoAudio;
	BOOL hostApplicationInForeground;
	NSMutableArray* videoLayers;
	NSMutableArray* subtitleLayers;
	NSMutableArray* closedCaptionLayers;
	NSHashTable* avPlayerLayers;
	int nextPrerollIDToGenerate;
	int pendingPrerollID;
	/*^block*/id prerollCompletionHandler;
	id currentItemSuppressesVideoLayersNotificationToken;
	id<AVCallbackCancellation><AVKVOIntrospection> currentItemPreferredPixelBufferAttributesCallbackInvoker;
	OpaqueFigPlayerRef figPlayer;
	OpaqueFigPlaybackItemRef figPlaybackItemToIdentifyNextCurrentItem;
	BOOL needsToCreateFigPlayer;
	NSDictionary* cachedFigMediaSelectionCriteriaProperty;
	NSArray* itemsInFigPlayQueue;
	NSArray* expectedAssetTypes;
	BOOL reevaluateBackgroundPlayback;
	BOOL hadAssociatedOnscreenPlayerLayerWhenSuspended;
	OpaqueCMClockRef figMasterClock;
	NSString* captionRenderingStrategy;
	NSArray* displaysUsedForPlayback;
	id<AVLoggingIdentifier> loggingIdentifier;

}
@end
