/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:19 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVPlayer;


@protocol TVPAVFPlayback <TVPPlayback>
@property (nonatomic,readonly) AVPlayer * avPlayer; 
@optional
-(void)setElapsedTime:(double)arg1 orPlaybackDate:(id)arg2 withAVKitCompletion:(/*^block*/id)arg3;

@required
-(AVPlayer *)avPlayer;
-(void)addWeakReferenceToVideoView:(id)arg1;
-(void)removeWeakReferenceToVideoView:(id)arg1;

@end

