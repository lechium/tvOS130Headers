/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <HomeKitDaemon/NSCopying.h>

@interface AWDHomeKitRemoteSession : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	unsigned _closeReason;
	unsigned _deviceType;
	int _errorCode;
	unsigned _role;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceType; 
@property (assign,nonatomic) unsigned deviceType;                       //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) BOOL hasRole; 
@property (assign,nonatomic) unsigned role;                             //@synthesize role=_role - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasCloseReason; 
@property (assign,nonatomic) unsigned closeReason;                      //@synthesize closeReason=_closeReason - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                             //@synthesize errorCode=_errorCode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)role;
-(unsigned)closeReason;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(int)errorCode;
-(unsigned)deviceType;
-(void)setDeviceType:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setErrorCode:(int)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setRole:(unsigned)arg1 ;
-(void)setHasRole:(BOOL)arg1 ;
-(BOOL)hasRole;
-(BOOL)hasDeviceType;
-(void)setHasDeviceType:(BOOL)arg1 ;
-(void)setCloseReason:(unsigned)arg1 ;
-(void)setHasCloseReason:(BOOL)arg1 ;
-(BOOL)hasCloseReason;
@end
