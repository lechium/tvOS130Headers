/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPLazySectionedCollectionDataSource.h>

@class MPCPlayerResponse, NSIndexPath, NSString;

@interface _MPCPlayerResponseTracklistDataSource : NSObject <MPLazySectionedCollectionDataSource> {

	MPCPlayerResponse* _response;
	NSIndexPath* _playingItemIndexPath;

}

@property (nonatomic,__weak,readonly) MPCPlayerResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSIndexPath * playingItemIndexPath;                 //@synthesize playingItemIndexPath=_playingItemIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MPCPlayerResponse *)response;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSections;
-(id)itemAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(NSIndexPath *)playingItemIndexPath;
-(void)setPlayingItemIndexPath:(NSIndexPath *)arg1 ;
-(id)initWithResponse:(id)arg1 playingItemIndexPath:(id)arg2 ;
@end

