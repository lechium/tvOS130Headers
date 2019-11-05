/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSMutableSet;

@interface Client : NSObject {

	long long _activeMessageCount;
	long long _barrierMessageCount;
	long long _droppedMessageCount;
	BOOL _shouldSendMessages;
	BOOL _forceUpdateOnWake;
	NSXPCConnection* _connection;
	NSMutableSet* _subscribedNOIs;

}

@property (nonatomic,retain) NSXPCConnection * connection;               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableSet * subscribedNOIs;              //@synthesize subscribedNOIs=_subscribedNOIs - In the implementation block
-(id)description;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)_shouldSendMessages;
-(void)_incrementMessageCounter:(long long)arg1 ;
-(void)_decrementMessageCounter:(long long)arg1 ;
-(NSMutableSet *)subscribedNOIs;
-(void)_sendBarrierIfNecessaryWithBlock:(/*^block*/id)arg1 ;
-(id)initWithConn:(id)arg1 ;
-(void)setSubscribedNOIs:(NSMutableSet *)arg1 ;
@end
