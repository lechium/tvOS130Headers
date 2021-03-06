/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/SDAutoUnlockTransportClient.h>

@protocol SDAutoUnlockSessionDelegate, OS_dispatch_queue, OS_dispatch_source;
@class NSUUID, NSString, NSObject, SDAutoUnlockAKSSession;

@interface SDAutoUnlockPairingSession : NSObject <SDAutoUnlockTransportClient> {

	id<SDAutoUnlockSessionDelegate> _delegate;
	NSUUID* _sessionID;
	NSString* _deviceID;
	long long _pairingAKSSession;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	SDAutoUnlockAKSSession* _aksSession;
	NSObject*<OS_dispatch_source> _responseTimer;

}

@property (retain) NSObject*<OS_dispatch_source> responseTimer;                            //@synthesize responseTimer=_responseTimer - In the implementation block
@property (assign,nonatomic,__weak) id<SDAutoUnlockSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSUUID * sessionID;                                           //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy) NSString * deviceID;                                            //@synthesize deviceID=_deviceID - In the implementation block
@property (assign) long long pairingAKSSession;                                            //@synthesize pairingAKSSession=_pairingAKSSession - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> sessionQueue;                    //@synthesize sessionQueue=_sessionQueue - In the implementation block
@property (nonatomic,retain) SDAutoUnlockAKSSession * aksSession;                          //@synthesize aksSession=_aksSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)invalidate;
-(id<SDAutoUnlockSessionDelegate>)delegate;
-(void)setDelegate:(id<SDAutoUnlockSessionDelegate>)arg1 ;
-(void)start;
-(NSUUID *)sessionID;
-(void)setSessionID:(NSUUID *)arg1 ;
-(NSString *)deviceID;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)sessionQueue;
-(void)setSessionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setResponseTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)responseTimer;
-(id)dataFromUUID:(id)arg1 ;
-(id)initWithDevice:(id)arg1 sessionID:(id)arg2 ;
-(void)notifyDelegateWithError:(id)arg1 ;
-(id)wrapPayload:(id)arg1 withType:(unsigned short)arg2 ;
-(void)invalidateResponseTimer;
-(void)restartResponseTimer:(unsigned long long)arg1 ;
-(SDAutoUnlockAKSSession *)aksSession;
-(void)handleTimerFired;
-(void)setAksSession:(SDAutoUnlockAKSSession *)arg1 ;
-(id)wrapPayload:(id)arg1 withType:(unsigned short)arg2 useProxy:(BOOL)arg3 senderID:(id)arg4 ;
-(long long)pairingAKSSession;
-(void)setPairingAKSSession:(long long)arg1 ;
@end

