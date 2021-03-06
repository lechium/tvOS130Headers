/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAML-Structs.h>
#import <SAML/SAMLBaseElement.h>

@class NSString, NSNumber, NSArray;

@interface SAMLSignedInfo : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * canonicalizationMethod; 
@property (nonatomic,readonly) NSNumber * signatureMethodLength; 
@property (nonatomic,readonly) NSString * signatureMethod; 
@property (nonatomic,readonly) NSArray * references; 
+(id)createElement:(id*)arg1 ;
-(NSString *)identifier;
-(NSString *)signatureMethod;
-(NSArray *)references;
-(xmlNode*)xmlNode:(id*)arg1 ;
-(NSString *)canonicalizationMethod;
-(NSNumber *)signatureMethodLength;
@end

