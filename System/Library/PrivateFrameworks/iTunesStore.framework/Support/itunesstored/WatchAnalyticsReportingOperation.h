/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSWatchMetricsEventsController;

@interface WatchAnalyticsReportingOperation : ISOperation {

	long long _insertTimestamp;
	SSWatchMetricsEventsController* _controller;

}

@property (nonatomic,readonly) SSWatchMetricsEventsController * controller;              //@synthesize controller=_controller - In the implementation block
-(id)init;
-(void)run;
-(SSWatchMetricsEventsController *)controller;
-(id)initWithController:(id)arg1 ;
@end
