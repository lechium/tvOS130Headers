/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, BatterySaverWatcherDelegate;
@class NSObject;

@interface BatterySaverWatcher : NSObject {

	BOOL _enabled;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	int _token;
	id<BatterySaverWatcherDelegate> _delegate;

}

@property (__weak,readonly) id<BatterySaverWatcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<BatterySaverWatcherDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)_notifyDelegate;
-(void)_updateStatus;
-(void)_registerNotifier;
-(unsigned long long)_getState;
-(BOOL)batterySaverEnabled;
@end
