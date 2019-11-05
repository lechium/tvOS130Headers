/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRNowPlayingClientState.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, MRApplicationActivity, _MRDeviceInfoMessageProtobuf, _MRNowPlayingClientProtobuf, _MROriginProtobuf, NSArray;

@interface MRNowPlayingOriginClient : NSObject <MRNowPlayingClientState> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	BOOL _canBeNowPlayingApp;
	double _canBeNowPlayingAppTimestamp;
	BOOL _isOverrideApp;
	unsigned _routeDiscoveryMode;
	NSMutableArray* _applicationPickedRoutes;
	unsigned _inputMode;
	float _volume;
	unsigned _volumeCapabilities;
	MRApplicationActivity* _activity;
	_MRDeviceInfoMessageProtobuf* _deviceInfo;
	/*^block*/id _playbackQueueCallback;
	/*^block*/id _playbackQueueTransactionCallback;
	/*^block*/id _capabilitiesCallback;
	/*^block*/id _commandCallback;
	/*^block*/id _beginLyricsEventCallback;
	/*^block*/id _endLyricsEventCallback;
	/*^block*/id _playbackSessionCallback;
	/*^block*/id _playbackSessionMigrateRequestCallback;
	NSMutableArray* _nowPlayingClients;
	unsigned _hardwareRemoteBehavior;
	_MRNowPlayingClientProtobuf* _activeNowPlayingClient;
	_MROriginProtobuf* _origin;

}

@property (nonatomic,readonly) _MROriginProtobuf * origin;                                      //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) BOOL canBeNowPlayingApp; 
@property (assign,nonatomic) BOOL isOverrideApp; 
@property (assign,nonatomic) unsigned hardwareRemoteBehavior;                                   //@synthesize hardwareRemoteBehavior=_hardwareRemoteBehavior - In the implementation block
@property (assign,nonatomic) unsigned routeDiscoveryMode; 
@property (nonatomic,copy) NSArray * applicationPickedRoutes; 
@property (assign,nonatomic) unsigned inputMode; 
@property (assign,nonatomic) unsigned volumeCapabilities; 
@property (assign,nonatomic) float volume; 
@property (nonatomic,retain) MRApplicationActivity * activity; 
@property (nonatomic,retain) _MRDeviceInfoMessageProtobuf * deviceInfo; 
@property (nonatomic,copy) id playbackQueueCallback; 
@property (nonatomic,copy) id playbackQueueTransactionCallback; 
@property (nonatomic,copy) id commandCallback; 
@property (nonatomic,copy) id playbackSessionCallback; 
@property (nonatomic,copy) id playbackSessionMigrateRequestCallback; 
@property (nonatomic,copy) id beginLyricsEventCallback; 
@property (nonatomic,copy) id endLyricsEventCallback; 
@property (nonatomic,retain) _MRNowPlayingClientProtobuf * activeNowPlayingClient;              //@synthesize activeNowPlayingClient=_activeNowPlayingClient - In the implementation block
@property (nonatomic,readonly) NSArray * nowPlayingClients; 
-(id)debugDescription;
-(id)description;
-(void)dealloc;
-(MRApplicationActivity *)activity;
-(void)setActivity:(MRApplicationActivity *)arg1 ;
-(_MROriginProtobuf *)origin;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(unsigned)inputMode;
-(void)setInputMode:(unsigned)arg1 ;
-(id)initWithOrigin:(id)arg1 ;
-(_MRDeviceInfoMessageProtobuf *)deviceInfo;
-(void)setDeviceInfo:(_MRDeviceInfoMessageProtobuf *)arg1 ;
-(void)setPlaybackSessionCallback:(id)arg1 ;
-(void)setCanBeNowPlayingApp:(BOOL)arg1 ;
-(BOOL)isOverrideApp;
-(void)setIsOverrideApp:(BOOL)arg1 ;
-(void)setActiveNowPlayingClient:(_MRNowPlayingClientProtobuf *)arg1 ;
-(unsigned)volumeCapabilities;
-(void)setVolumeCapabilities:(unsigned)arg1 ;
-(void)setHardwareRemoteBehavior:(unsigned)arg1 ;
-(void)setCommandCallback:(id)arg1 ;
-(void)setPlaybackSessionMigrateRequestCallback:(id)arg1 ;
-(void)restoreNowPlayingClientState;
-(NSArray *)nowPlayingClients;
-(void)removeClient:(id)arg1 ;
-(void)setPlaybackQueueCallback:(id)arg1 ;
-(void)setPlaybackQueueTransactionCallback:(id)arg1 ;
-(id)playbackSessionCallback;
-(id)playbackSessionMigrateRequestCallback;
-(id)commandCallback;
-(id)endLyricsEventCallback;
-(id)beginLyricsEventCallback;
-(id)playbackQueueTransactionCallback;
-(id)playbackQueueCallback;
-(void)setBeginLyricsEventCallback:(id)arg1 ;
-(void)setEndLyricsEventCallback:(id)arg1 ;
-(void)_registerMediaServerNotifications;
-(void)_unregisterMediaServerNotifications;
-(BOOL)canBeNowPlayingApp;
-(void)_avSessionMediaServicesResetNotification:(id)arg1 ;
-(NSArray *)applicationPickedRoutes;
-(void)setApplicationPickedRoutes:(NSArray *)arg1 ;
-(void)setRouteDiscoveryMode:(unsigned)arg1 ;
-(unsigned)routeDiscoveryMode;
-(_MRNowPlayingClientProtobuf *)activeNowPlayingClient;
-(id)existingNowPlayingClientForPlayerPath:(id)arg1 ;
-(id)nowPlayingClientForPlayerPath:(id)arg1 ;
-(unsigned)hardwareRemoteBehavior;
@end
