/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFScheduler.h>

@class NSOperationQueue, NSString;

@interface _MFOperationQueueScheduler : NSObject <MFScheduler> {

	NSOperationQueue* _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)performBlock:(/*^block*/id)arg1 ;
-(id)performCancelableBlock:(/*^block*/id)arg1 ;
-(id)afterDelay:(double)arg1 performBlock:(/*^block*/id)arg2 ;
-(id)initWithMaxConcurrentOperationCount:(unsigned long long)arg1 ;
@end

