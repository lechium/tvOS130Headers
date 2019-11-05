/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPhotos/TVPhotos-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <TVPhotos/TVPCollectionViewDelegate.h>

@class UIView, TVPCollectionView, UIScrollView, NSString;

@interface TVPPhotoLibraryCollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, TVPCollectionViewDelegate> {

	UIView* _loadingView;
	TVPCollectionView* _photoLibraryCollectionView;

}

@property (nonatomic,readonly) UIScrollView * ppt_scrollView; 
@property (nonatomic,retain) TVPCollectionView * photoLibraryCollectionView;              //@synthesize photoLibraryCollectionView=_photoLibraryCollectionView - In the implementation block
@property (nonatomic,retain) UIView * loadingView;                                        //@synthesize loadingView=_loadingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(id)preferredFocusEnvironments;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(UIScrollView *)ppt_scrollView;
-(UIView *)loadingView;
-(void)setLoadingView:(UIView *)arg1 ;
-(id)photosDetailsContextForMemory:(id)arg1 ;
-(id)_photoLibraryCollectionView;
-(void)_displayLoadingView;
-(void)_dismissLoadingView;
-(Class)_collectionViewTitleViewClass;
-(Class)_sectionHeaderViewClass;
-(Class)_collectionViewCellClass;
-(TVPCollectionView *)photoLibraryCollectionView;
-(void)setPhotoLibraryCollectionView:(TVPCollectionView *)arg1 ;
@end
