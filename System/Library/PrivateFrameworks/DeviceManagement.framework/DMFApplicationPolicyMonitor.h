/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, DMFPolicyRegistration, NSUUID;

@interface DMFApplicationPolicyMonitor : NSObject {

	NSArray* _policyTypes;
	DMFPolicyRegistration* _registration;
	NSUUID* _identifier;

}

@property (nonatomic,copy) NSArray * policyTypes;                                 //@synthesize policyTypes=_policyTypes - In the implementation block
@property (nonatomic,readonly) DMFPolicyRegistration * registration;              //@synthesize registration=_registration - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (getter=isEnabled,readonly) BOOL enabled; 
+(void)createPolicyMonitorWithPolicyChangeHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(NSUUID *)identifier;
-(BOOL)isEnabled;
-(DMFPolicyRegistration *)registration;
-(id)_initWithPolicyChangeHandler:(/*^block*/id)arg1 addingRegistration:(BOOL)arg2 ;
-(void)_fetchCategoriesIfNeededForBundleIdentifiers:(id)arg1 response:(/*^block*/id)arg2 ;
-(NSArray *)policyTypes;
-(id)initWithPolicyChangeHandler:(/*^block*/id)arg1 ;
-(void)requestPoliciesForBundleIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPolicyTypes:(NSArray *)arg1 ;
@end

