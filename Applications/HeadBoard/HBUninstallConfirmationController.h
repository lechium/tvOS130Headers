/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:09 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController, HBApp, UIAlertController;

@interface HBUninstallConfirmationController : NSObject {

	BOOL _askedAboutApplicationUninstall;
	BOOL _inProgress;
	UIViewController* _parentViewController;
	HBApp* _app;
	/*^block*/id _completionBlock;
	UIAlertController* _currentAlertController;

}

@property (assign,nonatomic) BOOL askedAboutApplicationUninstall;                         //@synthesize askedAboutApplicationUninstall=_askedAboutApplicationUninstall - In the implementation block
@property (nonatomic,readonly) BOOL finishedApplicationRemovalConfirmation; 
@property (assign,getter=isInProgress,nonatomic) BOOL inProgress;                         //@synthesize inProgress=_inProgress - In the implementation block
@property (nonatomic,copy) id completionBlock;                                            //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) UIAlertController * currentAlertController;                  //@synthesize currentAlertController=_currentAlertController - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * parentViewController;              //@synthesize parentViewController=_parentViewController - In the implementation block
@property (nonatomic,retain) HBApp * app;                                                 //@synthesize app=_app - In the implementation block
-(void)setCompletionBlock:(id)arg1 ;
-(void)cancel;
-(id)completionBlock;
-(void)setInProgress:(BOOL)arg1 ;
-(UIViewController *)parentViewController;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(void)setParentViewController:(UIViewController *)arg1 ;
-(HBApp *)app;
-(void)setApp:(HBApp *)arg1 ;
-(BOOL)isInProgress;
-(BOOL)askedAboutApplicationUninstall;
-(void)_generateUninstallConfirmation;
-(UIAlertController *)currentAlertController;
-(void)_completeUninstallWillRemove:(BOOL)arg1 ;
-(void)setCurrentAlertController:(UIAlertController *)arg1 ;
-(BOOL)finishedApplicationRemovalConfirmation;
-(void)setAskedAboutApplicationUninstall:(BOOL)arg1 ;
-(id)initWithApplication:(id)arg1 parentViewController:(id)arg2 ;
@end

