/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NEExtensionProviderProtocol <NSObject>
@required
-(void)wake;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)createWithCompletionHandler:(/*^block*/id)arg1;
-(void)dispose;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2;
-(void)stopWithReason:(int)arg1;

@end
