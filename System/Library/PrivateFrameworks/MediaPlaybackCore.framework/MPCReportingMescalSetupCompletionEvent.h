/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MPCReportingEvent.h>

@class NSError, NSString;

@interface MPCReportingMescalSetupCompletionEvent : NSObject <MPCReportingEvent> {

	NSError* _error;
	double _setupDuration;

}

@property (nonatomic,retain) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) double setupDuration;                  //@synthesize setupDuration=_setupDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isValidReportingEvent;
-(unsigned long long)reportingEventType;
-(double)setupDuration;
-(void)setSetupDuration:(double)arg1 ;
@end
