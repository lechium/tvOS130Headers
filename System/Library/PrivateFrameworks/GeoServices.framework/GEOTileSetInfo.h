/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOTileSetInfo : PBCodable <NSCopying> {

	unsigned _count;
	int _style;
	unsigned _zoom;
	SCD_Struct_GE86 _flags;

}

@property (assign,nonatomic) BOOL hasStyle; 
@property (assign,nonatomic) int style; 
@property (assign,nonatomic) BOOL hasCount; 
@property (assign,nonatomic) unsigned count; 
@property (assign,nonatomic) BOOL hasZoom; 
@property (assign,nonatomic) unsigned zoom; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)count;
-(void)setCount:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasCount:(BOOL)arg1 ;
-(BOOL)hasCount;
-(unsigned)zoom;
-(void)setZoom:(unsigned)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)styleAsString:(int)arg1 ;
-(int)StringAsStyle:(id)arg1 ;
-(void)setHasStyle:(BOOL)arg1 ;
-(BOOL)hasStyle;
-(void)setHasZoom:(BOOL)arg1 ;
-(BOOL)hasZoom;
@end
