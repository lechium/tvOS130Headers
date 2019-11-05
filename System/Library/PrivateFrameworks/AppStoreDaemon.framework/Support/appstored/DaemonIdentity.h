/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/Identity.h>

@class NSString;

@interface DaemonIdentity : NSObject <Identity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSString * apsDelegatePort; 
@property (readonly) NSString * machPortName; 
@property (readonly) NSString * metricsContainerId; 
@property (readonly) NSString * persistedDataPath; 
@property (readonly) NSString * cachedDataPath; 
-(NSString *)cachedDataPath;
-(NSString *)persistedDataPath;
-(NSString *)metricsContainerId;
-(NSString *)apsDelegatePort;
-(id)namespaceWithSuffix:(id)arg1 ;
-(NSString *)machPortName;
@end
