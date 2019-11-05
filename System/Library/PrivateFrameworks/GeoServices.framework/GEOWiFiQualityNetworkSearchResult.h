/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class NSMutableArray;

@interface GEOWiFiQualityNetworkSearchResult : PBCodable <NSCopying> {

	NSMutableArray* _matches;

}

@property (nonatomic,retain) NSMutableArray * matches; 
+(BOOL)isValid:(id)arg1 ;
+(Class)matchesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)addMatches:(id)arg1 ;
-(unsigned long long)matchesCount;
-(void)clearMatches;
-(id)matchesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)matches;
-(void)setMatches:(NSMutableArray *)arg1 ;
@end
