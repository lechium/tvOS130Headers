/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBUnknownFields, GEOLatLng;

@interface GEOPDFeatureIdGeocodingParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned long long _featureId;
	GEOLatLng* _location;
	int _formattedAddressType;
	struct {
		unsigned has_featureId : 1;
		unsigned has_formattedAddressType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasFeatureId; 
@property (assign,nonatomic) unsigned long long featureId; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLatLng * location; 
@property (assign,nonatomic) BOOL hasFormattedAddressType; 
@property (assign,nonatomic) int formattedAddressType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOLatLng *)location;
-(void)setLocation:(GEOLatLng *)arg1 ;
-(BOOL)hasLocation;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(unsigned long long)featureId;
-(void)setFeatureId:(unsigned long long)arg1 ;
-(void)setHasFeatureId:(BOOL)arg1 ;
-(BOOL)hasFeatureId;
-(int)formattedAddressType;
-(void)setFormattedAddressType:(int)arg1 ;
-(void)setHasFormattedAddressType:(BOOL)arg1 ;
-(BOOL)hasFormattedAddressType;
-(id)formattedAddressTypeAsString:(int)arg1 ;
-(int)StringAsFormattedAddressType:(id)arg1 ;
@end

