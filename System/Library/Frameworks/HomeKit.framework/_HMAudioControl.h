/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/HMFMessageReceiver.h>
#import <HomeKit/HMObjectMerge.h>

@protocol _HMAudioControlDelegate;
@class HMFUnfairLock, NSUUID, HMMediaSession, _HMContext, NSString;

@interface _HMAudioControl : NSObject <HMFMessageReceiver, HMObjectMerge> {

	HMFUnfairLock* _lock;
	BOOL _muted;
	float _volume;
	NSUUID* _uniqueIdentifier;
	HMMediaSession* _mediaSession;
	id<_HMAudioControlDelegate> _delegate;
	_HMContext* _context;

}

@property (nonatomic,__weak,readonly) HMMediaSession * mediaSession;                          //@synthesize mediaSession=_mediaSession - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (__weak) id<_HMAudioControlDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign) float volume;                                                              //@synthesize volume=_volume - In the implementation block
@property (getter=isMuted) BOOL muted;                                                        //@synthesize muted=_muted - In the implementation block
@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
-(id<_HMAudioControlDelegate>)delegate;
-(void)setDelegate:(id<_HMAudioControlDelegate>)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_registerNotificationHandlers;
-(void)__configureWithContext:(id)arg1 ;
-(void)_handleAudioControlUpdated:(id)arg1 ;
-(HMMediaSession *)mediaSession;
-(id)messageDestination;
-(id)initWithMediaSession:(id)arg1 ;
-(void)updateVolume:(float)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateMuted:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

