/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:32 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNodeMessage.h>

@class FigCaptureStillImageSettings, FigCaptureRecordingSettings;

@interface BWNodeSampleBufferMessage : BWNodeMessage {

	opaqueCMSampleBufferRef _sampleBuffer;
	FigCaptureStillImageSettings* _stillImageSettings;
	FigCaptureRecordingSettings* _recordingSettings;

}

@property (readonly) opaqueCMSampleBufferRef sampleBuffer; 
@property (readonly) FigCaptureStillImageSettings * stillImageSettings; 
@property (readonly) FigCaptureRecordingSettings * recordingSettings; 
+(id)newMessageWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
+(id)newMessageWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 ;
+(id)newMessageWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 recordingSettings:(id)arg2 ;
-(void)dealloc;
-(opaqueCMSampleBufferRef)sampleBuffer;
-(id)_initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 stillImageSettings:(id)arg2 recordingSettings:(id)arg3 ;
-(FigCaptureStillImageSettings *)stillImageSettings;
-(FigCaptureRecordingSettings *)recordingSettings;
@end

