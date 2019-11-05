/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/ICDHandlerCoordinating.h>

@protocol ICDBackgroundTaskScheduling;
@class NSString;

@interface ICDHandlerCoordinator : NSObject <ICDHandlerCoordinating> {

	BOOL _setupCompleted;
	long long _type;
	id<ICDBackgroundTaskScheduling> _taskScheduler;

}

@property (assign,getter=isSetupCompleted,nonatomic) BOOL setupCompleted;                         //@synthesize setupCompleted=_setupCompleted - In the implementation block
@property (assign,nonatomic) long long type;                                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,__weak,readonly) id<ICDBackgroundTaskScheduling> taskScheduler;              //@synthesize taskScheduler=_taskScheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_managedHandlerClasses;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setSetupCompleted:(BOOL)arg1 ;
-(id<ICDBackgroundTaskScheduling>)taskScheduler;
-(void)updateHandlersWithAccountStateChange:(id)arg1 ;
-(id)initWithType:(long long)arg1 backgroundTaskScheduler:(id)arg2 ;
-(void)setupHandlersWithAccountStateChange:(id)arg1 ;
-(BOOL)isSetupCompleted;
-(void)_processSupportedConfigurationsChange:(id)arg1 initialSetup:(BOOL)arg2 ;
-(void)_processActiveConfigurationChange:(id)arg1 initialSetup:(BOOL)arg2 ;
-(void)_deauthenticateUnsupportedConfigurationsFromChange:(id)arg1 initialSetup:(BOOL)arg2 ;
-(id)_configurationsToRemoveForChange:(id)arg1 initialSetup:(BOOL)arg2 ;
-(id)_configurationsToActivateForChange:(id)arg1 initialSetup:(BOOL)arg2 ;
-(void)enumerateHandlersForAccountState:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end
