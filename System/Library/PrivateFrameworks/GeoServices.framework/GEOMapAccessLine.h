/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapLine.h>

@class GEOMapAccess, NSString;

@interface GEOMapAccessLine : NSObject <GEOMapLine> {

	GEOMapAccess* _map;
	shared_ptr<geo::MapEdge>* _edge;
	vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D> >* _coordinates;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) SCD_Struct_GE33* coordinates; 
@property (nonatomic,readonly) double length; 
-(double)length;
-(SCD_Struct_GE33*)coordinates;
-(unsigned long long)coordinateCount;
-(id)initWithMap:(id)arg1 edge:(shared_ptr<geo::MapEdge>*)arg2 ;
-(double)distanceFromCoordinate:(SCD_Struct_GE33)arg1 outSegmentCoordinate:(PolylineCoordinate*)arg2 ;
@end

