/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <sharingd/SDNetworkBrowserDelegate.h>
#import <sharingd/SDNetworkOperationDelegate.h>

@protocol OS_xpc_object;
@class NSMutableSet, SDActivityAdvertiser, SDActivityScanner, SDAirDropReceiveManager, SDAutoUnlockSessionManager, SDActivityEncryptionManager, SDNearbyIDSAgent, NSMutableDictionary, SDPairedDeviceAgent, NSObject, SDActivityPayloadManager, SDUnlockKeyManager, SDUnlockLockManager, SDXPCServer, SDXPCHelperConnection, NSString;

@interface SharingDaemon : NSObject <SDNetworkBrowserDelegate, SDNetworkOperationDelegate> {

	NSMutableSet* _activeObjects;
	SDActivityAdvertiser* _activityAdvertiser;
	SDActivityScanner* _activityScanner;
	SDAirDropReceiveManager* _airdropManager;
	SDAutoUnlockSessionManager* _autoUnlockSessionManager;
	SDActivityEncryptionManager* _encryptionManager;
	SDNearbyIDSAgent* _nearbyIDSAgent;
	NSMutableDictionary* _exportedOperations;
	SDPairedDeviceAgent* _pairedDeviceAgent;
	NSObject*<OS_xpc_object> _listener;
	SDActivityPayloadManager* _payloadManager;
	SDUnlockKeyManager* _unlockKeyManager;
	SDUnlockLockManager* _unlockLockManager;
	unsigned long long _stateHandle;
	SDXPCServer* _xpcServer;
	SDXPCHelperConnection* _helperConnection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDaemon;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)handleNewConnection:(id)arg1 ;
-(void)networkBrowser:(id)arg1 nodesChangedForParent:(SFNodeRef)arg2 protocol:(id)arg3 error:(int)arg4 ;
-(void)networkOperation:(id)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(id)xpcArrayForSFNodeArray:(id)arg1 ;
-(id)xpcObjectForSFOperationResults:(id)arg1 ;
-(BOOL)canAccessAirDropSettings:(id)arg1 ;
-(id)stringFromXPCObject:(id)arg1 ;
-(void)handleBrowserMessage:(id)arg1 forConnection:(id)arg2 ;
-(void)handleOperationMessage:(id)arg1 forConnection:(id)arg2 ;
-(os_state_data_s*)stateCapture;
-(id)arrayFromXPCObject:(id)arg1 ;
-(id)numberFromXPCObject:(id)arg1 ;
@end
