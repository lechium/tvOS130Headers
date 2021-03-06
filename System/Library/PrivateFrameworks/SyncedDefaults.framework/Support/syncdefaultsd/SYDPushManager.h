/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <syncdefaultsd/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableSet, NSData, APSConnection, NSObject;

@interface SYDPushManager : NSObject <APSConnectionDelegate> {

	NSString* _user;
	long long _peerCount;
	NSString* _pushTopicState;
	NSMutableSet* _trackedApps;
	NSString* _environment;
	double _lastUpdateOnServer;
	NSData* _lastTokenOnServer;
	NSData* _lastSeenToken;
	double _refreshInterval;
	APSConnection* _apsConnection;
	NSString* _currentAPSConnectionEnvironment;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSString * environment;                                  //@synthesize environment=_environment - In the implementation block
@property (nonatomic,retain) NSString * user;                                         //@synthesize user=_user - In the implementation block
@property (assign,nonatomic) double lastUpdateOnServer;                               //@synthesize lastUpdateOnServer=_lastUpdateOnServer - In the implementation block
@property (nonatomic,retain) NSData * lastTokenOnServer;                              //@synthesize lastTokenOnServer=_lastTokenOnServer - In the implementation block
@property (nonatomic,retain) NSData * lastSeenToken;                                  //@synthesize lastSeenToken=_lastSeenToken - In the implementation block
@property (assign,nonatomic) double refreshInterval;                                  //@synthesize refreshInterval=_refreshInterval - In the implementation block
@property (nonatomic,retain) APSConnection * apsConnection;                           //@synthesize apsConnection=_apsConnection - In the implementation block
@property (nonatomic,retain) NSString * currentAPSConnectionEnvironment;              //@synthesize currentAPSConnectionEnvironment=_currentAPSConnectionEnvironment - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) long long peerCount;                                     //@synthesize peerCount=_peerCount - In the implementation block
@property (nonatomic,retain) NSString * pushTopicState;                               //@synthesize pushTopicState=_pushTopicState - In the implementation block
@property (nonatomic,retain) NSMutableSet * trackedApps;                              //@synthesize trackedApps=_trackedApps - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)user;
-(NSString *)environment;
-(void)setEnvironment:(NSString *)arg1 ;
-(void)setUser:(NSString *)arg1 ;
-(void)shutdown;
-(APSConnection *)apsConnection;
-(void)setApsConnection:(APSConnection *)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(id)publicToken;
-(BOOL)needsUpdate;
-(double)refreshInterval;
-(void)setRefreshInterval:(double)arg1 ;
-(void)resetUpdates;
-(long long)peerCount;
-(id)persistentState;
-(void)_setupAPSConnection;
-(void)_updatePushTopic;
-(void)_cleanupAPSConnection;
-(id)initWithPersistentState:(id)arg1 ;
-(void)setEnvironment:(id)arg1 forUser:(id)arg2 refreshInterval:(double)arg3 ;
-(double)nextUpdateInterval;
-(void)didUpdateTokenOnServer:(id)arg1 ;
-(void)peerConnected:(id)arg1 ;
-(void)peerDisconnected:(id)arg1 ;
-(void)setPeerCount:(long long)arg1 ;
-(NSString *)pushTopicState;
-(void)setPushTopicState:(NSString *)arg1 ;
-(NSMutableSet *)trackedApps;
-(void)setTrackedApps:(NSMutableSet *)arg1 ;
-(double)lastUpdateOnServer;
-(void)setLastUpdateOnServer:(double)arg1 ;
-(NSData *)lastTokenOnServer;
-(void)setLastTokenOnServer:(NSData *)arg1 ;
-(NSData *)lastSeenToken;
-(void)setLastSeenToken:(NSData *)arg1 ;
-(NSString *)currentAPSConnectionEnvironment;
-(void)setCurrentAPSConnectionEnvironment:(NSString *)arg1 ;
@end

