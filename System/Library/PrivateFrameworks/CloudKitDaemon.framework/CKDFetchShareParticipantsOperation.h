/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class CKDPublicIdentityLookupRequest, NSArray;

@interface CKDFetchShareParticipantsOperation : CKDOperation {

	/*^block*/id _shareParticipantFetchedBlock;
	CKDPublicIdentityLookupRequest* _pendingRequest;
	NSArray* _userIdentityLookupInfos;

}

@property (nonatomic,retain) CKDPublicIdentityLookupRequest * pendingRequest;              //@synthesize pendingRequest=_pendingRequest - In the implementation block
@property (nonatomic,retain) NSArray * userIdentityLookupInfos;                            //@synthesize userIdentityLookupInfos=_userIdentityLookupInfos - In the implementation block
@property (nonatomic,copy) id shareParticipantFetchedBlock;                                //@synthesize shareParticipantFetchedBlock=_shareParticipantFetchedBlock - In the implementation block
-(void)main;
-(void)finishWithError:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(id)activityCreate;
-(void)setShareParticipantFetchedBlock:(id)arg1 ;
-(void)setUserIdentityLookupInfos:(NSArray *)arg1 ;
-(NSArray *)userIdentityLookupInfos;
-(id)shareParticipantFetchedBlock;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setPendingRequest:(CKDPublicIdentityLookupRequest *)arg1 ;
-(void)_handleFetchedInfo:(id)arg1 withIdentity:(id)arg2 error:(id)arg3 ;
-(CKDPublicIdentityLookupRequest *)pendingRequest;
-(void)_fetchIdentities;
@end
