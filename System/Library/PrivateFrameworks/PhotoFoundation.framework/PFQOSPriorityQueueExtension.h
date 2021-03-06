/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFPriorityQueueExtension.h>
#import <PhotoFoundation/PFQOSPriorityEnqueuing.h>

@interface PFQOSPriorityQueueExtension : PFPriorityQueueExtension <PFQOSPriorityEnqueuing>
-(void)enqueueWithCurrentQOSPriority:(/*^block*/id)arg1 ;
-(void)enqueueWithQOSPriority:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithConcurrentScheduling:(BOOL)arg1 ;
@end

