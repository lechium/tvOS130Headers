/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/CPLCloudKitTransportTask.h>
#import <cloudphotod/CPLEngineTransportResourcesDownloadTask.h>

@class NSArray, _CPLCloudKitDownloadGroup, NSMutableArray, NSString;

@interface CPLCloudKitResourcesDownloadTask : CPLCloudKitTransportTask <CPLEngineTransportResourcesDownloadTask> {

	_CPLCloudKitDownloadGroup* _downloadGroup;
	NSMutableArray* _remainingPrivateTasks;
	NSMutableArray* _remainingSharedTasks;
	NSMutableArray* _currentRemainingTasks;
	NSArray* _downloadTasks;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) NSArray * downloadTasks;                                                    //@synthesize downloadTasks=_downloadTasks - In the implementation block
@property (nonatomic,copy,readonly) id completionHandler;                                              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL foreground; 
@property (assign,getter=isHighPriorityBackground,nonatomic) BOOL highPriorityBackground; 
@property (assign,getter=isForcedTask,nonatomic) BOOL forcedTask; 
@property (assign,getter=isBackgroundTask,nonatomic) BOOL backgroundTask; 
@property (nonatomic,retain) id<CPLEngineTransportGroup> transportGroup; 
-(id)completionHandler;
-(void)setDownloadTasks:(NSArray *)arg1 ;
-(NSArray *)downloadTasks;
-(void)cancelDownloadTask:(id)arg1 ;
-(void)runOperations;
-(void)_finishRemainingTasksWithError:(id)arg1 ;
-(void)_downloadNextGroup;
-(id)_downloadOperationWithRecordIDsAndTasks:(id)arg1 keys:(id)arg2 perRecordProgressBlock:(/*^block*/id)arg3 perRecordCompletionBlock:(/*^block*/id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_downloadCurrentGroup;
-(id)initWithController:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

