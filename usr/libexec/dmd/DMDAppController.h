/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:35 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/dmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <dmd/DMDAppLifeCycleObserving.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, DMFOSStateHandler, NSArray, NSString;

@interface DMDAppController : NSObject <DMDAppLifeCycleObserving> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _manifest;
	DMFOSStateHandler* _stateHandler;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * manifest;                          //@synthesize manifest=_manifest - In the implementation block
@property (nonatomic,readonly) DMFOSStateHandler * stateHandler;                        //@synthesize stateHandler=_stateHandler - In the implementation block
@property (nonatomic,copy,readonly) NSArray * foregroundBundleIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * managedBundleIdentifiers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
+(id)metadataPath;
-(NSString *)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initPrivate;
-(NSMutableDictionary *)manifest;
-(void)advanceTransientStates;
-(DMFOSStateHandler *)stateHandler;
-(void)_cleanUpStaleManagementStatesAndStartObservingApps;
-(id)_metadataByBundleIdentifier;
-(void)_getEnterpriseAppMetadataForManifestURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getBundleIdentifierForStoreItemIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_metadataForBundleIdentifier:(id)arg1 ;
-(id)_newMetadataDictionary;
-(BOOL)_setMetadata:(id)arg1 forBundleIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)_applyChangeInLifeCycle:(id)arg1 stateMap:(id)arg2 ;
-(void)didFailInstallingForLifeCycle:(id)arg1 ;
-(void)didFinishUpdatingForLifeCycle:(id)arg1 ;
-(BOOL)setState:(unsigned long long)arg1 forBundleIdentifier:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)stateForBundleIdentifier:(id)arg1 ;
-(void)_getEnterpriseAppMetadataFromData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didStartInstallingForLifeCycle:(id)arg1 ;
-(void)didCancelInstallingForLifeCycle:(id)arg1 ;
-(void)didFinishInstallingForLifeCycle:(id)arg1 ;
-(void)didStartUpdatingForLifeCycle:(id)arg1 ;
-(void)didCancelUpdatingForLifeCycle:(id)arg1 ;
-(void)didFailUpdatingForLifeCycle:(id)arg1 ;
-(void)didFinishUninstallingForLifeCycle:(id)arg1 ;
-(void)getMetadataForAppRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateBundleIDPersonaIDMappingForPersonaID:(id)arg1 addingBundleID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getMetadataForNonEnterpriseAppRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startRedeemingAppWithCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startUpdatingAppForRequest:(id)arg1 metadata:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)resumeAppUpdateWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setVPNUUIDString:(id)arg1 associatedDomains:(id)arg2 configuration:(id)arg3 options:(unsigned long long)arg4 forBundleIdentifier:(id)arg5 ;
-(BOOL)writeManagementInformationToDiskWithError:(id*)arg1 ;
-(NSArray *)foregroundBundleIdentifiers;
-(void)getBundleIdentifierForStoreItemIdentifier:(id)arg1 accountIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getMetadataForNonEnterpriseAppRequest:(id)arg1 accountIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)setConfiguration:(id)arg1 forBundleIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)getBundleIdentifierForAppRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getBundleIdentifierForManifestURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)managedBundleIdentifiers;
-(id)VPNUUIDStringForBundleIdentifier:(id)arg1 ;
-(id)associatedDomainsForBundleIdentifier:(id)arg1 ;
-(id)configurationForBundleIdentifier:(id)arg1 ;
-(id)feedbackForBundleIdentifier:(id)arg1 ;
-(id)managementInformationForBundleIdentifier:(id)arg1 ;
-(BOOL)setFeedback:(id)arg1 forBundleIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)handleFetchRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getMetadataForAppRequest:(id)arg1 accountIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)startInstallingEnterpriseAppWithManifestURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startInstallingNonEnterpriseAppForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)resumeAppInstallationWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)setVPNUUIDString:(id)arg1 forBundleIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)setManagementInformation:(id)arg1 forBundleIdentifier:(id)arg2 error:(id*)arg3 ;
-(BOOL)removePersonaMappingForBundleID:(id)arg1 error:(id*)arg2 ;
-(void)startUninstallingAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelAppInstallationWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelAppUpdateWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)setAssociatedDomains:(id)arg1 forBundleIdentifier:(id)arg2 error:(id*)arg3 ;
@end

