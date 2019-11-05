/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapAccessTransitNodeBase.h>
#import <GeoServices/GEOMapTransitHall.h>

@protocol GEOMapTransitStation;
@class NSString;

@interface GEOMapAccessTransitHall : GEOMapAccessTransitNodeBase <GEOMapTransitHall> {

	id<GEOMapTransitStation> _station;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE33 coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius; 
@property (nonatomic,readonly) SCD_Struct_GE41 boundingRect; 
@property (nonatomic,readonly) SCD_Struct_GE33* polygonPoints; 
@property (nonatomic,readonly) long long polygonPointsCount; 
@property (nonatomic,readonly) unsigned long long stationID; 
-(id)findStops:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findStation:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)stationID;
@end
