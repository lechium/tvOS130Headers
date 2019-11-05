/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:47 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <locationd/NSCopying.h>

@class NSData;

@interface ALCMWorkoutEvent : PBCodable <NSCopying> {

	double _endTime;
	double _startTime;
	int _locationType;
	NSData* _sessionId;
	int _workoutEvent;
	int _workoutType;
	SCD_Struct_AL5 _has;

}

@property (assign,nonatomic) int workoutEvent;                  //@synthesize workoutEvent=_workoutEvent - In the implementation block
@property (assign,nonatomic) double startTime;                  //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasEndTime; 
@property (assign,nonatomic) double endTime;                    //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) BOOL hasWorkoutType; 
@property (assign,nonatomic) int workoutType;                   //@synthesize workoutType=_workoutType - In the implementation block
@property (assign,nonatomic) BOOL hasLocationType; 
@property (assign,nonatomic) int locationType;                  //@synthesize locationType=_locationType - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSData * sessionId;                //@synthesize sessionId=_sessionId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(double)startTime;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocationType:(int)arg1 ;
-(void)setHasLocationType:(BOOL)arg1 ;
-(BOOL)hasLocationType;
-(int)locationType;
-(void)setSessionId:(NSData *)arg1 ;
-(BOOL)hasSessionId;
-(NSData *)sessionId;
-(void)setWorkoutType:(int)arg1 ;
-(int)workoutType;
-(void)setHasWorkoutType:(BOOL)arg1 ;
-(BOOL)hasWorkoutType;
-(void)setHasEndTime:(BOOL)arg1 ;
-(BOOL)hasEndTime;
-(void)setWorkoutEvent:(int)arg1 ;
-(int)workoutEvent;
-(id)workoutEventAsString:(int)arg1 ;
-(int)StringAsWorkoutEvent:(id)arg1 ;
-(id)workoutTypeAsString:(int)arg1 ;
-(int)StringAsWorkoutType:(id)arg1 ;
-(id)locationTypeAsString:(int)arg1 ;
-(int)StringAsLocationType:(id)arg1 ;
@end
