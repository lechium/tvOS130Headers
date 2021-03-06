/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:48 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/rapportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <rapportd/rapportd-Structs.h>
#import <rapportd/NSXPCListenerDelegate.h>
#import <rapportd/RPMessageable.h>
#import <rapportd/RPSubDaemonable.h>

@protocol OS_os_transaction, OS_dispatch_source, OS_dispatch_queue;
@class SFDeviceDiscovery, SFService, CUBLEServer, CUBonjourAdvertiser, CUBonjourBrowser, NSData, NSString, CUSystemMonitor, CUBluetoothScalablePipe, RPConnection, SFClient, CUHomeKitManager, CUNetLinkManager, NSObject, NSMutableSet, CUSleepWakeMonitor, NSUserDefaults, CUTCPServer, CUWiFiManager, NSXPCInterface, NSXPCListener, RPHIDDaemon, RPMediaControlDaemon, RPSiriDaemon, RPTextInputDaemon, RPCompanionLinkDevice, NSMutableDictionary;

@interface RPCompanionLinkDaemon : NSObject <NSXPCListenerDelegate, RPMessageable, RPSubDaemonable> {

	NSMutableDictionary* _activeDevices;
	int _airplayBuddyNotReachableState;
	int _airplayLeaderState;
	NSMutableDictionary* _bleDevices;
	SFDeviceDiscovery* _bleDiscovery;
	unsigned long long _bleDiscoveryControlFlags;
	BOOL _bleDiscoveryForce;
	unsigned _bleDiscoveryID;
	BOOL _bleDiscoveryScreenOff;
	SFService* _bleNeedsCLinkAdvertiser;
	NSMutableDictionary* _bleNeedsCLinkDevices;
	SFDeviceDiscovery* _bleNeedsCLinkScanner;
	unsigned _bleNeedsCLinkScannerID;
	NSMutableDictionary* _bleClientConnections;
	CUBLEServer* _bleServer;
	NSMutableSet* _bleServerConnections;
	CUBonjourAdvertiser* _bonjourAdvertiser;
	CUBonjourAdvertiser* _bonjourAWDLAdvertiser;
	BOOL _bonjourAWDLAdvertiserForce;
	NSMutableDictionary* _bonjourAWDLDevices;
	CUBonjourBrowser* _bonjourBrowser;
	CUBonjourBrowser* _bonjourBrowserAWDL;
	BOOL _bonjourBrowserAWDLForce;
	NSData* _btAdvAddrData;
	NSString* _btAdvAddrStr;
	CUSystemMonitor* _btAdvAddrMonitor;
	BOOL _prefBTPipeEnabled;
	CUBluetoothScalablePipe* _btPipe;
	RPConnection* _btPipeConnection;
	unsigned _cnxIDLast;
	NSString* _deviceAuthTagStr;
	NSData* _discoveryNonceData;
	SFClient* _duetSyncClient;
	BOOL _disabled;
	NSMutableDictionary* _interestEvents;
	NSMutableDictionary* _interestPeers;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	BOOL _fixedSoundBoardNameIssue;
	NSData* _homeKitAuthTag;
	BOOL _homeKitForceGetIdentity;
	BOOL _homeKitGettingIdentity;
	NSData* _homeKitIRK;
	NSData* _homeKitLTPK;
	CUHomeKitManager* _homeKitManager;
	NSData* _homeKitRotatingID;
	BOOL _homeKitWaiting;
	CUNetLinkManager* _netLinkManager;
	BOOL _mediaRemoteIDGetting;
	BOOL _mediaRouteIDGetting;
	BOOL _miscStarted;
	NSObject*<OS_os_transaction> _osTransaction;
	RPConnection* _personalCnx;
	NSMutableDictionary* _registeredEvents;
	NSMutableSet* _registeredProfileIDs;
	NSMutableDictionary* _registeredRequests;
	unsigned _sessionIDLast;
	CUSleepWakeMonitor* _sleepWakeMonitor;
	NSUserDefaults* _soundBoardPrefs;
	BOOL _soundBoardUserLeader;
	BOOL _soundBoardUserLeaderKVO;
	unsigned long long _startTicks;
	unsigned long long _startTicksFull;
	RPConnection* _stereoCnx;
	CUSystemMonitor* _systemMonitor;
	NSMutableDictionary* _tcpClientConnections;
	NSMutableSet* _tcpServerConnections;
	CUTCPServer* _tcpServer;
	NSObject*<OS_dispatch_source> _tcpServerDisconnectTimer;
	NSMutableDictionary* _unauthDevices;
	NSData* _uniqueIDData;
	NSString* _uniqueIDStr;
	CUWiFiManager* _wifiManager;
	unsigned _xidLast;
	NSMutableSet* _xpcConnections;
	NSXPCInterface* _xpcClientInterface;
	NSXPCInterface* _xpcServerInterface;
	NSXPCListener* _xpcListener;
	unsigned _xpcLastID;
	NSMutableDictionary* _xpcMatchingMap;
	BOOL _prefAppSignIn;
	BOOL _prefBLEClient;
	BOOL _prefClientEnabled;
	BOOL _prefCommunal;
	BOOL _prefHomeKitConfigured;
	BOOL _prefHomeKitEnabled;
	BOOL _prefIPEnabled;
	unsigned _prefMaxConnectionCount;
	BOOL _prefServerBonjourAlways;
	BOOL _prefServerBonjourOpportunitistic;
	BOOL _prefServerEnabled;
	BOOL _prefServerShouldRun;
	RPHIDDaemon* _hidDaemon;
	BOOL _prefHIDEnabled;
	RPMediaControlDaemon* _mediaControlDaemon;
	BOOL _prefMediaControlEnabled;
	RPSiriDaemon* _siriDaemon;
	BOOL _prefSiriEnabled;
	RPTextInputDaemon* _textInputDaemon;
	BOOL _prefTextInputEnabled;
	BOOL _prefTouchEnabled;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	RPCompanionLinkDevice* _localDeviceInfo;
	NSMutableSet* _activeServers;
	NSMutableDictionary* _activeSessions;

}

