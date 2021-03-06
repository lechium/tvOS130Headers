/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSPhoneNumberValidationRequestor.h>
#import <identityservicesd/IDSPhoneNumberValidationListener.h>

@protocol IDSPreflightStackStore;
@class NSMutableArray, IDSPushHandler, NSMutableDictionary, IDSUserStore, NSArray, NSString;

@interface IDSSMSRegistrationCenter : NSObject <IDSPhoneNumberValidationRequestor, IDSPhoneNumberValidationListener> {

	NSMutableArray* _registrations;
	NSMutableArray* _handlers;
	id<IDSPreflightStackStore> _preflightStackStore;
	IDSPushHandler* _pushHandler;
	NSMutableDictionary* _stateMachineByUserID;

}

@property (nonatomic,readonly) NSMutableArray * registrations;                              //@synthesize registrations=_registrations - In the implementation block
@property (nonatomic,readonly) NSMutableArray * handlers;                                   //@synthesize handlers=_handlers - In the implementation block
@property (nonatomic,readonly) id<IDSPreflightStackStore> preflightStackStore;              //@synthesize preflightStackStore=_preflightStackStore - In the implementation block
@property (nonatomic,retain) IDSPushHandler * pushHandler;                                  //@synthesize pushHandler=_pushHandler - In the implementation block
@property (nonatomic,readonly) IDSUserStore * userStore; 
@property (nonatomic,retain) NSMutableDictionary * stateMachineByUserID;                    //@synthesize stateMachineByUserID=_stateMachineByUserID - In the implementation block
@property (nonatomic,readonly) NSArray * validators; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSArray *)validators;
-(NSMutableArray *)registrations;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(NSMutableArray *)handlers;
-(IDSUserStore *)userStore;
-(void)sendRegistration:(id)arg1 ;
-(void)cancelActionsForRegistrationInfo:(id)arg1 ;
-(void)notePhoneNumberRegistrationReset;
-(IDSPushHandler *)pushHandler;
-(void)setPushHandler:(IDSPushHandler *)arg1 ;
-(void)_notifyFailureWithError:(long long)arg1 registration:(id)arg2 identifier:(id)arg3 ;
-(void)_cleanupUntrackedValidators;
-(NSString*)_identifierForValidator:(id)arg1 ;
-(void)_notifySuccess:(id)arg1 token:(id)arg2 identifier:(id)arg3 ;
-(void)requestUserConsentForPhoneNumberValidationWithCompletion:(/*^block*/id)arg1 ;
-(void)validator:(id)arg1 identifiedPhoneNumber:(id)arg2 token:(id)arg3 phoneBookNumber:(id)arg4 ;
-(void)validator:(id)arg1 failedIdentificationWithRegistrationError:(long long)arg2 ;
-(void)_notifyNeedsNewIdentification;
-(id<IDSPreflightStackStore>)preflightStackStore;
-(NSMutableDictionary *)stateMachineByUserID;
-(void)setStateMachineByUserID:(NSMutableDictionary *)arg1 ;
@end

