/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/ENGroupContextObserverMiddleware.h>

@class NSString;

@interface IDSGroupSendAheadObserver : NSObject <ENGroupContextObserverMiddleware> {

	NSString* _topic;

}

@property (nonatomic,retain) NSString * topic;                      //@synthesize topic=_topic - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
-(void)groupContext:(id)arg1 didUpdateGroup:(id)arg2 withNewGroup:(id)arg3 ;
-(void)_sendAheadGroup:(id)arg1 withContext:(id)arg2 ;
-(id)initWithProtectionSpace:(long long)arg1 ;
@end
