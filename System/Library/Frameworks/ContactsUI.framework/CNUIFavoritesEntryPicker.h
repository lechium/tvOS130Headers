/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactActionsViewControllerDelegate.h>

@protocol CNUIFavoritesEntryPickerDelegate;
@class CNContact, UIAlertController, NSString;

@interface CNUIFavoritesEntryPicker : NSObject <CNContactActionsViewControllerDelegate> {

	id<CNUIFavoritesEntryPickerDelegate> _delegate;
	CNContact* _contact;
	UIAlertController* _alertController;

}

@property (nonatomic,retain) UIAlertController * alertController;                               //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic,__weak) id<CNUIFavoritesEntryPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CNContact * contact;                                             //@synthesize contact=_contact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
-(id<CNUIFavoritesEntryPickerDelegate>)delegate;
-(void)setDelegate:(id<CNUIFavoritesEntryPickerDelegate>)arg1 ;
-(CNContact *)contact;
-(id)initWithContact:(id)arg1 ;
-(id)viewController;
-(void)contactActionsViewController:(id)arg1 didSelectAction:(id)arg2 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
@end
