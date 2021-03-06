/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:25 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CUPairingDaemonXPCInterface
@required
-(void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)deletePairingIdentityWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)getPairedPeersWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2;
-(void)savePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)removePairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3;
-(void)showWithCompletion:(/*^block*/id)arg1;
-(void)startMonitoringWithOptions:(unsigned long long)arg1;

@end

