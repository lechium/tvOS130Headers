/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:31 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMISystemResourceUsageMonitorProtocol
@property (__weak) id<HMISystemResourceUsageMonitorDelegate> delegate; 
@required
-(id<HMISystemResourceUsageMonitorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)start;
-(id)getCurrentSystemResourceUsage;

@end

