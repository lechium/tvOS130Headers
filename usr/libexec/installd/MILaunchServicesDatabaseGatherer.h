/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:42 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/installd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <installd/MIFilesystemScannerDelegate.h>

@class NSMutableSet;

@interface MILaunchServicesDatabaseGatherer : NSObject <MIFilesystemScannerDelegate> {

	BOOL _shouldUpdatePluginContainersWithParentID;
	NSMutableSet* _coreServices;
	NSMutableSet* _systemApps;
	NSMutableSet* _userApps;
	NSMutableSet* _internalApps;
	NSMutableSet* _pluginKitPlugins;
	NSMutableSet* _vpnPlugins;
	NSMutableSet* _frameworks;
	NSMutableSet* _systemAppPlaceholders;
	/*^block*/id _enumerator;

}

@property (nonatomic,readonly) NSMutableSet * coreServices;                                //@synthesize coreServices=_coreServices - In the implementation block
@property (nonatomic,readonly) NSMutableSet * systemApps;                                  //@synthesize systemApps=_systemApps - In the implementation block
@property (nonatomic,readonly) NSMutableSet * userApps;                                    //@synthesize userApps=_userApps - In the implementation block
@property (nonatomic,readonly) NSMutableSet * internalApps;                                //@synthesize internalApps=_internalApps - In the implementation block
@property (nonatomic,readonly) NSMutableSet * pluginKitPlugins;                            //@synthesize pluginKitPlugins=_pluginKitPlugins - In the implementation block
@property (nonatomic,readonly) NSMutableSet * vpnPlugins;                                  //@synthesize vpnPlugins=_vpnPlugins - In the implementation block
@property (nonatomic,readonly) NSMutableSet * frameworks;                                  //@synthesize frameworks=_frameworks - In the implementation block
@property (nonatomic,readonly) NSMutableSet * systemAppPlaceholders;                       //@synthesize systemAppPlaceholders=_systemAppPlaceholders - In the implementation block
@property (nonatomic,readonly) id enumerator;                                              //@synthesize enumerator=_enumerator - In the implementation block
@property (nonatomic,readonly) BOOL shouldUpdatePluginContainersWithParentID;              //@synthesize shouldUpdatePluginContainersWithParentID=_shouldUpdatePluginContainersWithParentID - In the implementation block
+(BOOL)enumeratePluginKitPluginsInBundle:(id)arg1 updatingPluginParentID:(BOOL)arg2 ensurePluginsAreExecutable:(BOOL)arg3 installProfiles:(BOOL)arg4 error:(id*)arg5 enumerator:(/*^block*/id)arg6 ;
+(id)entryForBundle:(id)arg1 inContainer:(id)arg2 withError:(id*)arg3 ;
-(id)enumerator;
-(void)errorOccurred:(id)arg1 ;
-(NSMutableSet *)pluginKitPlugins;
-(NSMutableSet *)systemApps;
-(NSMutableSet *)coreServices;
-(NSMutableSet *)userApps;
-(NSMutableSet *)internalApps;
-(NSMutableSet *)vpnPlugins;
-(NSMutableSet *)frameworks;
-(NSMutableSet *)systemAppPlaceholders;
-(id)_setForEntry:(id)arg1 ;
-(BOOL)_scanBundle:(id)arg1 inBundleContainer:(id)arg2 withError:(id*)arg3 ;
-(BOOL)scanExecutableBundle:(id)arg1 inContainer:(id)arg2 withError:(id*)arg3 ;
-(id)initWithEnumerator:(/*^block*/id)arg1 ;
-(BOOL)performGatherWithError:(id*)arg1 ;
-(BOOL)shouldUpdatePluginContainersWithParentID;
@end
