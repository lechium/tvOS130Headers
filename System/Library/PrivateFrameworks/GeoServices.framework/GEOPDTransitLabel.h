/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/GEOTransitLabelItem.h>
#import <GeoServices/NSCopying.h>

@class NSString, PBDataReader, PBUnknownFields, GEOPBTransitArtwork;

@interface GEOPDTransitLabel : PBCodable <GEOTransitLabelItem, NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	GEOPBTransitArtwork* _labelArtwork;
	NSString* _labelTextString;
	int _labelType;
	struct {
		unsigned has_labelType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_labelArtwork : 1;
		unsigned read_labelTextString : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_labelArtwork : 1;
		unsigned wrote_labelTextString : 1;
		unsigned wrote_labelType : 1;
	}  _flags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * labelString; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> labelArtwork; 
@property (assign,nonatomic) BOOL hasLabelType; 
@property (assign,nonatomic) int labelType; 
@property (nonatomic,readonly) BOOL hasLabelTextString; 
@property (nonatomic,retain) NSString * labelTextString; 
@property (nonatomic,readonly) BOOL hasLabelArtwork; 
@property (nonatomic,retain) GEOPBTransitArtwork * labelArtwork; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(unsigned long long)type;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(int)labelType;
-(BOOL)hasLabelType;
-(NSString *)labelTextString;
-(NSString *)labelString;
-(id<GEOTransitArtworkDataSource>)labelArtwork;
-(void)setLabelType:(int)arg1 ;
-(void)setHasLabelType:(BOOL)arg1 ;
-(id)labelTypeAsString:(int)arg1 ;
-(int)StringAsLabelType:(id)arg1 ;
-(void)_readLabelTextString;
-(void)_readLabelArtwork;
-(void)setLabelTextString:(NSString *)arg1 ;
-(void)setLabelArtwork:(id<GEOTransitArtworkDataSource>)arg1 ;
-(BOOL)hasLabelTextString;
-(BOOL)hasLabelArtwork;
@end

