/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKDocumentRequest : NSObject {

	unsigned long long _documentType;
	NSString* _countryCode;

}

@property (assign,nonatomic) unsigned long long documentType;              //@synthesize documentType=_documentType - In the implementation block
@property (assign,nonatomic) NSString * countryCode;                       //@synthesize countryCode=_countryCode - In the implementation block
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(unsigned long long)documentType;
-(void)setDocumentType:(unsigned long long)arg1 ;
@end

