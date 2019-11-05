/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAIntentGroupLaunchAppWithUserActivity : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * userActivityIdentifier; 
+(id)launchAppWithUserActivity;
+(id)launchAppWithUserActivityWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)ins_analyticsEndEventType;
-(long long)ins_analyticsBeginEventType;
-(BOOL)ins_shouldUseExtendedFlowTimeout;
-(void)ins_launchAppWithConnection:(id)arg1 userActivityIdentifier:(id)arg2 delegate:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)userActivityIdentifier;
-(void)setUserActivityIdentifier:(NSString *)arg1 ;
@end
