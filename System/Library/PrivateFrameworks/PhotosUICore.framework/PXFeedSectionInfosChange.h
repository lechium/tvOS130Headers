/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexSet, NSSet;

@interface PXFeedSectionInfosChange : NSObject {

	BOOL _shouldReload;
	NSIndexSet* _deletedIndexes;
	NSIndexSet* _insertedIndexes;
	NSIndexSet* _updatedIndexes;
	NSSet* _sectionInfosWithCommentChanges;
	NSSet* _updatedAssets;

}

@property (assign,nonatomic) BOOL shouldReload;                                   //@synthesize shouldReload=_shouldReload - In the implementation block
@property (nonatomic,retain) NSIndexSet * deletedIndexes;                         //@synthesize deletedIndexes=_deletedIndexes - In the implementation block
@property (nonatomic,retain) NSIndexSet * insertedIndexes;                        //@synthesize insertedIndexes=_insertedIndexes - In the implementation block
@property (nonatomic,retain) NSIndexSet * updatedIndexes;                         //@synthesize updatedIndexes=_updatedIndexes - In the implementation block
@property (nonatomic,retain) NSSet * sectionInfosWithCommentChanges;              //@synthesize sectionInfosWithCommentChanges=_sectionInfosWithCommentChanges - In the implementation block
@property (nonatomic,retain) NSSet * updatedAssets;                               //@synthesize updatedAssets=_updatedAssets - In the implementation block
-(NSSet *)updatedAssets;
-(void)setUpdatedAssets:(NSSet *)arg1 ;
-(BOOL)shouldReload;
-(NSIndexSet *)deletedIndexes;
-(NSIndexSet *)insertedIndexes;
-(void)setShouldReload:(BOOL)arg1 ;
-(NSIndexSet *)updatedIndexes;
-(void)setSectionInfosWithCommentChanges:(NSSet *)arg1 ;
-(void)setUpdatedIndexes:(NSIndexSet *)arg1 ;
-(void)setInsertedIndexes:(NSIndexSet *)arg1 ;
-(void)setDeletedIndexes:(NSIndexSet *)arg1 ;
-(NSSet *)sectionInfosWithCommentChanges;
@end

