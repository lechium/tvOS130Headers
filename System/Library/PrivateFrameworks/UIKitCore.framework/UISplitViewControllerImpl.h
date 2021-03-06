/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSString;


@protocol UISplitViewControllerImpl <NSObject>
@property (nonatomic,copy) NSArray * viewControllers; 
@property (assign,nonatomic,__weak) id<UISplitViewControllerDelegate> delegate; 
@property (assign,nonatomic) BOOL presentsWithGesture; 
@property (getter=isCollapsed,nonatomic,readonly) BOOL collapsed; 
@property (assign,nonatomic) long long preferredDisplayMode; 
@property (assign,nonatomic) double preferredPrimaryColumnWidthFraction; 
@property (assign,nonatomic) double minimumPrimaryColumnWidth; 
@property (assign,nonatomic) double maximumPrimaryColumnWidth; 
@property (assign,nonatomic) long long primaryEdge; 
@property (assign,nonatomic) float gutterWidth; 
@property (assign,nonatomic) BOOL hidesMasterViewInPortrait; 
@property (assign,nonatomic) BOOL prefersOverlayInRegularWidthPhone; 
@property (assign,nonatomic) BOOL usesDeviceOverlayPreferences; 
@property (setter=_setDisplayModeButtonItemTitle:,nonatomic,copy) NSString * _displayModeButtonItemTitle; 
@property (assign,setter=_setUsesExtraWidePrimaryColumn:,getter=_usesExtraWidePrimaryColumn,nonatomic) BOOL usesExtraWidePrimaryColumn; 
@property (assign,nonatomic) long long primaryBackgroundStyle; 
@optional
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
-(void)removeChildViewController:(id)arg1;

@required
-(void)encodeWithCoder:(id)arg1;
-(id<UISplitViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_commonInit;
-(long long)displayMode;
-(void)_initWithCoder:(id)arg1;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)viewDidLayoutSubviews;
-(NSArray *)viewControllers;
-(BOOL)isCollapsed;
-(void)viewDidAppear:(BOOL)arg1;
-(void)viewDidDisappear:(BOOL)arg1;
-(void)showViewController:(id)arg1 sender:(id)arg2;
-(void)traitCollectionDidChange:(id)arg1;
-(id)masterViewController;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
-(void)didRotateFromInterfaceOrientation:(long long)arg1;
-(void)setViewControllers:(id)arg1;
-(void)showDetailViewController:(id)arg1 sender:(id)arg2;
-(id)childViewControllerForStatusBarStyle;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
-(void)encodeRestorableStateWithCoder:(id)arg1;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
-(BOOL)_isRotating;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
-(BOOL)shouldUpdateFocusInContext:(id)arg1;
-(id)preferredFocusEnvironments;
-(id)preferredFocusedView;
-(long long)preferredInterfaceOrientationForPresentation;
-(id)detailViewController;
-(void)setPreferredDisplayMode:(long long)arg1;
-(long long)preferredDisplayMode;
-(void)decodeRestorableStateWithCoder:(id)arg1;
-(CGSize*)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2;
-(void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
-(id)displayModeButtonItem;
-(id)_traitCollectionForChildEnvironment:(id)arg1;
-(void)_getRotationContentSettings:(SCD_Struct_UI39*)arg1;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(long long)preferredLeadingStatusBarStyle;
-(long long)preferredTrailingStatusBarStyle;
-(BOOL)_optsOutOfPopoverControllerHierarchyCheck;
-(CGRect*)_frameForChildContentContainer:(id)arg1;
-(BOOL)_handlesCounterRotationForPresentation;
-(UIEdgeInsets*)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2;
-(BOOL)_hasPreferredInterfaceOrientationForPresentation;
-(BOOL)_shouldPersistViewWhenCoding;
-(id)_allContainedViewControllers;
-(id)_additionalViewControllersToCheckForUserActivity;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(void)_updateChildContentMargins;
-(id)_childViewControllersToSendViewWillTransitionToSize;
-(void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3;
-(void)_popoverController:(id)arg1 willChangeToVisible:(BOOL)arg2;
-(void)_popoverController:(id)arg1 didChangeFromVisible:(BOOL)arg2;
-(CGSize*)_contentSizeForChildViewController:(id)arg1 inPopoverController:(id)arg2;
-(BOOL)_iPhoneShouldUseOverlayInCurrentEnvironment;
-(BOOL)_isCollapsed;
-(BOOL)_layoutPrimaryOnRight;
-(id)initWithSplitViewController:(id)arg1;
-(BOOL)presentsWithGesture;
-(void)setPresentsWithGesture:(BOOL)arg1;
-(double)preferredPrimaryColumnWidthFraction;
-(void)setPreferredPrimaryColumnWidthFraction:(double)arg1;
-(double)minimumPrimaryColumnWidth;
-(void)setMinimumPrimaryColumnWidth:(double)arg1;
-(double)maximumPrimaryColumnWidth;
-(void)setMaximumPrimaryColumnWidth:(double)arg1;
-(double)primaryColumnWidth;
-(void)setPrimaryEdge:(long long)arg1;
-(long long)primaryEdge;
-(float)gutterWidth;
-(void)setGutterWidth:(float)arg1;
-(BOOL)hidesMasterViewInPortrait;
-(void)setHidesMasterViewInPortrait:(BOOL)arg1;
-(NSString *)_displayModeButtonItemTitle;
-(void)_setDisplayModeButtonItemTitle:(id)arg1;
-(id)_primaryDimmingView;
-(void)setPrefersOverlayInRegularWidthPhone:(BOOL)arg1;
-(BOOL)prefersOverlayInRegularWidthPhone;
-(void)setUsesDeviceOverlayPreferences:(BOOL)arg1;
-(BOOL)usesDeviceOverlayPreferences;
-(BOOL)_usesExtraWidePrimaryColumn;
-(void)_setUsesExtraWidePrimaryColumn:(BOOL)arg1;
-(void)_descendantWillPresentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animated:(BOOL)arg4;
-(void)_willShowCollapsedDetailViewController:(id)arg1 inTargetController:(id)arg2;
-(void)_willBeginSnapshotSession;
-(void)_didEndSnapshotSession;
-(void)toggleMasterVisible:(id)arg1;
-(void)setPrimaryBackgroundStyle:(long long)arg1;
-(long long)primaryBackgroundStyle;
-(void)unloadViewForced:(BOOL)arg1;
-(double)_contentMarginForChildViewController:(id)arg1;
-(void)_didChangeToFirstResponder:(id)arg1;
-(id)_primaryContentResponder;
-(void)_displayModeBarButtonItemWasUsedForFirstTime:(id)arg1;

@end

