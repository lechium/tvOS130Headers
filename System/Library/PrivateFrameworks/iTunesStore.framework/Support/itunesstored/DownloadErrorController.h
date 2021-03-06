/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableArray, NSMutableOrderedSet;

@interface DownloadErrorController : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _errors;
	NSMutableOrderedSet* _scheduledErrors;
	NSObject*<OS_dispatch_source> _scheduledErrorTimer;

}
+(id)sharedErrorController;
-(id)init;
-(void)dealloc;
-(void)_networkTypeChangedNotification:(id)arg1 ;
-(void)_cancelErrorsPassingTest:(/*^block*/id)arg1 ;
-(void)_scheduleErrorDisplay:(id)arg1 ;
-(void)_displayScheduledErrors;
-(void)cancelDialogsWithDownloadIdentifier:(long long)arg1 ;
-(void)showDownloadError:(id)arg1 ;
@end

