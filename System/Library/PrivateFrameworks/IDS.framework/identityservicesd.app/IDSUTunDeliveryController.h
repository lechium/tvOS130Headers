/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSNRDeviceBridgeDelegate.h>
#import <identityservicesd/IDSUTunPeerDelegate.h>
#import <identityservicesd/IMSystemMonitorListener.h>
#import <identityservicesd/IDSPairingManagerDelegate.h>
#import <identityservicesd/IDSRapportClientDelegate.h>

@protocol IDSUTunDeliveryControllerDelegate, OS_dispatch_queue;
@class NSMutableDictionary, NSHashTable, NSSet, IMTimer, NSObject, IDSNRDeviceBridge, IDSNRDevicePreferencesHandler, IDSConnectivityMonitor, NSDictionary, NSString;

@interface IDSUTunDeliveryController : NSObject <IDSNRDeviceBridgeDelegate, IDSUTunPeerDelegate, IMSystemMonitorListener, IDSPairingManagerDelegate, IDSRapportClientDelegate> {

	opaque_pthread_mutex_t _deviceIDToPeerLock;
	NSMutableDictionary* _deviceIDToPeer;
	NSMutableDictionary* _btuuidToSessionID;
	opaque_pthread_mutex_t _streamIDToTopicLock;
	NSMutableDictionary* _streamIDToTopic;
	unsigned _messageID;
	double _lastConnectedTime;
	double _lastIsNearbyBecameTrue;
	id<IDSUTunDeliveryControllerDelegate> _delegate;
	BOOL _isLinkForDefaultPeerConnected;
	NSHashTable* _connectivityDelegates;
	opaque_pthread_mutex_t _trafficClassLock;
	NSSet* _allowedTrafficClasses;
	BOOL _enableOTR;
	IMTimer* _otrTimer;
	BOOL _otrInitialized;
	BOOL _localAccountSetupCompleted;
	BOOL _defaultPeerConnectedDeferred;
	opaque_pthread_mutex_t _continuityPeerLock;
	NSMutableDictionary* _lockedPeerMap;
	NSMutableDictionary* _peerListMap;
	NSMutableDictionary* _pendingPeerMap;
	NSMutableDictionary* _peerConnectBlocksMap;
	NSMutableDictionary* _peerFailureBlocksMap;
	double _lastCloudConnectedTime;
	NSObject*<OS_dispatch_queue> _broadcastQueue;
	BOOL _isConnected;
	BOOL _isCloudConnected;
	BOOL _shouldUseIPsecLinkForDefaultPairedDevice;
	IDSNRDeviceBridge* _idsNRDeviceBridge;
	IDSNRDevicePreferencesHandler* _nrDevicePreferencesHandler;
	IDSConnectivityMonitor* _connectivityMonitor;
	double _notificationDelayInSeconds;

}

