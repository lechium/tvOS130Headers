/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPPlaybackViewController.h>
#import <TVMLKit/TVPlayingUI.h>

@class UIViewController, _TVMLPlayer, TVPMusicContextMenuData, NSString;

@interface _TVMLPlayerViewController : TVPPlaybackViewController <TVPlayingUI> {

	UIViewController* _overlayViewController;
	BOOL _viewDidAppear;
	_TVMLPlayer* _tvmlPlayer;
	TVPMusicContextMenuData* _contextMenuData;

}

@property (nonatomic,readonly) _TVMLPlayer * tvmlPlayer;                             //@synthesize tvmlPlayer=_tvmlPlayer - In the implementation block
@property (nonatomic,retain) TVPMusicContextMenuData * contextMenuData;              //@synthesize contextMenuData=_contextMenuData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long resumeMenuBehavior; 
@property (nonatomic,retain) UIViewController * overlayViewController;               //@synthesize overlayViewController=_overlayViewController - In the implementation block
@property (assign,nonatomic) BOOL showsVideoControls; 
-(void)dealloc;
-(void)loadView;
-(TVPMusicContextMenuData *)contextMenuData;
-(void)setContextMenuData:(TVPMusicContextMenuData *)arg1 ;
-(UIViewController *)overlayViewController;
-(id)initWithTVMLPlayer:(id)arg1 ;
-(long long)resumeMenuBehavior;
-(void)setResumeMenuBehavior:(long long)arg1 ;
-(void)setOverlayViewController:(UIViewController *)arg1 ;
-(void)_transportBarVisiblityChanged:(id)arg1 ;
-(_TVMLPlayer *)tvmlPlayer;
-(void)contextMenuForMediaItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_currentChildViewControllerWillChangeTo:(id)arg1 ;
-(void)_currentChildViewControllerDidChangeFrom:(id)arg1 ;
@end
