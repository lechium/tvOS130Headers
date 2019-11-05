/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NAFuture;


@protocol HMBMirrorProtocol <NSObject>
@property (nonatomic,readonly) id<HMBLocalZoneID> zoneID; 
@property (nonatomic,readonly) NAFuture * startUp; 
@required
-(id)destroy;
-(id)shutdown;
-(id)flush;
-(id<HMBLocalZoneID>)zoneID;
-(NAFuture *)startUp;
-(void)startUpWithLocalZone:(id)arg1;
-(id)triggerOutputForOutputRow:(unsigned long long)arg1 options:(id)arg2;

@end
