/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKitCore/UIScrollView.h>

@interface PLImageScrollView : UIScrollView {

	BOOL _adjustZoomScaleAfterRotation;

}

@property (assign,nonatomic) BOOL adjustZoomScaleAfterRotation;              //@synthesize adjustZoomScaleAfterRotation=_adjustZoomScaleAfterRotation - In the implementation block
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_centerContentIfNecessary;
-(void)willAnimateRotationToInterfaceOrientation:(id)arg1 ;
-(BOOL)adjustZoomScaleAfterRotation;
-(void)setAdjustZoomScaleAfterRotation:(BOOL)arg1 ;
@end
