/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:56:49 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVAccessViewService.app/TVAccessViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <TVAccessViewService/PBSViewServicePresenter.h>

@class VUIAccessViewController, NSString;

@interface TVAccessViewServiceViewController : UIViewController <PBSViewServicePresenter> {

	VUIAccessViewController* _accessViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)viewDidLoad;
-(void)_menuPressed:(id)arg1 ;
-(void)viewServiceBeginPresentationWithOptions:(id)arg1 ;
-(void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewServiceUpdatePresentationWithOptions:(id)arg1 ;
@end

