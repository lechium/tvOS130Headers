/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString;

@interface LoadMatchStatusOperation : ISOperation {

	NSNumber* _accountID;
	unsigned long long _matchStatus;
	NSString* _userAgent;

}

@property (copy) NSString * userAgent; 
@property (readonly) unsigned long long matchStatus; 
-(void)dealloc;
-(void)run;
-(void)setUserAgent:(NSString *)arg1 ;
-(NSString *)userAgent;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(unsigned long long)matchStatus;
-(id)_newMatchStatusOperationWithURLBag:(id)arg1 ;
@end

