/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
#import <ATVSlideshow/MCAnimationPath.h>

@class NSMutableSet, NSArray, NSSet;

@interface MCAnimationPathKeyframed : MCAnimationPath {

	NSMutableSet* mKeyframes;
	NSArray* mCachedOrderedKeyframes;

}

@property (readonly) NSSet * keyframes; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)animationPathWithKey:(id)arg1 ;
+(double)timeForKeyframe:(id)arg1 inPlug:(id)arg2 ;
-(id)description;
-(id)init;
-(void)removeAllKeyframes;
-(id)createKeyframeWithScalar:(float)arg1 atTime:(double)arg2 offsetKind:(int)arg3 ;
-(id)createKeyframeWithFunction:(id)arg1 atTime:(double)arg2 offsetKind:(int)arg3 forDuration:(double)arg4 ;
-(NSSet *)keyframes;
-(id)createKeyframeWithPoint:(CGPoint)arg1 atTime:(double)arg2 offsetKind:(int)arg3 ;
-(id)createKeyframeWithVector:(SCD_Struct_MC24)arg1 atTime:(double)arg2 offsetKind:(int)arg3 ;
-(void)removeKeyframe:(id)arg1 ;
-(void)addKeyframe:(id)arg1 ;
-(id)createKeyframeWithScalar:(float)arg1 atTime:(double)arg2 ;
-(id)createKeyframeWithPoint:(CGPoint)arg1 atTime:(double)arg2 ;
-(id)createKeyframeWithVector:(SCD_Struct_MC24)arg1 atTime:(double)arg2 ;
-(void)demolish;
-(id)orderedKeyframesInPlug:(id)arg1 ;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(unsigned long long)countOfKeyframes;
@end

