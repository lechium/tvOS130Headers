/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:51:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BKSProcessDelegate <NSObject>
@optional
-(void)process:(id)arg1 taskStateDidChange:(long long)arg2;
-(void)process:(id)arg1 isBeingDebugged:(BOOL)arg2;
-(void)process:(id)arg1 didExitWithContext:(id)arg2;
-(void)processWillExpire:(id)arg1;

@end

