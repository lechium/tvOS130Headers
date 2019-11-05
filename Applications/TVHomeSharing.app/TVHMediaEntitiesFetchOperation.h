/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:49:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVHomeSharing.app/TVHomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharing/TVHMediaEntityServerOperation.h>

@class NSArray, TVHKMediaEntityFetchRequest, TVHJSCollectionComparator;

@interface TVHMediaEntitiesFetchOperation : TVHMediaEntityServerOperation {

	NSArray* _currentMediaEntities;
	NSArray* _mediaEntities;
	NSArray* _changes;
	TVHKMediaEntityFetchRequest* _fetchRequest;
	TVHJSCollectionComparator* _comparator;

}

@property (nonatomic,copy) TVHKMediaEntityFetchRequest * fetchRequest;              //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,retain) TVHJSCollectionComparator * comparator;                //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,copy) NSArray * mediaEntities;                                 //@synthesize mediaEntities=_mediaEntities - In the implementation block
@property (nonatomic,copy) NSArray * changes;                                       //@synthesize changes=_changes - In the implementation block
@property (nonatomic,copy) NSArray * currentMediaEntities;                          //@synthesize currentMediaEntities=_currentMediaEntities - In the implementation block
-(TVHJSCollectionComparator *)comparator;
-(NSArray *)changes;
-(TVHKMediaEntityFetchRequest *)fetchRequest;
-(void)setFetchRequest:(TVHKMediaEntityFetchRequest *)arg1 ;
-(void)setComparator:(TVHJSCollectionComparator *)arg1 ;
-(void)executionDidBegin;
-(void)setChanges:(NSArray *)arg1 ;
-(NSArray *)currentMediaEntities;
-(NSArray *)mediaEntities;
-(void)setCurrentMediaEntities:(NSArray *)arg1 ;
-(void)setMediaEntities:(NSArray *)arg1 ;
-(void)_handleFetchResponse:(id)arg1 ;
-(id)initWithMediaEntityServer:(id)arg1 request:(id)arg2 appContext:(id)arg3 ;
@end
