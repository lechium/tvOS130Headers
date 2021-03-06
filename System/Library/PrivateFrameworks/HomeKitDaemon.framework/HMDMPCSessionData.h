/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSSet, NSNumber, MPPlaybackArchive, NSDictionary;

@interface HMDMPCSessionData : HMFObject {

	NSSet* _mediaProfiles;
	NSNumber* _playbackStateNumber;
	NSNumber* _playbackVolumeNumber;
	MPPlaybackArchive* _playbackArchive;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,copy,readonly) NSSet * mediaProfiles;                                //@synthesize mediaProfiles=_mediaProfiles - In the implementation block
@property (nonatomic,readonly) NSNumber * playbackStateNumber;                            //@synthesize playbackStateNumber=_playbackStateNumber - In the implementation block
@property (nonatomic,readonly) NSNumber * playbackVolumeNumber;                           //@synthesize playbackVolumeNumber=_playbackVolumeNumber - In the implementation block
@property (nonatomic,readonly) MPPlaybackArchive * playbackArchive;                       //@synthesize playbackArchive=_playbackArchive - In the implementation block
-(NSDictionary *)dictionaryRepresentation;
-(NSSet *)mediaProfiles;
-(MPPlaybackArchive *)playbackArchive;
-(id)initWithMediaAction:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 profileSource:(id)arg2 ;
-(id)initWithMediaProfiles:(id)arg1 playbackState:(id)arg2 playbackVolume:(id)arg3 playbackArchive:(id)arg4 ;
-(NSNumber *)playbackStateNumber;
-(NSNumber *)playbackVolumeNumber;
@end

