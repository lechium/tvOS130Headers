/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/NSCopying.h>
#import <GeoServices/NSSecureCoding.h>

@interface GEOFeatureStyleAttributes : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_GE167* v;
	GEOFeatureStyleAttributes* _sharedAttributes;
	SCD_Struct_GE168* extAttrs;
	unsigned char countExtAttrs;
	unsigned char countAttrs;
	char featureType;

}
+(id)styleAttributesForSearchResultWithAttributes:(id)arg1 ;
+(id)annotationViewProvidedCustomFeatureStyleAttributes;
+(id)styleAttributesForCalloutWithAttributes:(id)arg1 ;
+(id)styleAttributesForTrafficCameraType:(long long)arg1 isAboveThreshold:(BOOL)arg2 ;
+(id)styleAttributesForTrafficIncidentType:(long long)arg1 ;
+(id)styleAttributesForDraggingWithAttributes:(id)arg1 ;
+(id)markerStyleAttributes;
+(id)genericServiceStyleAttributes;
+(id)trainStationStyleAttributes;
+(id)genericMarkerStyleAttributes;
+(id)styleAttributesForTransitType:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)addressMarkerStyleAttributes;
+(id)airportStyleAttributes;
+(id)searchResultStyleAttributes;
+(id)homeStyleAttributes;
+(id)workStyleAttributes;
+(id)transitStationStyleAttributes;
+(id)parkedCarStyleAttributes;
+(id)restaurantStyleAttributes;
+(id)calendarEventStyleAttributes;
+(id)frequentLocationStyleAttributes;
+(id)gasStationStyleAttributes;
+(id)evChargerStyleAttributes;
+(id)hotelStyleAttributes;
+(id)carRentalStyleAttributes;
+(id)ticketedEventStyleAttributes;
+(id)inviteStyleAttributes;
+(id)styleAttributesForPlace:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithAttributes:(unsigned)arg1 ;
-(BOOL)isLabelPOI;
-(void)replaceAttributes:(const SCD_Struct_GE167*)arg1 count:(unsigned)arg2 ;
-(int)poiType;
-(id)copyWithAirportStyleAttributes;
-(BOOL)isLandmarkPOI;
-(BOOL)isSearchResult;
-(BOOL)isTransit;
-(void)removeKey:(unsigned)arg1 ;
-(BOOL)isDrivable;
-(BOOL)isWalkable;
-(BOOL)isRoadPedestrianNavigable;
-(int)walkableSide;
-(int)sidewalkSide;
-(BOOL)isTunnel;
-(BOOL)isBridge;
-(BOOL)isRailway;
-(int)rampType;
-(char)featureType;
-(int)drivingSide;
-(BOOL)hasDrivingSide;
-(id)initWithPlaceDataStyleAttributes:(id)arg1 ;
-(id)initWithPlaceStyleAttributes:(id)arg1 ;
-(unsigned)lineType;
-(void)sort;
-(void)setExtAttributes:(const SCD_Struct_GE168*)arg1 count:(unsigned)arg2 ;
-(id)initWithSharedStyleAttributes:(id)arg1 extAttributes:(const SCD_Struct_GE168*)arg2 extAttributeCount:(unsigned char)arg3 ;
-(id)initWithStyleAttributes:(id)arg1 ;
-(id)initWithGEOStyleAttributes:(id)arg1 ;
-(BOOL)isSuperset:(id)arg1 ;
-(BOOL)hasAttributes;
-(BOOL)isRamp;
-(int)rampDirection;
-(BOOL)isFreeway;
-(BOOL)isBorder;
-(BOOL)shouldSuppress3DBuildingStrokes;
@end
