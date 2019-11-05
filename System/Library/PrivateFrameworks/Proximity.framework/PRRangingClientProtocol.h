/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Proximity.framework/Proximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PRRangingClientProtocol <NSObject>
@optional
-(void)didReceiveNewSolutions:(id)arg1;
-(void)remoteDevice:(id)arg1 didChangeState:(long long)arg2;
-(void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;

@required
-(void)didFailWithError:(id)arg1;
-(void)rangingServiceDidUpdateState:(unsigned long long)arg1;

@end
