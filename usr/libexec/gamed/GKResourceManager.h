/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:38 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface GKResourceManager : NSObject {

	NSObject*<OS_dispatch_queue> _syncQueue;
	NSMutableDictionary* _groupForResources;
	NSMutableDictionary* _resourceQueues;

}
-(id)init;
-(void)dealloc;
-(id)_remainingResourceAfterJoiningResources:(id)arg1 group:(id)arg2 queue:(id)arg3 ;
-(void)_registerForResources:(id)arg1 group:(id)arg2 ;
-(void)_deregisterForResources:(id)arg1 group:(id)arg2 ;
-(id)_queueForResource:(id)arg1 ;
-(void)group:(id)arg1 joinResources:(id)arg2 queue:(id)arg3 performBlock:(/*^block*/id)arg4 ;
-(void)writeResources:(id)arg1 group:(id)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)readResources:(id)arg1 group:(id)arg2 queue:(id)arg3 block:(/*^block*/id)arg4 ;
@end
