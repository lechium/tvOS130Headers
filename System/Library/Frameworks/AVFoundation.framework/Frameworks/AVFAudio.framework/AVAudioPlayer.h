/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSData, NSDictionary, AVAudioFormat, NSArray;

@interface AVAudioPlayer : NSObject {

	id _impl;
	NSString* _currentDevice;

}

@property (getter=isPlaying,readonly) BOOL playing; 
@property (readonly) unsigned long long numberOfChannels; 
@property (readonly) double duration; 
@property (copy) NSString * currentDevice;                              //@synthesize currentDevice=_currentDevice - In the implementation block
@property (__weak) id<AVAudioPlayerDelegate> delegate; 
@property (readonly) NSURL * url; 
@property (readonly) NSData * data; 
@property (assign) float pan; 
@property (assign) float volume; 
@property (assign) BOOL enableRate; 
@property (assign) float rate; 
@property (assign) double currentTime; 
@property (readonly) double deviceCurrentTime; 
@property (assign) long long numberOfLoops; 
@property (readonly) NSDictionary * settings; 
@property (readonly) AVAudioFormat * format; 
@property (getter=isMeteringEnabled) BOOL meteringEnabled; 
@property (nonatomic,copy) NSArray * channelAssignments; 
-(void)dealloc;
-(void)finalize;
-(id<AVAudioPlayerDelegate>)delegate;
-(void)setDelegate:(id<AVAudioPlayerDelegate>)arg1 ;
-(NSData *)data;
-(void)stop;
-(NSURL *)url;
-(void)pause;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(double)duration;
-(AVAudioFormat *)format;
-(NSDictionary *)settings;
-(NSString *)currentDevice;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(float)pan;
-(void)setPan:(float)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(BOOL)isPlaying;
-(BOOL)isMeteringEnabled;
-(void)setMeteringEnabled:(BOOL)arg1 ;
-(void)updateMeters;
-(float)peakPowerForChannel:(unsigned long long)arg1 ;
-(float)averagePowerForChannel:(unsigned long long)arg1 ;
-(id)impl;
-(unsigned long long)numberOfChannels;
-(void)handleInterruption:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 fileTypeHint:(id)arg2 error:(id*)arg3 ;
-(BOOL)prepareToPlay;
-(BOOL)play;
-(BOOL)playAtTime:(double)arg1 ;
-(void)setVolume:(float)arg1 fadeDuration:(double)arg2 ;
-(void)setEnableRate:(BOOL)arg1 ;
-(BOOL)enableRate;
-(double)currentTime;
-(double)deviceCurrentTime;
-(void)setCurrentTime:(double)arg1 ;
-(void)setNumberOfLoops:(long long)arg1 ;
-(long long)numberOfLoops;
-(NSArray *)channelAssignments;
-(void)setChannelAssignments:(NSArray *)arg1 ;
-(id)audioSession;
-(void)setAudioSession:(id)arg1 ;
-(BOOL)mixToUplink;
-(void)setMixToUplink:(BOOL)arg1 ;
-(void)setCurrentDevice:(NSString *)arg1 ;
-(void)privRemoveSessionListener;
-(void)finishedPlaying:(id)arg1 ;
-(void)decodeError:(id)arg1 ;
-(void)endInterruption;
-(void)endInterruptionWithFlags:(id)arg1 ;
-(void)beginInterruption;
-(id)initBase;
@end

