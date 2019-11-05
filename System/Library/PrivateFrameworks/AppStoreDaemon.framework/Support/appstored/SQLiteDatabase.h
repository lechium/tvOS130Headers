/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/SQLiteConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class SQLiteConnection, NSObject, NSHashTable, NSString;

@interface SQLiteDatabase : NSObject <SQLiteConnectionDelegate> {

	SQLiteConnection* _connection;
	NSObject*<OS_dispatch_queue> _transactionQueue;
	NSHashTable* _migratedStores;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(id)arg1 ;
-(BOOL)connectionNeedsResetForCorruption:(id)arg1 ;
-(id)initWithConnectionOptions:(id)arg1 ;
-(void)_performMigrationIfNeededForStore:(id)arg1 ;
-(void)_modifyUsingTransactionClass:(Class)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_reentrantSafePerformBlock:(/*^block*/id)arg1 ;
-(void)_readUsingSession:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)connectionNeedsResetForReopen:(id)arg1 ;
-(void)modifyStore:(id)arg1 usingTransaction:(/*^block*/id)arg2 ;
-(void)modifyStore:(id)arg1 usingTransactionClass:(Class)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)readStore:(id)arg1 usingSession:(/*^block*/id)arg2 ;
@end
