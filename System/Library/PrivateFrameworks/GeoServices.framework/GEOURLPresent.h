/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, NSMutableArray, GEOURLOptions;

@interface GEOURLPresent : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	NSMutableArray* _items;
	GEOURLOptions* _options;
	struct {
		unsigned read_items : 1;
		unsigned read_options : 1;
		unsigned wrote_items : 1;
		unsigned wrote_options : 1;
	}  _flags;

}

@property (nonatomic,retain) NSMutableArray * items; 
@property (nonatomic,readonly) BOOL hasOptions; 
@property (nonatomic,retain) GEOURLOptions * options; 
+(Class)itemType;
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(GEOURLOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(void)setOptions:(GEOURLOptions *)arg1 ;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)dictionaryRepresentation;
-(void)addItem:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)itemsCount;
-(id)initWithDirectionsOptions:(id)arg1 ;
-(void)_readItems;
-(void)_addNoFlagsItem:(id)arg1 ;
-(void)_readOptions;
-(void)clearItems;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasOptions;
@end

