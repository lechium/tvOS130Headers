/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIAnimation.h>

@class CABasicAnimation;

@interface UIScrollViewScrollAnimation : UIAnimation {

	CGPoint _originalOffset;
	CGPoint _targetOffset;
	double _accuracy;
	BOOL _adjustsForContentOffsetDelta;
	CABasicAnimation* _customAnimation;

}
-(void)dealloc;
-(void)setProgress:(float)arg1 ;
-(float)progressForFraction:(float)arg1 ;
-(void)adjustForContentOffsetDelta:(CGPoint)arg1 ;
@end
