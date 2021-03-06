/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@interface CKDFetchUserQuotaOperation : CKDDatabaseOperation {

	unsigned long long _quotaAvailable;

}

@property (assign,nonatomic) unsigned long long quotaAvailable;              //@synthesize quotaAvailable=_quotaAvailable - In the implementation block
-(void)main;
-(id)activityCreate;
-(unsigned long long)quotaAvailable;
-(void)setQuotaAvailable:(unsigned long long)arg1 ;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(Class)operationResultClass;
-(void)fillOutOperationResult:(id)arg1 ;
@end

