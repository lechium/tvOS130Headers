/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBookLegacy/AddressBookLegacy-Structs.h>
@class NSString;

@interface ABPhoneNumber : NSObject {

	SCD_Struct_AB2 _decomposedPhoneNumber;
	char* _phoneNumberBytes;
	NSString* _lastFour;
	NSString* _originalStringValue;

}

@property (readonly) SCD_Struct_AB2* decomposedPhoneNumberPointer; 
@property (readonly) NSString * lastFour;                                       //@synthesize lastFour=_lastFour - In the implementation block
@property (readonly) NSString * originalStringValue;                            //@synthesize originalStringValue=_originalStringValue - In the implementation block
@property (readonly) char* normalizedPhoneChars; 
-(void)dealloc;
-(id)initWithPhoneNumberString:(id)arg1 countryCode:(id)arg2 ;
-(SCD_Struct_AB2*)decomposedPhoneNumberPointer;
-(char*)normalizedPhoneChars;
-(NSString *)lastFour;
-(NSString *)originalStringValue;
@end
