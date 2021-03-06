/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXCMMComponentViewController.h>
#import <PhotosUICore/PXAssetsSceneDelegate.h>
#import <PhotosUICore/PXTileSource.h>
#import <PhotosUICore/PXCMMEngineDrivenLayoutDelegate.h>
#import <PhotosUICore/PXSwipeSelectionManagerDelegate.h>
#import <PhotosUICore/PXChangeObserver.h>
#import <PhotosUICore/PXOneUpPresentationDelegate.h>
#import <PhotosUICore/PXCMMBannerTileControllerDelegate.h>
#import <PhotosUICore/PXScrollViewControllerObserver.h>
#import <PhotosUICore/PXPhotosGlobalFooterViewDelegate.h>
#import <PhotosUICore/PXCMMFooterViewModelActionDelegate.h>
#import <PhotosUICore/PXContextualNotificationDelegate.h>
#import <PhotosUICore/PXActionPerformerDelegate.h>
#import <PhotosUICore/PXCMMProgressBannerViewLayoutDelegate.h>

@protocol PXCMMAssetsViewControllerDelegate;
@class PXUpdater, PXLayoutGenerator, PXSectionedLayoutEngine, PXUIScrollViewController, PXBasicTileAnimator, PXTilingController, PXUIAssetsScene, PXCMMProgressBannerView, NSArray, PXUITapGestureRecognizer, PXSwipeSelectionManager, UILongPressGestureRecognizer, PXAssetReference, PXCMMSpecManager, PXCMMSpec, PXMomentShareStatusPresentation, PXCMMFooterViewModel, PXPhotosGlobalFooterView, PXCMMBannerTileController, PXCMMSendBackBannerView, NSMutableSet, PXCMMSendBackSuggestionSource, PXContextualNotification, NSSet, PXOneUpPresentation, NSString;

@interface PXCMMAssetsViewController : PXCMMComponentViewController <PXAssetsSceneDelegate, PXTileSource, PXCMMEngineDrivenLayoutDelegate, PXSwipeSelectionManagerDelegate, PXChangeObserver, PXOneUpPresentationDelegate, PXCMMBannerTileControllerDelegate, PXScrollViewControllerObserver, PXPhotosGlobalFooterViewDelegate, PXCMMFooterViewModelActionDelegate, PXContextualNotificationDelegate, PXActionPerformerDelegate, PXCMMProgressBannerViewLayoutDelegate> {

	PXUpdater* _updater;
	PXLayoutGenerator* _layoutGenerator;
	PXSectionedLayoutEngine* _layoutEngine;
	BOOL _layoutAnimationsGloballyDisabled;
	PXUIScrollViewController* _scrollViewController;
	PXBasicTileAnimator* _tileAnimator;
	PXTilingController* _tilingController;
	PXUIAssetsScene* _sceneController;
	PXCMMProgressBannerView* _progressBannerView;
	NSArray* _progressBannerViewConstraints;
	PXUITapGestureRecognizer* _tapSelectionGesture;
	PXSwipeSelectionManager* _swipeSelectionManager;
	PXUITapGestureRecognizer* _layoutTransitionGesture;
	UILongPressGestureRecognizer* _longPressGesture;
	PXAssetReference* _navigatedAssetReference;
	PXCMMSpecManager* _specManager;
	PXCMMSpec* _spec;
	PXMomentShareStatusPresentation* _momentShareStatusPresentationForFooter;
	PXCMMFooterViewModel* _statusFooterViewModel;
	PXPhotosGlobalFooterView* _measuringStatusFooterView;
	PXCMMBannerTileController* _measuringBannerTile;
	PXCMMSendBackBannerView* _measuringSendBackBannerView;
	PXMomentShareStatusPresentation* _momentShareStatusPresentationForPoster;
	NSMutableSet* _inUseTiles;
	CGSize _knownReferenceSize;
	BOOL _needsToPerformInitialSelection;
	PXCMMSendBackSuggestionSource* _sendBackSuggestionSource;
	PXContextualNotification* _sendBackNotification;
	BOOL _sendBackNotificationWasDiscarded;
	BOOL _sendBackNotificationWasTapped;
	BOOL _receivingActionButtonWasTapped;
	BOOL _didIncrementNumberOfPresentableSendBacks;
	BOOL _didIncrementNumberOfPresentedSendBacks;
	BOOL _isWaitingForSendBackPresentationConfirmationTimeout;
	unsigned long long _sendBackPresentationConfirmationGeneration;
	SCD_Struct_PX65 _delegateRespondsTo;
	BOOL _actionInProgress;
	BOOL _userSelectionEnabled;
	id<PXCMMAssetsViewControllerDelegate> _delegate;
	long long __layoutType;
	NSSet* __hiddenAssetReferences;
	UIEdgeInsets _contentInset;

}

