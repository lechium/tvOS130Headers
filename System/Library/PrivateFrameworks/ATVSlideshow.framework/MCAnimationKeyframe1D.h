/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/MCAnimationKeyframe.h>

@interface MCAnimationKeyframe1D : MCAnimationKeyframe {

	float mValue;

}

@property (assign,nonatomic) float value; 
+(id)keyframeWithScalar:(float)arg1 atTime:(double)arg2 offsetKind:(int)arg3 ;
+(id)keyframeWithScalar:(float)arg1 atTime:(double)arg2 ;
-(id)description;
-(float)value;
-(void)setValue:(float)arg1 ;
-(id)imprint;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
@end

