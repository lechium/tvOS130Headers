/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDVideoStreamInterfaceDelegate <NSObject>
@required
-(void)videoStream:(id)arg1 didStartRelay:(id)arg2;
-(void)videoStream:(id)arg1 didStart:(id)arg2;
-(void)videoStream:(id)arg1 didStop:(id)arg2;
-(void)videoStreamDidNetworkImprove:(id)arg1;
-(void)videoStreamDidNetworkDeteriorate:(id)arg1;
-(void)videoStreamDidUpdateConfiguration:(id)arg1;

@end
