/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:45 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <LocationSupport/CLIntersiloService.h>
#import <locationd/CLApplicationLifecycleManagerProtocol.h>

@class NSString;

@interface CLApplicationLifecycleManagerAdapter : CLIntersiloService <CLApplicationLifecycleManagerProtocol> {

	CLApplicationLifecycleManager* _manager;

}

@property (assign,nonatomic) CLApplicationLifecycleManager* manager;              //@synthesize manager=_manager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
+(void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2 ;
+(id)getSilo;
+(void)performSyncOnSilo:(id)arg1 invoker:(/*^block*/id)arg2 ;
-(id)init;
-(CLApplicationLifecycleManager*)manager;
-(void)setManager:(CLApplicationLifecycleManager*)arg1 ;
-(void)beginService;
-(void)endService;
-(void)launchApplication:(id)arg1 requiringAuthForServiceMask:(unsigned long long)arg2 ;
-(void)launchDaemon:(id)arg1 ;
@end
