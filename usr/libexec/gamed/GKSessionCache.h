/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:40 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <gamed/gamed-Structs.h>
@class NSObject, CKRecordID, NSMutableDictionary, NSString, NSDate, GKCloudPlayer, CKServerChangeToken, NSArray, NSDictionary;

@interface GKSessionCache : NSObject {

	NSObject*<OS_dispatch_queue> _cacheQueue;
	NSObject*<OS_dispatch_queue> _cacheUserQueue;
	BOOL _userHasSubscription;
	BOOL _friendRecordNeedsUpdate;
	CKRecordID* _userRecordID;
	double _lastSaveTimeStamp;
	NSMutableDictionary* _bundleIDsByContainerName;
	NSMutableDictionary* _bundleIDExpirations;
	sqlite3Ref _database;
	NSString* _databasePath;
	NSDate* _expiration;

}

@property (nonatomic,retain) CKRecordID * userRecordID;                                   //@synthesize userRecordID=_userRecordID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bundleIDsByContainerName;              //@synthesize bundleIDsByContainerName=_bundleIDsByContainerName - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bundleIDExpirations;                   //@synthesize bundleIDExpirations=_bundleIDExpirations - In the implementation block
@property (assign,nonatomic) sqlite3Ref database;                                         //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSString * databasePath;                                     //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,retain) NSDate * expiration;                                         //@synthesize expiration=_expiration - In the implementation block
@property (assign,nonatomic) BOOL isValid; 
@property (nonatomic,readonly) GKCloudPlayer * userPlayer; 
@property (assign,nonatomic) BOOL userHasSubscription;                                    //@synthesize userHasSubscription=_userHasSubscription - In the implementation block
@property (assign,nonatomic) double lastSaveTimeStamp;                                    //@synthesize lastSaveTimeStamp=_lastSaveTimeStamp - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * privateDBToken; 
@property (nonatomic,retain) CKServerChangeToken * sharedDBToken; 
@property (nonatomic,readonly) NSArray * friendPlayers; 
@property (nonatomic,readonly) NSDictionary * friendEmailsByID; 
@property (assign,nonatomic) BOOL friendRecordNeedsUpdate;                                //@synthesize friendRecordNeedsUpdate=_friendRecordNeedsUpdate - In the implementation block
-(id)init;
-(BOOL)isValid;
-(NSString *)databasePath;
-(sqlite3Ref)database;
-(void)setDatabase:(sqlite3Ref)arg1 ;
-(void)closeDatabase;
-(BOOL)openDatabase;
-(void)setIsValid:(BOOL)arg1 ;
-(CKRecordID *)userRecordID;
-(void)setUserRecordID:(CKRecordID *)arg1 ;
-(NSDate *)expiration;
-(void)setDatabasePath:(NSString *)arg1 ;
-(BOOL)saveUserInfo;
-(BOOL)executeStatement:(id)arg1 ;
-(id)sessionWithIdentifier:(id)arg1 ;
-(void)setExpiration:(NSDate *)arg1 ;
-(NSArray *)friendPlayers;
-(void)clearWithHandler:(/*^block*/id)arg1 ;
-(id)tokenForZoneID:(id)arg1 ;
-(NSDictionary *)friendEmailsByID;
-(void)updateUserWithHandler:(/*^block*/id)arg1 ;
-(GKCloudPlayer *)userPlayer;
-(id)sessionsInContainer:(id)arg1 ;
-(CKServerChangeToken *)privateDBToken;
-(CKServerChangeToken *)sharedDBToken;
-(void)updateWithChangedTokens:(id)arg1 removedTokenZoneIDs:(id)arg2 ;
-(id)sessionsInContainer:(id)arg1 ownerName:(id)arg2 ;
-(void)updateWithChangedSessions:(id)arg1 removedSessions:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setPrivateDBToken:(CKServerChangeToken *)arg1 ;
-(void)setSharedDBToken:(CKServerChangeToken *)arg1 ;
-(id)sessionWithRecordID:(id)arg1 ;
-(void)setToken:(id)arg1 forZoneID:(id)arg2 ;
-(void)setFriendPlayers:(id)arg1 withEmails:(id)arg2 ;
-(BOOL)friendRecordNeedsUpdate;
-(void)setFriendRecordNeedsUpdate:(BOOL)arg1 ;
-(id)bundleIDsForContainerName:(id)arg1 ;
-(void)updateBundleIDs:(id)arg1 forContainerName:(id)arg2 ;
-(double)lastSaveTimeStamp;
-(void)setLastSaveTimeStamp:(double)arg1 ;
-(BOOL)userHasSubscription;
-(void)setUserHasSubscription:(BOOL)arg1 ;
-(void)createDatabaseIfNeeded;
-(void)updateDatabasePath;
-(void)readUserInfoFromDatabase;
-(void)readBundleIDsFromDisk;
-(void)writeBundleIDsToDisk;
-(id)bundleIDCacheURL;
-(void)setBundleIDsByContainerName:(NSMutableDictionary *)arg1 ;
-(void)setBundleIDExpirations:(NSMutableDictionary *)arg1 ;
-(int)intFromRowStatement:(sqlite3_stmtRef)arg1 column:(int)arg2 ;
-(double)doubleFromRowStatement:(sqlite3_stmtRef)arg1 column:(int)arg2 ;
-(BOOL)stepStatement:(id)arg1 parameters:(id)arg2 rowHandler:(/*^block*/id)arg3 ;
-(id)tokenForContainerName:(id)arg1 ownerName:(id)arg2 ;
-(void)setToken:(id)arg1 forContainerName:(id)arg2 ownerName:(id)arg3 ;
-(id)dataFromRowStatement:(sqlite3_stmtRef)arg1 column:(int)arg2 ;
-(id)tokenFromData:(id)arg1 ;
-(void)_setToken:(id)arg1 forContainerName:(id)arg2 ownerName:(id)arg3 ;
-(id)stringFromRowStatement:(sqlite3_stmtRef)arg1 column:(int)arg2 ;
-(id)sessionFromData:(id)arg1 ;
-(NSMutableDictionary *)bundleIDsByContainerName;
-(NSMutableDictionary *)bundleIDExpirations;
@end

