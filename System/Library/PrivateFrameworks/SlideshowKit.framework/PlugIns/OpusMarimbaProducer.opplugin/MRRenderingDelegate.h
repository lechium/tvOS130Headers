/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusMarimbaProducer.opplugin/OpusMarimbaProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRRenderingDelegate <NSObject>
@property (nonatomic,readonly) BOOL hudIsOn; 
@optional
-(void)renderer:(id)arg1 didRenderAtTime:(double)arg2;
-(void)renderer:(id)arg1 willRenderAtTime:(double)arg2;
-(BOOL)slideshowShouldWrap;
-(void)hideHUD;
-(void)showHUD;
-(void)resumeMusic;
-(void)pauseMusic;
-(void)renderer:(id)arg1 renderingTimeLogMessage:(id)arg2 withTimestamp:(double)arg3;
-(BOOL)hudIsOn;
-(void)isMorphingWithProgress:(float)arg1;
-(void)setAudioFadingLevel:(float)arg1 andDuckingLevel:(float)arg2;

@end

