/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DaemonDatabaseSchema : NSObject
+(id)databasePath;
+(id)libraryPath;
+(void)createSchemaInDatabase:(id)arg1 ;
+(id)_containerURL;
+(id)documentsURL;
+(void)_applyProtectionClassForDirectoryAtURL:(id)arg1 ;
+(BOOL)_addSkipBackupAttribute:(BOOL)arg1 forURL:(id)arg2 ;
+(id)scratchPath;
+(BOOL)_migrateToCurrentUserVersionUsingDatabase:(id)arg1 ;
+(void)createFunctionsInDatabase:(id)arg1 ;
@end
