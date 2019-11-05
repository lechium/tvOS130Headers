/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface VUINowPlayingMonitorBoundaryTimeObserverInfo : NSObject {

	BOOL _notifiedOfEntry;
	double _time;
	NSUUID* _token;
	/*^block*/id _handler;

}

@property (assign,nonatomic) double time;                       //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) BOOL notifiedOfEntry;              //@synthesize notifiedOfEntry=_notifiedOfEntry - In the implementation block
@property (nonatomic,retain) NSUUID * token;                    //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) id handler;                          //@synthesize handler=_handler - In the implementation block
-(id)handler;
-(NSUUID *)token;
-(void)setHandler:(id)arg1 ;
-(double)time;
-(void)setToken:(NSUUID *)arg1 ;
-(void)setTime:(double)arg1 ;
-(BOOL)notifiedOfEntry;
-(void)setNotifiedOfEntry:(BOOL)arg1 ;
@end
