/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IKUser : NSObject {

	unsigned long long _userID;
	NSString* _username;
	BOOL _subscribed;

}

@property (assign,nonatomic) unsigned long long userID;                        //@synthesize userID=_userID - In the implementation block
@property (nonatomic,copy) NSString * username;                                //@synthesize username=_username - In the implementation block
@property (assign,getter=isSubscribed,nonatomic) BOOL subscribed;              //@synthesize subscribed=_subscribed - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(unsigned long long)userID;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(void)setUserID:(unsigned long long)arg1 ;
-(BOOL)isSubscribed;
-(void)setSubscribed:(BOOL)arg1 ;
@end
