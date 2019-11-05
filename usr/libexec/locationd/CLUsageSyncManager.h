/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:45 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <LocationSupport/CLIntersiloService.h>
#import <locationd/CLUsageSyncManagerProtocol.h>
#import <locationd/IDSServiceDelegate.h>

@class IDSService, NSUUID, CLTimer, NSMutableArray, NSMutableDictionary, NSString;

@interface CLUsageSyncManager : CLIntersiloService <CLUsageSyncManagerProtocol, IDSServiceDelegate> {

	unique_ptr<CLClientManager_Type::Client, std::__1::default_delete<CLClientManager_Type::Client> >* _clientManagerClient;
	BOOL _dirtyUsageSyncState;
	BOOL _needFullResync;
	BOOL _retryTimerSet;
	int _activeDeviceNearbyStatus;
	IDSService* _service;
	NSUUID* _pairedDeviceID;
	id _pairedDeviceRegistry;
	CLTimer* _retryTimer;
	NSMutableArray* _errorQueue;
	NSMutableDictionary* _messagesWaitingForAck;

}

@property (nonatomic,readonly) id<CLClientManagerPublicProtocol> manager; 
@property (nonatomic,retain) IDSService * service;                                     //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) BOOL dirtyUsageSyncState;                                 //@synthesize dirtyUsageSyncState=_dirtyUsageSyncState - In the implementation block
@property (assign,nonatomic) BOOL needFullResync;                                      //@synthesize needFullResync=_needFullResync - In the implementation block
@property (nonatomic,retain) NSUUID * pairedDeviceID;                                  //@synthesize pairedDeviceID=_pairedDeviceID - In the implementation block
@property (nonatomic,retain) id pairedDeviceRegistry;                                  //@synthesize pairedDeviceRegistry=_pairedDeviceRegistry - In the implementation block
@property (assign,nonatomic) BOOL retryTimerSet;                                       //@synthesize retryTimerSet=_retryTimerSet - In the implementation block
@property (nonatomic,retain) CLTimer * retryTimer;                                     //@synthesize retryTimer=_retryTimer - In the implementation block
@property (nonatomic,retain) NSMutableArray * errorQueue;                              //@synthesize errorQueue=_errorQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * messagesWaitingForAck;              //@synthesize messagesWaitingForAck=_messagesWaitingForAck - In the implementation block
@property (assign,nonatomic) int activeDeviceNearbyStatus;                             //@synthesize activeDeviceNearbyStatus=_activeDeviceNearbyStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(BOOL)isSupported;
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(void)sendMessage:(id)arg1 ;
-(id<CLClientManagerPublicProtocol>)manager;
-(IDSService *)service;
-(void)setService:(IDSService *)arg1 ;
-(void)beginService;
-(void)endService;
-(NSUUID *)pairedDeviceID;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(BOOL)isPaired;
-(CLTimer *)retryTimer;
-(void)setRetryTimer:(CLTimer *)arg1 ;
-(void)requestFullResync;
-(void)setPairedDeviceID:(NSUUID *)arg1 ;
-(void)promptForClient:(id)arg1 authorizationStatus:(int)arg2 forcePrompt:(BOOL)arg3 ;
-(void)client:(id)arg1 didChangeUsageData:(id)arg2 ;
-(void)onClientManagerNotification:(int)arg1 data:(const NotificationData*)arg2 ;
-(void)setErrorQueue:(NSMutableArray *)arg1 ;
-(void)setMessagesWaitingForAck:(NSMutableDictionary *)arg1 ;
-(void)setPairedDeviceRegistry:(id)arg1 ;
-(void)handleUnpairNotification_bounce:(id)arg1 ;
-(void)handlePairNotification_bounce:(id)arg1 ;
-(void)handleActiveNotification_bounce:(id)arg1 ;
-(void)handleInactiveNotification_bounce:(id)arg1 ;
-(void)handleUnpair;
-(void)handlePair;
-(id)currentlyActiveDevice;
-(void)sendAllUsageSyncData;
-(void)drainErrorQueue;
-(void)handleMessageError:(id)arg1 ;
-(void)addMessageToErrorQueue:(id)arg1 ;
-(BOOL)_sendMessage:(id)arg1 identifier:(id*)arg2 error:(id*)arg3 ;
-(void)messageFailedToSend:(id)arg1 withError:(id)arg2 recoverable:(BOOL)arg3 ;
-(NSMutableDictionary *)messagesWaitingForAck;
-(void)sendMessageWithMessageType:(id)arg1 dataPayload:(id)arg2 priority:(long long)arg3 idsOptions:(id)arg4 ;
-(id)mungedUsageDataForPotentiallyOldUsageData:(id)arg1 ;
-(void)handleMessageSendError:(id)arg1 identifier:(id)arg2 ;
-(void)handleMessageSendSuccessForIdentifier:(id)arg1 ;
-(void)handleMessageUsageUpdateWithMessageData:(id)arg1 ;
-(void)handleMessagePromptWithMessageData:(id)arg1 ;
-(void)handleMessageResyncRequestWithMessageData:(id)arg1 ;
-(void)handleMessageResyncResponseWithMessageData:(id)arg1 ;
-(int)activeDeviceNearbyStatus;
-(void)setActiveDeviceNearbyStatus:(int)arg1 ;
-(BOOL)dirtyUsageSyncState;
-(void)setDirtyUsageSyncState:(BOOL)arg1 ;
-(BOOL)needFullResync;
-(void)setNeedFullResync:(BOOL)arg1 ;
-(id)pairedDeviceRegistry;
-(BOOL)retryTimerSet;
-(void)setRetryTimerSet:(BOOL)arg1 ;
-(NSMutableArray *)errorQueue;
@end
