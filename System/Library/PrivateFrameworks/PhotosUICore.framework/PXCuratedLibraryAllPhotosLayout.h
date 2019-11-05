/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:41 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGSplitLayout.h>
#import <PhotosUICore/PXAssetsDataSourceManagerObserver.h>
#import <PhotosUICore/PXChangeObserver.h>
#import <PhotosUICore/PXCuratedLibraryViewModelPresenter.h>
#import <PhotosUICore/PXGDisplayAssetSource.h>
#import <PhotosUICore/PXCuratedLibraryInlineHeadersLayoutGeometrySource.h>
#import <PhotosUICore/PXGItemsLayoutDelegate.h>
#import <PhotosUICore/PXCuratedLibraryBodyLayout.h>

@protocol PXDisplayAssetFetchResult, PXCuratedLibraryAllPhotosBodyLayout;
@class PXCuratedLibraryLayoutSpec, PXGZoomLayout, PXGPinchEffect, PXCuratedLibraryInlineHeadersDataSourceManager, PXCuratedLibraryInlineHeadersLayout, PXAssetsDataSourceManager, PXAssetsDataSource, PXCuratedLibraryAssetDecorationSource, PXPhotoKitUIMediaProvider, NSArray, PXGItemsLayout, NSMutableSet, NSDateInterval, PXAssetReference, PXCuratedLibraryViewModel, PXGAnchor, PXPointAnimator, PXNumberAnimator, PXGOneColumnLayout, NSString;

@interface PXCuratedLibraryAllPhotosLayout : PXGSplitLayout <PXAssetsDataSourceManagerObserver, PXChangeObserver, PXCuratedLibraryViewModelPresenter, PXGDisplayAssetSource, PXCuratedLibraryInlineHeadersLayoutGeometrySource, PXGItemsLayoutDelegate, PXCuratedLibraryBodyLayout> {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _preUpdateFlags;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _postUpdateFlags;
	PXGZoomLayout* _zoomLayout;
	PXGPinchEffect* _pinchEffect;
	unsigned _pinchEffectCaptureSpriteIndex;
	PXGSpriteIndexRange _lightBackgroundSpriteIndexRange;
	unsigned _backgroundMediaVersion;
	PXCuratedLibraryInlineHeadersDataSourceManager* _inlineHeadersDataSourceManager;
	PXCuratedLibraryInlineHeadersLayout* _inlineHeadersLayout;
	PXAssetsDataSourceManager* _dataSourceManager;
	PXAssetsDataSource* _currentDataSource;
	PXCuratedLibraryAssetDecorationSource* _assetDecorationSource;
	PXPhotoKitUIMediaProvider* _preheatMediaProvider;
	NSRange _preheatedThumbsForItemsByColumnIndex[10];
	BOOL _isPreheatingByColumnIndex[10];
	BOOL _isPerformingUpdate;
	NSRange _prefetchedForLoadedItems;
	NSRange _cachedClampedItemRange;
	id<PXDisplayAssetFetchResult> _cachedClampedFetchResult;
	NSArray* _layers;
	NSArray* _itemLayouts;
	PXGItemsLayout*<PXCuratedLibraryAllPhotosBodyLayout> _itemLayoutByHeaderLevel[2];
	PXGItemsLayout* _decadesItemLayout;
	NSMutableSet* _itemLayoutsAllowedToLoad;
	NSDateInterval* _lastReturnedDateInterval;
	NSArray* _lastReturnedLocationNames;
	BOOL _scrolledWhileAnimatingZoom;
	BOOL _performedInitialVisualShift;
	long long _visuallyStableAnchorItem;
	long long _visuallyStableAnchorItemDesiredColumn;
	BOOL _visuallyStableAnchorAllowedCloseToTop;
	unsigned long long _dataSourceIdentifierOfCachedRangeForSelectedItems;
	NSRange _cachedRangeForSelectedItems;
	BOOL _shouldAnimateTowardsAnchor;
	BOOL _wasTracking;
	PXCuratedLibraryLayoutSpec* _spec;
	PXAssetReference* __anchorAssetReference;
	PXCuratedLibraryViewModel* _viewModel;
	PXAssetsDataSource* _presentedDataSource;
	PXGAnchor* _anchor;
	PXPointAnimator* _anchorViewportScaleCenterAnimator;
	PXNumberAnimator* _anchorViewportScaleCenterVelocityTracker;
	PXGItemsLayout* _didAnimateTowardsAnchorInItemsLayout;
	PXGOneColumnLayout* _oneColLayout;
	CGPoint _anchorTargetViewportCenter;
	CGPoint _normalizedScaleCenterInAnchorSprite;

}

