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

@interface GEOPDRigMetrics : PBCodable <NSCopying> {

	SCD_Struct_GE20* _occlusionScores;

}

@property (nonatomic,readonly) unsigned long long occlusionScoresCount; 
@property (nonatomic,readonly) unsigned* occlusionScores; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(unsigned long long)occlusionScoresCount;
-(void)clearOcclusionScores;
-(unsigned)occlusionScoreAtIndex:(unsigned long long)arg1 ;
-(void)addOcclusionScore:(unsigned)arg1 ;
-(unsigned*)occlusionScores;
-(void)setOcclusionScores:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end
