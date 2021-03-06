/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOPlace, NSString, GEOMapRegion;

@interface GEOMapItemAdditionalPlaceInfo : NSObject {

	GEOPlace* _place;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) int placeType; 
@property (nonatomic,readonly) double areaInMeters; 
@property (nonatomic,readonly) SCD_Struct_GE33 coordinate; 
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
-(NSString *)name;
-(SCD_Struct_GE33)coordinate;
-(int)placeType;
-(GEOMapRegion *)mapRegion;
-(id)initWithPlace:(id)arg1 ;
-(id)initWithName:(id)arg1 placeType:(int)arg2 areaInMeters:(double)arg3 ;
-(double)areaInMeters;
@end

