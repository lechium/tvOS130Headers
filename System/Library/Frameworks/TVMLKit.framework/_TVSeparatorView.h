/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIColor;

@interface _TVSeparatorView : UIView {

	UIView* _line1;
	UIView* _line2;
	UIView* _separatorComponent;
	UIColor* _tintColor;
	double _lineHeight;

}

@property (assign,nonatomic,__weak) UIView * separatorComponent;              //@synthesize separatorComponent=_separatorComponent - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                             //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) double lineHeight;                               //@synthesize lineHeight=_lineHeight - In the implementation block
+(id)separatorViewWithElement:(id)arg1 existingView:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)lineHeight;
-(void)setLineHeight:(double)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(UIColor *)tintColor;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(id)preferredFocusEnvironments;
-(UIView *)separatorComponent;
-(void)setSeparatorComponent:(UIView *)arg1 ;
@end
