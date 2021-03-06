/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOProactiveItem : PBCodable <NSCopying> {

	int _proactiveItemType;
	int _timeSinceStart;
	BOOL _deleted;
	BOOL _edited;
	BOOL _shared;
	BOOL _tapped;
	BOOL _visible;
	struct {
		unsigned has_proactiveItemType : 1;
		unsigned has_timeSinceStart : 1;
		unsigned has_deleted : 1;
		unsigned has_edited : 1;
		unsigned has_shared : 1;
		unsigned has_tapped : 1;
		unsigned has_visible : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasProactiveItemType; 
@property (assign,nonatomic) int proactiveItemType; 
@property (assign,nonatomic) BOOL hasTimeSinceStart; 
@property (assign,nonatomic) int timeSinceStart; 
@property (assign,nonatomic) BOOL hasVisible; 
@property (assign,nonatomic) BOOL visible; 
@property (assign,nonatomic) BOOL hasTapped; 
@property (assign,nonatomic) BOOL tapped; 
@property (assign,nonatomic) BOOL hasShared; 
@property (assign,nonatomic) BOOL shared; 
@property (assign,nonatomic) BOOL hasEdited; 
@property (assign,nonatomic) BOOL edited; 
@property (assign,nonatomic) BOOL hasDeleted; 
@property (assign,nonatomic) BOOL deleted; 
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
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)shared;
-(void)setShared:(BOOL)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(void)setHasShared:(BOOL)arg1 ;
-(BOOL)hasShared;
-(int)timeSinceStart;
-(void)setTimeSinceStart:(int)arg1 ;
-(void)setHasTimeSinceStart:(BOOL)arg1 ;
-(BOOL)hasTimeSinceStart;
-(int)proactiveItemType;
-(void)setProactiveItemType:(int)arg1 ;
-(void)setHasProactiveItemType:(BOOL)arg1 ;
-(BOOL)hasProactiveItemType;
-(id)proactiveItemTypeAsString:(int)arg1 ;
-(int)StringAsProactiveItemType:(id)arg1 ;
-(void)setHasVisible:(BOOL)arg1 ;
-(BOOL)hasVisible;
-(BOOL)tapped;
-(void)setTapped:(BOOL)arg1 ;
-(void)setHasTapped:(BOOL)arg1 ;
-(BOOL)hasTapped;
-(BOOL)edited;
-(void)setEdited:(BOOL)arg1 ;
-(void)setHasEdited:(BOOL)arg1 ;
-(BOOL)hasEdited;
-(BOOL)deleted;
-(void)setDeleted:(BOOL)arg1 ;
-(void)setHasDeleted:(BOOL)arg1 ;
-(BOOL)hasDeleted;
@end

