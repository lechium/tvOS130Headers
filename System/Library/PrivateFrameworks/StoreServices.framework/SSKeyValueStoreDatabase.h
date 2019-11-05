/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:58 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSSQLiteDatabase;

@interface SSKeyValueStoreDatabase : NSObject {

	SSSQLiteDatabase* _database;

}
-(id)init;
-(void)dealloc;
-(void)readUsingSessionBlock:(/*^block*/id)arg1 ;
-(void)modifyUsingTransactionBlock:(/*^block*/id)arg1 ;
-(void)modifyAsyncUsingTransactionBlock:(/*^block*/id)arg1 ;
-(id)initReadOnly;
-(id)_initReadOnly:(BOOL)arg1 ;
-(void)_dispatchBlockAsync:(/*^block*/id)arg1 ;
-(void)readAsyncUsingSessionBlock:(/*^block*/id)arg1 ;
@end
