/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:29 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBSOSUpdateServiceInterface <NSObject>
@required
-(void)setDelegate:(id)arg1;
-(void)startDownload:(/*^block*/id)arg1;
-(void)cancelDownload:(/*^block*/id)arg1;
-(void)cancelUpdate;
-(void)restore;
-(void)checkForUpdateViaMDM;
-(void)setManagerClientDelegate:(id)arg1;
-(void)isCheckingForUpdates:(/*^block*/id)arg1;
-(void)isDownloading:(/*^block*/id)arg1;
-(void)isUpdateRunningWithCompletion:(/*^block*/id)arg1;
-(void)isUpdate:(id)arg1 readyForInstallation:(/*^block*/id)arg2;
-(void)currentDownload:(/*^block*/id)arg1;
-(void)setAssetDownloadIsDiscretionary:(BOOL)arg1;
-(void)checkForUpdate;
-(void)checkForUpdatesWithOptions:(id)arg1 response:(/*^block*/id)arg2;
-(void)purgeDownload:(/*^block*/id)arg1;
-(void)installUpdate:(id)arg1 withOptions:(id)arg2 withResult:(/*^block*/id)arg3;
-(void)obliterateDataPreservingPaths:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)purgeableAssetSpaceWithCompletion:(/*^block*/id)arg1;
-(void)purgeAssetsWithCompletion:(/*^block*/id)arg1;

@end
