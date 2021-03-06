/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class NSMutableArray;

@interface BWStillImageMultiCameraDoserNode : BWNode {

	long long _currentSettingsID;
	BOOL _performDosing;
	NSMutableArray* _stashedObjectsByInputIndex;

}
+(void)initialize;
-(void)dealloc;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(id)nodeType;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)_clearCaptureRequestState;
-(void)_configureCaptureRequestStateWithRequestedStillImageCaptureSettings:(id)arg1 resolvedStillImageCaptureSettings:(id)arg2 ;
-(id)_outputForNodeInputIndex:(unsigned long long)arg1 ;
-(void)_emitStashedObjectsIfReady;
-(id)initWithNumberOfInputs:(unsigned)arg1 ;
@end

