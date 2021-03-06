/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:07:55 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVAirPlay.app/TVAirPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVAirPlay/TVAirPlayAPRKSession.h>

@protocol TVAirPlayAPRKSessionDelegate, OS_dispatch_source;
@class APRKStreamRenderer, UIView, NSObject, NSString;

@interface TVAirPlayAPRKVideoSession : NSObject <TVAirPlayAPRKSession> {

	id<TVAirPlayAPRKSessionDelegate> _delegate;
	APRKStreamRenderer* _streamRenderer;
	UIView* _videoView;
	NSObject*<OS_dispatch_source> _userActivityTimer;

}

@property (nonatomic,retain) APRKStreamRenderer * streamRenderer;                           //@synthesize streamRenderer=_streamRenderer - In the implementation block
@property (nonatomic,retain) UIView * videoView;                                            //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> userActivityTimer;               //@synthesize userActivityTimer=_userActivityTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long sessionType; 
@property (assign,nonatomic,__weak) id<TVAirPlayAPRKSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSString *)description;
-(void)dealloc;
-(id<TVAirPlayAPRKSessionDelegate>)delegate;
-(void)setDelegate:(id<TVAirPlayAPRKSessionDelegate>)arg1 ;
-(long long)sessionType;
-(UIView *)videoView;
-(void)setVideoView:(UIView *)arg1 ;
-(void)userStop;
-(void)wasRegistered;
-(void)wasDeregistered;
-(id)initWithStreamRenderer:(id)arg1 ;
-(void)_cancelUserActivityTimer;
-(void)_startUserActivityTimer;
-(NSObject*<OS_dispatch_source>)userActivityTimer;
-(void)setUserActivityTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(APRKStreamRenderer *)streamRenderer;
-(void)setStreamRenderer:(APRKStreamRenderer *)arg1 ;
@end

