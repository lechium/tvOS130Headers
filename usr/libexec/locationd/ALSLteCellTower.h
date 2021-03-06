/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:46 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class ALSLocation;

@interface ALSLteCellTower : PBCodable {

	int _cellID;
	ALSLocation* _location;
	int _mcc;
	int _mnc;
	int _pid;
	int _tacID;
	int _uarfcn;
	SCD_Struct_AL155 _has;

}

@property (assign,nonatomic) BOOL hasMcc; 
@property (assign,nonatomic) int mcc;                             //@synthesize mcc=_mcc - In the implementation block
@property (assign,nonatomic) BOOL hasMnc; 
@property (assign,nonatomic) int mnc;                             //@synthesize mnc=_mnc - In the implementation block
@property (assign,nonatomic) BOOL hasCellID; 
@property (assign,nonatomic) int cellID;                          //@synthesize cellID=_cellID - In the implementation block
@property (assign,nonatomic) BOOL hasTacID; 
@property (assign,nonatomic) int tacID;                           //@synthesize tacID=_tacID - In the implementation block
@property (nonatomic,readonly) BOOL hasLocation; 
@property (nonatomic,retain) ALSLocation * location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasUarfcn; 
@property (assign,nonatomic) int uarfcn;                          //@synthesize uarfcn=_uarfcn - In the implementation block
@property (assign,nonatomic) BOOL hasPid; 
@property (assign,nonatomic) int pid;                             //@synthesize pid=_pid - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasPid:(BOOL)arg1 ;
-(BOOL)hasPid;
-(ALSLocation *)location;
-(void)setLocation:(ALSLocation *)arg1 ;
-(BOOL)hasLocation;
-(int)mcc;
-(void)setMcc:(int)arg1 ;
-(int)mnc;
-(void)setMnc:(int)arg1 ;
-(void)setUarfcn:(int)arg1 ;
-(void)setHasUarfcn:(BOOL)arg1 ;
-(BOOL)hasUarfcn;
-(int)uarfcn;
-(void)setHasMcc:(BOOL)arg1 ;
-(BOOL)hasMcc;
-(void)setHasMnc:(BOOL)arg1 ;
-(BOOL)hasMnc;
-(BOOL)hasCellID;
-(int)cellID;
-(void)setCellID:(int)arg1 ;
-(BOOL)hasTacID;
-(int)tacID;
-(void)setTacID:(int)arg1 ;
-(void)setHasCellID:(BOOL)arg1 ;
-(void)setHasTacID:(BOOL)arg1 ;
@end

