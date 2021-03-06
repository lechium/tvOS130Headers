/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOMapServiceTraits;


@protocol GEOMapServiceBatchNearbyTicket <GEOMapServiceCancellableTicket,GEOMapServiceThrottlableTicket>
@property (nonatomic,readonly) GEOMapServiceTraits * traits; 
@required
-(void)cancel;
-(void)submitWithHandler:(/*^block*/id)arg1 networkActivity:(/*^block*/id)arg2;
-(GEOMapServiceTraits *)traits;
-(void)submitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 networkActivity:(/*^block*/id)arg3;
-(id)resultSectionHeaderForCategory:(id)arg1;

@end

