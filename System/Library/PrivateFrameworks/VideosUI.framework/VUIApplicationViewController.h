/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <VideosUI/_TVInterfaceCreatingPrivate.h>
#import <VideosUI/TVApplicationControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class TVApplicationController, VUIBootURLController, UINavigationController, NSString;

@interface VUIApplicationViewController : UIViewController <_TVInterfaceCreatingPrivate, TVApplicationControllerDelegate, UIGestureRecognizerDelegate> {

	TVApplicationController* _applicationController;
	VUIBootURLController* _bootURLController;
	UINavigationController* _navigationController;

}

@property (nonatomic,retain) TVApplicationController * applicationController;              //@synthesize applicationController=_applicationController - In the implementation block
@property (nonatomic,retain) VUIBootURLController * bootURLController;                     //@synthesize bootURLController=_bootURLController - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;                //@synthesize navigationController=_navigationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)_launchOptions;
-(void)viewDidLoad;
-(UINavigationController *)navigationController;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(id)preferredFocusEnvironments;
-(void)setApplicationController:(TVApplicationController *)arg1 ;
-(TVApplicationController *)applicationController;
-(id)_styleSheetURLForTemplate:(id)arg1 ;
-(id)URLForResource:(id)arg1 ;
-(id)imageForResource:(id)arg1 ;
-(id)_viewForIKElement:(id)arg1 existingView:(id)arg2 ;
-(id)_viewControllerForIKElement:(id)arg1 existingViewController:(id)arg2 ;
-(Class)_collectionViewCellClassForIKElement:(id)arg1 ;
-(void)_parseAppConfigurationForIKElement:(id)arg1 ;
-(id)_imageProxyForIKElement:(id)arg1 withLayout:(id)arg2 ;
-(void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)appController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 ;
-(void)setBootURLController:(VUIBootURLController *)arg1 ;
-(VUIBootURLController *)bootURLController;
-(void)_startApplicationControllerWithBootURL:(id)arg1 ;
-(void)_exposeObjectsInJSContext:(id)arg1 ;
-(id)_initialViewControllerWithAppContext:(id)arg1 ;
-(Class)_applicationControllerClass;
@end
