/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/NSSecureCoding.h>
#import <ActionKit/PocketAPIDelegate.h>

@protocol PocketAPIDelegate;
@class PocketAPI, NSString, NSOperationQueue;

@interface PocketAPILogin : NSObject <NSSecureCoding, PocketAPIDelegate> {

	PocketAPI* API;
	NSString* uuid;
	NSString* requestToken;
	NSString* accessToken;
	NSOperationQueue* operationQueue;
	id<PocketAPIDelegate> delegate;
	BOOL didStart;
	BOOL didFinish;
	BOOL reverseAuth;

}

@property (nonatomic,retain,readonly) PocketAPI * API; 
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * requestToken; 
@property (nonatomic,retain,readonly) NSString * accessToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(PocketAPI *)API;
-(NSString *)requestToken;
-(id)redirectURL;
-(NSString *)accessToken;
-(void)pocketAPI:(id)arg1 receivedRequestToken:(id)arg2 ;
-(void)pocketAPILoggedIn:(id)arg1 ;
-(void)pocketAPI:(id)arg1 hadLoginError:(id)arg2 ;
-(void)_setRequestToken:(id)arg1 ;
-(void)_setReverseAuth:(BOOL)arg1 ;
-(id)initWithAPI:(id)arg1 delegate:(id)arg2 ;
-(void)fetchRequestToken;
-(void)convertRequestTokenToAccessToken;
-(void)loginDidStart;
-(void)loginDidFinish:(BOOL)arg1 ;
@end
