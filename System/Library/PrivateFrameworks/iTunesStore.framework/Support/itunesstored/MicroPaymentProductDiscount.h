/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, MicroPaymentProductSubscriptionPeriod, NSString;

@interface MicroPaymentProductDiscount : NSObject {

	NSNumber* _price;
	MicroPaymentProductSubscriptionPeriod* _subscriptionPeriod;
	unsigned long long _numberOfPeriods;
	unsigned long long _paymentMode;
	unsigned long long _type;
	NSString* _identifier;

}

@property (nonatomic,copy) NSNumber * price;                                                          //@synthesize price=_price - In the implementation block
@property (nonatomic,retain) MicroPaymentProductSubscriptionPeriod * subscriptionPeriod;              //@synthesize subscriptionPeriod=_subscriptionPeriod - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPeriods;                                      //@synthesize numberOfPeriods=_numberOfPeriods - In the implementation block
@property (assign,nonatomic) unsigned long long paymentMode;                                          //@synthesize paymentMode=_paymentMode - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                                   //@synthesize identifier=_identifier - In the implementation block
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSNumber *)price;
-(void)setPrice:(NSNumber *)arg1 ;
-(MicroPaymentProductSubscriptionPeriod *)subscriptionPeriod;
-(unsigned long long)numberOfPeriods;
-(unsigned long long)paymentMode;
-(void)setPaymentMode:(unsigned long long)arg1 ;
-(void)setNumberOfPeriods:(unsigned long long)arg1 ;
-(void)setSubscriptionPeriod:(MicroPaymentProductSubscriptionPeriod *)arg1 ;
-(id)copyProductDiscount;
@end
