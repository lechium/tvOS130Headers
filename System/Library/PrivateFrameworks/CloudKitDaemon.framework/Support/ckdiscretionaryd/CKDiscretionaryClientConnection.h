/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:30:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Support/ckdiscretionaryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ckdiscretionaryd/CKXPCDiscretionaryDaemon.h>

@protocol OS_dispatch_queue, CKXPCDiscretionaryClient;
@class NSObject, NSString, CKDiscretionaryDaemon, NSMutableDictionary;

@interface CKDiscretionaryClientConnection : NSObject <CKXPCDiscretionaryDaemon> {

	BOOL _isSpringBoardApp;
	BOOL _requiresPastBuddy;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSString* _bundleID;
	CKDiscretionaryDaemon* _daemon;
	id<CKXPCDiscretionaryClient> _client;
	NSMutableDictionary* _tasksByOperationID;
	NSString* _group;

}

@property (assign,nonatomic,__weak) CKDiscretionaryDaemon * daemon;                 //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) id<CKXPCDiscretionaryClient> client;                   //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * tasksByOperationID;              //@synthesize tasksByOperationID=_tasksByOperationID - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                                   //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) BOOL isSpringBoardApp;                                 //@synthesize isSpringBoardApp=_isSpringBoardApp - In the implementation block
@property (assign,nonatomic) BOOL requiresPastBuddy;                                //@synthesize requiresPastBuddy=_requiresPastBuddy - In the implementation block
@property (nonatomic,retain) NSString * group;                                      //@synthesize group=_group - In the implementation block
-(void)setGroup:(NSString *)arg1 ;
-(NSString *)group;
-(id<CKXPCDiscretionaryClient>)client;
-(void)cleanup;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setClient:(id<CKXPCDiscretionaryClient>)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setDaemon:(CKDiscretionaryDaemon *)arg1 ;
-(CKDiscretionaryDaemon *)daemon;
-(void)queueOperationID:(id)arg1 options:(id)arg2 startBlock:(/*^block*/id)arg3 ;
-(void)finishOperationID:(id)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(BOOL)isSpringBoardApp;
-(void)setIsSpringBoardApp:(BOOL)arg1 ;
-(id)initWithDaemon:(id)arg1 connection:(id)arg2 ;
-(BOOL)requiresPastBuddy;
-(void)setRequiresPastBuddy:(BOOL)arg1 ;
-(id)initWithDaemon:(id)arg1 client:(id)arg2 group:(id)arg3 bundleID:(id)arg4 isSpringBoardApp:(BOOL)arg5 requiresPastBuddy:(BOOL)arg6 ;
-(NSMutableDictionary *)tasksByOperationID;
-(void)setTasksByOperationID:(NSMutableDictionary *)arg1 ;
@end

