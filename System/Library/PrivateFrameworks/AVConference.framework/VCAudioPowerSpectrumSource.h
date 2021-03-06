/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCObject.h>
#import <AVConference/VCAudioIOSink.h>

@class NSString;

@interface VCAudioPowerSpectrumSource : VCObject <VCAudioIOSink> {

	long long _streamToken;
	VCAudioPowerSpectrumSourceRealtimeContext* _realtimeContext;

}

@property (nonatomic,readonly) long long streamToken;                                                   //@synthesize streamToken=_streamToken - In the implementation block
@property (nonatomic,readonly) VCAudioPowerSpectrumSourceRealtimeContext* realtimeContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(long long)streamToken;
-(id)initWithStreamToken:(long long)arg1 delegate:(id)arg2 ;
-(VCAudioPowerSpectrumSourceRealtimeContext*)realtimeContext;
-(void)cleanupAudioPowerSpectrumSinks;
-(void)cleanupQueue:(opaqueCMSimpleQueue*)arg1 ;
-(void)pushAudioSamples:(opaqueVCAudioBufferListRef)arg1 ;
-(void)registerAudioPowerSpectrumSink:(id)arg1 callback:(/*function pointer*/void*)arg2 ;
-(void)unregisterAudioPowerSpectrumSink:(id)arg1 ;
@end

