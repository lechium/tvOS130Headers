/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, IDSCloudKitContainer, CUTPromiseSeal, NSHashTable, NSData, IDSKeychainWrapper;

@interface IDSEngramKeyStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	IDSCloudKitContainer* _ckContainer;
	CUTPromiseSeal* _seal;
	NSHashTable* _listeners;
	NSData* _deviceKey;
	IDSKeychainWrapper* _keychainWrapper;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) CUTPromiseSeal * seal;                             //@synthesize seal=_seal - In the implementation block
@property (nonatomic,readonly) IDSCloudKitContainer * ckContainer;              //@synthesize ckContainer=_ckContainer - In the implementation block
@property (nonatomic,retain) IDSKeychainWrapper * keychainWrapper;              //@synthesize keychainWrapper=_keychainWrapper - In the implementation block
@property (nonatomic,retain) NSHashTable * listeners;                           //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,readonly) NSData * deviceKey;                              //@synthesize deviceKey=_deviceKey - In the implementation block
+(id)_keychainIdentifier;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSHashTable *)listeners;
-(id)initWithQueue:(id)arg1 ;
-(BOOL)isEngramEnabled;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(NSData *)deviceKey;
-(void)setListeners:(NSHashTable *)arg1 ;
-(void)setSeal:(CUTPromiseSeal *)arg1 ;
-(CUTPromiseSeal *)seal;
-(IDSKeychainWrapper *)keychainWrapper;
-(void)setKeychainWrapper:(IDSKeychainWrapper *)arg1 ;
-(IDSCloudKitContainer *)ckContainer;
-(id)accountIdentityElector;
-(void)existingAccountIdentityClusterWithCompletion:(/*^block*/id)arg1 ;
-(void)accountIdentityClusterForRegistrationWithCompletion:(/*^block*/id)arg1 ;
-(id)rollFullDeviceIdentityWithCluster:(id)arg1 error:(id*)arg2 ;
-(void)existingFullDeviceIdentityWithCompletion:(/*^block*/id)arg1 ;
-(void)rollAccountIdentityWithCompletion:(/*^block*/id)arg1 ;
-(void)notifyListenersEngramKeyStoreDidUpdateIdentities;
@end
