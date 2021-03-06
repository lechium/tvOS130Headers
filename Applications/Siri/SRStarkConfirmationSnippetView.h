/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Siri/Siri-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SRStarkConfirmationSnippetViewDelegate;
@class NSArray, NSNumber, AFAnalyticsTurnBasedInstrumentationContext, UIView, UIFocusContainerGuide, UILabel;

@interface SRStarkConfirmationSnippetView : UIView {

	id<SRStarkConfirmationSnippetViewDelegate> _delegate;
	NSArray* _confirmationButtons;
	double _confirmationButtonYOrigin;
	NSNumber* _buttonHeight;
	NSNumber* _buttonWidth;
	AFAnalyticsTurnBasedInstrumentationContext* _currentTurnContext;
	UIView* _progressView;
	UIFocusContainerGuide* _confirmationButtonsFocusContainerGuide;
	UILabel* _confirmationTitleLabel;
	UILabel* _confirmationDescriptionLabel;
	unsigned long long _style;
	UIView* _systemStyleBackgroundView;

}

@property (assign,nonatomic,__weak) id<SRStarkConfirmationSnippetViewDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=_confirmationButtonYOrigin,nonatomic) double confirmationButtonYOrigin;                                      //@synthesize confirmationButtonYOrigin=_confirmationButtonYOrigin - In the implementation block
@property (nonatomic,retain) NSNumber * buttonHeight;                                                                                 //@synthesize buttonHeight=_buttonHeight - In the implementation block
@property (nonatomic,retain) NSNumber * buttonWidth;                                                                                  //@synthesize buttonWidth=_buttonWidth - In the implementation block
@property (getter=_currentTurnContext,nonatomic,retain) AFAnalyticsTurnBasedInstrumentationContext * currentTurnContext;              //@synthesize currentTurnContext=_currentTurnContext - In the implementation block
@property (nonatomic,retain) UIView * progressView;                                                                                   //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIFocusContainerGuide * confirmationButtonsFocusContainerGuide;                                          //@synthesize confirmationButtonsFocusContainerGuide=_confirmationButtonsFocusContainerGuide - In the implementation block
@property (nonatomic,copy) UILabel * confirmationTitleLabel;                                                                          //@synthesize confirmationTitleLabel=_confirmationTitleLabel - In the implementation block
@property (nonatomic,copy) UILabel * confirmationDescriptionLabel;                                                                    //@synthesize confirmationDescriptionLabel=_confirmationDescriptionLabel - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                                                                //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIView * systemStyleBackgroundView;                                                                      //@synthesize systemStyleBackgroundView=_systemStyleBackgroundView - In the implementation block
@property (nonatomic,readonly) NSArray * confirmationButtons;                                                                         //@synthesize confirmationButtons=_confirmationButtons - In the implementation block
-(id<SRStarkConfirmationSnippetViewDelegate>)delegate;
-(void)setDelegate:(id<SRStarkConfirmationSnippetViewDelegate>)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(UIView *)progressView;
-(void)setProgressView:(UIView *)arg1 ;
-(NSNumber *)buttonHeight;
-(void)setButtonHeight:(NSNumber *)arg1 ;
-(NSNumber *)buttonWidth;
-(void)setCurrentTurnContext:(AFAnalyticsTurnBasedInstrumentationContext *)arg1 ;
-(NSArray *)confirmationButtons;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 description:(id)arg3 style:(unsigned long long)arg4 confirmationButtons:(id)arg5 delegate:(id)arg6 currentTurnContext:(id)arg7 ;
-(id)_currentTurnContext;
-(void)enableReadAgainButton;
-(void)confirmationButton:(id)arg1 tappedWithHandler:(/*^block*/id)arg2 ;
-(void)setConfirmationButtonYOrigin:(double)arg1 ;
-(double)_confirmationButtonYOrigin;
-(UILabel *)confirmationTitleLabel;
-(UILabel *)confirmationDescriptionLabel;
-(void)_updateFocusGuideFrameForButtons:(id)arg1 ;
-(UIFocusContainerGuide *)confirmationButtonsFocusContainerGuide;
-(double)_confirmationButtonYOriginInBounds:(CGRect)arg1 ;
-(BOOL)_textWrapsInButton:(id)arg1 forWidth:(double)arg2 ;
-(void)setButtonWidth:(NSNumber *)arg1 ;
-(void)setConfirmationButtonsFocusContainerGuide:(UIFocusContainerGuide *)arg1 ;
-(void)setConfirmationTitleLabel:(UILabel *)arg1 ;
-(void)setConfirmationDescriptionLabel:(UILabel *)arg1 ;
-(UIView *)systemStyleBackgroundView;
-(void)setSystemStyleBackgroundView:(UIView *)arg1 ;
@end

