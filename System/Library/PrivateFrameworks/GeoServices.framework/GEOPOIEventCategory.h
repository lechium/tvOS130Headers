/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/NSSecureCoding.h>

@class NSString, NSArray;

@interface GEOPOIEventCategory : NSObject <NSSecureCoding> {

	NSString* _category;
	NSArray* _localizedNames;

}

@property (nonatomic,readonly) NSString * category;                   //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) NSArray * localizedNames;              //@synthesize localizedNames=_localizedNames - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)poiEventCategoriesForEventCategories:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)category;
-(NSArray *)localizedNames;
-(id)initWithEventCategory:(id)arg1 ;
-(id)parsePDCategories:(id)arg1 ;
-(BOOL)isEqualToPOIEventCategory:(id)arg1 ;
-(id)initWithCategory:(id)arg1 localizedNames:(id)arg2 ;
@end
