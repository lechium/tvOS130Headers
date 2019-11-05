/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKAccountDetails.h>

@class NSDate, NSString, NSTimeZone, NSSet, NSURL, PKCreditAccountSummary, PKCreditAccountRates;

@interface PKCreditAccountDetails : PKAccountDetails {

	BOOL _termsAcceptanceRequired;
	NSDate* _lastUpdatedDate;
	NSDate* _createdDate;
	NSString* _countryCode;
	NSString* _currencyCode;
	NSTimeZone* _productTimeZone;
	NSSet* _physicalCards;
	NSSet* _virtualCards;
	NSString* _termsIdentifier;
	NSURL* _termsURL;
	NSURL* _associatedPassURL;
	NSString* _associatedPassTypeIdentifier;
	NSString* _associatedPassSerialNumber;
	long long _cardType;
	PKCreditAccountSummary* _accountSummary;
	PKCreditAccountRates* _rates;

}

@property (nonatomic,copy) NSDate * lastUpdatedDate;                               //@synthesize lastUpdatedDate=_lastUpdatedDate - In the implementation block
@property (nonatomic,copy) NSDate * createdDate;                                   //@synthesize createdDate=_createdDate - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                                 //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * currencyCode;                                //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,retain) NSTimeZone * productTimeZone;                         //@synthesize productTimeZone=_productTimeZone - In the implementation block
@property (nonatomic,copy) NSSet * physicalCards;                                  //@synthesize physicalCards=_physicalCards - In the implementation block
@property (nonatomic,copy) NSSet * virtualCards;                                   //@synthesize virtualCards=_virtualCards - In the implementation block
@property (assign,nonatomic) BOOL termsAcceptanceRequired;                         //@synthesize termsAcceptanceRequired=_termsAcceptanceRequired - In the implementation block
@property (nonatomic,copy) NSString * termsIdentifier;                             //@synthesize termsIdentifier=_termsIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * termsURL;                                       //@synthesize termsURL=_termsURL - In the implementation block
@property (nonatomic,copy) NSURL * associatedPassURL;                              //@synthesize associatedPassURL=_associatedPassURL - In the implementation block
@property (nonatomic,copy) NSString * associatedPassTypeIdentifier;                //@synthesize associatedPassTypeIdentifier=_associatedPassTypeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * associatedPassSerialNumber;                  //@synthesize associatedPassSerialNumber=_associatedPassSerialNumber - In the implementation block
@property (assign,nonatomic) long long cardType;                                   //@synthesize cardType=_cardType - In the implementation block
@property (nonatomic,retain) PKCreditAccountSummary * accountSummary;              //@synthesize accountSummary=_accountSummary - In the implementation block
@property (nonatomic,retain) PKCreditAccountRates * rates;                         //@synthesize rates=_rates - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)countryCode;
-(NSString *)currencyCode;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(PKCreditAccountRates *)rates;
-(void)setRates:(PKCreditAccountRates *)arg1 ;
-(NSDate *)lastUpdatedDate;
-(NSDate *)createdDate;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(long long)cardType;
-(void)setLastUpdatedDate:(NSDate *)arg1 ;
-(NSString *)termsIdentifier;
-(void)setTermsIdentifier:(NSString *)arg1 ;
-(void)ingestExtendedAccountDetails:(id)arg1 ;
-(BOOL)termsAcceptanceRequired;
-(NSTimeZone *)productTimeZone;
-(PKCreditAccountSummary *)accountSummary;
-(NSString *)associatedPassTypeIdentifier;
-(NSString *)associatedPassSerialNumber;
-(void)setProductTimeZone:(NSTimeZone *)arg1 ;
-(void)setCardType:(long long)arg1 ;
-(void)setVirtualCards:(NSSet *)arg1 ;
-(void)addOrUpdateVirtualCard:(id)arg1 ;
-(void)removeVirtualCard:(id)arg1 ;
-(id)virtualCardWithIdentifier:(id)arg1 ;
-(void)addOrUpdatePhysicalCard:(id)arg1 ;
-(NSSet *)physicalCards;
-(void)setPhysicalCards:(NSSet *)arg1 ;
-(NSSet *)virtualCards;
-(void)setTermsAcceptanceRequired:(BOOL)arg1 ;
-(NSURL *)termsURL;
-(void)setTermsURL:(NSURL *)arg1 ;
-(NSURL *)associatedPassURL;
-(void)setAssociatedPassURL:(NSURL *)arg1 ;
-(void)setAssociatedPassTypeIdentifier:(NSString *)arg1 ;
-(void)setAssociatedPassSerialNumber:(NSString *)arg1 ;
-(void)setAccountSummary:(PKCreditAccountSummary *)arg1 ;
@end
