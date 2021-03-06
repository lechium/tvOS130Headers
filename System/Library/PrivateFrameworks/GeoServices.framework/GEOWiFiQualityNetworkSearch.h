/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOLocation;

@interface GEOWiFiQualityNetworkSearch : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	NSMutableArray* _ess;
	GEOLocation* _location;
	unsigned long long _radius;
	struct {
		unsigned has_radius : 1;
		unsigned read_ess : 1;
		unsigned read_location : 1;
		unsigned wrote_ess : 1;
		unsigned wrote_location : 1;
		unsigned wrote_radius : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * ess; 
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) GEOLocation * location; 
@property (assign,nonatomic) BOOL hasRadius; 
@property (assign,nonatomic) unsigned long long radius; 
+(BOOL)isValid:(id)arg1 ;
+(Class)essType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOLocation *)location;
-(unsigned long long)radius;
-(void)setRadius:(unsigned long long)arg1 ;
-(void)setLocation:(GEOLocation *)arg1 ;
-(BOOL)hasLocation;
-(void)readAll:(BOOL)arg1 ;
-(void)_readLocation;
-(void)setHasRadius:(BOOL)arg1 ;
-(BOOL)hasRadius;
-(NSMutableArray *)ess;
-(void)setEss:(NSMutableArray *)arg1 ;
-(void)_readEss;
-(void)_addNoFlagsEss:(id)arg1 ;
-(unsigned long long)essCount;
-(void)clearEss;
-(id)essAtIndex:(unsigned long long)arg1 ;
-(void)addEss:(id)arg1 ;
@end

