/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/ATVLegacyContentKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface _TVLLikeDislikeView : UIView {

	UIImageView* _imageView;
	UILabel* _label;
	unsigned long long _likeCount;
	unsigned long long _dislikeCount;

}

@property (assign,nonatomic) unsigned long long likeCount;                 //@synthesize likeCount=_likeCount - In the implementation block
@property (assign,nonatomic) unsigned long long dislikeCount;              //@synthesize dislikeCount=_dislikeCount - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(unsigned long long)likeCount;
-(unsigned long long)dislikeCount;
-(void)setLikeCount:(unsigned long long)arg1 ;
-(void)setDislikeCount:(unsigned long long)arg1 ;
-(void)_updateLikeDislikeDisplay;
@end
