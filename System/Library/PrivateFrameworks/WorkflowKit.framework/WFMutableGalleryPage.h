/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFGalleryPage.h>

@class CKRecordID, NSString, NSNumber, NSArray;

@interface WFMutableGalleryPage : WFGalleryPage {

	CKRecordID* identifier;
	NSString* name;
	NSNumber* minVersion;
	NSNumber* isRoot;
	NSArray* banners;
	NSArray* collections;
	NSArray* routines;
	NSString* language;
	CKRecordID* base;
	NSArray* donations;
	NSArray* donationsGroupedByApp;

}

@property (nonatomic,copy) CKRecordID * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSNumber * minVersion; 
@property (nonatomic,copy) NSNumber * isRoot; 
@property (nonatomic,copy) NSArray * banners; 
@property (nonatomic,copy) NSArray * collections; 
@property (nonatomic,copy) NSArray * routines; 
@property (nonatomic,copy) NSArray * donations; 
@property (nonatomic,copy) NSArray * donationsGroupedByApp; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,retain) CKRecordID * base; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(CKRecordID *)identifier;
-(void)setIdentifier:(CKRecordID *)arg1 ;
-(NSNumber *)isRoot;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSArray *)collections;
-(void)setBase:(CKRecordID *)arg1 ;
-(CKRecordID *)base;
-(void)setCollections:(NSArray *)arg1 ;
-(NSNumber *)minVersion;
-(void)setMinVersion:(NSNumber *)arg1 ;
-(void)setBanners:(NSArray *)arg1 ;
-(NSArray *)banners;
-(NSArray *)routines;
-(NSArray *)donations;
-(NSArray *)donationsGroupedByApp;
-(void)setDonationsGroupedByApp:(NSArray *)arg1 ;
-(void)setDonations:(NSArray *)arg1 ;
-(void)setRoutines:(NSArray *)arg1 ;
-(void)setIsRoot:(NSNumber *)arg1 ;
@end

