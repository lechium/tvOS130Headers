/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/ODRDatabaseExternalTransaction.h>
#import <appstored/SQLiteDatabaseTransaction.h>

@class ODRDatabaseChangeset, NSString, SQLiteConnection;

@interface ODRDatabaseTransaction : ODRDatabaseExternalTransaction <SQLiteDatabaseTransaction> {

	ODRDatabaseChangeset* _changeset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SQLiteConnection * connection; 
-(BOOL)deleteManifestForApplication:(id)arg1 ;
-(BOOL)_deleteAssetPacksMatchingPredicate:(id)arg1 ;
-(BOOL)_deleteTagsMatchingPredicate:(id)arg1 ;
-(id)_manifestEntityForManifest:(id)arg1 ;
-(id)_existingStorageIDForBundleID:(id)arg1 ;
-(id)_assetPackEntityForAssetPack:(id)arg1 ;
-(BOOL)updateManifest:(id)arg1 bundleTagManifest:(id)arg2 forApplication:(id)arg3 verifyContentHashes:(BOOL)arg4 ;
-(BOOL)importDownload:(id)arg1 ;
-(BOOL)deleteDownload:(id)arg1 ;
-(BOOL)updateBundleTagManifest:(id)arg1 forApplication:(id)arg2 ;
-(BOOL)updateManifest:(id)arg1 forApplication:(id)arg2 verifyContentHashes:(BOOL)arg3 ;
-(BOOL)updateAsset:(id)arg1 ;
-(BOOL)updateEntity:(id)arg1 ;
-(BOOL)resetStateForApplication:(id)arg1 ;
-(BOOL)deleteAssetDownload:(id)arg1 ;
-(BOOL)markAssetDownloadAsPaused:(BOOL)arg1 download:(id)arg2 ;
-(BOOL)importAssetDownload:(id)arg1 ;
-(BOOL)purgeAllTagsForApplication:(id)arg1 ;
-(BOOL)deleteWork:(id)arg1 ;
-(BOOL)importWork:(id)arg1 ;
-(BOOL)purgeAllAssetPacksForApplication:(id)arg1 withReason:(long long)arg2 ;
@end
