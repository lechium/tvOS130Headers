/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATStatusMonitorObserver <NSObject>
@optional
-(void)monitor:(id)arg1 didUpdateWithStatus:(id)arg2;

@required
-(void)connection:(id)arg1 updatedProgress:(id)arg2;
-(void)connection:(id)arg1 updatedAssets:(id)arg2;

@end
