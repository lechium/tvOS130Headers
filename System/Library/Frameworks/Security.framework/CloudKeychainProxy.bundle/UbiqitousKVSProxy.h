/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Security.framework/CloudKeychainProxy.bundle/CloudKeychainProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKeychainProxy/XPCNotificationListener.h>
#import <CloudKeychainProxy/CKDLockListener.h>

@protocol CKDStore, CKDAccount, CKDLockMonitor, OS_dispatch_queue;
@class NSObject, NSURL, NSMutableSet, NSString, NSMutableArray, NSDictionary;

@interface UbiqitousKVSProxy : NSObject <XPCNotificationListener, CKDLockListener> {

	id currentiCloudToken;
	int callbackMethod;
	BOOL _seenKVSStoreChange;
	BOOL _ensurePeerRegistration;
	BOOL _ensurePeerRegistrationEnqueuedButNotStarted;
	BOOL _shadowEnsurePeerRegistration;
	BOOL _inCallout;
	NSObject*<CKDStore> _store;
	NSObject*<CKDAccount> _account;
	NSObject*<CKDLockMonitor> _lockMonitor;
	NSURL* _persistenceURL;
	NSMutableSet* _alwaysKeys;
	NSMutableSet* _firstUnlockKeys;
	NSMutableSet* _unlockedKeys;
	NSMutableSet* _pendingKeys;
	NSMutableSet* _shadowPendingKeys;
	NSString* _dsid;
	NSString* _accountUUID;
	NSMutableSet* _pendingSyncPeerIDs;
	NSMutableSet* _shadowPendingSyncPeerIDs;
	NSMutableSet* _pendingSyncBackupPeerIDs;
	NSMutableSet* _shadowPendingSyncBackupPeerIDs;
	NSMutableArray* _freshnessCompletions;
	unsigned long long _nextFreshnessTime;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _ckdkvsproxy_queue;
	/*^block*/id _shadowFlushBlock;

}

