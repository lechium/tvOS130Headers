/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <StoreServices/StoreServices-Structs.h>
@class SSXPCConnection, NSObject, NSArray;

@interface SSPreorderManager : NSObject {

	SSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSArray* _itemKinds;
	SSXPCConnection* _observerConnection;
	NSObject*<OS_dispatch_queue> _observerQueue;
	CFArrayRef _observers;
	NSArray* _preorders;

}

@property (readonly) NSArray * itemKinds; 
@property (readonly) NSArray * preorders; 
+(id)bookStoreItemKinds;
+(id)musicStoreItemKinds;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)reloadFromServer;
-(NSArray *)preorders;
-(void)_connectAsObserver;
-(void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2 ;
-(void)_sendMessageToObservers:(SEL)arg1 ;
-(id)initWithItemKinds:(id)arg1 ;
-(void)_registerAsObserver;
-(void)cancelPreorders:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(NSArray *)itemKinds;
@end

