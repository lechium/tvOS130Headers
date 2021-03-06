/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:48:16 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/AppStore.app/PlugIns/AppStoreTopShelfExtension.appex/AppStoreTopShelfExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVTopShelfContentProvider.h>
#import <AppStoreTopShelfExtension/TVTopShelfCustomActionPerformingDelegate.h>
#import <AppStoreTopShelfExtension/TVTopShelfMetricsReportingDelegate.h>

@interface AppStoreTopShelfExtension.TopShelfContentProvider : TVTopShelfContentProvider <TVTopShelfCustomActionPerformingDelegate, TVTopShelfMetricsReportingDelegate> {

	 bootstrap;

}
-(id)init;
-(void)performCustomActionWithURL:(id)arg1 actionUserInfo:(id)arg2 forItemWithIdentifier:(id)arg3 itemUserInfo:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)loadTopShelfContentWithCompletionHandler:(/*^block*/id)arg1 ;
@end

