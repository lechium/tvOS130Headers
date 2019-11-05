/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
#import <OpusMarimbaProducer/NSCopying.h>
#import <OpusMarimbaProducer/MPFilterSupport.h>
#import <OpusMarimbaProducer/MPAnimationSupport.h>

@protocol MPEffectSupport;
@class MPFrame, NSMutableDictionary, NSString, MPLayerGroup, NSMutableArray, MCSlide, NSObject;

@interface MPSlide : NSObject <NSCopying, MPFilterSupport, MPAnimationSupport> {

	MPFrame* _frame;
	NSMutableDictionary* _attributes;
	NSString* _path;
	MPLayerGroup* _layerGroup;
	NSMutableArray* _filters;
	NSMutableDictionary* _animationPaths;
	MCSlide* _slide;
	NSObject*<MPEffectSupport> _parent;
	double _startTime;
	double _duration;
	double _audioFadeInDuration;
	double _audioFadeOutDuration;
	double _audioDuckInDuration;
	double _audioDuckOutDuration;
	double _audioDuckLevel;
	double _scale;
	double _rotation;
	CGPoint _center;
	double _audioVolume;
	NSString* _sizingMode;
	unsigned long long _mediaType;
	BOOL _isSecondary;
	BOOL _mirrorToDuplicatePaths;
	double _cachedShowTime;
	double _cachedShowDuration;
	CGSize _cachedSize;

}

@property (nonatomic,retain) MPFrame * frame; 
@property (nonatomic,copy) NSString * path; 
@property (nonatomic,copy) NSString * absolutePath; 
@property (nonatomic,retain) MPLayerGroup * layerGroup; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double audioVolume; 
@property (assign,nonatomic) double audioFadeInDuration; 
@property (assign,nonatomic) double audioFadeOutDuration; 
@property (assign,nonatomic) double audioDuckInDuration; 
@property (assign,nonatomic) double audioDuckOutDuration; 
@property (assign,nonatomic) double audioDuckLevel; 
@property (nonatomic,copy) NSString * sizingMode; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double rotation; 
+(id)slideWithPath:(id)arg1 ;
+(id)slide;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)finalize;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(double)startTime;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(void)cleanup;
-(void)setStartTime:(double)arg1 ;
-(long long)index;
-(void)dump;
-(double)scale;
-(double)duration;
-(void)setScale:(double)arg1 ;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(void)setDuration:(double)arg1 ;
-(MPFrame *)frame;
-(void)setFrame:(MPFrame *)arg1 ;
-(id)action;
-(id)filters;
-(CGPoint)center;
-(void)setCenter:(CGPoint)arg1 ;
-(double)aspectRatio;
-(double)maxDuration;
-(void)setMediaType:(unsigned long long)arg1 ;
-(void)setAbsolutePath:(NSString *)arg1 ;
-(NSString *)absolutePath;
-(void)addFilter:(id)arg1 ;
-(double)audioVolume;
-(void)setAudioVolume:(double)arg1 ;
-(void)addFilters:(id)arg1 ;
-(BOOL)hasMovie;
-(BOOL)isSecondary;
-(double)audioFadeOutDuration;
-(void)setAudioFadeOutDuration:(double)arg1 ;
-(void)setAudioFadeInDuration:(double)arg1 ;
-(double)audioFadeInDuration;
-(id)parentDocument;
-(void)copyVars:(id)arg1 ;
-(void)duplicateAnimationPaths;
-(id)fullDebugLog;
-(id)animationPaths;
-(void)copyAnimationPaths:(id)arg1 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(id)keyframedAnimationPathForKey:(id)arg1 ;
-(void)setKeyframedAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(id)parentEffect;
-(long long)liveIndex;
-(void)setUserInfoAttribute:(id)arg1 forKey:(id)arg2 ;
-(id)userInfoAttributeForKey:(id)arg1 ;
-(void)setAudioDuckInDuration:(double)arg1 ;
-(void)setAudioDuckOutDuration:(double)arg1 ;
-(void)setAudioDuckLevel:(double)arg1 ;
-(double)showTime;
-(void)setMirrorToDuplicatePaths:(BOOL)arg1 ;
-(id)nearestLayer;
-(void)setSizingMode:(NSString *)arg1 ;
-(NSString *)sizingMode;
-(void)copyFilters:(id)arg1 ;
-(void)setSlide:(id)arg1 ;
-(id)slide;
-(void)setIsSecondary:(BOOL)arg1 ;
-(void)insertFilters:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeFiltersAtIndices:(id)arg1 ;
-(void)removeAllFilters;
-(void)moveFiltersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(BOOL)isBreakInDocument:(id)arg1 ;
-(id)scriptingAnimations;
-(void)setScriptingAnimations:(id)arg1 ;
-(void)resetCachedTimes;
-(void)copyLayerGroup:(id)arg1 ;
-(void)copyFrame:(id)arg1 ;
-(void)setLayerGroup:(MPLayerGroup *)arg1 ;
-(BOOL)determineShowTime:(double*)arg1 showDuration:(double*)arg2 ;
-(double)showDuration;
-(double)showDisplayTime;
-(id)initWithLayerGroup:(id)arg1 ;
-(MPLayerGroup *)layerGroup;
-(double)showDisplayStartTime;
-(double)audioDuckInDuration;
-(double)audioDuckOutDuration;
-(double)audioDuckLevel;
-(id)parentSubtitleEffect;
-(BOOL)needsStyleUpdateOnSlideChange;
-(BOOL)needsTimingUpdateOnSlideChange;
-(double)originalAspectRatio;
-(BOOL)canZoom;
-(long long)countOfFilter;
-(id)objectInFilterAtIndex:(long long)arg1 ;
-(void)insertObject:(id)arg1 inFilterAtIndex:(long long)arg2 ;
-(void)removeObjectFromFilterAtIndex:(long long)arg1 ;
-(void)replaceObjectInFilterAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(id)scriptingFrame;
-(void)setScriptingFrame:(id)arg1 ;
@end
