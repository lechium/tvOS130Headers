/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:04 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusMarimbaProducer/OpusMarimbaProducer-Structs.h>
#import <ATVSlideshow/MPAnimationKeyframe.h>

@interface MPAnimationKeyframe2D : MPAnimationKeyframe {

	CGPoint _point;

}

@property (assign,nonatomic) CGPoint point;              //@synthesize point=_point - In the implementation block
+(id)keyframe2DWithPoint:(CGPoint)arg1 atTime:(double)arg2 ;
+(id)keyframe2DWithPoint:(CGPoint)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(id)initKeyframe2DWithPoint:(CGPoint)arg1 atTime:(double)arg2 offsetType:(unsigned long long)arg3 ;
-(id)keyframe;
@end
