/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol PKPassPersonalizationCellDelegate;
@class PKContact, PKPassPersonalizationCellContext, NSString;

@interface PKPassPersonalizationCell : UITableViewCell <UITextFieldDelegate> {

	PKContact* _contact;
	PKPassPersonalizationCellContext* _context;
	id<PKPassPersonalizationCellDelegate> _delegate;

}

@property (nonatomic,readonly) PKContact * contact;                                       //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) PKPassPersonalizationCellContext * context;                //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) id<PKPassPersonalizationCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_textFieldFont;
+(id)_textLabelFont;
+(double)minimumCellHeight;
+(double)textLabelWidthForText:(id)arg1 ;
-(void)dealloc;
-(id<PKPassPersonalizationCellDelegate>)delegate;
-(void)setDelegate:(id<PKPassPersonalizationCellDelegate>)arg1 ;
-(PKPassPersonalizationCellContext *)context;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(PKContact *)contact;
-(BOOL)becomeFirstResponder;
-(void)layoutSubviews;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_editableTextFieldChanged:(id)arg1 ;
-(void)setContext:(id)arg1 andContact:(id)arg2 ;
@end

