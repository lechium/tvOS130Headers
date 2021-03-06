/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/ASDServiceProvider.h>

@class NSString;

@interface ASDInstallApps : NSObject <ASDServiceProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)interface;
+(void)_installApps:(id)arg1 onPairedDevice:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(id)_availableMetadataClasses;
+(void)installApp:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)installApps:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

