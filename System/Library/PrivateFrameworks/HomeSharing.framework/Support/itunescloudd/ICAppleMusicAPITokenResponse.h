/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/itunescloudd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <itunescloudd/NSCopying.h>

@class ICAppleMusicAPITokenError, ICAppleMusicAPITokenCollection;

@interface ICAppleMusicAPITokenResponse : PBCodable <NSCopying> {

	ICAppleMusicAPITokenError* _error;
	ICAppleMusicAPITokenCollection* _tokenCollection;

}

@property (nonatomic,readonly) BOOL hasTokenCollection; 
@property (nonatomic,retain) ICAppleMusicAPITokenCollection * tokenCollection;              //@synthesize tokenCollection=_tokenCollection - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) ICAppleMusicAPITokenError * error;                             //@synthesize error=_error - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(ICAppleMusicAPITokenError *)error;
-(void)setError:(ICAppleMusicAPITokenError *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)hasError;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(ICAppleMusicAPITokenCollection *)tokenCollection;
-(id)privacyConsciousDictionaryRepresentation;
-(id)privacyConsciousDescription;
-(void)setTokenCollection:(ICAppleMusicAPITokenCollection *)arg1 ;
-(BOOL)hasTokenCollection;
@end