@property (nonatomic,retain) NSDictionary * persistentData; 
@property (readonly) NSObject*<CKDStore> store;                                          //@synthesize store=_store - In the implementation block
@property (readonly) NSObject*<CKDAccount> account;                                      //@synthesize account=_account - In the implementation block
@property (readonly) NSObject*<CKDLockMonitor> lockMonitor;                              //@synthesize lockMonitor=_lockMonitor - In the implementation block
@property (readonly) NSURL * persistenceURL;                                             //@synthesize persistenceURL=_persistenceURL - In the implementation block
@property (nonatomic,retain) NSMutableSet * alwaysKeys;                                  //@synthesize alwaysKeys=_alwaysKeys - In the implementation block
@property (nonatomic,retain) NSMutableSet * firstUnlockKeys;                             //@synthesize firstUnlockKeys=_firstUnlockKeys - In the implementation block
@property (nonatomic,retain) NSMutableSet * unlockedKeys;                                //@synthesize unlockedKeys=_unlockedKeys - In the implementation block
@property (assign) BOOL seenKVSStoreChange;                                              //@synthesize seenKVSStoreChange=_seenKVSStoreChange - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingKeys;                                 //@synthesize pendingKeys=_pendingKeys - In the implementation block
@property (nonatomic,retain) NSMutableSet * shadowPendingKeys;                           //@synthesize shadowPendingKeys=_shadowPendingKeys - In the implementation block
@property (nonatomic,retain) NSString * dsid;                                            //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,retain) NSString * accountUUID;                                     //@synthesize accountUUID=_accountUUID - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingSyncPeerIDs;                          //@synthesize pendingSyncPeerIDs=_pendingSyncPeerIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * shadowPendingSyncPeerIDs;                    //@synthesize shadowPendingSyncPeerIDs=_shadowPendingSyncPeerIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingSyncBackupPeerIDs;                    //@synthesize pendingSyncBackupPeerIDs=_pendingSyncBackupPeerIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * shadowPendingSyncBackupPeerIDs;              //@synthesize shadowPendingSyncBackupPeerIDs=_shadowPendingSyncBackupPeerIDs - In the implementation block
@property (assign) BOOL ensurePeerRegistration;                                          //@synthesize ensurePeerRegistration=_ensurePeerRegistration - In the implementation block
@property (assign) BOOL ensurePeerRegistrationEnqueuedButNotStarted;                     //@synthesize ensurePeerRegistrationEnqueuedButNotStarted=_ensurePeerRegistrationEnqueuedButNotStarted - In the implementation block
@property (assign) BOOL shadowEnsurePeerRegistration;                                    //@synthesize shadowEnsurePeerRegistration=_shadowEnsurePeerRegistration - In the implementation block
@property (assign) BOOL inCallout;                                                       //@synthesize inCallout=_inCallout - In the implementation block
@property (nonatomic,retain) NSMutableArray * freshnessCompletions;                      //@synthesize freshnessCompletions=_freshnessCompletions - In the implementation block
@property (assign) unsigned long long nextFreshnessTime;                                 //@synthesize nextFreshnessTime=_nextFreshnessTime - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> calloutQueue;                            //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> ckdkvsproxy_queue;                       //@synthesize ckdkvsproxy_queue=_ckdkvsproxy_queue - In the implementation block
@property (copy) id shadowFlushBlock;                                                    //@synthesize shadowFlushBlock=_shadowFlushBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withAccount:(id)arg1 store:(id)arg2 lockMonitor:(id)arg3 persistence:(id)arg4 ;
-(NSString *)description;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(NSString *)dsid;
-(void)setDsid:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)setCalloutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<CKDStore>)store;
-(NSObject*<CKDAccount>)account;
-(void)locked;
-(void)unlocked;
-(void)setAccountUUID:(NSString *)arg1 ;
-(NSString *)accountUUID;
-(void)handleNotification:(const char*)arg1 ;
-(void)setPersistentData:(NSDictionary *)arg1 ;
-(id)initWithAccount:(id)arg1 store:(id)arg2 lockMonitor:(id)arg3 persistence:(id)arg4 ;
-(void)clearStore;
-(void)synchronizeStore;
-(id)copyAsDictionary;
-(void)_queue_processAllItems;
-(NSDictionary *)persistentData;
-(void)persistState;
-(void)perfCounters:(/*^block*/id)arg1 ;
-(void)setStoreObjectsFromDictionary:(id)arg1 ;
-(void)setObjectsFromDictionary:(id)arg1 ;
-(void)waitForSynchronization:(/*^block*/id)arg1 ;
-(void)waitForSyncDone:(BOOL)arg1 error:(id)arg2 ;
-(id)copyAllKeyInterests;
-(void)registerAtTimeKeys:(id)arg1 ;
-(void)removeKeys:(id)arg1 forAccount:(id)arg2 ;
-(void)registerKeys:(id)arg1 forAccount:(id)arg2 ;
-(void)_queue_handleNotification:(const char*)arg1 ;
-(void)_queue_storeKeysChanged:(id)arg1 initial:(BOOL)arg2 ;
-(void)_queue_storeAccountChanged;
-(void)doAfterFlush:(/*^block*/id)arg1 ;
-(void)calloutWith:(/*^block*/id)arg1 ;
-(void)sendKeysCallout:(/*^block*/id)arg1 ;
-(void)handlePendingEnsurePeerRegistrationRequests:(BOOL)arg1 ;
-(void)doEnsurePeerRegistration;
-(void)doSyncWithPendingPeers;
-(void)doSyncWithAllPeers;
-(BOOL)hasPendingNonShadowSyncIDs;
-(BOOL)hasPendingShadowSyncIDs;
-(BOOL)hasPendingSyncIDs;
-(void)requestSyncWithPeerIDs:(id)arg1 backupPeerIDs:(id)arg2 ;
-(BOOL)hasSyncPendingFor:(id)arg1 ;
-(BOOL)hasPendingKey:(id)arg1 ;
-(void)requestEnsurePeerRegistration;
-(void)_queue_locked;
-(void)_queue_unlocked;
-(void)_queue_kvsStoreChange;
-(void)storeKeysChanged:(id)arg1 initial:(BOOL)arg2 ;
-(void)storeAccountChanged;
-(id)keysForCurrentLockState;
-(id)pendKeysAndGetNewlyPended:(id)arg1 ;
-(void)intersectWithCurrentLockState:(id)arg1 ;
-(id)pendingKeysForCurrentLockState;
-(id)pendKeysAndGetPendingForCurrentLockState:(id)arg1 ;
-(id)copyValues:(id)arg1 ;
-(void)processKeyChangedEvent:(id)arg1 ;
-(void)processPendingKeysForCurrentLockState;
-(NSObject*<CKDLockMonitor>)lockMonitor;
-(NSURL *)persistenceURL;
-(NSMutableSet *)alwaysKeys;
-(void)setAlwaysKeys:(NSMutableSet *)arg1 ;
-(NSMutableSet *)firstUnlockKeys;
-(void)setFirstUnlockKeys:(NSMutableSet *)arg1 ;
-(NSMutableSet *)unlockedKeys;
-(void)setUnlockedKeys:(NSMutableSet *)arg1 ;
-(BOOL)seenKVSStoreChange;
-(void)setSeenKVSStoreChange:(BOOL)arg1 ;
-(NSMutableSet *)pendingKeys;
-(void)setPendingKeys:(NSMutableSet *)arg1 ;
-(NSMutableSet *)shadowPendingKeys;
-(void)setShadowPendingKeys:(NSMutableSet *)arg1 ;
-(NSMutableSet *)pendingSyncPeerIDs;
-(void)setPendingSyncPeerIDs:(NSMutableSet *)arg1 ;
-(NSMutableSet *)shadowPendingSyncPeerIDs;
-(void)setShadowPendingSyncPeerIDs:(NSMutableSet *)arg1 ;
-(NSMutableSet *)pendingSyncBackupPeerIDs;
-(void)setPendingSyncBackupPeerIDs:(NSMutableSet *)arg1 ;
-(NSMutableSet *)shadowPendingSyncBackupPeerIDs;
-(void)setShadowPendingSyncBackupPeerIDs:(NSMutableSet *)arg1 ;
-(BOOL)ensurePeerRegistration;
-(void)setEnsurePeerRegistration:(BOOL)arg1 ;
-(BOOL)ensurePeerRegistrationEnqueuedButNotStarted;
-(void)setEnsurePeerRegistrationEnqueuedButNotStarted:(BOOL)arg1 ;
-(BOOL)shadowEnsurePeerRegistration;
-(void)setShadowEnsurePeerRegistration:(BOOL)arg1 ;
-(BOOL)inCallout;
-(void)setInCallout:(BOOL)arg1 ;
-(NSMutableArray *)freshnessCompletions;
-(void)setFreshnessCompletions:(NSMutableArray *)arg1 ;
-(unsigned long long)nextFreshnessTime;
-(void)setNextFreshnessTime:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)ckdkvsproxy_queue;
-(void)setCkdkvsproxy_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)shadowFlushBlock;
-(void)setShadowFlushBlock:(id)arg1 ;
@end

