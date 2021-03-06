/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:07:55 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVAirPlay.app/TVAirPlay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVAirPlay/TVAirPlayLegacySession.h>

@protocol TVAirPlayLegacySessionDelegate;
@class NSObject, NSDictionary, NSString;

@interface TVAirPlayStreamingAudioSession : NSObject <TVAirPlayLegacySession> {

	BOOL _deactivated;
	unsigned _sessionID;
	NSObject*<TVAirPlayLegacySessionDelegate> _delegate;
	NSDictionary* _initialOptions;

}

@property (nonatomic,copy) NSDictionary * initialOptions;                                            //@synthesize initialOptions=_initialOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long sessionType; 
@property (nonatomic,readonly) unsigned sessionID;                                                   //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL deactivated;                                                       //@synthesize deactivated=_deactivated - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<TVAirPlayLegacySessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSString *)description;
-(NSObject*<TVAirPlayLegacySessionDelegate>)delegate;
-(void)setDelegate:(NSObject*<TVAirPlayLegacySessionDelegate>)arg1 ;
-(unsigned)sessionID;
-(long long)sessionType;
-(void)startWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)deactivated;
-(void)setDeactivated:(BOOL)arg1 ;
-(void)userStop;
-(BOOL)stopWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)performAction:(id)arg1 withOptions:(id)arg2 outInfo:(id*)arg3 error:(id*)arg4 ;
-(BOOL)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 error:(id*)arg4 ;
-(id)getProperty:(id)arg1 qualifier:(id)arg2 error:(id*)arg3 ;
-(NSDictionary *)initialOptions;
-(void)setInitialOptions:(NSDictionary *)arg1 ;
@end

