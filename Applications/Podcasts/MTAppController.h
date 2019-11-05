/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:21 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIViewController, UITabBarController;


@protocol MTAppController <NSObject>
@property (nonatomic,readonly) UIViewController * rootViewController; 
@property (nonatomic,readonly) UITabBarController * tabBarController; 
@optional
-(void)scrollToTopUnplayedTabAnimated:(BOOL)arg1;
-(void)scrollToTopMyPodcastsTabAnimated:(BOOL)arg1;

@required
-(UIViewController *)rootViewController;
-(UITabBarController *)tabBarController;
-(void)handleiTMSUrlScheme:(id)arg1;
-(void)handlePodcastsUrlScheme:(id)arg1;
-(void)presentNowPlayingAnimated:(BOOL)arg1;
-(void)selectFeaturedTab;
-(void)presentStation:(id)arg1 new:(BOOL)arg2;
-(void)dismissNowPlayingAnimated:(BOOL)arg1;
-(void)presentPodcast:(id)arg1 episode:(id)arg2 episodeNotAvailable:(BOOL)arg3 podcastTab:(unsigned long long)arg4 startPlayback:(BOOL)arg5 animated:(BOOL)arg6;
-(void)openStoreURL:(id)arg1;
-(void)selectSearchTabAndFocusSearchField;
-(void)showSearchControllerWithSearchText:(id)arg1;
-(void)selectUnplayedTabAndPopToRoot:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)selectMyPodcastsTabAndPopToRoot:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)selectFeaturedTabAndPopToRoot:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)showDownloadsControllerAnimated:(BOOL)arg1;
-(void)presentPodcast:(id)arg1 episode:(id)arg2 podcastTab:(unsigned long long)arg3 startPlayback:(BOOL)arg4 animated:(BOOL)arg5;
-(void)updateUnplayedBadgeCount;
-(BOOL)isUnplayedTabSelected;
-(void)selectUnplayedTab;
-(BOOL)isMyPodcastsTabSelected;
-(void)selectMyPodcastsTab;
-(void)dismissSearchOverlayController;
-(void)presentMigration;
-(void)dismissMigration;

@end
