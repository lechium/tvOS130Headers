/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface NEUserNotification : NSObject {

	BOOL _isBanner;
	id _notification;
	id _notificationSource;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _callback;

}

@property (assign) BOOL isBanner;                                           //@synthesize isBanner=_isBanner - In the implementation block
@property (retain) id notification;                                         //@synthesize notification=_notification - In the implementation block
@property (retain) id notificationSource;                                   //@synthesize notificationSource=_notificationSource - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,copy) id callback;                                     //@synthesize callback=_callback - In the implementation block
+(Class)getUIDeviceClass;
+(id)createLAContext;
+(BOOL)shouldPromptForLocalAuthentication;
+(void)promptForLocalAuthenticationWithReason:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancel;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(id)notification;
-(void)setNotification:(id)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setNotificationSource:(id)arg1 ;
-(id)initBannerWithHeader:(id)arg1 message:(id)arg2 alternateMessage:(id)arg3 defaultMessage:(id)arg4 ;
-(BOOL)postNotificationWithCallbackQueue:(id)arg1 callbackHandler:(/*^block*/id)arg2 ;
-(id)initAuthenticationWithHeader:(id)arg1 options:(id)arg2 flags:(unsigned long long)arg3 ;
-(void)setIsBanner:(BOOL)arg1 ;
-(id)notificationSource;
-(BOOL)isBanner;
-(void)executeOnMainLoop:(/*^block*/id)arg1 ;
-(id)initAddConfigurationsForApp:(id)arg1 warningHeader:(id)arg2 warning:(id)arg3 ;
-(id)initObsoleteAlertWithAppName:(id)arg1 ;
@end
