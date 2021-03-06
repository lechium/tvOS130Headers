/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, NSMutableArray;

@interface GEOPDAutocompleteEntryHighlightLine : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	PBUnknownFields* _unknownFields;
	NSString* _line;
	NSMutableArray* _spans;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_line : 1;
		unsigned read_spans : 1;
		unsigned wrote_unknownFields : 1;
		unsigned wrote_line : 1;
		unsigned wrote_spans : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasLine; 
@property (nonatomic,retain) NSString * line; 
@property (nonatomic,retain) NSMutableArray * spans; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)spanType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)line;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasLine;
-(unsigned long long)spansCount;
-(NSMutableArray *)spans;
-(void)_readLine;
-(void)_readSpans;
-(void)_addNoFlagsSpan:(id)arg1 ;
-(void)setLine:(NSString *)arg1 ;
-(void)clearSpans;
-(id)spanAtIndex:(unsigned long long)arg1 ;
-(void)addSpan:(id)arg1 ;
-(void)setSpans:(NSMutableArray *)arg1 ;
@end

