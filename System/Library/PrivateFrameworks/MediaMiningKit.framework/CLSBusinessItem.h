/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/NSSecureCoding.h>

@class NSString, CLCircularRegion, NSArray;

@interface CLSBusinessItem : NSObject <NSSecureCoding> {

	BOOL _cached;
	NSString* _name;
	CLCircularRegion* _region;
	NSArray* _categories;
	unsigned long long _muid;
	long long _venueCapacity;
	NSArray* _businessCategories;
	NSString* _isoCountryCode;
	NSString* _geoServiceProvider;

}

@property (nonatomic,copy) NSString * isoCountryCode;                  //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,copy) NSString * geoServiceProvider;              //@synthesize geoServiceProvider=_geoServiceProvider - In the implementation block
@property (assign,nonatomic) BOOL cached;                              //@synthesize cached=_cached - In the implementation block
@property (nonatomic,retain) CLCircularRegion * region;                //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) unsigned long long muid;                  //@synthesize muid=_muid - In the implementation block
@property (assign,nonatomic) long long venueCapacity;                  //@synthesize venueCapacity=_venueCapacity - In the implementation block
@property (nonatomic,copy) NSArray * categories;                       //@synthesize categories=_categories - In the implementation block
@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSArray * businessCategories;               //@synthesize businessCategories=_businessCategories - In the implementation block
@property (nonatomic,readonly) BOOL isEnriched; 
+(BOOL)supportsSecureCoding;
+(id)_businessCategoriesFromGeoMapItems:(id)arg1 ;
+(double)_defaultRadiusForCategories:(id)arg1 ;
+(id)_regionFromMapItem:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)isoCountryCode;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(CLCircularRegion *)region;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setRegion:(CLCircularRegion *)arg1 ;
-(NSArray *)categories;
-(long long)venueCapacity;
-(void)setCategories:(NSArray *)arg1 ;
-(NSString *)geoServiceProvider;
-(BOOL)cached;
-(void)setCached:(BOOL)arg1 ;
-(BOOL)isEnriched;
-(void)setVenueCapacity:(long long)arg1 ;
-(void)setGeoServiceProvider:(NSString *)arg1 ;
-(id)initFromMapItem:(id)arg1 isoCountryCode:(id)arg2 categoryOnly:(BOOL)arg3 ;
-(id)initWithName:(id)arg1 region:(id)arg2 categories:(id)arg3 ;
-(NSArray *)businessCategories;
-(void)setBusinessCategories:(NSArray *)arg1 ;
@end
