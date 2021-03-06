/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol HomeKitEventRemoteLoginMetricProtocol;
@class NSString, HMDLogEvent;

@interface HMDRemoteLoginInitiatorSession : HMFObject {

	NSString* _sessionID;
	HMDLogEvent*<HomeKitEventRemoteLoginMetricProtocol> _metric;

}

@property (nonatomic,readonly) NSString * sessionID;                                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) HMDLogEvent*<HomeKitEventRemoteLoginMetricProtocol> metric;              //@synthesize metric=_metric - In the implementation block
-(id)description;
-(void)dealloc;
-(NSString *)sessionID;
-(HMDLogEvent*<HomeKitEventRemoteLoginMetricProtocol>)metric;
-(void)setMetric:(HMDLogEvent*<HomeKitEventRemoteLoginMetricProtocol>)arg1 ;
-(id)initWithSessionID:(id)arg1 ;
@end

