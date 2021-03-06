/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:07:55 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVAirPlay.app/TVAirPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class TVAirPlayPresentationSession, TVAirPlayPresentationView, PBSPlayPauseButtonEventAssertion, CALayer;

@interface TVAirPlayPresentationViewController : UIViewController {

	TVAirPlayPresentationSession* _session;
	TVAirPlayPresentationView* _presentationView;
	unsigned long long _stopCount;
	PBSPlayPauseButtonEventAssertion* _playPauseAssertion;

}

@property (nonatomic,retain) TVAirPlayPresentationView * presentationView;                         //@synthesize presentationView=_presentationView - In the implementation block
@property (assign,nonatomic) unsigned long long stopCount;                                         //@synthesize stopCount=_stopCount - In the implementation block
@property (nonatomic,readonly) PBSPlayPauseButtonEventAssertion * playPauseAssertion;              //@synthesize playPauseAssertion=_playPauseAssertion - In the implementation block
@property (nonatomic,readonly) TVAirPlayPresentationSession * session;                             //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) CALayer * presentationLayer; 
-(id)initWithCoder:(id)arg1 ;
-(TVAirPlayPresentationSession *)session;
-(id)initWithSession:(id)arg1 ;
-(CALayer *)presentationLayer;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)preferredFocusEnvironments;
-(void)_buttonPressed:(id)arg1 ;
-(TVAirPlayPresentationView *)presentationView;
-(void)setPresentationView:(TVAirPlayPresentationView *)arg1 ;
-(void)hideProgress;
-(void)_swipeGesture:(id)arg1 ;
-(void)showProgress;
-(unsigned long long)stopCount;
-(void)setStopCount:(unsigned long long)arg1 ;
-(PBSPlayPauseButtonEventAssertion *)playPauseAssertion;
@end

