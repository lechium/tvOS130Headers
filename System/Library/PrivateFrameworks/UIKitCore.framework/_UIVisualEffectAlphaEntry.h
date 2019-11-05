/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@interface _UIVisualEffectAlphaEntry : _UIVisualEffectViewEntry {

	double _initialAlpha;
	double _finalAlpha;

}
-(id)description;
-(void)applyRequestedEffectToView:(id)arg1 ;
-(void)applyIdentityEffectToView:(id)arg1 ;
-(void)removeEffectFromView:(id)arg1 ;
-(void)addEffectToView:(id)arg1 ;
-(id)copyForTransitionToEffect:(id)arg1 ;
-(id)copyForTransitionOut;
-(id)initWithInitialAlpha:(double)arg1 finalAlpha:(double)arg2 ;
@end
