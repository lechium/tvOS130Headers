/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:42 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/installd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MIExecutableBundle, MIBundleContainer, MIDataContainer, NSString, NSURL;

@interface MIInstalledInfoGatherer : NSObject {

	MIExecutableBundle* _bundle;
	MIExecutableBundle* _builtInAppParallelPlaceholderBundle;
	MIBundleContainer* _bundleContainer;
	MIDataContainer* _dataContainer;
	NSString* _owningBundleIdentifier;
	NSURL* _parentBundleURL;

}

@property (nonatomic,readonly) MIExecutableBundle * bundle;                                           //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) MIExecutableBundle * builtInAppParallelPlaceholderBundle;              //@synthesize builtInAppParallelPlaceholderBundle=_builtInAppParallelPlaceholderBundle - In the implementation block
@property (nonatomic,readonly) MIBundleContainer * bundleContainer;                                   //@synthesize bundleContainer=_bundleContainer - In the implementation block
@property (nonatomic,readonly) MIDataContainer * dataContainer;                                       //@synthesize dataContainer=_dataContainer - In the implementation block
@property (nonatomic,readonly) NSString * owningBundleIdentifier;                                     //@synthesize owningBundleIdentifier=_owningBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSURL * parentBundleURL;                                               //@synthesize parentBundleURL=_parentBundleURL - In the implementation block
-(MIExecutableBundle *)bundle;
-(id)_staticDiskUsage;
-(id)_sandboxEnvironment;
-(MIBundleContainer *)bundleContainer;
-(id)initWithPluginBundle:(id)arg1 inBundleIdentifier:(id)arg2 dataContainer:(id)arg3 ;
-(id)launchServicesDictionaryWithError:(id*)arg1 ;
-(id)initWithBundleContainer:(id)arg1 dataContainer:(id)arg2 ;
-(id)initWithBundle:(id)arg1 dataContainer:(id)arg2 ;
-(MIDataContainer *)dataContainer;
-(void)_fixUpForBuiltInAppParallelPlaceholder;
-(id)_determineApplicationType;
-(NSURL *)parentBundleURL;
-(NSString *)owningBundleIdentifier;
-(MIExecutableBundle *)builtInAppParallelPlaceholderBundle;
-(id)_groupContainersDictionary;
-(id)initWithBundleContainer:(id)arg1 ;
-(id)initWithWatchKitAppBundle:(id)arg1 inBundle:(id)arg2 ;
@end

