/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface VCDaemonProcessInfoManager : NSObject {

	NSObject*<OS_dispatch_queue> _xpcQueue;

}
+(id)sharedManager;
-(id)retain;
-(oneway void)release;
-(id)allocWithZone:(NSZone*)arg1 ;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)registerBlocksForService;
-(void)deregisterBlocksForService;
-(id)copyProcessInfo;
@end

