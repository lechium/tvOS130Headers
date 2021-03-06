/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class GKColorPalette;

@interface GKViewController : UIViewController {

	BOOL _shouldUpdateContentOnlyWhenAuthenticated;
	GKViewController* _rootViewController;
	GKColorPalette* _colorPalette;
	long long _gkFocusBubbleType;

}

@property (assign,nonatomic) long long gkFocusBubbleType;                                //@synthesize gkFocusBubbleType=_gkFocusBubbleType - In the implementation block
@property (nonatomic,retain) GKColorPalette * colorPalette;                              //@synthesize colorPalette=_colorPalette - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateContentOnlyWhenAuthenticated;              //@synthesize shouldUpdateContentOnlyWhenAuthenticated=_shouldUpdateContentOnlyWhenAuthenticated - In the implementation block
@property (nonatomic,retain) GKViewController * rootViewController;                      //@synthesize rootViewController=_rootViewController - In the implementation block
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(void)dealloc;
-(GKViewController *)rootViewController;
-(void)setRootViewController:(GKViewController *)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)popToRootViewControllerAnimated:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)setGkFocusBubbleType:(long long)arg1 ;
-(long long)gkFocusBubbleType;
-(void)setColorPalette:(GKColorPalette *)arg1 ;
-(BOOL)shouldUpdateContentOnlyWhenAuthenticated;
-(GKColorPalette *)colorPalette;
-(BOOL)displayUsingSplitNavigationBar;
-(void)setShouldUpdateContentOnlyWhenAuthenticated:(BOOL)arg1 ;
@end

