/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIPlistMediaDatabaseEntity.h>
#import <VideosUI/NSCopying.h>

@class VUIPlistMediaDatabaseShow, NSNumber, NSArray;

@interface VUIPlistMediaDatabaseSeason : VUIPlistMediaDatabaseEntity <NSCopying> {

	VUIPlistMediaDatabaseShow* _show;
	NSNumber* _seasonNumber;
	NSArray* _episodes;

}

@property (assign,nonatomic,__weak) VUIPlistMediaDatabaseShow * show;              //@synthesize show=_show - In the implementation block
@property (nonatomic,copy) NSNumber * seasonNumber;                                //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (nonatomic,copy) NSArray * episodes;                                     //@synthesize episodes=_episodes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)isLocal;
-(VUIPlistMediaDatabaseShow *)show;
-(NSNumber *)seasonNumber;
-(void)setSeasonNumber:(NSNumber *)arg1 ;
-(void)setShow:(VUIPlistMediaDatabaseShow *)arg1 ;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(NSArray *)episodes;
-(void)setEpisodes:(NSArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 show:(id)arg2 ;
-(id)episodeForIdentifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 show:(id)arg2 ;
@end