@property (nonatomic,readonly) PXGAnchor * anchor;                                                                                     //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) PXPointAnimator * anchorViewportScaleCenterAnimator;                                                    //@synthesize anchorViewportScaleCenterAnimator=_anchorViewportScaleCenterAnimator - In the implementation block
@property (nonatomic,readonly) CGPoint anchorTargetViewportCenter;                                                                     //@synthesize anchorTargetViewportCenter=_anchorTargetViewportCenter - In the implementation block
@property (nonatomic,retain) PXAssetReference * anchorAssetReference;                                                                  //@synthesize _anchorAssetReference=__anchorAssetReference - In the implementation block
@property (nonatomic,readonly) CGPoint normalizedScaleCenterInAnchorSprite;                                                            //@synthesize normalizedScaleCenterInAnchorSprite=_normalizedScaleCenterInAnchorSprite - In the implementation block
@property (nonatomic,readonly) PXNumberAnimator * anchorViewportScaleCenterVelocityTracker;                                            //@synthesize anchorViewportScaleCenterVelocityTracker=_anchorViewportScaleCenterVelocityTracker - In the implementation block
@property (nonatomic,readonly) BOOL shouldAnimateTowardsAnchor;                                                                        //@synthesize shouldAnimateTowardsAnchor=_shouldAnimateTowardsAnchor - In the implementation block
@property (nonatomic,readonly) BOOL wasTracking;                                                                                       //@synthesize wasTracking=_wasTracking - In the implementation block
@property (nonatomic,readonly) PXGItemsLayout*<PXCuratedLibraryAllPhotosBodyLayout> didAnimateTowardsAnchorInItemsLayout;              //@synthesize didAnimateTowardsAnchorInItemsLayout=_didAnimateTowardsAnchorInItemsLayout - In the implementation block
@property (nonatomic,readonly) PXGItemsLayout*<PXCuratedLibraryAllPhotosBodyLayout> primaryItemsLayout; 
@property (nonatomic,readonly) PXGOneColumnLayout * oneColLayout;                                                                      //@synthesize oneColLayout=_oneColLayout - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;                                                                  //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) PXAssetsDataSource * presentedDataSource;                                                               //@synthesize presentedDataSource=_presentedDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PXCuratedLibraryLayoutSpec * spec;                                                                        //@synthesize spec=_spec - In the implementation block
-(id)init;
-(void)update;
-(PXGAnchor *)anchor;
-(PXCuratedLibraryLayoutSpec *)spec;
-(BOOL)isAnimating;
-(void)_updateLayers;
-(void)setSpec:(PXCuratedLibraryLayoutSpec *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)objectReferenceForSpriteIndex:(unsigned)arg1 ;
-(void)visibleRectDidChange;
-(void)screenScaleDidChange;
-(id)hitTestResultForSpriteIndex:(unsigned)arg1 ;
-(long long)itemsLayout:(id)arg1 itemForObjectReference:(id)arg2 ;
-(double)itemsLayout:(id)arg1 aspectRatioForItem:(long long)arg2 ;
-(CGRect)itemsLayout:(id)arg1 bestCropRectForItem:(long long)arg2 withAspectRatio:(double)arg3 ;
-(void)itemsLayout:(id)arg1 updateTagsInSpriteInfos:(SCD_Struct_PX17*)arg2 forItemsInRange:(NSRange)arg3 ;
-(void)containingScrollViewDidScroll:(CGPoint)arg1 ;
-(unsigned long long)zoomBehavior;
-(void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateVisibleAnchoringLayoutsUsingBlock:(/*^block*/id)arg1 ;
-(long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3 ;
-(unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(PXGItemsLayout*)arg1 ;
-(unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1 ;
-(CGSize)minSpriteSizeForPresentationStyle:(unsigned long long)arg1 ;
-(id)displayAssetFetchResultForSpritesInRange:(PXGSpriteIndexRange)arg1 inLayout:(PXGItemsLayout*)arg2 ;
-(id)displayAssetRequestObserverForSpritesInRange:(PXGSpriteIndexRange)arg1 inLayout:(id)arg2 ;
-(PXCuratedLibraryViewModel *)viewModel;
-(void)_updateDecorationSource;
-(/*^block*/id)dateIntervalFutureForContentInRect:(CGRect)arg1 ;
-(void)_updateDataSource;
-(id)viewModel:(id)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2 ;
-(id)presentedItemsGeometryForDataSource:(id)arg1 ;
-(/*^block*/id)locationNamesFutureForContentInRect:(CGRect)arg1 ;
-(UIColor*)colorAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(CGRect)frameForItemAtIndexPath:(PXSimpleIndexPath)arg1 level:(unsigned long long)arg2 ;
-(SCD_Struct_PX31)spriteTransformForLevel:(unsigned long long)arg1 ;
-(CGRect)boundsForLevel:(unsigned long long)arg1 ;
-(id)initWithViewModel:(id)arg1 spec:(id)arg2 ;
-(void)setAnchorAssetReference:(PXAssetReference *)arg1 ;
-(CGSize)_scaleForLayout:(PXGItemsLayout*)arg1 ;
-(PXGItemsLayout*)_createLayoutWithNumberOfColumns:(long long)arg1 ;
-(void)_configureLayout:(PXGItemsLayout*)arg1 ;
-(BOOL)_layoutIsAspectFit:(PXGItemsLayout*)arg1 ;
-(BOOL)_layoutHasIndividualItems:(PXGItemsLayout*)arg1 ;
-(double)_interItemSpacingForLayout:(PXGItemsLayout*)arg1 ;
-(BOOL)_wantsDecorationForNumberOfColumns:(long long)arg1 ;
-(PXGItemsLayout*<PXCuratedLibraryAllPhotosBodyLayout>)primaryItemsLayout;
-(void)invalidateItemsLayout;
-(void)_updateZoom;
-(void)_updateVisualShifting;
-(void)_updateZoomTransforms;
-(void)_updateBackgroundSprites;
-(void)_updatePinchEffect;
-(void)_updatePrefetching;
-(void)_updateViewModelIsAnimating;
-(long long)_estimatedItemsPerScreenForLayout:(PXGItemsLayout*)arg1 ;
-(void)_performVisualShiftWithLayout:(PXGItemsLayout*)arg1 movingItem:(long long)arg2 toColumn:(long long)arg3 ;
-(void)_performAnchorAlignmentVisualShiftWithBaseLayout:(PXGItemsLayout*)arg1 ;
-(SCD_Struct_PX31)_spriteTransformForLayout:(id)arg1 ;
-(id)_displayAssetForItem:(long long)arg1 ;
-(NSRange)_rangeOfItemsForContentInRect:(CGRect)arg1 ;
-(BOOL)_layoutWantsSingleDateTitle;
-(unsigned long long)behaviorForCaptureSpriteAtIndex:(unsigned)arg1 inLayout:(id)arg2 ;
-(PXAssetReference *)anchorAssetReference;
-(PXAssetsDataSource *)presentedDataSource;
-(PXPointAnimator *)anchorViewportScaleCenterAnimator;
-(CGPoint)anchorTargetViewportCenter;
-(CGPoint)normalizedScaleCenterInAnchorSprite;
-(PXNumberAnimator *)anchorViewportScaleCenterVelocityTracker;
-(BOOL)shouldAnimateTowardsAnchor;
-(BOOL)wasTracking;
-(PXGItemsLayout*<PXCuratedLibraryAllPhotosBodyLayout>)didAnimateTowardsAnchorInItemsLayout;
-(PXGOneColumnLayout *)oneColLayout;
@end
