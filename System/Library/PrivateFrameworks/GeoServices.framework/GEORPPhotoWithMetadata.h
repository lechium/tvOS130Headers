/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, NSData, GEOLatLng;

@interface GEORPPhotoWithMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	double _creationDate;
	NSData* _data;
	GEOLatLng* _geotagCoordinate;
	double _geotagHorizontalAccuracy;
	double _geotagTimestamp;
	struct {
		unsigned has_creationDate : 1;
		unsigned has_geotagHorizontalAccuracy : 1;
		unsigned has_geotagTimestamp : 1;
		unsigned read_data : 1;
		unsigned read_geotagCoordinate : 1;
		unsigned wrote_creationDate : 1;
		unsigned wrote_data : 1;
		unsigned wrote_geotagCoordinate : 1;
		unsigned wrote_geotagHorizontalAccuracy : 1;
		unsigned wrote_geotagTimestamp : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasData; 
@property (nonatomic,retain) NSData * data; 
@property (assign,nonatomic) BOOL hasCreationDate; 
@property (assign,nonatomic) double creationDate; 
@property (nonatomic,readonly) BOOL hasGeotagCoordinate; 
@property (nonatomic,retain) GEOLatLng * geotagCoordinate; 
@property (assign,nonatomic) BOOL hasGeotagHorizontalAccuracy; 
@property (assign,nonatomic) double geotagHorizontalAccuracy; 
@property (assign,nonatomic) BOOL hasGeotagTimestamp; 
@property (assign,nonatomic) double geotagTimestamp; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSData *)data;
-(void)_readData;
-(void)setData:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(double)creationDate;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCreationDate:(double)arg1 ;
-(BOOL)hasData;
-(void)readAll:(BOOL)arg1 ;
-(void)_readGeotagCoordinate;
-(GEOLatLng *)geotagCoordinate;
-(void)setGeotagCoordinate:(GEOLatLng *)arg1 ;
-(void)setHasCreationDate:(BOOL)arg1 ;
-(BOOL)hasCreationDate;
-(BOOL)hasGeotagCoordinate;
-(double)geotagHorizontalAccuracy;
-(void)setGeotagHorizontalAccuracy:(double)arg1 ;
-(void)setHasGeotagHorizontalAccuracy:(BOOL)arg1 ;
-(BOOL)hasGeotagHorizontalAccuracy;
-(double)geotagTimestamp;
-(void)setGeotagTimestamp:(double)arg1 ;
-(void)setHasGeotagTimestamp:(BOOL)arg1 ;
-(BOOL)hasGeotagTimestamp;
@end
