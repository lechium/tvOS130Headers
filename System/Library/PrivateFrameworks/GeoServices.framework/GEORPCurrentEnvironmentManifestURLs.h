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

@class PBDataReader, NSString, NSMutableArray;

@interface GEORPCurrentEnvironmentManifestURLs : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE18 _readerMark;
	NSString* _environmentDisplayName;
	NSString* _environmentReleaseName;
	NSMutableArray* _urls;
	struct {
		unsigned read_environmentDisplayName : 1;
		unsigned read_environmentReleaseName : 1;
		unsigned read_urls : 1;
		unsigned wrote_environmentDisplayName : 1;
		unsigned wrote_environmentReleaseName : 1;
		unsigned wrote_urls : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasEnvironmentDisplayName; 
@property (nonatomic,retain) NSString * environmentDisplayName; 
@property (nonatomic,readonly) BOOL hasEnvironmentReleaseName; 
@property (nonatomic,retain) NSString * environmentReleaseName; 
@property (nonatomic,retain) NSMutableArray * urls; 
+(BOOL)isValid:(id)arg1 ;
+(Class)urlType;
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
-(void)_readEnvironmentDisplayName;
-(void)_readEnvironmentReleaseName;
-(void)_readUrls;
-(void)_addNoFlagsUrl:(id)arg1 ;
-(NSString *)environmentDisplayName;
-(NSString *)environmentReleaseName;
-(void)setEnvironmentDisplayName:(NSString *)arg1 ;
-(void)setEnvironmentReleaseName:(NSString *)arg1 ;
-(unsigned long long)urlsCount;
-(void)clearUrls;
-(id)urlAtIndex:(unsigned long long)arg1 ;
-(void)addUrl:(id)arg1 ;
-(BOOL)hasEnvironmentDisplayName;
-(BOOL)hasEnvironmentReleaseName;
-(NSMutableArray *)urls;
-(void)setUrls:(NSMutableArray *)arg1 ;
@end
