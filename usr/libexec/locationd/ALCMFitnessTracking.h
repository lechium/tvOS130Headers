/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:48 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <locationd/NSCopying.h>

@interface ALCMFitnessTracking : PBCodable <NSCopying> {

	int _powerSource;
	BOOL _fitnessTrackingEnabled;
	SCD_Struct_AL2 _has;

}

@property (assign,nonatomic) BOOL fitnessTrackingEnabled;              //@synthesize fitnessTrackingEnabled=_fitnessTrackingEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasPowerSource; 
@property (assign,nonatomic) int powerSource;                          //@synthesize powerSource=_powerSource - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setPowerSource:(int)arg1 ;
-(int)powerSource;
-(void)setHasPowerSource:(BOOL)arg1 ;
-(BOOL)hasPowerSource;
-(id)powerSourceAsString:(int)arg1 ;
-(int)StringAsPowerSource:(id)arg1 ;
-(BOOL)fitnessTrackingEnabled;
-(void)setFitnessTrackingEnabled:(BOOL)arg1 ;
@end

