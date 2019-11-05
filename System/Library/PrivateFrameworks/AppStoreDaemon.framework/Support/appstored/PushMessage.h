/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class APSIncomingMessage, NSNumber, NSDictionary;

@interface PushMessage : NSObject {

	APSIncomingMessage* _message;

}

@property (readonly) NSNumber * accountID; 
@property (readonly) unsigned long long actionType; 
@property (readonly) NSDictionary * userInfo; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDictionary *)userInfo;
-(id)initWithMessage:(id)arg1 ;
-(NSNumber *)accountID;
-(unsigned long long)actionType;
-(id)valueForUserInfoKey:(id)arg1 ;
-(BOOL)isEqualToMessage:(id)arg1 ;
@end