@property (nonatomic,retain) NSMutableSet * activeServers;                              //@synthesize activeServers=_activeServers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activeSessions;                      //@synthesize activeSessions=_activeSessions - In the implementation block
@property (nonatomic,readonly) RPCompanionLinkDevice * localDeviceInfo;                 //@synthesize localDeviceInfo=_localDeviceInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue; 
+(id)sharedCompanionLinkDaemon;
-(id)init;
-(void)_activate;
-(void)invalidate;
-(void)_invalidate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_update;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_invalidated;
-(void)activate;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)registerRequestID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(/*^block*/id)arg5 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(void)_xpcConnectionInvalidated:(id)arg1 ;
-(NSMutableDictionary *)activeSessions;
-(void)deregisterRequestID:(id)arg1 ;
-(void)sendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)registerEventID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)deregisterEventID:(id)arg1 ;
-(void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(RPCompanionLinkDevice *)localDeviceInfo;
-(void)setActiveSessions:(NSMutableDictionary *)arg1 ;
-(void)prefsChanged;
-(void)_btPipeEnsureStarted;
-(void)_btPipeEnsureStopped;
-(void)_clientEnsureStopped;
-(void)_serverEnsureStopped;
-(void)_serverEnsureStarted;
-(void)_clientEnsureStarted;
-(NSMutableSet *)activeServers;
-(void)daemonInfoChanged:(unsigned long long)arg1 ;
-(BOOL)diagnosticCommand:(id)arg1 params:(id)arg2 ;
-(BOOL)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)removeXPCMatchingToken:(unsigned long long)arg1 ;
-(void)_bleServerEnsureStopped;
-(void)_duetSyncEnsureStopped;
-(void)_homeKitEnsureStopped;
-(void)_hidEnsureStopped;
-(void)_mediaControlEnsureStopped;
-(void)_miscEnsureStopped;
-(void)_siriEnsureStopped;
-(void)_textInputEnsureStopped;
-(void)_reachabilityEnsureStopped;
-(void)_localDeviceCleanup;
-(void)_clientBonjourReevaluateUnauthDevices;
-(void)_disconnectUnpairedDevices;
-(void)_disconnectRemovedSharedHomeDevices;
-(id)_discoveryNonceOrRotate:(BOOL)arg1 ;
-(void)_homeKitUpdateInfo:(BOOL)arg1 ;
-(void)_reportXPCMatchingDiscoveryCLink;
-(void)_updateForXPCClientChange;
-(void)_updateAssertions;
-(void)_localDeviceUpdate;
-(void)_homeKitEnsureStarted;
-(void)_reachabilityEnsureStarted;
-(void)_bleServerEnsureStarted;
-(void)_hidEnsureStarted;
-(void)_mediaControlEnsureStarted;
-(void)_miscEnsureStarted;
-(void)_siriEnsureStarted;
-(void)_textInputEnsureStarted;
-(void)_clientBLEDiscoveryEnsureStarted;
-(void)_clientBLEDiscoveryEnsureStopped;
-(void)_clientBonjourEnsureStarted;
-(void)_clientBonjourEnsureStopped;
-(BOOL)_clientBLENeedsCLinkAdvertiserShouldRun;
-(void)_clientBLENeedsCLinkAdvertiserEnsureStarted;
-(void)_clientBLENeedsCLinkAdvertiserEnsureStopped;
-(BOOL)_clientBonjourAWDLBrowserShouldRun;
-(void)_clientBonjourAWDLBrowserEnsureStarted;
-(void)_clientBonjourAWDLBrowserEnsureStopped;
-(void)_clientBLEDiscoveryDeviceFound:(id)arg1 ;
-(void)_clientBLEDiscoveryDeviceLost:(id)arg1 ;
-(void)_clientReportChangedDevice:(id)arg1 changes:(unsigned)arg2 ;
-(void)_clientReportFoundDevice:(id)arg1 ;
-(void)_clientReportLostDevice:(id)arg1 ;
-(BOOL)_clientBonjourFoundDevice:(id)arg1 reevaluate:(BOOL)arg2 ;
-(void)_clientBonjourLostDevice:(id)arg1 ;
-(BOOL)_homeKitAuthMatchForBonjourDevice:(id)arg1 ;
-(void)_clientBonjourFoundUnauthDevice:(id)arg1 ;
-(id)_homeKitDecryptRotatingIDForBonjourDevice:(id)arg1 ;
-(id)_findConnectionByID:(id)arg1 ;
-(void)_activeDeviceChangedForConnection:(id)arg1 bonjourDevice:(id)arg2 ;
-(void)_clientConnectionStart:(id)arg1 controlFlags:(unsigned long long)arg2 uniqueID:(id)arg3 identity:(id)arg4 ;
-(void)_clientBonjourLostUnauthDevice:(id)arg1 ;
-(void)_clientBonjourAWDLBrowserFoundDevice:(id)arg1 ;
-(void)_clientBonjourAWDLBrowserLostDevice:(id)arg1 ;
-(BOOL)_clientConnectionStartOnDemand:(id)arg1 xpcCnx:(id)arg2 error:(id*)arg3 ;
-(void)_clientConnectionEnded:(id)arg1 uniqueID:(id)arg2 ;
-(void)_clientBonjourReevaluateAllDevices;
-(void)_stereoDeviceUpdate:(int)arg1 ;
-(void)_activeDeviceChanged:(id)arg1 changes:(unsigned)arg2 ;
-(void)_receivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 unauth:(BOOL)arg4 cnx:(id)arg5 ;
-(void)_receivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(/*^block*/id)arg4 unauth:(BOOL)arg5 cnx:(id)arg6 ;
-(void)_connectionStateChanged:(int)arg1 cnx:(id)arg2 ;
-(void)_clientOnDemandDiscoveryStart:(id)arg1 xpcCnx:(id)arg2 ;
-(void)_clientConnectionEndedUnauth:(id)arg1 publicID:(id)arg2 ;
-(BOOL)_serverBonjourShouldRun;
-(void)_serverTCPEnsureStarted;
-(void)_serverTCPEnsureStopped;
-(void)_serverBTAddressMonitorEnsureStarted;
-(void)_serverBLENeedsCLinkScannerEnsureStarted;
-(void)_serverBonjourEnsureStarted;
-(void)_serverBonjourEnsureStopped;
-(void)_serverBonjourAWDLAdvertiserEnsureStarted;
-(void)_serverBonjourAWDLAdvertiserEnsureStopped;
-(void)_serverTCPRemovePersistentConnectionsIfNeeded:(BOOL)arg1 ;
-(void)_serverBLENeedsCLinkScannerEnsureStopped;
-(void)_serverBTAddressMonitorEnsureStopped;
-(BOOL)_serverBLENeedsCLinkScannerScreenOff;
-(void)_serverBLENeedsCLinkScannerDeviceFound:(id)arg1 ;
-(void)_serverBLENeedsCLinkScannerDeviceLost:(id)arg1 ;
-(void)_serverBonjourUpdateTXT;
-(id)_serverBonjourAuthTagString;
-(void)_serverBonjourAWDLAdvertiserUpdateTXT;
-(void)_serverBTAddressChanged;
-(void)_serverTCPHandleConnectionStarted:(id)arg1 ;
-(void)_serverTCPHandleConnectionEnded:(id)arg1 ;
-(void)_bleServerHandleConnectionStarted:(id)arg1 ;
-(void)_bleServerHandleConnectionEnded:(id)arg1 ;
-(void)_btPipeHandleStateChanged;
-(void)_btPipeConnectionStart;
-(void)_btPipeConnectionEnded:(id)arg1 ;
-(void)_btPipeSyncKeysIfNeeded;
-(void)_sessionHandlePeerDisconnect:(id)arg1 ;
-(void)_personalDeviceUpdate;
-(void)_interestRemoveForCnx:(id)arg1 ;
-(void)_serverTCPRemoveConnectionsWithIdentifier:(id)arg1 exceptConnection:(id)arg2 ;
-(void)_activeDeviceAdded:(id)arg1 cnx:(id)arg2 ;
-(void)_activeDeviceRemoved:(id)arg1 cnx:(id)arg2 ;
-(void)_forEachConnectionWithHandler:(/*^block*/id)arg1 ;
-(BOOL)_destinationID:(id)arg1 matchesCnx:(id)arg2 ;
-(void)_mediaRemoteIDGet;
-(void)_mediaRouteIDGet;
-(void)_duetSyncEnsureStarted;
-(void)_interestSendEventID:(id)arg1 event:(id)arg2 ;
-(void)_miscHandleLaunchAppRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_miscHandleSpeakRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_sessionHandleStartRequest:(id)arg1 options:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(void)_sessionHandleStopRequest:(id)arg1 options:(id)arg2 cnx:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(void)_registerConnectionRequestID:(id)arg1 options:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_homeKitSelfAccessoryMediaSystemUpdated:(int)arg1 ;
-(int)_airPlayLeaderStateUncached;
-(void)_homeKitSelfAccessoryMediaAccessUpdated;
-(void)_homeKitSelfAccessoryUpdated;
-(void)_homeKitIdentityUpdated:(id)arg1 error:(id)arg2 ;
-(void)_disconnectUnauthConnections;
-(void)_forEachMatchingDestinationID:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_interestReceived:(id)arg1 cnx:(id)arg2 ;
-(BOOL)_allowMessageForRegistrationOptions:(id)arg1 cnx:(id)arg2 ;
-(void)sendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 xpcID:(unsigned)arg4 options:(id)arg5 responseHandler:(/*^block*/id)arg6 ;
-(BOOL)_clientConnectionStartUnauth:(id)arg1 client:(id)arg2 publicID:(id)arg3 xpcCnx:(id)arg4 error:(id*)arg5 ;
-(id)findConnectedDeviceForIdentifier:(id)arg1 controlFlags:(unsigned long long)arg2 cnx:(id*)arg3 ;
-(id)_findDeviceWithDevice:(id)arg1 deviceMap:(NSMutableDictionary*)arg2 matchedIdentifier:(id*)arg3 ;
-(id)findUnauthDeviceForIdentifier:(id)arg1 ;
-(void)interestRegisterEventID:(id)arg1 peerIdentifier:(id)arg2 owner:(id)arg3 ;
-(void)interestDeregisterEventID:(id)arg1 peerIdentifier:(id)arg2 owner:(id)arg3 ;
-(void)sessionStartSend:(id)arg1 session:(id)arg2 xpcID:(unsigned)arg3 completion:(/*^block*/id)arg4 ;
-(void)sessionStopSend:(id)arg1 session:(id)arg2 xpcID:(unsigned)arg3 ;
-(void)setActiveServers:(NSMutableSet *)arg1 ;
@end

