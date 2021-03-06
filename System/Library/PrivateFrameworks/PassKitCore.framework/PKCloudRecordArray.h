/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:01 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface PKCloudRecordArray : NSObject <NSSecureCoding> {

	NSMutableArray* _cloudRecords;

}

@property (nonatomic,readonly) NSArray * cloudRecords; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)allItems;
-(void)addValuesFromCloudRecordArray:(id)arg1 ;
-(NSArray *)cloudRecords;
-(void)addCloudRecord:(id)arg1 ;
-(id)_descriptionWithDetailedOutput:(BOOL)arg1 includeItem:(BOOL)arg2 ;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(id)filteredCloudRecordArrayWithPredicate:(id)arg1 ;
-(id)allRecordNames;
@end

