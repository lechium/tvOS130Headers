/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKObject.h>
#import <WebKit/NSCopying.h>

@class NSURL, NSString, NSArray;

@interface _WKProcessPoolConfiguration : NSObject <WKObject, NSCopying> {

	ObjectStorage<API::ProcessPoolConfiguration> _processPoolConfiguration;

}

@property (nonatomic,copy) NSURL * injectedBundleURL; 
@property (assign,nonatomic) unsigned long long maximumProcessCount; 
@property (assign,nonatomic) BOOL usesSingleWebProcess; 
@property (nonatomic,copy) NSString * customWebContentServiceBundleIdentifier; 
@property (assign,nonatomic) BOOL ignoreSynchronousMessagingTimeoutsForTesting; 
@property (assign,nonatomic) BOOL attrStyleEnabled; 
@property (nonatomic,copy) NSArray * additionalReadAccessAllowedURLs; 
@property (assign,nonatomic) unsigned long long wirelessContextIdentifier; 
@property (assign,nonatomic) long long diskCacheSizeOverride; 
@property (nonatomic,copy) NSArray * cachePartitionedURLSchemes; 
@property (nonatomic,copy) NSArray * alwaysRevalidatedURLSchemes; 
@property (assign,nonatomic) BOOL diskCacheSpeculativeValidationEnabled; 
@property (nonatomic,copy) NSString * sourceApplicationBundleIdentifier; 
@property (nonatomic,copy) NSString * sourceApplicationSecondaryIdentifier; 
@property (assign,nonatomic) BOOL shouldCaptureAudioInUIProcess; 
@property (nonatomic,copy) NSString * CTDataConnectionServiceType; 
@property (assign,nonatomic) BOOL alwaysRunsAtBackgroundPriority; 
@property (assign,nonatomic) BOOL shouldTakeUIBackgroundAssertion; 
@property (assign,nonatomic) int presentingApplicationPID; 
@property (assign,nonatomic) BOOL processSwapsOnNavigation; 
@property (assign,nonatomic) BOOL alwaysKeepAndReuseSwappedProcesses; 
@property (assign,nonatomic) BOOL processSwapsOnWindowOpenWithOpener; 
@property (assign,nonatomic) BOOL prewarmsProcessesAutomatically; 
@property (assign,nonatomic) BOOL usesWebProcessCache; 
@property (assign,nonatomic) BOOL pageCacheEnabled; 
@property (assign,nonatomic) BOOL suppressesConnectionTerminationOnSystemChange; 
@property (assign,getter=isJITEnabled,nonatomic) BOOL JITEnabled; 
@property (assign,nonatomic) unsigned long long downloadMonitorSpeedMultiplierForTesting; 
@property (setter=setHSTSStorageDirectory:,nonatomic,copy) NSURL * hstsStorageDirectory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(NSString *)sourceApplicationBundleIdentifier;
-(void)setSourceApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)sourceApplicationSecondaryIdentifier;
-(void)setSourceApplicationSecondaryIdentifier:(NSString *)arg1 ;
-(Object*)_apiObject;
-(BOOL)pageCacheEnabled;
-(NSURL *)injectedBundleURL;
-(void)setInjectedBundleURL:(NSURL *)arg1 ;
-(unsigned long long)maximumProcessCount;
-(void)setMaximumProcessCount:(unsigned long long)arg1 ;
-(long long)diskCacheSizeOverride;
-(void)setDiskCacheSizeOverride:(long long)arg1 ;
-(BOOL)diskCacheSpeculativeValidationEnabled;
-(void)setDiskCacheSpeculativeValidationEnabled:(BOOL)arg1 ;
-(BOOL)ignoreSynchronousMessagingTimeoutsForTesting;
-(void)setIgnoreSynchronousMessagingTimeoutsForTesting:(BOOL)arg1 ;
-(BOOL)attrStyleEnabled;
-(void)setAttrStyleEnabled:(BOOL)arg1 ;
-(NSArray *)additionalReadAccessAllowedURLs;
-(void)setAdditionalReadAccessAllowedURLs:(NSArray *)arg1 ;
-(unsigned long long)wirelessContextIdentifier;
-(void)setWirelessContextIdentifier:(unsigned long long)arg1 ;
-(NSArray *)cachePartitionedURLSchemes;
-(void)setCachePartitionedURLSchemes:(NSArray *)arg1 ;
-(NSArray *)alwaysRevalidatedURLSchemes;
-(void)setAlwaysRevalidatedURLSchemes:(NSArray *)arg1 ;
-(BOOL)shouldCaptureAudioInUIProcess;
-(void)setShouldCaptureAudioInUIProcess:(BOOL)arg1 ;
-(void)setPresentingApplicationPID:(int)arg1 ;
-(int)presentingApplicationPID;
-(void)setProcessSwapsOnNavigation:(BOOL)arg1 ;
-(BOOL)processSwapsOnNavigation;
-(void)setPrewarmsProcessesAutomatically:(BOOL)arg1 ;
-(BOOL)prewarmsProcessesAutomatically;
-(void)setUsesWebProcessCache:(BOOL)arg1 ;
-(BOOL)usesWebProcessCache;
-(void)setAlwaysKeepAndReuseSwappedProcesses:(BOOL)arg1 ;
-(BOOL)alwaysKeepAndReuseSwappedProcesses;
-(void)setProcessSwapsOnWindowOpenWithOpener:(BOOL)arg1 ;
-(BOOL)processSwapsOnWindowOpenWithOpener;
-(void)setPageCacheEnabled:(BOOL)arg1 ;
-(BOOL)usesSingleWebProcess;
-(void)setUsesSingleWebProcess:(BOOL)arg1 ;
-(BOOL)suppressesConnectionTerminationOnSystemChange;
-(BOOL)isJITEnabled;
-(void)setJITEnabled:(BOOL)arg1 ;
-(unsigned long long)downloadMonitorSpeedMultiplierForTesting;
-(void)setHSTSStorageDirectory:(id)arg1 ;
-(NSURL *)hstsStorageDirectory;
-(void)setDownloadMonitorSpeedMultiplierForTesting:(unsigned long long)arg1 ;
-(void)setSuppressesConnectionTerminationOnSystemChange:(BOOL)arg1 ;
-(NSString *)CTDataConnectionServiceType;
-(void)setCTDataConnectionServiceType:(NSString *)arg1 ;
-(BOOL)alwaysRunsAtBackgroundPriority;
-(void)setAlwaysRunsAtBackgroundPriority:(BOOL)arg1 ;
-(BOOL)shouldTakeUIBackgroundAssertion;
-(void)setShouldTakeUIBackgroundAssertion:(BOOL)arg1 ;
-(NSString *)customWebContentServiceBundleIdentifier;
-(void)setCustomWebContentServiceBundleIdentifier:(NSString *)arg1 ;
@end
