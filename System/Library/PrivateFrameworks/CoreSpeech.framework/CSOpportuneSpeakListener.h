/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CSAudioStreamProvidingDelegate.h>
#import <CoreSpeech/CSSPGEndpointAnalyzerDelegate.h>
#import <CoreSpeech/CSMediaPlayingMonitorDelegate.h>

@protocol CSOpportuneSpeakListenerDelegate, CSAudioStreamProviding, CSAudioSessionProviding;
@class CSAudioStream, CSSPGEndpointAnalyzer, CSAudioRecordContext, NSMutableArray, NSString;

@interface CSOpportuneSpeakListener : NSObject <CSAudioStreamProvidingDelegate, CSSPGEndpointAnalyzerDelegate, CSMediaPlayingMonitorDelegate> {

	BOOL _isMediaPlayingNow;
	int _remoteVADSPGRatio;
	id<CSOpportuneSpeakListenerDelegate> _delegate;
	CSAudioStream* _audioStream;
	CSSPGEndpointAnalyzer* _spgEndpointAnalyzer;
	id<CSAudioStreamProviding> _audioStreamProvider;
	id<CSAudioSessionProviding> _audioSessionProvider;
	CSAudioRecordContext* _latestContext;
	NSMutableArray* _remoteVADAlignBuffer;
	unsigned long long _remoteVADAlignCount;

}

@property (nonatomic,retain) CSAudioStream * audioStream;                                       //@synthesize audioStream=_audioStream - In the implementation block
@property (nonatomic,retain) CSSPGEndpointAnalyzer * spgEndpointAnalyzer;                       //@synthesize spgEndpointAnalyzer=_spgEndpointAnalyzer - In the implementation block
@property (assign,nonatomic) int remoteVADSPGRatio;                                             //@synthesize remoteVADSPGRatio=_remoteVADSPGRatio - In the implementation block
@property (nonatomic,retain) id<CSAudioStreamProviding> audioStreamProvider;                    //@synthesize audioStreamProvider=_audioStreamProvider - In the implementation block
@property (nonatomic,retain) id<CSAudioSessionProviding> audioSessionProvider;                  //@synthesize audioSessionProvider=_audioSessionProvider - In the implementation block
@property (nonatomic,retain) CSAudioRecordContext * latestContext;                              //@synthesize latestContext=_latestContext - In the implementation block
@property (assign) BOOL isMediaPlayingNow;                                                      //@synthesize isMediaPlayingNow=_isMediaPlayingNow - In the implementation block
@property (nonatomic,retain) NSMutableArray * remoteVADAlignBuffer;                             //@synthesize remoteVADAlignBuffer=_remoteVADAlignBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long remoteVADAlignCount;                            //@synthesize remoteVADAlignCount=_remoteVADAlignCount - In the implementation block
@property (assign,nonatomic,__weak) id<CSOpportuneSpeakListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<CSOpportuneSpeakListenerDelegate>)delegate;
-(void)setDelegate:(id<CSOpportuneSpeakListenerDelegate>)arg1 ;
-(void)CSMediaPlayingMonitor:(id)arg1 didReceiveMediaPlayingChanged:(long long)arg2 ;
-(CSAudioStream *)audioStream;
-(void)setAudioStream:(CSAudioStream *)arg1 ;
-(void)audioStreamProvider:(id)arg1 didStopStreamUnexpectly:(long long)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2 ;
-(void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2 ;
-(void)_startRequestWithCompletion:(/*^block*/id)arg1 ;
-(id<CSAudioSessionProviding>)audioSessionProvider;
-(void)stopListenWithStateReset:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)startListenWithOption:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopListenWithCompletion:(/*^block*/id)arg1 ;
-(void)spgEndpointAnalyzer:(id)arg1 hasSilenceScoreEstimate:(double)arg2 ;
-(CSSPGEndpointAnalyzer *)spgEndpointAnalyzer;
-(void)setSpgEndpointAnalyzer:(CSSPGEndpointAnalyzer *)arg1 ;
-(int)remoteVADSPGRatio;
-(void)setRemoteVADSPGRatio:(int)arg1 ;
-(id<CSAudioStreamProviding>)audioStreamProvider;
-(void)setAudioStreamProvider:(id<CSAudioStreamProviding>)arg1 ;
-(void)setAudioSessionProvider:(id<CSAudioSessionProviding>)arg1 ;
-(CSAudioRecordContext *)latestContext;
-(void)setLatestContext:(CSAudioRecordContext *)arg1 ;
-(BOOL)isMediaPlayingNow;
-(void)setIsMediaPlayingNow:(BOOL)arg1 ;
-(NSMutableArray *)remoteVADAlignBuffer;
-(void)setRemoteVADAlignBuffer:(NSMutableArray *)arg1 ;
-(unsigned long long)remoteVADAlignCount;
-(void)setRemoteVADAlignCount:(unsigned long long)arg1 ;
@end

