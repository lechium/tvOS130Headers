/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVSUIViewServiceProxyDelegate <NSObject>
@optional
-(void)proxy:(id)arg1 didChangeState:(long long)arg2;
-(void)proxy:(id)arg1 didReceiveItemsFromViewService:(id)arg2 reply:(/*^block*/id)arg3;
-(void)proxy:(id)arg1 didEncounterError:(id)arg2;

@required
-(void)proxy:(id)arg1 didCompleteViewServiceDismissal:(id)arg2 withItems:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end
