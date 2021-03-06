/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Rapport/Rapport-Structs.h>
@class NSObject, NSMutableArray;

@interface RPFileTransferSmallFilesTask : NSObject {

	BOOL _needsRetry;
	NSMutableArray* _fileItems;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _taskID;

}

@property (nonatomic,retain) NSMutableArray * fileItems;                      //@synthesize fileItems=_fileItems - In the implementation block
@property (assign,nonatomic) BOOL needsRetry;                                 //@synthesize needsRetry=_needsRetry - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) unsigned long long taskID;                       //@synthesize taskID=_taskID - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned long long)taskID;
-(NSMutableArray *)fileItems;
-(void)setFileItems:(NSMutableArray *)arg1 ;
-(BOOL)needsRetry;
-(void)setNeedsRetry:(BOOL)arg1 ;
-(void)setTaskID:(unsigned long long)arg1 ;
@end

