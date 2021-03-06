/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/itunescloudd-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <itunescloudd/NSCopying.h>

@class NSString;

@interface ICAppleMusicAPITokenRequest : PBRequest <NSCopying> {

	NSString* _bagProfile;
	NSString* _bagProfileVersion;
	NSString* _clientIdentifier;
	NSString* _clientVersion;
	BOOL _shouldIgnoreUserTokenCache;
	SCD_Struct_IC1 _has;

}

@property (nonatomic,readonly) BOOL hasClientIdentifier; 
@property (nonatomic,retain) NSString * clientIdentifier;                     //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasClientVersion; 
@property (nonatomic,retain) NSString * clientVersion;                        //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasBagProfile; 
@property (nonatomic,retain) NSString * bagProfile;                           //@synthesize bagProfile=_bagProfile - In the implementation block
@property (nonatomic,readonly) BOOL hasBagProfileVersion; 
@property (nonatomic,retain) NSString * bagProfileVersion;                    //@synthesize bagProfileVersion=_bagProfileVersion - In the implementation block
@property (assign,nonatomic) BOOL hasShouldIgnoreUserTokenCache; 
@property (assign,nonatomic) BOOL shouldIgnoreUserTokenCache;                 //@synthesize shouldIgnoreUserTokenCache=_shouldIgnoreUserTokenCache - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)clientIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(BOOL)hasClientIdentifier;
-(NSString *)clientVersion;
-(void)setClientVersion:(NSString *)arg1 ;
-(NSString *)bagProfile;
-(NSString *)bagProfileVersion;
-(void)setBagProfile:(NSString *)arg1 ;
-(void)setBagProfileVersion:(NSString *)arg1 ;
-(BOOL)hasClientVersion;
-(BOOL)hasBagProfile;
-(BOOL)hasBagProfileVersion;
-(void)setShouldIgnoreUserTokenCache:(BOOL)arg1 ;
-(void)setHasShouldIgnoreUserTokenCache:(BOOL)arg1 ;
-(BOOL)hasShouldIgnoreUserTokenCache;
-(BOOL)shouldIgnoreUserTokenCache;
@end

