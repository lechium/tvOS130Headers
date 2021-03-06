/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:49:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVHomeSharing.app/TVHomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHKAccountSetupViewController.h>
#import <TVHomeSharing/TVHKAccountSetupViewControllerDelegate.h>

@class IKViewElement, NSString;

@interface TVHAccountSetupTemplateViewController : TVHKAccountSetupViewController <TVHKAccountSetupViewControllerDelegate> {

	IKViewElement* _templateElement;

}

@property (nonatomic,retain) IKViewElement * templateElement;              //@synthesize templateElement=_templateElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(IKViewElement *)templateElement;
-(void)setTemplateElement:(IKViewElement *)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(void)accountSetupViewController:(id)arg1 didSucceedWithAccountName:(id)arg2 ;
-(void)accountSetupViewControllerDidCancel:(id)arg1 ;
@end

