/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:52:10 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <AppStore/AppStore.RoundedCornerView.h>

@interface AppStore.VideoView : AppStore.RoundedCornerView {

	 previewFrameArtwork;
	 videoPlayer;
	 playerViewController;
	 playbackId;
	 templateMediaEvent;
	 templateClickEvent;
	 metricsPipeline;
	 configuration;
	 container;
	 videoUrl;
	 interactionState;
	 fullScreenVideoController;
	 fullScreenTransitionManager;
	 wasAudioOnPreFullScreen;
	 isFullScreen;
	 playWorkItem;
	 releaseAssetsAtNextPauseState;

}

@property (assign,nonatomic) double _cornerRadius; 
@property (assign,nonatomic) double _continuousCornerRadius; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)_cornerRadius;
-(void)_setCornerRadius:(double)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(double)_continuousCornerRadius;
-(void)didChangeAutoPlayVideoSetting;
-(void)updateAudioSessionCategoryWithIsAudioOn:(BOOL)arg1 ;
-(void)handleMediaServicesReset;
-(void)willEnterIdleMode;
-(void)willExitIdleMode;
@end

