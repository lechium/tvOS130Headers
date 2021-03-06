/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:36 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/dmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class DMDTaskOperationContext, DMDConfigurationEngine;


@protocol DMDTaskOperationProtocol <NSObject>
@property (nonatomic,readonly) unsigned long long queueGroup; 
@property (nonatomic,readonly) BOOL runConcurrently; 
@property (nonatomic,readonly) BOOL runOnMainThread; 
@property (nonatomic,retain) DMDTaskOperationContext * context; 
@property (nonatomic,retain) DMDConfigurationEngine * configurationEngine; 
@required
+(id)requiredEntitlements;
+(id)whitelistedClassesForRequest;
-(DMDTaskOperationContext *)context;
-(void)setContext:(id)arg1;
-(BOOL)runConcurrently;
-(BOOL)runOnMainThread;
-(DMDConfigurationEngine *)configurationEngine;
-(unsigned long long)queueGroup;
-(void)setConfigurationEngine:(id)arg1;

@end

