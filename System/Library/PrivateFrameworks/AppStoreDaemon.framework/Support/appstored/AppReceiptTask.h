/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/Task.h>

@class AppReceiptTaskResult, AppReceiptTaskOptions;

@interface AppReceiptTask : Task {

	AppReceiptTaskResult* _operationResult;
	AppReceiptTaskOptions* _options;
	/*^block*/id _resultsBlock;

}
-(id)initWithOptions:(id)arg1 ;
-(void)main;
-(void)setResultsBlock:(/*^block*/id)arg1 ;
-(BOOL)_refreshReceiptForApplication:(id)arg1 withOptions:(id)arg2 error:(id*)arg3 ;
-(BOOL)_wasInstalledByConfigurator:(id)arg1 ;
-(BOOL)_preformMigrationCheckForApp:(id)arg1 ;
-(id)_optionsForApplication:(id)arg1 ;
-(id)_receiptExperationDataForApp:(id)arg1 ;
-(long long)_vppFlagsForApp:(id)arg1 ;
-(id)_postBodyDataWithApplication:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)_handleResponse:(id)arg1 forApp:(id)arg2 options:(id)arg3 ;
-(void)_checkExpirationNotificationDate:(id)arg1 ;
-(id)_receptForApp:(id)arg1 ;
@end

