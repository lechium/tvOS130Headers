/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UIActivityIndicatorView;

@interface PKSpinnerHeaderView : UITableViewHeaderFooterView {

	UIActivityIndicatorView* _spinner;
	BOOL _showSpinner;

}

@property (assign,nonatomic) BOOL showSpinner;              //@synthesize showSpinner=_showSpinner - In the implementation block
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)setShowSpinner:(BOOL)arg1 ;
-(BOOL)showSpinner;
@end
