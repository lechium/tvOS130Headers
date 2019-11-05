/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UILabel;

@interface TVPSharedPSCommentsViewCell : UICollectionViewCell {

	NSString* _commentText;
	NSString* _commentCaption;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,copy) NSString * commentText;                 //@synthesize commentText=_commentText - In the implementation block
@property (nonatomic,copy) NSString * commentCaption;              //@synthesize commentCaption=_commentCaption - In the implementation block
+(double)maxCellHeightWithTitle:(id)arg1 subtitle:(id)arg2 maxWidth:(double)arg3 ;
-(void)layoutSubviews;
-(NSString *)commentText;
-(void)setCommentText:(NSString *)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setCommentCaption:(NSString *)arg1 ;
-(NSString *)commentCaption;
@end
