/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:37 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <gamed/IDSSessionDelegatePrivate.h>
#import <gamed/GKNWConnectionWrapperDelegate.h>

@protocol OS_dispatch_source;
@class GKClientProxy, IDSAccount, NSString, GKCloudGameSession, NSObject, NSMutableDictionary;

@interface GKIDSConnection : NSObject <IDSSessionDelegatePrivate, GKNWConnectionWrapperDelegate> {

	GKClientProxy* _clientForSession;
	IDSAccount* _localIDSAccount;
	NSString* _primaryPlayerCKID;
	GKCloudGameSession* _cloudSession;
	long long _connectionState;
	long long _reasonForDisconnect;
	/*^block*/id _connectionCompleteHandler;
	/*^block*/id _disconnectCompleteHandler;
	NSObject*<OS_dispatch_source> _connectTimeoutTimer;
	NSObject*<OS_dispatch_source> _backgroundTimer;
	NSObject*<OS_dispatch_source> _heartbeatTimer;
	NSMutableDictionary* _heartbeatTimeForCloudIDs;
	NSMutableDictionary* _pendingSessions;
	NSMutableDictionary* _reliableSessions;
	NSMutableDictionary* _unreliableSessions;
	NSMutableDictionary* _streamConnections;
	NSMutableDictionary* _datagramConnections;

}

