/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class SAMLAssertion, NSString;

@interface SAMLAdvice : SAMLBaseElement

@property (nonatomic,retain) SAMLAssertion * assertion; 
@property (nonatomic,retain) NSString * assertionIDRef; 
@property (nonatomic,retain) NSString * assertionURIRef; 
+(id)createElement:(id*)arg1 ;
-(SAMLAssertion *)assertion;
-(void)setAssertion:(SAMLAssertion *)arg1 ;
-(NSString *)assertionURIRef;
-(NSString *)assertionIDRef;
-(void)setAssertionIDRef:(NSString *)arg1 ;
-(void)setAssertionURIRef:(NSString *)arg1 ;
@end

