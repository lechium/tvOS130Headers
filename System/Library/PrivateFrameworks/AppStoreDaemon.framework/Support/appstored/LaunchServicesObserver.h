/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/IXAppInstallObserverDelegate.h>

@class JobAgentSupervisor, IXAppInstallObserver, NSMutableSet, NSString;

@interface LaunchServicesObserver : NSObject <IXAppInstallObserverDelegate> {

	JobAgentSupervisor* _supervisor;
	IXAppInstallObserver* _ixObserver;
	NSMutableSet* _systemAppRequests;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3 ;
-(void)coordinatorShouldPrioritize:(id)arg1 ;
-(void)coordinatorShouldResume:(id)arg1 ;
-(void)coordinatorShouldPause:(id)arg1 ;
-(void)shouldPrioritizeAppWithBundleID:(id)arg1 ;
-(id)initWithJobSupervisor:(id)arg1 ;
-(void)_handleAppleIDDidChangeNotification:(id)arg1 ;
-(void)_handleCancelEventNotification:(id)arg1 ;
-(void)_handleInstalledEventNotification:(id)arg1 ;
-(void)_handleUninstalledEventNotification:(id)arg1 ;
-(void)_handleBetaAppCrashedNotification:(id)arg1 ;
-(void)_applicationInstallsDidCancel:(id)arg1 ;
-(BOOL)_applicationInstallsDidPrioritize:(id)arg1 hasCoordinator:(BOOL)arg2 ;
-(void)_applicationInstallsDidPause:(id)arg1 ;
-(void)_applicationInstallsDidResume:(id)arg1 ;
-(void)_enumerateJobsForBundleIDs:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_parseProgressNotification:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_parseRegistrationNotification:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_copyBundleIDsFromXPCArray:(id)arg1 ;
@end
