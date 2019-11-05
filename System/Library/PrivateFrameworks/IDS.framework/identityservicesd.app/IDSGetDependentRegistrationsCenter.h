/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableSet, IDSPushHandler, IMLockdownManager, IDSDeviceHeartbeatCenter, FTNetworkSupport;

@interface IDSGetDependentRegistrationsCenter : NSObject {

	NSMutableDictionary* _currentGetDependentRegistrationBlocks;
	NSMutableSet* _currentGetDependentRegistrations;
	IDSPushHandler* _pushHandler;
	IMLockdownManager* _lockdownManager;
	IDSDeviceHeartbeatCenter* _heartbeatCenter;
	FTNetworkSupport* _ftNetworkSupport;
	/*^block*/id _sendMessageHandler;
	/*^block*/id _messageResponseHandler;

}
-(BOOL)shouldReAuthenticateForGDRResultCode:(long long)arg1 retries:(unsigned)arg2 ;
-(BOOL)getDependentRegistrations:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithPushHandler:(id)arg1 lockdownManager:(id)arg2 heartbeatCenter:(id)arg3 ftNetworkSupport:(id)arg4 sendMessageHandlerBlock:(/*^block*/id)arg5 messageResponseHandlerBlock:(/*^block*/id)arg6 ;
-(void)_submitGDRReponseToAWDWithResultCode:(long long)arg1 error:(id)arg2 ;
-(BOOL)_hasReachedMaxNumberOfRetries:(unsigned)arg1 ;
@end
