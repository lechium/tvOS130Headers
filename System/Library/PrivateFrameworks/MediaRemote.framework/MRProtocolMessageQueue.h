/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MRProtocolMessageQueueDataSource, MRProtocolMessageQueueDelegate;
@class NSObject, MRPendingMessageQueue, NSMutableDictionary;

@interface MRProtocolMessageQueue : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	id<MRProtocolMessageQueueDataSource> _datasource;
	id<MRProtocolMessageQueueDelegate> _delegate;
	MRPendingMessageQueue* _pendingMessageQueue;
	NSMutableDictionary* _pendingReplyQueue;

}

@property (assign,nonatomic,__weak) id<MRProtocolMessageQueueDataSource> datasource; 
@property (assign,nonatomic,__weak) id<MRProtocolMessageQueueDelegate> delegate; 
-(void)dealloc;
-(id<MRProtocolMessageQueueDelegate>)delegate;
-(void)setDelegate:(id<MRProtocolMessageQueueDelegate>)arg1 ;
-(void)flush;
-(id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1 ;
-(id)_dataForMessage:(id)arg1 ;
-(id<MRProtocolMessageQueueDataSource>)datasource;
-(void)setDatasource:(id<MRProtocolMessageQueueDataSource>)arg1 ;
-(void)enqueueMessage:(id)arg1 reply:(/*^block*/id)arg2 queue:(id)arg3 ;
-(BOOL)reply:(id)arg1 ;
@end

