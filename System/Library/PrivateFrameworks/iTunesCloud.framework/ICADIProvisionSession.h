/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICADIProvisionSession : NSObject {

	unsigned long long _accountID;
	unsigned _sessionID;

}
-(void)dealloc;
-(id)initWithAccountID:(unsigned long long)arg1 ;
-(BOOL)startWithServerActionData:(id)arg1 returningClientData:(id*)arg2 error:(id*)arg3 ;
-(BOOL)endWithMessageData:(id)arg1 transportKey:(id)arg2 error:(id*)arg3 ;
-(void)_destroySession;
@end

