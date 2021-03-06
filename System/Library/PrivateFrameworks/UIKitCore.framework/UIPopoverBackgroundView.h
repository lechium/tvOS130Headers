/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPopoverBackgroundViewMethods.h>

@interface UIPopoverBackgroundView : UIView <UIPopoverBackgroundViewMethods> {

	BOOL __chromeHidden;

}

@property (assign,setter=_setChromeHidden:,nonatomic) BOOL _chromeHidden;              //@synthesize _chromeHidden=__chromeHidden - In the implementation block
@property (assign,nonatomic) double arrowOffset; 
@property (assign,nonatomic) unsigned long long arrowDirection; 
+(double)cornerRadius;
+(UIEdgeInsets)contentViewInsets;
+(double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)arg1 ;
+(double)arrowHeight;
+(double)arrowBase;
+(BOOL)wantsDefaultContentAppearance;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(double)_shadowOpacity;
-(long long)backgroundStyle;
-(CGSize)_shadowOffset;
-(void)layoutSubviews;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setArrowOffset:(double)arg1 ;
-(double)arrowOffset;
-(double)_shadowRadius;
-(CGRect)_contentViewFrame;
-(unsigned long long)arrowDirection;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(UIEdgeInsets)_contentViewInsets;
-(void)_setChromeHidden:(BOOL)arg1 ;
-(BOOL)_chromeHidden;
-(UIEdgeInsets)_contentViewInsetsForArrowDirection:(unsigned long long)arg1 ;
-(void)_updateChrome;
-(UIEdgeInsets)_shadowInsets;
-(id)_shadowPathForRect:(CGRect)arg1 arrowDirection:(unsigned long long)arg2 ;
-(id)_shadowPath;
-(CGRect)_backgroundContentViewFrame;
-(void)_updateShadow;
@end

