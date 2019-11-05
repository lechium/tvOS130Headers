/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/NSCopying.h>

@class GKPlayer;

@interface GKMultiplayerParticipant : NSObject <NSCopying> {

	long long _type;
	long long _status;
	GKPlayer* _player;
	long long _number;

}

@property (assign,nonatomic) long long type;                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long status;               //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) GKPlayer * player;              //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) long long number;               //@synthesize number=_number - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(long long)number;
-(void)setNumber:(long long)arg1 ;
-(GKPlayer *)player;
-(void)setPlayer:(GKPlayer *)arg1 ;
@end
