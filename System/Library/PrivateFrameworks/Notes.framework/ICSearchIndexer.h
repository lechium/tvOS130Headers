/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/CSSearchableIndexDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSOperationQueue, NSDictionary, CSSearchableIndex, ICSelectorDelayer, NSMutableDictionary, NSArray, NSString;

@interface ICSearchIndexer : NSObject <CSSearchableIndexDelegate> {

	BOOL _disabled;
	BOOL _retryOnErrors;
	BOOL _observingChanges;
	unsigned long long _maxBytesPerIndexingBatch;
	NSObject*<OS_dispatch_queue> _indexingQueue;
	NSOperationQueue* _operationQueue;
	NSDictionary* _dataSourcesByIdentifier;
	CSSearchableIndex* _searchableIndex;
	ICSelectorDelayer* _changeProcessingDelayer;
	NSMutableDictionary* _retryTimers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> indexingQueue;                   //@synthesize indexingQueue=_indexingQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                            //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,copy) NSDictionary * dataSourcesByIdentifier;                         //@synthesize dataSourcesByIdentifier=_dataSourcesByIdentifier - In the implementation block
@property (nonatomic,retain) CSSearchableIndex * searchableIndex;                          //@synthesize searchableIndex=_searchableIndex - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * changeProcessingDelayer;                  //@synthesize changeProcessingDelayer=_changeProcessingDelayer - In the implementation block
@property (assign,getter=isObservingChanges,nonatomic) BOOL observingChanges;              //@synthesize observingChanges=_observingChanges - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * retryTimers;                            //@synthesize retryTimers=_retryTimers - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                              //@synthesize disabled=_disabled - In the implementation block
@property (assign,nonatomic) BOOL retryOnErrors;                                           //@synthesize retryOnErrors=_retryOnErrors - In the implementation block
@property (assign,nonatomic) unsigned long long maxBytesPerIndexingBatch;                  //@synthesize maxBytesPerIndexingBatch=_maxBytesPerIndexingBatch - In the implementation block
@property (nonatomic,readonly) NSArray * dataSources; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedIndexer;
-(id)init;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(void)addDataSource:(id)arg1 ;
-(void)removeDataSource:(id)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(NSArray *)dataSources;
-(void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg2 ;
-(void)deleteAllSearchableItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)isDisabled;
-(void)dataSourceDidChange:(id)arg1 ;
-(BOOL)isObservingChanges;
-(void)startObservingChanges;
-(CSSearchableIndex *)searchableIndex;
-(void)setIndexingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)indexingQueue;
-(void)setDataSourcesByIdentifier:(NSDictionary *)arg1 ;
-(void)processChanges;
-(void)setChangeProcessingDelayer:(ICSelectorDelayer *)arg1 ;
-(void)setObservingChanges:(BOOL)arg1 ;
-(void)setRetryTimers:(NSMutableDictionary *)arg1 ;
-(void)setRetryOnErrors:(BOOL)arg1 ;
-(void)setMaxBytesPerIndexingBatch:(unsigned long long)arg1 ;
-(void)stopObservingChanges;
-(NSDictionary *)dataSourcesByIdentifier;
-(ICSelectorDelayer *)changeProcessingDelayer;
-(id)pendingReindexingOperation;
-(unsigned long long)maxBytesPerIndexingBatch;
-(BOOL)retryOnErrors;
-(void)retrySelector:(SEL)arg1 ;
-(void)clearRetryForSelector:(SEL)arg1 ;
-(void)reindexAllSearchableItemsInIndex:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finishRemainingOperationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)retryTimers;
-(void)clearObjectIDsToProcess;
-(void)reindexSearchableItemsWithObjectIDURIs:(id)arg1 inIndex:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)reindexAllSearchableItemsInIndex;
-(id)objectsDictionaryForSearchableItems:(id)arg1 inContexts:(id)arg2 ;
-(id)objectsForSearchableItems:(id)arg1 inContexts:(id)arg2 ;
-(id)dataSourceWithIdentifier:(id)arg1 ;
-(id)objectForSearchableItem:(id)arg1 context:(id)arg2 ;
-(id)newContextsForAllDataSources;
-(void)reindexAllSearchableItemsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelIndexingOperationsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)reindexSearchableItemsWithObjectIDURIs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)objectForManagedObjectIDURI:(id)arg1 inContexts:(id)arg2 ;
-(void)setSearchableIndex:(CSSearchableIndex *)arg1 ;
@end
