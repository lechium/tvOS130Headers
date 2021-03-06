/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:52:40 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVIdleScreen.app/TVIdleScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVIdleScreen/TVIdleScreen-Structs.h>
#import <UIKitCore/UIView.h>

@protocol TVIBackgroundViewDelegate, TVIBackgroundViewDataSource, OS_dispatch_group;
@class TVPPlayer, TVPVideoView, TVILocationLabelManager, UIView, NSArray, UIViewPropertyAnimator, NSObject, TVSStateMachine, TVPURLMediaItem;

@interface TVIBackgroundView : UIView {

	BOOL _waitingForReadyForDisplay;
	id<TVIBackgroundViewDelegate> _delegate;
	id<TVIBackgroundViewDataSource> _dataSource;
	TVPPlayer* _player;
	TVPVideoView* _videoView;
	TVILocationLabelManager* _locationLabelManager;
	UIView* _shroudView;
	id _playbackEndTimeObserverToken;
	NSArray* _locationsTimeObserverTokens;
	id _playbackStateObserver;
	UIViewPropertyAnimator* _shroudFadeInAnimator;
	UIViewPropertyAnimator* _shroudFadeOutAnimator;
	NSObject*<OS_dispatch_group> _videoFadeDispatchGroup;
	TVSStateMachine* _transitionStateMachine;
	/*^block*/id _didStartPlaybackHandler;

}

@property (nonatomic,readonly) TVPPlayer * player;                                             //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) TVPVideoView * videoView;                                       //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,readonly) TVILocationLabelManager * locationLabelManager;                 //@synthesize locationLabelManager=_locationLabelManager - In the implementation block
@property (nonatomic,readonly) UIView * shroudView;                                            //@synthesize shroudView=_shroudView - In the implementation block
@property (nonatomic,retain) id playbackEndTimeObserverToken;                                  //@synthesize playbackEndTimeObserverToken=_playbackEndTimeObserverToken - In the implementation block
@property (nonatomic,retain) NSArray * locationsTimeObserverTokens;                            //@synthesize locationsTimeObserverTokens=_locationsTimeObserverTokens - In the implementation block
@property (assign,nonatomic,__weak) id playbackStateObserver;                                  //@synthesize playbackStateObserver=_playbackStateObserver - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * shroudFadeInAnimator;                    //@synthesize shroudFadeInAnimator=_shroudFadeInAnimator - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * shroudFadeOutAnimator;                   //@synthesize shroudFadeOutAnimator=_shroudFadeOutAnimator - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> videoFadeDispatchGroup;              //@synthesize videoFadeDispatchGroup=_videoFadeDispatchGroup - In the implementation block
@property (assign,nonatomic) BOOL waitingForReadyForDisplay;                                   //@synthesize waitingForReadyForDisplay=_waitingForReadyForDisplay - In the implementation block
@property (nonatomic,retain) TVSStateMachine * transitionStateMachine;                         //@synthesize transitionStateMachine=_transitionStateMachine - In the implementation block
@property (nonatomic,copy) id didStartPlaybackHandler;                                         //@synthesize didStartPlaybackHandler=_didStartPlaybackHandler - In the implementation block
@property (assign,nonatomic,__weak) id<TVIBackgroundViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<TVIBackgroundViewDataSource> dataSource;                //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) TVPURLMediaItem * currentMediaItem; 
@property (nonatomic,readonly) TVPURLMediaItem * nextMediaItem; 
+(void)initialize;
-(void)dealloc;
-(id<TVIBackgroundViewDelegate>)delegate;
-(void)setDelegate:(id<TVIBackgroundViewDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)pause;
-(TVPPlayer *)player;
-(id<TVIBackgroundViewDataSource>)dataSource;
-(void)setDataSource:(id<TVIBackgroundViewDataSource>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)mediaItems;
-(void)didMoveToWindow;
-(TVPURLMediaItem *)currentMediaItem;
-(TVPURLMediaItem *)nextMediaItem;
-(id)previousMediaItem;
-(TVPVideoView *)videoView;
-(void)playWithCompletion:(/*^block*/id)arg1 ;
-(void)togglePlayPause;
-(void)toggleLocationLabel;
-(void)nextWithContext:(id)arg1 ;
-(void)addMediaItem:(id)arg1 ;
-(void)removeMediaItem:(id)arg1 ;
-(void)_initializeTransitionStateMachine;
-(void)_handleMediaItemWillChange:(id)arg1 ;
-(void)_handleMediaItemDidChange:(id)arg1 ;
-(void)_handlePlaybackError:(id)arg1 ;
-(void)_handlePlaybackState:(id)arg1 ;
-(void)_removeLocationsBoundaryTimeObservers;
-(void)_removePlaybackEndBoundaryTimeObservers;
-(TVSStateMachine *)transitionStateMachine;
-(TVILocationLabelManager *)locationLabelManager;
-(UIViewPropertyAnimator *)shroudFadeOutAnimator;
-(UIViewPropertyAnimator *)shroudFadeInAnimator;
-(UIView *)shroudView;
-(id)playbackStateObserver;
-(void)setPlaybackStateObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_group>)videoFadeDispatchGroup;
-(BOOL)waitingForReadyForDisplay;
-(void)setWaitingForReadyForDisplay:(BOOL)arg1 ;
-(void)setVideoFadeDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)_addPlaybackEndBoundaryTimeObservers;
-(NSArray *)locationsTimeObserverTokens;
-(void)setLocationsTimeObserverTokens:(NSArray *)arg1 ;
-(id)playbackEndTimeObserverToken;
-(void)setPlaybackEndTimeObserverToken:(id)arg1 ;
-(void)setShroudFadeInAnimator:(UIViewPropertyAnimator *)arg1 ;
-(void)setShroudFadeOutAnimator:(UIViewPropertyAnimator *)arg1 ;
-(void)setTransitionStateMachine:(TVSStateMachine *)arg1 ;
-(id)didStartPlaybackHandler;
-(void)setDidStartPlaybackHandler:(id)arg1 ;
@end

