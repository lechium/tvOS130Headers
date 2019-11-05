/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVCKAsynchronousOperation.h>

@class NSNotificationCenter, NSString;

@interface TVCKAwaitNotificationOperation : TVCKAsynchronousOperation {

	NSNotificationCenter* _notificationCenter;
	NSString* _notificationName;
	id _notificationObject;

}

@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;              //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,copy,readonly) NSString * notificationName;                       //@synthesize notificationName=_notificationName - In the implementation block
@property (nonatomic,readonly) id notificationObject;                                  //@synthesize notificationObject=_notificationObject - In the implementation block
-(id)init;
-(void)dealloc;
-(void)cancel;
-(NSString *)notificationName;
-(NSNotificationCenter *)notificationCenter;
-(id)notificationObject;
-(id)initWithNotificationCenter:(id)arg1 name:(id)arg2 object:(id)arg3 ;
-(void)_didReceiveNotification:(id)arg1 ;
@end
