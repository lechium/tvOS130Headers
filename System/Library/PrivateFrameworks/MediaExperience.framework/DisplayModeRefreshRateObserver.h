/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CADisplay;

@interface DisplayModeRefreshRateObserver : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	double _refreshRate;
	CADisplay* _tvOutDisplay;

}
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(int)updateHDMILatencyOnCoreAnimation:(double)arg1 ;
-(double)readHDMILatencyFromCoreAnimation;
@end

