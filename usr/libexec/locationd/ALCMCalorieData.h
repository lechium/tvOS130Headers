/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:44 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <locationd/NSCopying.h>

@interface ALCMCalorieData : PBCodable <NSCopying> {

	double _truthMets;
	double _userMets;
	int _activityType;
	float _metsFM;
	float _metsHR;
	float _metsWR;
	int _truthMetsSource;
	int _userMetsSource;
	BOOL _isStanding;
	SCD_Struct_AL1 _has;

}

@property (assign,nonatomic) int activityType;                     //@synthesize activityType=_activityType - In the implementation block
@property (assign,nonatomic) BOOL isStanding;                      //@synthesize isStanding=_isStanding - In the implementation block
@property (assign,nonatomic) double userMets;                      //@synthesize userMets=_userMets - In the implementation block
@property (assign,nonatomic) double truthMets;                     //@synthesize truthMets=_truthMets - In the implementation block
@property (assign,nonatomic) BOOL hasUserMetsSource; 
@property (assign,nonatomic) int userMetsSource;                   //@synthesize userMetsSource=_userMetsSource - In the implementation block
@property (assign,nonatomic) BOOL hasTruthMetsSource; 
@property (assign,nonatomic) int truthMetsSource;                  //@synthesize truthMetsSource=_truthMetsSource - In the implementation block
@property (assign,nonatomic) BOOL hasMetsHR; 
@property (assign,nonatomic) float metsHR;                         //@synthesize metsHR=_metsHR - In the implementation block
@property (assign,nonatomic) BOOL hasMetsWR; 
@property (assign,nonatomic) float metsWR;                         //@synthesize metsWR=_metsWR - In the implementation block
@property (assign,nonatomic) BOOL hasMetsFM; 
@property (assign,nonatomic) float metsFM;                         //@synthesize metsFM=_metsFM - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)activityType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setActivityType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)activityTypeAsString:(int)arg1 ;
-(int)StringAsActivityType:(id)arg1 ;
-(int)userMetsSource;
-(void)setUserMetsSource:(int)arg1 ;
-(void)setHasUserMetsSource:(BOOL)arg1 ;
-(BOOL)hasUserMetsSource;
-(id)userMetsSourceAsString:(int)arg1 ;
-(int)StringAsUserMetsSource:(id)arg1 ;
-(int)truthMetsSource;
-(void)setTruthMetsSource:(int)arg1 ;
-(void)setHasTruthMetsSource:(BOOL)arg1 ;
-(BOOL)hasTruthMetsSource;
-(id)truthMetsSourceAsString:(int)arg1 ;
-(int)StringAsTruthMetsSource:(id)arg1 ;
-(void)setMetsFM:(float)arg1 ;
-(void)setHasMetsFM:(BOOL)arg1 ;
-(BOOL)hasMetsFM;
-(double)userMets;
-(void)setUserMets:(double)arg1 ;
-(double)truthMets;
-(void)setTruthMets:(double)arg1 ;
-(float)metsFM;
-(void)setMetsHR:(float)arg1 ;
-(void)setHasMetsHR:(BOOL)arg1 ;
-(BOOL)hasMetsHR;
-(void)setMetsWR:(float)arg1 ;
-(void)setHasMetsWR:(BOOL)arg1 ;
-(BOOL)hasMetsWR;
-(BOOL)isStanding;
-(void)setIsStanding:(BOOL)arg1 ;
-(float)metsHR;
-(float)metsWR;
@end

