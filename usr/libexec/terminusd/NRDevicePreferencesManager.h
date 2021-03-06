/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:59 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/terminusd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSUUID, NSObject, NSMutableDictionary, NSSet;

@interface NRDevicePreferencesManager : NSObject {

	NSUUID* _nrUUID;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _devicePreferencesTypeLink;
	NSMutableDictionary* _policyTrafficClassifiersDict;
	NSSet* _policyTrafficClasses;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSUUID * nrUUID;                                                 //@synthesize nrUUID=_nrUUID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * devicePreferencesTypeLink;                 //@synthesize devicePreferencesTypeLink=_devicePreferencesTypeLink - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * policyTrafficClassifiersDict;              //@synthesize policyTrafficClassifiersDict=_policyTrafficClassifiersDict - In the implementation block
@property (nonatomic,retain) NSSet * policyTrafficClasses;                                    //@synthesize policyTrafficClasses=_policyTrafficClasses - In the implementation block
-(id)description;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cancel;
-(void)removeAllPreferences;
-(NSUUID *)nrUUID;
-(void)setNrUUID:(NSUUID *)arg1 ;
-(void)setLinkPreferences:(id)arg1 forConnection:(id)arg2 ;
-(id)initPrefManagerWithQueue:(id)arg1 nrUUID:(id)arg2 ;
-(void)setLinkPreferences:(id)arg1 forIdentifier:(id)arg2 ;
-(void)removeLinkPreferencesForIdentifier:(id)arg1 ;
-(void)removeLinkPreferencesForConnection:(id)arg1 ;
-(void)applyLinkPreferences;
-(void)setPolicyTrafficClassifiers:(id)arg1 forConnection:(id)arg2 ;
-(void)removePolicyTrafficClassifiersForConnection:(id)arg1 ;
-(void)applyPolicyTrafficClassifiers;
-(void)removePreferencesForConnection:(id)arg1 ;
-(NSMutableDictionary *)devicePreferencesTypeLink;
-(void)setDevicePreferencesTypeLink:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)policyTrafficClassifiersDict;
-(void)setPolicyTrafficClassifiersDict:(NSMutableDictionary *)arg1 ;
-(NSSet *)policyTrafficClasses;
-(void)setPolicyTrafficClasses:(NSSet *)arg1 ;
@end

