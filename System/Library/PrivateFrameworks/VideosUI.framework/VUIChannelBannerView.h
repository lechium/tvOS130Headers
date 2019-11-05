/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>

@class IKViewElement, VUIChannelBannerLayout, VUIAppleTVChannelLogoView, VUIButton, VUILabel, VUIFocusableTextView, NSArray, UIView, VUISeparatorView, UIFocusContainerGuide;

@interface VUIChannelBannerView : UIView {

	IKViewElement* _viewElement;
	VUIChannelBannerLayout* _layout;
	VUIAppleTVChannelLogoView* _appleTVChannelLogoView;
	VUIButton* _subscribeButton;
	VUILabel* _disclaimerTextLabel;
	VUIFocusableTextView* _descriptionTextView;
	NSArray* _textLabels;
	UIView* _lastFocusedView;
	VUISeparatorView* _separatorView;
	UIFocusContainerGuide* _containerGuide;

}

@property (nonatomic,retain) VUISeparatorView * separatorView;                                //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) UIFocusContainerGuide * containerGuide;                          //@synthesize containerGuide=_containerGuide - In the implementation block
@property (nonatomic,retain) IKViewElement * viewElement;                                     //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain) VUIChannelBannerLayout * layout;                                 //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) VUIAppleTVChannelLogoView * appleTVChannelLogoView;              //@synthesize appleTVChannelLogoView=_appleTVChannelLogoView - In the implementation block
@property (nonatomic,retain) VUIButton * subscribeButton;                                     //@synthesize subscribeButton=_subscribeButton - In the implementation block
@property (nonatomic,retain) VUILabel * disclaimerTextLabel;                                  //@synthesize disclaimerTextLabel=_disclaimerTextLabel - In the implementation block
@property (nonatomic,retain) VUIFocusableTextView * descriptionTextView;                      //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
@property (nonatomic,retain) NSArray * textLabels;                                            //@synthesize textLabels=_textLabels - In the implementation block
@property (nonatomic,retain) UIView * lastFocusedView;                                        //@synthesize lastFocusedView=_lastFocusedView - In the implementation block
-(VUIChannelBannerLayout *)layout;
-(void)setLayout:(VUIChannelBannerLayout *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(VUISeparatorView *)separatorView;
-(void)setSeparatorView:(VUISeparatorView *)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(IKViewElement *)viewElement;
-(void)setViewElement:(IKViewElement *)arg1 ;
-(VUIFocusableTextView *)descriptionTextView;
-(void)setDescriptionTextView:(VUIFocusableTextView *)arg1 ;
-(UIView *)lastFocusedView;
-(void)setLastFocusedView:(UIView *)arg1 ;
-(UIFocusContainerGuide *)containerGuide;
-(void)setContainerGuide:(UIFocusContainerGuide *)arg1 ;
-(NSArray *)textLabels;
-(VUIAppleTVChannelLogoView *)appleTVChannelLogoView;
-(void)setAppleTVChannelLogoView:(VUIAppleTVChannelLogoView *)arg1 ;
-(VUILabel *)disclaimerTextLabel;
-(VUIButton *)subscribeButton;
-(void)setTextLabels:(NSArray *)arg1 ;
-(void)setSubscribeButton:(VUIButton *)arg1 ;
-(void)setDisclaimerTextLabel:(VUILabel *)arg1 ;
-(CGSize)_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
-(void)_layoutLabels:(id)arg1 withOrigin:(CGPoint)arg2 maxWidth:(double)arg3 ;
@end
