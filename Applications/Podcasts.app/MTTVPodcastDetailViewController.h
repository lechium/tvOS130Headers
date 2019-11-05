/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:20 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTTVEpisodeSplitViewController.h>

@class MTPodcast, MTTVPodcastGoneDarkDetailViewController, MTArtworkBackgroundView, MTColorTheme, MTTVPodcastEpisodeListViewController;

@interface MTTVPodcastDetailViewController : MTTVEpisodeSplitViewController {

	MTPodcast* _podcast;
	MTTVPodcastGoneDarkDetailViewController* _goneDarkDetailViewController;
	MTArtworkBackgroundView* _backgroundView;
	MTColorTheme* _colorTheme;

}

@property (nonatomic,retain) MTTVPodcastEpisodeListViewController * episodeList; 
@property (nonatomic,retain) MTTVPodcastGoneDarkDetailViewController * goneDarkDetailViewController;              //@synthesize goneDarkDetailViewController=_goneDarkDetailViewController - In the implementation block
@property (nonatomic,retain) MTArtworkBackgroundView * backgroundView;                                            //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) MTColorTheme * colorTheme;                                                           //@synthesize colorTheme=_colorTheme - In the implementation block
@property (nonatomic,readonly) MTPodcast * podcast;                                                               //@synthesize podcast=_podcast - In the implementation block
-(MTPodcast *)podcast;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setBackgroundView:(MTArtworkBackgroundView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(MTArtworkBackgroundView *)backgroundView;
-(void)setColorTheme:(MTColorTheme *)arg1 ;
-(MTColorTheme *)colorTheme;
-(void)_setupBackgroundView;
-(id)overrideTraitCollectionForChildViewController:(id)arg1 ;
-(id)initWithPodcast:(id)arg1 ;
-(void)_showDetailsForIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(id)_colorThemeForPodcast:(id)arg1 ;
-(MTTVPodcastGoneDarkDetailViewController *)goneDarkDetailViewController;
-(void)highlightEpisodeUuid:(id)arg1 ;
-(void)setGoneDarkDetailViewController:(MTTVPodcastGoneDarkDetailViewController *)arg1 ;
@end
