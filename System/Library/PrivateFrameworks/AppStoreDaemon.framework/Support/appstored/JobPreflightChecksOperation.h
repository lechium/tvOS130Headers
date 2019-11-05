/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/AgentOperation.h>

@class NSString, SSMemoryEntity;

@interface JobPreflightChecksOperation : AgentOperation {

	NSString* _bundleID;
	SSMemoryEntity* _download;
	SSMemoryEntity* _job;

}
-(void)run;
-(BOOL)_shouldCancelAsDuplicate;
-(BOOL)_shouldCancel32BitApp;
-(id)initWithParentOperation:(id)arg1 downloadID:(long long)arg2 ;
-(BOOL)_shouldCancelAutomaticDownload;
-(BOOL)_itemIsInSoftwareLibrary;
@end
