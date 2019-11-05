/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSFetchRequest, NSArray, NSManagedObjectContext;


@protocol MTFetchedResultsControllerProtocol
@property (nonatomic,readonly) NSFetchRequest * fetchRequest; 
@property (nonatomic,copy) NSArray * propertyKeys; 
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) NSArray * fetchedObjects; 
@property (assign,nonatomic,__weak) id<NSFetchedResultsControllerDelegate> delegate; 
@required
-(id<NSFetchedResultsControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSFetchRequest *)fetchRequest;
-(NSManagedObjectContext *)managedObjectContext;
-(id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4;
-(BOOL)performFetch:(id*)arg1;
-(NSArray *)fetchedObjects;
-(id)objectAtIndexPath:(id)arg1;
-(id)indexPathForObject:(id)arg1;
-(NSArray *)propertyKeys;
-(void)setPropertyKeys:(id)arg1;

@end
