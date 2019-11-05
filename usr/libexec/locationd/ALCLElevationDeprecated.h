/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:45 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <locationd/NSCopying.h>

@interface ALCLElevationDeprecated : PBCodable <NSCopying> {

	unsigned _elevationAscended;
	unsigned _elevationDescended;
	int _gradeType;
	float _verticalSpeed;
	SCD_Struct_AL5 _has;

}

@property (assign,nonatomic) unsigned elevationAscended;               //@synthesize elevationAscended=_elevationAscended - In the implementation block
@property (assign,nonatomic) BOOL hasElevationDescended; 
@property (assign,nonatomic) unsigned elevationDescended;              //@synthesize elevationDescended=_elevationDescended - In the implementation block
@property (assign,nonatomic) BOOL hasGradeType; 
@property (assign,nonatomic) int gradeType;                            //@synthesize gradeType=_gradeType - In the implementation block
@property (assign,nonatomic) BOOL hasVerticalSpeed; 
@property (assign,nonatomic) float verticalSpeed;                      //@synthesize verticalSpeed=_verticalSpeed - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)elevationAscended;
-(unsigned)elevationDescended;
-(int)gradeType;
-(void)setElevationDescended:(unsigned)arg1 ;
-(void)setHasElevationDescended:(BOOL)arg1 ;
-(BOOL)hasElevationDescended;
-(void)setGradeType:(int)arg1 ;
-(void)setHasGradeType:(BOOL)arg1 ;
-(BOOL)hasGradeType;
-(id)gradeTypeAsString:(int)arg1 ;
-(int)StringAsGradeType:(id)arg1 ;
-(void)setVerticalSpeed:(float)arg1 ;
-(void)setHasVerticalSpeed:(BOOL)arg1 ;
-(BOOL)hasVerticalSpeed;
-(float)verticalSpeed;
-(void)setElevationAscended:(unsigned)arg1 ;
@end
