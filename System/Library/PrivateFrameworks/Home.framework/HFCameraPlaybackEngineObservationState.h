/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HFCameraPlaybackEngineObservationOptions;

@interface HFCameraPlaybackEngineObservationState : NSObject {

	HFCameraPlaybackEngineObservationOptions* _options;
	id _timeObservationToken;

}

@property (nonatomic,retain) HFCameraPlaybackEngineObservationOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) id timeObservationToken;                                         //@synthesize timeObservationToken=_timeObservationToken - In the implementation block
-(HFCameraPlaybackEngineObservationOptions *)options;
-(void)setOptions:(HFCameraPlaybackEngineObservationOptions *)arg1 ;
-(void)setTimeObservationToken:(id)arg1 ;
-(id)timeObservationToken;
@end
