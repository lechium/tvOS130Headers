/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/SQLiteMemoryEntity.h>

@class NSString, NSUUID, NSURL;

@interface ODRAssetDownload : SQLiteMemoryEntity

@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSString * bundleKey; 
@property (nonatomic,readonly) NSUUID * coordinatorID; 
@property (nonatomic,readonly) BOOL isPaused; 
@property (nonatomic,readonly) NSURL * sourceURL; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) NSString * uniqueKey; 
+(id)defaultProperties;
+(Class)databaseEntityClass;
+(id)allDownloads;
+(void)deleteDownload:(id)arg1 ;
+(void)deleteDownloads:(id)arg1 ;
+(void)addDownloadForRequest:(id)arg1 ;
+(void)deleteDownloadForRequest:(id)arg1 ;
-(long long)type;
-(NSString *)bundleID;
-(BOOL)isPaused;
-(NSURL *)sourceURL;
-(NSString *)uniqueKey;
-(NSUUID *)coordinatorID;
-(id)_urlForProperty:(id)arg1 ;
-(NSString *)bundleKey;
@end

