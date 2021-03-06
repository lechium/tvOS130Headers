/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface WLKPlayEvent : NSObject {

	BOOL _played;
	NSString* _bundleID;
	NSString* _channelID;
	NSString* _externalPlayableID;
	NSString* _showID;
	double _elapsedTime;
	double _duration;
	NSDate* _occurrenceDate;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                        //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * channelID;                       //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalPlayableID;              //@synthesize externalPlayableID=_externalPlayableID - In the implementation block
@property (nonatomic,copy,readonly) NSString * showID;                          //@synthesize showID=_showID - In the implementation block
@property (getter=isPlayed,nonatomic,readonly) BOOL played;                     //@synthesize played=_played - In the implementation block
@property (nonatomic,readonly) double elapsedTime;                              //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (nonatomic,readonly) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSDate * occurrenceDate;                    //@synthesize occurrenceDate=_occurrenceDate - In the implementation block
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleID;
-(double)duration;
-(double)elapsedTime;
-(NSDate *)occurrenceDate;
-(BOOL)isPlayed;
-(NSString *)channelID;
-(NSString *)externalPlayableID;
-(NSString *)showID;
@end

