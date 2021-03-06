/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVScreenSaver.app/TVScreenSaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVScreenSaver/TVScreenSaver-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <TVScreenSaver/MPAssetKeyDelegate.h>
#import <TVScreenSaver/PBSViewServicePresenter.h>

@class NSDictionary, TVPhotoSource, TVPhotoCollection, TVSSMarimbaView, UIActivityIndicatorView, TVSSSlideshowUtilities, NSMutableSet, NSArray, NSString;

@interface TVSSMarimbaViewController : UIViewController <MPAssetKeyDelegate, PBSViewServicePresenter> {

	NSDictionary* _assetKeysToAssetPaths;
	TVPhotoSource* _currentPhotoSource;
	TVPhotoCollection* _selectedPhotoCollection;
	TVSSMarimbaView* _marimbaView;
	UIActivityIndicatorView* _spinnerView;
	TVSSSlideshowUtilities* _screensaverUtilities;
	id _preferenceObserverToken;
	NSMutableSet* _activeImageProxies;
	NSArray* _cachedPhotoAssets;
	BOOL _didWarmUpAndStartMarimbaRenderer;
	BOOL _playbackHasBeenPausedWhileScreenSaverIsUp;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)dealloc;
-(id)_preferences;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)_selectAction:(id)arg1 ;
-(void)_leftAction:(id)arg1 ;
-(void)_rightAction:(id)arg1 ;
-(id)absolutePathForAssetKey:(id)arg1 ;
-(id)absolutePathForAssetKey:(id)arg1 andSize:(CGSize)arg2 ;
-(id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(CGSize)arg2 ;
-(void)viewServiceBeginPresentationWithOptions:(id)arg1 ;
-(void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_playPauseAction:(id)arg1 ;
-(void)_usedAllPathsNotification:(id)arg1 ;
-(id)_photoSourceWithIdentifier:(id)arg1 ;
-(void)_fileAddedToImageCacheNotification:(id)arg1 ;
-(void)_mediaRemotePlaybackApplicationStateDidChange:(id)arg1 ;
-(void)_startScreenSaverPreview;
-(void)_mediaPlaybackStateWithCompletion:(/*^block*/id)arg1 ;
-(void)_stopMarimbaRenderer;
-(void)_fetchAssetsAndBeginScreensaverPreview;
-(id)_photoAssetsFromImageCache;
-(void)_startScreenSaverWithPhotoAssets:(id)arg1 ;
-(void)_displayAssetsLoadingView;
-(void)_endObservingThemeChanges;
-(void)_beginObservingThemeChanges;
-(BOOL)_didScreenSaverPhotoCollectionChange;
-(id)_photoAssetFromFilePath:(id)arg1 ;
@end

