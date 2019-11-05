/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASDServiceBroker;

@interface ASDSubscriptionEntitlements : NSObject {

	ASDServiceBroker* _serviceBroker;
	int _newsCacheUpdatedNotificationToken;
	int _appStoreCacheUpdatedNotificationToken;
	int _appStoreArcadeSubscriptionBagUpdatedNotificationToken;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)_initWithServiceBroker:(id)arg1 ;
-(void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2 ;
-(void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2 segment:(unsigned long long)arg3 ;
-(void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 forActiveAccountWithResultHandler:(/*^block*/id)arg2 ;
-(void)getSubscriptionEntitlementsIgnoreCaches:(BOOL)arg1 forActiveAccountWithResultAndExpiryHandler:(/*^block*/id)arg2 ;
-(void)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler:(/*^block*/id)arg1 ;
-(void)getSubscriptionEntitlementsForActiveAccountWithResultHandler:(/*^block*/id)arg1 ;
-(void)getSubscriptionEntitlementsForActiveAccountWithResultAndExpiryHandler:(/*^block*/id)arg1 ;
-(void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(BOOL)arg2 withResultHandler:(/*^block*/id)arg3 ;
@end
