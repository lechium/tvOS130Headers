/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:50 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ABCountry : NSObject {

	NSString* _countryCode;
	NSString* _countryName;
	NSString* _phoneticCountryName;

}

@property (nonatomic,copy) NSString * countryCode;                      //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * countryName;                      //@synthesize countryName=_countryName - In the implementation block
@property (nonatomic,copy) NSString * phoneticCountryName;              //@synthesize phoneticCountryName=_phoneticCountryName - In the implementation block
-(NSString *)countryCode;
-(void)setCountryName:(NSString *)arg1 ;
-(NSString *)countryName;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)phoneticCountryName;
-(void)setPhoneticCountryName:(NSString *)arg1 ;
@end
