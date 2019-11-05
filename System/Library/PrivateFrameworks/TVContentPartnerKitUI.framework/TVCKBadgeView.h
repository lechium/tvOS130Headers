/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UILabel, UIImageView;

@interface TVCKBadgeView : UIView {

	NSString* _badgeValue;
	long long _lineBreakMode;
	UILabel* _label;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UILabel * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) NSString * badgeValue;                  //@synthesize badgeValue=_badgeValue - In the implementation block
@property (assign,nonatomic) long long lineBreakMode;              //@synthesize lineBreakMode=_lineBreakMode - In the implementation block
+(id)_badgeImage;
+(CGSize)_badgeImageSize;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(NSString *)badgeValue;
-(void)setBadgeValue:(NSString *)arg1 ;
-(long long)lineBreakMode;
-(void)setLineBreakMode:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(void)setImageView:(UIImageView *)arg1 ;
@end
