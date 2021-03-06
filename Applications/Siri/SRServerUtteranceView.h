/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:32 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Siri/Siri-Structs.h>
#import <UIKitCore/UIView.h>

@class SiriUIContentLabel, UIFont;

@interface SRServerUtteranceView : UIView {

	NSDirectionalEdgeInsets _edgeInsets;
	SiriUIContentLabel* _label;
	BOOL _chevronHasBeenShown;
	BOOL _blendEffectEnabled;

}

@property (nonatomic,retain) UIFont * font; 
@property (assign,getter=isBlendEffectEnabled,nonatomic) BOOL blendEffectEnabled; 
+(double)insertionAnimatedZPosition;
-(void)setText:(id)arg1 ;
-(UIFont *)font;
-(void)setFont:(UIFont *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)baselineOffsetFromBottom;
-(void)setAttributedText:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBlendEffectEnabled:(BOOL)arg1 ;
-(double)firstLineBaselineOffsetFromTop;
-(void)setChevronHidden:(BOOL)arg1 ;
-(BOOL)isBlendEffectEnabled;
-(BOOL)chevronHasBeenShown;
-(double)_scaledSiriCorrectionViewLeading;
@end

