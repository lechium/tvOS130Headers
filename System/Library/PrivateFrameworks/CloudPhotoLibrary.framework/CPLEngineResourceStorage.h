/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <CloudPhotoLibrary/CPLAbstractObject.h>

@protocol OS_dispatch_queue;
@class CPLPlatformObject, NSMutableDictionary, NSURL, NSObject, _CPLPruneRequestCounter, CPLEngineFileStorage, NSString;

@interface CPLEngineResourceStorage : CPLEngineStorage <CPLAbstractObject> {

	NSMutableDictionary* _identitiesToCommit;
	NSMutableDictionary* _identitiesToDelete;
	NSURL* _tempFolderURL;
	NSObject*<OS_dispatch_queue> _pruneStatsQueue;
	_CPLPruneRequestCounter* _pruneRequests;
	_CPLPruneRequestCounter* _purgeabilityCheckRequests;
	CPLEngineFileStorage* _fileStorage;

}

@property (nonatomic,readonly) CPLEngineFileStorage * fileStorage;              //@synthesize fileStorage=_fileStorage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(id)status;
-(BOOL)openWithError:(id*)arg1 ;
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(unsigned long long)scopeType;
-(BOOL)storeResourceForUpload:(id)arg1 error:(id*)arg2 ;
-(BOOL)storeResourceCopyForUpload:(id)arg1 error:(id*)arg2 ;
-(BOOL)dropResourceForUpload:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)sizeOfResourcesToUpload;
-(unsigned long long)sizeOfOriginalResourcesToUpload;
-(id)retainFileURLForResource:(id)arg1 error:(id*)arg2 ;
-(BOOL)releaseFileURL:(id)arg1 forResource:(id)arg2 error:(id*)arg3 ;
-(BOOL)hasResource:(id)arg1 ;
-(id)createTempDestinationURLForResource:(id)arg1 error:(id*)arg2 ;
-(BOOL)storeDownloadedResource:(id)arg1 atURL:(id)arg2 error:(id*)arg3 ;
-(BOOL)compactWithError:(id*)arg1 ;
-(BOOL)resetWithError:(id*)arg1 ;
-(BOOL)checkIsEmpty;
-(void)writeTransactionDidFail;
-(void)writeTransactionDidSucceed;
-(id)statusDictionary;
-(void)notePruningRequestForResource:(id)arg1 realPrune:(BOOL)arg2 successful:(BOOL)arg3 prunedSize:(unsigned long long)arg4 ;
-(void)notePruningRequestForResource:(id)arg1 realPrune:(BOOL)arg2 successful:(BOOL)arg3 ;
-(CPLEngineFileStorage *)fileStorage;
@end
