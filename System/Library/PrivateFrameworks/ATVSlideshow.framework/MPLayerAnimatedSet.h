/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:14 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MPLayer.h>

@class NSArray, MCContainerParallelizer;

@interface MPLayerAnimatedSet : MPLayer {

	NSArray* _animatedSets;
	MCContainerParallelizer* _layerParallelizer;

}
-(id)description;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(id)container;
-(void)cleanup;
-(void)setAudioPlaylist:(id)arg1 ;
-(void)removeEffectContainersAtIndices:(id)arg1 ;
-(void)insertEffectContainers:(id)arg1 atIndex:(long long)arg2 ;
-(void)setAnimatedSets:(id)arg1 ;
-(void)moveEffectContainersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)resetStartTimes;
-(id)animatedSets;
-(void)setLayerParallelizer:(id)arg1 ;
@end

