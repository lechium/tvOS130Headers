/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray;

@interface VCDispatchQueue : NSObject {

	opaque_pthread_mutex_t _lock;
	NSMutableArray* _rootQueues;

}
+(id)defaultManager;
-(id)init;
-(void)dealloc;
-(id)getCustomRootQueueWithPriority:(int)arg1 isFixedPriority:(BOOL)arg2 ;
@end
