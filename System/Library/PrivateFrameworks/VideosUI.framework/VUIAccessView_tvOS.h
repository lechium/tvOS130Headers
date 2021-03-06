/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <VideosUI/TVCarouselViewDataSource.h>
#import <VideosUI/TVCarouselViewDelegate.h>

@class NSArray, UILayoutGuide, UIStackView, UILabel, UIButton, _TVCarouselView, UIView, NSString;

@interface VUIAccessView_tvOS : UIView <TVCarouselViewDataSource, TVCarouselViewDelegate> {

	NSArray* _apps;
	UILayoutGuide* _contentGuide;
	UIStackView* _contentStack;
	UILabel* _titleLabel;
	UIStackView* _logoStack;
	UILabel* _bodyLabel;
	UIStackView* _seeAllButtonStack;
	UIStackView* _buttonStack;
	UIButton* _allowButton;
	UIButton* _disallowButton;
	UIButton* _nackButton;
	UIButton* _seeAllButton;
	_TVCarouselView* _carouselView;
	BOOL _didLayout;
	UIView* _privacyView;

}

@property (nonatomic,retain) UIView * privacyView;                  //@synthesize privacyView=_privacyView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)iconSize;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(void)setBody:(id)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)numberOfItemsInCarouselView:(id)arg1 ;
-(id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2 ;
-(id)_buttonWithTitleForTV:(id)arg1 textStyle:(id)arg2 ;
-(id)_buildCarousel;
-(id)_buildLogoStack;
-(id)_imageViewForIndex:(unsigned long long)arg1 ;
-(id)initWithApps:(id)arg1 ;
-(id)allowButton;
-(id)disallowButton;
-(id)seeAllButton;
-(id)nackButton;
-(id)bodyScroll;
-(void)showNackScreen;
-(UIView *)privacyView;
-(void)setPrivacyView:(UIView *)arg1 ;
-(id)_buildButtonStack;
-(id)_buildSeeAllButtonStack;
@end