@property (assign,nonatomic) BOOL shouldUseIPsecLinkForDefaultPairedDevice;                           //@synthesize shouldUseIPsecLinkForDefaultPairedDevice=_shouldUseIPsecLinkForDefaultPairedDevice - In the implementation block
@property (nonatomic,retain) IDSNRDeviceBridge * idsNRDeviceBridge;                                   //@synthesize idsNRDeviceBridge=_idsNRDeviceBridge - In the implementation block
@property (nonatomic,retain) IDSNRDevicePreferencesHandler * nrDevicePreferencesHandler;              //@synthesize nrDevicePreferencesHandler=_nrDevicePreferencesHandler - In the implementation block
@property (assign,nonatomic) BOOL isConnected;                                                        //@synthesize isConnected=_isConnected - In the implementation block
@property (assign,nonatomic) BOOL isCloudConnected;                                                   //@synthesize isCloudConnected=_isCloudConnected - In the implementation block
@property (nonatomic,retain) IDSConnectivityMonitor * connectivityMonitor;                            //@synthesize connectivityMonitor=_connectivityMonitor - In the implementation block
@property (assign,nonatomic) double notificationDelayInSeconds;                                       //@synthesize notificationDelayInSeconds=_notificationDelayInSeconds - In the implementation block
@property (assign,nonatomic,__weak) id<IDSUTunDeliveryControllerDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL isPresent; 
@property (readonly) NSDictionary * syncPriorityMessageStatistics; 
@property (readonly) NSDictionary * defaultPriorityMessageStatistics; 
@property (readonly) NSDictionary * urgentPriorityMessageStatistics; 
@property (readonly) NSDictionary * urgentCloudPriorityMessageStatistics; 
@property (readonly) NSDictionary * sendingMessageStatistics; 
@property (readonly) NSDictionary * queuedIncomingMessageDictionary; 
@property (nonatomic,retain) NSSet * allowedTrafficClasses;                                           //@synthesize allowedTrafficClasses=_allowedTrafficClasses - In the implementation block
@property (nonatomic,readonly) BOOL enableOTR;                                                        //@synthesize enableOTR=_enableOTR - In the implementation block
@property (nonatomic,readonly) BOOL defaultPeerIsConnected; 
@property (nonatomic,readonly) BOOL defaultPeerIsNearby; 
@property (nonatomic,readonly) BOOL defaultPeerIsCloudConnected; 
@property (nonatomic,readonly) BOOL isTerminusConnected; 
@property (nonatomic,readonly) BOOL isTerminusNearby; 
@property (nonatomic,readonly) BOOL isTerminusRegistered; 
@property (assign,nonatomic) double lastCloudConnectedTime;                                           //@synthesize lastCloudConnectedTime=_lastCloudConnectedTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id<IDSUTunDeliveryControllerDelegate>)delegate;
-(void)setDelegate:(id<IDSUTunDeliveryControllerDelegate>)arg1 ;
-(BOOL)isConnected;
-(BOOL)isPresent;
-(void)setIsConnected:(BOOL)arg1 ;
-(void)setTopics:(id)arg1 ;
-(void)systemScreenDidPowerDown;
-(void)localSetupCompleted;
-(void)setAllowedTrafficClasses:(NSSet *)arg1 ;
-(BOOL)isCloudConnected;
-(id)pairingManager;
-(unsigned)_nextMessageID;
-(void)nrDeviceBridge:(id)arg1 defaultPeerConnectivityDidChange:(BOOL)arg2 ;
-(void)nrDeviceBridge:(id)arg1 defaultPeerNearbyDidChange:(BOOL)arg2 ;
-(void)nrDeviceBridge:(id)arg1 defaultPeerCloudConnectivityDidChange:(BOOL)arg2 ;
-(void)nrDeviceBridge:(id)arg1 deviceMagnetIndicationOfAwakeStateDidChange:(BOOL)arg2 ;
-(void)nrDeviceBridge:(id)arg1 linkType:(unsigned char)arg2 ;
-(void)nrDeviceBridge:(id)arg1 defaultPeerClassCConnectivityDidChange:(BOOL)arg2 ;
-(id)topicForStreamID:(unsigned short)arg1 ;
-(void)addConnectivityDelegate:(id)arg1 ;
-(void)removeConnectivityDelegate:(id)arg1 ;
-(NSDictionary *)sendingMessageStatistics;
-(NSDictionary *)syncPriorityMessageStatistics;
-(NSDictionary *)defaultPriorityMessageStatistics;
-(NSDictionary *)urgentPriorityMessageStatistics;
-(NSDictionary *)urgentCloudPriorityMessageStatistics;
-(void)cancelMessageID:(id)arg1 ;
-(void)kickProgressBlockForMessageID:(id)arg1 ;
-(void)peerConnectivityChanged:(id)arg1 ;
-(void)peer:(id)arg1 protobufReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(BOOL)arg7 expectsPeerResponse:(BOOL)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(BOOL)arg12 connectionType:(long long)arg13 ;
-(void)peer:(id)arg1 dataReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(BOOL)arg7 expectsPeerResponse:(BOOL)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(BOOL)arg12 connectionType:(long long)arg13 ;
-(void)peer:(id)arg1 messageReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(BOOL)arg7 expectsPeerResponse:(BOOL)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(BOOL)arg12 connectionType:(long long)arg13 ;
-(void)peer:(id)arg1 receivedAppLevelAckWithTopic:(id)arg2 fromID:(id)arg3 messageID:(id)arg4 peerResponseIdentifier:(id)arg5 priority:(long long)arg6 connectionType:(long long)arg7 ;
-(void)peerHasSpaceForUrgentMessages:(id)arg1 dataProtectionClass:(unsigned)arg2 withTypes:(id)arg3 ;
-(void)peerHasSpaceForNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3 withTypes:(id)arg4 ;
-(id)lockedContinuityPeerID:(id)arg1 ;
-(void)addContinuityPeer:(id)arg1 btUUID:(id)arg2 connectBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 ;
-(void)peerNearbyStateChanged:(id)arg1 forceNotify:(BOOL)arg2 ;
-(void)defaultPeerSetWantsQuickRelayRequest:(BOOL)arg1 ;
-(void)admissionPolicyChangedForTopic:(id)arg1 allowed:(BOOL)arg2 ;
-(BOOL)localSetupInProgress;
-(void)setIsCloudConnected:(BOOL)arg1 ;
-(BOOL)shouldUseIPsecLinkForDefaultPairedDevice;
-(void)removeUTunPeerWithSessionID:(id)arg1 reason:(long long)arg2 shouldWait:(BOOL)arg3 ;
-(void)unlockContinuityPeer:(id)arg1 ;
-(void)defaultPeerSetLinkPreferences:(id)arg1 ;
-(void)addUTunPeerWithDeviceUniqueID:(id)arg1 btuuid:(id)arg2 ;
-(void)prepareForQuickSwitch;
-(void)updatecloudDeliveryStateOnDefaultPeer;
-(void)removeUTunPeerWithDeviceUniqueID:(id)arg1 btuuid:(id)arg2 reason:(long long)arg3 shouldWait:(BOOL)arg4 ;
-(void)rapportClient:(id)arg1 didDiscoverDevice:(id)arg2 ;
-(void)rapportClient:(id)arg1 didLoseDevice:(id)arg2 ;
-(void)defaultPeerSetPreferInfraWiFi:(BOOL)arg1 services:(id)arg2 ;
-(NSDictionary *)queuedIncomingMessageDictionary;
-(void)didAddPairedDevice:(id)arg1 ;
-(void)didRemovePairedDevice:(id)arg1 ;
-(void)didUpdatePairedDevice:(id)arg1 ;
-(BOOL)isTerminusConnected;
-(BOOL)isTerminusNearby;
-(BOOL)isTerminusRegistered;
-(void)localAccountSetupCompleted;
-(void)deviceWithUniqueID:(id)arg1 updatedUUID:(id)arg2 ;
-(void)setDeviceUniqueIDToCBUUID:(id)arg1 ;
-(void)unlockAllContinuityPeers;
-(BOOL)isPeerForPhoneContinuityLocalMessage:(id)arg1 ;
-(id)sessionIDforPeer:(id)arg1 ;
-(void)startIdsNRDeviceBridgeAndPreferenceHandlerWithIdentifier:(id)arg1 ;
-(void)setPendingCloudFlagOnDefaultPeer;
-(void)enableOTRForDefaultPairedDevice;
-(id)_pairedDeviceUUID;
-(id)initWithBroadcastQueue:(id)arg1 ;
-(void)_removeDevicePreferencesHandler;
-(IDSNRDeviceBridge *)idsNRDeviceBridge;
-(void)setIdsNRDeviceBridge:(IDSNRDeviceBridge *)arg1 ;
-(void)setNrDevicePreferencesHandler:(IDSNRDevicePreferencesHandler *)arg1 ;
-(IDSNRDevicePreferencesHandler *)nrDevicePreferencesHandler;
-(id)_copyPeerWithID:(id)arg1 ;
-(id)_copyPairedDevice;
-(id)_createPeerFromDeviceInfo:(id)arg1 ;
-(id)hashForString:(id)arg1 ;
-(void)defaultPeerConnectivityChanged:(BOOL)arg1 ;
-(void)_disableOTRForDefaultPairedPeer:(id)arg1 ;
-(void)_refreshIPsecStatus;
-(id)_deviceIDForPeer:(id)arg1 ;
-(double)notificationDelayInSeconds;
-(double)lastCloudConnectedTime;
-(void)setLastCloudConnectedTime:(double)arg1 ;
-(void)enableConnectionForDefaultPairedDevice:(BOOL)arg1 ;
-(void)defaultPeerNearbyChanged:(BOOL)arg1 ;
-(void)_setCloudConnectionConnected:(BOOL)arg1 forPeer:(id)arg2 ;
-(void)defaultPeerCloudConnectivityChanged:(BOOL)arg1 ;
-(id)_createPeerFromDeviceID:(id)arg1 ;
-(void)peerCloudConnectivityChanged:(id)arg1 ;
-(void)defaultPeerMagnetIndicationOfAwakeStateChanged:(BOOL)arg1 ;
-(void)defaultPeerClassCConnectivityDidChange:(BOOL)arg1 ;
-(void)_enableOTRForDefaultPairedDevice;
-(void)_setOTREnableTimer;
-(void)_cleanupContinuityPeerMaps:(id)arg1 ;
-(id)_currentOTRTimer;
-(void)peerHasSpaceForNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned)arg3 ;
-(id)copyPeerWithID:(id)arg1 ;
-(void)localSetupStarted;
-(void)_removePeerFromDeviceID:(id)arg1 ;
-(void)sendData:(id)arg1 service:(id)arg2 protobuf:(id)arg3 resourcePath:(id)arg4 resourceMetadata:(id)arg5 priority:(long long)arg6 dataProtectionClass:(unsigned)arg7 nonWaking:(BOOL)arg8 nonCloudWaking:(BOOL)arg9 requireBluetooth:(BOOL)arg10 requireLocalWiFi:(BOOL)arg11 queueOneIdentifier:(id)arg12 expirationDate:(id)arg13 enforceRemoteTimeouts:(BOOL)arg14 expectsPeerResponse:(BOOL)arg15 wantsAppAck:(BOOL)arg16 compressPayload:(BOOL)arg17 compressed:(BOOL)arg18 peerResponseIdentifier:(id)arg19 messageID:(id)arg20 topic:(id)arg21 awdTopic:(id)arg22 command:(id)arg23 fromID:(id)arg24 uriToDeviceID:(id)arg25 localDeviceDestinationDeviceUUID:(id)arg26 bypassDuet:(BOOL)arg27 duetIdentifiersOverride:(id)arg28 messageType:(long long)arg29 fallbackBlock:(/*^block*/id)arg30 progressBlock:(/*^block*/id)arg31 completionBlock:(/*^block*/id)arg32 ;
-(BOOL)defaultPeerIsConnected;
-(BOOL)defaultPeerIsNearby;
-(BOOL)defaultPeerIsCloudConnected;
-(void)enableCloudConnectionForDefaultPairedDevice:(BOOL)arg1 ;
-(BOOL)hasSpaceForMessagesWithPriority:(long long)arg1 dataProtectionClass:(unsigned)arg2 ;
-(BOOL)hasSpaceForCloudMessagesWithPriority:(long long)arg1 dataProtectionClass:(unsigned)arg2 ;
-(NSSet *)allowedTrafficClasses;
-(void)legacyUTunBTLinkManagerDefaultPeerConnectivityChanged:(BOOL)arg1 ;
-(void)legacyUTunBTLinkManagerDefaultPeerNearbyChanged:(BOOL)arg1 ;
-(void)legacyUTunBTLinkManagerDefaultPeerCloudConnectivityChanged:(BOOL)arg1 ;
-(void)defaultPeerUnpairStart;
-(void)defaultPeerDropDisallowedMessages;
-(void)peerCloudConnectivityChanged:(id)arg1 isCloudConnected:(BOOL)arg2 ;
-(void)findDefaultPeerToForceOTRNegotiation:(id)arg1 priority:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)lockContinuityPeer:(id)arg1 btUUID:(id)arg2 ;
-(id)pendingContinuityPeerID:(id)arg1 ;
-(void)tryNextContinuityPeer:(id)arg1 ;
-(BOOL)enableOTR;
-(void)setShouldUseIPsecLinkForDefaultPairedDevice:(BOOL)arg1 ;
-(IDSConnectivityMonitor *)connectivityMonitor;
-(void)setConnectivityMonitor:(IDSConnectivityMonitor *)arg1 ;
-(void)setNotificationDelayInSeconds:(double)arg1 ;
@end
