/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMapTable, NSObject, CNContactStore, CNDowntimeWhitelist, STManagementState, DMFCommunicationPolicyMonitor, NSString, DMFEmergencyModeMonitor;

@interface STConversation : NSObject {

	NSMapTable* _contextByHandles;
	NSObject*<OS_dispatch_queue> _stateChangeQueue;
	NSObject* _didFetchInitialStateLock;
	BOOL _emergencyModeEnabled;
	BOOL _didFetchInitialScreenTimePolicyState;
	BOOL _didFetchInitialApplicationState;
	BOOL _didFetchInitialEmergencyModeState;
	int _policyNotifyToken;
	int _emergencyModeNotifyToken;
	CNContactStore* _contactsStore;
	CNDowntimeWhitelist* _whitelist;
	STManagementState* _managementState;
	DMFCommunicationPolicyMonitor* _policyMonitor;
	NSString* _bundleIdentifier;
	long long _generalScreenTimePolicy;
	long long _whileLimitedPolicy;
	unsigned long long _currentApplicationState;
	DMFEmergencyModeMonitor* _emergencyModeMonitor;
	STConversation* _me;
	/*^block*/id _conversationCompletionHandler;

}

@property (readonly) CNContactStore * contactsStore;                            //@synthesize contactsStore=_contactsStore - In the implementation block
@property (readonly) CNDowntimeWhitelist * whitelist;                           //@synthesize whitelist=_whitelist - In the implementation block
@property (retain) STManagementState * managementState;                         //@synthesize managementState=_managementState - In the implementation block
@property (retain) DMFCommunicationPolicyMonitor * policyMonitor;               //@synthesize policyMonitor=_policyMonitor - In the implementation block
@property (copy,readonly) NSString * bundleIdentifier;                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign) long long generalScreenTimePolicy;                           //@synthesize generalScreenTimePolicy=_generalScreenTimePolicy - In the implementation block
@property (assign) long long whileLimitedPolicy;                                //@synthesize whileLimitedPolicy=_whileLimitedPolicy - In the implementation block
@property (assign) unsigned long long currentApplicationState;                  //@synthesize currentApplicationState=_currentApplicationState - In the implementation block
@property (retain) DMFEmergencyModeMonitor * emergencyModeMonitor;              //@synthesize emergencyModeMonitor=_emergencyModeMonitor - In the implementation block
@property (assign) BOOL emergencyModeEnabled;                                   //@synthesize emergencyModeEnabled=_emergencyModeEnabled - In the implementation block
@property (assign) BOOL didFetchInitialScreenTimePolicyState;                   //@synthesize didFetchInitialScreenTimePolicyState=_didFetchInitialScreenTimePolicyState - In the implementation block
@property (assign) BOOL didFetchInitialApplicationState;                        //@synthesize didFetchInitialApplicationState=_didFetchInitialApplicationState - In the implementation block
@property (assign) BOOL didFetchInitialEmergencyModeState;                      //@synthesize didFetchInitialEmergencyModeState=_didFetchInitialEmergencyModeState - In the implementation block
@property (readonly) int policyNotifyToken;                                     //@synthesize policyNotifyToken=_policyNotifyToken - In the implementation block
@property (readonly) int emergencyModeNotifyToken;                              //@synthesize emergencyModeNotifyToken=_emergencyModeNotifyToken - In the implementation block
@property (retain) STConversation * me;                                         //@synthesize me=_me - In the implementation block
@property (copy) id conversationCompletionHandler;                              //@synthesize conversationCompletionHandler=_conversationCompletionHandler - In the implementation block
+(void)requestConversationWithBundleIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(CNDowntimeWhitelist *)whitelist;
-(STConversation *)me;
-(void)setMe:(STConversation *)arg1 ;
-(id)initSynchronouslyWithBundleIdentifier:(id)arg1 ;
-(id)allowableByContactsHandles:(id)arg1 ;
-(DMFCommunicationPolicyMonitor *)policyMonitor;
-(unsigned long long)currentApplicationState;
-(void)setCurrentApplicationState:(unsigned long long)arg1 ;
-(BOOL)emergencyModeEnabled;
-(void)setEmergencyModeEnabled:(BOOL)arg1 ;
-(id)initWithBundleIdentifier:(id)arg1 contactStore:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 contactStore:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_stConversationCommonInitWithBundleIdentifier:(id)arg1 contactStore:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_stConversationCommonInitSetupObservationOfStateChanges;
-(void)callCompletionHandlerIfNeededWithConversation:(id)arg1 error:(id)arg2 ;
-(void)setGeneralScreenTimePolicy:(long long)arg1 ;
-(void)setWhileLimitedPolicy:(long long)arg1 ;
-(void)_updateAllContextsUpdateGeneral:(BOOL)arg1 updateLimited:(BOOL)arg2 updateCurrentApplicationState:(BOOL)arg3 updateAllowedByContactsHandle:(BOOL)arg4 refreshContacts:(BOOL)arg5 updateEmergencyMode:(BOOL)arg6 ;
-(void)setDidFetchInitialScreenTimePolicyState:(BOOL)arg1 ;
-(void)setDidFetchInitialApplicationState:(BOOL)arg1 ;
-(void)setDidFetchInitialEmergencyModeState:(BOOL)arg1 ;
-(void)_currentApplicationStateDidChange;
-(void)_screenTimePolicyDidChange;
-(void)_emergencyModeDidChange;
-(void)_updateAllContextsForNewWhileLimitedPolicyOrWhitelist;
-(void)_contactsStoreDidChange;
-(id)conversationCompletionHandler;
-(BOOL)didFetchInitialScreenTimePolicyState;
-(BOOL)didFetchInitialApplicationState;
-(BOOL)didFetchInitialEmergencyModeState;
-(void)setConversationCompletionHandler:(id)arg1 ;
-(void)_populateAllowedContactsByHandlesForContactHandles:(id)arg1 context:(id)arg2 ;
-(void)_updateContext:(id)arg1 forHandles:(id)arg2 updateGeneral:(BOOL)arg3 updateLimited:(BOOL)arg4 updateCurrentApplicationState:(BOOL)arg5 updateAllowedByContactsHandle:(BOOL)arg6 refreshContacts:(BOOL)arg7 updateEmergencyMode:(BOOL)arg8 ;
-(BOOL)_shouldGeneralScreenTimeAllowHandles:(id)arg1 context:(id)arg2 ;
-(long long)generalScreenTimePolicy;
-(long long)whileLimitedPolicy;
-(BOOL)_shouldWhileLimitedAllowHandles:(id)arg1 context:(id)arg2 ;
-(STManagementState *)managementState;
-(DMFEmergencyModeMonitor *)emergencyModeMonitor;
-(id)_contactsByHandle:(id)arg1 error:(id*)arg2 ;
-(CNContactStore *)contactsStore;
-(void)setManagementState:(STManagementState *)arg1 ;
-(void)setPolicyMonitor:(DMFCommunicationPolicyMonitor *)arg1 ;
-(void)setEmergencyModeMonitor:(DMFEmergencyModeMonitor *)arg1 ;
-(int)policyNotifyToken;
-(int)emergencyModeNotifyToken;
@end
