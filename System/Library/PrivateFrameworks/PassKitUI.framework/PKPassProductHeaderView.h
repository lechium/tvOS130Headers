/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:08 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILabel, NSString;

@interface PKPassProductHeaderView : UITableViewHeaderFooterView {

	UILabel* _labelView;
	NSString* _headerLabelText;

}

@property (nonatomic,retain) NSString * headerLabelText;              //@synthesize headerLabelText=_headerLabelText - In the implementation block
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setHeaderLabelText:(NSString *)arg1 ;
-(NSString *)headerLabelText;
@end
