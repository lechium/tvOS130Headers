/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <UIKitCore/UIView.h>

@interface SUICFauxFlamesView : UIView {

	long long _style;
	double _width;
	SCD_Struct_SU6 _sequenceAttributes;

}
+(id)_frameImagesForSequence:(SCD_Struct_SU6)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)prewarm;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)stop:(BOOL)arg1 ;
-(void)start:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)isAnimating;
-(void)didMoveToSuperview;
-(id)initWithStyle:(long long)arg1 screenSize:(long long)arg2 ;
-(void)_cleanupView;
@end
