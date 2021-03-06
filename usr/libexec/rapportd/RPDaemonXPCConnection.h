/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:49 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/rapportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <rapportd/RPDaemonXPCServerInterface.h>

@protocol OS_dispatch_queue;
@class RPDaemon, NSMutableSet, NSObject, NSXPCConnection;

@interface RPDaemonXPCConnection : NSObject <RPDaemonXPCServerInterface> {

	RPDaemon* _daemon;
	BOOL _entitledClient;
	NSMutableSet* _assertions;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSXPCConnection* _xpcCnx;

}

@property (nonatomic,retain) NSMutableSet * assertions;                               //@synthesize assertions=_assertions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcCnx;                                //@synthesize xpcCnx=_xpcCnx - In the implementation block
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(NSMutableSet *)assertions;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)connectionInvalidated;
-(void)getIdentitiesWithFlags:(unsigned)arg1 completion:(/*^block*/id)arg2 ;
-(NSXPCConnection *)xpcCnx;
-(void)setAssertions:(NSMutableSet *)arg1 ;
-(void)activateAssertionWithIdentifier:(id)arg1 ;
-(void)diagnosticLogControl:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)primaryAccountSignedInWithCompletion:(/*^block*/id)arg1 ;
-(void)primaryAccountSignedOutWithCompletion:(/*^block*/id)arg1 ;
-(void)addOrUpdateIdentity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)diagnosticCommand:(id)arg1 params:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)diagnosticShow:(id)arg1 level:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)setXpcCnx:(NSXPCConnection *)arg1 ;
-(void)_invalidateAssertions;
-(id)initWithDaemon:(id)arg1 xpcConnection:(id)arg2 ;
-(BOOL)_entitledForLabel:(id)arg1 error:(id*)arg2 ;
@end