@property (assign,nonatomic) long long _layoutType;                                              //@synthesize _layoutType=__layoutType - In the implementation block
@property (nonatomic,readonly) PXOneUpPresentation * _oneUpPresentation; 
@property (nonatomic,retain) NSSet * _hiddenAssetReferences;                                     //@synthesize _hiddenAssetReferences=__hiddenAssetReferences - In the implementation block
@property (assign,nonatomic) BOOL userSelectionEnabled;                                          //@synthesize userSelectionEnabled=_userSelectionEnabled - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                          //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMAssetsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isActionInProgress,nonatomic) BOOL actionInProgress;                    //@synthesize actionInProgress=_actionInProgress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PXCMMAssetsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PXCMMAssetsViewControllerDelegate>)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(long long)_layoutType;
-(UIEdgeInsets)contentInset;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)_updateStyle;
-(void)_handleTap:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)scrollViewControllerDidScroll:(id)arg1 ;
-(id)oneUpPresentationInitialAssetReference:(id)arg1 ;
-(id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2 ;
-(id)oneUpPresentationActionManager:(id)arg1 ;
-(id)oneUpPresentationActionManagerForPreviewing:(id)arg1 ;
-(long long)oneUpPresentationActionContext:(id)arg1 ;
-(id)oneUpPresentationImportStatusManager:(id)arg1 ;
-(id)oneUpPresentationDataSourceManager:(id)arg1 ;
-(id)oneUpPresentationMediaProvider:(id)arg1 ;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(PXSimpleIndexPath)_assetIndexPathAtLocation:(CGPoint)arg1 padding:(UIEdgeInsets)arg2 ;
-(void*)checkOutTileForIdentifier:(PXTileIdentifier)arg1 layout:(id)arg2 ;
-(void)checkInTile:(void*)arg1 withIdentifier:(PXTileIdentifier)arg2 ;
-(void)_contentSizeCategoryDidChangeNotification:(id)arg1 ;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(NSObject*)arg2 ;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(NSObject*)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleLongPress:(id)arg1 ;
-(void)photosGlobalFooterView:(id)arg1 presentViewController:(id)arg2 ;
-(PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestLeadingLocation:(CGPoint)arg2 ;
-(PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathClosestAboveLocation:(CGPoint)arg2 ;
-(BOOL)swipeSelectionManager:(id)arg1 shouldSelectItemAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(void)swipeSelectionManagerAutomaticallyTransitionToMultiSelectMode:(id)arg1 ;
-(BOOL)swipeSelectionManagerIsInMultiSelectMode:(id)arg1 ;
-(PXSimpleIndexPath)swipeSelectionManager:(id)arg1 itemIndexPathAtLocation:(CGPoint)arg2 ;
-(void)_setHiddenAssetReferences:(id)arg1 ;
-(void)_configureLayout:(id)arg1 ;
-(id)_createNewLayout;
-(void)setActionInProgress:(BOOL)arg1 ;
-(BOOL)isActionInProgress;
-(PXOneUpPresentation *)_oneUpPresentation;
-(unsigned long long)_additionalTileCount;
-(void)_updatePlaceholder;
-(void)_scheduleLayout;
-(void)_preferredContentSizeChanged:(id)arg1 ;
-(void)_selectAllAssets;
-(void)_deselectAllAssets;
-(void)engineDrivenLayoutReferenceSizeDidChange:(id)arg1 ;
-(double)engineDrivenLayout:(id)arg1 aspectRatioForItemAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(CGRect)engineDrivenLayout:(id)arg1 contentsRectForItemAtIndexPath:(PXSimpleIndexPath)arg2 forAspectRatio:(double)arg3 ;
-(id)assetsScene:(id)arg1 transitionAnimationCoordinatorForChange:(id)arg2 ;
-(id)assetsScene:(id)arg1 layoutForDataSource:(id)arg2 ;
-(void)_invalidateLayoutGenerator;
-(id)_assetReferenceAtPoint:(CGPoint)arg1 padding:(UIEdgeInsets)arg2 ;
-(void)_performTilingChangeWithoutAnimationTransition:(/*^block*/id)arg1 ;
-(NSSet *)_hiddenAssetReferences;
-(void)progressBannerViewLayoutHeightDidChange:(id)arg1 ;
-(CGRect)contextualNotification:(id)arg1 containingFrameInCoordinateSpace:(id)arg2 ;
-(id)preferredContainerViewForContextualNotification:(id)arg1 ;
-(void)contextualNotificationWasTapped:(id)arg1 ;
-(void)contextualNotificationWasDiscarded:(id)arg1 ;
-(void)contextualNotificationDidAppear:(id)arg1 ;
-(void)contextualNotificationDidDisappear:(id)arg1 ;
-(void)didPerformDeletionActionForFooterViewModel:(id)arg1 ;
-(void)didTapActionButtonInBannerTileController:(id)arg1 ;
-(BOOL)engineDrivenLayout:(id)arg1 shouldShowDimmingOverlayAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(BOOL)engineDrivenLayout:(id)arg1 shouldShowStatusBadgeAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(long long)engineDrivenLayout:(id)arg1 assetStatusAtIndexPath:(PXSimpleIndexPath)arg2 ;
-(CGSize)_maximumThumbnailSize;
-(void)_updateAssetsScene;
-(void)_updateSelectionEnabled;
-(void)_performInitialSelectionIfNeeded;
-(void)_selectCuratedAssets;
-(void)_selectNonCopiedAssets;
-(BOOL)_areAllNotCopiedAssetsSelected;
-(void)_didFindPresentableSendBack;
-(void)_didPresentSendBack;
-(void)_handleSendBackPresentationConfirmationTimeoutForGeneration:(unsigned long long)arg1 ;
-(void)_checkSendBackPresentationStatus;
-(void)_invokeSendBackAction;
-(id)_createPosterTileController;
-(id)_createStatusFooter;
-(id)_createSendBackBannerView;
-(id)_createSendBackFooter;
-(id)_createBannerTileController;
-(id)_createAddButton;
-(id)_createSectionHeaderController;
-(id)_createStatusTileView;
-(id)_createOverlayTileView;
-(void)setUserSelectionEnabled:(BOOL)arg1 ;
-(id)_indexPathsForAssetReferences:(id)arg1 inDataSource:(id)arg2 ;
-(void)_updateGestures;
-(void)_transitionLayoutGesture:(id)arg1 ;
-(void)_toggleAssetSelectionAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(PXSimpleIndexPath)_assetIndexPathAtLocation:(CGPoint)arg1 padding:(UIEdgeInsets)arg2 kind:(unsigned long long)arg3 ;
-(long long)_assetImportStateAtIndexPath:(PXSimpleIndexPath)arg1 withDataSource:(id)arg2 ;
-(BOOL)_isAssetAlreadyImportedAtIndexPath:(PXSimpleIndexPath)arg1 ;
-(BOOL)_isAssetAlreadyImportedAtIndexPath:(PXSimpleIndexPath)arg1 withEngineDrivenLayout:(id)arg2 ;
-(void)addButtonTapped:(id)arg1 ;
-(void)_selectionModeDidChange;
-(void)_updateSelectionIfNeeded;
-(BOOL)_shouldShowOneUpActions;
-(void)_setLayoutType:(long long)arg1 ;
-(id)_createNewLayoutGeneratorWithReferenceSize:(CGSize)arg1 ;
-(double)_headerHeightFromReferenceSize:(CGSize)arg1 insets:(UIEdgeInsets)arg2 ;
-(double)_bannerHeightFromReferenceSize:(CGSize)arg1 ;
-(double)_statusFooterHeightFromReferenceSize:(CGSize)arg1 insets:(UIEdgeInsets)arg2 ;
-(double)_sendBackFooterHeightFromReferenceSize:(CGSize)arg1 ;
-(BOOL)_canShowSendBackSuggestion;
-(BOOL)_isSendBackBannerViewContentsAtAllVisible;
-(BOOL)_isSendBackBannerViewContentsFullyVisible;
-(void)presentSendBackNotification;
-(void)_updateSendBackNotification;
-(void)_updateLayoutEngine;
-(void)_configureBannerTile:(id)arg1 ;
-(BOOL)_shouldShowProgressBanner;
-(double)_progressBannerViewLayoutHeight;
-(void)_updateProgressBannerViewVisibility;
-(void)_updateProgressBannerViewConstraints;
-(void)set_layoutType:(long long)arg1 ;
-(void)set_hiddenAssetReferences:(NSSet *)arg1 ;
-(BOOL)userSelectionEnabled;
@end

