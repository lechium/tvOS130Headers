/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLEngineChangePipeImplementation <CPLEngineStorageImplementation>
@required
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4;
-(BOOL)hasSomeChangeWithScopedIdentifier:(id)arg1;
-(unsigned long long)countOfQueuedBatches;
-(BOOL)hasQueuedBatches;
-(BOOL)appendChangeBatch:(id)arg1 error:(id*)arg2;
-(BOOL)popChangeBatch:(id*)arg1 error:(id*)arg2;
-(id)nextBatch;
-(BOOL)popNextBatchWithError:(id*)arg1;
-(BOOL)hasSomeChangeInScopesWithIdentifiers:(id)arg1;
-(BOOL)hasSomeChangeWithScopeFilter:(id)arg1;
-(BOOL)deleteAllChangeBatchesWithError:(id*)arg1;
-(BOOL)deleteAllChangesWithScopeFilter:(id)arg1 error:(id*)arg2;
-(BOOL)compactChangeBatchesWithError:(id*)arg1;
-(id)allChangeBatches;

@end
