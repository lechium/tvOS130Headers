/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/Support/accessoryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCNavigationXPCServerProtocol <NSObject>
@required
-(void)initConnection:(/*^block*/id)arg1;
-(void)notifyOfProvider:(id)arg1;
-(void)routeGuidance:(id)arg1 updateInfo:(id)arg2 componentIdList:(id)arg3;
-(void)routeGuidance:(id)arg1 maneuverUpdateInfo:(id)arg2 componentIdList:(id)arg3;
-(void)routeGuidance:(id)arg1 laneGuidanceInfo:(id)arg2 componentIdList:(id)arg3;
-(void)objectDetection:(id)arg1 startComponentIdList:(id)arg2 objectTypes:(id)arg3;
-(void)objectDetection:(id)arg1 stopComponentIdList:(id)arg2;

@end

