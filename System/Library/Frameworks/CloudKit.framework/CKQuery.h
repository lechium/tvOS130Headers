/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/NSSecureCoding.h>
#import <CloudKit/NSCopying.h>

@class NSString, NSPredicate, NSArray;

@interface CKQuery : NSObject <NSSecureCoding, NSCopying> {

	NSString* _recordType;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;

}

@property (nonatomic,copy) NSPredicate * predicate;                //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSString * recordType;                  //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;              //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSString *)recordType;
-(void)setRecordType:(NSString *)arg1 ;
-(id)CKPropertiesDescription;
-(id)initWithRecordType:(id)arg1 predicate:(id)arg2 ;
@end
