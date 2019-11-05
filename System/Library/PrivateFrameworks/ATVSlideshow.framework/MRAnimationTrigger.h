/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MRAction, NSDictionary;

@interface MRAnimationTrigger : NSObject {

	MRAction* _action;
	float _startValue;
	float _lastValue;
	NSDictionary* _animationAttributes;

}

@property (nonatomic,retain) MRAction * action;                       //@synthesize action=_action - In the implementation block
@property (assign) float startValue;                                  //@synthesize startValue=_startValue - In the implementation block
@property (assign) float lastValue;                                   //@synthesize lastValue=_lastValue - In the implementation block
@property (readonly) NSDictionary * animationAttributes;              //@synthesize animationAttributes=_animationAttributes - In the implementation block
@property (readonly) BOOL isArmed; 
-(void)dealloc;
-(MRAction *)action;
-(void)setAction:(MRAction *)arg1 ;
-(void)disarm;
-(id)initWithAction:(id)arg1 ;
-(float)lastValue;
-(void)setStartValue:(float)arg1 ;
-(float)startValue;
-(NSDictionary *)animationAttributes;
-(float)rearmIfNeededWithDefaultValue:(float)arg1 ;
-(void)setLastValue:(float)arg1 ;
-(BOOL)isArmed;
@end
