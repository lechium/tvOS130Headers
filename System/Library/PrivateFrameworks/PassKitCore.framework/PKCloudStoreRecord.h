/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary, NSArray;

@interface PKCloudStoreRecord : NSObject {

	NSMutableDictionary* _records;
	NSDictionary* _cloudStoreSpecificKeys;

}

@property (nonatomic,copy) NSDictionary * cloudStoreSpecificKeys;              //@synthesize cloudStoreSpecificKeys=_cloudStoreSpecificKeys - In the implementation block
@property (nonatomic,readonly) NSArray * records; 
-(id)description;
-(NSArray *)records;
-(void)addRecord:(id)arg1 ;
-(id)initWithRecords:(id)arg1 ;
-(id)recordsWithRecordType:(id)arg1 ;
-(void)setCloudStoreSpecificKeys:(NSDictionary *)arg1 ;
-(NSDictionary *)cloudStoreSpecificKeys;
@end

