/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class TVPModalPresentationAnimator, UINavigationController, UIViewController, NSString;

@interface TVPModalPresenter : NSObject <UIGestureRecognizerDelegate, UINavigationControllerDelegate, UIViewControllerTransitioningDelegate> {

	TVPModalPresentationAnimator* _presentingAnimator;
	TVPModalPresentationAnimator* _dismissingAnimator;
	UINavigationController* _modalRootViewController;

}

@property (nonatomic,readonly) UIViewController * presentedViewController; 
@property (nonatomic,readonly) UINavigationController * modalRootViewController;              //@synthesize modalRootViewController=_modalRootViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)presenter;
-(id)init;
-(UIViewController *)presentedViewController;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3 ;
-(void)hideController:(id)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(UINavigationController *)modalRootViewController;
-(void)hideAllAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)showController:(id)arg1 fromController:(id)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(id)hidden_init;
@end
