/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject, _HMFNetManagerWoWAssertion;

@interface HMFNetManager : HMFObject {

	NSObject*<OS_dispatch_queue> _clientQueue;
	_HMFNetManagerWoWAssertion* _wowAssertion;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (__weak) _HMFNetManagerWoWAssertion * wowAssertion;                         //@synthesize wowAssertion=_wowAssertion - In the implementation block
+(void)initialize;
+(id)sharedManager;
-(id)init;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)deregisterWoWAssertionForObject:(id)arg1 ;
-(_HMFNetManagerWoWAssertion *)wowAssertion;
-(void)setWowAssertion:(_HMFNetManagerWoWAssertion *)arg1 ;
-(void)deregisterObject:(id)arg1 ;
-(void)registerWoWAssertionForObject:(id)arg1 ;
@end

