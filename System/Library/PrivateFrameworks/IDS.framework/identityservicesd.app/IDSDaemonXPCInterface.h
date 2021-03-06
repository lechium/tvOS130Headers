/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/NSXPCListenerDelegate.h>
#import <identityservicesd/IDSDGroupContextNotifyingObserverDelegate.h>

@class NSXPCListener, NSXPCConnection, IDSDGroupContextNotifyingObserver, NSMutableArray, NSString;

@interface IDSDaemonXPCInterface : NSObject <NSXPCListenerDelegate, IDSDGroupContextNotifyingObserverDelegate> {

	NSXPCListener* _listener;
	NSXPCConnection* _connection;
	IDSDGroupContextNotifyingObserver* _observer;
	NSMutableArray* _observerProxies;

}

@property (nonatomic,retain) NSXPCListener * listener;                                  //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) IDSDGroupContextNotifyingObserver * observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSMutableArray * observerProxies;                          //@synthesize observerProxies=_observerProxies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(IDSDGroupContextNotifyingObserver *)observer;
-(NSXPCListener *)listener;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSXPCConnection *)connection;
-(void)setObserver:(IDSDGroupContextNotifyingObserver *)arg1 ;
-(id)groupContextController;
-(NSMutableArray *)observerProxies;
-(void)didCreateGroup:(id)arg1 ;
-(void)didCacheGroup:(id)arg1 ;
-(void)didUpdateGroup:(id)arg1 withNewGroup:(id)arg2 ;
-(void)didReceiveDecryptionFailureForGroup:(id)arg1 ;
-(void)didReceiveRegistrationIdentityUpdate;
-(void)setObserverProxies:(NSMutableArray *)arg1 ;
@end

