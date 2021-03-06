/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:11 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet;

@interface HBCloudSyncChangeSet : NSObject {

	NSSet* _recordChangeTagSet;
	NSSet* _deletedRecordIDs;

}

@property (nonatomic,copy) NSSet * recordChangeTagSet;              //@synthesize recordChangeTagSet=_recordChangeTagSet - In the implementation block
@property (nonatomic,copy) NSSet * deletedRecordIDs;                //@synthesize deletedRecordIDs=_deletedRecordIDs - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(NSSet *)deletedRecordIDs;
-(void)setDeletedRecordIDs:(NSSet *)arg1 ;
-(id)initWithRecords:(id)arg1 deletedRecordIDs:(id)arg2 ;
-(void)setRecordChangeTagSet:(NSSet *)arg1 ;
-(NSSet *)recordChangeTagSet;
@end

