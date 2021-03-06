/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:38 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSData, NSMutableArray, CKRecordID, NSArray, NSObject, NSMutableDictionary;

@interface GKInviteSession : NSObject {

	NSData* _sessionToken;
	NSMutableArray* _shareInvitees;
	CKRecordID* _shareRecordID;
	NSArray* _responses;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSMutableDictionary* _invitees;
	NSMutableArray* _invitedPlayers;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> syncQueue;              //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * invitees;                      //@synthesize invitees=_invitees - In the implementation block
@property (nonatomic,retain) NSArray * responses;                                 //@synthesize responses=_responses - In the implementation block
@property (nonatomic,retain) NSMutableArray * invitedPlayers;                     //@synthesize invitedPlayers=_invitedPlayers - In the implementation block
@property (nonatomic,retain) NSData * sessionToken;                               //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,retain) NSMutableArray * shareInvitees;                      //@synthesize shareInvitees=_shareInvitees - In the implementation block
@property (nonatomic,retain) CKRecordID * shareRecordID;                          //@synthesize shareRecordID=_shareRecordID - In the implementation block
-(id)init;
-(void)dealloc;
-(void)performAsync:(/*^block*/id)arg1 ;
-(void)addResponse:(id)arg1 ;
-(NSArray *)responses;
-(void)setResponses:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(CKRecordID *)shareRecordID;
-(void)setShareRecordID:(CKRecordID *)arg1 ;
-(void)setSyncQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSData *)sessionToken;
-(void)setSessionToken:(NSData *)arg1 ;
-(void)performSync:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)invitees;
-(void)setInvitees:(NSMutableDictionary *)arg1 ;
-(void)setShareInvitees:(NSMutableArray *)arg1 ;
-(NSMutableArray *)shareInvitees;
-(id)referencesForInvitee:(id)arg1 ;
-(void)removeInvitee:(id)arg1 reference:(id)arg2 ;
-(BOOL)shouldBeCleared;
-(id)initWithSessionToken:(id)arg1 ;
-(void)addInvitee:(id)arg1 reference:(id)arg2 ;
-(id)allInvitees;
-(void)removeAllInvitees;
-(void)removeAllResponses;
-(NSMutableArray *)invitedPlayers;
-(void)setInvitedPlayers:(NSMutableArray *)arg1 ;
@end

