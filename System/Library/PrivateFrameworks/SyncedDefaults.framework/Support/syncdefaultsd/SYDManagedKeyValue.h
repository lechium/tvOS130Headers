/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSData, NSDate, SYDManagedStore;

@interface SYDManagedKeyValue : NSManagedObject

@property (nonatomic,retain) NSString * key; 
@property (nonatomic,retain) NSData * plistDataValue; 
@property (nonatomic,retain) NSDate * valueModificationDate; 
@property (nonatomic,retain) NSString * recordName; 
@property (nonatomic,retain) NSData * serverSystemFieldsRecordData; 
@property (nonatomic,retain) SYDManagedStore * store; 
@property (nonatomic,copy) id value; 
-(id)value;
-(void)setValue:(id)arg1 ;
@end
