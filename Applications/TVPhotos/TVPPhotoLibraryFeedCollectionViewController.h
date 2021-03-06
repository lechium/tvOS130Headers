/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <TVPhotos/TVPSharedPSActivityViewLayoutDataSource.h>
#import <TVPhotos/TVPCollectionViewDelegate.h>
#import <TVPhotos/PHPhotoLibraryChangeObserver.h>
#import <TVPhotos/TVPCollectionViewCachingManagerDataSource.h>

@class TVPCollectionView, TVPPhotoBannerBrowserView, PHAssetCollection, TVPCollectionViewCachingManager, TVPFetchManager, NSArray, UIView, NSIndexPath, NSTimer, NSString;

@interface TVPPhotoLibraryFeedCollectionViewController : UIViewController <TVPSharedPSActivityViewLayoutDataSource, TVPCollectionViewDelegate, PHPhotoLibraryChangeObserver, TVPCollectionViewCachingManagerDataSource> {

	TVPCollectionView* _photoFeedCollectionView;
	TVPPhotoBannerBrowserView* _photoFeedHeaderView;
	PHAssetCollection* _photoStreamFeedCollection;
	TVPCollectionViewCachingManager* _cachingManager;
	TVPFetchManager* _fetchManager;
	NSArray* _photoBatches;
	NSArray* _photoAssets;
	UIView* _loadingView;
	NSIndexPath* _preferredFocusIndexPath;
	NSTimer* _updateAssetsAndReloadTimer;

}

@property (nonatomic,retain) UIView * loadingView;                                          //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) NSIndexPath * preferredFocusIndexPath;                         //@synthesize preferredFocusIndexPath=_preferredFocusIndexPath - In the implementation block
@property (nonatomic,retain) NSTimer * updateAssetsAndReloadTimer;                          //@synthesize updateAssetsAndReloadTimer=_updateAssetsAndReloadTimer - In the implementation block
@property (nonatomic,retain) TVPCollectionView * photoFeedCollectionView;                   //@synthesize photoFeedCollectionView=_photoFeedCollectionView - In the implementation block
@property (nonatomic,retain) TVPPhotoBannerBrowserView * photoFeedHeaderView;               //@synthesize photoFeedHeaderView=_photoFeedHeaderView - In the implementation block
@property (nonatomic,retain) PHAssetCollection * photoStreamFeedCollection;                 //@synthesize photoStreamFeedCollection=_photoStreamFeedCollection - In the implementation block
@property (nonatomic,retain) TVPCollectionViewCachingManager * cachingManager;              //@synthesize cachingManager=_cachingManager - In the implementation block
@property (nonatomic,retain) TVPFetchManager * fetchManager;                                //@synthesize fetchManager=_fetchManager - In the implementation block
@property (nonatomic,copy) NSArray * photoBatches;                                          //@synthesize photoBatches=_photoBatches - In the implementation block
@property (nonatomic,copy) NSArray * photoAssets;                                           //@synthesize photoAssets=_photoAssets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)preferredFocusEnvironments;
-(id)assetAtIndexPath:(id)arg1 ;
-(UIView *)loadingView;
-(void)setLoadingView:(UIView *)arg1 ;
-(NSArray *)photoAssets;
-(void)setPhotoAssets:(NSArray *)arg1 ;
-(void)_cancelExistingTimer;
-(void)_didFinishTimedInterval:(id)arg1 ;
-(id)photoBatchesForCollectionView:(id)arg1 layout:(id)arg2 ;
-(id)collectionViewCachingManager:(id)arg1 assetWithTargetSizeAtIndexPath:(id)arg2 ;
-(TVPCollectionViewCachingManager *)cachingManager;
-(void)_displayLoadingView;
-(void)setPreferredFocusIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)preferredFocusIndexPath;
-(TVPFetchManager *)fetchManager;
-(void)setFetchManager:(TVPFetchManager *)arg1 ;
-(void)setCachingManager:(TVPCollectionViewCachingManager *)arg1 ;
-(void)setPhotoStreamFeedCollection:(PHAssetCollection *)arg1 ;
-(NSArray *)photoBatches;
-(PHAssetCollection *)photoStreamFeedCollection;
-(void)resetFocusWithFocusedAsset:(id)arg1 ;
-(void)loadPhotoFeedAssets;
-(void)_onSelectScreenSaverButton:(id)arg1 ;
-(void)_onSelectSlideshowButton:(id)arg1 ;
-(id)_photoStreamHeaderTitle;
-(id)_photoStreamHeaderSubtitle;
-(id)_feedCollection;
-(void)_updateFeedInfoAndUI;
-(void)setPhotoBatches:(NSArray *)arg1 ;
-(void)dismissLoadingView;
-(void)updateCollectionHeader;
-(TVPCollectionView *)photoFeedCollectionView;
-(void)_cacheFeedInfoIfRequired;
-(TVPPhotoBannerBrowserView *)photoFeedHeaderView;
-(id)_photoStreamFeedHeaderView;
-(void)setPhotoFeedHeaderView:(TVPPhotoBannerBrowserView *)arg1 ;
-(void)setPhotoFeedCollectionView:(TVPCollectionView *)arg1 ;
-(NSTimer *)updateAssetsAndReloadTimer;
-(void)setUpdateAssetsAndReloadTimer:(NSTimer *)arg1 ;
@end

