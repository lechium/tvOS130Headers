/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel;

@interface SRStarkTableViewCell : UITableViewCell {

	BOOL _showFavoriteStar;
	UILabel* _secondaryLabel;
	UILabel* _tertiaryLabel;

}

@property (nonatomic,readonly) UILabel * secondaryLabel;              //@synthesize secondaryLabel=_secondaryLabel - In the implementation block
@property (nonatomic,readonly) UILabel * tertiaryLabel;               //@synthesize tertiaryLabel=_tertiaryLabel - In the implementation block
@property (assign,nonatomic) BOOL showFavoriteStar;                   //@synthesize showFavoriteStar=_showFavoriteStar - In the implementation block
+(double)_tableViewCellHorizontalEdgesBuffer;
+(double)_tableViewCellVetricalEdgesBuffer;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(UILabel *)secondaryLabel;
-(UILabel *)tertiaryLabel;
-(void)setShowFavoriteStar:(BOOL)arg1 ;
-(BOOL)showFavoriteStar;
@end
