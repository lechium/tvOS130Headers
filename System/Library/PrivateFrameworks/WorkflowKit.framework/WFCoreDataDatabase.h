/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFDatabaseBackingStore.h>

@class NSPersistentContainer, NSManagedObjectContext, NSString, NSURL;

@interface WFCoreDataDatabase : NSObject <WFDatabaseBackingStore> {

	BOOL _transactionInProgress;
	NSPersistentContainer* _container;
	NSManagedObjectContext* _context;

}

@property (nonatomic,retain) NSManagedObjectContext * context;                 //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL transactionInProgress;                       //@synthesize transactionInProgress=_transactionInProgress - In the implementation block
@property (nonatomic,readonly) NSPersistentContainer * container;              //@synthesize container=_container - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * fileURL; 
-(BOOL)isEqual:(id)arg1 ;
-(NSPersistentContainer *)container;
-(NSURL *)fileURL;
-(NSManagedObjectContext *)context;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(void)refresh;
-(id)syncToken;
-(void)setSyncToken:(id)arg1 ;
-(id)_syncToken;
-(id)sortedVisibleWorkflows;
-(id)logRunOfWorkflow:(id)arg1 withSource:(id)arg2 triggerID:(id)arg3 ;
-(id)allConfiguredTriggers;
-(void)setOutcome:(long long)arg1 forRunEvent:(id)arg2 ;
-(id)sortedRunEventsForTriggerID:(id)arg1 ;
-(id)createWorkflowWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)performTransactionWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(id)initWithStoreDescription:(id)arg1 error:(id*)arg2 ;
-(id)latestRunEvent;
-(id)sortedVisibleWorkflowsWithAssociatedAppBundleIdentifier:(id)arg1 ;
-(id)sortedVisibleWorkflowsWithType:(id)arg1 ;
-(void)accessStorageForDescriptor:(id)arg1 usingBlock:(/*^block*/id)arg2 withError:(id*)arg3 ;
-(void)moveReferenceFromIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(BOOL)deleteReference:(id)arg1 tombstone:(BOOL)arg2 error:(id*)arg3 ;
-(id)workflowReferenceWithName:(id)arg1 ;
-(id)duplicateReference:(id)arg1 newName:(id)arg2 error:(id*)arg3 ;
-(id)conflictingReferenceForReference:(id)arg1 ;
-(void)setConflictingReference:(id)arg1 forReference:(id)arg2 ;
-(void)setTrustedToRunScripts:(BOOL)arg1 forReference:(id)arg2 onDomain:(id)arg3 ;
-(BOOL)isReference:(id)arg1 allowedToRunOnDomain:(id)arg2 ;
-(id)currentPerWorkflowStateDataForAccessResourceWithIdentifier:(id)arg1 forReference:(id)arg2 ;
-(void)setPerWorkflowStateData:(id)arg1 forAccessResourceWithIdentifier:(id)arg2 forReference:(id)arg3 ;
-(id)accessResourceStatesForReference:(id)arg1 ;
-(void)deleteAllAccessResourceStateDataForReference:(id)arg1 ;
-(id)createTriggerWithRecord:(id)arg1 workflow:(id)arg2 error:(id*)arg3 ;
-(id)descriptorsForResult:(id)arg1 error:(id*)arg2 ;
-(BOOL)startObservingChangesForResult:(id)arg1 ;
-(id)sortedWorkflowsIncludingTombstonesAndConflicts;
-(id)sortedVisibleWorkflowsByName;
-(id)sortedRunEventsWithSource:(id)arg1 ;
-(void)clearTombstonesAndSyncState;
-(void)setWorkflowOrdering:(id)arg1 ;
-(id)referencesForWorkflowName:(id)arg1 ;
-(id)deletedWorkflows;
-(BOOL)saveIfNecessary:(id*)arg1 ;
-(id)objectForDescriptor:(id)arg1 ;
-(id)visiblePredicate;
-(id)objectOfClass:(Class)arg1 withIdentifier:(id)arg2 forKey:(id)arg3 ;
-(BOOL)transactionInProgress;
-(void)setTransactionInProgress:(BOOL)arg1 ;
@end
