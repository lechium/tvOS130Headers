/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewLayout.h>

@class VUIAppleTVChannelLogoLayout, VUITextLayout, VUIButtonLayout;

@interface VUIChannelBannerLayout : TVViewLayout {

	BOOL _isSubscribed;
	BOOL _descriptionPreferredOnPhoneSizeClass;
	VUIAppleTVChannelLogoLayout* _channelLogoLayout;
	VUITextLayout* _descriptionTextLayout;
	VUITextLayout* _textLayout;
	VUITextLayout* _disclaimerTextLayout;
	VUIButtonLayout* _subscribeButtonLayout;

}

@property (assign,nonatomic) BOOL isSubscribed;                                            //@synthesize isSubscribed=_isSubscribed - In the implementation block
@property (assign,nonatomic) BOOL descriptionPreferredOnPhoneSizeClass;                    //@synthesize descriptionPreferredOnPhoneSizeClass=_descriptionPreferredOnPhoneSizeClass - In the implementation block
@property (nonatomic,retain) VUIAppleTVChannelLogoLayout * channelLogoLayout;              //@synthesize channelLogoLayout=_channelLogoLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * descriptionTextLayout;                        //@synthesize descriptionTextLayout=_descriptionTextLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * textLayout;                                   //@synthesize textLayout=_textLayout - In the implementation block
@property (nonatomic,retain) VUITextLayout * disclaimerTextLayout;                         //@synthesize disclaimerTextLayout=_disclaimerTextLayout - In the implementation block
@property (nonatomic,retain) VUIButtonLayout * subscribeButtonLayout;                      //@synthesize subscribeButtonLayout=_subscribeButtonLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(BOOL)isSubscribed;
-(void)setIsSubscribed:(BOOL)arg1 ;
-(void)setTextLayout:(VUITextLayout *)arg1 ;
-(VUITextLayout *)textLayout;
-(VUITextLayout *)descriptionTextLayout;
-(VUITextLayout *)disclaimerTextLayout;
-(VUIAppleTVChannelLogoLayout *)channelLogoLayout;
-(void)setDescriptionPreferredOnPhoneSizeClass:(BOOL)arg1 ;
-(VUIButtonLayout *)subscribeButtonLayout;
-(BOOL)descriptionPreferredOnPhoneSizeClass;
-(void)setChannelLogoLayout:(VUIAppleTVChannelLogoLayout *)arg1 ;
-(void)setDescriptionTextLayout:(VUITextLayout *)arg1 ;
-(void)setDisclaimerTextLayout:(VUITextLayout *)arg1 ;
-(void)setSubscribeButtonLayout:(VUIButtonLayout *)arg1 ;
@end