@property (assign,nonatomic,__weak) GKClientProxy * clientForSession;                        //@synthesize clientForSession=_clientForSession - In the implementation block
@property (nonatomic,retain) IDSAccount * localIDSAccount;                                   //@synthesize localIDSAccount=_localIDSAccount - In the implementation block
@property (nonatomic,copy) NSString * primaryPlayerCKID;                                     //@synthesize primaryPlayerCKID=_primaryPlayerCKID - In the implementation block
@property (nonatomic,retain) GKCloudGameSession * cloudSession;                              //@synthesize cloudSession=_cloudSession - In the implementation block
@property (assign,nonatomic) long long connectionState;                                      //@synthesize connectionState=_connectionState - In the implementation block
@property (assign,nonatomic) long long reasonForDisconnect;                                  //@synthesize reasonForDisconnect=_reasonForDisconnect - In the implementation block
@property (nonatomic,copy) id connectionCompleteHandler;                                     //@synthesize connectionCompleteHandler=_connectionCompleteHandler - In the implementation block
@property (nonatomic,copy) id disconnectCompleteHandler;                                     //@synthesize disconnectCompleteHandler=_disconnectCompleteHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> connectTimeoutTimer;              //@synthesize connectTimeoutTimer=_connectTimeoutTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> backgroundTimer;                  //@synthesize backgroundTimer=_backgroundTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> heartbeatTimer;                   //@synthesize heartbeatTimer=_heartbeatTimer - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * heartbeatTimeForCloudIDs;                 //@synthesize heartbeatTimeForCloudIDs=_heartbeatTimeForCloudIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingSessions;                          //@synthesize pendingSessions=_pendingSessions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * reliableSessions;                         //@synthesize reliableSessions=_reliableSessions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * unreliableSessions;                       //@synthesize unreliableSessions=_unreliableSessions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * streamConnections;                        //@synthesize streamConnections=_streamConnections - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * datagramConnections;                      //@synthesize datagramConnections=_datagramConnections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)sessionStarted:(id)arg1 ;
-(void)sessionEnded:(id)arg1 withReason:(unsigned)arg2 error:(id)arg3 ;
-(void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2 withData:(id)arg3 ;
-(void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2 withData:(id)arg3 ;
-(void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2 withData:(id)arg3 ;
-(long long)connectionState;
-(void)setConnectionState:(long long)arg1 ;
-(NSObject*<OS_dispatch_source>)heartbeatTimer;
-(void)setHeartbeatTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)isBusyChangingConnectionState;
-(id)initWithClient:(id)arg1 gameSession:(id)arg2 account:(id)arg3 ;
-(void)connectToGameSessionUsingDelegateQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)shouldAllowAddingAnotherConnection;
-(void)acceptReliableInviteForIDSSession:(id)arg1 fromID:(id)arg2 context:(id)arg3 ;
-(void)acceptUnreliableInviteForIDSSession:(id)arg1 fromID:(id)arg2 withData:(id)arg3 ;
-(void)updateCloudGameSession:(id)arg1 ;
-(void)handleDisconnectForClient:(id)arg1 reason:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)sendData:(id)arg1 reliably:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(void)clientEnteredBackgroundState:(id)arg1 ;
-(void)clientEnteredForegroundState:(id)arg1 ;
-(void)setClientForSession:(GKClientProxy *)arg1 ;
-(void)setCloudSession:(GKCloudGameSession *)arg1 ;
-(void)setLocalIDSAccount:(IDSAccount *)arg1 ;
-(void)setPendingSessions:(NSMutableDictionary *)arg1 ;
-(void)setReliableSessions:(NSMutableDictionary *)arg1 ;
-(void)setUnreliableSessions:(NSMutableDictionary *)arg1 ;
-(void)setStreamConnections:(NSMutableDictionary *)arg1 ;
-(void)setDatagramConnections:(NSMutableDictionary *)arg1 ;
-(void)setHeartbeatTimeForCloudIDs:(NSMutableDictionary *)arg1 ;
-(id)connectionCompleteHandler;
-(id)disconnectCompleteHandler;
-(NSString *)primaryPlayerCKID;
-(void)setPrimaryPlayerCKID:(NSString *)arg1 ;
-(void)setConnectionCompleteHandler:(id)arg1 ;
-(void)connectToPlayersWithIdentifiers:(id)arg1 ;
-(void)setConnectTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)invitationAcceptedForIDSSession:(id)arg1 fromID:(id)arg2 withData:(id)arg3 ;
-(void)sendUnreliableIDSSessionInviteToIdentifier:(id)arg1 ;
-(void)setupStreamForIDSSession:(id)arg1 fromID:(id)arg2 ;
-(void)startHeartbeatToMonitorConnections;
-(void)handleIDSSessionStatusChange;
-(void)setupDatagramForIDSSession:(id)arg1 fromID:(id)arg2 ;
-(id)clientPacketWithData:(id)arg1 isReliable:(BOOL)arg2 error:(id*)arg3 ;
-(void)_sendData:(id)arg1 usingConnections:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)processInternalMessage:(id)arg1 ;
-(void)receivedHeartbeatFromID:(id)arg1 ;
-(void)sendHeartbeatToConnections;
-(BOOL)shouldSaveConnectionStateForLostConnectionWithCKID:(id)arg1 ;
-(id)internalPacketWithMessage:(long long)arg1 error:(id*)arg2 ;
-(void)setDisconnectCompleteHandler:(id)arg1 ;
-(void)cancelConnectTimeoutTimer;
-(void)cancelBackgroundTimer;
-(void)handleIDSSessionStatusChangeWhileDisconnecting;
-(void)cancelHeartbeatTimer;
-(void)setBackgroundTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)connectionWrapper:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionWrapper:(id)arg1 didFailWithError:(id)arg2 ;
-(GKClientProxy *)clientForSession;
-(IDSAccount *)localIDSAccount;
-(GKCloudGameSession *)cloudSession;
-(long long)reasonForDisconnect;
-(void)setReasonForDisconnect:(long long)arg1 ;
-(NSObject*<OS_dispatch_source>)connectTimeoutTimer;
-(NSObject*<OS_dispatch_source>)backgroundTimer;
-(NSMutableDictionary *)heartbeatTimeForCloudIDs;
-(NSMutableDictionary *)pendingSessions;
-(NSMutableDictionary *)reliableSessions;
-(NSMutableDictionary *)unreliableSessions;
-(NSMutableDictionary *)streamConnections;
-(NSMutableDictionary *)datagramConnections;
@end

